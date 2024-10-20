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

	class TBD_MORTARS_152MM_ROUND_HE_CH1: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 74;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH2: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 117;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH3: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 160;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH4: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 203;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH5: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 246;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH6: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 289;
	};

	class TBD_MORTARS_152MM_ROUND_HE_CH7: TBD_MORTARS_152MM_ROUND_HE {
		initSpeed = 340;
	};
};
