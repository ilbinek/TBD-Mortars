/*
	FILE: fnc_putMine.sqf

	Name: tbd_mortars_107mm_fnc_putMine

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
		> [_this, 5, "tbd_mortars_107mm_round_he"] call tbd_mortars_107mm_fnc_putMine;

	Public:
		No
*/

#include "..\script_component.hpp"
params ["_box", "_nbr", "_mineClass"];
if !([_box, _nbr, _mineClass] call FUNC(canPut)) exitWith {};

// Set the box to the mine
_box setVariable [format["round_%1", _nbr], 1, true];
// Animate the box
private _b = format ["mine_%1_source", _nbr];
_box animateSource [_b, 0, true];

[_mineClass] call EFUNC(main,removeNearbyShell);
