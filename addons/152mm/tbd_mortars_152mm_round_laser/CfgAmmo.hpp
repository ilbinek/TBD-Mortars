class CfgAmmo {
	class Sh_155mm_AMOS;

	class TBD_MORTARS_152MM_ROUND_AMMO_LASER: Sh_155mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_152MM_ROUND_LASER\TBD_MORTARS_152MM_ROUND_LASER);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		timeToLive = 180;
	};
};
