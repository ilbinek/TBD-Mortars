#define PREFIX TBD_MORTARS
#define COMPONENT 107mm
#include "\x\tbd_mortars\addons\main\script_mod.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction


#define TBD_MORTARS_107MM_BOX_HE tbd_mortars_107mm_box_he
#define TBD_MORTARS_107MM_ROUND_HE tbd_mortars_107mm_round_he
#define TBD_MORTARS_107MM_ROUND_AMMO_HE tbd_mortars_107mm_round_ammo_he


