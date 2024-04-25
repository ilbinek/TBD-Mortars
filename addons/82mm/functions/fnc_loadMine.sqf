/*
	FILE: fnc_loadMine.sqf

	Name: tbd_mortars_82mm_fnc_loadMine

	Author(s):
		ilbinek

	Description:
		Loads a mine into the tube

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the tube
		_mine	- string	- Mine class name

	Returns:
		Nothing

	Examples:
		> [_this, 5, "tbd_mortar_82_shell_he"] call tbd_mortars_82mm_fnc_loadMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mine"];

// One last check
if (!([_box, _nbr, _mine] call FUNC(canLoadMine))) exitWith {};



// Check player inventory first
private _magazines = magazines player;
if (_mine in _magazines) then {
	// Mine is in players inventory, remove it from it and add it to the box
	player removeItem _mine;
} else {
	private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
	private _holder = objNull;
	{
		if (_mine in magazineCargo _x) exitWith {_holder = _x};
	} forEach _nearby;

	if (!isNull _holder) then {
		private _oldMags = magazinesAmmoCargo _holder;
		private _i = _oldMags find ([_mine, 1]);
		_oldMags set [_i, "usedRound"];
		_oldMags = _oldMags - ["usedRound"];

		if (count (weaponCargo _holder) == 0) then {_holder addWeaponCargoGlobal ['FakeWeapon', 1];};
		clearMagazineCargoGlobal (_holder);
		{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _oldMags;
		if (count (weaponCargo _holder - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _holder};
	};
};

private _r = format ["round_%1", _nbr];
switch (_mine) do {
	case QUOTE(TBD_MORTAR_82mm_HE): {_box setVariable [_r, 1, true]; _box animateSource [format ["mine_%1_source", _nbr], 0];};
	case QUOTE(TBD_MORTAR_82mm_SMOKE): {_box setVariable [_r, 2, true]; _box animateSource [format ["mine_smoke_%1_source", _nbr], 0];};
	case QUOTE(TBD_MORTAR_82mm_ILLUM): {_box setVariable [_r, 3, true]; _box animateSource [format ["mine_illum_%1_source", _nbr], 0];};
	case QUOTE(TBD_MORTAR_82mm_CUMUL): {_box setVariable [_r, 4, true]; _box animateSource [format ["mine_heat_%1_source", _nbr], 0];};
};
