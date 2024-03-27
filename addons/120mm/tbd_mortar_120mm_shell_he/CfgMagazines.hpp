	class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_1: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = CSTRING(HE_CH1);
		displayNameShort = CSTRING(HE_CH1_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_1);
		picture = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\data\icon_120mm_he.paa);
		descriptionShort = CSTRING(HE_CH1_DESC);
		initSpeed = 75;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_120mm_SHELL_AMMO_HE);
		type = 256;
	};
	
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_2: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = CSTRING(HE_CH2);
		displayNameShort = CSTRING(HE_CH2_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_2);
		descriptionShort = CSTRING(HE_CH2_DESC);
		initSpeed = 103;
	};

	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_3: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = CSTRING(HE_CH3);
		displayNameShort = CSTRING(HE_CH3_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_3);
		descriptionShort = CSTRING(HE_CH3_DESC);
		initSpeed = 131;
	};

	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_4: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = CSTRING(HE_CH4);
		displayNameShort = CSTRING(HE_CH4_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_4);
		descriptionShort = CSTRING(HE_CH4_DESC);
		initSpeed = 159;
	};

	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_5: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = CSTRING(HE_CH5);
		displayNameShort = CSTRING(HE_CH5_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_5);
		descriptionShort = CSTRING(HE_CH5_DESC);
		initSpeed = 187;
	};

	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_6: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = CSTRING(HE_CH6);
		displayNameShort = CSTRING(HE_CH6_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_6);
		descriptionShort = CSTRING(HE_CH6_DESC);
		initSpeed = 215;
	};

	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_7: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = CSTRING(HE_CH7);
		displayNameShort = CSTRING(HE_CH7_SHORT);
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_7);
		descriptionShort = CSTRING(HE_CH7_DESC);
		initSpeed = 242;
	};  
};		
