class CfgWeapons {
    class mortar_82mm;
    class rhs_mortar_81mm: mortar_82mm {
        magazineReloadTime = 0.2;
		magazines[] += {QUOTE(tbd_mortar_81mm_shell_he), QUOTE(tbd_mortar_81mm_shell_smoke), QUOTE(tbd_mortar_81mm_shell_illum)};
    };
};
