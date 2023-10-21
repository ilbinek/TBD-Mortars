/*
	FILE: fnc_canTake.sqf

	Name: tbd_mortars_81mm_fnc_canTake

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the mine  

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_81mm_fnc_canTake;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

private _t = format ["round_%1", _nbr];
diag_log format ["_t: %1", _t];
private _cap = format ["cap_%1", _nbr];
diag_log format ["_cap: %1", _cap];
private _mine = _box getVariable [_t, 0];
diag_log format ["_mine: %1", _mine];
private _ret = _mine != 0 && _box getVariable [_cap, false];

_ret
