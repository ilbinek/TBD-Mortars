#define PREFIX TBD_MORTARS
#define COMPONENT 105mm
#include "\x\cba\addons\main\script_macros_common.hpp"

#define DISABLE_COMPILE_CACHE

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTARS_105mm_BOX tbd_mortars_105mm_box

#define TBD_MORTARS_105mm_SHELL_HE tbd_mortars_105mm_shell_he
#define TBD_MORTARS_105mm_SHELL_AMMO_HE tbd_mortars_105mm_shell_ammo_he
#define TBD_MORTARS_105mm_CASING_CHARGE_1 tbd_mortars_105mm_casing_charge_1
#define TBD_MORTARS_105mm_CASING_CHARGE_2 tbd_mortars_105mm_casing_charge_2
#define TBD_MORTARS_105mm_CASING_CHARGE_3 tbd_mortars_105mm_casing_charge_3
#define TBD_MORTARS_105mm_CASING_CHARGE_4 tbd_mortars_105mm_casing_charge_4
#define TBD_MORTARS_105mm_CASING_CHARGE_5 tbd_mortars_105mm_casing_charge_5
#define TBD_MORTARS_105mm_CASING_CHARGE_6 tbd_mortars_105mm_casing_charge_6
#define TBD_MORTARS_105mm_CASING_CHARGE_7 tbd_mortars_105mm_casing_charge_7
#define TBD_MORTARS_105mm_CASING_SPENT tbd_mortars_105mm_casing_spent
#define TBD_MORTARS_105mm_ROUND_HE tbd_mortars_105mm_round_he
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 tbd_mortars_105mm_round_he_charge_1
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_2 tbd_mortars_105mm_round_he_charge_2
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_3 tbd_mortars_105mm_round_he_charge_3
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_4 tbd_mortars_105mm_round_he_charge_4
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_5 tbd_mortars_105mm_round_he_charge_5
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_6 tbd_mortars_105mm_round_he_charge_6
#define TBD_MORTARS_105mm_ROUND_HE_CHARGE_7 tbd_mortars_105mm_round_he_charge_7
#define TBD_MORTARS_105mm_TUBE tbd_mortars_105mm_tube