class CfgAmmo {
	class RocketCore;
	class RocketBase: RocketCore {};
	class R_PG32V_F: RocketBase {};

	class ShellCore;
	class ShellBase: ShellCore {};
	class ammo_Penetrator_Base: ShellBase {};

	class TBD_MORTAR_82mm_SHELL_AMMO_CUMUL_SUB: ammo_Penetrator_Base {
		model = QPATHTOF(TBD_MORTAR_82mm_HEAT\TBD_MORTAR_82mm_HEAT);
		hit = 170;
		caliber = 9;
	};

	class TBD_MORTAR_82mm_SHELL_AMMO_CUMUL: R_PG32V_F {
		model = QPATHTOF(TBD_MORTAR_82mm_HEAT\TBD_MORTAR_82mm_HEAT);
		submunitionAmmo = QUOTE(TBD_MORTAR_82mm_SHELL_AMMO_CUMUL_SUB);
		airFriction = 0.00;
    sideAirFriction = 0.00;
    maxSpeed = 0;
    initTime = 0;
    thrustTime = 1.5;
    thrust = 0;
	timeToLive = 180;
	deflecting = 0;
	muzzleEffect = "";
	simulation = "shotShell";



	};
};
