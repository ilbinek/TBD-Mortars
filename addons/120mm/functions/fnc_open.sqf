/*
	FILE: fnc_open.sqf

	Name: tbd_mortars_120mm_fnc_open

	Author(s):
		ilbinek

	Description:
		Opens the lid on the 120mm ammo box

	Parameters:
        _box    - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_120mm_fnc_open;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box animateSource ["cover_source", 1];
_box setVariable ["opened", true, true];
