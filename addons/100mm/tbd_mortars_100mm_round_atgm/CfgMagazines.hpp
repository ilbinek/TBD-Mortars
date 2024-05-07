class CfgMagazines
{
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTARS_100MM_MAG_ATGM: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_ATGM);
		displayNameShort = CSTRING(ROUND_ATGM);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\TBD_MORTARS_100MM_ROUND_ATGM);
		picture = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\data\round.paa);
		descriptionShort = CSTRING(ROUND_ATGM);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_100MM_ROUND_AMMO_ATGM);
		type = 256;
	};
};
