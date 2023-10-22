/*
	FILE: fnc_unloadShell.sqf

	Name: tbd_mortars_main_fnc_unloadShell

	Author(s):
		ilbinek

	Description:
		Checks if mortar has this shell loaded

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className
		_source - object    - The player that is unloading

	Returns:
		nothing

	Examples:
		> [_this, 5, "tbd_mortar_81mm_shell_he"] call tbd_mortars_main_fnc_unloadShell;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell", "_source"];

[5, [_obj, _turret, _shell, _source], {
	private _obj = _this#0#0;
	private _turret = _this#0#1;
	private _shell = _this#0#2;
	private _source = _this#0#3;
	
	if ([_obj, _turret, _shell] call FUNC(checkCanUnloadShell)) then {

	} else {
		hint localize "STR_TBD_MORTAR_SHELL_NOT_LOADED";
	};

	[_obj, _turret, _shell, _source] remoteExec [QFUNC(remoteUnloadID), 2];
}, {hint localize "STR_TBD_MORTAR_UNLOADING_ABORTED"}, localize "STR_TBD_MORTAR_UNLOADING", {true}, ["isNotInside"]] call ace_common_fnc_progressBar;
