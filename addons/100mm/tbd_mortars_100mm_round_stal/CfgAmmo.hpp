class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_MORTARS_100MM_ROUND_AMMO_STAL: Sh_82mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_STAL\TBD_MORTARS_100MM_ROUND_STAL);
		indirectHit = 70;
		indirectHitRange = 25;
	};
};
