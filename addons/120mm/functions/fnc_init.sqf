/*
	FILE: fnc_init.sqf

	Name: tbd_mortars_120_fnc_init

	Author(s):
		ilbinek

	Description:
		Initializes the 120 box

	Parameters:
        _box   - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this] call tbd_mortars_120_fnc_init;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box setVariable ["opened", false, true];
_box animateSource ["cover_source", 0];
