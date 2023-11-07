#define PREFIX TBD
#define COMPONENT mortars_81mm
#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define TBD_MORTAR_81mm_BOX_HE tbd_mortar_81mm_box_he
#define TBD_MORTAR_81mm_BOX_SMOKE tbd_mortar_81mm_box_smoke
#define TBD_MORTAR_81mm_BOX_ILLUM tbd_mortar_81mm_box_illum
#define TBD_MORTAR_81mm_HE tbd_mortar_81mm_shell_he
#define TBD_MORTAR_81mm_SMOKE tbd_mortar_81mm_shell_smoke
#define TBD_MORTAR_81mm_ILLUM tbd_mortar_81mm_shell_illum

#define TBD_MORTAR_81mm_SHELL_AMMO_HE tbd_mortar_81mm_shell_ammo_he
#define TBD_MORTAR_81mm_SHELL_AMMO_SMOKE tbd_mortar_81mm_shell_ammo_smoke
#define TBD_MORTAR_81mm_SHELL_AMMO_ILLUM tbd_mortar_81mm_shell_ammo_illum
