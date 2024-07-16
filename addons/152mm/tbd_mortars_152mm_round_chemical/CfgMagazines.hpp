class CfgMagazines {
	class 8Rnd_120mm_HE_shells;
	
	class TBD_MORTARS_152MM_MAG_CHEMICAL: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_CHEMICAL);
		displayNameShort = CSTRING(ROUND_CHEMICAL);
        model = QPATHTOF(TBD_MORTARS_152mm_ROUND_CHEMICAL\TBD_MORTARS_152mm_ROUND_CHEMICAL);
		picture = QPATHTOF(TBD_MORTARS_152mm_ROUND_CHEMICAL\data\round.paa);
		descriptionShort = CSTRING(ROUND_CHEMICAL);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152mm_ROUND_AMMO_CHEMICAL);
		type = 256;
		initSpeed = 660;
	};
};
