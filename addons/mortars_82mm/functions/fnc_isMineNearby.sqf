/*
	FILE: fnc_isMineNearby.sqf

	Name: tbd_mortars_82mm_fnc_isMineNearby

	Author(s):
		ilbinek

	Description:
		Checkes if the mine is nearby the box

	Parameters:
		_mine	- string	- Mine class name

	Returns:
		bool	- true if mine is nearby

	Examples:
		> ["tbd_mortar_82_shell_he"] call tbd_mortars_82mm_fnc_isMineNearby;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_mine"];

private _magArray = magazines player;

private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
private _holder = objNull;

{
	if (_mine in (magazineCargo _x)) exitWith {_holder = _x};
} foreach _nearby;

if (_mine in _magArray || !(isNull _holder)) exitWith {true};
false
