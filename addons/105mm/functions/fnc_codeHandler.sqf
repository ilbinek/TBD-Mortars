/*
	FILE: fnc_codeHandler.sqf

	Name: tbd_mortars_105mm_fnc_codeHandler

	Author(s):
		ilbinek

	Description:
		Handler for the laser code UI

	Parameters:
        _event    	- string    - The event
        _arg    	- dialog    - The dialog

	Returns:
		Nothing

	Examples:
		> ["init", _this] call tbd_mortars_105mm_fnc_codeHandler;

	Public:
		No
*/

#define IDC_TBD_CODE_TEXT 69422

#include "..\script_component.hpp"

params ["_event", "_arg"];

switch (_event) do {
    case "init": {
        private _dialog = _arg select 0;

        private _text = _dialog displayCtrl IDC_TBD_CODE_TEXT;   
        ctrlSetFocus _text;

        _text ctrlSetText str((GVAR(shell) getVariable [QGVAR(LASER_CODE), 1111]));
        uiNamespace setVariable [QGVAR(code_dialog), _dialog];
    };
    
    case "save": {
        private _dialog = uiNamespace getVariable QGVAR(code_dialog);
        private _text = _dialog displayCtrl IDC_TBD_CODE_TEXT;   

        GVAR(LASER_CODE) = parseNumber (ctrlText _text);

        GVAR(shell) setVariable [QGVAR(LASER_CODE), GVAR(LASER_CODE), true];
    };

    case "close": {
        closeDialog 0;
        uiNamespace setVariable [QGVAR(code_dialog), nil];
    };
};
