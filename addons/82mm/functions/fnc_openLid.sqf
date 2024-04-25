/*
	FILE: fnc_openLid.sqf

	Name: tbd_mortars_82mm_fnc_openLid

	Author(s):
		ilbinek

	Description:
		Opens the lid on the 82mm ammo box

	Parameters:
        _box    - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_82mm_fnc_openLid;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box animateSource["top_source", 1];
_box setVariable ["top", true, true];
