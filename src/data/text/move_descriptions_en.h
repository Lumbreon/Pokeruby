#include "constants/moves.h"

static const u8 MoveDescription_Pound[] = _(
    "Golpea con las patas o\n"
    "la cola.");

static const u8 MoveDescription_KarateChop[] = _(
    "Da un golpe cortante.\n"
    "Suele ser crítico.");

static const u8 MoveDescription_DoubleSlap[] = _(
    "Abofetea de 2 a 5 veces\n"
    "seguidas.");

static const u8 MoveDescription_CometPunch[] = _(
    "Pega de 2 a 5 veces\n"
	"seguidas.");

static const u8 MoveDescription_MegaPunch[] = _(
    "Un puñetazo de gran\n"
	"potencia.");

static const u8 MoveDescription_PayDay[] = _(
    "Arroja monedas que\n"
    "luego recupera.");

static const u8 MoveDescription_FirePunch[] = _(
    "Puñetazo ardiente.\n"
    "Puede quemar.");

static const u8 MoveDescription_IcePunch[] = _(
    "Puñetazo helado.\n"
    "Puede congelar.");

static const u8 MoveDescription_ThunderPunch[] = _(
    "Puñetazo eléctrico.\n"
    "Puede paralizar.");

static const u8 MoveDescription_Scratch[] = _(
    "Araña con afiladas garras.");

static const u8 MoveDescription_ViceGrip[] = _(
    "Atrapa con potentes pinzas.");

static const u8 MoveDescription_Guillotine[] = _(
    "Pinzas que pueden derribar\n"
    "de un golpe.");

static const u8 MoveDescription_RazorWind[] = _(
    "1.er turno: prepara.\n"
    "2.º: ataca.");

static const u8 MoveDescription_SwordsDance[] = _(
    "Baile que mejora el Ataque.");

static const u8 MoveDescription_Cut[] = _(
    "Corta con garras, guadañas,\n"
    "etc.");

static const u8 MoveDescription_Gust[] = _(
    "Crea un tornado con las\n"
    "alas.");

static const u8 MoveDescription_WingAttack[] = _(
    "Golpea al objetivo con las\n"
    "alas.");

static const u8 MoveDescription_Whirlwind[] = _(
    "Se lleva al rival y termina\n"
    "el combate.");

static const u8 MoveDescription_Fly[] = _(
    "1.er turno: vuela.\n"
    "2.º: ataca.");

static const u8 MoveDescription_Bind[] = _(
    "Ata y oprime de 2 a 5\n"
    "turnos.");

static const u8 MoveDescription_Slam[] = _(
    "Golpea al enemigo con una\n"
    "cola.");

static const u8 MoveDescription_VineWhip[] = _(
    "Azota al enemigo con ramas\n"
    "finas.");

static const u8 MoveDescription_Stomp[] = _(
    "Tremendo pisotón que puede\n"
    "causar retroceso.");

static const u8 MoveDescription_DoubleKick[] = _(
    "Una patada doble.\n"
    "Golpea 2 veces.");

static const u8 MoveDescription_MegaKick[] = _(
    "Patada de extrema fuerza.");

static const u8 MoveDescription_JumpKick[] = _(
    "Si falla, dañará a quien lo\n"
    "usa.");

static const u8 MoveDescription_RollingKick[] = _(
    "Una patada rápida y\n"
    "circular.");

static const u8 MoveDescription_SandAttack[] = _(
    "Arroja arena a la cara y\n"
    "baja la Precisión.");

static const u8 MoveDescription_Headbutt[] = _(
    "Cabezazo que puede hacer\n"
    "retroceder al rival.");

static const u8 MoveDescription_HornAttack[] = _(
    "Ataca al enemigo con\n"
    "afilados cuernos.");

static const u8 MoveDescription_FuryAttack[] = _(
    "Cornea al enemigo de 2 a 5\n"
    "veces.");

static const u8 MoveDescription_HornDrill[] = _(
    "Ataque taladro.\n"
    "Fulmina en 1 golpe.");

static const u8 MoveDescription_Tackle[] = _(
    "Embiste con todo el cuerpo.");

static const u8 MoveDescription_BodySlam[] = _(
    "Ataque corporal que puede\n"
    "paralizar.");

static const u8 MoveDescription_Wrap[] = _(
    "Oprime de 2 a 5 turnos con\n"
    "ramas, etc.");

static const u8 MoveDescription_TakeDown[] = _(
    "Carga desmedida que también\n"
    "hiere al agresor.");

static const u8 MoveDescription_Thrash[] = _(
    "Dura de 2 a 3 turnos y\n"
    "acaba confundiéndote.");

static const u8 MoveDescription_DoubleEdge[] = _(
    "Ataque arriesgado que\n"
    "también hiere al agresor.");

static const u8 MoveDescription_TailWhip[] = _(
    "Agita la cola para bajar la\n"
    "Defensa del otro.");

static const u8 MoveDescription_PoisonSting[] = _(
    "Puede envenenar al enemigo\n"
    "con púas, etc.");

static const u8 MoveDescription_Twineedle[] = _(
    "Clava aguijones al rival 2\n"
    "veces.");

static const u8 MoveDescription_PinMissile[] = _(
    "Lanza finas púas que\n"
    "hieren de 2 a 5 veces.");

static const u8 MoveDescription_Leer[] = _(
    "Asusta al enemigo para\n"
    "bajar su Defensa.");

static const u8 MoveDescription_Bite[] = _(
    "Un voraz bocado que puede\n"
    "causar el retroceso.");

static const u8 MoveDescription_Growl[] = _(
    "Dulce gruñido que reduce el\n"
    "Ataque del otro.");

static const u8 MoveDescription_Roar[] = _(
    "Ahuyenta al rival y\n"
    "finaliza el combate.");

static const u8 MoveDescription_Sing[] = _(
    "Cancioncilla que puede\n"
    "dormir al enemigo.");

static const u8 MoveDescription_Supersonic[] = _(
    "Raras ondas sónicas que\n"
    "pueden confundir.");

static const u8 MoveDescription_SonicBoom[] = _(
    "Lanza ondas de choque que\n"
    "restan 20 PS.");

static const u8 MoveDescription_Disable[] = _(
    "Desactiva un ataque del\n"
    "contrincante.");

static const u8 MoveDescription_Acid[] = _(
    "Rocía corrosivo ácido.\n"
    "Puede bajar la Defensa.");

static const u8 MoveDescription_Ember[] = _(
    "Ligero ataque que puede\n"
    "causar quemaduras.");

static const u8 MoveDescription_Flamethrower[] = _(
    "Fuerte ataque que puede\n"
    "causar quemaduras.");

static const u8 MoveDescription_Mist[] = _(
    "Te rodea de fina niebla y\n"
    "protege tus habilidades.");

static const u8 MoveDescription_WaterGun[] = _(
    "Rocía agua para atacar.");

static const u8 MoveDescription_HydroPump[] = _(
    "Lanza agua a chorros para\n"
    "atacar.");

static const u8 MoveDescription_Surf[] = _(
    "Crea una ola enorme y se\n"
    "la lanza al enemigo.");

static const u8 MoveDescription_IceBeam[] = _(
    "Rayo de hielo que puede\n"
    "llegar a congelar.");

static const u8 MoveDescription_Blizzard[] = _(
    "Tormenta de hielo que\n"
    "puede llegar a congelar.");

static const u8 MoveDescription_Psybeam[] = _(
    "Extraño rayo que puede\n"
    "causar confusión.");

static const u8 MoveDescription_BubbleBeam[] = _(
    "Diluvio de burbujas que\n"
    "puede bajar la Velocidad.");

static const u8 MoveDescription_AuroraBeam[] = _(
    "Rayo multicolor que puede\n"
    "reducir el Ataque.");

static const u8 MoveDescription_HyperBeam[] = _(
    "Es eficaz, pero deja in-\n"
    "móvil al atacante 1 turno.");

static const u8 MoveDescription_Peck[] = _(
    "Ataca con un punzante\n"
    "pico.");

static const u8 MoveDescription_DrillPeck[] = _(
    "Picotazo giratorio y\n"
    "perforador muy potente.");

static const u8 MoveDescription_Submission[] = _(
    "Golpe desmedido que también\n"
    "hiere al agresor.");

static const u8 MoveDescription_LowKick[] = _(
    "Cuanto más pesa el\n"
    "enemigo, más daño causa.");

static const u8 MoveDescription_Counter[] = _(
    "Devuelve un golpe físico\n"
    "por duplicado.");

static const u8 MoveDescription_SeismicToss[] = _(
    "Se restarán tantos PS como\n"
    "nivel tenga el agresor.");

static const u8 MoveDescription_Strength[] = _(
    "Potente ataque físico.");

static const u8 MoveDescription_Absorb[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 MoveDescription_MegaDrain[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 MoveDescription_LeechSeed[] = _(
    "Planta tres semillas que\n"
    "quitan PS en cada turno.");

static const u8 MoveDescription_Growth[] = _(
    "Crece a marchas forzadas\n"
    "y aumenta el At. Esp.");

static const u8 MoveDescription_RazorLeaf[] = _(
    "Corta con hojas.\n"
    "Suele ser crítico.");

static const u8 MoveDescription_SolarBeam[] = _(
    "1.er turno: absorbe luz.\n"
    "2.º: ataca.");

static const u8 MoveDescription_PoisonPowder[] = _(
    "Polvo tóxico que puede\n"
    "envenenar al enemigo.");

static const u8 MoveDescription_StunSpore[] = _(
    "Esparce polvo que puede\n"
    "paralizar al enemigo.");

static const u8 MoveDescription_SleepPowder[] = _(
    "Esparce polvo que puede\n"
    "dormir al enemigo.");

static const u8 MoveDescription_PetalDance[] = _(
    "Dura de 2 a 3 turnos y\n"
    "acaba confundiéndote.");

static const u8 MoveDescription_StringShot[] = _(
    "Baja la Velocidad del\n"
    "enemigo.");

static const u8 MoveDescription_DragonRage[] = _(
    "Cadena de ondas de choque\n"
    "que quitan 40 PS.");

static const u8 MoveDescription_FireSpin[] = _(
    "Un aro de fuego que atrapa\n"
    "de 2 a 5 veces.");

static const u8 MoveDescription_ThunderShock[] = _(
    "Ataque eléctrico que puede\n"
    "paralizar al enemigo.");

static const u8 MoveDescription_Thunderbolt[] = _(
    "Duro ataque eléctrico que\n"
    "puede paralizar al enemigo.");

static const u8 MoveDescription_ThunderWave[] = _(
    "Una descarga que puede\n"
    "paralizar al enemigo.");

static const u8 MoveDescription_Thunder[] = _(
    "Un estruendo que puede\n"
    "paralizar al enemigo.");

static const u8 MoveDescription_RockThrow[] = _(
    "Tira pequeñas rocas al\n"
    "enemigo.");

static const u8 MoveDescription_Earthquake[] = _(
    "Fuerte, pero inútil contra\n"
    "voladores.");

static const u8 MoveDescription_Fissure[] = _(
    "Ataque de tierra.\n"
    "Fulmina en 1 golpe.");

static const u8 MoveDescription_Dig[] = _(
    "1.er turno: cava.\n"
    "2.º: ataca.");

static const u8 MoveDescription_Toxic[] = _(
    "Envenena al rival de forma\n"
    "progresiva.");

static const u8 MoveDescription_Confusion[] = _(
    "Ataque psíquico que puede\n"
    "causar confusión.");

static const u8 MoveDescription_Psychic[] = _(
    "Fuerte ataque psíquico que\n"
    "puede bajar la Def. Esp.");

static const u8 MoveDescription_Hypnosis[] = _(
    "Ataque hipnótico que puede\n"
    "dormir al enemigo.");

static const u8 MoveDescription_Meditate[] = _(
    "Reposa y medita para\n"
    "aumentar el Ataque.");

static const u8 MoveDescription_Agility[] = _(
    "Relaja el cuerpo para\n"
    "ganar Velocidad.");

static const u8 MoveDescription_QuickAttack[] = _(
    "Ataque rápido que permite\n"
    "golpear en 1.er lugar.");

static const u8 MoveDescription_Rage[] = _(
    "Mejora tu Ataque cada vez\n"
    "que te golpean.");

static const u8 MoveDescription_Teleport[] = _(
    "Movimiento psíquico que\n"
    "permite huir al instante.");

static const u8 MoveDescription_NightShade[] = _(
    "Se restarán tantos PS como\n"
    "nivel tenga el agresor.");

static const u8 MoveDescription_Mimic[] = _(
    "Copia un ataque usado por\n"
    "el enemigo.");

static const u8 MoveDescription_Screech[] = _(
    "Ruido agudo que baja mucho\n"
    "la Defensa del rival.");

static const u8 MoveDescription_DoubleTeam[] = _(
    "Crea espejismos para\n"
    "mejorar la Evasión.");

static const u8 MoveDescription_Recover[] = _(
    "Restaura hasta la mitad de\n"
    "los PS máximos.");

static const u8 MoveDescription_Harden[] = _(
    "Tensa la musculatura para\n"
    "aumentar la Defensa.");

static const u8 MoveDescription_Minimize[] = _(
    "El agresor mengua para\n"
    "aumentar la Evasión.");

static const u8 MoveDescription_Smokescreen[] = _(
    "Baja la Precisión del\n"
    "enemigo con humo, etc.");

static const u8 MoveDescription_ConfuseRay[] = _(
    "Rayo siniestro que\n"
    "confunde al enemigo.");

static const u8 MoveDescription_Withdraw[] = _(
    "El agresor se protege en\n"
    "su coraza y sube la Defensa.");

static const u8 MoveDescription_DefenseCurl[] = _(
    "Oculta su punto débil al\n"
    "rizarse. Sube la Defensa.");

static const u8 MoveDescription_Barrier[] = _(
    "Crea una barrera para\n"
    "subir mucho la Defensa.");

static const u8 MoveDescription_LightScreen[] = _(
    "Reduce el daño que causa\n"
    "el At. Esp. del rival.");

static const u8 MoveDescription_Haze[] = _(
    "Nube negra que elimina los\n"
    "cambios de característ.");

static const u8 MoveDescription_Reflect[] = _(
    "Pared de luz que debilita\n"
    "los ataques físicos.");

static const u8 MoveDescription_FocusEnergy[] = _(
    "Concentra energía para\n"
    "asegurar un golpe crítico.");

static const u8 MoveDescription_Bide[] = _(
    "Espera 2 turnos para\n"
    "atacar con doble potencia.");

static const u8 MoveDescription_Metronome[] = _(
    "Usa al azar un ataque\n"
    "Pokémon.");

static const u8 MoveDescription_MirrorMove[] = _(
    "Contraataca con el mismo\n"
    "movimiento.");

static const u8 MoveDescription_SelfDestruct[] = _(
    "Potente, pero hace que te\n"
    "debilites.");

static const u8 MoveDescription_EggBomb[] = _(
    "Arroja un huevo al enemigo.");

static const u8 MoveDescription_Lick[] = _(
    "Usa la lengua para atacar.\n"
    "Puede causar parálisis.");

static const u8 MoveDescription_Smog[] = _(
    "Gases de escape que pueden\n"
    "llegar a envenenar.");

static const u8 MoveDescription_Sludge[] = _(
    "Arroja residuos al rival.\n"
    "Puede llegar a envenenar.");

static const u8 MoveDescription_BoneClub[] = _(
    "Aporrea con un hueso.\n"
    "Puede causar el retroceso.");

static const u8 MoveDescription_FireBlast[] = _(
    "Llama que lo chamusca todo\n"
    "y suele causar quemadura.");

static const u8 MoveDescription_Waterfall[] = _(
    "Embiste con impulso para\n"
    "remontar una cascada.");

static const u8 MoveDescription_Clamp[] = _(
    "Atrapa y atenaza con\n"
    "fuerza de 2 a 5 turnos.");

static const u8 MoveDescription_Swift[] = _(
    "Lanza rayos en forma de\n"
    "estrella que no fallan.");

static const u8 MoveDescription_SkullBash[] = _(
    "1.er turno: se prepara.\n"
    "2.º: da el cabezazo.");

static const u8 MoveDescription_SpikeCannon[] = _(
    "Lanza finas púas que\n"
    "hieren de 2 a 5 veces.");

static const u8 MoveDescription_Constrict[] = _(
    "Constriñe para herir y\n"
    "puede bajar la Velocidad.");

static const u8 MoveDescription_Amnesia[] = _(
    "Olvida algo y aumenta\n"
    "mucho la Defensa Esp.");

static const u8 MoveDescription_Kinesis[] = _(
    "Distrae al rival y baja su\n"
    "nivel de Precisión.");

static const u8 MoveDescription_SoftBoiled[] = _(
    "Restaura hasta la mitad de\n"
    "tus PS máximos.");

static const u8 MoveDescription_HiJumpKick[] = _(
    "Si fallas esta patada,\n"
    "puedes autolesionarte.");

static const u8 MoveDescription_Glare[] = _(
    "Intimida y asusta al rival\n"
    "hasta dejarlo paralizado.");

static const u8 MoveDescription_DreamEater[] = _(
    "Roba la mitad del daño\n"
    "causado a un rival dormido.");

static const u8 MoveDescription_PoisonGas[] = _(
    "Envuelve al enemigo en gas\n"
    "tóxico venenoso.");

static const u8 MoveDescription_Barrage[] = _(
    "Arroja esferas al rival de\n"
    "2 a 5 veces.");

static const u8 MoveDescription_LeechLife[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 MoveDescription_LovelyKiss[] = _(
    "Pide un beso con una cara\n"
    "que asusta y adormece.");

static const u8 MoveDescription_SkyAttack[] = _(
    "1.º, busca punto flaco.\n"
    "2.º, va a por él.");

static const u8 MoveDescription_Transform[] = _(
    "Modifica las células del\n"
    "rival y lo clona.");

static const u8 MoveDescription_Bubble[] = _(
    "Usa burbujas para intentar\n"
    "bajar la Velocidad.");

static const u8 MoveDescription_DizzyPunch[] = _(
    "Puño repetitivo que puede\n"
    "causar confusión.");

static const u8 MoveDescription_Spore[] = _(
    "Esparce esporas que\n"
    "inducen al sueño.");

static const u8 MoveDescription_Flash[] = _(
    "Ciega con un fogonazo de\n"
    "luz y baja la Precisión.");

static const u8 MoveDescription_Psywave[] = _(
    "Ataque con onda psíquica\n"
    "de intensidad variable.");

static const u8 MoveDescription_Splash[] = _(
    "No tiene ningún efecto.\n"
    "Sólo salpica.");

static const u8 MoveDescription_AcidArmor[] = _(
    "Te hace líquido y aumenta\n"
    "bastante tu Defensa.");

static const u8 MoveDescription_Crabhammer[] = _(
    "Pinza con fuerza y suele\n"
    "dar un golpe crítico.");

static const u8 MoveDescription_Explosion[] = _(
    "Causa mucho daño, pero te\n"
    "debilita.");

static const u8 MoveDescription_FurySwipes[] = _(
    "Araña rápidamente de 2 a 5\n"
    "veces.");

static const u8 MoveDescription_Bonemerang[] = _(
    "Lanza un hueso a modo de\n"
    "bumerán, que da 2 veces.");

static const u8 MoveDescription_Rest[] = _(
    "Te duerme durante 2 turnos\n"
    "para curarte totalmente.");

static const u8 MoveDescription_RockSlide[] = _(
    "Lanza grandes pedruscos.\n"
    "Puede causar retroceso.");

static const u8 MoveDescription_HyperFang[] = _(
    "Ataque con finos colmillos.\n"
    "Puede causar retroceso.");

static const u8 MoveDescription_Sharpen[] = _(
    "Mejora el Ataque de quien\n"
    "lo usa.");

static const u8 MoveDescription_Conversion[] = _(
    "Cambia tu tipo por el tipo\n"
    "de un ataque que tengas.");

static const u8 MoveDescription_TriAttack[] = _(
    "Dispara 3 tipos de rayos a\n"
    "la vez.");

static const u8 MoveDescription_SuperFang[] = _(
    "Finos colmillos que bajan\n"
    "a la mitad los PS del rival.");

static const u8 MoveDescription_Slash[] = _(
    "Acuchilla con pinzas, etc.\n"
    "Suele dar un golpe crítico.");

static const u8 MoveDescription_Substitute[] = _(
    "Crea un señuelo con 1/4\n"
    "de tus PS máximos.");

static const u8 MoveDescription_Struggle[] = _(
    "Sólo se usa al acabarse\n"
    "los PP. Te hiere un poco.");

static const u8 MoveDescription_Sketch[] = _(
    "Copia siempre el último\n"
    "ataque del rival.");

static const u8 MoveDescription_TripleKick[] = _(
    "Patea 3 veces seguidas y\n"
    "cada vez más fuerte.");

static const u8 MoveDescription_Thief[] = _(
    "Puede quitarle al rival el\n"
    "objeto que lleve.");

static const u8 MoveDescription_SpiderWeb[] = _(
    "Enreda al rival para evitar\n"
    "que huya o pida el relevo.");

static const u8 MoveDescription_MindReader[] = _(
    "Adivina el ataque del otro\n"
    "y actúa en consecuencia.");

static const u8 MoveDescription_Nightmare[] = _(
    "El rival dormido pierde 1/4\n"
    "de PS por turno.");

static const u8 MoveDescription_FlameWheel[] = _(
    "Ataque de fuego que puede\n"
    "causar quemaduras.");

static const u8 MoveDescription_Snore[] = _(
    "Fuerte ronquido que puede\n"
    "usarse estando dormido.");

static const u8 MoveDescription_Curse[] = _(
    "En el tipo Fantasma tiene un\n"
    "efecto distinto.");

static const u8 MoveDescription_Flail[] = _(
    "Causa un daño mayor si\n"
    "tienes pocos PS.");

static const u8 MoveDescription_Conversion2[] = _(
    "Tu tipo se hace resistente\n"
    "al último tipo de ataque.");

static const u8 MoveDescription_Aeroblast[] = _(
    "Lanza un chorro de aire que\n"
    "suele dar un golpe crítico.");

static const u8 MoveDescription_CottonSpore[] = _(
    "Le pega esporas al rival\n"
    "para reducir su Velocidad.");

static const u8 MoveDescription_Reversal[] = _(
    "Si tienes pocos PS, el daño\n"
    "que causa es mucho mayor.");

static const u8 MoveDescription_Spite[] = _(
    "Baja con rencor PP del\n"
    "último ataque recibido.");

static const u8 MoveDescription_PowderSnow[] = _(
    "Lanza una nevada que puede\n"
    "llegar a congelar.");

static const u8 MoveDescription_Protect[] = _(
    "Frena ataques, pero puede\n"
    "fallar si se usa sin cesar.");

static const u8 MoveDescription_MachPunch[] = _(
    "Puñetazo que se da rápido\n"
    "para golpear primero.");

static const u8 MoveDescription_ScaryFace[] = _(
    "Asusta al enemigo para\n"
    "bajarle Velocidad.");

static const u8 MoveDescription_FaintAttack[] = _(
    "Acerca al enemigo para que\n"
    "el golpe no falle.");

static const u8 MoveDescription_SweetKiss[] = _(
    "Pide un beso con dulzura y\n"
    "suele causar confusión.");

static const u8 MoveDescription_BellyDrum[] = _(
    "Reduce tus PS para mejorar\n"
    "el Ataque.");

static const u8 MoveDescription_SludgeBomb[] = _(
    "Explosión de lodo que puede\n"
    "llegar a envenenar.");

static const u8 MoveDescription_MudSlap[] = _(
    "Echa lodo en la cara para\n"
    "bajar la Precisión.");

static const u8 MoveDescription_Octazooka[] = _(
    "Dispara tinta para atacar\n"
    "y bajar la Precisión.");

static const u8 MoveDescription_Spikes[] = _(
    "Riega púas que hieren si\n"
    "el rival pide el relevo.");

static const u8 MoveDescription_ZapCannon[] = _(
    "No es certero, pero causa\n"
    "parálisis si atina.");

static const u8 MoveDescription_Foresight[] = _(
    "Anula los intentos del ri-\n"
    "val de aumentar la Evasión.");

static const u8 MoveDescription_DestinyBond[] = _(
    "Si te debilitas, el enemigo\n"
    "se debilita contigo.");

static const u8 MoveDescription_PerishSong[] = _(
    "A los 3 turnos del canto,\n"
    "caen rival y atacante.");

static const u8 MoveDescription_IcyWind[] = _(
    "Ataque helado que baja la\n"
    "Velocidad.");

static const u8 MoveDescription_Detect[] = _(
    "Frena ataques, pero puede\n"
    "fallar si se usa sin parar.");

static const u8 MoveDescription_BoneRush[] = _(
    "Hueso en ristre, aporrea\n"
    "al enemigo de 2 a 5 veces.");

static const u8 MoveDescription_LockOn[] = _(
    "Fija el blanco para que el\n"
    "siguiente ataque no falle.");

static const u8 MoveDescription_Outrage[] = _(
    "Embestida que dura 2 ó 3\n"
    "turnos y te confunde.");

static const u8 MoveDescription_Sandstorm[] = _(
    "Tormenta de arena que dura\n"
    "varios turnos.");

static const u8 MoveDescription_GigaDrain[] = _(
    "Absorbe la mitad del daño\n"
    "producido.");

static const u8 MoveDescription_Endure[] = _(
    "Resiste el ataque de 1\n"
    "turno y deja al menos 1 PS.");

static const u8 MoveDescription_Charm[] = _(
    "Engatusa al rival y reduce\n"
    "bastante su Ataque.");

static const u8 MoveDescription_Rollout[] = _(
    "Ataque de 5 turnos, con\n"
    "fuerza cada vez mayor.");

static const u8 MoveDescription_FalseSwipe[] = _(
    "Deja al enemigo con al\n"
    "menos 1 PS.");

static const u8 MoveDescription_Swagger[] = _(
    "Provoca confusión, pero\n"
    "también sube el Ataque.");

static const u8 MoveDescription_MilkDrink[] = _(
    "Restaura hasta la mitad de\n"
    "tus PS máximos.");

static const u8 MoveDescription_Spark[] = _(
    "Ataque eléctrico que puede\n"
    "llegar a paralizar.");

static const u8 MoveDescription_FuryCutter[] = _(
    "Crece en intensidad si se\n"
    "usa repetidas veces.");

static const u8 MoveDescription_SteelWing[] = _(
    "Alas rígidas que golpean\n"
    "al rival.");

static const u8 MoveDescription_MeanLook[] = _(
    "Mal de ojo que impide al ri\n"
    "val huir o pedir el relevo.");

static const u8 MoveDescription_Attract[] = _(
    "Reduce la posibilidad de\n"
    "que el enemigo ataque.");

static const u8 MoveDescription_SleepTalk[] = _(
    "Mientras duerme, usa un\n"
    "ataque elegido al azar.");

static const u8 MoveDescription_HealBell[] = _(
    "Repicar que cura los\n"
    "problemas de estado.");

static const u8 MoveDescription_Return[] = _(
    "Ataque que aumenta sus\n"
    "efectos con la amistad.");

static const u8 MoveDescription_Present[] = _(
    "Regalo con forma de bomba.\n"
    "Puede que restaure los PS.");

static const u8 MoveDescription_Frustration[] = _(
    "Es más fuerte si no se\n"
    "aprecia al Entrenador.");

static const u8 MoveDescription_Safeguard[] = _(
    "Fuerza mística que evita\n"
    "problemas de estado.");

static const u8 MoveDescription_PainSplit[] = _(
    "Une tus PS a los del rival\n"
    "y los reparte por igual.");

static const u8 MoveDescription_SacredFire[] = _(
    "Fuego místico que puede\n"
    "causar quemaduras.");

static const u8 MoveDescription_Magnitude[] = _(
    "Sacudida sísmica de\n"
    "intensidad variable.");

static const u8 MoveDescription_DynamicPunch[] = _(
    "No es certero, pero causa\n"
    "confusión si atina.");

static const u8 MoveDescription_Megahorn[] = _(
    "Violenta embestida con\n"
    "retorcidos cuernos.");

static const u8 MoveDescription_DragonBreath[] = _(
    "Fuerte ráfaga de aliento\n"
    "que golpea al enemigo.");

static const u8 MoveDescription_BatonPass[] = _(
    "Cambia de compañero y\n"
    "mantiene los estados.");

static const u8 MoveDescription_Encore[] = _(
    "El rival repite el último\n"
    "ataque de 2 a 6 veces.");

static const u8 MoveDescription_Pursuit[] = _(
    "Hace mucho daño al rival\n"
    "que pide el relevo.");

static const u8 MoveDescription_RapidSpin[] = _(
    "Ataque corporal giratorio\n"
    "de gran velocidad.");

static const u8 MoveDescription_SweetScent[] = _(
    "Engatusa al rival para\n"
    "reducir su Evasión.");

static const u8 MoveDescription_IronTail[] = _(
    "Ataca con una cola férrea y\n"
    "puede bajar la Defensa.");

static const u8 MoveDescription_MetalClaw[] = _(
    "Ataque con garra que puede\n"
    "aumentar tu Ataque.");

static const u8 MoveDescription_VitalThrow[] = _(
    "Lleva su tiempo, pero no\n"
    "falla.");

static const u8 MoveDescription_MorningSun[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 MoveDescription_Synthesis[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 MoveDescription_Moonlight[] = _(
    "Restaura PS. La cantidad\n"
    "varía según el clima.");

static const u8 MoveDescription_HiddenPower[] = _(
    "Su eficacia varía según el\n"
    "agresor.");

static const u8 MoveDescription_CrossChop[] = _(
    "Corte doble que suele\n"
    "propinar un golpe crítico.");

static const u8 MoveDescription_Twister[] = _(
    "Crea un violento tornado\n"
    "para hacer trizas al rival.");

static const u8 MoveDescription_RainDance[] = _(
    "Refuerza los ataques de\n"
    "tipo AGUA durante 5 turnos.");

static const u8 MoveDescription_SunnyDay[] = _(
    "Sube los ataques de tipo\n"
    "Fuego durante 5 turnos.");

static const u8 MoveDescription_Crunch[] = _(
    "Tritura con finos colmillos\n"
    "y puede bajar la Def. Esp.");

static const u8 MoveDescription_MirrorCoat[] = _(
    "Responde a un Ataque\n"
    "Especial con doble fuerza.");

static const u8 MoveDescription_PsychUp[] = _(
    "Copia los efectos del rival\n"
    "y te los adjudica.");

static const u8 MoveDescription_ExtremeSpeed[] = _(
    "Ataque extremadamente\n"
    "rápido y demoledor.");

static const u8 MoveDescription_AncientPower[] = _(
    "Puede subir todas las\n"
    "características.");

static const u8 MoveDescription_ShadowBall[] = _(
    "Lanza una bola negra que\n"
    "puede bajar la Def. Esp.");

static const u8 MoveDescription_FutureSight[] = _(
    "Aumenta la energía interior\n"
    "para golpear a los 2 turnos.");

static const u8 MoveDescription_RockSmash[] = _(
    "Ataque de fuerza brutal que\n"
    "puede bajar la Defensa.");

static const u8 MoveDescription_Whirlpool[] = _(
    "Atrapa y daña al rival de 2\n"
    "a 5 turnos con un torbellino.");

static const u8 MoveDescription_BeatUp[] = _(
    "Ataque de todo el equipo\n"
    "Pokémon.");

static const u8 MoveDescription_FakeOut[] = _(
    "Ataca primero en un turno y\n"
    "puede causar retroceso.");

static const u8 MoveDescription_Uproar[] = _(
    "Alborota de 2 a 5 turnos.\n"
    "Mantiene despierto.");

static const u8 MoveDescription_Stockpile[] = _(
    "Recarga energía hasta 3\n"
    "veces.");

static const u8 MoveDescription_SpitUp[] = _(
    "Libera energía acumulada.\n"
    "Cuanta más, mejor.");

static const u8 MoveDescription_Swallow[] = _(
    "Absorbe energía acumulada\n"
    "y restaura PS.");

static const u8 MoveDescription_HeatWave[] = _(
    "Exhala un vaho ígneo que\n"
    "puede quemar al rival.");

static const u8 MoveDescription_Hail[] = _(
    "Tormenta de granizo que\n"
    "golpea en cada turno.");

static const u8 MoveDescription_Torment[] = _(
    "Agobia e impide el uso\n"
    "reiterado de un ataque.");

static const u8 MoveDescription_Flatter[] = _(
    "Confunde al rival, pero\n"
    "sube su At. Esp.");

static const u8 MoveDescription_WillOWisp[] = _(
    "Fuego muy intenso que\n"
    "produce quemaduras.");

static const u8 MoveDescription_Memento[] = _(
    "Baja las habilidades del\n"
    "rival y te fulmina.");

static const u8 MoveDescription_Facade[] = _(
    "Potencia el Ataque al estar\n"
    "quemado, paraliz. o enven.");

static const u8 MoveDescription_FocusPunch[] = _(
    "Es tardío, pero si el rival\n"
    "te golpea no te moverás.");

static const u8 MoveDescription_SmellingSalt[] = _(
    "Afecta a rivales paraliza-\n"
    "dos, pero también los cura.");

static const u8 MoveDescription_FollowMe[] = _(
    "Llama la atención para\n"
    "concentrar los ataques.");

static const u8 MoveDescription_NaturePower[] = _(
    "El tipo de ataque varía\n"
    "según el sitio.");

static const u8 MoveDescription_Charge[] = _(
    "Recarga energía y sube el\n"
    "ataque eléctrico posterior.");

static const u8 MoveDescription_Taunt[] = _(
    "Hace que el rival sólo use\n"
    "ataques.");

static const u8 MoveDescription_HelpingHand[] = _(
    "Refuerza los movimientos\n"
    "del receptor.");

static const u8 MoveDescription_Trick[] = _(
    "Engaña al rival y provoca\n"
    "un cambio de objeto.");

static const u8 MoveDescription_RolePlay[] = _(
    "Imita al rival y copia su\n"
    "Habilidad Especial.");

static const u8 MoveDescription_Wish[] = _(
    "Lleva tiempo, pero cumple\n"
    "el deseo de restaurar los PS.");

static const u8 MoveDescription_Assist[] = _(
    "Ataque elegido al azar de\n"
    "un miembro del equipo.");

static const u8 MoveDescription_Ingrain[] = _(
    "Echa raíces para recuperar\n"
    "PS, pero impide el relevo.");

static const u8 MoveDescription_Superpower[] = _(
    "Aumenta mucho la fuerza,\n"
    "pero las habilidades bajan.");

static const u8 MoveDescription_MagicCoat[] = _(
    "El agresor recibe el refle-\n"
    "jo de los efectos especiales.");

static const u8 MoveDescription_Recycle[] = _(
    "Recicla un objeto usado\n"
    "para utilizarlo de nuevo.");

static const u8 MoveDescription_Revenge[] = _(
    "Ataque que gana fuerza si\n"
    "el enemigo te hiere.");

static const u8 MoveDescription_BrickBreak[] = _(
    "Destruye barreras como\n"
    "Reflejo y causa daño.");

static const u8 MoveDescription_Yawn[] = _(
    "Provoca el bostezo y\n"
    "después el sueño.");

static const u8 MoveDescription_KnockOff[] = _(
    "Deja al rival desprovisto\n"
    "del objeto que lleva.");

static const u8 MoveDescription_Endeavor[] = _(
    "Gana fuerza si el atacante\n"
    "tiene menos PS que el rival.");

static const u8 MoveDescription_Eruption[] = _(
    "Cuanto mayor sea el número\n"
    "de tus PS, más daño harás.");

static const u8 MoveDescription_SkillSwap[] = _(
    "Intercambia la habilidad\n"
    "especial con otro Pokémon.");

static const u8 MoveDescription_Imprison[] = _(
    "Impide al rival usar\n"
    "ataques que tú conoces.");

static const u8 MoveDescription_Refresh[] = _(
    "Cura envenenamientos,\n"
    "parálisis y quemaduras.");

static const u8 MoveDescription_Grudge[] = _(
    "Si te debilitas, borra los\n"
    "PP del último at. del rival.");

static const u8 MoveDescription_Snatch[] = _(
    "Roba el efecto del ataque\n"
    "que el rival use después.");

static const u8 MoveDescription_SecretPower[] = _(
    "Los efectos de este ataque\n"
    "varían según la zona.");

static const u8 MoveDescription_Dive[] = _(
    "1.er turno: bucea\n"
    "2.º: golpea.");

static const u8 MoveDescription_ArmThrust[] = _(
    "Se dan puñetazos directos\n"
    "de 2 a 5 turnos.");

static const u8 MoveDescription_Camouflage[] = _(
    "Modifica el tipo del Poké-\n"
    "mon según la zona donde esté.");

static const u8 MoveDescription_TailGlow[] = _(
    "Ráfaga de luz que sube\n"
    "muchísimo el At. Esp.");

static const u8 MoveDescription_LusterPurge[] = _(
    "Fogonazo de luz que puede\n"
    "bajar la Def. Esp.");

static const u8 MoveDescription_MistBall[] = _(
    "Banco de niebla que puede\n"
    "bajar el At. Esp.");

static const u8 MoveDescription_FeatherDance[] = _(
    "Envuelve al rival con plu-\n"
    "món para reducir su Ataque.");

static const u8 MoveDescription_TeeterDance[] = _(
    "Confunde a todos los\n"
    "Pokémon que hay en escena.");

static const u8 MoveDescription_BlazeKick[] = _(
    "Suele ser un golpe crítico\n"
    "y causar quemaduras.");

static const u8 MoveDescription_MudSport[] = _(
    "Te cubre de lodo y mejora\n"
    "tu resistencia eléctrica.");

static const u8 MoveDescription_IceBall[] = _(
    "Dura 5 turnos y gana fuerza\n"
    "en cada uno.");

static const u8 MoveDescription_NeedleArm[] = _(
    "Pega con brazos de pinchos\n"
    "y puede causar retroceso.");

static const u8 MoveDescription_SlackOff[] = _(
    "Te relaja y restaura la\n"
    "mitad de los PS máximos.");

static const u8 MoveDescription_HyperVoice[] = _(
    "Ondas sonoras de alta\n"
    "frecuencia que hieren.");

static const u8 MoveDescription_PoisonFang[] = _(
    "Incisivos colmillos que\n"
    "pueden envenenar al rival.");

static const u8 MoveDescription_CrushClaw[] = _(
    "Hace trizas al enemigo y\n"
    "puede bajar la Defensa.");

static const u8 MoveDescription_BlastBurn[] = _(
    "Es muy eficaz, pero te\n"
    "inmoviliza 1 turno.");

static const u8 MoveDescription_HydroCannon[] = _(
    "Es muy eficaz, pero te\n"
    "inmoviliza 1 turno.");

static const u8 MoveDescription_MeteorMash[] = _(
    "Impacta como un meteorito\n"
    "y suele subir el Ataque.");

static const u8 MoveDescription_Astonish[] = _(
    "Impresiona tanto que puede\n"
    "hacer retroceder al rival.");

static const u8 MoveDescription_WeatherBall[] = _(
    "El tipo y fuerza del ataque\n"
    "varían según el clima.");

static const u8 MoveDescription_Aromatherapy[] = _(
    "Cura todos los problemas de\n"
    "estado con un suave aroma.");

static const u8 MoveDescription_FakeTears[] = _(
    "Lágrimas de cocodrilo que\n"
    "bajan mucho la Def. Esp.");

static const u8 MoveDescription_AirCutter[] = _(
    "Viento cortante que azota.\n"
    "Suele ser un golpe crítico.");

static const u8 MoveDescription_Overheat[] = _(
    "Ataque en toda regla que\n"
    "baja mucho tu At. Esp.");

static const u8 MoveDescription_OdorSleuth[] = _(
    "Anula los intentos del ri-\n"
    "val por aumentar la Evasión.");

static const u8 MoveDescription_RockTomb[] = _(
    "Tira rocas al rival, lo pa-\n"
    "ra y suele bajarle Velocidad.");

static const u8 MoveDescription_SilverWind[] = _(
    "Partículas de plata que\n"
    "quizá suban las habilidades.");

static const u8 MoveDescription_MetalSound[] = _(
    "Tremendo chirrido que baja\n"
    "mucho la Def. Esp.");

static const u8 MoveDescription_GrassWhistle[] = _(
    "Agradable melodía que\n"
    "adormece al rival.");

static const u8 MoveDescription_Tickle[] = _(
    "Hace reír para bajar el\n"
    "Ataque y la Defensa.");

static const u8 MoveDescription_CosmicPower[] = _(
    "Sube la Defensa y la Def.\n"
    "Esp. con energía mística.");

static const u8 MoveDescription_WaterSpout[] = _(
    "Si tienes muchos PS, el da-\n"
    "ño que causa es mucho mayor.");

static const u8 MoveDescription_SignalBeam[] = _(
    "Extraño ataque con rayo.\n"
    "Puede causar confusión.");

static const u8 MoveDescription_ShadowPunch[] = _(
    "Puñetazo ineludible\n"
    "procedente de las sombras.");

static const u8 MoveDescription_Extrasensory[] = _(
    "Energía muy extraña que\n"
    "puede causar el retroceso.");

static const u8 MoveDescription_SkyUppercut[] = _(
    "Gancho ascendente de gran\n"
    "ímpetu.");

static const u8 MoveDescription_SandTomb[] = _(
    "Enreda en un remolino de\n"
    "arena de 2 a 5 turnos.");

static const u8 MoveDescription_SheerCold[] = _(
    "Ataque polar que debilita\n"
    "al rival si le alcanza.");

static const u8 MoveDescription_MuddyWater[] = _(
    "Ataque con agua lodosa que\n"
    "puede bajar la Precisión.");

static const u8 MoveDescription_BulletSeed[] = _(
    "Dispara de 2 a 5 ráfagas\n"
    "consecutivas de semillas.");

static const u8 MoveDescription_AerialAce[] = _(
    "Ataque tremendamente\n"
    "rápido e ineludible.");

static const u8 MoveDescription_IcicleSpear[] = _(
    "Ataca lanzando de 2 a 5\n"
    "ráfagas de carámbanos.");

static const u8 MoveDescription_IronDefense[] = _(
    "Te fortalece y sube mucho\n"
    "la Defensa.");

static const u8 MoveDescription_Block[] = _(
    "Le corta el paso al rival\n"
    "para que no pueda escapar.");

static const u8 MoveDescription_Howl[] = _(
    "Aullido que sube el ánimo\n"
    "y aumenta el Ataque.");

static const u8 MoveDescription_DragonClaw[] = _(
    "Araña al rival con garras\n"
    "afiladas.");

static const u8 MoveDescription_FrenzyPlant[] = _(
    "Es eficaz, pero deja\n"
    "inmóvil al agresor 1 turno.");

static const u8 MoveDescription_BulkUp[] = _(
    "Robustece el cuerpo para\n"
    "subir Ataque y Defensa.");

static const u8 MoveDescription_Bounce[] = _(
    "1.er turno: bota.\n"
    "2.º: golpea. Puede paralizar.");

static const u8 MoveDescription_MudShot[] = _(
    "Dispara lodo al rival y\n"
    "reduce su Velocidad.");

static const u8 MoveDescription_PoisonTail[] = _(
    "Puede envenenar y dar un\n"
    "golpe crítico.");

static const u8 MoveDescription_Covet[] = _(
    "Pide con ternura al rival\n"
    "el objeto que lleve.");

static const u8 MoveDescription_VoltTackle[] = _(
    "Placaje de alto riesgo que\n"
    "hiere un poco al atacante.");

static const u8 MoveDescription_MagicalLeaf[] = _(
    "Ataca con una extraña hoja\n"
    "que no se puede esquivar.");

static const u8 MoveDescription_WaterSport[] = _(
    "Te moja para que resistas\n"
    "más los ataques de fuego.");

static const u8 MoveDescription_CalmMind[] = _(
    "Sube el At. Esp. y la\n"
    "Def. Esp. con concentración.");

static const u8 MoveDescription_LeafBlade[] = _(
    "Acuchilla con una hoja fina\n"
    "Suele dar un golpe crítico.");

static const u8 MoveDescription_DragonDance[] = _(
    "Danza mística que sube el\n"
    "Ataque y la Velocidad.");

static const u8 MoveDescription_RockBlast[] = _(
    "Lanza pedruscos al rival de\n"
    "2 a 5 veces consecutivas.");

static const u8 MoveDescription_ShockWave[] = _(
    "Ataque eléctrico muy rápido\n"
    "e ineludible.");

static const u8 MoveDescription_WaterPulse[] = _(
    "Ondas ultrasónicas que\n"
    "pueden confundir al rival.");

static const u8 MoveDescription_DoomDesire[] = _(
    "Concentra intensa luz solar\n"
    "y ataca 2 turnos después.");

static const u8 MoveDescription_PsychoBoost[] = _(
    "Es tremendamente potente,\n"
    "pero baja mucho el At. Esp.");

static const u8 MoveDescription_Roost[] = _(
    "Relaja los musculos,\n"
    "y recupera un poo de salud.");

static const u8 MoveDescription_Gravity[] = _(
    "Intensifica la gravedad\n"
    "impidiendo dejar el suelo.");

static const u8 sWAKE_UP_SLAPDescription[] = _(
	"Powerful against sleeping\n"
	"foes, but also heals them.");

static const u8 sHAMMER_ARMDescription[] = _(
	"A swinging fist attack\n"
	"that also lowers Speed.");

static const u8 sGYRO_BALLDescription[] = _(
	"A high-speed spin that does\n"
	"more damage to faster foes.");

static const u8 sHEALING_WISHDescription[] = _(
	"The user faints to heal up\n"
	"the recipient.");

static const u8 sBRINEDescription[] = _(
	"Does double damage to foes\n"
	"with half HP.");

static const u8 sNATURAL_GIFTDescription[] = _(
	"The effectiveness varies\n"
	"with the held Berry.");

static const u8 sFEINTDescription[] = _(
	"An attack that hits foes\n"
	"using moves like Protect.");

static const u8 sPLUCKDescription[] = _(
	"Eats the foe's held Berry\n"
	"gaining its effect.");

static const u8 sTAILWINDDescription[] = _(
	"Whips up a turbulent breeze\n"
	"that raises Speed.");

static const u8 sACUPRESSUREDescription[] = _(
	"The user sharply raises\n"
	"one of its stats.");

static const u8 sMETAL_BURSTDescription[] = _(
	"Retaliates any hit with\n"
	"greater power.");

static const u8 sU_TURNDescription[] = _(
	"Does damage then switches\n"
	"out the user.");

static const u8 sCLOSE_COMBATDescription[] = _(
	"A strong attack but lowers\n"
	"the defensive stats.");

static const u8 sPAYBACKDescription[] = _(
	"An attack that gains power\n"
	"if the user moves last.");

static const u8 sASSURANCEDescription[] = _(
	"An attack that gains power\n"
	"if the foe has been hurt.");

static const u8 sEMBARGODescription[] = _(
	"Prevents the foe from\n"
	"using any items.");

static const u8 sFLINGDescription[] = _(
	"The effectiveness varies\n"
	"with the held item.");

static const u8 sPSYCHO_SHIFTDescription[] = _(
	"Transfers status problems\n"
	"to the foe.");

static const u8 sTRUMP_CARDDescription[] = _(
	"The less PP the move has\n"
	"the more damage it does.");

static const u8 sHEAL_BLOCKDescription[] = _(
	"Prevents the foe from\n"
	"recovering any HP.");

static const u8 sWRING_OUTDescription[] = _(
	"The higher the foe's HP\n"
	"the more damage caused.");

static const u8 sPOWER_TRICKDescription[] = _(
	"The user swaps its Attack\n"
	"and Defense stats.");

static const u8 sGASTRO_ACIDDescription[] = _(
	"Stomach acid suppresses\n"
	"the foe's ability.");

static const u8 sLUCKY_CHANTDescription[] = _(
	"Prevents the foe from\n"
	"landing critical hits.");

static const u8 sME_FIRSTDescription[] = _(
	"Executes the foe's attack\n"
	"with greater power.");

static const u8 sPOWER_SWAPDescription[] = _(
	"Swaps changes to Attack\n"
	"and Sp. Atk with the foe.");

static const u8 sGUARD_SWAPDescription[] = _(
	"Swaps changes to Defense\n"
	"and Sp. Def with the foe.");

static const u8 sPUNISHMENTDescription[] = _(
	"Does more damage if the\n"
	"foe has powered up.");

static const u8 sLAST_RESORTDescription[] = _(
	"Can only be used if every\n"
	"other move has been used.");

static const u8 sWORRY_SEEDDescription[] = _(
	"Plants a seed on the foe\n"
	"giving it Insomnia.");

static const u8 sSUCKER_PUNCHDescription[] = _(
	"Strikes first if the foe\n"
	"is preparing an attack.");

static const u8 sTOXIC_SPIKESDescription[] = _(
	"Sets spikes that poison a\n"
	"foe switching in.");

static const u8 sHEART_SWAPDescription[] = _(
	"Swaps any stat changes\n"
	"with the foe.");

static const u8 sAQUA_RINGDescription[] = _(
	"Forms a veil of water\n"
	"that restores HP.");

static const u8 sMAGNET_RISEDescription[] = _(
	"The user levitates with\n"
	"electromagnetism.");

static const u8 sFLARE_BLITZDescription[] = _(
	"A charge that may burn the\n"
	"foe. Also hurts the user.");

static const u8 sFORCE_PALMDescription[] = _(
	"A shock wave attack that\n"
	"may paralyze the foe.");

static const u8 sAURA_SPHEREDescription[] = _(
	"Attacks with an aura blast\n"
	"that cannot be evaded.");

static const u8 sROCK_POLISHDescription[] = _(
	"Polishes the body to\n"
	"sharply raise Speed.");

static const u8 sPOISON_JABDescription[] = _(
	"A stabbing attack that\n"
	"may poison the foe.");

static const u8 sDARK_PULSEDescription[] = _(
	"Attacks with a horrible\n"
	"aura. May cause flinching.");

static const u8 sAQUA_TAILDescription[] = _(
	"The user swings its tail\n"
	"like a wave to attack.");

static const u8 sSEED_BOMBDescription[] = _(
	"A barrage of hard seeds\n"
	"is fired at the foe.");

static const u8 sAIR_SLASHDescription[] = _(
	"Attacks with a blade of\n"
	"air. May cause flinching.");

static const u8 sX_SCISSORDescription[] = _(
	"Slashes the foe with crossed\n"
	"scythes, claws, etc.");

static const u8 sBUG_BUZZDescription[] = _(
	"A damaging sound wave that\n"
	"may lower Sp. Def.");

static const u8 sDRAGON_PULSEDescription[] = _(
	"Generates a shock wave to\n"
	"damage the foe.");

static const u8 sDRAGON_RUSHDescription[] = _(
	"Tackles the foe with menace.\n"
	"May cause flinching.");

static const u8 sPOWER_GEMDescription[] = _(
	"Attacks with rays of light\n"
	"that sparkle like diamonds.");

static const u8 sVACUUM_WAVEDescription[] = _(
	"Whirls its fists to send\n"
	"a wave that strikes first.");

static const u8 sFOCUS_BLASTDescription[] = _(
	"Attacks at full power.\n"
	"May lower Sp. Def.");

static const u8 sENERGY_BALLDescription[] = _(
	"Draws power from nature to\n"
	"attack. May lower Sp. Def.");

static const u8 sBRAVE_BIRDDescription[] = _(
	"A low altitude charge that\n"
	"also hurts the user.");

static const u8 sEARTH_POWERDescription[] = _(
	"Makes the ground erupt with\n"
	"power. May lower Sp. Def.");

static const u8 sSWITCHEROODescription[] = _(
	"Swaps items with the foe\n"
	"faster than the eye can see.");

static const u8 sNASTY_PLOTDescription[] = _(
	"Thinks bad thoughts to\n"
	"sharply boost Sp. Atk.");

static const u8 sICE_SHARDDescription[] = _(
	"Hurls a chunk of ice that\n"
	"always strike first.");

static const u8 sTHUNDER_FANGDescription[] = _(
	"May cause flinching or\n"
	"leave the foe paralyzed.");

static const u8 sICE_FANGDescription[] = _(
	"May cause flinching or\n"
	"leave the foe frozen.");

static const u8 sFIRE_FANGDescription[] = _(
	"May cause flinching or\n"
	"leave the foe with a burn.");

static const u8 sSHADOW_SNEAKDescription[] = _(
	"Extends the user's shadow\n"
	"to strike first.");

static const u8 sMUD_BOMBDescription[] = _(
	"Throws a blob of mud to\n"
	"damage and cut accuracy.");

static const u8 sPSYCHO_CUTDescription[] = _(
	"Tears with psychic blades.\n"
	"High critical-hit ratio.");

static const u8 sMIRROR_SHOTDescription[] = _(
	"Emits a flash of energy to\n"
	"damage and cut accuracy.");

static const u8 sFLASH_CANNONDescription[] = _(
	"Releases a blast of light\n"
	"that may lower Sp. Def.");

static const u8 sROCK_CLIMBDescription[] = _(
	"A charging attack that may\n"
	"confuse the foe.");

static const u8 sDEFOGDescription[] = _(
	"Removes obstacles and\n"
	"lowers evasion.");

static const u8 sTRICK_ROOMDescription[] = _(
	"Slower POKéMON get to move\n"
	"first for 5 turns.");

static const u8 sPOWER_WHIPDescription[] = _(
	"Violently lashes the foe\n"
	"with vines or tentacles.");

static const u8 sGUNK_SHOTDescription[] = _(
	"Shoots filthy garbage at\n"
	"the foe. May also poison.");

static const u8 sIRON_HEADDescription[] = _(
	"Slams the foe with a hard\n"
	"head. May cause flinching.");

static const u8 sMAGNET_BOMBDescription[] = _(
	"Launches a magnet that\n"
	"strikes without fail.");

static const u8 sSTONE_EDGEDescription[] = _(
	"Stabs the foe with stones.\n"
	"High critical-hit ratio.");

static const u8 sCAPTIVATEDescription[] = _(
	"Makes the opposite gender\n"
	"sharply reduce its Sp. Atk.");

static const u8 sSTEALTH_ROCKDescription[] = _(
	"Sets floating stones that\n"
	"hurt a foe switching in.");

static const u8 sGRASS_KNOTDescription[] = _(
	"A snare attack that does\n"
	"more damage to heavier foes.");

static const u8 sCHATTERDescription[] = _(
	"Attacks with a sound wave\n"
	"that causes confusion.");

static const u8 sJUDGMENTDescription[] = _(
	"The type varies with the\n"
	"kind of Plate held.");

static const u8 sCHARGE_BEAMDescription[] = _(
	"Fires a beam of electricity.\n"
	"May raise Sp. Atk.");

static const u8 sATTACK_ORDERDescription[] = _(
	"Underlings pummel the foe.\n"
	"High critical-hit ratio.");

static const u8 sDEFEND_ORDERDescription[] = _(
	"Raises Defense and Sp. Def\n"
	"with a living shield.");

static const u8 sHEAD_SMASHDescription[] = _(
	"A life-risking headbutt that\n"
	"seriously hurts the user.");

static const u8 sDOUBLE_HITDescription[] = _(
	"Slams the foe with a tail\n"
	"etc. Strikes twice.");

static const u8 sROAR_OF_TIMEDescription[] = _(
	"Powerful, but leaves the\n"
	"user immobile the next turn.");

static const u8 sSPACIAL_RENDDescription[] = _(
	"Tears the foe, and space.\n"
	"High critical-hit ratio.");

static const u8 sMAGMA_STORMDescription[] = _(
	"Traps the foe in a vortex\n"
	"of fire for 2 to 5 turns.");

static const u8 sDARK_VOIDDescription[] = _(
	"Drags the foe into total\n"
	"darkness, inducing Sleep.");

static const u8 sSEED_FLAREDescription[] = _(
	"Generates a shock wave that\n"
	"sharply reduces Sp. Def.");

static const u8 sOMINOUS_WINDDescription[] = _(
	"A repulsive attack that may\n"
	"raise all stats.");

static const u8 sSHADOW_FORCEDescription[] = _(
	"Vanishes on the first turn\n"
	"then strikes the next turn.");

static const u8 sLAVA_PLUMEDescription[] = _(
	"Scarlet flames torch\n"
	"everything around the user.");

static const u8 sNotDoneYetDescription[] = _(
	"Not done yet.");

const u8 * const gMoveDescriptions[] = {
    MoveDescription_Pound,
    MoveDescription_KarateChop,
    MoveDescription_DoubleSlap,
    MoveDescription_CometPunch,
    MoveDescription_MegaPunch,
    MoveDescription_PayDay,
    MoveDescription_FirePunch,
    MoveDescription_IcePunch,
    MoveDescription_ThunderPunch,
    MoveDescription_Scratch,
    MoveDescription_ViceGrip,
    MoveDescription_Guillotine,
    MoveDescription_RazorWind,
    MoveDescription_SwordsDance,
    MoveDescription_Cut,
    MoveDescription_Gust,
    MoveDescription_WingAttack,
    MoveDescription_Whirlwind,
    MoveDescription_Fly,
    MoveDescription_Bind,
    MoveDescription_Slam,
    MoveDescription_VineWhip,
    MoveDescription_Stomp,
    MoveDescription_DoubleKick,
    MoveDescription_MegaKick,
    MoveDescription_JumpKick,
    MoveDescription_RollingKick,
    MoveDescription_SandAttack,
    MoveDescription_Headbutt,
    MoveDescription_HornAttack,
    MoveDescription_FuryAttack,
    MoveDescription_HornDrill,
    MoveDescription_Tackle,
    MoveDescription_BodySlam,
    MoveDescription_Wrap,
    MoveDescription_TakeDown,
    MoveDescription_Thrash,
    MoveDescription_DoubleEdge,
    MoveDescription_TailWhip,
    MoveDescription_PoisonSting,
    MoveDescription_Twineedle,
    MoveDescription_PinMissile,
    MoveDescription_Leer,
    MoveDescription_Bite,
    MoveDescription_Growl,
    MoveDescription_Roar,
    MoveDescription_Sing,
    MoveDescription_Supersonic,
    MoveDescription_SonicBoom,
    MoveDescription_Disable,
    MoveDescription_Acid,
    MoveDescription_Ember,
    MoveDescription_Flamethrower,
    MoveDescription_Mist,
    MoveDescription_WaterGun,
    MoveDescription_HydroPump,
    MoveDescription_Surf,
    MoveDescription_IceBeam,
    MoveDescription_Blizzard,
    MoveDescription_Psybeam,
    MoveDescription_BubbleBeam,
    MoveDescription_AuroraBeam,
    MoveDescription_HyperBeam,
    MoveDescription_Peck,
    MoveDescription_DrillPeck,
    MoveDescription_Submission,
    MoveDescription_LowKick,
    MoveDescription_Counter,
    MoveDescription_SeismicToss,
    MoveDescription_Strength,
    MoveDescription_Absorb,
    MoveDescription_MegaDrain,
    MoveDescription_LeechSeed,
    MoveDescription_Growth,
    MoveDescription_RazorLeaf,
    MoveDescription_SolarBeam,
    MoveDescription_PoisonPowder,
    MoveDescription_StunSpore,
    MoveDescription_SleepPowder,
    MoveDescription_PetalDance,
    MoveDescription_StringShot,
    MoveDescription_DragonRage,
    MoveDescription_FireSpin,
    MoveDescription_ThunderShock,
    MoveDescription_Thunderbolt,
    MoveDescription_ThunderWave,
    MoveDescription_Thunder,
    MoveDescription_RockThrow,
    MoveDescription_Earthquake,
    MoveDescription_Fissure,
    MoveDescription_Dig,
    MoveDescription_Toxic,
    MoveDescription_Confusion,
    MoveDescription_Psychic,
    MoveDescription_Hypnosis,
    MoveDescription_Meditate,
    MoveDescription_Agility,
    MoveDescription_QuickAttack,
    MoveDescription_Rage,
    MoveDescription_Teleport,
    sLUCKY_CHANTDescription,
    MoveDescription_Mimic,
    MoveDescription_Screech,
    MoveDescription_DoubleTeam,
    MoveDescription_Recover,
    MoveDescription_Harden,
    MoveDescription_Minimize,
    MoveDescription_Smokescreen,
    MoveDescription_ConfuseRay,
    MoveDescription_Withdraw,
    MoveDescription_DefenseCurl,
    MoveDescription_Barrier,
    MoveDescription_LightScreen,
    MoveDescription_Haze,
    MoveDescription_Reflect,
    MoveDescription_FocusEnergy,
    MoveDescription_Bide,
    MoveDescription_Metronome,
    MoveDescription_MirrorMove,
    MoveDescription_SelfDestruct,
    MoveDescription_EggBomb,
    MoveDescription_Lick,
    MoveDescription_Smog,
    MoveDescription_Sludge,
    MoveDescription_BoneClub,
    MoveDescription_FireBlast,
    MoveDescription_Waterfall,
    MoveDescription_Clamp,
    MoveDescription_Swift,
    MoveDescription_SkullBash,
    MoveDescription_SpikeCannon,
    MoveDescription_Constrict,
    MoveDescription_Amnesia,
    MoveDescription_Kinesis,
    MoveDescription_SoftBoiled,
    MoveDescription_HiJumpKick,
    MoveDescription_Glare,
    MoveDescription_DreamEater,
    MoveDescription_PoisonGas,
    MoveDescription_Barrage,
    MoveDescription_LeechLife,
    MoveDescription_LovelyKiss,
    MoveDescription_SkyAttack,
    MoveDescription_Transform,
    MoveDescription_Bubble,
    MoveDescription_DizzyPunch,
    MoveDescription_Spore,
    MoveDescription_Flash,
    MoveDescription_Psywave,
    MoveDescription_Splash,
    MoveDescription_AcidArmor,
    MoveDescription_Crabhammer,
    MoveDescription_Explosion,
    MoveDescription_FurySwipes,
    MoveDescription_Bonemerang,
    MoveDescription_Rest,
    MoveDescription_RockSlide,
    MoveDescription_HyperFang,
    MoveDescription_Sharpen,
    MoveDescription_Conversion,
    MoveDescription_TriAttack,
    MoveDescription_SuperFang,
    MoveDescription_Slash,
    MoveDescription_Substitute,
    MoveDescription_Struggle,
    MoveDescription_Sketch,
    MoveDescription_TripleKick,
    MoveDescription_Thief,
    MoveDescription_SpiderWeb,
    MoveDescription_MindReader,
    MoveDescription_Nightmare,
    MoveDescription_FlameWheel,
    MoveDescription_Snore,
    MoveDescription_Curse,
    MoveDescription_Flail,
    MoveDescription_Conversion2,
    MoveDescription_Aeroblast,
    MoveDescription_CottonSpore,
    MoveDescription_Reversal,
    MoveDescription_Spite,
    MoveDescription_PowderSnow,
    MoveDescription_Protect,
    MoveDescription_MachPunch,
    MoveDescription_ScaryFace,
    MoveDescription_FaintAttack,
    MoveDescription_SweetKiss,
    MoveDescription_BellyDrum,
    MoveDescription_SludgeBomb,
    MoveDescription_MudSlap,
    MoveDescription_Octazooka,
    MoveDescription_Spikes,
    MoveDescription_ZapCannon,
    MoveDescription_Foresight,
    MoveDescription_DestinyBond,
    MoveDescription_PerishSong,
    MoveDescription_IcyWind,
    MoveDescription_Detect,
    MoveDescription_BoneRush,
    MoveDescription_LockOn,
    MoveDescription_Outrage,
    MoveDescription_Sandstorm,
    MoveDescription_GigaDrain,
    MoveDescription_Endure,
    MoveDescription_Charm,
    MoveDescription_Rollout,
    MoveDescription_FalseSwipe,
    MoveDescription_Swagger,
    MoveDescription_MilkDrink,
    MoveDescription_Spark,
    MoveDescription_FuryCutter,
    MoveDescription_SteelWing,
    MoveDescription_MeanLook,
    MoveDescription_Attract,
    MoveDescription_SleepTalk,
    MoveDescription_HealBell,
    MoveDescription_Return,
    MoveDescription_Present,
    MoveDescription_Frustration,
    MoveDescription_Safeguard,
    MoveDescription_PainSplit,
    MoveDescription_SacredFire,
    MoveDescription_Magnitude,
    MoveDescription_DynamicPunch,
    MoveDescription_Megahorn,
    MoveDescription_DragonBreath,
    MoveDescription_BatonPass,
    MoveDescription_Encore,
    MoveDescription_Pursuit,
    MoveDescription_RapidSpin,
    MoveDescription_SweetScent,
    MoveDescription_IronTail,
    MoveDescription_MetalClaw,
    MoveDescription_VitalThrow,
    MoveDescription_MorningSun,
    MoveDescription_Synthesis,
    MoveDescription_Moonlight,
    MoveDescription_HiddenPower,
    MoveDescription_CrossChop,
    MoveDescription_Twister,
    MoveDescription_RainDance,
    MoveDescription_SunnyDay,
    MoveDescription_Crunch,
    MoveDescription_MirrorCoat,
    MoveDescription_PsychUp,
    MoveDescription_ExtremeSpeed,
    MoveDescription_AncientPower,
    MoveDescription_ShadowBall,
    MoveDescription_FutureSight,
    MoveDescription_RockSmash,
    MoveDescription_Whirlpool,
    MoveDescription_BeatUp,
    MoveDescription_FakeOut,
    MoveDescription_Uproar,
    sTAILWINDDescription,
    MoveDescription_SpitUp,
    MoveDescription_Swallow,
    MoveDescription_HeatWave,
    MoveDescription_Hail,
    MoveDescription_Torment,
    MoveDescription_Flatter,
    MoveDescription_WillOWisp,
    MoveDescription_Memento,
    MoveDescription_Facade,
    MoveDescription_FocusPunch,
    MoveDescription_SmellingSalt,
    MoveDescription_FollowMe,
    MoveDescription_NaturePower,
    MoveDescription_Charge,
    MoveDescription_Taunt,
    MoveDescription_HelpingHand,
    MoveDescription_Trick,
    MoveDescription_RolePlay,
    MoveDescription_Wish,
    MoveDescription_Assist,
    MoveDescription_Ingrain,
    MoveDescription_Superpower,
    MoveDescription_MagicCoat,
    MoveDescription_Recycle,
    MoveDescription_Revenge,
    MoveDescription_BrickBreak,
    MoveDescription_Yawn,
    MoveDescription_KnockOff,
    MoveDescription_Endeavor,
    MoveDescription_Eruption,
    MoveDescription_SkillSwap,
    MoveDescription_Imprison,
    MoveDescription_Refresh,
    MoveDescription_Grudge,
    MoveDescription_Snatch,
    MoveDescription_SecretPower,
    MoveDescription_Dive,
    MoveDescription_ArmThrust,
    MoveDescription_Camouflage,
    MoveDescription_TailGlow,
    MoveDescription_LusterPurge,
    MoveDescription_MistBall,
    MoveDescription_FeatherDance,
    MoveDescription_TeeterDance,
    MoveDescription_BlazeKick,
    MoveDescription_MudSport,
    MoveDescription_IceBall,
    MoveDescription_NeedleArm,
    MoveDescription_SlackOff,
    MoveDescription_HyperVoice,
    MoveDescription_PoisonFang,
    MoveDescription_CrushClaw,
    MoveDescription_BlastBurn,
    MoveDescription_HydroCannon,
    MoveDescription_MeteorMash,
    MoveDescription_Astonish,
    MoveDescription_WeatherBall,
    MoveDescription_Aromatherapy,
    MoveDescription_FakeTears,
    MoveDescription_AirCutter,
    MoveDescription_Overheat,
    MoveDescription_OdorSleuth,
    MoveDescription_RockTomb,
    MoveDescription_SilverWind,
    MoveDescription_MetalSound,
    MoveDescription_GrassWhistle,
    MoveDescription_Tickle,
    MoveDescription_CosmicPower,
    MoveDescription_WaterSpout,
    MoveDescription_SignalBeam,
    MoveDescription_ShadowPunch,
    MoveDescription_Extrasensory,
    MoveDescription_SkyUppercut,
    MoveDescription_SandTomb,
    MoveDescription_SheerCold,
    MoveDescription_MuddyWater,
    MoveDescription_BulletSeed,
    MoveDescription_AerialAce,
    MoveDescription_IcicleSpear,
    MoveDescription_IronDefense,
    MoveDescription_Block,
    MoveDescription_Howl,
    MoveDescription_DragonClaw,
    MoveDescription_FrenzyPlant,
    MoveDescription_BulkUp,
    MoveDescription_Bounce,
    MoveDescription_MudShot,
    MoveDescription_PoisonTail,
    MoveDescription_Covet,
    MoveDescription_VoltTackle,
    MoveDescription_MagicalLeaf,
    MoveDescription_WaterSport,
    MoveDescription_CalmMind,
    MoveDescription_LeafBlade,
    MoveDescription_DragonDance,
    MoveDescription_RockBlast,
    MoveDescription_ShockWave,
    MoveDescription_WaterPulse,
    MoveDescription_DoomDesire,
    MoveDescription_PsychoBoost,
    MoveDescription_Roost,
    MoveDescription_Gravity,
	MoveDescription_Foresight,
	[MOVE_WAKE_UP_SLAP - 1] = sWAKE_UP_SLAPDescription,
    [MOVE_HAMMER_ARM - 1] = sHAMMER_ARMDescription,
    [MOVE_GYRO_BALL - 1] = sGYRO_BALLDescription,
    [MOVE_HEALING_WISH - 1] = sHEALING_WISHDescription,
    [MOVE_BRINE - 1] = sBRINEDescription,
    [MOVE_NATURAL_GIFT - 1] = sNATURAL_GIFTDescription,
    [MOVE_FEINT - 1] = sFEINTDescription,
    [MOVE_PLUCK - 1] = sPLUCKDescription,
    [MOVE_STOCKPILE - 1] = MoveDescription_Stockpile,
    [MOVE_ACUPRESSURE - 1] = sACUPRESSUREDescription,
    [MOVE_METAL_BURST - 1] = sMETAL_BURSTDescription,
    [MOVE_U_TURN - 1] = sU_TURNDescription,
    [MOVE_CLOSE_COMBAT - 1] = sCLOSE_COMBATDescription,
    [MOVE_PAYBACK - 1] = sPAYBACKDescription,
    [MOVE_ASSURANCE - 1] = sASSURANCEDescription,
    [MOVE_EMBARGO - 1] = sEMBARGODescription,
    [MOVE_FLING - 1] = sFLINGDescription,
    [MOVE_PSYCHO_SHIFT - 1] = sPSYCHO_SHIFTDescription,
    [MOVE_TRUMP_CARD - 1] = sTRUMP_CARDDescription,
    [MOVE_HEAL_BLOCK - 1] = sHEAL_BLOCKDescription,
    [MOVE_WRING_OUT - 1] = sWRING_OUTDescription,
    [MOVE_POWER_TRICK - 1] = sPOWER_TRICKDescription,
    [MOVE_GASTRO_ACID - 1] = sGASTRO_ACIDDescription,
    [MOVE_NIGHT_SHADE - 1] = MoveDescription_NightShade,
    [MOVE_ME_FIRST - 1] = sME_FIRSTDescription,
    [MOVE_COPYCAT - 1] = sNotDoneYetDescription,
    [MOVE_POWER_SWAP - 1] = sPOWER_SWAPDescription,
    [MOVE_GUARD_SWAP - 1] = sGUARD_SWAPDescription,
    [MOVE_PUNISHMENT - 1] = sPUNISHMENTDescription,
    [MOVE_LAST_RESORT - 1] = sLAST_RESORTDescription,
    [MOVE_WORRY_SEED - 1] = sWORRY_SEEDDescription,
    [MOVE_SUCKER_PUNCH - 1] = sSUCKER_PUNCHDescription,
    [MOVE_TOXIC_SPIKES - 1] = sTOXIC_SPIKESDescription,
    [MOVE_HEART_SWAP - 1] = sHEART_SWAPDescription,
    [MOVE_AQUA_RING - 1] = sAQUA_RINGDescription,
    [MOVE_MAGNET_RISE - 1] = sMAGNET_RISEDescription,
    [MOVE_FLARE_BLITZ - 1] = sFLARE_BLITZDescription,
    [MOVE_FORCE_PALM - 1] = sFORCE_PALMDescription,
    [MOVE_AURA_SPHERE - 1] = sAURA_SPHEREDescription,
    [MOVE_ROCK_POLISH - 1] = sROCK_POLISHDescription,
    [MOVE_POISON_JAB - 1] = sPOISON_JABDescription,
    [MOVE_DARK_PULSE - 1] = sDARK_PULSEDescription,
    [MOVE_NIGHT_SLASH - 1] = sNotDoneYetDescription,
    [MOVE_AQUA_TAIL - 1] = sAQUA_TAILDescription,
    [MOVE_SEED_BOMB - 1] = sSEED_BOMBDescription,
    [MOVE_AIR_SLASH - 1] = sAIR_SLASHDescription,
    [MOVE_X_SCISSOR - 1] = sX_SCISSORDescription,
    [MOVE_BUG_BUZZ - 1] = sBUG_BUZZDescription,
    [MOVE_DRAGON_PULSE - 1] = sDRAGON_PULSEDescription,
    [MOVE_DRAGON_RUSH - 1] = sDRAGON_RUSHDescription,
    [MOVE_POWER_GEM - 1] = sPOWER_GEMDescription,
    [MOVE_DRAIN_PUNCH - 1] = sNotDoneYetDescription,
    [MOVE_VACUUM_WAVE - 1] = sVACUUM_WAVEDescription,
    [MOVE_FOCUS_BLAST - 1] = sFOCUS_BLASTDescription,
    [MOVE_ENERGY_BALL - 1] = sENERGY_BALLDescription,
    [MOVE_BRAVE_BIRD - 1] = sBRAVE_BIRDDescription,
    [MOVE_EARTH_POWER - 1] = sEARTH_POWERDescription,
    [MOVE_SWITCHEROO - 1] = sSWITCHEROODescription,
    [MOVE_GIGA_IMPACT - 1] = sNotDoneYetDescription,
    [MOVE_NASTY_PLOT - 1] = sNASTY_PLOTDescription,
    [MOVE_BULLET_PUNCH - 1] = sNotDoneYetDescription,
    [MOVE_AVALANCHE - 1] = sNotDoneYetDescription,
    [MOVE_ICE_SHARD - 1] = sICE_SHARDDescription,
    [MOVE_SHADOW_CLAW - 1] = sNotDoneYetDescription,
    [MOVE_THUNDER_FANG - 1] = sTHUNDER_FANGDescription,
    [MOVE_ICE_FANG - 1] = sICE_FANGDescription,
    [MOVE_FIRE_FANG - 1] = sFIRE_FANGDescription,
    [MOVE_SHADOW_SNEAK - 1] = sSHADOW_SNEAKDescription,
    [MOVE_MUD_BOMB - 1] = sMUD_BOMBDescription,
    [MOVE_PSYCHO_CUT - 1] = sPSYCHO_CUTDescription,
    [MOVE_ZEN_HEADBUTT - 1] = sNotDoneYetDescription,
    [MOVE_MIRROR_SHOT - 1] = sMIRROR_SHOTDescription,
    [MOVE_FLASH_CANNON - 1] = sFLASH_CANNONDescription,
    [MOVE_ROCK_CLIMB - 1] = sROCK_CLIMBDescription,
    [MOVE_DEFOG - 1] = sDEFOGDescription,
    [MOVE_TRICK_ROOM - 1] = sTRICK_ROOMDescription,
    [MOVE_DRACO_METEOR - 1] = sNotDoneYetDescription,
    [MOVE_DISCHARGE - 1] = sNotDoneYetDescription,
    [MOVE_LAVA_PLUME - 1] = sLAVA_PLUMEDescription,
    [MOVE_LEAF_STORM - 1] = sNotDoneYetDescription,
    [MOVE_POWER_WHIP - 1] = sPOWER_WHIPDescription,
    [MOVE_ROCK_WRECKER - 1] = sNotDoneYetDescription,
    [MOVE_CROSS_POISON - 1] = sNotDoneYetDescription,
    [MOVE_GUNK_SHOT - 1] = sGUNK_SHOTDescription,
    [MOVE_IRON_HEAD - 1] = sIRON_HEADDescription,
    [MOVE_MAGNET_BOMB - 1] = sMAGNET_BOMBDescription,
    [MOVE_STONE_EDGE - 1] = sSTONE_EDGEDescription,
    [MOVE_CAPTIVATE - 1] = sCAPTIVATEDescription,
    [MOVE_STEALTH_ROCK - 1] = sSTEALTH_ROCKDescription,
    [MOVE_GRASS_KNOT - 1] = sGRASS_KNOTDescription,
    [MOVE_CHATTER - 1] = sCHATTERDescription,
    [MOVE_JUDGMENT - 1] = sJUDGMENTDescription,
    [MOVE_BUG_BITE - 1] = sPLUCKDescription,
    [MOVE_CHARGE_BEAM - 1] = sCHARGE_BEAMDescription,
    [MOVE_WOOD_HAMMER - 1] = sNotDoneYetDescription,
    [MOVE_AQUA_JET - 1] = sNotDoneYetDescription,
    [MOVE_ATTACK_ORDER - 1] = sATTACK_ORDERDescription,
    [MOVE_DEFEND_ORDER - 1] = sDEFEND_ORDERDescription,
    [MOVE_HEAL_ORDER - 1] = sNotDoneYetDescription,
    [MOVE_HEAD_SMASH - 1] = sHEAD_SMASHDescription,
    [MOVE_DOUBLE_HIT - 1] = sDOUBLE_HITDescription,
    [MOVE_ROAR_OF_TIME - 1] = sROAR_OF_TIMEDescription,
    [MOVE_SPACIAL_REND - 1] = sSPACIAL_RENDDescription,
    [MOVE_LUNAR_DANCE - 1] = sHEALING_WISHDescription,
    [MOVE_CRUSH_GRIP - 1] = sWRING_OUTDescription,
    [MOVE_MAGMA_STORM - 1] = sMAGMA_STORMDescription,
    [MOVE_DARK_VOID - 1] = sDARK_VOIDDescription,
    [MOVE_SEED_FLARE - 1] = sSEED_FLAREDescription,
    [MOVE_OMINOUS_WIND - 1] = sOMINOUS_WINDDescription,
    [MOVE_SHADOW_FORCE - 1] = sSHADOW_FORCEDescription,
};
