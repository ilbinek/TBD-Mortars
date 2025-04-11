#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_artillery_pole {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {QUOTE(TBD_MORTAR_artillery_pole)};
    };
};

#include "CfgVehicles.hpp"
