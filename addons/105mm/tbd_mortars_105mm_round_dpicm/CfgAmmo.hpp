class CfgAmmo {
	class SubmunitionBase;
	class Cluster_155mm_AMOS: SubmunitionBase {};
	class ShellBase;
	class Mo_cluster_AP: ShellBase {};

	class TBD_MORTARS_105mm_SHELL_AMMO_DPICM_SUB: Mo_cluster_AP {
		hit = 25;
		indirectHit = 20;
		indirectHitRange = 6;
		ace_frag_skip = 0;
		ace_frag_metal = 248;
		ace_frag_charge = 44;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "3/5";
		ace_frag_fragCount = 1200;
		ace_frag_classes[] = {"ace_frag_tiny","ace_frag_tiny", "ace_frag_tiny_HD"};
	};

	class TBD_MORTARS_105mm_SHELL_AMMO_DPICM: Cluster_155mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_105mm_SHELL_DPICM\TBD_MORTARS_105mm_SHELL_DPICM);
	    submunitionAmmo = QUOTE(TBD_MORTARS_105mm_SHELL_AMMO_DPICM_SUB);
		hit = 165;
		indirectHit = 70;
		indirectHitRange = 25;
        triggerDistance = 50;
    };
};
