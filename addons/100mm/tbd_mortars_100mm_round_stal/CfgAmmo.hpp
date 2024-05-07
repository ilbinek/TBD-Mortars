class CfgAmmo {
	class Sh_120mm_APFSDS;

	class TBD_MORTARS_100MM_ROUND_AMMO_STAL: Sh_120mm_APFSDS {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_STAL\TBD_MORTARS_100MM_ROUND_STAL);
		hit = 350;
		indirectHit = 11;
		indirectHitRange = 0.5;
		caliber = 30;
		typicalSpeed = 1575;
	};
};
