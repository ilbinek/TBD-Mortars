/*
	FILE: fnc_close.sqf

	Name: tbd_mortars_120mm_fnc_close

	Author(s):
		ilbinek

	Description:
		Closes the box top on the 120mm ammo box

	Parameters:
        _box    - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_120mm_fnc_close;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box animateSource ["cover_source", 0];
_box setVariable ["opened", false, true];
