/*
	FILE: fnc_addChargesChanges.sqf

	Name: tbd_mortars_105mm_fnc_addChargesChanges

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:

	Returns:
		Nothing

	Examples:
		> call tbd_mortars_105mm_fnc_addChargesChanges;

	Public:
		No
*/

#include "..\script_component.hpp"

#define ADD_ACTION(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(charge_change,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",\
	{true},\
	{\
		params ["_unit", "", "_item", "_slot"];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToUniform QUOTE(DOUBLES(var2,var1));}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToVest QUOTE(DOUBLES(var2,var1));}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; _unit addItemToBackpack QUOTE(DOUBLES(var2,var1));}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

#define ADD_ACTION_CREATE_SHELL(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(assemble_he,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",\
	[\
		{true},\
		{\
			params ["_unit", "_container", "_item", "_slot", "_params"];\
			private _ret = false;\
			switch _slot do {\
				case "UNIFORM_CONTAINER": {\
					if (QUOTE(var2) in uniformItems _unit) then {\
						_ret = true;\
					};\
				};\
				case "VEST_CONTAINER": {\
					if (QUOTE(var2) in vestItems _unit) then {\
						_ret = true;\
					};\
				};\
				case "BACKPACK_CONTAINER": {\
					if (QUOTE(var2) in backPackItems _unit) then {\
						_ret = true;\
					};\
				};\
			};\
			_ret\
		}\
	],\
	{\
		params ["_unit", "", "_item", "_slot"];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(assembling), EGVAR(main,assemble105time), {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromUniform QUOTE(var2); private _shell = QUOTE(DOUBLES(TBD_MORTARS_105mm_ROUND_HE_CHARGE,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry; playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\create_round.ogg), player];}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(assembling), EGVAR(main,assemble105time), {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromVest QUOTE(var2); private _shell = QUOTE(DOUBLES(TBD_MORTARS_105mm_ROUND_HE_CHARGE,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry; playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\create_round.ogg), player];}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(assembling), EGVAR(main,assemble105time), {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromBackpack QUOTE(var2); private _shell = QUOTE(DOUBLES(TBD_MORTARS_105mm_ROUND_HE_CHARGE,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry; playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\create_round.ogg), player];}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

// HE tube unpacking
[
	QUOTE(TBD_MORTARS_105mm_TUBE),
	"CONTAINER",
	LLSTRING(unpack),
	nil,
	"\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa",
	{true},
	{
		params ["_unit", "", "_item", "_slot"];
		switch _slot do {
			case "UNIFORM_CONTAINER": {
				[LLSTRING(unpacking), EGVAR(main,unpack105Time), {true}, {
					params ["_args"];
					_args params ["_unit"];
					_unit addItemToUniform QUOTE(TBD_MORTARS_105mm_SHELL_HE);
					_unit addItemToUniform QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_7);
					playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\unpack_tube.ogg), player];
				}, {
					params ["_args"];
					_args params ["_unit", "_item"];
					_unit addItemToUniform _item;
				}, [_unit, _item]] call CBA_fnc_progressBar;
			};
			case "VEST_CONTAINER": {
				[LLSTRING(unpack), EGVAR(main,unpack105Time), {true}, {
					params ["_args"];
					_args params ["_unit"];
					_unit addItemToVest QUOTE(TBD_MORTARS_105mm_SHELL_HE);
					_unit addItemToVest QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_7);
					playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\unpack_tube.ogg), player];
				}, {
					params ["_args"];
					_args params ["_unit", "_item"];
					_unit addItemToVest _item;
				}, [_unit, _item]] call CBA_fnc_progressBar;
			};
			case "BACKPACK_CONTAINER": {
				[LLSTRING(unpack), EGVAR(main,unpack105Time), {true}, {
					params ["_args"];
					_args params ["_unit"];
					_unit addItemToBackpack QUOTE(TBD_MORTARS_105mm_SHELL_HE);
					_unit addItemToBackpack QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_7);
					playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\unpack_tube.ogg), player];
				}, {
					params ["_args"];
					_args params ["_unit", "_item"];
					_unit addItemToBackpack _item;
				}, [_unit, _item]] call CBA_fnc_progressBar;
			};
		};
	},
	true,
	[]
] call CBA_fnc_addItemContextMenuOption;

private _class = QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_1);
ADD_ACTION(1,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(2,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(3,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(4,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(5,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(6,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(7,TBD_MORTARS_105mm_CASING_CHARGE)

// HE loadable shell creation
private _class = QUOTE(TBD_MORTARS_105mm_SHELL_HE);
ADD_ACTION_CREATE_SHELL(1,TBD_MORTARS_105mm_CASING_CHARGE_1)
ADD_ACTION_CREATE_SHELL(2,TBD_MORTARS_105mm_CASING_CHARGE_2)
ADD_ACTION_CREATE_SHELL(3,TBD_MORTARS_105mm_CASING_CHARGE_3)
ADD_ACTION_CREATE_SHELL(4,TBD_MORTARS_105mm_CASING_CHARGE_4)
ADD_ACTION_CREATE_SHELL(5,TBD_MORTARS_105mm_CASING_CHARGE_5)
ADD_ACTION_CREATE_SHELL(6,TBD_MORTARS_105mm_CASING_CHARGE_6)
ADD_ACTION_CREATE_SHELL(7,TBD_MORTARS_105mm_CASING_CHARGE_7)
