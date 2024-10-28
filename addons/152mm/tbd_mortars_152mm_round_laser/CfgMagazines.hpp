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

	class TBD_MORTARS_152MM_ROUND_LASER_CH_1: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 74;
		displayName = CSTRING(ROUND_LASER1);
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH_2: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 117;
		displayName = CSTRING(ROUND_LASER2);
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH_3: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 160;
		displayName = CSTRING(ROUND_LASER3);
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH_4: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 203;
		displayName = CSTRING(ROUND_LASER4);
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH_5: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 246;
		displayName = CSTRING(ROUND_LASER5);
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH_6: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 289;
		displayName = CSTRING(ROUND_LASER6);
	};

	class TBD_MORTARS_152MM_ROUND_LASER_CH_7: TBD_MORTARS_152MM_ROUND_LASER {
		initSpeed = 340;
		displayName = CSTRING(ROUND_LASER7);
	};
};
