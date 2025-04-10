class CfgMagazines
{
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};
	class TBD_MORTARS_105mm_TUBE: 8Rnd_82mm_Mo_shells

	{
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
        displayName = "105mm HE tube";
		displayNameShort = "105mm HE tube";
        model = QPATHTOF(TBD_MORTARS_105mm_TUBE\TBD_MORTARS_105mm_TUBE);
        editorPreview = QPATHTOF(TBD_MORTARS_105mm_TUBE\data\tube.jpg);
		picture = QPATHTOF(TBD_MORTARS_105mm_TUBE\data\tube.paa);
		descriptionShort = "A tube containing a single 105mm He shell and a single casing";
        mass = 200;
		count = 1;
		//ammo = QUOTE(TBD_MORTAR_120mm_SHELL_AMMO_HE);
		type = 256;
	};
};
