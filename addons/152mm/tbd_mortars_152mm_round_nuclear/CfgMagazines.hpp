class CfgMagazines {
	class 8Rnd_120mm_HE_shells;

	class TBD_MORTARS_152MM_ROUND_NUCLEAR: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_NUCLEAR);
		displayNameShort = CSTRING(ROUND_NUCLEAR);
        model = QPATHTOF(TBD_MORTARS_152MM_ROUND_NUCLEAR\TBD_MORTARS_152MM_ROUND_NUCLEAR);
		picture = QPATHTOF(TBD_MORTARS_152MM_ROUND_NUCLEAR\data\nuclear.paa);
		descriptionShort = CSTRING(ROUND_NUCLEAR);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152MM_ROUND_AMMO_NUCLEAR);
		type = 256;
		initSpeed = 660;
	};
};
