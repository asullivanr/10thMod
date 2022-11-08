class CfgPatches {
	class Tenthed_Vehicle {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Vehicle Retextures";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {
			"Tenthed_Pelican",
			"Tenthed_Archangel_Pelican",
			"Tenthed_Dodo_Pelican",
			"Tenthed_beeHornet",
			"Tenthed_ZakuHornet",
			"Tenthed_ARES_Tank",
			"Tenthed_ARES_MGS",
			"Tenthed_Zeus_Stallion",
			"Tenthed_Pelican_Desert",
			"Tenthed_Pelican_Jungle",
			"Tenthed_Pelican_Urban"
		};
	};
};
class CfgVehicles {
	class VES_D77HTCI_A;
	class OPTRE_UNSC_hornet_green_CAP;
	class OPTRE_M808S;
	class OPTRE_M413_MGS_UNSC_tan;
	class OPTRE_m1087_stallion_cover_unsc;

	class Eventhandlers;

	class Tenthed_Pelican_Base : VES_D77HTCI_A {
		displayName = "Tenthed_Pelican_Base";
		author = "";
		scope = 1;
		scopeCurator = 1;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\10th_pelican\10th_PelicanExterior.paa",
			""
		};
		class TransportBackpacks {
			class _xx_TenthedMortarBackpack {
				backpack = "Tenthed_Mortar_Backpack";
				count = 6;
			};
			class _xx_TenthedHMGBackpack {
				backpack = "Tenthed_HMG_Backpack";
				count = 6;
			};
			class _xx_ParachuteBackpack {
				backpack = "B_Parachute";
				count = 6;
			};
		};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
	};

	// Pelicans
	class Tenthed_Pelican_Desert : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Desert";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_DESERT.paa",
			""
		};
	};
	class Tenthed_Pelican_Jungle : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Jungle";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_JUNGLE.paa",
			""
		};
	};
	class Tenthed_Pelican_Urban : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Urban";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_URBAN.paa",
			""
		};
	};

	// Old Varient Pelicans
	class Tenthed_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican";
		author = "Crow";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\10th_pelican\10th_PelicanExterior.paa",
			""
		};
	};
	class Tenthed_Archangel_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Archangel Pelican";
		author = "PocketsTheWizard";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\archangel_pelican\archanglePelican.paa",
			""
		};
	};
	class Tenthed_Dodo_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] DodoAirLines";
		author = "PocketsTheWizard";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\dodo_pelican\DodoPelican.paa",
			""
		};
	};

	// Hornets

	// Old Varient Hornets
	class Tenthed_beeHornet : OPTRE_UNSC_hornet_green_CAP {
		scope = 2;
		scopeCurator = 2;
		author = "PcoketsTheWizard";
		displayName = "b(ee)Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\bee_hornet\beeHornet.paa"
		};
	};
	class Tenthed_ZakuHornet : OPTRE_UNSC_hornet_green_CAP {
		scope = 2;
		scopeCurator = 2;
		author = "PcoketsTheWizard";
		displayName = "Red Comet Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\zaku_hornet\ZakuHornet.paa"
		};
	};

	class Tenthed_ARES_Tank : OPTRE_M808S {
		scope = 2;
		scopeCurator = 2;
		author = "PcoketsTheWizard";
		displayName = "AresScorpion";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		magazines[] = {
			"OPTRE_60Rnd_105mm_APBC",
			"OPTRE_60Rnd_105mm_SAPHE",
			"OPTRE_60Rnd_105mm_HEAT",
			"OPTRE_60Rnd_105mm_APBC",
			"OPTRE_60Rnd_105mm_SAPHE",
			"OPTRE_60Rnd_105mm_HEAT",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\ares_tank\body_lopo_DR.paa",
			"\Tenthed_Vehicles\data\ares_tank\cing_dv_m808s_DR.paa",
			"\Tenthed_Vehicles\data\ares_tank\cing_rt_m808s_DR.paa",
			"\Tenthed_Vehicles\data\ares_tank\turretbase_lopo_DR.paa",
			"\Tenthed_Vehicles\data\ares_tank\turrethead_lopo_DR.paa",
			"\Tenthed_Vehicles\data\ares_tank\turretguns_lopo_DR.paa",
			"\Tenthed_Vehicles\data\ares_tank\ghammer_lopo_DR.paa",
		};
	};
	class Tenthed_ARES_MGS : OPTRE_M413_MGS_UNSC_tan {
		displayName = "AresMGS";
		author = "PocketsTheWizard";
		scope = 2;
		scopeCurator = 2;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\ares_mgs\Bison_Body_tan_CO.paa",
			"\Tenthed_Vehicles\data\ares_mgs\Bison_Misc_tan_CO.paa",
			"\Tenthed_Vehicles\data\ares_mgs\Bison_WheelsCannon_tan_CO.paa",
			"\Tenthed_Vehicles\data\ares_mgs\Bison_Seats_CO.paa",
			"\Tenthed_Vehicles\data\ares_mgs\Bison_Interior_CO.paa",
			"\Tenthed_Vehicles\data\ares_mgs\Bison_MFCDScreens_CO.paa",
			"\Tenthed_Vehicles\data\ares_mgs\Bison_90mm_tan_CO.paa",
		};
	};

	// Stallions
	class Tenthed_Zeus_Stallion : OPTRE_m1087_stallion_cover_unsc {
		displayName = "Zeus Stallion";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\zeus_stallion\zeusstallion.paa",
			"\Tenthed_Vehicles\data\zeus_stallion\Truck_ext02_standard_co.paa",
			"\Tenthed_Vehicles\data\zeus_stallion\Truck_cargo_standard_co.paa",
			"\Tenthed_Vehicles\data\zeus_stallion\Truck_cover_standard_co.paa",
		};
	};
}