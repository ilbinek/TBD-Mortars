class CfgAmmo {
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore {};

	class TBD_MORTAR_82mm_SHELL_AMMO_SMOKE: SubmunitionBase {
		model = QPATHTOF(TBD_MORTAR_82mm_SMOKE\TBD_MORTAR_82mm_SMOKE);
		submunitionAmmo = "SmokeShellArty";
		ace_rearm_caliber = 81;
		submunitionAutoleveling = 1;
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionConeType[] = {"randomupcone",20};
		submunitionInitialOffset[] = {0,0,-7};
		submunitionInitSpeed = 14;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		triggerDistance = -1;
	};
};
