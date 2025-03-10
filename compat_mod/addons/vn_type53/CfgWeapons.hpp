class CfgWeapons {
	class Default {};
	class CannonCore: Default {};
	class mortar_82mm: CannonCore {};
	class vn_mortar_81mm_base: mortar_82mm {};
	class vn_mortar_type53: vn_mortar_81mm_base {
		magazineReloadTime = 0.2;
		magazines[] = {QUOTE(TBD_MORTAR_82mm_HE), QUOTE(TBD_MORTAR_82mm_SMOKE), QUOTE(TBD_MORTAR_82mm_ILLUM)};
	};
};
