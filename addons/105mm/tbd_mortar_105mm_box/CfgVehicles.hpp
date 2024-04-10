class CfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTAR_105MM_BOX : NATO_Box_Base {
        scope = 2;
		author = "TBD Team";
        displayName = "105mm HE box";
        model = QPATHTOF(TBD_MORTAR_105mm_BOX\TBD_MORTAR_105mm_BOX);
        editorPreview = QPATHTOF(TBD_MORTAR_105mm_BOX\data\box.jpg);
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
            class tube_1_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            class tube_2_source {
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

            class TakeMine1 {
                displayName = CSTRING(TAKE_MINE_HE);
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_105MM_TUBE)))] call FUNC(takeMine));
                distance = 2;
                selection = "int_mine_1";
            };

            class TakeMine2: TakeMine1 {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_105MM_TUBE)))] call FUNC(takeMine));
                selection = "int_mine_2";
            };

            class PutMine1 {
                displayName = CSTRING(PUT_MINE_HE);
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_105MM_TUBE)))] call FUNC(canPut));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_105MM_TUBE)))] call FUNC(putMine));
                distance = 2;
                selection = "int_mine_1";
            };

            class PutMine2: PutMine1 {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_105MM_TUBE)))] call FUNC(canPut));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_105MM_TUBE)))] call FUNC(putMine));
                selection = "int_mine_2";
            };
        };
    };

};
