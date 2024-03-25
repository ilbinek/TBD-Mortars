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
		displayName = "120mm OF-5 HE mortar shell - Charge 1";
		displayNameShort = "120mm HE mortar shell - Charge 1";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_1);
		picture = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\data\icon_120mm_he.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 350;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_120mm_SHELL_AMMO_HE);
		type = 256;
	};  
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_2: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = "120mm OF-5 HE mortar shell - Charge 2";
		displayNameShort = "120mm HE mortar shell - Charge 2";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_2);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 50;
	};  
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_3: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = "120mm OF-5 HE mortar shell - Charge 3";
		displayNameShort = "120mm HE mortar shell - Charge 3";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_3);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 50;
	};  
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_4: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = "120mm OF-5 HE mortar shell - Charge 4";
		displayNameShort = "120mm HE mortar shell - Charge 4";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_4);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 50;
	};  
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_5: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = "120mm OF-5 HE mortar shell - Charge 5";
		displayNameShort = "120mm HE mortar shell - Charge 5";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_5);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 50;
	};  
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_6: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = "120mm OF-5 HE mortar shell - Charge 6";
		displayNameShort = "120mm HE mortar shell - Charge 6";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_6);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 50;
	};  
	class TBD_MORTAR_120mm_SHELL_HE_CHARGE_7: TBD_MORTAR_120mm_SHELL_HE_CHARGE_1 {
		displayName = "120mm OF-5 HE mortar shell - Charge 7";
		displayNameShort = "120mm HE mortar shell - Charge 7";
		model = QPATHTOF(TBD_MORTAR_120mm_SHELL_HE\TBD_MORTAR_120mm_SHELL_HE_CHARGE_7);
		descriptionShort = QUOTE($STR_TBD_MORTAR_120MM_HE_SHELL_DESC);
		initSpeed = 50;
	};  
};		
