class CfgAmmo {
	class Sh_120mm_HE;

	class TBD_MORTARS_152mm_ROUND_AMMO_DPICM: Sh_120mm_HE {
		model = QPATHTOF(TBD_MORTARS_152mm_ROUND_DPICM\TBD_MORTARS_152mm_ROUND_DPICM);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		timeToLive = 25;
	};
};
