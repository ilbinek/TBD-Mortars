class CfgVehicles {
    class StaticWeapon;
    class StaticMortar: StaticWeapon {
        class ACE_Actions;
    };

    class RHS_M252_Base: StaticMortar {
        artilleryScanner = 0; // turn off artillery computer
        ace_artillerytables_showRangetable = 1; // "fix" rangetables not showing up
        ace_artillerytables_showGunLaying = 1;  // "fix" rangetables not showing up

        class ACE_Actions: ACE_Actions {
            class ACE_LoadRound {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = "$STR_TBD_MORTAR_81MM_LOAD";
                icon = QPATHTOEF(main,data\load.paa);

                class ACE_LoadRound_HE {
                    displayName = "$STR_TBD_MORTAR_81MM_HE_SHELL";
                    icon = QPATHTOF(TBD_MORTAR_81mm_HE\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_HE)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_HE)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

				class ACE_LoadRound_SMOKE {
                    displayName = "$STR_TBD_MORTAR_81MM_SMOKE_SHELL";
                    icon = QPATHTOF(TBD_MORTAR_81mm_SMOKE\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_SMOKE)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_SMOKE)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };

				class ACE_LoadRound_ILLUM {
                    displayName = "$STR_TBD_MORTAR_81MM_ILLUM_SHELL";
                    icon = QPATHTOF(TBD_MORTAR_81mm_ILLUM\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_ILLUM)))] call EFUNC(main,checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_ILLUM)))] call EFUNC(main,loadShell));
                    showDisabled = 0;
                };
            };

            class ACE_UnloadRound {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = "$STR_TBD_MORTAR_81MM_UNLOAD";
                icon = QPATHTOEF(main,data\unload.paa);

                class ACE_UnloadRound_HE {
                    displayName = "$STR_TBD_MORTAR_81MM_HE_SHELL";
                    icon = QPATHTOF(TBD_MORTAR_81mm_HE\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_HE)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_HE)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

				class ACE_UnloadRound_SMOKE {
                    displayName = "$STR_TBD_MORTAR_81MM_SMOKE_SHELL";
                    icon = QPATHTOF(TBD_MORTAR_81mm_SMOKE\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_SMOKE)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_SMOKE)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };

				class ACE_UnloadRound_ILLUM {
                    displayName = "$STR_TBD_MORTAR_81MM_ILLUM_SHELL";
                    icon = QPATHTOF(TBD_MORTAR_81mm_ILLUM\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_ILLUM)))] call EFUNC(main,checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_MORTAR_81mm_ILLUM)),_player)] call EFUNC(main,unloadShell));
                    showDisabled = 0;
                };
            };
        };

        class Attributes {
            class rhs_ammoslot_1 {
                defaultValue = "0";
            };
        };
    };
};
