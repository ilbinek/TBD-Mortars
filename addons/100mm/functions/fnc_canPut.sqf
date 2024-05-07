/*
	FILE: fnc_canPut.sqf

	Name: tbd_mortars_100mm_fnc_canPut

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
		> [_this, 5, tbd_mortars_100mm_round_AP] call tbd_mortars_100mm_fnc_canPut;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mineClass"];
private _rnd = format["round_%1", _nbr];
if (!(_box getVariable ["opened", false])) exitWith {false};
if (_box getVariable [_rnd, 0] != 0) exitWith {false};

private _near = nearestObjects [player, [_mineClass], 2];

if (count _near > 0) exitWith {true};

false
