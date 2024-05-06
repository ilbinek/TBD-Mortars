#include "..\script_component.hpp"

class CfgPatches {
    class TBD_MORTARS_100mm_ROUND_AP {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {""};
        magazines[] = {QUOTE(TBD_MORTARS_100mm_ROUND_AP)};
    };
};

#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
