#define PREFIX TBD_MORTARS
#define COMPONENT 152mm
#include "\x\tbd_mortars\addons\main\script_mod.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTARS_152MM_BOX_HE tbd_mortars_152mm_box_he
#define TBD_MORTARS_152MM_BOX_NUCLEAR tbd_mortars_152mm_box_nuclear
#define TBD_MORTARS_152MM_BOX_DPICM tbd_mortars_152mm_box_dpicm
#define TBD_MORTARS_152MM_BOX_CHEMICAL tbd_mortars_152mm_box_chemical
#define TBD_MORTARS_152MM_BOX_LASER tbd_mortars_152mm_box_laser

#define TBD_MORTARS_152MM_ROUND_HE tbd_mortars_152mm_round_he
#define TBD_MORTARS_152MM_ROUND_NUCLEAR tbd_mortars_152mm_round_nuclear
#define TBD_MORTARS_152MM_ROUND_DPICM tbd_mortars_152mm_round_dpicm
#define TBD_MORTARS_152MM_ROUND_CHEMICAL tbd_mortars_152mm_round_chemical
#define TBD_MORTARS_152MM_ROUND_LASER tbd_mortars_152mm_round_laser

#define TBD_MORTARS_152mm_ROUND_AMMO_HE tbd_mortars_152mm_round_ammo_he
#define TBD_MORTARS_152mm_ROUND_AMMO_NUCLEAR tbd_mortars_152mm_round_ammo_nuclear
#define TBD_MORTARS_152mm_ROUND_AMMO_DPICM tbd_mortars_152mm_round_ammo_dpicm
#define TBD_MORTARS_152mm_ROUND_AMMO_CHEMICAL tbd_mortars_152mm_round_ammo_chemical
#define TBD_MORTARS_152mm_ROUND_AMMO_LASER tbd_mortars_152mm_round_ammo_laser

#define TBD_MORTARS_152mm_MAG_HE tbd_mortars_152mm_mag_he
#define TBD_MORTARS_152mm_MAG_NUCLEAR tbd_mortars_152mm_mag_nuclear
#define TBD_MORTARS_152mm_MAG_DPICM tbd_mortars_152mm_mag_dpicm
#define TBD_MORTARS_152mm_MAG_CHEMICAL tbd_mortars_152mm_mag_chemical
#define TBD_MORTARS_152mm_MAG_LASER tbd_mortars_152mm_mag_laser

#define TBD_MORTARS_152mm_CASING TBD_mortars_152mm_casing
#define TBD_MORTARS_152mm_CASING_SPENT TBD_mortars_152mm_casing_spent
