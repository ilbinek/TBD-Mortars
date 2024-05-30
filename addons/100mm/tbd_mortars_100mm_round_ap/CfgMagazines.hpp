class CfgMagazines {
	class 32Rnd_120mm_APFSDS_shells;

	class TBD_MORTARS_100MM_MAG_AP: 32Rnd_120mm_APFSDS_shells {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "TBD Team";
        displayName = CSTRING(ROUND_AP);
		displayNameShort = CSTRING(ROUND_AP);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_AP\TBD_MORTARS_100MM_ROUND_AP);
		picture = QPATHTOF(TBD_MORTARS_100MM_ROUND_AP\data\round.paa);
		descriptionShort = CSTRING(ROUND_AP);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_100MM_ROUND_AMMO_AP);
		type = 256;
		initSpeed = 1575;
	};
};
