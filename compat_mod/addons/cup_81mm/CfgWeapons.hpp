class CfgWeapons {
	class Default {};
	class CannonCore: Default {};
	class mortar_82mm: CannonCore {};
	class tbd_81mm_weapon: mortar_82mm {
		displayName = "Mortar 81mm";
		magazineReloadTime = 0.2;
		magazines[] = {QUOTE(TBD_MORTAR_81mm_HE), QUOTE(TBD_MORTAR_81mm_SMOKE), QUOTE(TBD_MORTAR_81mm_ILLUM)};
	};
};
