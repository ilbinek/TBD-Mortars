/*
	FILE: fnc_timerHandler.sqf

	Name: tbd_mortars_105mm_fnc_timerHandler

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _event    	- string    - The event
        _arg    	- dialog    - The dialog

	Returns:
		Nothing

	Examples:
		> ["init", _this] call tbd_mortars_105mm_fnc_timerHandler;

	Public:
		No
*/

#define IDC_TBD_TIMER_TEXT 69420

#include "..\script_component.hpp"

params ["_event", "_arg"];

switch (_event) do {
    case "init": {
        private _dialog = _arg select 0;

        private _text = _dialog displayCtrl IDC_TBD_TIMER_TEXT;   
        ctrlSetFocus _text;

        _text ctrlSetText str((GVAR(shell) getVariable [QGVAR(DPICM_FUSE_TIMER), 99999]));
        uiNamespace setVariable [QGVAR(timer_dialog), _dialog];
    };
    
    case "save": {
        private _dialog = uiNamespace getVariable QGVAR(timer_dialog);
        private _text = _dialog displayCtrl IDC_TBD_TIMER_TEXT;   

        GVAR(DPICM_FUSE_TIMER) = parseNumber (ctrlText _text);

        GVAR(shell) setVariable [QGVAR(DPICM_FUSE_TIMER), GVAR(DPICM_FUSE_TIMER), true];
    };

    case "close": {
        closeDialog 0;
        uiNamespace setVariable [QGVAR(timer_dialog), nil];
    };
};
