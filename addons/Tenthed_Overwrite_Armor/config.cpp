class CfgPatches {
    class Tenthed_Overwrite_Armor {
        author = "Akira";
        name = "10th ODST: Overwrite";
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
	class SCT_10th_Demolitions_Knife_Armor;
	class SCT_10th_Rifleman_Armor;
	class SCT_10th_Specialist2_Armor;

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

	// Cossack
	class SCT_10th_Artic_Armor : SCT_10th_Rifleman_Armor {
		scope = 2;
		author = "John";
		displayName = "[10th] M52D 'Artic'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Overwrite_Armor\data\Artic\Articarmor.paa"
		};
	};
	class SCT_10th_Artic_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "John";
		displayName = "[10th] Pilot 'Sound'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Artic\Artichelmet.paa",
			"10th_AC\data\helmets\goldvisor.paa"
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
	class SCT_10th_Artic_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "John";
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

	// Tiny
	class SCT_10th_Tiny_Armor : SCT_10th_Pilot_Vest {
		dlc = "OPTRE";
		scope = 2;
		author = "John";
		displayName = "[10th] M52B 'Tiny'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Tiny\tinyarmor.paa",
		};
	};
	class SCT_10th_Tiny_Helment : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "John";
		displayName = "[10th] Pilot 'Tiny'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Tiny\tinyhelmet.paa",
			"10th_AC\data\helmets\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] = {
				"Tenthed_Overwrite_Armor\data\Tiny\tinyhelmet.paa",
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
	class SCT_10th_Tiny_Helment_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "John";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Overwrite_Armor\data\Tiny\tinyhelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] = {
				"Tenthed_Overwrite_Armor\data\Tiny\tinyhelmet.paa"
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

	// Artic
	class SCT_10th_Artic_Armor : SCT_10th_Specialist2_Armor {
		scope = 2;
		author = "Sawah";
		displayName = "[10th] M52D 'Artic'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Overwrite_Armor\data\Artic\Articarmor.paa"
		};
	};
	class SCT_10th_Artic_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Sawah";
		displayName = "[10th] CH252D 'Artic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Artic\Artichelmet.paa",
			"10th_AC\data\helmets\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"10th_AC\data\helmets\tinohelmet.paa",
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
	class SCT_10th_Artic_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "John";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Artic\Artichelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] =
			{
				"10th_AC\data\helmets\tinohelmet.paa"
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

	// Tino
	class SCT_10th_Tino_Armor : SCT_10th_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Tino'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Overwrite_Armor\data\Tino\tinoarmor.paa"
		};
	};
	class SCT_10th_Tino_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tino'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Tino\tinohelmet.paa",
			"10th_AC\data\helmets\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Tino\tinohelmet.paa",
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
	class SCT_10th_Tino_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Tino\tinohelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Tino\tinohelmet.paa"
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

	// Altered
	class SCT_10th_Altered_Armor : SCT_10th_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Altered'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Overwrite_Armor\data\Altered\alteredarmor.paa"
		};
	};
	class SCT_10th_Altered_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Altered'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Altered\alteredhelmet.paa",
			"10th_AC\data\helmets\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Altered\alteredhelmet.paa",
				"10th_AC\data\helmets\silvervisor.paa"
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
	class SCT_10th_Altered_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Altered\alteredhelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Altered\alteredhelmet.paa"
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

	// Rambler
	class SCT_10th_Rambler_Helment : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Rambler'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Rambler\RamblerHelment.paa",
			"10th_AC\data\helmets\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Rambler\RamblerHelment.paa",
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
	class SCT_10th_Rambler_Helment_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Rambler\RamblerHelment.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Rambler\RamblerHelment.paa"
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

	// Som
	class SCT_10th_Som_Armor : SCT_10th_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Som'";
		hiddenSelectionsTextures[] =
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"10th_AC\data\armor\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Overwrite_Armor\data\Som\somarmor.paa"
		};
	};
	class SCT_10th_Som_Helmet : SCT_10th_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Som'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Som\somhelmet.paa",
			"10th_AC\data\helmets\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
			mass = 40;
			modelSides[] = { 6 };
			passThrough = 0.1;
			hiddenSelections[] =
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Som\somhelmet.paa",
				"10th_AC\data\helmets\silvervisor.paa"
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
	class SCT_10th_Som_Helmet_dp : SCT_10th_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Overwrite_Armor\data\Som\somhelmet.paa"
		};
		class ItemInfo : HeadgearItem {
			uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
			hiddenSelections[] =
			{
				"camo"
			};
			hiddenSelectionsTextures[] =
			{
				"Tenthed_Overwrite_Armor\data\Som\somhelmet.paa"
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