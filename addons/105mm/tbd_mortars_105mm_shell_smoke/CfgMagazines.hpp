class CfgMagazines
{
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTARS_105mm_SHELL_SMOKE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm SMOKE shell";
		displayNameShort = "105mm SMOKE shell";
        model = QPATHTOF(TBD_MORTARS_105mm_SHELL_SMOKE\TBD_MORTARS_105mm_SHELL_SMOKE);
        editorPreview = QPATHTOF(TBD_MORTARS_105mm_SHELL_SMOKE\data\shell.jpg);
		picture = QPATHTOF(TBD_MORTARS_105mm_SHELL_SMOKE\data\shell.paa);
		descriptionShort = "A 105mm SMOKE shell";
        mass = 120;
		count = 1;
		//ammo = QUOTE(TBD_MORTAR_120mm_SHELL_AMMO_HE);
		type = 256;
	};
};