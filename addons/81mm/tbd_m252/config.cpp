#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_m252 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interaction", "rhsusf_c_statics"};
        skipWhenMissingDependencies = 1;
        requiredVersion = 0.5;
        weapons[] = {"rhs_mortar_81mm"};
        units[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
