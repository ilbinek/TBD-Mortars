#define PREFIX TBD_MORTARS
#define COMPONENT 82mm
#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTAR_82mm_BOX_HE tbd_mortar_82mm_box_he
#define TBD_MORTAR_82mm_BOX_SMOKE tbd_mortar_82mm_box_smoke
#define TBD_MORTAR_82mm_BOX_ILLUM tbd_mortar_82mm_box_illum
#define TBD_MORTAR_82mm_BOX_CUMUL tbd_mortar_82mm_box_cumul

#define TBD_MORTAR_82mm_HE tbd_mortar_82mm_shell_he
#define TBD_MORTAR_82mm_SMOKE tbd_mortar_82mm_shell_smoke
#define TBD_MORTAR_82mm_ILLUM tbd_mortar_82mm_shell_illum
#define TBD_MORTAR_82mm_CUMUL tbd_mortar_82mm_shell_cumul
#define TBD_MORTAR_82mm_HEAT tbd_mortar_82mm_shell_heat

#define TBD_MORTAR_82mm_SHELL_AMMO_HE tbd_mortar_82mm_shell_ammo_he
#define TBD_MORTAR_82mm_SHELL_AMMO_SMOKE tbd_mortar_82mm_shell_ammo_smoke
#define TBD_MORTAR_82mm_SHELL_AMMO_ILLUM tbd_mortar_82mm_shell_ammo_illum
#define TBD_MORTAR_82mm_SHELL_AMMO_CUMUL tbd_mortar_82mm_shell_ammo_cumul
#define TBD_MORTAR_82mm_SHELL_AMMO_CUMUL_SUB tbd_mortar_82mm_shell_ammo_cumul_sub
