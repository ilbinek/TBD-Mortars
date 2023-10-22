/*
	FILE: fnc_canLoadMine.sqf

	Name: tbd_mortars_81mm_fnc_canLoadMine

	Author(s):
		ilbinek

	Description:
		Determines if given tube is empty and a mine to be loaded is nearby

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the tube
		_mine	- string	- Mine class name

	Returns:
		bool	- True if the tube is empty and a mine to be loaded is nearby

	Examples:
		> [_this, 5, "tbd_mortar_81_shell_he"] call tbd_mortars_81mm_fnc_canLoadMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mine"];

if (!([_box, _nbr] call FUNC(canReturn))) exitWith {false};

// Check if there's a mine like that nearby
if ([_mine] call FUNC(isMineNearby)) exitWith {true};
false;
