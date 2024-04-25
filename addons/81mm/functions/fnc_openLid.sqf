/*
	FILE: fnc_openLid.sqf

	Name: tbd_mortars_81mm_fnc_openLid

	Author(s):
		ilbinek

	Description:
		Opens the lid on the 81mm ammo box

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the lid  

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_81mm_fnc_openLid;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

_box animateSource [format ["cap_%1_source", _nbr], 1];
_box animateSource [format ["cap_%1_stored_source", _nbr], 0];
_box setVariable [format ["cap_%1", _nbr], true, true];
