class CfgAmmo {
	class Sh_155mm_AMOS_LG;
	class M_Mo_155mm_AT_LG;

	class TBD_MORTARS_105mm_SHELL_AMMO_LASER_SUB: M_Mo_155mm_AT_LG {
		hit = 165;
		indirectHit = 70;
		indirectHitRange = 25;
	};

	class TBD_MORTARS_105mm_SHELL_AMMO_LASER: Sh_155mm_AMOS_LG {
		model = QPATHTOF(TBD_MORTARS_105mm_SHELL_LASER\TBD_MORTARS_105mm_SHELL_LASER);
		hit = 165;
		indirectHit = 70;
		indirectHitRange = 25;
		submunitionAmmo = QUOTE(TBD_MORTARS_105mm_SHELL_AMMO_LASER_SUB);
	};
};
