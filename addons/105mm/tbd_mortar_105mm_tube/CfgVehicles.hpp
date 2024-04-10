class CfgVehicles {

class All;
class Thing: All
{};

class ThingX: Thing
{};

class Furniture_base_F: ThingX
{};

class TBD_MORTAR_105MM_TUBE: Furniture_base_F
 {
        scope = 2;
		author = "TBD Team";
        displayName = "105mm HE tube";
        model = QPATHTOF(TBD_MORTAR_105MM_TUBE\TBD_MORTAR_105MM_TUBE);
        editorPreview = QPATHTOF(TBD_MORTAR_105MM_TUBE\data\tube.jpg);
		
    };

};
