class CfgAmmo {
	class Sh_120mm_HE;

	class TBD_MORTARS_100MM_ROUND_AMMO_HE: Sh_120mm_HE {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_HE\TBD_MORTARS_100MM_ROUND_HE);
		hit = 220;
		indirectHit = 100;
		indirectHitRange = 20;
		typicalSpeed = 500;
		airFriction = 0;
		timeToLive = 25;
	};
};
