class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_82mm_HE_CHARGE_1: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_CHARGE1);
		displayNameShort = CSTRING(HE_SHORT);
		model = QPATHTOF(TBD_MORTAR_82mm_HE\tbd_mortar_82mm_shell_he_charge1);
		picture = QPATHTOF(TBD_MORTAR_82mm_HE\data\icon.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_DESC);
		initSpeed = 70;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_82mm_SHELL_AMMO_HE);
		type = 256;
	};  

	class TBD_MORTAR_82mm_HE_CHARGE_2: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_CHARGE2);
		displayNameShort = CSTRING(HE_SHORT);
		model = QPATHTOF(TBD_MORTAR_82mm_HE\tbd_mortar_82mm_shell_he_charge2);
		picture = QPATHTOF(TBD_MORTAR_82mm_HE\data\icon.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_DESC);
		initSpeed = 140;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_82mm_SHELL_AMMO_HE);
		type = 256;
	}; 

	class TBD_MORTAR_82mm_HE_CHARGE_3: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_CHARGE3);
		displayNameShort = CSTRING(HE_SHORT);
		model = QPATHTOF(TBD_MORTAR_82mm_HE\tbd_mortar_82mm_shell_he_charge3);
		picture = QPATHTOF(TBD_MORTAR_82mm_HE\data\icon.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_DESC);
		initSpeed = 211;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_82mm_SHELL_AMMO_HE);
		type = 256;
	}; 
};																																						
