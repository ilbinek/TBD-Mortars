/*
	FILE: fnc_removeNearbyShell.sqf

	Name: tbd_mortars_main_fnc_removeNearbyShell

	Author(s):
		ilbinek

	Description:
		Loads a shell into the mortar

	Parameters:
		_type	- String	- The classname of the shell

		Returns:
		nothing

	Examples:
		> ["he"] call tbd_mortars_main_fnc_removeNearbyShell;

	Public:
		Yes
*/

// Check player inventory first

params ["_shell"];

private _magazines = magazines player;
if (_shell in _magazines) then {
	// Shell is in players inventory, remove it from it and add it to the box
	player removeItem _shell;
} else {
	private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
	private _holder = objNull;
	{
		if (_shell in magazineCargo _x) exitWith {_holder = _x};
	} forEach _nearby;

	if (!isNull _holder) then {
		private _oldMags = magazinesAmmoCargo _holder;
		private _i = _oldMags find ([_shell, 1]);
		_oldMags set [_i, "usedRound"];
		_oldMags = _oldMags - ["usedRound"];

		if (count (weaponCargo _holder) == 0) then {_holder addWeaponCargoGlobal ['FakeWeapon', 1];};
		clearMagazineCargoGlobal (_holder);
		{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _oldMags;
		if (count (weaponCargo _holder - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _holder};
	};
};
