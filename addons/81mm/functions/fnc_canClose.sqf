/*
	FILE: fnc_canClose.sqf

	Name: tbd_mortars_81mm_fnc_canClose

	Author(s):
		ilbinek

	Description:
		Determines if a lid can be closeed

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the lid  

	Returns:
		bool	- True if the lid can be closed

	Examples:
		> [_this, 5] call tbd_mortars_81mm_fnc_canClose;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

private _text = format ["cap_%1_source", _nbr];
private _text2 = format ["cap_%1", _nbr];

private _ret = (_box animationSourcePhase _text > 0.1) && (_box getVariable _text2);

_ret
