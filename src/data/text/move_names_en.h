const u8 gMoveNames[][13] = {
    [MOVE_NONE] = _("-$$$$$"),
    [MOVE_POUND] = _("Destructor"),
    [MOVE_KARATE_CHOP] = _("Golpe Karate"),
    [MOVE_DOUBLE_SLAP] = _("Doblebofeton"),
    [MOVE_COMET_PUNCH] = _("Puño Cometa"),
    [MOVE_MEGA_PUNCH] = _("Megapuño"),
    [MOVE_PAY_DAY] = _("Día de Pago"),
    [MOVE_FIRE_PUNCH] = _("Puño Fuego"),
    [MOVE_ICE_PUNCH] = _("Puño Hielo"),
    [MOVE_THUNDER_PUNCH] = _("Puño Trueno"),
    [MOVE_SCRATCH] = _("Arañazo"),
    [MOVE_VICE_GRIP] = _("Agarre"),
    [MOVE_GUILLOTINE] = _("Guillotina"),
    [MOVE_RAZOR_WIND] = _("V. Cortante"),
    [MOVE_SWORDS_DANCE] = _("Danza Espada"),
    [MOVE_CUT] = _("Corte"),
    [MOVE_GUST] = _("Tornado"),
    [MOVE_WING_ATTACK] = _("Ataque Ala"),
    [MOVE_WHIRLWIND] = _("Remolino"),
    [MOVE_FLY] = _("Vuelo"),
    [MOVE_BIND] = _("Atadura"),
    [MOVE_SLAM] = _("Atizar"),
    [MOVE_VINE_WHIP] = _("Latigo Cepa"),
    [MOVE_STOMP] = _("Pisotón"),
    [MOVE_DOUBLE_KICK] = _("Doble Patada"),
    [MOVE_MEGA_KICK] = _("Megapatada"),
    [MOVE_JUMP_KICK] = _("Patada Salto"),
    [MOVE_ROLLING_KICK] = _("Patada giro"),
    [MOVE_SAND_ATTACK] = _("Ataque Arena"),
    [MOVE_HEADBUTT] = _("Golpe Cabeza"),
    [MOVE_HORN_ATTACK] = _("Cornada"),
    [MOVE_FURY_ATTACK] = _("Ataque Furia"),
    [MOVE_HORN_DRILL] = _("Perforador"),
    [MOVE_TACKLE] = _("Embestida"),
    [MOVE_BODY_SLAM] = _("Golpe Cuerpo"),
    [MOVE_WRAP] = _("Repetición"),
    [MOVE_TAKE_DOWN] = _("Derribo"),
    [MOVE_THRASH] = _("Golpe"),
    [MOVE_DOUBLE_EDGE] = _("Doble Filo"),
    [MOVE_TAIL_WHIP] = _("Coletazo"),
    [MOVE_POISON_STING] = _("Picotazo Ven"),
    [MOVE_TWINEEDLE] = _("Doble Ataque"),
    [MOVE_PIN_MISSILE] = _("Pin Misíl"),
    [MOVE_LEER] = _("Malicioso"),
    [MOVE_BITE] = _("Mordisco"),
    [MOVE_GROWL] = _("Gruñido"),
    [MOVE_ROAR] = _("Rugido"),
    [MOVE_SING] = _("Canto"),
    [MOVE_SUPERSONIC] = _("Supersonico"),
    [MOVE_SONIC_BOOM] = _("Bomba Sónica"),
    [MOVE_DISABLE] = _("Anulación"),
    [MOVE_ACID] = _("Ácido"),
    [MOVE_EMBER] = _("Brasas"),
    [MOVE_FLAMETHROWER] = _("Lanzallamas"),
    [MOVE_MIST] = _("Neblina"),
    [MOVE_WATER_GUN] = _("Pistola Agua"),
    [MOVE_HYDRO_PUMP] = _("Hidrobomba"),
    [MOVE_SURF] = _("Surf"),
    [MOVE_ICE_BEAM] = _("Rayo Hielo"),
    [MOVE_BLIZZARD] = _("Ventisca"),
    [MOVE_PSYBEAM] = _("Psicorrayo"),
    [MOVE_BUBBLE_BEAM] = _("Rayo Burbuja"),
    [MOVE_AURORA_BEAM] = _("Rayo Aurora"),
    [MOVE_HYPER_BEAM] = _("Hiperrayo"),
    [MOVE_PECK] = _("Picotazo"),
    [MOVE_DRILL_PECK] = _("Pico Taladro"),
    [MOVE_SUBMISSION] = _("Sumisión"),
    [MOVE_LOW_KICK] = _("Patada Baja"),
    [MOVE_COUNTER] = _("Contraataque"),
    [MOVE_SEISMIC_TOSS] = _("Mov. Sísmico"),
    [MOVE_STRENGTH] = _("Fuerza"),
    [MOVE_ABSORB] = _("Absorber"),
    [MOVE_MEGA_DRAIN] = _("Mega agotar"),
    [MOVE_LEECH_SEED] = _("Drenadoras"),
    [MOVE_GROWTH] = _("Crecimiento"),
    [MOVE_RAZOR_LEAF] = _("Hojas Navaja"),
    [MOVE_SOLAR_BEAM] = _("Rayo Solar"),
    [MOVE_POISON_POWDER] = _("Polvo Veneno"),
    [MOVE_STUN_SPORE] = _("Paralizador"),
    [MOVE_SLEEP_POWDER] = _("Somnífero"),
    [MOVE_PETAL_DANCE] = _("Danza Petalo"),
    [MOVE_STRING_SHOT] = _("Dip. Demora"),
    [MOVE_DRAGON_RAGE] = _("Furia Dragón"),
    [MOVE_FIRE_SPIN] = _("Giro Fuego"),
    [MOVE_THUNDER_SHOCK] = _("Impactrueno"),
    [MOVE_THUNDERBOLT] = _("Atactrueno"),
    [MOVE_THUNDER_WAVE] = _("Onda Trueno"),
    [MOVE_THUNDER] = _("Trueno"),
    [MOVE_ROCK_THROW] = _("Lanzarrocas"),
    [MOVE_EARTHQUAKE] = _("Terremoto"),
    [MOVE_FISSURE] = _("Fisura"),
    [MOVE_DIG] = _("Excavar"),
    [MOVE_TOXIC] = _("Toxico"),
    [MOVE_CONFUSION] = _("Confusión"),
    [MOVE_PSYCHIC] = _("Psiquico"),
    [MOVE_HYPNOSIS] = _("Hipnosis"),
    [MOVE_MEDITATE] = _("Meditación"),
    [MOVE_AGILITY] = _("Agilidad"),
    [MOVE_QUICK_ATTACK] = _("At. Rápido"),
    [MOVE_RAGE] = _("Furia"),
    [MOVE_TELEPORT] = _("Teletransp"),
    [MOVE_NIGHT_SHADE] = _("Tinieblas"),
    [MOVE_MIMIC] = _("Mimico"),
    [MOVE_SCREECH] = _("Chirrido"),
    [MOVE_DOUBLE_TEAM] = _("Doble Equipo"),
    [MOVE_RECOVER] = _("Recuperación"),
    [MOVE_HARDEN] = _("Fortaleza"),
    [MOVE_MINIMIZE] = _("Reducción"),
    [MOVE_SMOKESCREEN] = _("Pantallahumo"),
    [MOVE_CONFUSE_RAY] = _("Rayo Confuso"),
    [MOVE_WITHDRAW] = _("Refugio"),
    [MOVE_DEFENSE_CURL] = _("Rizo Defensa"),
    [MOVE_BARRIER] = _("Barrera"),
    [MOVE_LIGHT_SCREEN] = _("Pantalla Luz"),
    [MOVE_HAZE] = _("Niebla"),
    [MOVE_REFLECT] = _("Reflejo"),
    [MOVE_FOCUS_ENERGY] = _("Foco Energía"),
    [MOVE_BIDE] = _("Venganza"),
    [MOVE_METRONOME] = _("Metronomo"),
    [MOVE_MIRROR_MOVE] = _("Mov. Espejo"),
    [MOVE_SELF_DESTRUCT] = _("Autodestruc"),
    [MOVE_EGG_BOMB] = _("Bomba Huevo"),
    [MOVE_LICK] = _("Lengüetazo"),
    [MOVE_SMOG] = _("Polución"),
    [MOVE_SLUDGE] = _("Residuos"),
    [MOVE_BONE_CLUB] = _("Hueso Palo"),
    [MOVE_FIRE_BLAST] = _("Llamarada"),
    [MOVE_WATERFALL] = _("Cascada"),
    [MOVE_CLAMP] = _("Tenaza"),
    [MOVE_SWIFT] = _("Rapidez"),
    [MOVE_SKULL_BASH] = _("Cabezazo"),
    [MOVE_SPIKE_CANNON] = _("Clavo Cañón"),
    [MOVE_CONSTRICT] = _("Restricción"),
    [MOVE_AMNESIA] = _("Amnesia"),
    [MOVE_KINESIS] = _("Kinético"),
    [MOVE_SOFT_BOILED] = _("Amortiguador"),
    [MOVE_HI_JUMP_KICK] = _("Pat. S. Alta"),
    [MOVE_GLARE] = _("Deslumbrar"),
    [MOVE_DREAM_EATER] = _("Come Sueños"),
    [MOVE_POISON_GAS] = _("Gas Venenoso"),
    [MOVE_BARRAGE] = _("Presa"),
    [MOVE_LEECH_LIFE] = _("Chupavidas"),
    [MOVE_LOVELY_KISS] = _("Beso Amoroso"),
    [MOVE_SKY_ATTACK] = _("Ataque Aéreo"),
    [MOVE_TRANSFORM] = _("Transform"),
    [MOVE_BUBBLE] = _("Burbuja"),
    [MOVE_DIZZY_PUNCH] = _("Puño Mareo"),
    [MOVE_SPORE] = _("Espora"),
    [MOVE_FLASH] = _("Destell"),
    [MOVE_PSYWAVE] = _("Psicoonda"),
    [MOVE_SPLASH] = _("Salpicadura"),
    [MOVE_ACID_ARMOR] = _("Arm. Ácida"),
    [MOVE_CRABHAMMER] = _("Martillazo"),
    [MOVE_EXPLOSION] = _("Explosión"),
    [MOVE_FURY_SWIPES] = _("Golpes Furia"),
    [MOVE_BONEMERANG] = _("Huesomerang"),
    [MOVE_REST] = _("Descanso"),
    [MOVE_ROCK_SLIDE] = _("Avalancha"),
    [MOVE_HYPER_FANG] = _("Hip.Colmillo"),
    [MOVE_SHARPEN] = _("Afilar"),
    [MOVE_CONVERSION] = _("Conversión"),
    [MOVE_TRI_ATTACK] = _("Tri Ataque"),
    [MOVE_SUPER_FANG] = _("Super Diente"),
    [MOVE_SLASH] = _("Cuchillada"),
    [MOVE_SUBSTITUTE] = _("Sustituto"),
    [MOVE_STRUGGLE] = _("Forcejeo"),
    [MOVE_SKETCH] = _("Esquema"),
    [MOVE_TRIPLE_KICK] = _("Triplepatada"),
    [MOVE_THIEF] = _("Ladrón"),
    [MOVE_SPIDER_WEB] = _("Telaraña"),
    [MOVE_MIND_READER] = _("Telépata"),
    [MOVE_NIGHTMARE] = _("Pesadilla"),
    [MOVE_FLAME_WHEEL] = _("Rueda Fuego"),
    [MOVE_SNORE] = _("Ronquido"),
    [MOVE_CURSE] = _("Maldición"),
    [MOVE_FLAIL] = _("Azote"),
    [MOVE_CONVERSION_2] = _("Conversión 2"),
    [MOVE_AEROBLAST] = _("Aerochorro"),
    [MOVE_COTTON_SPORE] = _("Esporalgodón"),
    [MOVE_REVERSAL] = _("Inversión"),
    [MOVE_SPITE] = _("Rencor"),
    [MOVE_POWDER_SNOW] = _("Nieve Polvo"),
    [MOVE_PROTECT] = _("Protección"),
    [MOVE_MACH_PUNCH] = _("Ultrapuño"),
    [MOVE_SCARY_FACE] = _("Cara Susto"),
    [MOVE_FAINT_ATTACK] = _("Finta"),
    [MOVE_SWEET_KISS] = _("Beso Dulce"),
    [MOVE_BELLY_DRUM] = _("Tambor"),
    [MOVE_SLUDGE_BOMB] = _("Bomba Lodo"),
    [MOVE_MUD_SLAP] = _("Bofetón Lodo"),
    [MOVE_OCTAZOOKA] = _("Pulpo cañón"),
    [MOVE_SPIKES] = _("Púas"),
    [MOVE_ZAP_CANNON] = _("Electrocañon"),
    [MOVE_FORESIGHT] = _("Profesía"),
    [MOVE_DESTINY_BOND] = _("Mismodestino"),
    [MOVE_PERISH_SONG] = _("Canto Mortal"),
    [MOVE_ICY_WIND] = _("Viento Hielo"),
    [MOVE_DETECT] = _("Detección"),
    [MOVE_BONE_RUSH] = _("Ataque Óseo"),
    [MOVE_LOCK_ON] = _("Fijar Blanco"),
    [MOVE_OUTRAGE] = _("Enfado"),
    [MOVE_SANDSTORM] = _("Torm. Arena"),
    [MOVE_GIGA_DRAIN] = _("Gigadrenado"),
    [MOVE_ENDURE] = _("Aguante"),
    [MOVE_CHARM] = _("Encanto"),
    [MOVE_ROLLOUT] = _("Desenrrollar"),
    [MOVE_FALSE_SWIPE] = _("Falsotrazo"),
    [MOVE_SWAGGER] = _("Contoneo"),
    [MOVE_MILK_DRINK] = _("Batido"),
    [MOVE_SPARK] = _("Chispa"),
    [MOVE_FURY_CUTTER] = _("Corte Furia"),
    [MOVE_STEEL_WING] = _("Ala de Acero"),
    [MOVE_MEAN_LOOK] = _("Mal de Ojo"),
    [MOVE_ATTRACT] = _("Atracción"),
    [MOVE_SLEEP_TALK] = _("Sonambulo"),
    [MOVE_HEAL_BELL] = _("Campana Cura"),
    [MOVE_RETURN] = _("Retroceso"),
    [MOVE_PRESENT] = _("Presente"),
    [MOVE_FRUSTRATION] = _("Frustración"),
    [MOVE_SAFEGUARD] = _("Velo Sagrado"),
    [MOVE_PAIN_SPLIT] = _("Divide Dolor"),
    [MOVE_SACRED_FIRE] = _("Fuegosagrado"),
    [MOVE_MAGNITUDE] = _("Magnitud"),
    [MOVE_DYNAMIC_PUNCH] = _("Puñodinamico"),
    [MOVE_MEGAHORN] = _("Megacuerno"),
    [MOVE_DRAGON_BREATH] = _("Dragoaliento"),
    [MOVE_BATON_PASS] = _("Relevo"),
    [MOVE_ENCORE] = _("Otra Vez"),
    [MOVE_PURSUIT] = _("Peresecución"),
    [MOVE_RAPID_SPIN] = _("Giro Rápido"),
    [MOVE_SWEET_SCENT] = _("Dulce Aroma"),
    [MOVE_IRON_TAIL] = _("Cola Ferrea"),
    [MOVE_METAL_CLAW] = _("Garra Metal"),
    [MOVE_VITAL_THROW] = _("Tiro Vital"),
    [MOVE_MORNING_SUN] = _("Sol Matinal"),
    [MOVE_SYNTHESIS] = _("Sintesis"),
    [MOVE_MOONLIGHT] = _("Luz Lunar"),
    [MOVE_HIDDEN_POWER] = _("Poder Oculto"),
    [MOVE_CROSS_CHOP] = _("Tajo Cruzado"),
    [MOVE_TWISTER] = _("Ciclon"),
    [MOVE_RAIN_DANCE] = _("Danza Lluvia"),
    [MOVE_SUNNY_DAY] = _("Día Soleado"),
    [MOVE_CRUNCH] = _("Triturar"),
    [MOVE_MIRROR_COAT] = _("Manto Espejo"),
    [MOVE_PSYCH_UP] = _("Más Psique"),
    [MOVE_EXTREME_SPEED] = _("Vel. Extrema"),
    [MOVE_ANCIENT_POWER] = _("Poder Pasado"),
    [MOVE_SHADOW_BALL] = _("Bola Sombra"),
    [MOVE_FUTURE_SIGHT] = _("Premonición"),
    [MOVE_ROCK_SMASH] = _("Golpe Roca"),
    [MOVE_WHIRLPOOL] = _("Torbellino"),
    [MOVE_BEAT_UP] = _("Paliza"),
    [MOVE_FAKE_OUT] = _("Sorpresa"),
    [MOVE_UPROAR] = _("Alboroto"),
    [MOVE_STOCKPILE] = _("Reserva"),
    [MOVE_SPIT_UP] = _("Escupir"),
    [MOVE_SWALLOW] = _("Tragar"),
    [MOVE_HEAT_WAVE] = _("Onda Calor"),
    [MOVE_HAIL] = _("Granizo"),
    [MOVE_TORMENT] = _("Tormento"),
    [MOVE_FLATTER] = _("Camelo"),
    [MOVE_WILL_O_WISP] = _("Fuego Fatuo"),
    [MOVE_MEMENTO] = _("Legado"),
    [MOVE_FACADE] = _("Imagen"),
    [MOVE_FOCUS_PUNCH] = _("Puño Certero"),
    [MOVE_SMELLING_SALT] = _("Estimulo"),
    [MOVE_FOLLOW_ME] = _("Señuelo"),
    [MOVE_NATURE_POWER] = _("Adaptación"),
    [MOVE_CHARGE] = _("Carga"),
    [MOVE_TAUNT] = _("Mofa"),
    [MOVE_HELPING_HAND] = _("Refuerzo"),
    [MOVE_TRICK] = _("Truco"),
    [MOVE_ROLE_PLAY] = _("Imitación"),
    [MOVE_WISH] = _("Deseo"),
    [MOVE_ASSIST] = _("Ayuda"),
    [MOVE_INGRAIN] = _("Arraigo"),
    [MOVE_SUPERPOWER] = _("Superpoder"),
    [MOVE_MAGIC_COAT] = _("Capa Mágica"),
    [MOVE_RECYCLE] = _("Reciclar"),
    [MOVE_REVENGE] = _("Desquite"),
    [MOVE_BRICK_BREAK] = _("Demolición"),
    [MOVE_YAWN] = _("Bostezo"),
    [MOVE_KNOCK_OFF] = _("Desarme"),
    [MOVE_ENDEAVOR] = _("Esfuerzo"),
    [MOVE_ERUPTION] = _("Estallido"),
    [MOVE_SKILL_SWAP] = _("Interambio"),
    [MOVE_IMPRISON] = _("Cerca"),
    [MOVE_REFRESH] = _("Alivio"),
    [MOVE_GRUDGE] = _("Rabia"),
    [MOVE_SNATCH] = _("Robo"),
    [MOVE_SECRET_POWER] = _("Daño Secreto"),
    [MOVE_DIVE] = _("Buceo"),
    [MOVE_ARM_THRUST] = _("Empujón"),
    [MOVE_CAMOUFLAGE] = _("Camuflaje"),
    [MOVE_TAIL_GLOW] = _("Ráfaga"),
    [MOVE_LUSTER_PURGE] = _("Resplandor"),
    [MOVE_MIST_BALL] = _("Bola Niebla"),
    [MOVE_FEATHER_DANCE] = _("Danza Pluma"),
    [MOVE_TEETER_DANCE] = _("Danza Caos"),
    [MOVE_BLAZE_KICK] = _("Patada Ígnea"),
    [MOVE_MUD_SPORT] = _("Chapoteolodo"),
    [MOVE_ICE_BALL] = _("Bola Hielo"),
    [MOVE_NEEDLE_ARM] = _("Brazo Pincho"),
    [MOVE_SLACK_OFF] = _("Relajo"),
    [MOVE_HYPER_VOICE] = _("Vozarrón"),
    [MOVE_POISON_FANG] = _("Colm. Veneno"),
    [MOVE_CRUSH_CLAW] = _("Garra Brutal"),
    [MOVE_BLAST_BURN] = _("Anillo Ígneo"),
    [MOVE_HYDRO_CANNON] = _("Hidro Cañón"),
    [MOVE_METEOR_MASH] = _("Puño Meteoro"),
    [MOVE_ASTONISH] = _("Impresionar"),
    [MOVE_WEATHER_BALL] = _("Meteorobola"),
    [MOVE_AROMATHERAPY] = _("Aromaterapia"),
    [MOVE_FAKE_TEARS] = _("Llanto Falos"),
    [MOVE_AIR_CUTTER] = _("Aire Afilado"),
    [MOVE_OVERHEAT] = _("Sofoco"),
    [MOVE_ODOR_SLEUTH] = _("Rastreo"),
    [MOVE_ROCK_TOMB] = _("Tumba Rocas"),
    [MOVE_SILVER_WIND] = _("Viento Plata"),
    [MOVE_METAL_SOUND] = _("Eco Metálico"),
    [MOVE_GRASS_WHISTLE] = _("Silbato"),
    [MOVE_TICKLE] = _("Cosquillas"),
    [MOVE_COSMIC_POWER] = _("Masa Cósmica"),
    [MOVE_WATER_SPOUT] = _("Salpicar"),
    [MOVE_SIGNAL_BEAM] = _("Doble Rayo"),
    [MOVE_SHADOW_PUNCH] = _("Puño Sombra"),
    [MOVE_EXTRASENSORY] = _("Paranormal"),
    [MOVE_SKY_UPPERCUT] = _("Gancho Alto"),
    [MOVE_SAND_TOMB] = _("Bucle Arena"),
    [MOVE_SHEER_COLD] = _("Frio Polar"),
    [MOVE_MUDDY_WATER] = _("Agua Lodosa"),
    [MOVE_BULLET_SEED] = _("Bala Semilla"),
    [MOVE_AERIAL_ACE] = _("Golpe Aéreo"),
    [MOVE_ICICLE_SPEAR] = _("Carámbano"),
    [MOVE_IRON_DEFENSE] = _("Def. Ferrea"),
    [MOVE_BLOCK] = _("Bloqueo"),
    [MOVE_HOWL] = _("Aullido"),
    [MOVE_DRAGON_CLAW] = _("Garra Dragón"),
    [MOVE_FRENZY_PLANT] = _("Planta Feroz"),
    [MOVE_BULK_UP] = _("Corpulencia"),
    [MOVE_BOUNCE] = _("Bote"),
    [MOVE_MUD_SHOT] = _("Disp. Lodo"),
    [MOVE_POISON_TAIL] = _("Cola Veneno"),
    [MOVE_COVET] = _("Antojo"),
    [MOVE_VOLT_TACKLE] = _("Tac. Voltios"),
    [MOVE_MAGICAL_LEAF] = _("Hoja Mágica"),
    [MOVE_WATER_SPORT] = _("Hidrochorro"),
    [MOVE_CALM_MIND] = _("Paz Mental"),
    [MOVE_LEAF_BLADE] = _("Hoja Aguda"),
    [MOVE_DRAGON_DANCE] = _("Danza Dragón"),
    [MOVE_ROCK_BLAST] = _("Pedrada"),
    [MOVE_SHOCK_WAVE] = _("Onda Coque"),
    [MOVE_WATER_PULSE] = _("Hidropulso"),
    [MOVE_DOOM_DESIRE] = _("Deseo Oculto"),
    [MOVE_PSYCHO_BOOST] = _("Psicoataque"),
    [MOVE_ROOST] = _("Respiro"),
    [MOVE_GRAVITY] = _("Gravedad"),
    [MOVE_MIRACLE_EYE] = _("Gran Ojo"),
	[MOVE_WAKE_UP_SLAP] = _("Espabila"),
    [MOVE_HAMMER_ARM] = _("Machada"),
    [MOVE_GYRO_BALL] = _("Giro Bola"),
    [MOVE_HEALING_WISH] = _("Deseo Cura"),
    [MOVE_BRINE] = _("Salmuera"),
    [MOVE_NATURAL_GIFT] = _("Don Natural"),
    [MOVE_FEINT] = _("Finta"),
    [MOVE_PLUCK] = _("Picoteo"),
    [MOVE_TAILWIND] = _("Viento Afín"),
    [MOVE_ACUPRESSURE] = _("Acupresión"),
    [MOVE_METAL_BURST] = _("Rep. Metal"),
    [MOVE_U_TURN] = _("Ida y Vuelta"),
    [MOVE_CLOSE_COMBAT] = _("A Bocajarro"),
    [MOVE_PAYBACK] = _("Vendetta"),
    [MOVE_ASSURANCE] = _("Buena Baza"),
    [MOVE_EMBARGO] = _("Embargo"),
    [MOVE_FLING] = _("Lanzamiento"),
    [MOVE_PSYCHO_SHIFT] = _("Psico Cambio"),
    [MOVE_TRUMP_CARD] = _("As Oculto"),
    [MOVE_HEAL_BLOCK] = _("Bloqueo Cura"),
    [MOVE_WRING_OUT] = _("Estrujón"),
    [MOVE_POWER_TRICK] = _("Truco Fuerza"),
    [MOVE_GASTRO_ACID] = _("Bilis"),
    [MOVE_LUCKY_CHANT] = _("Conjuro"),
    [MOVE_ME_FIRST] = _("Yo Primero"),
    [MOVE_COPYCAT] = _("Copión"),
    [MOVE_POWER_SWAP] = _("Power Swap"),
    [MOVE_GUARD_SWAP] = _("Guard Swap"),
    [MOVE_PUNISHMENT] = _("Castigo"),
    [MOVE_LAST_RESORT] = _("Ultima Baza"),
    [MOVE_WORRY_SEED] = _("Abatidoras"),
    [MOVE_SUCKER_PUNCH] = _("Golpe Bajo"),
    [MOVE_TOXIC_SPIKES] = _("Púas Tóxicas"),
    [MOVE_HEART_SWAP] = _("Heart Swap"),
    [MOVE_AQUA_RING] = _("Acua Aro"),
    [MOVE_MAGNET_RISE] = _("Levitón"),
    [MOVE_FLARE_BLITZ] = _("Envité Igneo"),
    [MOVE_FORCE_PALM] = _("Palmeo"),
    [MOVE_AURA_SPHERE] = _("Esfera Aural"),
    [MOVE_ROCK_POLISH] = _("Pulimento"),
    [MOVE_POISON_JAB] = _("Puya Nociva"),
    [MOVE_DARK_PULSE] = _("Pulso Umbrío"),
    [MOVE_NIGHT_SLASH] = _("Night Slash"),
    [MOVE_AQUA_TAIL] = _("Acua Cola"),
    [MOVE_SEED_BOMB] = _("Bomba Germen"),
    [MOVE_AIR_SLASH] = _("Air Slash"),
    [MOVE_X_SCISSOR] = _("Tijera X"),
    [MOVE_BUG_BUZZ] = _("Zumbido"),
    [MOVE_DRAGON_PULSE] = _("Pulso Dragón"),
    [MOVE_DRAGON_RUSH] = _("Carga Dragón"),
    [MOVE_POWER_GEM] = _("Joya de Luz"),
    [MOVE_DRAIN_PUNCH] = _("Puño Drenaje"),
    [MOVE_VACUUM_WAVE] = _("Onda Vacío"),
    [MOVE_FOCUS_BLAST] = _("Onda Certera"),
    [MOVE_ENERGY_BALL] = _("Energibola"),
    [MOVE_BRAVE_BIRD] = _("Pajaro Osado"),
    [MOVE_EARTH_POWER] = _("Tierra Viva"),
    [MOVE_SWITCHEROO] = _("Trapicheo"),
    [MOVE_GIGA_IMPACT] = _("Giga Impacto"),
    [MOVE_NASTY_PLOT] = _("Maquinación"),
    [MOVE_BULLET_PUNCH] = _("Puño Bala"),
    [MOVE_AVALANCHE] = _("Alud"),
    [MOVE_ICE_SHARD] = _("Chuzos"),
    [MOVE_SHADOW_CLAW] = _("Shadow Claw"),
    [MOVE_THUNDER_FANG] = _("Colm. Rayo"),
    [MOVE_ICE_FANG] = _("Colm. Hielo"),
    [MOVE_FIRE_FANG] = _("Colm. Fuego"),
    [MOVE_SHADOW_SNEAK] = _("Sombra Vil"),
    [MOVE_MUD_BOMB] = _("Bomba Fango"),
    [MOVE_PSYCHO_CUT] = _("Psico Corte"),
    [MOVE_ZEN_HEADBUTT] = _("Cabezazo Zen"),
    [MOVE_MIRROR_SHOT] = _("Disp. Espejo"),
    [MOVE_FLASH_CANNON] = _("Brillo Cañon"),
    [MOVE_ROCK_CLIMB] = _("Treparrocas"),
    [MOVE_DEFOG] = _("Despejar"),
    [MOVE_TRICK_ROOM] = _("Espacio Raro"),
    [MOVE_DRACO_METEOR] = _("Cometa Draco"),
    [MOVE_DISCHARGE] = _("Chispazo"),
    [MOVE_LAVA_PLUME] = _("Humareda"),
    [MOVE_LEAF_STORM] = _("Lluevehojas"),
    [MOVE_POWER_WHIP] = _("Latigazo"),
    [MOVE_ROCK_WRECKER] = _("Derribarroca"),
    [MOVE_CROSS_POISON] = _("Veneno X"),
    [MOVE_GUNK_SHOT] = _("Gunk Shot"),
    [MOVE_IRON_HEAD] = _("Cabezahierro"),
    [MOVE_MAGNET_BOMB] = _("Bomba Íman"),
    [MOVE_STONE_EDGE] = _("Roca Afilada"),
    [MOVE_CAPTIVATE] = _("Seducción"),
    [MOVE_STEALTH_ROCK] = _("Trampa Rocas"),
    [MOVE_GRASS_KNOT] = _("Hierba Lazo"),
    [MOVE_CHATTER] = _("Cháchara"),
    [MOVE_JUDGMENT] = _("Sentencia"),
    [MOVE_BUG_BITE] = _("Picadura"),
    [MOVE_CHARGE_BEAM] = _("Rayo Carga"),
    [MOVE_WOOD_HAMMER] = _("Mazazo"),
    [MOVE_AQUA_JET] = _("Acua Jet"),
    [MOVE_ATTACK_ORDER] = _("¡Al Ataque!"),
    [MOVE_DEFEND_ORDER] = _("¡A Defender!"),
    [MOVE_HEAL_ORDER] = _("Auxilio"),
    [MOVE_HEAD_SMASH] = _("Testarazo"),
    [MOVE_DOUBLE_HIT] = _("Golpe Doble"),
    [MOVE_ROAR_OF_TIME] = _("Distorción"),
    [MOVE_SPACIAL_REND] = _("Corte Vacío"),
    [MOVE_LUNAR_DANCE] = _("Danza Lunar"),
    [MOVE_CRUSH_GRIP] = _("Agarrón"),
    [MOVE_MAGMA_STORM] = _("Lluvia Ígnea"),
    [MOVE_DARK_VOID] = _("Brecha Negra"),
    [MOVE_SEED_FLARE] = _("Fogonazo"),
    [MOVE_OMINOUS_WIND] = _("Vientoaciago"),
    [MOVE_SHADOW_FORCE] = _("Golpe Umbrío"),
};
