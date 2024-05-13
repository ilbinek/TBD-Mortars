class CfgAmmo {
	class Sh_120mm_HEAT_MP;

	class TBD_MORTARS_100MM_ROUND_AMMO_HEAT: Sh_120mm_HEAT_MP {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_HEAT\TBD_MORTARS_100MM_ROUND_HEAT);
		hit = 180;
		indirectHit = 20;
		indirectHitRange = 3.6;
		caliber = 18;
		typicalSpeed = 975;
		airFriction = -0.0001;

	};
};
