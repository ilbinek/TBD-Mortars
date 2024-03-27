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

#define ADD_ACTION(var1,var2) [\
	_x,\
	"CONTAINER",\
	LLSTRING(DOUBLES(charge_change,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",\
	{true},\
	{\
		params ["_unit", "", "_item", "_slot"];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToUniform QUOTE(DOUBLES(var2,var1))}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToVest QUOTE(DOUBLES(var2,var1))}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToBackpack QUOTE(DOUBLES(var2,var1))}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

private _arr = [QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)];

{
	ADD_ACTION(1,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
	ADD_ACTION(2,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
	ADD_ACTION(3,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
	ADD_ACTION(4,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
	ADD_ACTION(5,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
	ADD_ACTION(6,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
	ADD_ACTION(7,TBD_MORTAR_120mm_SHELL_HE_CHARGE)
} forEach _arr;
