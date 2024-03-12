#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_2b14 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interaction", "rhs_c_heavyweapons"};
        skipWhenMissingDependencies = 1;
        requiredVersion = 0.5;
        weapons[] = {};
        units[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
