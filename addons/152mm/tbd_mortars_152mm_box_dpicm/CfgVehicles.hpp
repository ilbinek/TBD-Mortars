class CfgVehicles {
    class ReammoBox_F;
    class NATO_Box_Base: ReammoBox_F {
        class ACE_Actions;
    };

    class TBD_MORTARS_152MM_BOX_DPICM : NATO_Box_Base {
        scope = 2;
		author = "TBD Team";
        displayName = CSTRING(BOX_DPICM);
        model = QPATHTOF(TBD_MORTARS_152MM_BOX_DPICM\TBD_MORTARS_152MM_BOX_DPICM);
        editorPreview = QPATHTOF(TBD_MORTARS_152MM_BOX_DPICM\data\box.jpg);
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

        class ACE_Actions: ACE_Actions {
            class TBD_OpenBox {
                displayName = CSTRING(OPEN);
                condition = QUOTE([ARR_1(_target)] call FUNC(canOpen));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(open));
                distance = 2;
                selection = "int_cover";
            };

            class TBD_CloseBox {
                displayName = CSTRING(CLOSE);
                condition = QUOTE([ARR_1(_target)] call FUNC(canClose));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(close));
                distance = 2;
                selection = "int_cover";
            };

            class TBD_TakeMine1 {
                displayName = CSTRING(TAKE);
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTARS_152MM_CASING_CH_7)))] call FUNC(takeMine));
                distance = 2;
                selection = "int_mine_1";
            };

            class TBD_TakeMine2: TBD_TakeMine1 {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTARS_152MM_ROUND_DPICM)))] call FUNC(takeMine));
                selection = "int_mine_2";
            };

            class TBD_PutMine1 {
                displayName = CSTRING(PUT);
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTARS_152MM_CASING_CH_7)))] call FUNC(canPut));
                exceptions[] = {};
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTARS_152MM_CASING_CH_7)))] call FUNC(putMine));
                distance = 2;
                selection = "int_mine_1";
            };

            class TBD_PutMine2: TBD_PutMine1 {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTARS_152MM_ROUND_DPICM)))] call FUNC(canPut));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTARS_152MM_ROUND_DPICM)))] call FUNC(putMine));
                selection = "int_mine_2";
            };
        };
    };
};
