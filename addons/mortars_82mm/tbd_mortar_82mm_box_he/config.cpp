#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_82mm_box {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.1;
        weapons[] = {""};
        units[] = {QUOTE(TBD_MORTAR_82mm_BOX_HE), QUOTE(TBD_MORTAR_82mm_BOX_SMOKE), QUOTE(TBD_MORTAR_82mm_BOX_ILLUM)};
    };
};

#include "CfgVehicles.hpp"
