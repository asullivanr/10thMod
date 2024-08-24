class CfgPatches {
    class Tenthed_MSF_FactionConfig {
        author = "Akira";
        name = "10th ODST: Military Without Borders Config";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
            "Tenthed_Units_MSF_Base"
        };
        weapons[] = {};
        units[] = {
            "O_Astra_Spartan_01",
        };
    };
};

class CfgFactionClasses {
    class Tenthed_MSF_Faction {
        displayName = "[10th] Military Without Borders";
        side = 0;
        flag = "\Tenthed_Core\data\logo.paa";
        icon = "\Tenthed_Core\data\logo.paa";
        priority = 0;
    };
};