class CfgMagazines {
	class 8Rnd_120mm_HE_shells;
	
	class TBD_MORTARS_152MM_CASING: 8Rnd_120mm_HE_shells {
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "TBD Team";
        displayName = CSTRING(CASING);
		displayNameShort = CSTRING(CASING);
        model = QPATHTOF(TBD_MORTARS_152MM_CASING\TBD_MORTARS_152MM_CASING);
		picture = QPATHTOF(TBD_MORTARS_152MM_CASING\data\casing.paa);
		descriptionShort = CSTRING(CASING);
        mass = 40;
		type = 256;
		count = 1;
	};

	#define CASING(var1) class DOUBLES(TBD_MORTARS_152MM_CASING_CH,var1): TBD_MORTARS_152MM_CASING {\
		scope = 2;\
		scopeArsenal = 2;\
		scopeCurator = 2;\
		displayName = CSTRING(DOUBLES(CASING,var1));\
		displayNameShort = CSTRING(DOUBLES(CASING,var1));\
		descriptionShort = CSTRING(DOUBLES(CASING,var1));\
	};

	CASING(1)
	CASING(2)
	CASING(3)
	CASING(4)
	CASING(5)
	CASING(6)
	CASING(7)
};
