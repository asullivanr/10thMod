class CfgPatches {
	class Tenthed_Armor_Named {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Armor Named Retextures";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
	};
};
class cfgWeapons {
	class Tenthed_Specialist_Armor;
	class Tenthed_Specialist2_Armor;
	class Tenthed_Rifleman_Armor;
	class Tenthed_Rifleman_Knife_Armor;
	class Tenthed_Demolitions_Knife_Armor;
	class Tenthed_Demolitions_Armor;
	class Tenthed_Light_Knife_Armor;
	class Tenthed_Light_Armor;
	class Tenthed_Sniper_Knife_Armor;
	class Tenthed_Sniper_Armor;
	class Tenthed_Sniper_Ghillie_Armor;
	class Tenthed_Alternate_Armor;
	class Tenthed_Pilot_Vest;
	class Tenthed_Pilot_Armored;

	// Added update 1

	// Named Armors
	class Tenthed_Jinx_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe, Kodiak";
		displayName = "[10th] M52B 'Jinx'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\jinxarmor.paa",
		};
	};
	class Tenthed_Kitsune_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Kitsune'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\kitsuneamour v2.paa"
		};
	};
	class Tenthed_Jad_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Jad'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\jadarmor.paa"
		};
	};
	class Tenthed_Dakota_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Dakota'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\dakotaarmor.paa"
		};
	};
	class Tenthed_Choco_Armor : Tenthed_Pilot_Armored {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Choco'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\Chocovest.paa",
		};
	};
	class Tenthed_Optional_Armor : Tenthed_Pilot_Armored {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe, Kodiak, Crow, Tiger";
		displayName = "[10th] M52B 'Optional'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\Optionalvest.paa",
		};
	};
	class Tenthed_Lego_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Lego'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\Legoamour.paa",
		};
	};
	class Tenthed_Pockets_Armor : Tenthed_Pilot_Vest
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Pockets'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\pocketsarmor.paa",
		};
	};
	class Tenthed_Akira_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Jogn Halo";
		displayName = "[10th] M52D 'Akira'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\akiraarmor.paa"
		};
	};
	class Tenthed_Tiny_Armor : Tenthed_Pilot_Vest {
		dlc = "OPTRE";
		scope = 2;
		author = "Wolfe, Kodiak, Crow";
		displayName = "[10th] M52B 'Tiny'";
		model = "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		picture = "\OPTRE_FC_Units\Marines\data\h3_vest_i_ca.paa";
		hiddenSelectionsTextures[] = {

			"Tenthed_Armor_Named\data\tinyarmor.paa",
		};
	};
	class Tenthed_Crow_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Crow'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\crowarmor.paa"
		};
	};
	class Tenthed_Jogn_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'BoomStick'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\jognarmor.paa"
		};
	};
	class Tenthed_Goof_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Goof'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\goofarmor.paa"
		};
	};
	class Tenthed_Rambler_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Rambler'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\rambler armor v2.paa"
		};
	};
	class Tenthed_Goldie_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow";
		displayName = "[10th] M52D 'Goldie'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Goldiearmour.paa"
		};
	};
	class Tenthed_Mac_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe, Crow, Jogn";
		displayName = "[10th] M52D 'Mac'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\macarmor.paa"
		};
	};
	class Tenthed_Drake_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Drake'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Drake_Armor.paa"
		};
	};
	class Tenthed_Flipper_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Flipper'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\flipperarmor.paa"
		};
	};
	class Tenthed_HardDrop_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Hard-Drop'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\harddroparmor.paa"
		};
	};
	class Tenthed_Kodiak_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Kodiak'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\kodiakarmor.paa"
		};
	};
	class Tenthed_Lion_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Lion'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\lionarmor.paa"
		};
	};
	class Tenthed_Wolfe_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Wolfe'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\wolfearmor.paa"
		};
	};
	class Tenthed_Altered_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Altered'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\alteredarmor.paa"
		};
	};
	class Tenthed_Sixfour_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Sixfour'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\sixfourarmor.paa"
		};
	};
	class Tenthed_Slim_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Slim'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\slimarmor.paa"
		};
	};
	class Tenthed_Lilly_Armor : Tenthed_Rifleman_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Lilly'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\lillyarmor.paa"
		};
	};
	class Tenthed_Dave_Armor : Tenthed_Sniper_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Dave'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\davearmor.paa"
		};
	};
	class Tenthed_Kmart_Armor : Tenthed_Sniper_Armor {
		scope = 2;
		author = "Wolfe,Kodiak,Tiger";
		displayName = "[10th] M52D 'Kmart'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\Kmartamour.paa"
		};
	};
	class Tenthed_Void_Armor : Tenthed_Sniper_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Void'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\Void_Armor.paa"
		};
	};
	class Tenthed_Nova_Armor : Tenthed_Light_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Nova'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\Novaamour.paa"
		};
	};
	class Tenthed_Metro_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Metro'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\metroarmor.paa"
		};
	};
	class Tenthed_Nobody_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Nobody'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\nobodyarmor.paa"
		};
	};
	class Tenthed_Thor_Armor : Tenthed_Rifleman_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Thor'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\thorarmor.paa"
		};
	};
	class Tenthed_Tower_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Tower'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\towerarmor.paa"
		};
	};
	class Tenthed_Firefly_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Firefly'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\fireflyarmor.paa"
		};
	};
	class Tenthed_Baer_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Baer'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\baerarmor.paa"
		};
	};
	class Tenthed_Panzer_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Panzer'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\panzerarmor.paa"
		};
	};
	class Tenthed_Mustang_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Mustang'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\mustangarmor.paa"
		};
	};
	class Tenthed_Iceman_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Iceman'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\icemanarmor.paa"
		};
	};
	class Tenthed_Havoc_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Havoc'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\havocarmor.paa"
		};
	};
	class Tenthed_Tino_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Tino'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\tinoarmor.paa"
		};
	};
	class Tenthed_Hatchet_Armor : Tenthed_Sniper_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Hatchet'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\hatchetarmor.paa"
		};
	};
	class Tenthed_Fixer_Armor : Tenthed_Rifleman_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Fixer'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\fixerarmor.paa"
		};
	};
	class Tenthed_Logic_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Logic'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"Tenthed_Armor_Named\data\lionghilliememe.paa",
			"Tenthed_Armor_Named\data\logicarmor.paa"
		};
	};
	class Tenthed_Splash_Armor : Tenthed_Rifleman_Armor {
		scope = 2;
		author = "Wolfe,Kodiak,Crow";
		displayName = "[10th] M52D 'Spash'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Splash_Armor.paa"
		};
	};
	class Tenthed_Tiger_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Tiger'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\Tiger_Armor-v2.paa"
		};
	};
	class Tenthed_FivesEvader_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'FivesEvader'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\FivesEvader_Armor.paa"
		};
	};
	class Tenthed_Marvel_Armor : Tenthed_Demolitions_Knife_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Marvel'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\marvelarmor.paa"
		};
	};

	// Added update 2
	class Tenthed_Arctic_Armor : Tenthed_Specialist2_Armor {
		scope = 2;
		author = "Wolfe,Kodiak";
		displayName = "[10th] M52D 'Arctic'";
		hiddenSelectionsTextures[] = {
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"Tenthed_Armor_Named\data\odst_legs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Tenthed_Armor_Named\data\arcticarmor.paa"
		};
	};


}