#include "..\script_component.hpp"

class CfgPatches {
    class TBD_MORTARS_105mm_ROUND_DPICM {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {QUOTE(TBD_MORTARS_105mm_ROUND_DPICM)};
    };
};

#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
