class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = CSTRING(HE_CHARGE_1);
		displayNameShort = CSTRING(HE_CHARGE_1);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_1);
		descriptionShort = CSTRING(HE_CHARGE_DESC);
		initSpeed = 74;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_105mm_SHELL_AMMO_HE);
		type = 256;
	};
	
	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_2: TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 {
		displayName = CSTRING(HE_CHARGE_2);
		displayNameShort = CSTRING(HE_CHARGE_2);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_2);
		initSpeed = 117;
	};

	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_3: TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 {
		displayName = CSTRING(HE_CHARGE_3);
		displayNameShort = CSTRING(HE_CHARGE_3);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_3);
		initSpeed = 160;
	};

	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_4: TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 {
		displayName = CSTRING(HE_CHARGE_4);
		displayNameShort = CSTRING(HE_CHARGE_4);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_4);
		initSpeed = 203;
	};

	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_5: TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 {
		displayName = CSTRING(HE_CHARGE_5);
		displayNameShort = CSTRING(HE_CHARGE_5);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_5);
		initSpeed = 246;
	};

	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_6: TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 {
		displayName = CSTRING(HE_CHARGE_6);
		displayNameShort = CSTRING(HE_CHARGE_6);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_6);
		initSpeed = 289;
	};

	class TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_7: TBD_MORTARS_105mm_ROUND_HE_CHARGE_MAG_1 {
		displayName = CSTRING(HE_CHARGE_7);
		displayNameShort = CSTRING(HE_CHARGE_7);
		model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE_CHARGE_7);
		initSpeed = 340;
	};  
};		
