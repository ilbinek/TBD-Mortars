class cfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTAR_82mm_BOX_HE : NATO_Box_Base {
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

		class Animations {
            class AnimationSources {
                class top_source {
                    source = "user";  
                    initPhase = 0;
                    animPeriod = 3;
                };
            };
        };

		 class ACE_Actions {
            ///////////////////// Roof /////////////////////
            class openBox {
                displayName = "$STR_TBD_MORTAR_82MM_OPEN";
                condition = QUOTE( [ARR_1(_target)] call FUNC(canOpen));
                exceptions[] = {};
                statement = QUOTE( [ARR_1(_target)] call FUNC(openLid));
                distance = 2;
                selection = "int_box_open";
            };

            class closeBox {
                displayName = "$STR_TBD_MORTAR_82MM_CLOSE";
                condition = QUOTE( [ARR_1(_target)] call FUNC(canClose));
                exceptions[] = {};
                statement = QUOTE( [ARR_1(_target)] call FUNC(closeLid));
                distance = 2;
                selection = "int_box_close";
            };
		 };
    };

	class TBD_MORTAR_82mm_BOX_SMOKE : TBD_MORTAR_82mm_BOX_HE {
        displayName = "$STR_TBD_MORTAR_82MM_BOX_SMOKE";
    };

    class TBD_MORTAR_82mm_BOX_ILLUM : TBD_MORTAR_82mm_BOX_HE {
        displayName = "$STR_TBD_MORTAR_82MM_BOX_ILLUM";
    };
};
