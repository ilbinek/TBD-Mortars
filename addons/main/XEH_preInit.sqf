#include "script_component.hpp"

#include "XEH_PREP.hpp"

ADDON = true;

// init addon settings

[
	QGVAR(loadTime),
	"TIME",
	[localize "STR_TBD_MORTAR_LOADING_TIME", localize "STR_TBD_MORTAR_LOADING_TIME_DESC"],
	QUOTE(ADDON),
	[0,60,1]
] call CBA_fnc_addSetting;

[
	QGVAR(unloadTime),
	"TIME",
	[localize "STR_TBD_MORTAR_UNLOADING_TIME", localize "STR_TBD_MORTAR_UNLOADING_TIME_DESC"],
	QUOTE(ADDON),
	[0,120,5]
] call CBA_fnc_addSetting;
