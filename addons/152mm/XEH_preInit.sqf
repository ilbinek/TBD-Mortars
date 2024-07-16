#include "script_component.hpp"

#include "XEH_PREP.hpp"

ADDON = true;

[QUOTE(TBD_MORTARS_152MM_BOX_HE), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_152MM_BOX_LASER), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_152MM_BOX_NUCLEAR), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_152MM_BOX_DPICM), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_152MM_BOX_CHEMICAL), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;