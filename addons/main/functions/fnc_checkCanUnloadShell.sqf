/*
	FILE: fnc_checkCanUnloadShell.sqf

	Name: tbd_mortars_main_fnc_checkCanUnloadShell

	Author(s):
		ilbinek

	Description:
		Checks if mortar has this shell loaded

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className

	Returns:
		bool	- true if the mortar has this shell loaded

	Examples:
		> [_this, 5, "tbd_mortar_81mm_shell_he"] call tbd_mortars_main_fnc_checkCanUnloadShell;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell"];

private _nbr = _obj magazineTurretAmmo [_shell, [_turret]];

if (_nbr > 0) exitWith {true};
false
