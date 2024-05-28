class CfgAmmo {
	class ace_hot_HOT1;
	class ace_hot_HOT2: ace_hot_HOT1 {
		class ace_missileguidance;
	};
    class ace_hot_ammo_Penetrator_HOT2;

	class tbd_mortars_100mm_penetrator: ace_hot_ammo_Penetrator_HOT2 {
		hit = 290;
		caliber = 44;
	};

	class TBD_MORTARS_100MM_ROUND_AMMO_ATGM: ace_hot_HOT2 {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\tbd_mortars_100mm_ammo_atgm);
		hit = 240;
		indirectHit = 20;
		indirectHitRange = 3.6;
		caliber = 1;
		initSpeed = 300;
		typicalSpeed = 300;
		airFriction = -0.035;
		timeToLive = 22;
		maxControlRange = 5500;
		submunitionAmmo = "tbd_mortars_100mm_penetrator";
		class ace_missileguidance: ace_missileguidance {
          enabled = 1;
        };
	};
};
