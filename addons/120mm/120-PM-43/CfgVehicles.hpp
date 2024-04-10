class CfgVehicles {
    class LandVehicle;
    class StaticWeapon : LandVehicle {
        class Turrets;
    };
    class StaticMortar : StaticWeapon {
        class Turrets {
            class MainTurret;
        };
        class ACE_Actions;
    };

    class TBD_120mm_PM_43 : StaticMortar {
        artilleryScanner = 0; // turn off artillery computer
        ace_artillerytables_showRangetable = 1; // "fix" rangetables not showing up
        ace_artillerytables_showGunLaying = 1;  // "fix" rangetables not showing up

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                magazines[] = {};
            };
        };

        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};

        class ACE_Actions: ACE_Actions {
            class TBD_LoadShell {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = CSTRING(LOAD);
                icon = QPATHTOEF(main,data\load.paa);

                class LoadHECh1 {
                    displayName = CSTRING(HE_CHARGE_1);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

                class LoadHECh2 {
                    displayName = CSTRING(HE_CHARGE_2);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

                class LoadHECh3 {
                    displayName = CSTRING(HE_CHARGE_3);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

                class LoadHECh4 {
                    displayName = CSTRING(HE_CHARGE_4);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

                class LoadHECh5 {
                    displayName = CSTRING(HE_CHARGE_5);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

                class LoadHECh6 {
                    displayName = CSTRING(HE_CHARGE_6);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

                class LoadHECh7 {
                    displayName = CSTRING(HE_CHARGE_7);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };
            };

            class TBD_UnLoadShell {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = CSTRING(UNLOAD);
                icon = QPATHTOEF(main,data\unload.paa);

                class UnloadHECh1 {
                    displayName = CSTRING(HE_CHARGE_1);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh2 {
                    displayName = CSTRING(HE_CHARGE_2);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh3 {
                    displayName = CSTRING(HE_CHARGE_3);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh4 {
                    displayName = CSTRING(HE_CHARGE_4);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh5 {
                    displayName = CSTRING(HE_CHARGE_5);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh6 {
                    displayName = CSTRING(HE_CHARGE_6);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh7 {
                    displayName = CSTRING(HE_CHARGE_7);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };
            };
        };
    };
};
