#include "..\script_component.hpp"

class CfgPatches {
	class TBD_MORTAR_82mm_HE {
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"cba_main", "ace_interact_menu", "rhs_c_heavyweapons"};
		requiredVersion = 0.1;
		weapons[] = {""};
		units[] = {""};
		magazines[] = {QUOTE(TBD_MORTAR_82mm_HE)};
	};
};

#include "CfgMagazines.hpp"
