/*
	FILE: fnc_canClose.sqf

	Name: tbd_mortars_120mm_fnc_canClose

	Author(s):
		ilbinek

	Description:
		Determines if a lid can be closeed

	Parameters:
        _box    - object    - The box

	Returns:
		bool	- True if the lid can be closed

	Examples:
		> [_this, 5] call tbd_mortars_120mm_fnc_canClose;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

private _ret = (_box animationSourcePhase "cover_source" > 0.9) && (_box getVariable "opened");

_ret
