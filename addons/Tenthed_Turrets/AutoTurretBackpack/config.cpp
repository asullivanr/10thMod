class CfgPatches {
	class Tenthed_AutoTurretBackpack {
        author = "Akira";
        name = "10th ODST: Auto Turret";
        requiredAddons[] = {
            "OPTRE_Core",
			"Tenthed_core",
			"Tenthed_turrets",
			"A3_Data_F",
			"A3Data",
			"A3_Weapons_F",
			"A3_Weapons_F_Mark",
			"cba_common",
			"cba_arrays",
			"cba_accessory",
			"cba_main",
			"cba_main_a3",
			"cba_modules"
        };
		units[] = {};
		weapons[] = {};
	};
};

class assembleInfo;
class Turrets;
class MainTurret;
class RCWSOptics;

class CfgVehicles {
	
	class B_HMG_01_F;
	class Weapon_Bag_Base;
	class Tenthed_Turret_Bag : Weapon_Bag_Base {
		model = "\A3\Weapons_F\Ammoboxes\Bags\Backpack_Fast.p3d";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_fast_mcamo_co.paa"};
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Kitbag_mcamo.paa";
		faction = BLU_F;
		mass = 240;
		_generalMacro = "Tenthed_Turret_Bag";
		displayName = "[10th] The Bag";
		scope = 1;
		scopeArsenal = 1;
		class assembleInfo : assembleInfo {
			displayName = "Mk30 HMG .50 (Raised)";
			assembleTo = "Tenthed_HMG_02_F_Auto";
			base[] = {""};
		};
	};

	class Tenthed_HMG_02_F_Auto : B_HMG_01_F {
		displayName = "[10th] M2A HMG .50 Auto";
		
		sensitivity = 8;
		scopeCurator = 2;
		scope = 2;
		faction = BLU_F; // IND_F | BLU_F
		isUav = 1;
		crew = "B_UAV_AI"; // I_UAV_AI | B_UAV_AI
		typicalCargo[] = {};
		
		class AssembleInfo : assembleInfo {
			displayName = "[10th] M2A HMG .50 Auto";
			assembleTo = "";
			primary = 0;
			base[] = {""};
			dissasembleTo[] = {"Tenthed_HMG_02_F_Bag_Auto"};
		};
	};
	
	class Tenthed_HMG_02_F_Bag_Auto : Tenthed_Turret_Bag {
		_generalMacro = "Tenthed_HMG_02_F_Bag_Auto";
		displayName = "[10th] M2A HMG .50 Auto";
		side = 2;
		scope = 2;
		scopeArsenal = 2;
		class assembleInfo : assembleInfo {
			primary = 1;
			displayName = "[10th] M2A HMG .50 Auto";
			assembleTo = "Tenthed_HMG_02_F_Auto";
			base[] = {""};
		};
	};
	
	
};
