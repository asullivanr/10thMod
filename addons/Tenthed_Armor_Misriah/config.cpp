class CfgPatches {
	class Tenthed_Armor_Misriah_Base {
		author = "Akira";
		name = "10th Armor Base - Misriah";
		requiredAddons[] = {};
		weapons[] = {};
		units[] = {
			"Tenthed_M56S_BDU",
			"Tenthed_M56S_BDU_Green",
			"Tenthed_M56S_BDU_Desert",
			"Tenthed_M56S_BDU_WhiteSilver",
			"Tenthed_M56S_BDU_Grey"
		};
	};
};

class cfgWeapons {
	class HeadgearItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class NVGoggles;
	class HitPoints;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};
	
	class Tenthed_Helmet_Base: ItemCore {
		scope=1;
		scopeArsenal=1;
		author="Misriah Armory";
		ace_hearing_protection=1;
		displayName="[10th] Base Helmet";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem {
			uniformModel="";
			mass=40;
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]= {
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face {
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck {
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};

	class Tenthed_Vest_Base: V_PlateCarrier1_rgr {
		scope=1;
		scopeArsenal=1;
		author="Misriah Armory";
		displayName="[MA] Base Vest";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem {
			vestType="Rebreather";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[]= {
				"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
			uniformModel="";
			containerClass="Supply200";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};

	//class MA_M56SR_Helmet;
	class Tenthed_M56SR_Helmet_Base : Tenthed_Test_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};

	// Rifleman - no radio
	class Tenthed_M56R_Vest_Rifleman : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Rifleman)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Rifleman - Radio right
	class Tenthed_M56R_Vest_Rifleman_radio_right : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Rifleman - Radio Shoulder right)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};

	// Specialist
	class Tenthed_M56R_Vest_Specialist : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Specialist)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				//"H3_Pauldron_Left",
				//"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	// Specialist - Radio right
	class Tenthed_M56R_Vest_Specialist_radio_right : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Specialist - Radio)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				//"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				//"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	// Demolitions
	class Tenthed_M56R_Vest_Demo : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Demolitions)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				//"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
			};
		};
	};
	// Light
	class Tenthed_M56R_Vest_Light: Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Light)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	// Sniper
	class Tenthed_M56R_Vest_Sniper : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Sniper)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};

	// Uniforms
	class Tenthed_M56S_BDU: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S BDU";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="Tenthed_M56S_BDU_Base";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_Green: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S BDU - Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="Tenthed_M56S_BDU_Base_Green";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_Desert: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S BDU - Desert";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="Tenthed_M56S_BDU_Base_Desert";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_WhiteSilver: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S BDU - Silver";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="Tenthed_M56S_BDU_Base_WhiteSilver";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class Tenthed_M56S_BDU_Grey: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[10th] M56S BDU - Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="Tenthed_M56S_BDU_Base_Grey";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};
};
class CfgVehicleCLasses {
	class Tenthed_Soldier_Class {
		dlc="Tenthed";
		displayName="Soldier";
		author="10th ODST - Akira";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};
class CfgVehicles {
	class SoldierWB;
	class Tenthed_Soldier_Base: SoldierWB {
		class EventHandlers;
		class HitPoints {
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};

	class Tenthed_Uniform_Base: Tenthed_Soldier_Base {
		scope=0;
		scopeCurator=0;
		side=1;
		author="Misriah Armoury";
		UniformClass="";
		vehicleClass="";
		model="";
		weapons[]= {
			"Throw",
			"Put"
		};
		respawnWeapons[]= {
			"Throw",
			"Put"
		};
		Items[]= {
			"OPTRE_Biofoam"
		};
		RespawnItems[]= {
			"OPTRE_Biofoam"
		};
		magazines[]={};
		respawnMagazines[]={};
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]={};
		class HitPoints {
			class HitFace {
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.80000001;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace {
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.80000001;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck {
				armor=1;
				material=-1;
				name="head";
				passThrough=0.80000001;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead {
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=0.80000001;
				radius=0.23999999;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAbdomen: HitPelvis {
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.80000001;
				radius=0.16;
				explosionShielding=1;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen {
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm {
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.80000001;
				radius=0.18000001;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest {
				armor=1;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=2.4000001;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody {
				armor=5;
				material=-1;
				name="arms";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms {
				armor=5;
				material=-1;
				name="hands";
				passThrough=1;
				radius=0.1;
				explosionShielding=0.30000001;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands {
				armor=5;
				material=-1;
				name="legs";
				passThrough=1;
				radius=0.14;
				explosionShielding=0.30000001;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs {
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm {
				armor=2;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm {
				name="hand_r";
			};
			class HitLeftLeg {
				armor=2;
				material=-1;
				name="leg_l";
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg {
				name="leg_r";
			};
			class ACE_HDBracket {
				armor=1;
				material=-1;
				name="head";
				passThrough=0;
				radius=1;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="HitHead";
			};
		};
	};
	class Tenthed_M56S_BDU_Base: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_Green: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"Armor-Misriah\data\uniforms\H3_Undersuit_green_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_Desert: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"Armor-Misriah\data\uniforms\H3_Undersuit_desert_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_WhiteSilver: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"Armor-Misriah\data\uniforms\H3_Undersuit_whitesilver_co.paa"
		};
	};
	class Tenthed_M56S_BDU_Base_Grey: Tenthed_Uniform_Base {
		scope=1;
		UniformClass="Tenthed_M56S_BDU";
		vehicleClass="Tenthed_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"Armor-Misriah\data\uniforms\H3_Undersuit_grey_co.paa"
		};
	};
};