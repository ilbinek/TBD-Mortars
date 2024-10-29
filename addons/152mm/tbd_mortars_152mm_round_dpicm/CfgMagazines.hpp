class CfgMagazines {
	class 8Rnd_120mm_HE_shells;

	class TBD_MORTARS_152MM_ROUND_DPICM: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_DPICM);
		displayNameShort = CSTRING(ROUND_DPICM);
        model = QPATHTOF(TBD_MORTARS_152MM_ROUND_DPICM\TBD_MORTARS_152MM_ROUND_DPICM);
		picture = QPATHTOF(TBD_MORTARS_152MM_ROUND_DPICM\data\dpicm.paa);
		descriptionShort = CSTRING(ROUND_DPICM);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152MM_ROUND_AMMO_DPICM);
		type = 256;
		initSpeed = 660;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_1: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 120;
		displayName = CSTRING(ROUND_DPICM1);
		displayNameShort = CSTRING(ROUND_DPICM1);
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_2: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 170;
		displayName = CSTRING(ROUND_DPICM2);
		displayNameShort = CSTRING(ROUND_DPICM2);
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_3: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 220;
		displayName = CSTRING(ROUND_DPICM3);
		displayNameShort = CSTRING(ROUND_DPICM3);
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_4: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 270;
		displayName = CSTRING(ROUND_DPICM4);
		displayNameShort = CSTRING(ROUND_DPICM4);
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_5: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 320;
		displayName = CSTRING(ROUND_DPICM5);
		displayNameShort = CSTRING(ROUND_DPICM5);
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_6: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 370;
		displayName = CSTRING(ROUND_DPICM6);
		displayNameShort = CSTRING(ROUND_DPICM6);
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_7: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 414;
		displayName = CSTRING(ROUND_DPICM7);
		displayNameShort = CSTRING(ROUND_DPICM7);
	};
};
