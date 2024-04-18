class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTARS_105mm_CASING_CHARGE_1: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = CSTRING(105_casing_charge_1);
		displayNameShort = CSTRING(105_casing_charge_1_short);
		descriptionShort = CSTRING(105_casing_charge_1_desc);
        model = QPATHTOF(TBD_MORTARS_105mm_CASING\TBD_MORTARS_105mm_CASING);
        editorPreview = QPATHTOF(TBD_MORTARS_105mm_CASING\data\casing.jpg);
		picture = QPATHTOF(TBD_MORTARS_105mm_CASING\data\casing.paa);
        mass = 80;
		count = 1;
		type = 256;
	};

	class TBD_MORTARS_105mm_CASING_CHARGE_2: TBD_MORTARS_105mm_CASING_CHARGE_1 {
        displayName = CSTRING(105_casing_charge_2);
		displayNameShort = CSTRING(105_casing_charge_2_short);
		descriptionShort = CSTRING(105_casing_charge_2_desc);
	};

	class TBD_MORTARS_105mm_CASING_CHARGE_3: TBD_MORTARS_105mm_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_3);
		displayNameShort = CSTRING(105_casing_charge_3_short);
		descriptionShort = CSTRING(105_casing_charge_3_desc);
	};

	class TBD_MORTARS_105mm_CASING_CHARGE_4: TBD_MORTARS_105mm_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_4);
		displayNameShort = CSTRING(105_casing_charge_4_short);
		descriptionShort = CSTRING(105_casing_charge_4_desc);
	};

	class TBD_MORTARS_105mm_CASING_CHARGE_5: TBD_MORTARS_105mm_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_5);
		displayNameShort = CSTRING(105_casing_charge_5_short);
		descriptionShort = CSTRING(105_casing_charge_5_desc);
	};

	class TBD_MORTARS_105mm_CASING_CHARGE_6: TBD_MORTARS_105mm_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_6);
		displayNameShort = CSTRING(105_casing_charge_6_short);
		descriptionShort = CSTRING(105_casing_charge_6_desc);
	};

	class TBD_MORTARS_105mm_CASING_CHARGE_7: TBD_MORTARS_105mm_CASING_CHARGE_1 {
		displayName = CSTRING(105_casing_charge_7);
		displayNameShort = CSTRING(105_casing_charge_7_short);
		descriptionShort = CSTRING(105_casing_charge_7_desc);
	};
};
