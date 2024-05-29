class CfgMagazines {
	class 32Rnd_120mm_APFSDS_shells;
	
	class TBD_MORTARS_100MM_MAG_STAL: 32Rnd_120mm_APFSDS_shells {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "TBD Team";
        displayName = CSTRING(ROUND_STAL);
		displayNameShort = CSTRING(ROUND_STAL);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_STAL\TBD_MORTARS_100MM_ROUND_STAL);
		picture = QPATHTOF(TBD_MORTARS_100MM_ROUND_STAL\data\round.paa);
		descriptionShort = CSTRING(ROUND_STAL);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_100MM_ROUND_AMMO_STAL);
		type = 256;
		initSpeed = 1575;
	};
};
