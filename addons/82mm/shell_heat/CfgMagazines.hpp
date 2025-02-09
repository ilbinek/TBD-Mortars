class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};


	class TBD_MORTAR_82mm_HEAT_CHARGE_3: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayName = QUOTE($STR_TBD_MORTAR_82MM_HEAT_SHELL_CHARGE3);
		displayNameShort = CSTRING(HEAT_SHORT);
		model = QPATHTOF(shell_heat\shell_heat_charge3);
		picture = QPATHTOF(shell_heat\data\icon.paa);
		descriptionShort = QUOTE($STR_TBD_MORTAR_82MM_HEAT_SHELL_DESC);
		initSpeed = 211;
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_MORTAR_82mm_SHELL_AMMO_HEAT);
		type = 256;
	}; 
};																																						
