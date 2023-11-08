class CfgAmmo {
	class GrenadeCore;
	class FlareCore: GrenadeCore {};
	class Flare_82mm_AMOS_White: FlareCore {};

	class TBD_MORTAR_82mm_SHELL_AMMO_ILLUM: Flare_82mm_AMOS_White {
		model = QPATHTOF(TBD_MORTAR_82mm_ILLUM\TBD_MORTAR_82mm_ILLUM);
		useFlare = 1;
	};
};
