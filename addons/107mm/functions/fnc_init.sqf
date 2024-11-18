/*
	FILE: fnc_init.sqf

	Name: tbd_mortars_107mm_fnc_init

	Author(s):
		ilbinek

	Description:
		Initializes the 100 box

	Parameters:
        _box   - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this] call tbd_mortars_107mm_fnc_init;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box setVariable ["opened", false, true];
_box animateSource ["cover_source", 0];

for "_i" from 1 to 2 do {
	private _n = format ["round_%1", _i];
	_box setVariable[_n, 1, true];
	private _b = format ["mine_%1_source", _i];
	_box animateSource [_b, 0];
};
