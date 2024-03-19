class CfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTAR_105mm_BOX : NATO_Box_Base {
        scope = 2;
		author = "TBD Team";
        displayName = "$STR_TBD_MORTAR_82MM_BOX_HE";
        model = QPATHTOF(TBD_MORTAR_82mm_BOX_HE\TBD_MORTAR_82mm_BOX_HE);
        editorPreview = QPATHTOF(TBD_MORTAR_82mm_BOX_HE\data\preview.paa);
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

		 class ACE_Actions {
            ///////////////////// Lid /////////////////////
            class openBox {
                displayName = "$STR_TBD_MORTAR_82MM_OPEN";
                condition = QUOTE([ARR_1(_target)] call FUNC(canOpen));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(openLid));
                distance = 2;
                selection = "int_cover";
            };

            class closeBox {
                displayName = "$STR_TBD_MORTAR_82MM_CLOSE";
                condition = QUOTE([ARR_1(_target)] call FUNC(canClose));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(closeLid));
                distance = 2;
                selection = "int_cover";
            };


            ///////////////////// Take mines /////////////////////
            class ACE_Round_1_Take {
                displayName = "$STR_TBD_MORTAR_82MM_TAKE_SHELL";
                distance = 2;
                showDisabled=0;
				exceptions[]={};
				priority=5;
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                statement = QUOTE([ARR_2(_target,1)] call FUNC(takeMine));
                selection = "int_tube_1"; 
            };

            class ACE_Round_2_Take : ACE_Round_1_Take {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_2(_target,2)] call FUNC(takeMine));
                selection = "int_tube_2"; 
            };


            ///////////////////// Put /////////////////////

            class ACE_Round_1_Put {
                displayName = "$STR_TBD_MORTAR_82MM_STORE";
                distance = 2;
                showDisabled=0;
				exceptions[]={};
				priority=5;
                condition = QUOTE([ARR_2(_target,1) ] call FUNC(canReturn));
                selection = "int_tube_1";

                class ACE_Round_1_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_HE_SHELL";
                    condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_HE)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_HE)))] call FUNC(loadMine));
                    showDisabled=0;
					exceptions[]={};
                };

                class ACE_Round_1_Put_SMOKE: ACE_Round_1_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_SMOKE_SHELL";
                    condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_SMOKE)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_SMOKE)))] call FUNC(loadMine));
                };

                class ACE_Round_1_Put_ILLUM: ACE_Round_1_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_ILLUM_SHELL";
                    condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_ILLUM)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_ILLUM)))] call FUNC(loadMine));
                };

                class ACE_Round_1_Put_CUMUL: ACE_Round_1_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_CUMUL_SHELL";
                    condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_CUMUL)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_MORTAR_82mm_CUMUL)))] call FUNC(loadMine));
                };
            };

            class ACE_Round_2_Put {
                displayName = "$STR_TBD_MORTAR_82MM_STORE";
                distance = 2;
                showDisabled=0;
				exceptions[]={};
				priority=5;
                condition = QUOTE([ARR_2(_target,2) ] call FUNC(canReturn));
                selection = "int_tube_2";

                class ACE_Round_2_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_HE_SHELL";
                    condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_HE)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_HE)))] call FUNC(loadMine));
                    showDisabled=0;
					exceptions[]={};
                };

                class ACE_Round_2_Put_SMOKE: ACE_Round_2_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_SMOKE_SHELL";
                    condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_SMOKE)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_SMOKE)))] call FUNC(loadMine));
                };

                class ACE_Round_2_Put_ILLUM: ACE_Round_2_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_ILLUM_SHELL";
                    condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_ILLUM)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_ILLUM)))] call FUNC(loadMine));
                };

                class ACE_Round_2_Put_CUMUL: ACE_Round_2_Put_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_STORE_CUMUL_SHELL";
                    condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_CUMUL)))] call FUNC(canLoadMine));
                    statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_MORTAR_82mm_CUMUL)))] call FUNC(loadMine));
                };
            };

		 };
    };

};
