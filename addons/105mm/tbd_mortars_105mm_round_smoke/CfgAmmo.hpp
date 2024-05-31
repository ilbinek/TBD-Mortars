class CfgAmmo {
	class SubmunitionCore;

	class TBD_MORTARS_105mm_SHELL_AMMO_SMOKE: SubmunitionCore {
		model = QPATHTOF(TBD_MORTARS_105mm_SHELL_SMOKE\TBD_MORTARS_105mm_SHELL_SMOKE);
		submunitionAmmo = "SmokeShellArty";
		ace_rearm_caliber = 105;
		submunitionAutoleveling = 1;
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionConeType[] = {"randomupcone",20};
		submunitionInitialOffset[] = {0,0,-7};
		submunitionInitSpeed = 25;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		triggerDistance = -1;
	};
};
