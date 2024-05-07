class CfgVehicles {
    class NATO_Box_Base;

    class TBD_MORTARS_100MM_ROUND_AP : NATO_Box_Base {
        scope = 2;
        author = "TBD Team";
        displayName = CSTRING(ROUND_AP);
        model = QPATHTOF(TBD_MORTARS_100MM_ROUND_AP\TBD_MORTARS_100MM_ROUND_AP);
        editorPreview = QPATHTOF(TBD_MORTARS_100MM_ROUND_AP\data\round.jpg);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;
    };
};
