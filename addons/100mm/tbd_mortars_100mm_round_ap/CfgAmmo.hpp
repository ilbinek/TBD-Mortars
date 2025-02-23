class CfgAmmo {
	class Sh_120mm_APFSDS;

	class TBD_MORTARS_100MM_ROUND_AMMO_AP: Sh_120mm_APFSDS {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 0.5;
		caliber = 12;
		typicalSpeed = 1575;
		airFriction = -0.0001;
		tracerStartTime = 0.1;
		tracerEndTime = 5;
		tracerScale = 1;
		
	};
};
