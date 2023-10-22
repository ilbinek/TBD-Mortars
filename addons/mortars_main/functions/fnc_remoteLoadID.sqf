/*
	FILE: fnc_remoteLoadID.sqf
l
	Name: tbd_mortars_main_fnc_remoteLoadID

	Author(s):
		ilbinek

	Description:
		Find the turret owner and loads a shell into the turret

	Parameters:
        _obj    - object    - The mortar  
		_turret - number    - The turret number
		_shell  - string    - The shell className

	Returns:
		nothing

	Examples:
		> [_target, 0, "tbd_mortar_81mm_shell_he"] call tbd_mortars_main_fnc_remoteLoadID;

	Public:
		Yes
*/

#include "..\script_component.hpp"

params ["_obj", "_turret", "_shell"];

[_obj, _turret, _shell] remoteExec [QFUNC(remoteLoad), _obj turretOwner [_turret]];
