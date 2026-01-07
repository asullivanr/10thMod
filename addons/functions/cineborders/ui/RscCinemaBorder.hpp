class RscText;

class RscCinemaBorder
{
    idd = -1;
    duration = 1e+011;
    fadein = 0;
    fadeout = 0;
    movingEnable = 0;
    onLoad = "uiNamespace setVariable ['RscCinemaBorder', _this select 0];";
    onUnload = "uiNamespace setVariable ['RscCinemaBorder', displayNull];";

    class controls
    {
        class BorderTop: RscText
        {
            idc = 100001;
            x = "safeZoneX";
            y = "safeZoneY";
            w = "safeZoneW";
            h = "0.1 * safeZoneH";
            colorBackground[] = {0,0,0,1};
        };
        class BorderBottom: RscText
        {
            idc = 100002;
            x = "safeZoneX";
            y = "safeZoneY + safeZoneH - (0.1 * safeZoneH)";
            w = "safeZoneW";
            h = "0.1 * safeZoneH";
            colorBackground[] = {0,0,0,1};
        };
    };
};
