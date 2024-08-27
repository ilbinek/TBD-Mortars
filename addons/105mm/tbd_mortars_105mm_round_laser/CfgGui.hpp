#define IDD_TBD_CODE     69421
#define IDC_TBD_CODE_TEXT 69422

class RscText;
class RscEdit;
class RscButton;

class RscTBDCode {
    idd = IDD_TBD_CODE;
    onLoad = QUOTE([ARR_2('init',_this)] call FUNC(codeHandler));
    onUnload = QUOTE([ARR_2('close',_this)] call FUNC(codeHandler));

    class ControlsBackground {
        class Background: RscText {
            x = QUOTE(safeZoneX + safeZoneW * 0.45);
            y = QUOTE(safeZoneY + safeZoneH * 0.45);
            w = QUOTE(safeZoneW * 0.1);
			h = QUOTE(safeZoneH * 0.1);
			colorBackground[] = {0,0,0,1};
        };
    };

    class Controls {
        class Timer: RscEdit {
            idc = IDC_TBD_CODE_TEXT;
            x = QUOTE(safeZoneX + safeZoneW * 0.45);
            y = QUOTE(safeZoneY + safeZoneH * 0.45);
            w = QUOTE(safeZoneW * 0.1);
            h = QUOTE(safeZoneH * 0.05);
            colorBackground[] = {0, 0, 0, 1};
            colorBorder[] = {0.543,0.5742,0.4102,1.0};
            text = "";
            tooltip = CSTRING(LASER_CODE);
        };
    
        class Save: RscButton {
            x = QUOTE(safeZoneX + safeZoneW * 0.45);
            y = QUOTE(safeZoneY + safeZoneH * 0.5);
            w = QUOTE(safeZoneW * 0.1);
            h = QUOTE(safeZoneH * 0.05);
            colorBackground[] = {0, 0, 0, 1};
            colorBorder[] = {0.543,0.5742,0.4102,1.0};
            text = "Save";
            action = QUOTE([ARR_2('save',_this)] call FUNC(codeHandler));
        };
    };
};
