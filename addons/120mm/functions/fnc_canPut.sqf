/*
	FILE: fnc_canPut.sqf

	Name: tbd_mortars_120mm_fnc_canPut

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    	- object    - The box
        _nbr    	- number    - Number of the mine  
		_mineClass 	- string - Classname of the mine

	Returns:
		Nothing

	Examples:
		> [_this, 5, tbd_mortar_120mm_shell_he_charge_7] call tbd_mortars_120mm_fnc_canPut;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mineClass"];

private _rnd = format["round_%1", _nbr];
if (!(_box getVariable ["opened", false])) exitWith {false};
if (_box getVariable [_rnd, 0] != 0) exitWith {false};

// Find the closest shell of the same type
// Get the partial classname
_mineClass = _mineClass select [0, count _mineClass - 1];

private _ret = false;

for "_i" from 1 to 7 do {
	private _shell = format["%1%2", _mineClass, _i];
	if ([_shell] call EFUNC(main,isMineNearby)) exitWith {_ret = true};
};

_ret
