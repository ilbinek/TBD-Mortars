class CfgMagazines {
class Default;
class CA_Magazine: Default {};

class VehicleMagazine: CA_Magazine {};

class 32Rnd_155mm_Mo_shells: VehicleMagazine {};

class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

class TBD_MORTAR_82mm_ILLUM: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";       
        displayName = "$STR_TBD_MORTAR_82MM_ILLUM_SHELL";        
        model = QPATHTOF(TBD_MORTAR_82mm_ILLUM\TBD_MORTAR_82mm_ILLUM);  
		picture =  QPATHTOF(TBD_MORTAR_82mm_ILLUM\data\icon.paa);
		descriptionShort = "$STR_TBD_MORTAR_82MM_ILLUM_SHELL_DESC";
		initSpeed = 200;
		mass = 70;
		count = 1;
		ammo = "rhs_ammo_3vs25m";
		type = 256;
    };  
};
