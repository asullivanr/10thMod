class CfgPatches {
	class Tenthed_Helmets_Named {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Helmets Named Retextures";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
	};
};
class cfgWeapons {
	class Tenthed_CH252D_Base;
	class Tenthed_CH252D_Base_dp;

	class Tenthed_Pilot_Helmet;

	// Kodiak
	class Tenthed_Kodiak_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		displayName = "[10th] CH252D 'Kodiak'";
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\kodiakhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Kodiak_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		displayName = "[10th] CH252D 'Kodiak'";
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\kodiakhelmet.paa"
		};
	};

	// Lion
	class Tenthed_Lion_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lion'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lionhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Lion_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lion'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lionhelmet.paa"
		};
	};

	// Wolfe
	class Tenthed_Wolfe_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Wolfe'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\wolfehelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Wolfe_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Wolfe'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\wolfehelmet.paa"
		};
	};

	// Kitsune
	class Tenthed_Kitsune_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		displayName = "[10th] CH252D 'Kitsune'";
		author = "Article 2 Studios";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\kitsunehelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Kitsune_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Kitsune'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"10th_AC\data\helmets\kitsunehelmet v2.paa"
		};
	};

	// Altered
	class Tenthed_Altered_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Altered'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\alteredhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Altered_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Altered'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\alteredhelmet.paa"
		};
	};

	// Chop
	class Tenthed_Chop_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Chop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\chophelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Chop_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Chop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\chophelmet.paa"
		};
	};

	// Firefly
	class Tenthed_Firefly_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Firefly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\fireflyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Firefly_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Firefly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\fireflyhelmet.paa"
		};
	};

	// Dave
	class Tenthed_Dave_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dave'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\davehelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Dave_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dave'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\davehelmet.paa"
		};
	};

	// Pockets
	class Tenthed_pockets_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'pockets'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\pocketsthewizardhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_pocket_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'pockets'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\pocketsthewizardhelmet.paa"
		};
	};

	// Sixfour
	class Tenthed_Sixfour_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Sixfour'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\sixfourhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Sixfour_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Sixfour'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\sixfourhelmet.paa"
		};
	};

	// Tino
	class Tenthed_Tino_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tino'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tinohelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Tino_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tinohelmet.paa"
		};
	};

	// Trojan
	class Tenthed_Trojan_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Trojan'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\trojanhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Trojan_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Trojan'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\trojanhelmet.paa"
		};
	};

	// Tower
	class Tenthed_Tower_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tower'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\towerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Tower_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tower'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\towerhelmet.paa"
		};
	};

	// Teal
	class Tenthed_Teal_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Teal'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tealhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Teal_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Teal'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\tealhelmet.paa"
		};
	};

	// Slim
	class Tenthed_Slim_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Slim'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\slimhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Slim_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Slim'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\slimhelmet.paa"
		};
	};

	// Lilly
	class Tenthed_Lilly_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lilly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lillyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Lilly_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Lilly'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\lillyhelmet.paa"
		};
	}

	// Metro
	class Tenthed_Metro_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Metro'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\metrohelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Metro_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Metro'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\metrohelmet.paa"
		};
	};

	// Nobody
	class Tenthed_Nobody_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nobody'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] = {
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\nobodyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Nobody_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nobody'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Helmets_Named\data\nobodyhelmet.paa"
		};
	};

	// Thor
	class Tenthed_Thor_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Thor'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\thorhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Thor_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Thor'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\thorhelmet.paa"
		};
	}

	// Baer
	class Tenthed_Baer_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Baer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\baerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Baer_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Baer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\baerhelmet.paa"
		};
	};

	// Panzer
	class Tenthed_Panzer_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Panzer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\panzerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Panzer_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Panzer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\panzerhelmet.paa"
		};
	};

	// Mustang
	class Tenthed_Mustang_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Mustang'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\mustanghelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Mustang_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Mustang'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\mustanghelmet.paa"
		};
	};

	// Iceman
	class Tenthed_Iceman_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Iceman'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\icemanhelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Iceman_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Iceman'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\icemanhelmet.paa"
		};
	};

	// Havoc
	class Tenthed_Havoc_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Havoc'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\havochelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Havoc_Helmet_dp : Tenthed_CH252D_Base_dp {
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
			"Tenthed_Helmets_Named\data\havochelmet.paa"
		};
	};

	// Hatchet
	class Tenthed_Hatchet_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hatchet'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\hatchethelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Hatchet_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hatchet'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\hatchethelmet.paa"
		};
	};

	// Fixer
	class Tenthed_Fixer_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Fixer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\fixerhelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Fixer_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Fixer'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\fixerhelmet.paa"
		};
	};

	// Logic
	class Tenthed_Logic_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Logic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\logichelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Logic_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Logic'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\logichelmet.paa"
		};
	};

	// Splash
	class Tenthed_Splash_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Splash'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Splash_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Splash_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Splash";
		displayName = "[10th] CH252D 'Splash'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Splash_Helmet.paa"
		};
	};

	// Tiger
	class Tenthed_Tiger_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tiger'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\TigerHelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Tiger_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Tiger'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\TigerHelmet.paa"
		};
	};

	// Evader
	class Tenthed_FivesEvader_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Evader'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\FivesEvader_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_FivesEvader_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Evader'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\FivesEvader_Helmet.paa"
		};
	};

	// Crow
	class Tenthed_Crow_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Crow'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\crowshelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Crow_Helment_dp : Tenthed_CH252D_Base_dp {
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
			"Tenthed_Helmets_Named\data\crowshelmet.paa"
		};
	};

	// Akira
	class Tenthed_Akira_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Jogn Halo";
		displayName = "[10th] CH252D 'Akira'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\akirahelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Akira_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Jogn Halo";
		displayName = "[10th] CH252D 'Akira'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\akirahelmet.paa"
		};
	};

	// Rambler
	class Tenthed_Rambler_Helment : Tenthed_CH252D_Base {
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
			"Tenthed_Helmets_Named\data\RamblerHelment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Rambler_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Rambler'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\RamblerHelment.paa"
		};
	};

	// Void
	class Tenthed_Void_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Void'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Void_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Void_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] CH252D 'Void'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Void_Helmet.paa"
		};
	};

	// Tiny
	class Tenthed_Tiny_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] Pilot 'Tiny'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\tinyhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Tiny_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] Pilot 'Tiny'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\tinyhelmet.paa"
		};
	};

	// Lego
	class Tenthed_Lego_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Lego'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\LegoHelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Lego_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Lego'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\LegoHelmet.paa"
		};
	};

	// Goof
	class Tenthed_Goof_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goof'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\goofhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Goof_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goof'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\goofhelmet.paa"
		};
	};

	// Drake
	class Tenthed_Drake_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Drake'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Drake_Helmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Drake_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Drake'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Drake_Helmet.paa"
		};
	};

	// HardDrop
	class Tenthed_HardDrop_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hard-Drop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\harddrophelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_HardDrop_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Hard-Drop'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\harddrophelmet.paa"
		};
	};

	// Jogn
	class Tenthed_Jogn_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'BoomStick'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jognhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Jogn_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'BoomStick'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jognhelmet.paa"
		};
	};

	// Kmart
	class Tenthed_Kmart_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Kmart'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Kmarthelment.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Kmart_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Kmart'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Kmarthelment.paa"
		};
	};

	// Dakota
	class Tenthed_Dakota_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dakota'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\dakotahelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Dakota_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Dakota'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\dakotahelmet.paa"
		};
	};

	// Jad
	class Tenthed_Jad_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Jad'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jadhelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Jad_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Jad'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jadhelmet.paa"
		};
	};

	// Goldie
	class Tenthed_Goldie_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goldie'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Goldiehelment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Goldie_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Goldie'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Goldiehelment.paa"
		};
	};

	// Nova
	class Tenthed_Nova_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nova'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Novahelment.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Nova_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Nova'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Novahelment.paa"
		};
	};

	// Marvel
	class Tenthed_Marvel_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Marvel'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\marvelhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Marvel_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Marvel'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\marvelhelmet.paa"
		};
	};

	// Flipper
	class Tenthed_Flipper_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Flipper'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\flipperhelmet.paa",
			"Tenthed_Armor_Base\data\visors\blackvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Flipper_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Flipper'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\flipperhelmet.paa"
		};
	};

	// Choco
	class Tenthed_Choco_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Choco'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Chocohelmet.paa",
			"Tenthed_Armor_Base\data\visors\silvervisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Choco_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Choco'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Chocohelmet.paa"
		};
	};

	// Mac
	class Tenthed_Mac_Helment : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak,Crow,Jogn";
		displayName = "[10th] CH252D 'Mac'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\machelmet.paa",
			"Tenthed_Armor_Base\data\visors\goldvisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Mac_Helment_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] CH252D 'Mac'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\machelmet.paa"
		};
	};

	// Optional
	class Tenthed_Optional_Helmet : Tenthed_CH252D_Base {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Optional'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Optionalhelmet.paa",
			"Tenthed_Armor_Base\data\visors\bluevisor.paa"
		};
		optreHUDStyle = "ODST_1";
	};
	class Tenthed_Optional_Helmet_dp : Tenthed_CH252D_Base_dp {
		dlc = "OPTRE";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		author = "Wolfe,Kodiak";
		displayName = "[10th] Pilot 'Optional'";
		model = "\OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\Optionalhelmet.paa"
		};
	};

	// Jinx
	class Tenthed_Jinx_Helmet : Tenthed_Pilot_Helmet {
		dlc = "OPTRE_FC";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] VX19 'Jinx'";
		author = "Wolfe, Kodiak";
		hiddenSelectionsTextures[] =
		{
			"Tenthed_Helmets_Named\data\jinxhelmet.paa",
			"Tenthed_Armor_Base\data\h3_pilothelmet_visor_CO.paa"
		};
	}
}