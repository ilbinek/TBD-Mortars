class CfgMagazines {
	class 12Rnd_PG_missiles;

	class TBD_MORTARS_100MM_MAG_ATGM: 12Rnd_PG_missiles  {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "TBD Team";
        displayName = CSTRING(ROUND_ATGM);
		displayNameShort = CSTRING(ROUND_ATGM);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\TBD_MORTARS_100MM_ROUND_ATGM);
		picture = QPATHTOF(TBD_MORTARS_100MM_ROUND_ATGM\data\round.paa);
		descriptionShort = CSTRING(ROUND_ATGM);
        mass = 120;
		count = 1;
		initSpeed = 300;
		maxLeadSpeed = 300;

		ammo = QUOTE(TBD_MORTARS_100MM_ROUND_AMMO_ATGM);
		//ammo = "tbd_ammo_kornet_tandem";
		
		type = 256;
		muzzleImpulseFactor [] = {0,0}; 
	};
};
