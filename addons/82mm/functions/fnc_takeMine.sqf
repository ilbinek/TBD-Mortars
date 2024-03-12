/*
	FILE: fnc_takeMine.sqf

	Name: tbd_mortars_82mm_fnc_takeMine

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the mine  

	Returns:
		Nothing

	Examples:
		> [_this, 5] call tbd_mortars_82mm_fnc_takeMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

// Check if the box is empty and exit
private _m = format ["round_%1", _nbr];
if (_box getVariable _m == 0) exitWith {};

// Deterimne which classname to use and animate it out
private _mineClass = "";

switch (_box getVariable [_m, 0]) do {
	case 1: {_mineClass = QUOTE(TBD_MORTAR_82mm_HE); _box animate [format ["mine_he_%1_h", _nbr], 1, true];};
	case 2: {_mineClass = QUOTE(TBD_MORTAR_82mm_SMOKE); _box animate [format ["mine_smoke_%1_h", _nbr], 1, true];};
	case 3: {_mineClass = QUOTE(TBD_MORTAR_82mm_ILLUM); _box animate [format ["mine_illum_%1_h", _nbr], 1, true];};
	case 4: {_mineClass = QUOTE(TBD_MORTAR_82mm_CUMUL); _box animate [format ["mine_heat_%1_h", _nbr], 1, true];};
};

// Remove the mine from the box
_box setVariable [_m, 0, true];

// Add the mine to the players inventory/on the ground
if ((player canAddItemToVest _mineClass) || (player canAddItemToBackpack _mineClass)) then {
	if (player canAddItemToVest _mineClass) then {
		player addItemToVest _mineClass;
	} else {
		player addItemToBackpack _mineClass;
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
	_holder addMagazineCargoGlobal [_mineClass, 1];
};
