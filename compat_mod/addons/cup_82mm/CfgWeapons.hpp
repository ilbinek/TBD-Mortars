class CfgWeapons {
	class Default {};
	class CannonCore: Default {};
	class mortar_82mm: CannonCore {};
	class tbd_82mm_weapon: mortar_82mm {
		magazineReloadTime = 0.2;
		magazines[] = {QUOTE(TBD_MORTAR_82mm_HE), QUOTE(TBD_MORTAR_82mm_SMOKE), QUOTE(TBD_MORTAR_82mm_ILLUM)};
	};
};
