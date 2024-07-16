class CfgMagazines {
	class 8Rnd_120mm_HE_shells;
	
	class TBD_MORTARS_152MM_MAG_LASER: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_LASER);
		displayNameShort = CSTRING(ROUND_LASER);
        model = QPATHTOF(TBD_MORTARS_152mm_ROUND_LASER\TBD_MORTARS_152mm_ROUND_LASER);
		picture = QPATHTOF(TBD_MORTARS_152mm_ROUND_LASER\data\round.paa);
		descriptionShort = CSTRING(ROUND_LASER);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152mm_ROUND_AMMO_LASER);
		type = 256;
		initSpeed = 660;
	};
};
