/*
	FILE: fnc_canPut.sqf

	Name: tbd_mortars_120mm_fnc_canPut

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    	- object    - The box
        _nbr    	- number    - Number of the mine  
		_mineClass 	- string - Classname of the mine

	Returns:
		Nothing

	Examples:
		> [_this, 5, TBD_MORTAR_105mm_TUBE] call tbd_mortars_120mm_fnc_canPut;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mineClass"];
private _rnd = format["round_%1", _nbr];
if (!(_box getVariable ["opened", false])) exitWith {false};
if (_box getVariable [_rnd, 0] != 0) exitWith {false};

private _ret = false;

if ([_mineClass] call EFUNC(main,isMineNearby)) exitWith {_ret = true};

_ret
