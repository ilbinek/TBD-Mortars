/*
	FILE: fnc_close.sqf

	Name: tbd_mortars_107mm_fnc_close

	Author(s):
		ilbinek

	Description:
		Closes the box top on the 100mm ammo box

	Parameters:
        _box    - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this] call tbd_mortars_107mm_fnc_close;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box animateSource ["cover_source", 0];
_box setVariable ["opened", false, true];
