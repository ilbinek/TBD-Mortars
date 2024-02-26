#include "..\script_component.hpp"

class CfgPatches {
	class TBD_MORTAR_81mm_ILLUM {
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"cba_main", "ace_interact_menu"};
		requiredVersion = 0.5;
		weapons[] = {""};
		units[] = {""};
		magazines[] = {QUOTE(TBD_MORTAR_81mm_ILLUM)};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
