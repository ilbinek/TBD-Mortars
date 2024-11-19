class CfgMagazines {
	class 32Rnd_155mm_Mo_shells;

	class TBD_MORTARS_107MM_ROUND_HE: 32Rnd_155mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_HE);
		displayNameShort = CSTRING(ROUND_HE);
        model = QPATHTOF(TBD_MORTARS_107MM_ROUND_HE\TBD_MORTARS_107MM_ROUND_HE);
		picture = QPATHTOF(TBD_MORTARS_107MM_ROUND_HE\data\he.paa);
		descriptionShort = CSTRING(ROUND_HE);
        mass = 120;
		count = 12;
		ammo = QUOTE(TBD_MORTARS_107MM_ROUND_AMMO_HE);
		type = 256;
		initSpeed = 290;
		muzzleImpulseFactor[] = {0,0};
	};
};
