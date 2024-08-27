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

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 : NATO_Box_Base {
        scope = 2;
        author = "TBD Team";
        displayName = CSTRING(LASER_charge_1);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1);
        editorPreview = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\data\round.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_DISASSEMBLE {
                    displayName = CSTRING(disassemble);
                    condition = "true";
                    statement = QUOTE([ARR_1(_target)] call FUNC(disassemble));
                    distance = 2;
                };

                class TBD_SetCode {
                    displayName = CSTRING(set_code);
                    condition = "true";
                    statement = QUOTE(GVAR(shell) = _target; createDialog QUOTE(QUOTE(RscTBDCode)));;
                    distance = 2;
                };
            };
        };
    };

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_2 : TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 {
        displayName = CSTRING(LASER_charge_2);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_2);
    };

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_3 : TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 {
        displayName = CSTRING(LASER_charge_3);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_3);
    };

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_4 : TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 {
        displayName = CSTRING(LASER_charge_4);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_4);
    };

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_5 : TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 {
        displayName = CSTRING(LASER_charge_5);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_5);
    };

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_6 : TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 {
        displayName = CSTRING(LASER_charge_6);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_6);
    };

    class TBD_MORTARS_105mm_ROUND_LASER_CHARGE_7 : TBD_MORTARS_105mm_ROUND_LASER_CHARGE_1 {
        displayName = CSTRING(LASER_charge_7);
        model = QPATHTOF(TBD_MORTARS_105mm_ROUND_LASER\TBD_MORTARS_105mm_ROUND_LASER_CHARGE_7);
    };
};
