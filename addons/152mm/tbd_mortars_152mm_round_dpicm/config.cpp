#include "..\script_component.hpp"

class CfgPatches {
    class TBD_MORTARS_152MM_ROUND_DPICM {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {""};
        magazines[] = {QUOTE(TBD_MORTARS_152MM_ROUND_DPICM)};
    };
};

#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
