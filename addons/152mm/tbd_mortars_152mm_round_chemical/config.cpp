#include "..\script_component.hpp"

class CfgPatches {
    class TBD_MORTARS_152mm_ROUND_CHEMICAL {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {""};
        magazines[] = {QUOTE(TBD_MORTARS_152mm_ROUND_CHEMICAL)};
    };
};

#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
