class CfgPatches {
    class Tenthed_DropPods {
        author = "Akira";
        name = "10th ODST: DropPods";
        requiredAddons[] = {
            "OPTRE_Core",
            "Tenthed_core"
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgVehicles
{
	class House;
	class House_F: House {
	};
    class ELITE_POD_OPEN: House_F {
		scope=2;
		scopeCurator=2;
		model="\OPTRE_misc\crates\Supply_pod.p3d";
		displayName="Light Insertion Pod (open)";
		editorCategory="PHAN_ScifiSupportPlus_addon";
		mapSize=20.27;
		destrType="DestructNo";
		accuracy=0.2;
		animated=0;
		armor=20000;
		cost=0;
	};
};
class Extended_PreInit_EventHandlers {
	class PHAN_ScifiSupportPlus_PreInit {
		init="call compile preprocessFileLineNumbers 'PHAN_ScifiSupportPlus\Bootstrap\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers {
	class PHAN_ScifiSupportPlus_PostInit {
		init="call compile preprocessFileLineNumbers 'PHAN_ScifiSupportPlus\Bootstrap\XEH_postInit.sqf'";
	};
};
