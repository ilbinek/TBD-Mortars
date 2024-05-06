class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_MORTARS_100mm_ROUND_AMMO_HEAT: Sh_82mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_100mm_ROUND_HEAT\TBD_MORTARS_100mm_ROUND_HEAT);
		indirectHit = 70;
		indirectHitRange = 25;
	};
};
