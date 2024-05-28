class CfgAmmo {
	class ace_hot_HOT1;
	class ace_hot_HOT2: ace_hot_HOT1 {
		class ace_missileguidance;
	};

	class TBD_MORTARS_100MM_ROUND_AMMO_ATGM: ace_hot_HOT2 {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\tbd_mortars_100mm_ammo_atgm);
		hit = 200;
		indirectHit = 20;
		indirectHitRange = 3.6;
		caliber = 23;
		typicalSpeed = 975;
		airFriction = -0.0001;
		class ace_missileguidance: ace_missileguidance {
          enabled = 1;
        };
	};
};
