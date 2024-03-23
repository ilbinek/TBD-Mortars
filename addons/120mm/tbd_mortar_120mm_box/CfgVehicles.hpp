class CfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTAR_120mm_BOX : NATO_Box_Base {
        scope = 2;
		author = "TBD Team";
        displayName = "120mmbox";
        model = QPATHTOF(TBD_MORTAR_120mm_BOX\TBD_MORTAR_120mm_BOX);
        editorPreview = QPATHTOF(TBD_MORTAR_120mm_BOX\data\preview.paa);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;

        class AnimationSources {
            class cover_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
                sound="GenericDoorsSound";
            };
            class mine_1_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            class mine_2_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            
        };

		
    };

};
