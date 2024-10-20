class CfgVehicles {
	class NATO_Box_Base;
	
	class TBD_MORTARS_152MM_CASING_SPENT: NATO_Box_Base {
		scope = 2;
		author = "TBD Team";
        displayName = CSTRING(CASING_SPENT);
		displayNameShort = CSTRING(CASING_SPENT);
        model = QPATHTOF(TBD_MORTARS_152MM_CASING_SPENT\TBD_MORTARS_152MM_CASING_SPENT);
		picture = QPATHTOF(TBD_MORTARS_152MM_CASING_SPENT\data\casing.paa);
		descriptionShort = CSTRING(CASING_SPENT);

		ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
	};
};
