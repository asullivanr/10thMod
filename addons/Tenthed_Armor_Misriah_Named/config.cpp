class CfgPatches {
	class Tenthed_Armor_Misriah_Named {
		author = "Akira";
		name = "10th Armor - Misriah Named";
		requiredAddons[] = {
			"MA_Armor",
			"Tenthed_Armor_Misriah_Base"
		};
		weapons[] = {};
		units[] = {};
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
	class ItemInfo;

	class Tenthed_M56SR_Helmet;
	class Tenthed_M56A_Helmet;
	class Tenthed_M56G_Helmet;
	class Tenthed_M56E_Helmet;

	class Tenthed_Vest_Base;

	// Akira
	class Tenthed_M56A_Helmet_Akira : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Akira)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"Tenthed_Armor_Misriah_Named\data\Akira\HR_ODST_Helmet_Akira_CO.paa",
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Akira : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Akira)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones posted will be changed
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Akira\H3_Upper_Armor_Akira_co.paa", // Upper armor texture
			"Tenthed_Armor_Misriah_Named\data\Akira\H3_Lower_Armor_Akira_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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

	// Tiny
	class Tenthed_M56A_Helmet_Tiny : Tenthed_M56A_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56A Helmet (Tiny)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Tiny\AA_Helmet_Tiny_co.paa",
			//"MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Red_co.paa" // Red Visor
			"MA_Armor\data\Helmets\AA\AA_Visor_White_co.paa"// White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		};
	};
	class Tenthed_M56R_Vest_Tiny : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Tiny)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones posted will be changed
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Tiny\Reach_Armor_Upper_Tiny_co.paa", // Upper armor texture
			"Tenthed_Armor_Misriah_Named\data\Tiny\Reach_Armor_Lower_Tiny_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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

	// Lion
	class Tenthed_M56R_Vest_Lion : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Lion)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones posted will be changed
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Lion\Reach_Armor_Upper_Lion_co.paa", // Upper armor texture
			"Tenthed_Armor_Misriah_Named\data\Lion\Reach_Armor_Lower_Lion_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", // Sniper Shoulders
			"Tenthed_Armor_Misriah_Named\data\Lion\CQB_Lion_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				//"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
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
	class Tenthed_M56SR_Helmet_Lion : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Lion)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Lion\HR_ODST_Helmet_Lion_co.paa",
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56E_Helmet_Lion : Tenthed_M56E_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56E Helmet (Lion)";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Lion\EOD_Helmet_Lion_co.paa",
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" // Blue Visor
			"MA_Armor\data\Helmets\EOD\EOD_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_White_co.paa"// White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		};
	};

	// Nova
	class Tenthed_M56R_Vest_Nova : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Nova)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones posted will be changed
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Nova\Reach_Armor_Upper_Nova_co.paa", // Upper armor texture
			"Tenthed_Armor_Misriah_Named\data\Nova\Reach_Armor_Lower_Nova_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", // Sniper Shoulders
			"Tenthed_Armor_Misriah_Named\data\Nova\CQB_Nova_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				//"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				//"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	class Tenthed_M56SR_Helmet_Nova : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Nova)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Nova\HR_ODST_Helmet_Nova_co.paa",
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};

	// Villainess
	class Tenthed_M56R_Vest_Villainess : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Villainess)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones posted will be changed
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Villainess\Reach_Armor_Upper_Villainess_co.paa", // Upper armor texture
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
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
	class Tenthed_M56G_Helmet_Villainess : Tenthed_M56G_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56G Helmet (Villainess)";
		model="MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		picture="MA_Armor\data\Icons\Gungnir_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Villainess\Gungnir_Helmet_Villainess_co.paa",
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa" // Blue Visor
			"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_White_co.paa"// White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		};
	};
	
	// Void
	class Tenthed_M56SR_Helmet_Void : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Void)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Void\HR_ODST_Helmet_Void_co.paa", // change this texture file to test different helmet textures.
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Void : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Void)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones with comments will be altered.
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", // Thigh pouch texture
			"Tenthed_Armor_Misriah_Named\data\Void\Reach_Armor_Upper_Void_co.paa", // Upper armor texture and base ODST shoulders.
			"Tenthed_Armor_Misriah_Named\data\Void\Reach_Armor_Lower_Void_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", // Canisters texture
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Void\Sniper_Void_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				"H3_Forearm_Left", // not used
				"H3_Forearm_Right", // not used
				//"Reach_Forearm_Left",  // if the forearms are enabled they must have the vents
				//"Reach_Forearm_Right", // if the forearms are enabled they must have the vents
				"H3_Pauldron_Left", // not used
				"H3_Pauldron_Right", // not used
				//"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", // not used
				"H3_Armor_Lower", // not used
				//"Forearm_Vent_Left",  // if the forearms are enabled they must have the vents
				//"Forearm_Vent_Right", // if the forearms are enabled they must have the vents
				"Canisters" // the canisters around the waist
			};
		};
	};

	// Mac
	class Tenthed_M56SR_Helmet_Mac : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Mac)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Mac\HR_ODST_Helmet_Mac_co.paa", // change this texture file to test different helmet textures.
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Mac : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Mac)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones with comments will be altered.
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", // Thigh pouch texture
			"Tenthed_Armor_Misriah_Named\data\Mac\Reach_Armor_Upper_Mac_co.paa", // Upper armor texture and base ODST shoulders.
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", // Canisters texture
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Mac\Sniper_Mac_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				"H3_Forearm_Left", // not used
				"H3_Forearm_Right", // not used
				//"Reach_Forearm_Left",  // if the forearms are enabled they must have the vents
				//"Reach_Forearm_Right", // if the forearms are enabled they must have the vents
				"H3_Pauldron_Left", // not used
				"H3_Pauldron_Right", // not used
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", // not used
				"H3_Armor_Lower", // not used
				//"Forearm_Vent_Left",  // if the forearms are enabled they must have the vents
				//"Forearm_Vent_Right", // if the forearms are enabled they must have the vents
				"Canisters" // the canisters around the waist
			};
		};
	};
	
	// Bbstine
	class Tenthed_M56SR_Helmet_Bbstine : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Bbstine)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Bbstine\HR_ODST_Helmet_Bbstine_co.paa", // change this texture file to test different helmet textures.
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Bbstine : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Bbstine)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones with comments will be altered.
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", // Thigh pouch texture
			"Tenthed_Armor_Misriah_Named\data\Bbstine\Reach_Armor_Upper_Bbstine_co.paa", // Upper armor texture and base ODST shoulders.
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", // Canisters texture
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Bbstine\Sniper_Jogn_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				"H3_Forearm_Left", // not used
				"H3_Forearm_Right", // not used
				//"Reach_Forearm_Left",  // if the forearms are enabled they must have the vents
				//"Reach_Forearm_Right", // if the forearms are enabled they must have the vents
				"H3_Pauldron_Left", // not used
				"H3_Pauldron_Right", // not used
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", // not used
				"H3_Armor_Lower", // not used
				//"Forearm_Vent_Left",  // if the forearms are enabled they must have the vents
				//"Forearm_Vent_Right", // if the forearms are enabled they must have the vents
				"Canisters" // the canisters around the waist
			};
		};
	};

	// Flipper
	class Tenthed_M56SR_Helmet_Flipper : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Flipper)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Flipper\HR_ODST_Helmet_Flipper_co.paa", // change this texture file to test different helmet textures.
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Flipper : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Flipper)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones with comments will be altered.
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", // Thigh pouch texture
			"Tenthed_Armor_Misriah_Named\data\Flipper\Reach_Armor_Upper_Flipper_co.paa", // Upper armor texture and base ODST shoulders.
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", // Canisters texture
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Flipper\Sniper_Jogn_co.paa", // Sniper Shoulders
			"Tenthed_Armor_Misriah_Named\data\Flipper\CQB_Flipper_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				"H3_Forearm_Left", // not used
				"H3_Forearm_Right", // not used
				//"Reach_Forearm_Left",  // if the forearms are enabled they must have the vents
				//"Reach_Forearm_Right", // if the forearms are enabled they must have the vents
				"H3_Pauldron_Left", // not used
				"H3_Pauldron_Right", // not used
				"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", // not used
				"H3_Armor_Lower", // not used
				//"Forearm_Vent_Left",  // if the forearms are enabled they must have the vents
				//"Forearm_Vent_Right", // if the forearms are enabled they must have the vents
				"Canisters" // the canisters around the waist
			};
		};
	};

	// Rambler
	class Tenthed_M56SR_Helmet_Rambler : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Rambler)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Rambler\HR_ODST_Helmet_Rambler_co.paa", // change this texture file to test different helmet textures.
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Rambler : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Rambler)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones with comments will be altered.
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", // Thigh pouch texture
			"Tenthed_Armor_Misriah_Named\data\Rambler\Reach_Armor_Upper_Rambler_co.paa", // Upper armor texture and base ODST shoulders.
			"Tenthed_Armor_Misriah_Named\data\Rambler\Reach_Armor_Lower_Rambler_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", // Canisters texture
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Rambler\Sniper_Rambler_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				"H3_Forearm_Left", // not used
				"H3_Forearm_Right", // not used
				//"Reach_Forearm_Left",  // if the forearms are enabled they must have the vents
				//"Reach_Forearm_Right", // if the forearms are enabled they must have the vents
				"H3_Pauldron_Left", // not used
				"H3_Pauldron_Right", // not used
				"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				//"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", // not used
				"H3_Armor_Lower", // not used
				//"Forearm_Vent_Left",  // if the forearms are enabled they must have the vents
				//"Forearm_Vent_Right", // if the forearms are enabled they must have the vents
				"Canisters" // the canisters around the waist
			};
		};
	};

	// Slim
	class Tenthed_M56SR_Helmet_Slim : Tenthed_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56S-R Helmet (Slim)";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= { // un comment out which visor color you would like to test. make sure to comment out the old color or else there will be errors. Blue visor enabled by default.
			"Tenthed_Armor_Misriah_Named\data\Slim\HR_ODST_Helmet_Slim_co.paa", // change this texture file to test different helmet textures.
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa" // Blue Visor
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};
	class Tenthed_M56R_Vest_Slim : Tenthed_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[10th] M56R Combat Armor (Slim)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= { // Change folder to Armor-Misriah\data and put files into that folder. example "Armor-Misriah\data\akira_helmet.paa"
			// No other texture files then the ones with comments will be altered.
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", // Thigh pouch texture
			"Tenthed_Armor_Misriah_Named\data\Slim\Reach_Armor_Upper_Slim_co.paa", // Upper armor texture and base ODST shoulders.
			"Tenthed_Armor_Misriah_Named\data\Slim\Reach_Armor_Lower_Slim_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", // Canisters texture
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Named\data\Slim\Sniper_Slim_co.paa", // Sniper Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", // CQB Shoulders
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= { // put a // in front of section to show the item. by default the right sniper pauldron is shown and the CQB left pauldron is shown.
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
				"H3_Forearm_Left", // not used
				"H3_Forearm_Right", // not used
				//"Reach_Forearm_Left",  // if the forearms are enabled they must have the vents
				//"Reach_Forearm_Right", // if the forearms are enabled they must have the vents
				"H3_Pauldron_Left", // not used
				"H3_Pauldron_Right", // not used
				"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				//"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", // not used
				"H3_Armor_Lower", // not used
				//"Forearm_Vent_Left",  // if the forearms are enabled they must have the vents
				//"Forearm_Vent_Right", // if the forearms are enabled they must have the vents
				"Canisters" // the canisters around the waist
			};
		};
	};
};