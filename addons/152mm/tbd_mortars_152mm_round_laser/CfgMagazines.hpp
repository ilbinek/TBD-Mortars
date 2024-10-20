class CfgMagazines {
	class 8Rnd_120mm_HE_shells;

	class TBD_MORTARS_152MM_ROUND_LASER: 8Rnd_120mm_HE_shells {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_LASER);
		displayNameShort = CSTRING(ROUND_LASER);
        model = QPATHTOF(TBD_MORTARS_152MM_ROUND_LASER\TBD_MORTARS_152MM_ROUND_LASER);
		picture = QPATHTOF(TBD_MORTARS_152MM_ROUND_LASER\data\laser.paa);
		descriptionShort = CSTRING(ROUND_LASER);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_152MM_ROUND_AMMO_LASER);
		type = 256;
		initSpeed = 660;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH1: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 74;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH2: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 117;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH3: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 160;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH4: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 203;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH5: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 246;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH6: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 289;
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH7: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 340;
	};
};
