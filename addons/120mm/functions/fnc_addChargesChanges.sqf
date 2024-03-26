/*
	FILE: fnc_addChargesChanges.sqf

	Name: tbd_mortars_120mm_fnc_addChargesChanges

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
		> [_this, 5, tbd_mortar_120mm_shell_he_charge_7] call tbd_mortars_120mm_fnc_addChargesChanges;

	Public:
		No
*/


#include "..\script_component.hpp"

private _arr = [QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)];

{
	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_1),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;

	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_2),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;

	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_3),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;

	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_4),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;

	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_5),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;

	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_6),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;

	[
		_x,
		"CONTAINER",
		LLSTRING(charge_change_7),
		nil,
		"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
		{true},
		{
			params ["_unit", "", "", "_slot"];
			systemChat str(_unit);
			switch _slot do {
				case "UNIFORM_CONTAINER": {
					_unit addItemToUniform QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7);
				};
				case "VEST_CONTAINER": {
					_unit addItemToVest QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7);
				};
				case "BACKPACK_CONTAINER": {
					_unit addItemToBackpack QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7);
				};
			};
		},
		true,
		[]
	] call CBA_fnc_addItemContextMenuOption;
} forEach _arr;
