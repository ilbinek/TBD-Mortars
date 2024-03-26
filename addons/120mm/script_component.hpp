#define PREFIX TBD_MORTARS
#define COMPONENT 120mm
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

#define TBD_MORTAR_120mm_BOX tbd_mortar_120mm_box

#define TBD_MORTAR_120mm_SHELL_HE tbd_mortar_120mm_shell_he
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 tbd_mortar_120mm_shell_he_charge_1
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_2 tbd_mortar_120mm_shell_he_charge_2
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_3 tbd_mortar_120mm_shell_he_charge_3
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_4 tbd_mortar_120mm_shell_he_charge_4
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_5 tbd_mortar_120mm_shell_he_charge_5
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_6 tbd_mortar_120mm_shell_he_charge_6
#define TBD_MORTAR_120mm_SHELL_HE_CHARGE_7 tbd_mortar_120mm_shell_he_charge_7

#define TBD_MORTAR_120mm_SHELL_AMMO_HE tbd_mortar_120mm_shell_ammo_he
