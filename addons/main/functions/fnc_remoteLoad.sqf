/*
	FILE: fnc_remoteLoad.sqf
l
	Name: tbd_mortars_main_fnc_remoteLoad

	Author(s):
		ilbinek

	Description:
		Load a shell into the turret - local to the mortar

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className

	Returns:
		nothing

	Examples:
		> [_target, 0, "tbd_mortar_81mm_shell_he"] call tbd_mortars_main_fnc_remoteLoad;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell"];

// Remove all mags in given turret
private _mags = _obj magazinesTurret [_turret];
{
	_obj removeMagazineTurret [_x, [_turret]];
} forEach _mags;

_obj addMagazineTurret [_shell, [_turret], 1];
