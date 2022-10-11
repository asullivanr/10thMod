class CfgPatches {
	class Tenthed_Backpacks {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Backpacks";
		requiredAddons[] = {
			"OPTRE_Core",
		};
		weapons[] = {};
		units[] =
		{
			"10th_ANPRC_521"
		};
	};
};
class cfgVehicles {
	class OPTRE_UNSC_Rucksack;
	class OPTRE_ILCS_Rucksack_Black;

	class Tenthed_ANPRC_521 : OPTRE_UNSC_Rucksack {
		author = "Kodiak and Crow";
		displayName = "[10th] AN/PRC-521";
		descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
		picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";
		maximumLoad = 300;
		mass = 50;
		hiddenSelections[] =
		{
			"camo",
			"camo2",
			"B_Medic",
			"B_Addons"
		};
		hiddenSelectionsTextures[] =
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"Tenthed_Backpacks\data\10thcompack.paa"
		};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 25000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
	};
	class Tenthed_ILCS_Rucksack_Medical : OPTRE_ILCS_Rucksack_Black {
		dlc = "OPTRE";
		author = "Article 2 Studios";
		displayName = "[10th] ILCS Backpack [Medic]";
		maximumLoad = 400;
		mass = 40;
		hiddenSelections[] = {
			"camo1",
			"AP_Heavy"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Backpacks\data\ruck_med_CO V1.paa"
		};
	};
};