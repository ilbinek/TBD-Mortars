class CfgVehicles {

class All;
class Thing: All
{};

class ThingX: Thing
{};

class Furniture_base_F: ThingX
{};

class TBD_MORTAR_105MM_SHELL_HE: Furniture_base_F
 {
        scope = 2;
		author = "TBD Team";
        displayName = "105mm HE shell";
        model = QPATHTOF(TBD_MORTAR_105MM_SHELL_HE\TBD_MORTAR_105MM_SHELL_HE);
        editorPreview = QPATHTOF(TBD_MORTAR_105MM_SHELL_HE\data\shell.jpg);
		
    };

};
