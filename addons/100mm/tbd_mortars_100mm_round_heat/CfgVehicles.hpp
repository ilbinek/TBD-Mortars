class CfgVehicles {
    class ThingX;
    class ReammoBox_F: ThingX {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class NATO_Box_Base: ReammoBox_F {
        class ACE_Actions: ACE_Actions {
            /* class ACE_MainActions {}; this is inherited */
        };
    };

    class TBD_MORTARS_100mm_ROUND_HEAT : NATO_Box_Base {
        scope = 2;
        author = "TBD Team";
        displayName = CSTRING(ROUND_HEAT);
        model = QPATHTOF(TBD_MORTARS_100mm_ROUND_HEAT\TBD_MORTARS_100mm_ROUND_HEAT);
        editorPreview = QPATHTOF(TBD_MORTARS_100mm_ROUND_HEAT\data\round.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
    };

};
