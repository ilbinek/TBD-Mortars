class CfgAmmo {
	class Sh_120mm_HE;

	class TBD_MORTARS_152mm_ROUND_AMMO_NUCLEAR: Sh_120mm_HE {
		model = QPATHTOF(TBD_MORTARS_152mm_ROUND_NUCLEAR\TBD_MORTARS_152mm_ROUND_NUCLEAR);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		timeToLive = 25;
	};
};
