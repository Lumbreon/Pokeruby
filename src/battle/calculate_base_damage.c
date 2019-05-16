#include "global.h"
#include "constants/abilities.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"
#include "battle.h"
#include "berry.h"
#include "data2.h"
#include "event_data.h"
#include "item.h"
#include "pokemon.h"
#include "ewram.h"

extern u16 gBattleTypeFlags;
extern struct BattlePokemon gBattleMons[4];
extern u16 move;
extern u8 gCritMultiplier;
extern u16 gBattleWeather;
extern struct BattleEnigmaBerry gEnigmaBerries[];
extern u16 gBattleMovePower;
extern u16 gTrainerBattleOpponent;
extern u16 gBattlerPartyIndexes[MAX_BATTLERS_COUNT];
u32 GetBattlerAbility(u8 battlerId);
u32 GetBattlerHoldEffect(u8 battlerId, bool32 checkNegating);
u32 GetBattlerHoldEffectParam(u8 battlerId);
u32 GetBattlerTotalSpeedStat(u8 battlerId);
u8 GetBattleMonMoveSlot(struct BattlePokemon *battleMon, u16 move);
u32 CountBattlerStatIncreases(u8 battlerId, bool32 countEvasionAcc);
u8 GetBattlerTurnOrderNum(u8 battlerId);
u32 GetFlingBaseDamage(u8 battlerId);

static const u8 sTrumpCardPowerTable[] = {200, 80, 60, 50, 40};
// Masks for getting PP Up count, also PP Max values
const u8 gPPUpReadMasks[] = {0x03, 0x0c, 0x30, 0xc0};

// Masks for setting PP Up count
const u8 gPPUpWriteMasks[] = {0xFC, 0xF3, 0xCF, 0x3F};

// Values added to PP Up count
const u8 gPPUpValues[] = {0x01, 0x04, 0x10, 0x40};

const u8 gStatStageRatios[][2] =
{
    {10, 40}, // -6
    {10, 35}, // -5
    {10, 30}, // -4
    {10, 25}, // -3
    {10, 20}, // -2
    {10, 15}, // -1
    {10, 10}, //  0
    {15, 10}, //  1
    {20, 10}, //  2
    {25, 10}, //  3
    {30, 10}, //  4
    {35, 10}, //  5
    {40, 10}  //  6
};

const u8 unknownGameFreakAbbrev_820825E[] = _("ゲーフリ");

const u8 gHoldEffectToType[][2] =
{
    {HOLD_EFFECT_BUG_POWER,      TYPE_BUG},
    {HOLD_EFFECT_STEEL_POWER,    TYPE_STEEL},
    {HOLD_EFFECT_GROUND_POWER,   TYPE_GROUND},
    {HOLD_EFFECT_ROCK_POWER,     TYPE_ROCK},
    {HOLD_EFFECT_GRASS_POWER,    TYPE_GRASS},
    {HOLD_EFFECT_DARK_POWER,     TYPE_DARK},
    {HOLD_EFFECT_FIGHTING_POWER, TYPE_FIGHTING},
    {HOLD_EFFECT_ELECTRIC_POWER, TYPE_ELECTRIC},
    {HOLD_EFFECT_WATER_POWER,    TYPE_WATER},
    {HOLD_EFFECT_FLYING_POWER,   TYPE_FLYING},
    {HOLD_EFFECT_POISON_POWER,   TYPE_POISON},
    {HOLD_EFFECT_ICE_POWER,      TYPE_ICE},
    {HOLD_EFFECT_GHOST_POWER,    TYPE_GHOST},
    {HOLD_EFFECT_PSYCHIC_POWER,  TYPE_PSYCHIC},
    {HOLD_EFFECT_FIRE_POWER,     TYPE_FIRE},
    {HOLD_EFFECT_DRAGON_POWER,   TYPE_DRAGON},
    {HOLD_EFFECT_NORMAL_POWER,   TYPE_NORMAL}
};

u8 GetBattlerSide(u8 bank);

#define APPLY_STAT_MOD(var, mon, stat, statIndex)                                   \
{                                                                                   \
    (var) = (stat) * (gStatStageRatios)[(mon)->statStages[(statIndex)]][0];         \
    (var) /= (gStatStageRatios)[(mon)->statStages[(statIndex)]][1];                 \
}

#define BADGE_BOOST(badge, stat, bank) ({ \
if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_BATTLE_TOWER | BATTLE_TYPE_EREADER_TRAINER))) \
{ \
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER) \
    && gTrainerBattleOpponent != SECRET_BASE_OPPONENT \
    && FlagGet(FLAG_BADGE0##badge##_GET) \
    && GetBattlerSide(bank) == B_SIDE_PLAYER) \
        (stat) = (110 * (stat)) / 100; \
} \
})

u32 CountBattlerStatIncreases(u8 battlerId, bool32 countEvasionAcc)
{
    u32 i;
    u32 count = 0;

    for (i = 0; i < 8; i++)
    {
        if ((i == STAT_STAGE_ACC || i == STAT_STAGE_EVASION) && !countEvasionAcc)
            continue;
        if (gBattleMons[battlerId].statStages[i] > 6) // Stat is increased.
            count += gBattleMons[battlerId].statStages[i] - 6;
    }

    return count;
}


s32 CalculateBaseDamage(struct BattlePokemon *attacker, struct BattlePokemon *defender, u32 move, u16 sideStatus, u16 powerOverride, u8 typeOverride, u8 bankAtk, u8 bankDef)
{
	struct Pokemon *rocky, *target;
    u32 i;
    u32 j;
    s32 damage = 0;
    s32 damageHelper;
    u8 type;
    u16 attack, defense;
    u16 spAttack, spDefense;
    u8 defenderHoldEffect;
    u8 defenderHoldEffectParam;
    u8 attackerHoldEffect;
    u8 attackerHoldEffectParam;
	u16 attackerability, defenderability;
    u16 atk_species, def_species;
    u32 atk_pid, def_pid;
	
    if (!GetBattlerSide(bankAtk))
        rocky = &gPlayerParty[gBattlerPartyIndexes[bankAtk]];
    else
        rocky = &gEnemyParty[gBattlerPartyIndexes[bankAtk]];

    if (!GetBattlerSide(bankDef))
        target = &gPlayerParty[gBattlerPartyIndexes[bankDef]];
    else
        target = &gEnemyParty[gBattlerPartyIndexes[bankDef]];

    atk_species = GetMonData(rocky, MON_DATA_SPECIES);
    atk_pid = GetMonData(rocky, MON_DATA_PERSONALITY);

    def_species = GetMonData(target, MON_DATA_SPECIES);
    def_pid = GetMonData(target, MON_DATA_PERSONALITY);

    if (!powerOverride)
        gBattleMovePower = gBattleMoves[move].power;
    else
        gBattleMovePower = powerOverride;

    if (!typeOverride)
        type = gBattleMoves[move].type;
    else
        type = typeOverride & 0x3F;

    attack = attacker->attack;
    defense = defender->defense;
    spAttack = attacker->spAttack;
    spDefense = defender->spDefense;

    
    attackerHoldEffect = GetBattlerHoldEffect(bankAtk, TRUE);
    attackerHoldEffectParam = GetBattlerHoldEffectParam(bankAtk);
    
    defenderHoldEffect = GetBattlerHoldEffect(bankDef, TRUE);
    defenderHoldEffectParam = GetBattlerHoldEffectParam(bankDef);
    
	attackerability = GetBattlerAbility(bankAtk);
	defenderability = GetBattlerAbility(bankDef);
    if (attackerability == ABILITY_HUGE_POWER || attackerability == ABILITY_PURE_POWER)
        attack *= 2;

    BADGE_BOOST(1, attack, bankAtk);
    BADGE_BOOST(5, defense, bankDef);
    BADGE_BOOST(7, spAttack, bankAtk);
    BADGE_BOOST(7, spDefense, bankDef);

    for (i = 0; i < 17; i++)
    {
        if (attackerHoldEffect == gHoldEffectToType[i][0]
            && type == gHoldEffectToType[i][1])
        {
            if (MOVE_IS_PHYSICAL(move))
                attack = (attack * (attackerHoldEffectParam + 100)) / 100;
            else
                spAttack = (spAttack * (attackerHoldEffectParam + 100)) / 100;
            break;
        }
    }

// Calculo de Poder base de los Movimientos	
	switch (gBattleMoves[move].effect)
	{
		case EFFECT_GYRO_BALL:
		gBattleMovePower = 25 * ((GetBattlerTotalSpeedStat(bankDef)) / GetBattlerTotalSpeedStat(bankAtk));
		if (gBattleMovePower > 150)
			gBattleMovePower = 150;
		break;
		case EFFECT_BRINE:
		if (defender->hp <= (defender->maxHP / 2))
			gBattleMovePower *= 2;
		break;
		case EFFECT_ASSURANCE:
		if (gProtectStructs[bankDef].physicalDmg || gProtectStructs[bankDef].specialDmg)
			gBattleMovePower *= 2;
		break;
		case EFFECT_WAKE_UP_SLAP:
		if (defender->status1 & STATUS_SLEEP)
			gBattleMovePower *= 2;
		break;
		case EFFECT_FLING:
		gBattleMovePower = GetFlingBaseDamage(bankAtk);
		break;
		case EFFECT_TRUMP_CARD:
		i = GetBattleMonMoveSlot(&gBattleMons[bankAtk], move);
        if (i != 4)
        {
			j = gBattleMons[bankAtk].pp[i];
            if (j >= ARRAY_COUNT(sTrumpCardPowerTable))
                gBattleMovePower = sTrumpCardPowerTable[ARRAY_COUNT(sTrumpCardPowerTable) - 1];
            else
                gBattleMovePower = sTrumpCardPowerTable[j];
        }
        break;
		case EFFECT_WRING_OUT:
        gBattleMovePower = 120 * defender->hp / defender->maxHP;
        break;
		case EFFECT_PUNISHMENT:
        gBattleMovePower = 60 + (CountBattlerStatIncreases(bankDef, FALSE) * 20);
        if (gBattleMovePower > 200)
            gBattleMovePower = 200;
        break;
		case EFFECT_STORED_POWER:
        gBattleMovePower = 20 + (CountBattlerStatIncreases(bankAtk, TRUE) * 20);
        break;
		case EFFECT_PAYBACK:
		if (GetBattlerTurnOrderNum(bankAtk) > GetBattlerTurnOrderNum(bankDef))
            gBattleMovePower *= 2;
		break;
	}
	
// Efectos de Objetos
    if (attackerHoldEffect == HOLD_EFFECT_CHOICE_BAND)
        attack = (15 * attack) / 10;
    if (attackerHoldEffect == HOLD_EFFECT_SOUL_DEW && !(gBattleTypeFlags & BATTLE_TYPE_BATTLE_TOWER) && (attacker->species == SPECIES_LATIAS || attacker->species == SPECIES_LATIOS))
        spAttack = (15 * spAttack) / 10;
    if (defenderHoldEffect == HOLD_EFFECT_SOUL_DEW && !(gBattleTypeFlags & BATTLE_TYPE_BATTLE_TOWER) && (defender->species == SPECIES_LATIAS || defender->species == SPECIES_LATIOS))
        spDefense = (15 * spDefense) / 10;
    if (attackerHoldEffect == HOLD_EFFECT_DEEP_SEA_TOOTH && attacker->species == SPECIES_CLAMPERL)
        spAttack *= 2;
    if (defenderHoldEffect == HOLD_EFFECT_DEEP_SEA_SCALE && defender->species == SPECIES_CLAMPERL)
        spDefense *= 2;
    if (attackerHoldEffect == HOLD_EFFECT_LIGHT_BALL && attacker->species == SPECIES_PIKACHU)
        spAttack *= 2, attack *= 2;
    if (defenderHoldEffect == HOLD_EFFECT_METAL_POWDER && defender->species == SPECIES_DITTO)
        defense *= 2;
    if (attackerHoldEffect == HOLD_EFFECT_THICK_CLUB && (attacker->species == SPECIES_CUBONE || attacker->species == SPECIES_MAROWAK))
        attack *= 2;

// Efectos de Habilidades(modificación de Poder)
	if (type == TYPE_ELECTRIC && AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, 0, 0xFD, 0))
        gBattleMovePower /= 2;
    if (type == TYPE_FIRE && AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, 0, 0xFE, 0))
        gBattleMovePower /= 2;
    if (type == TYPE_GRASS && attackerability == ABILITY_OVERGROW && attacker->hp <= (attacker->maxHP / 3))
        gBattleMovePower = (15 * gBattleMovePower) / 10;
    if (type == TYPE_FIRE && attackerability == ABILITY_BLAZE && attacker->hp <= (attacker->maxHP / 3))
        gBattleMovePower = (15 * gBattleMovePower) / 10;
    if (type == TYPE_WATER && attackerability == ABILITY_TORRENT && attacker->hp <= (attacker->maxHP / 3))
        gBattleMovePower = (15 * gBattleMovePower) / 10;
    if (type == TYPE_BUG && attackerability == ABILITY_SWARM && attacker->hp <= (attacker->maxHP / 3))
        gBattleMovePower = (15 * gBattleMovePower) / 10;
	if (gBattleMoves[move].power <= 60 && attackerability == ABILITY_TECHNICIAN)
		gBattleMovePower = (13 * gBattleMovePower) / 10;
	if (type == TYPE_NORMAL && attackerability == ABILITY_NORMALIZE)
        gBattleMovePower = (12 * gBattleMovePower) / 10;
	if (attackerability == ABILITY_RECKLESS && (gBattleMoves[move].effect == EFFECT_RECOIL_IF_MISS || gBattleMoves[move].effect == EFFECT_RECOIL || gBattleMoves[move].effect == EFFECT_DOUBLE_EDGE))
		gBattleMovePower = (12 * gBattleMovePower) / 10;

// Efectos de Habilidades(modificación de ataque)
	if (attackerability == ABILITY_RIVALRY && GetGenderFromSpeciesAndPersonality(atk_species, atk_pid) != 0xFF && GetGenderFromSpeciesAndPersonality(def_species, def_pid) != 0xFF)
	{
		if (GetGenderFromSpeciesAndPersonality(atk_species, atk_pid) == GetGenderFromSpeciesAndPersonality(def_species, def_pid))
			attack = (attack * 125) / 100;
		else
			attack = (attack * 15) / 20;
	}
	if (attackerability == ABILITY_SLOW_START && gDisableStructs[bankAtk].slowStartTimer != 0)
		attack /= 2;
    if (defenderability == ABILITY_THICK_FAT && (type == TYPE_FIRE || type == TYPE_ICE))
        spAttack /= 2, attack /= 2;
	if (defenderability == ABILITY_HEATPROOF && type == TYPE_FIRE)
        spAttack /= 2, attack /= 2;
    if (attackerability == ABILITY_HUSTLE)
        attack = (15 * attack) / 10;
    if (attackerability == ABILITY_PLUS && AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, ABILITY_MINUS, 0, 0))
        spAttack = (15 * spAttack) / 10;
    if (attackerability == ABILITY_MINUS && AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, ABILITY_PLUS, 0, 0))
        spAttack = (15 * spAttack) / 10;
    if (attackerability == ABILITY_GUTS && attacker->status1)
        attack = (15 * attack) / 10;
	if ((gBattleWeather & WEATHER_SUN_ANY) && AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, ABILITY_FLOWER_GIFT, 0, 0))
        attack = (15 * attack) / 10;
	if (attackerability == ABILITY_FLOWER_GIFT && (gBattleWeather & WEATHER_SUN_ANY))
        attack = (15 * attack) / 10;
	if (attackerability == ABILITY_SOLAR_POWER && (gBattleWeather & WEATHER_SUN_ANY))
        spAttack = (15 * spAttack) / 10;
	if (attackerability == ABILITY_IRON_FISTS && gBattleMoves[move].flags & F_IRON_FIST_BOOST)
		attack = (attack * 15) / 10;
	if (attackerability == ABILITY_SNIPER && gCritMultiplier == 2)
		gBattleMovePower = (gBattleMovePower * 15) / 10;

// Efectos de Habilidades(modificación de Defensa) 

	if (defenderability == ABILITY_MARVEL_SCALE && defender->status1)
        defense = (15 * defense) / 10;
    if (gBattleMoves[move].effect == EFFECT_EXPLOSION)
        defense /= 2;
	if ((gBattleWeather & WEATHER_SUN_ANY) && AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, ABILITY_FLOWER_GIFT, 0, 0))
        defense = (15 * defense) / 10;
	if (defenderability == ABILITY_FLOWER_GIFT && (gBattleWeather & WEATHER_SUN_ANY))
        spDefense = (15 * spDefense) / 10;

    if (MOVE_IS_PHYSICAL(move)) // type < TYPE_MYSTERY
    {
		if (defenderability == ABILITY_UNAWARE)
			damage = attack;
        else if (gCritMultiplier == 2)
        {
            if (attacker->statStages[STAT_STAGE_ATK] > 6)
                APPLY_STAT_MOD(damage, attacker, attack, STAT_STAGE_ATK)
            else
                damage = attack;
        }
        else
            APPLY_STAT_MOD(damage, attacker, attack, STAT_STAGE_ATK)

        damage = damage * gBattleMovePower;
        damage *= (2 * attacker->level / 5 + 2);

		if (attackerability == ABILITY_UNAWARE)
                damageHelper = defense;
        else if (gCritMultiplier == 2)
        {
            if (defender->statStages[STAT_STAGE_DEF] < 6)
                APPLY_STAT_MOD(damageHelper, defender, defense, STAT_STAGE_DEF)
            else
                damageHelper = defense;
        }
        else
            APPLY_STAT_MOD(damageHelper, defender, defense, STAT_STAGE_DEF)

        damage = damage / damageHelper;
        damage /= 50;

        if ((attacker->status1 & STATUS_BURN) && attackerability != ABILITY_GUTS)
            damage /= 2;

        if ((sideStatus & SIDE_STATUS_REFLECT) && gCritMultiplier == 1)
        {
            if ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE) && CountAliveMons(2) == 2)
                damage = 2 * (damage / 3);
            else
                damage /= 2;
        }

        if ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE) && gBattleMoves[move].target == 8 && CountAliveMons(2) == 2)
            damage /= 2;

        // moves always do at least 1 damage.
        if (damage == 0)
            damage = 1;
    }

    if (type == TYPE_MYSTERY)
        damage = 0; // is ??? type. does 0 damage.

    if (MOVE_IS_SPECIAL(move)) // type > TYPE_MYSTERY
    {
		if (defenderability == ABILITY_UNAWARE)
			damage = spAttack;
        else if (gCritMultiplier == 2)
        {
            if (attacker->statStages[STAT_STAGE_SPATK] > 6)
                APPLY_STAT_MOD(damage, attacker, spAttack, STAT_STAGE_SPATK)
            else
                damage = spAttack;
        }
        else
            APPLY_STAT_MOD(damage, attacker, spAttack, STAT_STAGE_SPATK)

        damage = damage * gBattleMovePower;
        damage *= (2 * attacker->level / 5 + 2);

		if (attackerability == ABILITY_UNAWARE)
                damageHelper = defense;
        else if (gCritMultiplier == 2)
        {
            if (defender->statStages[STAT_STAGE_SPDEF] < 6)
                APPLY_STAT_MOD(damageHelper, defender, spDefense, STAT_STAGE_SPDEF)
            else
                damageHelper = spDefense;
        }
        else
            APPLY_STAT_MOD(damageHelper, defender, spDefense, STAT_STAGE_SPDEF)

        damage = (damage / damageHelper);
        damage /= 50;

        if ((sideStatus & SIDE_STATUS_LIGHTSCREEN) && gCritMultiplier == 1)
        {
            if ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE) && CountAliveMons(2) == 2)
                damage = 2 * (damage / 3);
            else
                damage /= 2;
        }

        if ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE) && gBattleMoves[move].target == 8 && CountAliveMons(2) == 2)
            damage /= 2;

        // are effects of weather negated with cloud nine or air lock
        if (!AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, ABILITY_CLOUD_NINE, 0, 0)
            && !AbilityBattleEffects(ABILITYEFFECT_FIELD_SPORT, 0, ABILITY_AIR_LOCK, 0, 0))
        {
            if (gBattleWeather & WEATHER_RAIN_TEMPORARY)
            {
                switch (type)
                {
                case TYPE_FIRE:
                    damage /= 2;
                    break;
                case TYPE_WATER:
                    damage = (15 * damage) / 10;
                    break;
                }
            }

            // any weather except sun weakens solar beam
            if ((gBattleWeather & (WEATHER_RAIN_ANY | WEATHER_SANDSTORM_ANY | WEATHER_HAIL)) && move == MOVE_SOLAR_BEAM)
                damage /= 2;

            // sunny
            if (gBattleWeather & WEATHER_SUN_ANY)
            {
                switch (type)
                {
                case TYPE_FIRE:
                    damage = (15 * damage) / 10;
                    break;
                case TYPE_WATER:
                    damage /= 2;
                    break;
                }
            }
        }

        // flash fire triggered
        if ((eFlashFireArr.arr[bankAtk] & 1) && type == TYPE_FIRE)
            damage = (15 * damage) / 10;
    }

    return damage + 2;
}

u32 GetFlingBaseDamage(u8 battlerId)
{
	u32 item = gBattleMons[battlerId].item;
	u8 damage = 30;
	switch (item)
	{
	//	case ITEM_IRON_BALL:
	//	damage = 130;
	//	break;
		
		case ITEM_HARD_STONE:
		damage = 100;
		break;
		
		case ITEM_DEEP_SEA_TOOTH:
		case ITEM_THICK_CLUB:
	//	case ITEM_SPOOKY_PLATE ... ITEM_FAIRY_PLATE:
	//	case ITEM_GRIP_CLAW:
		damage = 90;
		break;
		
		case ITEM_QUICK_CLAW:
	//	case ITEM_ELECTRIZER:
	//	case ITEM_RAZOR_CLAW:
	//	case ITEM_MAGMATIZER:
	//	case ITEM_DAWN_STONE:
	//	case ITEM_SHINY_STONE:
	//	case ITEM_DUSK_STONE:
	//	case ITEM_OVAL_STONE:
	//	case ITEM_TOXIC_STAR:
		damage = 80;
		break;
		
	//	case ITEM_POWER_LENS:
	//	case ITEM_POWER_BRACER:
	//	case ITEM_POWER_ANKLET:
	//	case ITEM_POWER_BELT:
	//	case ITEM_POWER_WEIGHT:
	//	case ITEM_POWER_BAND:
	//	case ITEM_COLD_DRIVE:
	//	case ITEM_FIRE_DRIVE:
	//	case ITEM_AQUA_DRIVE:
	//	case ITEM_THUNDER_DRIVE:
	//	case ITEM_POISON_ARROW:
		case ITEM_DRAGON_FANG:
		damage = 70;
		break;
		
		case ITEM_MACHO_BRACE:
	//	case ITEM_ROCKY_HELMET:
	//	case ITEM_ADAMANT_ORB:
	//	case ITEM_GRISEOUS_ORB:
	//	case ITEM_LUSTROUS_ORB:
		case ITEM_STICK:
	//	case ITEM_HEAT_ROCK:
	//	case ITEM_DAMP_ROCK:
		damage = 60;
		break;
		
	//	case ITEM_DOBIOUS_DISC:
		case ITEM_SHARP_BEAK:
		damage = 50;
		break;
		
	//	case ITEM_ICY_ROCK:
		case ITEM_LUCKY_PUNCH:
	//	case ITEM_EVIOLITE:
		damage = 40;
		break;
	}
	return damage;
}
		