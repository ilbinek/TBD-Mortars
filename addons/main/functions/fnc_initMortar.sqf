/*
	FILE: fnc_initMortar.sqf

	Name: tbd_mortars_main_fnc_initMortar

	Author(s):
		ilbinek

	Description:
		Checkes if the mine is nearby the box

	Parameters:
		_mort	- object	- Mortar to be inited

	Returns:
		Nothing

	Examples:
		> [_morty] call tbd_mortars_main_fnc_initMortar;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_mort"];

if (GVAR(disableArtyComp)) then {
	enableEngineArtillery false;
};

