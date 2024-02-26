class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_81mm_SMOKE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = QUOTE($STR_TBD_MORTAR_81MM_SMOKE_SHELL);
		displayNameShort = "TBD Smoke";
        model = QPATHTOF(TBD_MORTAR_81mm_SMOKE\TBD_MORTAR_81mm_SMOKE);
		picture =  QPATHTOF(TBD_MORTAR_81mm_SMOKE\data\icon.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_81MM_SMOKE_SHELL_DESC);
		initSpeed = 200;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_81mm_SHELL_AMMO_SMOKE);
		type = 256;
    };  
};
