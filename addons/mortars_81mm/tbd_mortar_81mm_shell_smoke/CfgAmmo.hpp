class CfgAmmo {
	class ShotDeployCore;
	class ShotDeployBase: ShotDeployCore {};
	class Smoke_82mm_AMOS_White: ShotDeployBase {};

	class TBD_MORTAR_81mm_SHELL_AMMO_SMOKE: Smoke_82mm_AMOS_White {
		model = QPATHTOF(TBD_MORTAR_81mm_SMOKE\TBD_MORTAR_81mm_SMOKE);
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
