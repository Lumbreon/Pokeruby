#include "pokemon_menu.h"
#include "party_menu.h"
#include "global.h"
#include "braille_puzzles.h"
#include "field_effect.h"
#include "pokemon.h"
#include "rom6.h"
#include "script.h"
#include "task.h"
#include "text.h"

static void sub_811AA18(void);
static void sub_811AA38(void);
static void sub_811AA9C(void);

extern u32 gUnknown_0202FF84[];

extern u8 gLastFieldPokeMenuOpened;
extern u16 gScriptResult;
extern void (*gUnknown_0300485C)(void);
extern void (*gUnknown_03005CE4)(void);

extern u8 UseStrengthScript[];

bool8 SetUpFieldMove_Strength(void)
{
    if (ShouldDoBrailleStrengthEffect())
    {
        gScriptResult = gLastFieldPokeMenuOpened;
        gUnknown_0300485C = sub_808AB90;
        gUnknown_03005CE4 = sub_811AA38;
    }
    else
    {
        if (npc_before_player_of_type(87) != TRUE)
            return 0;
        gScriptResult = gLastFieldPokeMenuOpened;
        gUnknown_0300485C = sub_808AB90;
        gUnknown_03005CE4 = sub_811AA18;
    }

    return TRUE;
}

static void sub_811AA18(void)
{
    gUnknown_0202FF84[0] = gLastFieldPokeMenuOpened;
    ScriptContext1_SetupScript(UseStrengthScript);
}

static void sub_811AA38(void)
{
    gUnknown_0202FF84[0] = gLastFieldPokeMenuOpened;
    FieldEffectStart(40);
}

bool8 FldEff_UseStrength(void)
{
    u8 taskId = oei_task_add();

    gTasks[taskId].data[8] = (u32)sub_811AA9C >> 16;
    gTasks[taskId].data[9] = (u32)sub_811AA9C;
    GetMonNickname(&gPlayerParty[gUnknown_0202FF84[0]], gStringVar1);
    return FALSE;
}

static void sub_811AA9C(void)
{
    if (ShouldDoBrailleStrengthEffect())
    {
        DoBrailleStrengthEffect();
    }
    else
    {
        FieldEffectActiveListRemove(40);
        EnableBothScriptContexts();
    }
}
