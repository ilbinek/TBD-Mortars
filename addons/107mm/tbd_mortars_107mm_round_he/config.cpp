#include "..\script_component.hpp"

class CfgPatches {
    class TBD_MORTARS_107MM_ROUND_HE {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {""};
        magazines[] = {QUOTE(TBD_MORTARS_107MM_ROUND_HE)};
    };
};

#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
