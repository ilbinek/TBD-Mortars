class CfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTAR_artillery_pole : NATO_Box_Base {
        scope = 2;
		author = "TBD Team";
        displayName = "$STR_TBD_MORTAR_82MM_ARTILLERY_POLE";
        model = QPATHTOF(artillery_pole\artillery_pole.p3d);
        editorPreview = QPATHTOF(artillery_pole\data\preview.paa);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;

        class AnimationSources {
        };

		 
};
};
