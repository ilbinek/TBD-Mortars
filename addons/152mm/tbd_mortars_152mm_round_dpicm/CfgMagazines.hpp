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
		initSpeed = 74;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_2: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 117;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_3: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 160;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_4: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 203;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_5: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 246;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_6: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 289;
	};

	class TBD_MORTARS_152MM_ROUND_DPICM_CH_7: TBD_MORTARS_152MM_ROUND_DPICM {
		initSpeed = 340;
	};
};
