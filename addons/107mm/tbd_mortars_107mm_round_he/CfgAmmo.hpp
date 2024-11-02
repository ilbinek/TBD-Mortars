class CfgAmmo {
	class Sh_120mm_HE;

	class TBD_MORTARS_107MM_ROUND_AMMO_HE: Sh_120mm_HE {
		model = QPATHTOF(TBD_MORTARS_107MM_ROUND_HE\TBD_MORTARS_107MM_ROUND_HE);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		timeToLive = 180;
	};
};
