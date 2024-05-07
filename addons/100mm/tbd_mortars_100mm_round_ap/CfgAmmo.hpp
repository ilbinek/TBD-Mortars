class CfgAmmo {
	class Sh_120mm_APFSDS;

	class TBD_MORTARS_100MM_ROUND_AMMO_AP: Sh_120mm_APFSDS {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_AP\TBD_MORTARS_100MM_ROUND_AP);
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 0.5;
		caliber = 12;
		typicalSpeed = 1575;
		
	};
};
