#include "script_component.hpp"

#include "XEH_PREP.hpp"

ADDON = true;

// init addon settings

[
	QGVAR(loadTime),
	"TIME",
	[localize "STR_TBD_MORTAR_LOADING_TIME", localize "STR_TBD_MORTAR_LOADING_TIME_DESC"],
	QUOTE(ADDON_NICE),
	[0,60,1]
] call CBA_fnc_addSetting;

[
	QGVAR(unloadTime),
	"TIME",
	[localize "STR_TBD_MORTAR_UNLOADING_TIME", localize "STR_TBD_MORTAR_UNLOADING_TIME_DESC"],
	QUOTE(ADDON_NICE),
	[0,120,5]
] call CBA_fnc_addSetting;

[
	QGVAR(chargeChangeTime),
	"TIME",
	[LLSTRING(charge_change_time), LLSTRING(charge_change_time_desc)],
	QUOTE(ADDON_NICE),
	[0,120,5]
] call CBA_fnc_addSetting;

[
	QGVAR(unpack105Time),
	"TIME",
	[LLSTRING(unpack_105_time), LLSTRING(unpack_105_time_desc)],
	QUOTE(ADDON_NICE),
	[0,120,5]
] call CBA_fnc_addSetting;

[
	QGVAR(assemble105Time),
	"TIME",
	[LLSTRING(assemble_105_time), LLSTRING(assemble_105_time_desc)],
	QUOTE(ADDON_NICE),
	[0,120,5]
] call CBA_fnc_addSetting;

[
	QGVAR(pack105Time),
	"TIME",
	[LLSTRING(pack_105_time), LLSTRING(pack_105_time_desc)],
	QUOTE(ADDON_NICE),
	[0,120,5]
] call CBA_fnc_addSetting;

[
	QGVAR(disassemble105Time),
	"TIME",
	[LLSTRING(disassemble_105_time), LLSTRING(disassemble_105_time_desc)],
	QUOTE(ADDON_NICE),
	[0,120,5]
] call CBA_fnc_addSetting;

/*
[
	QGVAR(disableArtyComp),
	"CHECKBOX",
	[localize LSTRING(DISABLE_ARTY_COMP), localize LSTRING(DISABLE_ARTY_COMP_DESC)],
	QUOTE(ADDON_NICE),
	true
] call CBA_fnc_addSetting;
*/