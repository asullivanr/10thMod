class CfgPatches {
    class Tenthed_Overwrite_Armor {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Core";
        requiredAddons[] = {
            "OPTRE_Core",
			"Silvers_Customs"
        };
        weapons[] = {};
        units[] = {};
    };
};

class cfgWeapons {
	class HeadgearItem;
	class SCT_10th_Pilot_Vest;
	class SCT_10th_CH252D_Base;
	class SCT_10th_CH252D_Base_dp;

	// Optional
	class SCT_10th_Optional_Armor : SCT_10th_Pilot_Vest {
		dlc = "OPTRE";
		scope = 2;
		author = "Jogn";
		displayName = "[10th] M52B 'Optional'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] =
		{

			"Tenthed_Overwrite_Armor\data\Optional\optionalarmor.paa",
		};
	};
	class SCT_10th_Optional_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Jogn";
		displayName = "[10th] Pilot 'Optional'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Optional\optionalhelmet.paa",
			"10th_AC\data\helmets\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = {
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] = {
				"Tenthed_Overwrite_Armor\data\Optional\optionalhelmet.paa",
				"10th_AC\data\helmets\blackvisor.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.2;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.2;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.2;
				};
			};
		};
	};
	class SCT_10th_Optional_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Optional\optionalhelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Optional\optionalhelmet.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.2;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.2;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.2;
				};
			};
		};
	};

	// Sound
	class SCT_10th_Sound_Armor : SCT_10th_Pilot_Vest {
		dlc = "OPTRE";
		scope = 2;
		author = "Sawah";
		displayName = "[10th] M52B 'Sound'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] =
		{

			"Tenthed_Overwrite_Armor\data\Sound\soundarmor.paa",
		};
	};
	class SCT_10th_Sound_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Sawah";
		displayName = "[10th] Pilot 'Sound'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Sound\soundhelmet.paa",
			"10th_AC\data\helmets\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] = {
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] = {
				"Tenthed_Overwrite_Armor\data\Sound\soundhelmet.paa",
				"10th_AC\data\helmets\bluevisor.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.2;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.2;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.2;
				};
			};
		};
	};
	class SCT_10th_Sound_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Sawah";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Sound\soundhelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] = {
				"camo"
			};
			hiddenSelectionsTextures[] = {
				"Tenthed_Overwrite_Armor\data\Sound\soundhelmet.paa"
			};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 30;
					passThrough = 0.2;
				};
				class Face {
					hitpointName = "HitFace";
					armor = 30;
					passThrough = 0.2;
				};
				class Neck {
					hitpointName = "HitNeck";
					armor = 30;
					passThrough = 0.2;
				};
			};
		};
	};
};