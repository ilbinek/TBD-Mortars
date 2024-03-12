class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_82mm_CUMUL: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = CSTRING(CUMUL);
		displayNameShort = CSTRING(CUMUL_DESC);
        model = QPATHTOF(TBD_MORTAR_82mm_HEAT\TBD_MORTAR_82mm_HEAT);
		picture =  QPATHTOF(TBD_MORTAR_82mm_HEAT\data\icon.paa);
		descriptionShort = CSTRING(CUMUL_DESC);
		initSpeed = 211;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_82mm_SHELL_AMMO_CUMUL);
		type = 256;
    };  
};
