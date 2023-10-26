class CfgWeapons {
    class mortar_82mm;
    class rhs_mortar_81mm: mortar_82mm {
        magazineReloadTime = 0.2;
		magazines[] += {QUOTE(TBD_MORTAR_81mm_HE), QUOTE(TBD_MORTAR_81mm_SMOKE), QUOTE(TBD_MORTAR_81mm_ILLUM)};
    };
};
