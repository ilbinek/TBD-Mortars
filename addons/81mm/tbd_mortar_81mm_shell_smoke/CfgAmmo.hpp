class CfgAmmo {
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore {};

	class TBD_MORTAR_81mm_SHELL_AMMO_SMOKE: SubmunitionBase {
		model = QPATHTOF(TBD_MORTAR_81mm_SMOKE\TBD_MORTAR_81mm_SMOKE);
		submunitionAmmo = "SmokeShellArty";
		ace_rearm_caliber = 81;
		submunitionAutoleveling = 1;
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionConeType[] = {"randomUpCone",20};
		submunitionInitialOffset[] = {0,0,-20};
		submunitionInitSpeed = 15;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		triggerDistance = -1;
	};
};
