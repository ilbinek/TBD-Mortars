class CfgAmmo {
	class Sh_155mm_AMOS;

	class TBD_MORTARS_152MM_ROUND_AMMO_HE: Sh_155mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_152MM_ROUND_HE\TBD_MORTARS_152MM_ROUND_HE);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		timeToLive = 180;
	};
};
