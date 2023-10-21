#include "script_component.hpp"

#include "XEH_PREP.sqf"

ADDON = true;

[QUOTE(TBD_MORTAR_81mm_BOX_HE), "init", {_this call FUNC(init)}] call CBA_fnc_addClassEventHandler;
