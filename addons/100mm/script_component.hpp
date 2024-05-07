#define PREFIX TBD_MORTARS
#define COMPONENT 100mm
#include "\x\tbd_mortars\addons\main\script_mod.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTARS_100MM_BOX_AP tbd_mortars_100mm_box_ap
#define TBD_MORTARS_100MM_BOX_HEAT tbd_mortars_100mm_box_heat
#define TBD_MORTARS_100MM_BOX_HE tbd_mortars_100mm_box_he
#define TBD_MORTARS_100MM_BOX_STAL tbd_mortars_100mm_box_stal
#define TBD_MORTARS_100MM_BOX_ATGM tbd_mortars_100mm_box_atgm

#define TBD_MORTARS_100MM_ROUND_HE tbd_mortars_100mm_round_he
#define TBD_MORTARS_100MM_ROUND_HEAT tbd_mortars_100mm_round_heat
#define TBD_MORTARS_100MM_ROUND_AP tbd_mortars_100mm_round_AP
#define TBD_MORTARS_100MM_ROUND_STAL tbd_mortars_100mm_round_stal
#define TBD_MORTARS_100MM_ROUND_ATGM tbd_mortars_100mm_round_atgm

#define TBD_MORTARS_100MM_ROUND_AMMO_HE tbd_mortars_100mm_round_ammo_he
#define TBD_MORTARS_100MM_ROUND_AMMO_HEAT tbd_mortars_100mm_round_ammo_heat
#define TBD_MORTARS_100MM_ROUND_AMMO_AP tbd_mortars_100mm_round_ammo_AP
#define TBD_MORTARS_100MM_ROUND_AMMO_STAL tbd_mortars_100mm_round_ammo_stal
#define TBD_MORTARS_100MM_ROUND_AMMO_ATGM tbd_mortars_100mm_round_ammo_atgm

#define TBD_MORTARS_100MM_MAG_AP tbd_mortars_100mm_mag_ap
#define TBD_MORTARS_100MM_MAG_HEAT tbd_mortars_100mm_mag_heat
#define TBD_MORTARS_100MM_MAG_HE tbd_mortars_100mm_mag_he
#define TBD_MORTARS_100MM_MAG_STAL tbd_mortars_100mm_mag_stal
#define TBD_MORTARS_100MM_MAG_ATGM tbd_mortars_100mm_mag_atgm

#define TBD_MORTARS_100MM_CASING_SPENT TBD_mortars_100mm_casing_spent
