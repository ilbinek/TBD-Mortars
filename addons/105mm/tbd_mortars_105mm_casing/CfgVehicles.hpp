class CfgVehicles {

class All;
class Thing: All
{};

class ThingX: Thing
{};

class Furniture_base_F: ThingX
{};

class TBD_MORTARS_105mm_CASING: Furniture_base_F
 {
        scope = 2;
		author = "TBD Team";
        displayName = "105mm casing";
        model = QPATHTOF(TBD_MORTARS_105mm_CASING\TBD_MORTARS_105mm_CASING);
        editorPreview = QPATHTOF(TBD_MORTARS_105mm_CASING\data\casing.jpg);
		
    };

};
