class CfgAmmo {
	class Sh_120mm_HEAT_MP;

	class TBD_MORTARS_100MM_ROUND_AMMO_HEAT: Sh_120mm_HEAT_MP {
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		hit = 200;
		indirectHit = 20;
		indirectHitRange = 3.6;
		caliber = 23;
		typicalSpeed = 975;
		airFriction = -0.0001;
		tracerStartTime = 0.1;
		tracerEndTime = 5;
		tracerScale = 1;

	};
};
