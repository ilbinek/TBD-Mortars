class CfgVehicles {

    class NATO_Box_Base;

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 : NATO_Box_Base {
        scope = 2;
        author = "TBD Team";
        displayName = CSTRING(he_charge_1);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\TBD_MORTARS_105mm_ROUND_HE);
        editorPreview = QPATHTOF(TBD_MORTARS_105mm_ROUND_HE\data\round.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
    };

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_2 : TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 {
        displayName = CSTRING(he_charge_2);
    };

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_3 : TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 {
        displayName = CSTRING(he_charge_3);
    };

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_4 : TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 {
        displayName = CSTRING(he_charge_4);
    };

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_5 : TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 {
        displayName = CSTRING(he_charge_5);
    };

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_6 : TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 {
        displayName = CSTRING(he_charge_6);
    };

    class TBD_MORTARS_105mm_ROUND_HE_CHARGE_7 : TBD_MORTARS_105mm_ROUND_HE_CHARGE_1 {
        displayName = CSTRING(he_charge_7);
    };
};
