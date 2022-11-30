class CfgPatches {
    class Tenthed_functions {
        author = "Akira";
        name = "10th ODST: Functions";
        requiredAddons[] = {
            "OPTRE_Core",
            "Tenthed_core"
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
            file="\Tenthed_Functions\functions";
            class Arsenal {};
            // call [ _this ] call Tenthed_fnc_Arsenal;
        };
    };
};