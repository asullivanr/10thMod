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
			"Tenthed_Pelican_Urban",
			"Tenthed_Hornet",
			"Tenthed_Falcon",
			"Tenthed_Pelican_SOCOM_Desert",
			"Tenthed_Pelican_SOCOM_Jungle",
			"Tenthed_Pelican_SOCOM_Urban"
		};
	};
};
class CfgVehicles {
	class VES_D77HTCI_A;
	class OPTRE_UNSC_hornet_green_CAP;
	class OPTRE_M808S;
	class OPTRE_M413_MGS_UNSC_tan;
	class OPTRE_m1087_stallion_cover_unsc;
	class OPTRE_UNSC_falcon_green;

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
			"\Tenthed_Vehicles\data\10th_pelican\10th_PelicanExterior.paa",
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
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_DESERT.paa",
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
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_JUNGLE.paa",
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
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_URBAN.paa",
			""
		};
	};
	class Tenthed_Pelican_Urban_fir : Tenthed_Pelican_Urban {
		displayName = "[10th] Pelican fir - Urban";
		class eventhandlers {
			class FIR_AWS_Common_EH
			{
				Init = "[_this select 0,'yes'] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";		
			};			
		};
		class UserActions {
			class Aircraft_MFD_Open_N {
				displayName = "Open I-TGT System";
				position = "pos cano";
				radius = 15;
				shortcut = "User4";
				condition = "('FIR_TGTPOD' in weapons this or 'Laserdesignator_pilotCamera' in weapons this) and player in this and isengineon this";				
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
				hideOnUse = 1;
			};
			class ECM_ON {
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User2";
				condition = "player in this and isengineon this and (this getvariable 'ECMJAMMER' == 'yes' or 'FIR_ECMPOD' in weapons this)";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
				hideOnUse = 1;
			};
			class AMS_LiteOpen {
				displayName = "<t color='#739eff'>Open AMS Lite</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "player in this and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\AMS\AMS_Lite\AMS_Lite_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};
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
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_DESERT.paa",
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
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_JUNGLE.paa",
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
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_URBAN.paa",
			""
		};
	};

	// Old Variant Pelicans
	class Tenthed_Pelican : Tenthed_Pelican_Base {
		displayName = "[10th] Pelican";
		author = "Crow";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\10th_pelican\10th_PelicanExterior.paa",
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
			"\Tenthed_Vehicles\data\archangel_pelican\archanglePelican.paa",
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
			"\Tenthed_Vehicles\data\dodo_pelican\DodoPelican.paa",
			""
		};
	};

	// Base type Hornets
	class Tenthed_Hornet_Base : OPTRE_UNSC_hornet_green_CAP {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Akira";
		displayName = "Tenthed_Hornet_Base";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"optre_vehicles\hornet\data\hornet_hull_green_co.paa"
		};
		maxSpeed = 350;
		weapons[] = {
			"OPTRE_GUA23A",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS"
		};
		magazines[] = {
			"OPTRE_2000Rnd_20mm_HEIAP",
			"240Rnd_CMFlare_Chaff_Magazine", // 168Rnd_CMFlare_Chaff_Magazine
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_8Rnd_C2GMLS_missiles"
		};
	};

	// Hornets
	class Tenthed_Hornet : Tenthed_Hornet_Base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Akira";
		displayName = "[10th] Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[]= {
			"optre_vehicles\hornet\data\hornet_hull_green_co.paa"
		};
	};

	// Old Variant Hornets
	class Tenthed_beeHornet : Tenthed_Hornet_Base {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "PcoketsTheWizard";
		displayName = "b(ee)Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\bee_hornet\beeHornet.paa"
		};
	};
	class Tenthed_ZakuHornet : Tenthed_Hornet_Base {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "PcoketsTheWizard";
		displayName = "Red Comet Hornet";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Hornets";
		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\zaku_hornet\ZakuHornet.paa"
		};
	};

	// Base type Falcon
	class Tenthed_Falcon_Base : OPTRE_UNSC_falcon_green {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		displayName = "Tenthed_Falcon_Base";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons";
		maxSpeed = 350;
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[] = {
			"OPTRE_Vehicles\Falcon\data\falcon_hull_CO.paa",
			"optre_vehicles\falcon\data\falcon_hullextra_co.paa",
			"optre_vehicles\falcon\data\falcon_wingtips_co.paa",
			"optre_vehicles\falcon\data\falcon_skid_co.paa"
		};
		weapons[] = {
			"OPTRE_M638",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[] = {
			"OPTRE_2000Rnd_20mm_HE",
			"OPTRE_2000Rnd_20mm_HE",
			"240Rnd_CMFlare_Chaff_Magazine", // 168Rnd_CMFlare_Chaff_Magazine
			"Laserbatteries"
		};
	};

	// Falcons
	class Tenthed_Falcon : Tenthed_Falcon_Base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[10th] UH-144 Falcon (Green)";
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[] = {
			"OPTRE_Vehicles\Falcon\data\falcon_hull_CO.paa",
			"optre_vehicles\falcon\data\falcon_hullextra_co.paa",
			"optre_vehicles\falcon\data\falcon_wingtips_co.paa",
			"optre_vehicles\falcon\data\falcon_skid_co.paa"
		};
	};

	// Old Variant ground vehicles
	class Tenthed_ARES_Tank : OPTRE_M808S {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
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
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
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
	class Tenthed_Zeus_Stallion : OPTRE_m1087_stallion_cover_unsc {
		displayName = "Zeus Stallion";
		author = "Kodiak";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
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

	// Fast movers
	class FIR_F22;

};