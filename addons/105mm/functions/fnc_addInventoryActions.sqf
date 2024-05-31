/*
	FILE: fnc_addInventoryActions.sqf

	Name: tbd_mortars_105mm_fnc_addInventoryActions

	Author(s):
		ilbinek

	Description:
		Adds inventory actions for 105mm stuff

	Parameters:
		Nothing

	Returns:
		Nothing

	Examples:
		> call tbd_mortars_105mm_fnc_addInventoryActions;

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

#define ADD_ACTION_CREATE_SHELL(var1,var2,var3) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(assemble,var1)),\
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
		playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\create_round.ogg), _unit];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(assembling), EGVAR(main,assemble105time), {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromUniform QUOTE(var2); private _shell = QUOTE(DOUBLES(var3,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(assembling), EGVAR(main,assemble105time), {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromVest QUOTE(var2); private _shell = QUOTE(DOUBLES(var3,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(assembling), EGVAR(main,assemble105time), {true}, {params ["_args"]; _args params ["_unit"]; _unit removeItemFromBackpack QUOTE(var2); private _shell = QUOTE(DOUBLES(var3,var1)) createVehicle (getPos _unit); [_unit, _shell] call ace_dragging_fnc_startCarry;}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

#define ADD_ACTION_PACK(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(DOUBLES(pack,var1)),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\box_ca.paa",\
	[\
		{true},\
		{\
			[QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,isMineNearby);\
		}\
	],\
	{\
		params ["_unit", "", "_item", "_slot"];\
		playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\pack_tube.ogg), _unit];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(pack), EGVAR(main,pack105Time), {true}, {params ["_args"]; _args params ["_unit"]; if !([QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,isMineNearby)) exitWith {}; [QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,removeNearbyShell); [QUOTE(var2)] call EFUNC(main,addNearbyShell);}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToUniform _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(pack), EGVAR(main,pack105Time), {true}, {params ["_args"]; _args params ["_unit"]; if !([QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,isMineNearby)) exitWith {}; [QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,removeNearbyShell); [QUOTE(var2)] call EFUNC(main,addNearbyShell)}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToVest _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(pack), EGVAR(main,pack105Time), {true}, {params ["_args"]; _args params ["_unit"]; if !([QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,isMineNearby)) exitWith {}; [QUOTE(DOUBLES(TBD_MORTARS_105mm_CASING_CHARGE,var1))] call EFUNC(main,removeNearbyShell); [QUOTE(var2)] call EFUNC(main,addNearbyShell);}, {params ["_args"]; _args params ["_unit", "_item"]; _unit addItemToBackpack _item;}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

#define ADD_ACTION_UNPACK(var1,var2) [\
	_class,\
	"CONTAINER",\
	LLSTRING(unpack),\
	nil,\
	"\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa",\
	{true},\
	{\
		params ["_unit", "", "_item", "_slot"];\
		switch _slot do {\
			case "UNIFORM_CONTAINER": {\
				[LLSTRING(unpacking), EGVAR(main,unpack105Time), {true}, {\
					params ["_args"];\
					_args params ["_unit"];\
					_unit addItemToUniform QUOTE(var1);\
					_unit addItemToUniform QUOTE(var2);\
					playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\unpack_tube.ogg), player];\
				}, {\
					params ["_args"];\
					_args params ["_unit", "_item"];\
					_unit addItemToUniform _item;\
				}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "VEST_CONTAINER": {\
				[LLSTRING(unpack), EGVAR(main,unpack105Time), {true}, {\
					params ["_args"];\
					_args params ["_unit"];\
					_unit addItemToVest QUOTE(var1);\
					_unit addItemToVest QUOTE(var2);\
					playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\unpack_tube.ogg), player];\
				}, {\
					params ["_args"];\
					_args params ["_unit", "_item"];\
					_unit addItemToVest _item;\
				}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
			case "BACKPACK_CONTAINER": {\
				[LLSTRING(unpack), EGVAR(main,unpack105Time), {true}, {\
					params ["_args"];\
					_args params ["_unit"];\
					_unit addItemToBackpack QUOTE(var1);\
					_unit addItemToBackpack QUOTE(var2);\
					playSound3D [QPATHTOF(TBD_MORTARS_105mm_TUBE\sounds\unpack_tube.ogg), player];\
				}, {\
					params ["_args"];\
					_args params ["_unit", "_item"];\
					_unit addItemToBackpack _item;\
				}, [_unit, _item]] call CBA_fnc_progressBar;\
			};\
		};\
	},\
	true,\
	[]\
] call CBA_fnc_addItemContextMenuOption;

private _class = QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_1);
ADD_ACTION(1,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(2,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(3,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(4,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(5,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(6,TBD_MORTARS_105mm_CASING_CHARGE)
ADD_ACTION(7,TBD_MORTARS_105mm_CASING_CHARGE)

// HE
_class = QUOTE(TBD_MORTARS_105mm_TUBE);
ADD_ACTION_UNPACK(TBD_MORTARS_105mm_SHELL_HE,TBD_MORTARS_105mm_CASING_CHARGE_7)
_class = QUOTE(TBD_MORTARS_105mm_SHELL_HE);
// HE loadable shell creation
ADD_ACTION_CREATE_SHELL(1,TBD_MORTARS_105mm_CASING_CHARGE_1,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(2,TBD_MORTARS_105mm_CASING_CHARGE_2,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(3,TBD_MORTARS_105mm_CASING_CHARGE_3,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(4,TBD_MORTARS_105mm_CASING_CHARGE_4,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(5,TBD_MORTARS_105mm_CASING_CHARGE_5,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(6,TBD_MORTARS_105mm_CASING_CHARGE_6,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
ADD_ACTION_CREATE_SHELL(7,TBD_MORTARS_105mm_CASING_CHARGE_7,TBD_MORTARS_105mm_ROUND_HE_CHARGE)
// HE packing
ADD_ACTION_PACK(1,TBD_MORTARS_105mm_TUBE)
ADD_ACTION_PACK(2,TBD_MORTARS_105mm_TUBE)
ADD_ACTION_PACK(3,TBD_MORTARS_105mm_TUBE)
ADD_ACTION_PACK(4,TBD_MORTARS_105mm_TUBE)
ADD_ACTION_PACK(5,TBD_MORTARS_105mm_TUBE)
ADD_ACTION_PACK(6,TBD_MORTARS_105mm_TUBE)
ADD_ACTION_PACK(7,TBD_MORTARS_105mm_TUBE)

// LG
_class = QUOTE(TBD_MORTARS_105mm_TUBE_LASER);
ADD_ACTION_UNPACK(TBD_MORTARS_105mm_SHELL_LASER,TBD_MORTARS_105mm_CASING_CHARGE_7)
_class = QUOTE(TBD_MORTARS_105mm_SHELL_LASER);
// Laser loadable shell creation
ADD_ACTION_CREATE_SHELL(1,TBD_MORTARS_105mm_CASING_CHARGE_1,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
ADD_ACTION_CREATE_SHELL(2,TBD_MORTARS_105mm_CASING_CHARGE_2,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
ADD_ACTION_CREATE_SHELL(3,TBD_MORTARS_105mm_CASING_CHARGE_3,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
ADD_ACTION_CREATE_SHELL(4,TBD_MORTARS_105mm_CASING_CHARGE_4,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
ADD_ACTION_CREATE_SHELL(5,TBD_MORTARS_105mm_CASING_CHARGE_5,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
ADD_ACTION_CREATE_SHELL(6,TBD_MORTARS_105mm_CASING_CHARGE_6,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
ADD_ACTION_CREATE_SHELL(7,TBD_MORTARS_105mm_CASING_CHARGE_7,TBD_MORTARS_105mm_ROUND_LASER_CHARGE)
// Lase packing
ADD_ACTION_PACK(1,TBD_MORTARS_105mm_TUBE_LASER)
ADD_ACTION_PACK(2,TBD_MORTARS_105mm_TUBE_LASER)
ADD_ACTION_PACK(3,TBD_MORTARS_105mm_TUBE_LASER)
ADD_ACTION_PACK(4,TBD_MORTARS_105mm_TUBE_LASER)
ADD_ACTION_PACK(5,TBD_MORTARS_105mm_TUBE_LASER)
ADD_ACTION_PACK(6,TBD_MORTARS_105mm_TUBE_LASER)
ADD_ACTION_PACK(7,TBD_MORTARS_105mm_TUBE_LASER)

// SMOKE
_class = QUOTE(TBD_MORTARS_105mm_TUBE_SMOKE);
ADD_ACTION_UNPACK(TBD_MORTARS_105mm_SHELL_SMOKE,TBD_MORTARS_105mm_CASING_CHARGE_7)
_class = QUOTE(TBD_MORTARS_105mm_SHELL_SMOKE);
// Smoke loadable shell creation
ADD_ACTION_CREATE_SHELL(1,TBD_MORTARS_105mm_CASING_CHARGE_1,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
ADD_ACTION_CREATE_SHELL(2,TBD_MORTARS_105mm_CASING_CHARGE_2,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
ADD_ACTION_CREATE_SHELL(3,TBD_MORTARS_105mm_CASING_CHARGE_3,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
ADD_ACTION_CREATE_SHELL(4,TBD_MORTARS_105mm_CASING_CHARGE_4,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
ADD_ACTION_CREATE_SHELL(5,TBD_MORTARS_105mm_CASING_CHARGE_5,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
ADD_ACTION_CREATE_SHELL(6,TBD_MORTARS_105mm_CASING_CHARGE_6,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
ADD_ACTION_CREATE_SHELL(7,TBD_MORTARS_105mm_CASING_CHARGE_7,TBD_MORTARS_105mm_ROUND_SMOKE_CHARGE)
// Smoke packing
ADD_ACTION_PACK(1,TBD_MORTARS_105mm_TUBE_SMOKE)
ADD_ACTION_PACK(2,TBD_MORTARS_105mm_TUBE_SMOKE)
ADD_ACTION_PACK(3,TBD_MORTARS_105mm_TUBE_SMOKE)
ADD_ACTION_PACK(4,TBD_MORTARS_105mm_TUBE_SMOKE)
ADD_ACTION_PACK(5,TBD_MORTARS_105mm_TUBE_SMOKE)
ADD_ACTION_PACK(6,TBD_MORTARS_105mm_TUBE_SMOKE)
ADD_ACTION_PACK(7,TBD_MORTARS_105mm_TUBE_SMOKE)

// DPICM
_class = QUOTE(TBD_MORTARS_105mm_TUBE_DPICM);
ADD_ACTION_UNPACK(TBD_MORTARS_105mm_SHELL_DPICM,TBD_MORTARS_105mm_CASING_CHARGE_7)
_class = QUOTE(TBD_MORTARS_105mm_SHELL_DPICM);
// DPICM loadable shell creation
ADD_ACTION_CREATE_SHELL(1,TBD_MORTARS_105mm_CASING_CHARGE_1,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
ADD_ACTION_CREATE_SHELL(2,TBD_MORTARS_105mm_CASING_CHARGE_2,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
ADD_ACTION_CREATE_SHELL(3,TBD_MORTARS_105mm_CASING_CHARGE_3,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
ADD_ACTION_CREATE_SHELL(4,TBD_MORTARS_105mm_CASING_CHARGE_4,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
ADD_ACTION_CREATE_SHELL(5,TBD_MORTARS_105mm_CASING_CHARGE_5,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
ADD_ACTION_CREATE_SHELL(6,TBD_MORTARS_105mm_CASING_CHARGE_6,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
ADD_ACTION_CREATE_SHELL(7,TBD_MORTARS_105mm_CASING_CHARGE_7,TBD_MORTARS_105mm_ROUND_DPICM_CHARGE)
// DPICM packing
ADD_ACTION_PACK(1,TBD_MORTARS_105mm_TUBE_DPICM)
ADD_ACTION_PACK(2,TBD_MORTARS_105mm_TUBE_DPICM)
ADD_ACTION_PACK(3,TBD_MORTARS_105mm_TUBE_DPICM)
ADD_ACTION_PACK(4,TBD_MORTARS_105mm_TUBE_DPICM)
ADD_ACTION_PACK(5,TBD_MORTARS_105mm_TUBE_DPICM)
ADD_ACTION_PACK(6,TBD_MORTARS_105mm_TUBE_DPICM)
ADD_ACTION_PACK(7,TBD_MORTARS_105mm_TUBE_DPICM)
