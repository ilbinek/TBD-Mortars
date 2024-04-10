/*
	FILE: fnc_canOpen.sqf

	Name: tbd_mortars_120mm_fnc_canOpen

	Author(s):
		ilbinek

	Description:
		Determines if a lid can be opened

	Parameters:
        _box    - object    - The box

	Returns:
		bool	- True if the lid can be opened

	Examples:
		> [_this, 5] call tbd_mortars_120mm_fnc_canOpen;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

private _ret = (_box animationSourcePhase "cover_source" < 0.1) && !(_box getVariable "opened");

_ret
