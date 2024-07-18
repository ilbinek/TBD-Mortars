class CfgMagazines {
	class 8Rnd_120mm_HE_shells;
	
	class TBD_MORTARS_152MM_MAG_HE: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_HE);
		displayNameShort = CSTRING(ROUND_HE);
        model = QPATHTOF(TBD_MORTARS_152mm_ROUND_HE\TBD_MORTARS_152mm_ROUND_HE);
		picture = QPATHTOF(TBD_MORTARS_152mm_ROUND_HE\data\he.paa);
		descriptionShort = CSTRING(ROUND_HE);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152mm_ROUND_AMMO_HE);
		type = 256;
		initSpeed = 660;
	};
};
