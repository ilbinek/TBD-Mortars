class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};
    

	class RocketCore;
	class RocketBase: RocketCore {};
	class R_PG32V_F: RocketBase {};

	class ShellCore;
	class ShellBase: ShellCore {};
	class ammo_Penetrator_Base: ShellBase {};

	class TBD_MORTAR_82mm_SHELL_AMMO_HEAT_SUB: ammo_Penetrator_Base {
		model = QPATHTOF(shell_heat\shell_heat_charge0);
		hit = 170;
		caliber = 9;
	};

	class TBD_MORTAR_82mm_SHELL_AMMO_HEAT: R_PG32V_F {
	model = QPATHTOF(shell_heat\shell_heat_charge0);
	submunitionAmmo = "TBD_MORTAR_82mm_SHELL_AMMO_HEAT_SUB";
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
	typicalSpeed = 211;



	};

};
