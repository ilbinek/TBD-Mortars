/*
	FILE: fnc_addInventoryActions.sqf

	Name: tbd_mortars_152mm_fnc_addInventoryActions

	Author(s):
		ilbinek

	Description:
		Adds inventory actions for 152mm stuff

	Parameters:
		Nothing

	Returns:
		Nothing

	Examples:
		> call tbd_mortars_152mm_fnc_addInventoryActions;

	Public:
		No
*/

#include "..\script_component.hpp"

//#define ADD_ACTION (var1, var2) false
   
#define ADD_ACTION(var1,var2) [\
    _class,\
    "CONTAINER",\
    LLSTRING(DOUBLES(charge_change,var1)),\
    nil,\
    "\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",\
	{true},\
    {\
		params ["_unit", "", "_item", "_slot"];\
		[LLSTRING(charge_change), EGVAR(main,chargeChangeTime), {true}, {params ["_args"]; _args params ["_unit"]; [QUOTE(DOUBLES(var2,var1))] call EFUNC(main,addNearbyShell);}, {params ["_args"]; _args params ["_unit", "_item"]; [_item] call EFUNC(main,addNearbyShell)}, [_unit, _item]] call CBA_fnc_progressBar;\
    },\
    true,\
    []\
] call CBA_fnc_addItemContextMenuOption;;

private _class = QUOTE(TBD_MORTARS_152MM_CASING);
ADD_ACTION(1,TBD_MORTARS_152MM_CASING_CH)
ADD_ACTION(2,TBD_MORTARS_152MM_CASING_CH)
ADD_ACTION(3,TBD_MORTARS_152MM_CASING_CH)
ADD_ACTION(4,TBD_MORTARS_152MM_CASING_CH)
ADD_ACTION(5,TBD_MORTARS_152MM_CASING_CH)
ADD_ACTION(6,TBD_MORTARS_152MM_CASING_CH)
ADD_ACTION(7,TBD_MORTARS_152MM_CASING_CH)
