class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_MORTAR_120mm_SHELL_AMMO_HE: Sh_82mm_AMOS {
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_1);
		indirectHit = 80;
		indirectHitRange = 31;
	};
};