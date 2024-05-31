#include "script_component.hpp"

#include "XEH_PREP.hpp"

ADDON = true;

[QUOTE(TBD_MORTARS_105mm_BOX), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_105mm_BOX_SMOKE), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_105mm_BOX_LASER), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
[QUOTE(TBD_MORTARS_105mm_BOX_DPICM), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
