#include "..\script_component.hpp"

class CfgPatches {
    class TBD_MORTAR_105MM_ROUND_HE {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {QUOTE(TBD_MORTAR_105MM_ROUND_HE)};
    };
};

#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
