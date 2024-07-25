/*
	FILE: fnc_takeMine.sqf

	Name: tbd_mortars_100mm_fnc_takeMine

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    	- object    - The box
        _nbr    	- number    - Number of the mine  
		_mineClass 	- string 	- Classname of the mine

	Returns:
		Nothing

	Examples:
		> [_this, 5, tbd_mortars_100mm_round_AP] call tbd_mortars_100mm_fnc_takeMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mineClass"];

// Check if the box is empty and exit
private _m = format ["round_%1", _nbr];
if (_box getVariable _m == 0) exitWith {};

private _b = format ["mine_%1_source", _nbr];
_box animateSource [_b, 1, true];

// Remove the mine from the box
_box setVariable [_m, 0, true];

[_mineClass] call EFUNC(main,addNearbyShell);
