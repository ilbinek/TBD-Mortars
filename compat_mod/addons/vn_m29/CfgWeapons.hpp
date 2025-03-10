class CfgWeapons {
	class Default {};
	class CannonCore: Default {};
	class mortar_82mm: CannonCore {};
	class vn_mortar_81mm_base: mortar_82mm {};
	class vn_mortar_m29: vn_mortar_81mm_base {
        magazineReloadTime = 0.2;
		magazines[] += {QUOTE(TBD_MORTAR_81mm_HE), QUOTE(TBD_MORTAR_81mm_SMOKE), QUOTE(TBD_MORTAR_81mm_ILLUM)};
    };
};
