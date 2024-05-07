class CfgMagazines
{
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTARS_100MM_MAG_HE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_HE);
		displayNameShort = CSTRING(ROUND_HE);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_HE\TBD_MORTARS_100MM_ROUND_HE);
		picture = QPATHTOF(TBD_MORTARS_100MM_ROUND_HE\data\round.paa);
		descriptionShort = CSTRING(ROUND_HE);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_100MM_ROUND_AMMO_HE);
		type = 256;
	};
};
