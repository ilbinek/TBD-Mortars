class CfgAmmo {
	class Sh_120mm_HE;

	class TBD_MORTARS_152mm_ROUND_AMMO_LASER: Sh_120mm_HE {
		model = QPATHTOF(TBD_MORTARS_152mm_ROUND_LASER\TBD_MORTARS_152mm_ROUND_LASER);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		timeToLive = 25;
	};
};
