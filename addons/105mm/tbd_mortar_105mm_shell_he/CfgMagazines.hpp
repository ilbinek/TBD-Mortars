class CfgMagazines
{
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTAR_105mm_SHELL_HE: 8Rnd_82mm_Mo_shells

	{
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm HE shell";
		displayNameShort = "105mm HE shell";
        model = QPATHTOF(TBD_MORTAR_105mm_SHELL_HE\TBD_MORTAR_105mm_SHELL_HE);
        editorPreview = QPATHTOF(TBD_MORTAR_105mm_SHELL_HE\data\shell.jpg);
		picture = QPATHTOF(TBD_MORTAR_105mm_SHELL_HE\data\shell.paa);
		descriptionShort = "A 105mm HE shell";
        mass = 60;
		count = 1;
		//ammo = QUOTE(TBD_MORTAR_120mm_SHELL_AMMO_HE);
		type = 256;
	};
};




