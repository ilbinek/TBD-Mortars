#include "script_component.hpp"

#include "XEH_PREP.hpp"

ADDON = true;

[QUOTE(TBD_MORTARS_100MM_BOX_AP), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_100MM_BOX_HEAT), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_100MM_BOX_HE), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_100MM_BOX_STAL), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_100MM_BOX_ATGM), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
