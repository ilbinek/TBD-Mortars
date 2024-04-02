#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_2b14 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interaction", "TBD_120mm_PM_43"};
        skipWhenMissingDependencies = 1;
        requiredVersion = 0.5;
        weapons[] = {};
        units[] = {};
    };
};

class Mode_SemiAuto;
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
