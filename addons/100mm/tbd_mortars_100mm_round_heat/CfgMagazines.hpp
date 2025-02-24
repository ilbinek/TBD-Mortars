class CfgMagazines {
	class 20Rnd_120mm_HEAT_MP;

	class TBD_MORTARS_100MM_MAG_HEAT: 20Rnd_120mm_HEAT_MP {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "TBD Team";
        displayName = CSTRING(ROUND_HEAT);
		displayNameShort = CSTRING(ROUND_HEAT);
        model = QPATHTOF(TBD_MORTARS_100mm_ROUND_HEAT\TBD_MORTARS_100mm_ROUND_HEAT);
		picture = QPATHTOF(TBD_MORTARS_100mm_ROUND_HEAT\data\round.paa);
		descriptionShort = CSTRING(ROUND_HEAT);
        mass = 120;
		count = 1;
		ammo = QUOTE(TBD_MORTARS_100mm_ROUND_AMMO_HEAT);
		type = 256;
		initSpeed = 975;
<<<<<<< Updated upstream
=======
		tracersEvery = 1;
		muzzleImpulseFactor [] = {0,0}; 
>>>>>>> Stashed changes
};
};