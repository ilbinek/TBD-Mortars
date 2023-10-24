/*
	FILE: fnc_closeLid.sqf

	Name: tbd_mortars_81mm_fnc_closeLid

	Author(s):
		ilbinek

	Description:
		Closes the box top on the 8mm ammo box

	Parameters:
        _box    - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_81mm_fnc_closeLid;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box animate["top", 0];
_box setVariable ["top", false, true];
