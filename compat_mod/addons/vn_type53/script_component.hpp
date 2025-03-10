#define PREFIX tbd_mortars_comp
#define COMPONENT vn_type53
#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) TRIPLES(ADDON,fnc,fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction
#define TBD_MORT(cmp,fncName) tbd_mortars##_##cmp##_##fnc##_##fncName
#define QPATHMORT(cmp,fileName) QUOTE(x\tbd_mortars\addons\##cmp\##fileName)

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
