class CfgMagazines {
	class 8Rnd_120mm_HE_shells;

	class TBD_MORTARS_152MM_ROUND_HE: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_HE);
		displayNameShort = CSTRING(ROUND_HE);
        model = QPATHTOF(TBD_MORTARS_152MM_ROUND_HE\TBD_MORTARS_152MM_ROUND_HE);
		picture = QPATHTOF(TBD_MORTARS_152MM_ROUND_HE\data\he.paa);
		descriptionShort = CSTRING(ROUND_HE);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152MM_ROUND_AMMO_HE);
		type = 256;
		initSpeed = 660;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_1: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 120;
		displayName = CSTRING(ROUND_HE1);
		displayNameShort = CSTRING(ROUND_HE1);
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_2: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 170;
		displayName = CSTRING(ROUND_HE2);
		displayNameShort = CSTRING(ROUND_HE2);
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_3: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 220;
		displayName = CSTRING(ROUND_HE3);
		displayNameShort = CSTRING(ROUND_HE3);
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_4: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 270;
		displayName = CSTRING(ROUND_HE4);
		displayNameShort = CSTRING(ROUND_HE4);
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_5: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 320;
		displayName = CSTRING(ROUND_HE5);
		displayNameShort = CSTRING(ROUND_HE5);
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_6: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 370;
		displayName = CSTRING(ROUND_HE6);
		displayNameShort = CSTRING(ROUND_HE6);
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH_7: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 414;
		displayName = CSTRING(ROUND_HE7);
		displayNameShort = CSTRING(ROUND_HE7);
	};
};
