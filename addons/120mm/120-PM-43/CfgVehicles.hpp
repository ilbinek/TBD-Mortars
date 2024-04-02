class CfgVehicles {
    class All;
    class AllVehicles : All {};
    class Land : AllVehicles {};
    class LandVehicle : Land {};
    class StaticWeapon : LandVehicle {
        class Turrets;
		class MainTurret;
    	class EventHandlers;
		class ACE_Actions;
    };
    class StaticMortar : StaticWeapon {
        class Turrets {
            class MainTurret: MainTurret {
                class ViewOptics;
            };
        };
    };

    class TBD_120mm_PM_43 : StaticMortar {
        artilleryScanner = 0; // turn off artillery computer
        ace_artillerytables_showRangetable = 1; // "fix" rangetables not showing up
        ace_artillerytables_showGunLaying = 1;  // "fix" rangetables not showing up

        scope = 2;
        scopeCurator = 2;
        author = "TBD Team";
        displayName = CSTRING(NAME);
        model = QPATHTOF(TBD_120mm_PM_43\TBD_120mm_PM_43);
        editorPreview = QPATHTOF(TBD_120mm_PM_43\data\preview.paa);
        picture = QPATHTOF(TBD_120mm_PM_43\data\120pm43icon.paa);
        side = 0;
        faction = "OPF_F";
        crew = "O_Soldier_F";

        transportSoldier = 0;
        cargoAction[] = {"Mortar_Gunner"};
        getInAction = "GetInMortar";
        getOutAction = "GetOutLow";
        unitInfoType = "RscUnitInfoMortar";
        editorSubcategory = "EdSubcat_Turrets";
        cost = 200000;
        accuracy = 0.8;
        EPEImpulseDamageCoef = 5;

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerAction = "Mortar_Gunner";
                gunnergetInAction = "GetInLow";
                gunnergetOutAction = "GetOutLow";
                weapons[] = {QUOTE(TBD_120mm_PM_43_WEAPON)};
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 35;
                initElev = 0;
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                cameraDir = "look";
                discreteDistance[] = {};
                //discreteDistanceCameraPoint[] = {"eye"};
                gunnerForceOptics = 0;
                memoryPointCamera = "gunnerview";
                memoryPointGunnerOptics = "gunnerview";
                discreteDistanceCameraPoint[] = {"gunnerview"};
                gunnerOpticsModel = QPATHTOF(TBD_120mm_PM_43\scope.p3d);
                gunnerUsesPilotView = 1;
                disableSoundAttenuation = 1;
                class ViewOptics : ViewOptics {
                    camPos = "gunnerview";
                    camDir = "look";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.174;
                    minFov = 0.0077778;
                    maxFov = 0.14;
                    visionMode[] = {"Normal"};
                };
                minelev = 0;
                maxelev = 35;
                magazines[] = {};
                ejectDeadGunner = 1;
                usepip = 2;
                discreteDistanceInitIndex = 0;
                primaryGunner = 1;
                maxHorizontalRotSpeed = 0.3;
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                proxyType = "CPGunner";
                proxyIndex = 1;
            };
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;

        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;

        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};

        class ACE_Actions {
            class TBD_LoadShell {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = CSTRING(LOAD);
                icon = QPATHTOF(data\load.paa);

                class LoadHECh1 {
                    displayName = CSTRING(HE_CHARGE_1);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };

                class LoadHECh2 {
                    displayName = CSTRING(HE_CHARGE_2);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };

                class LoadHECh3 {
                    displayName = CSTRING(HE_CHARGE_3);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };

                class LoadHECh4 {
                    displayName = CSTRING(HE_CHARGE_4);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };

                class LoadHECh5 {
                    displayName = CSTRING(HE_CHARGE_5);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };

                class LoadHECh6 {
                    displayName = CSTRING(HE_CHARGE_6);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };

                class LoadHECh7 {
                    displayName = CSTRING(HE_CHARGE_7);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)))] call MORTFUNC(loadShell));
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
                icon = QPATHTOF(data\unload.paa);

                class UnloadHECh1 {
                    displayName = CSTRING(HE_CHARGE_1);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_1)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh2 {
                    displayName = CSTRING(HE_CHARGE_2);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_2)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh3 {
                    displayName = CSTRING(HE_CHARGE_3);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_3)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh4 {
                    displayName = CSTRING(HE_CHARGE_4);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_4)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh5 {
                    displayName = CSTRING(HE_CHARGE_5);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_5)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh6 {
                    displayName = CSTRING(HE_CHARGE_6);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_6)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };

                class UnloadHECh7 {
                    displayName = CSTRING(HE_CHARGE_7);
                    icon = QPATHTOF(tbd_mortar_120mm_shell_he\data\icon_120mm_he.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_120mm_SHELL_HE_CHARGE_7)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };
            };
        };
    };
};
