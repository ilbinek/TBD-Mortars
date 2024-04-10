/*
	FILE: fnc_canTake.sqf

	Name: tbd_mortars_120mm_fnc_canTake

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the mine  

	Returns:
		bool	- True if the mine can be taken

	Examples:
		> [_this, 2] call tbd_mortars_120mm_fnc_canTake;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

private _t = format ["round_%1", _nbr];
private _mine = _box getVariable [_t, 0];
private _ret = _mine != 0 && _box getVariable ["opened", false];

_ret
