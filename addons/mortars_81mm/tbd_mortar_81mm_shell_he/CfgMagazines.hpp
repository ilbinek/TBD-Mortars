class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_81mm_HE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = QUOTE($STR_TBD_MORTAR_81MM_HE_SHELL);
		displayNameShort = "TBD HE";
		model = QPATHTOF(TBD_MORTAR_81mm_HE\TBD_MORTAR_81mm_HE);
		picture = QPATHTOF(TBD_MORTAR_81mm_HE\data\icon.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_81MM_HE_SHELL_DESC);
		initSpeed = 200;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_81mm_SHELL_AMMO_HE);
		type = 256;
	};  
};																																						
