/*
	FILE: fnc_remoteUnloadShell.sqf

	Name: tbd_mortars_main_fnc_remoteUnloadShell

	Author(s):
		ilbinek

	Description:
		Unloads a shell from the turret

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className
		_source - object    - The player that is unloading

	Returns:
		nothing

	Examples:
		> [_this, 5, "tbd_mortar_81mm_shell_he"] call tbd_mortars_main_fnc_remoteUnloadShell;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell", "_source"];

// Add the shell to the player's inventory/ground
if ((_source canAddItemToVest _shell) || (_source canAddItemToBackpack _shell)) then {
	// Add the shell to player's inventory
	if (_source canAddItemToUniform _shell) then {
		_source addItemToVest _shell;
	} else {
		_source addItemToBackpack _shell;
	};
} else {
	// Add the shell to the ground
	private _nearby = nearestObjects [_this select 0, ['GroundWeaponHolder'], 3];
	private _holder = objNull;
	if (count _nearby > 0) then {_holder = _nearby select 0};
	if (isNull _holder) then {
		_holder = 'GroundWeaponHolder' createVehicle (getPosATL _obj);
	};

	_holder addMagazineCargoGlobal [_shell, 1];
	_holder setPosATL getPos _source;
};

// emty the turret
private _mags = _obj magazinesTurret [_turret];
{
	_obj removeMagazinesTurret [_x, [_turret]];
} forEach _mags;
