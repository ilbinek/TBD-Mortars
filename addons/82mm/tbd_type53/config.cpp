#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_type53 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interaction", "loadorder_f_vietnam"};
        skipWhenMissingDependencies = 1;
        requiredVersion = 0.5;
        weapons[] = {};
        units[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
