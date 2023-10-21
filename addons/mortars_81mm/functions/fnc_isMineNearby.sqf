/*
	FILE: fnc_isMineNearby.sqf

	Name: tklama_81mm_fnc_isMineNearby

	Author(s):
		ilbinek

	Description:
		Checkes if the mine is nearby the box

	Parameters:
		_mine	- string	- Mine class name

	Returns:
		Nothing

	Examples:
		> ["tbd_mortar_81_shell_he"] call tklama_81mm_fnc_isMineNearby;

	Public:
		Yes
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
false;
