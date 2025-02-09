class CfgAmmo {

	class GrenadeCore;
	class FlareCore: GrenadeCore {};
	class Flare_82mm_AMOS_White: FlareCore {};

	    class TBD_MORTAR_82mm_SHELL_AMMO_ILLUM: Flare_82mm_AMOS_White {
			
		model = QPATHTOF(shell_smoke\shell_illum_charge0);
	};

};

