/*
	FILE: fnc_canReturn.sqf

	Name: tbd_mortars_81mm_fnc_canReturn

	Author(s):
		ilbinek

	Description:
		Determines if given tube is empty

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the tube

	Returns:
		bool	- True if tube is empty

	Examples:
		> [_this, 5] call tbd_mortars_81mm_fnc_canReturn;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

private _cap = format["cap_%1", _nbr];
private _rnd = format["round_%1", _nbr];
private _ret = _box getVariable _cap && _box getVariable _rnd == 0;

_ret
