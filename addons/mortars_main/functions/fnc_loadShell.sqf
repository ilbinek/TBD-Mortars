/*
	FILE: fnc_loadShell.sqf

	Name: tbd_mortars_main_fnc_loadShell

	Author(s):
		ilbinek

	Description:
		Tries to load a shell into the mortar

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className

	Returns:
		nothing

	Examples:
		> [_target, 0, "tbd_mortar_81mm_shell_he"] call tbd_mortars_main_fnc_loadShell;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell"];

// start a second long timer and then continue
// TODO Expose the timer settings in CBA settings
[1, [_obj, _turret, _shell], {
	private _obj = _this#0#0;
	private _turret = _this#0#1;
	private _shell = _this#0#2;
	// find and remove the shell from inventory/closest storage
	// if not found, abort
	private _magazines = magazines player;
	if (_shell in _magazines) then {
		player removeItem _shell;

		// load shell into the mortar
		[_obj, _turret, _shell] remoteExec [QFUNC(remoteLoadID), 2];
	} else {
		// player does not have the shell in his inventory, look around
		private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
		// TODO Rewrite better?
		//private _holder = _nearby findIf {_shell in (magazineCargo _x)};
		//private _index = _nearby#_holder find [_shell];	
		private _holder = objNull;
		{
			if (_shell in (magazineCargo _x)) exitWith {_holder = _x};
		} forEach _nearby;

		// if found, remove and load
		if (!isNull _holder) then {
			private _oldMags = magazinesAmmoCargo _holder;
			private _i = _oldMags find ([_shell, 1]);
			_oldMags set [_i, "usedRound"];
			_oldMags = _oldMags - ["usedRound"];

			if (count (weaponCargo _holder) == 0) then {_holder addWeaponCargoGlobal ['FakeWeapon', 1];};
			clearMagazineCargoGlobal (_holder);
			{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _oldMags;
			if (count (weaponCargo _holder - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _holder};

			[_obj, _turret, _shell] remoteExec [QFUNC(remoteLoadID), 2];
		} else {
			hint localize "STR_TBD_MORTAR_NO_SHELL";
		};
	};

}, {hint localize "STR_TBD_MORTAR_LOADING_ABORTED"}, localize "STR_TBD_MORTAR_LOADING", {true}, ["isNotInside"]] call ACE_common_fnc_progressBar;
