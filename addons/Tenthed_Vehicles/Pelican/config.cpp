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
			"Tenthed_Pelican_Desert",
			"Tenthed_Pelican_Jungle",
			"Tenthed_Pelican_Urban",
			"Tenthed_Pelican_SOCOM_Desert",
			"Tenthed_Pelican_SOCOM_Jungle",
			"Tenthed_Pelican_SOCOM_Urban",
			"Tenthed_Pelican_Urban_fir_test"
		};
	};
};
class CfgVehicles {
	class VES_D77HTCI_A;

	class Eventhandlers;

	// Base type Pelican
	class Tenthed_Pelican_Base : VES_D77HTCI_A {
		displayName = "Tenthed_Pelican_Base";
		author = "";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\10th_PelicanExterior.paa",
			""
		};
		weapons[] = {
			"CMFlareLauncher",
			"OPTRE_missiles_Anvil1"
		};
		magazines[] = {
			"300Rnd_CMFlare_Chaff_Magazine" // 168Rnd_CMFlare_Chaff_Magazine
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
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\pelican_DESERT.paa",
			""
		};
	};
	class Tenthed_Pelican_Jungle : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Jungle";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\pelican_JUNGLE.paa",
			""
		};
	};
	class Tenthed_Pelican_Urban : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican - Urban";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\pelican_URBAN.paa",
			""
		};
	};

	class OPTRE_Pelican_armed_SOCOM;
	class Tenthed_Pelican_SOCOM_Desert : OPTRE_Pelican_armed_SOCOM {
		displayName = "[10th] Pelican SOCOM - Desert";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";

		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\pelican_DESERT.paa",
			""
		};
	};
	class Tenthed_Pelican_SOCOM_Jungle : OPTRE_Pelican_armed_SOCOM {
		displayName = "[10th] Pelican SOCOM - Jungle";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";

		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\pelican_JUNGLE.paa",
			""
		};
	};
	class Tenthed_Pelican_SOCOM_Urban : OPTRE_Pelican_armed_SOCOM {
		displayName = "[10th] Pelican SOCOM - Urban";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Pelicans";

		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\pelican_URBAN.paa",
			""
		};
	};

	// Old Variant Pelicans
	class Tenthed_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican";
		author = "Crow";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\10th_PelicanExterior.paa",
			""
		};
	};
	class Tenthed_Archangel_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Archangel Pelican";
		author = "PocketsTheWizard";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\ArchangelPelican.paa",
			""
		};
	};
	class Tenthed_Dodo_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] DodoAirLines";
		author = "PocketsTheWizard";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\Pelican\textures\DodoPelican.paa",
			""
		};
	};
};
