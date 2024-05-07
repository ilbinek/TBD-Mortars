class CfgMagazines
{
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTARS_100MM_MAG_HEAT: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = CSTRING(ROUND_HEAT);
		displayNameShort = CSTRING(ROUND_HEAT);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_HEAT\TBD_MORTARS_100MM_ROUND_HEAT);
		picture = QPATHTOF(TBD_MORTARS_100MM_ROUND_HEAT\data\round.paa);
		descriptionShort = CSTRING(ROUND_HEAT);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_100MM_ROUND_AMMO_HEAT);
		type = 256;
	};
};
