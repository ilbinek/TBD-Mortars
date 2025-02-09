class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore {};


	class TBD_MORTAR_82mm_SHELL_AMMO_SMOKE: SubmunitionBase {
		model = QPATHTOF(shell_smoke\shell_smoke_charge0);
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

