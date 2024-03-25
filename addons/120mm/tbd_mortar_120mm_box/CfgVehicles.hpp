class CfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTAR_120mm_BOX : NATO_Box_Base {
        scope = 2;
		author = "TBD Team";
        displayName = CSTRING(BOX_HE);
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

        class ACE_ACtions {
            class OpenBox {
                displayName = CSTRING(OPEN);
                condition = QUOTE([ARR_1(_target)] call FUNC(canOpen));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(open));
                distance = 2;
                selection = "int_cover";
            };

            class CloseBox {
                displayName = CSTRING(CLOSE);
                condition = QUOTE([ARR_1(_target)] call FUNC(canClose));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(close));
                distance = 2;
                selection = "int_cover";
            };
        };
    };
};
