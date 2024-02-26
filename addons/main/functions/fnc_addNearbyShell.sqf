/*
	FILE: fnc_addNearbyShell.sqf

	Name: tbd_mortars_main_fnc_addNearbyShell

	Author(s):
		ilbinek

	Description:
		Adds shell to either player inventory or to the ground

	Parameters:
		_shell	- Class	- The shell class to be added

	Returns:
		Nothing
	
	Examples:
		> ["he"] call tbd_mortars_main_fnc_addNearbyShell;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_shell"];

// Add the shell to the players inventory/on the ground
if ((player canAddItemToVest _shell) || (player canAddItemToBackpack _shell)) then {
	if (player canAddItemToVest _shell) then {
		player addItemToVest _shell;
	} else {
		player addItemToBackpack _shell;
	};
} else {
	// Add it to the ground
	private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
	private _holder = objNull;
	if (count _nearby > 0) then {
		_holder = _nearby#0;
	};
	if (isNull _holder) then {
		_holder = "GroundWeaponHolder" createVehicle (getPosATL player);
	};
	_holder setPosATL (getPosATL player);
	_holder addMagazineCargoGlobal [_shell, 1];
};
