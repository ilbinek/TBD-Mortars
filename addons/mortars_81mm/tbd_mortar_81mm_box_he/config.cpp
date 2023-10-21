#include "..\script_component.hpp"

class CfgPatches {
    class tbd_box_81mm_he {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu", "rhsusf_heavyweapons"};
        requiredVersion = 0.1;
        weapons[] = {""};
        units[] = {QUOTE(TBD_MORTAR_81mm_BOX_HE), QUOTE(TBD_MORTAR_81mm_BOX_SMOKE), QUOTE(TBD_MORTAR_81mm_BOX_ILLUM)};
    };
};

#include "CfgVehicles.hpp"
