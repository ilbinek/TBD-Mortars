/*
	FILE: fnc_disassemble.sqf

	Name: tbd_mortars_120_fnc_disassemble

	Author(s):
		ilbinek

	Description:
		Initializes the 120 box

	Parameters:
        _shell   - object    - The shell

	Returns:
		Nothing

	Examples:
		> [_this] call tbd_mortars_120_fnc_disassemble;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_shell"];

switch (typeOf _shell) do {
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_1): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_1)] call EFUNC(main,addNearbyShell);
	};
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_2): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_2)] call EFUNC(main,addNearbyShell);
	};
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_3): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_3)] call EFUNC(main,addNearbyShell);
	};
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_4): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_4)] call EFUNC(main,addNearbyShell);
	};
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_5): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_5)] call EFUNC(main,addNearbyShell);
	};
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_6): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_6)] call EFUNC(main,addNearbyShell);
	};
	case QUOTE(TBD_MORTARS_105mm_ROUND_HE_CHARGE_7): {
		[QUOTE(TBD_MORTARS_105mm_SHELL_HE)] call EFUNC(main,addNearbyShell);
		[QUOTE(TBD_MORTARS_105mm_CASING_CHARGE_7)] call EFUNC(main,addNearbyShell);
	};
};

deleteVehicle _shell;
