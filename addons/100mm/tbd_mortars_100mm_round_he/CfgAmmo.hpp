class CfgAmmo {
	class Sh_120mm_HE;

	class TBD_MORTARS_100MM_ROUND_AMMO_HE: Sh_120mm_HE {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		hit = 220;
		indirectHit = 100;
		indirectHitRange = 20;
		typicalSpeed = 667;
		airFriction = 0;
		timeToLive = 25;
		tracerStartTime = 0.1;
		tracerEndTime = 5;
		tracerScale = 1;
		explosive = 1;
		deflecting = 0;
	};
};
