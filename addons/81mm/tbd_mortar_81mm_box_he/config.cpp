#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_81mm_box {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {""};
        units[] = {QUOTE(TBD_MORTAR_81mm_BOX_HE), QUOTE(TBD_MORTAR_81mm_BOX_SMOKE), QUOTE(TBD_MORTAR_81mm_BOX_ILLUM)};
    };
};

#include "CfgVehicles.hpp"
