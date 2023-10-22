/*
	FILE: fnc_checkCanLoadShell.sqf

	Name: tbd_mortars_main_fnc_checkCanLoadShell

	Author(s):
		ilbinek

	Description:
		Checks if mortar is empty and can be loaded

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className

	Returns:
		bool	- true if the mortar is empty and the shell is nearby

	Examples:
		> [_this, 5] call tbd_mortars_main_fnc_checkCanLoadShell;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell"];

// Check if the turret is empty
private _mags = _obj magazinesTurret [_turret];
{
	private _nbr = _obj magazineTurretAmmo [_x, [0]];
	if (_nbr == 0) then {
		_obj removeMagazineTurret [_x, [0]];
	};
} forEach _mags;

if (count (_obj magazinesTurret [0]) != 0) exitWith {false};

// Check if the shell is nearby
private _magazines = magazines player;

private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
private _holder = objNull;
{
	// Current result is saved in variable _x
	if (_shell in (magazineCargo _x)) exitWith {_holder = _x};
} forEach _nearby;

if ((_shell in _magazines) || !(isNull _holder)) exitWith {true};
false
