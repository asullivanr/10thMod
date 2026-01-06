class CfgPatches {
    class Tenthed_functions {
        author = "Akira";
        name = "10th ODST: Functions";
        requiredAddons[] = {
            "OPTRE_Core",
            "Tenthed_core",
            "TCP_Data",
            "TCP_Weapons",
            "TCP_Ui"
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFunctions {
    class Tenthed_functions
    {
    	//Prefix for functions ie Tenthed_fnc_# (_fnc_ is added automatically between tag and file name see below)
    	tag = "Tenthed";
      
        //Category
        class Tenthed_Server_Functions
        {
            file="z\10thMod\addons\functions\functions";
            class Arsenal {};
            // [this, true] call Tenthed_fnc_Arsenal;
        };

        class Tenthed_Server_Functions_Blacklist
        {
            file="z\10thMod\addons\functions\functions";
            class ArsenalBlacklist {};
            // [this, true] call Tenthed_fnc_ArsenalBlacklist;
        };

        class Tenthed_Server_Functions_VehicleSpawner
        {
            file="z\10thMod\addons\functions\functions";
            class VehicleSpawner {};
            // this addAction ["Spawn X", { [_spawnPoint, _categoryIndex, _vehicleIndexToSpawn] call Tenthed_fnc_VehicleSpawner }]; 
        };

        class Tenthed_Server_Functions_VehicleSpawnerGeneric
        {
            file="z\10thMod\addons\functions\functions";
            class VehicleSpawnerGeneric {};
            // this ["_vehicleName", _ClassName, _spawnPoint] call Tenthed_fnc_AddTeleportAction;
        };

        class Tenthed_Server_Functions_Teleport
        {
            file="z\10thMod\addons\functions\functions";
            class AddTeleportAction {};
            // this ["Killhouse A", "Lift_KHA"] call Tenthed_fnc_AddTeleportAction;
        };
    };
};
// Change TFC Main menu to use ace arsenal over the bis arsenal.
class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscShortcutButton;
class RscButtonMenu: RscShortcutButton
{
    class ShortcutPos;
};
class RscTCPButtonMenu: RscButtonMenu {};
class RscDisplayMain: RscStandardDisplay
{
    class controls
    {
        class TCP_ButtonArsenal: RscTCPButtonMenu
        {
            idc = 2500;
            text = "ACE Firing Range";
            onbuttonclick = "playMission ['', '\z\ace\addons\arsenal\missions\Arsenal.VR']";            
            y = "12.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
        };
    };
};