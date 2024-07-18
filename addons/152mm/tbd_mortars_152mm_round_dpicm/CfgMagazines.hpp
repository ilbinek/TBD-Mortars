class CfgMagazines {
	class 8Rnd_120mm_HE_shells;
	
	class TBD_MORTARS_152MM_MAG_DPICM: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_DPICM);
		displayNameShort = CSTRING(ROUND_DPICM);
        model = QPATHTOF(TBD_MORTARS_152mm_ROUND_DPICM\TBD_MORTARS_152mm_ROUND_DPICM);
		picture = QPATHTOF(TBD_MORTARS_152mm_ROUND_DPICM\data\dpicm.paa);
		descriptionShort = CSTRING(ROUND_DPICM);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152mm_ROUND_AMMO_DPICM);
		type = 256;
		initSpeed = 660;
	};
};
