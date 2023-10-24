#include "..\script_component.hpp"

class CfgPatches {
    class tbd_mortars_m252 {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu", "rhsusf_c_statics"};
        requiredVersion = 0.1;
        weapons[] = {"rhs_mortar_81mm"};
        units[] = {};
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
