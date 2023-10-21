/*
	FILE: fnc_canOpen.sqf

	Name: tbd_mortars_81mm_fnc_canOpen

	Author(s):
		ilbinek

	Description:
		Determines if a lid can be opened

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the lid  

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_81mm_fnc_canOpen;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

private _text = format ["cap_%1", _nbr];

private _ret = (_box animationphase _text < 0.1) && !(_box getVariable _text);

_ret
