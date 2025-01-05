class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_MORTAR_82mm_SHELL_AMMO_HE: Sh_82mm_AMOS {
		model = QPATHTOF(TBD_MORTAR_82mm_HE\tbd_mortar_82mm_shell_he_charge0);
	};
};
