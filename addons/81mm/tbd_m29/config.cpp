#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_m29 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interaction", "loadorder_f_vietnam"};
        skipWhenMissingDependencies = 1;
        requiredVersion = 0.50;
        weapons[] = {"rhs_mortar_81mm"};
        units[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
