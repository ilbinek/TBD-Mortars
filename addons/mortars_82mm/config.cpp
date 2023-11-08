#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.04;
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
    };
};

#include "CfgEventhandlers.hpp"
