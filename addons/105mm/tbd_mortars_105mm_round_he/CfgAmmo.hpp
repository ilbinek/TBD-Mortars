class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_MORTARS_105mm_SHELL_AMMO_HE: Sh_82mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_105mm_SHELL_HE\TBD_MORTARS_105mm_SHELL_HE);
		indirectHit = 70;
		indirectHitRange = 25;
	};
};
