class CfgAmmo {
	class Default;
	class MissileCore: Default {};
    class MissileBase: MissileCore {};
    class M_Titan_AT: MissileBase {};

	class ace_hot_HOT1 {};
	class ace_hot_HOT2: ace_hot_HOT1 {};
    class ace_hot_ammo_Penetrator_HOT2;


	//class ace_missileguidance_type_Konkurs {};

	class tbd_mortars_100mm_penetrator: ace_hot_ammo_Penetrator_HOT2 {
		hit = 290;
		caliber = 44;
	};

	class TBD_MORTARS_100MM_ROUND_AMMO_ATGM: M_Titan_AT {
		model = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\tbd_mortars_100mm_ammo_atgm);
		hit = 240;
		indirectHit = 20;
		indirectHitRange = 3.6;
		caliber = 1;
		typicalSpeed = 300;
		airFriction = -0.035;
		timeToLive = 22;
		maxControlRange = 5500;
		submunitionAmmo = "tbd_mortars_100mm_penetrator";

		class ace_missileguidance {

	    enabled = 1;
        seekerMaxRange = 5500;
        offsetFromCrosshair[] = {0,0,0};
        pitchRate = 90;
        yawRate = 90;
        canVanillaLock = 0;
        showTrail = 1;
        defaultSeekerType = "SACLOS";
        seekerTypes[] = {"SACLOS"};
        defaultSeekerLockMode = "LOAL";
        seekerLockModes[] = {"LOAL","LOBL"};
        defaultNavigationType = "Line";
        navigationTypes[] = {"Line"};
        lineGainP = 4;
        lineGainD = 5;
        initialPitch = 2;
        seekLastTargetPos = 0;
        seekerAngle = 30;
        seekerAccuracy = 1;
        seekerMinRange = 75;
        defaultAttackProfile = "BEAM";
        attackProfiles[] = {"BEAM"};
		correctionDistance = 30;

   };
	};
};
