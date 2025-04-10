class CfgAmmo {
	class SubmunitionBase;
	class Cluster_155mm_AMOS: SubmunitionBase {};
	class ShellBase;
	class Mo_cluster_AP: ShellBase {};

	class TBD_MORTARS_152MM_ROUND_AMMO_DPICM: Cluster_155mm_AMOS {
		model = QPATHTOF(TBD_MORTARS_152MM_ROUND_DPICM\TBD_MORTARS_152MM_ROUND_DPICM);
		submunitionAmmo = QUOTE(TBD_MORTARS_105mm_SHELL_AMMO_DPICM_SUB);
		hit = 270;
		indirectHit = 130;
		indirectHitRange = 35;
		typicalSpeed = 660;
		airFriction = 0;
		triggerOnImpact = 1;
		triggerDistance = -1;
	};

	class TBD_MORTARS_152MM_ROUND_AMMO_DPICM_SUB: Mo_cluster_AP {
		hit = 15;
		indirectHit = 10;
		indirectHitRange = 10;
		ace_frag_skip = 0;
		ace_frag_metal = 248;
		ace_frag_charge = 44;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "3/5";
		ace_frag_fragCount = 1200;
		ace_frag_classes[] = {"ace_frag_tiny","ace_frag_tiny", "ace_frag_tiny_HD"};
	};
};
