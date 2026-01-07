class CfgPatches
{
    class tenthed_cineborders
    {
        name = "cineborders";
        author = "akira";
        requiredVersion = 2.10;
        requiredAddons[] = { "A3_Modules_F", "A3_Modules_F_Curator", "A3_Ui_F" };
        units[] = { "tenthed_ModuleCineBorder" };
        weapons[] = {};
    };
};

class CfgFunctions
{
    class tenthed
    {
        class cineborders
        {
            file = "z\10thMod\addons\functions\cineborders\functions";
            class showBorder {};
            class moduleBorder {};
        };
    };
};

class RscTitles
{
    #include "ui\RscCinemaBorder.hpp"
};

// Forward declarations for attribute control types
class AttributesBase;
class Edit;
class Checkbox;
class ModuleDescription;

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase;
        class ModuleDescription;
    };

    class tenthed_ModuleCineBorder: Module_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Cinema Border + Text";
        category = "Effects";
        function = "tenthed_fnc_moduleBorder";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;

        curatorInfoType = "RscDisplayAttributeModule";
        icon = "\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\listen_ca.paa";

        class Attributes: AttributesBase
        {
            class Text: Edit
            {
                property = "tenthed_cineborders_text";
                displayName = "Text";
                tooltip = "Text shown via BIS_fnc_dynamicText.";
                typeName = "STRING";
                defaultValue = """Toll Road, Please Slow Down""";
            };

            class Duration: Edit
            {
                property = "tenthed_cineborders_duration";
                displayName = "Duration (seconds)";
                tooltip = "How long the border stays visible before sliding out.";
                typeName = "NUMBER";
                defaultValue = "15";
            };

            class Transition: Edit
            {
                property = "tenthed_cineborders_transition";
                displayName = "Transition time (seconds)";
                tooltip = "Slide-in/out time for the cinema border.";
                typeName = "NUMBER";
                defaultValue = "1.5";
            };

            class HideHUD: Checkbox
            {
                property = "tenthed_cineborders_hidehud";
                displayName = "Hide HUD while active";
                tooltip = "Hides HUD during the effect.";
                typeName = "BOOL";
                defaultValue = "true";
            };

            class Music: Edit
            {
                property = "tenthed_cineborders_music";
                displayName = "Music class (optional)";
                tooltip = "CfgMusic class name to play (uses playMusic). Leave blank for none.";
                typeName = "STRING";
                defaultValue = """""";
            };

            class ExitSound: Edit
            {
                property = "tenthed_cineborders_exitsound";
                displayName = "Exit sound (optional)";
                tooltip = "CfgSounds class name to play when border is removed. Leave blank for none.";
                typeName = "STRING";
                defaultValue = """border_out""";
            };

            class Confirm: Checkbox
            {
                property = "tenthed_cineborders_confirm";
                displayName = "Execute";
                tooltip = "Must be checked and confirmed with OK to run.";
                typeName = "BOOL";
                defaultValue = "false";
            };

            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription
        {
            description = "Shows cinema borders and dynamic text on all clients. Optional music and exit sound.";
            sync[] = {};
            class AnyPlayer {};
        };
    };
};
