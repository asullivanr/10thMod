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
			"Tenthed_Pelican_SOCOM_Urban",
			"Tenthed_Pelican_Urban_fir_test",
			"Tenthed_M494_Oryx"
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
	class Tenthed_Pelican_Urban_fir_test : Tenthed_Pelican_Urban {
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
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
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

	// Other
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
	};
	class I_APC_Tracked_03_base_F: APC_Tracked_03_base_F
	{
	};
	class Tenthed_M494_Oryx: I_APC_Tracked_03_base_F
	{
		dlc="OPTRE";
		scope=2;
		scopeCurator=2;
		_generalMacro="OPTRE_M494";
		model="\OPTRE_Vehicles\Oryx\oryx.p3d";
		author="Article 2 Studios";
		displayName="[10th] M494 Oryx IFV";
		faction = "Tenthed_UnitFact_Main";
		editorCategory = "Tenthed_EditorCategory_Main";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Vehicles";
		editorPreview="\OPTRE_Vehicles\Oryx\data\Preview\OPTRE_M494.jpg";
		side=1;
		LODDriverTurnedIn=1100;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		ace_hunterkiller=1;
		lockDetectionSystem=4;
		incomingMissileDetectionSystem=4;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="pip_gunner_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="pip_commander_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.75;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=2.5;
				material=-1;
				name="telo";
				visual="hull";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class HitERA_Front
			{
				simulation="Armor_ERA_Light";
				armorComponent="ERA_F";
				name="ERA_F_point";
				armor=-100;
				minimalHit=1;
				radius=0.30000001;
				passThrough=0;
				visual="-";
				explosionShielding=2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_1: HitERA_Front
			{
				name="ERA_L_1_point";
				armorComponent="ERA_L_1a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_1_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_2: HitERA_Front
			{
				name="ERA_L_2_point";
				armorComponent="ERA_L_1b";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_2_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_3: HitERA_Front
			{
				name="ERA_L_3_point";
				armorComponent="ERA_L_2a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_3_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_4: HitERA_Front
			{
				name="ERA_L_4_point";
				armorComponent="ERA_L_2b";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_4_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Left_5: HitERA_Front
			{
				name="ERA_L_5_point";
				armorComponent="ERA_L_3a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_L_4_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_1: HitERA_Front
			{
				name="ERA_R_1_point";
				armorComponent="ERA_R_1a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_1_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_2: HitERA_Front
			{
				name="ERA_R_2_point";
				armorComponent="ERA_R_1b";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_2_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_3: HitERA_Front
			{
				name="ERA_R_3_point";
				armorComponent="ERA_R_2a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_3_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_4: HitERA_Front
			{
				name="ERA_R_4_point";
				armorComponent="ERA_R_2b";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_4_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Right_5: HitERA_Front
			{
				name="ERA_R_5_point";
				armorComponent="ERA_R_3a";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_R_5_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				armor=2;
				material=-1;
				name="pasL";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitRTrack: HitRTrack
			{
				armor=2;
				material=-1;
				name="pasP";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.75;
			};
			class HitEngine: HitEngine
			{
				armor=2;
				material=-1;
				name="engine";
				visual="-";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
		};
		simulation="tankX";
		engineMOI=8;
		enginePower=522.20001;
		peakTorque=8750;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		torqueCurve[]=
		{
			{0.347826,0.73529398},
			{0.43478301,0.91176498},
			{0.52173901,1},
			{0.60869598,1},
			{0.69565201,0.98529398},
			{0.78260899,0.92647099},
			{0.86956501,0.82352901},
			{1,0.67647099}
		};
		thrustDelay=0.5;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		fuelCapacity=24;
		brakeIdleSpeed=1.37;
		maxSpeed=80;
		slowSpeedForwardCoef=0.30000001;
		normalSpeedForwardCoef=0.60000002;
		minOmega=63;
		maxOmega=209.44;
		idleRpm=500;
		redRpm=2000;
		engineLosses=25;
		transmissionLosses=15;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=53;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=80;
		clutchStrength=40;
		latency=1.2;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.52173901,0.347826,0.47826099,0.97826099,0.47826099,0.95652199,0.60869598,0.91304302,0.652174,1,0.652174};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1.45,
				"N",
				0,
				"D1",
				4.1599998,
				"D2",
				2,
				"D3",
				1.28,
				"D4",
				0.86000001
			};
			TransmissionRatios[]=
			{
				"High",
				13.06
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.2;
		};
		tankTurnForce=350000;
		tankTurnForceAngMinSpd=0.60000002;
		tankTurnForceAngSpd=0.91000003;
		accelAidForceCoef=1.5;
		accelAidForceYOffset=-4;
		accelAidForceSpd=3.4000001;
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				steering=0;
				width=0.44999999;
				mass=90;
				MOI=15;
				maxBrakeTorque=5000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=2583.3301;
				springStrength=375000;
				springDamperRate=17000;
				dampingRate=1764;
				dampingRateInAir=1764;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=10;
				latStiffY=30;
				longitudinalStiffnessPerUnitGravity=13000;
				frictionVsSlipGraph[]=
				{
					{0,1.5},
					{0.5,1.5},
					{1,1.5}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0;
				maxCompression=0;
			};
		};
		armor=600;
		crew="OPTRE_UNSC_Army_Soldier_Crewman_WDL";
		damageResistance=0.02;
		crewVulnerable=0;
		crewExplosionProtection=1;
		armorLights=1;
		armorStructural=4;
		transportSoldier=6;
		forceHideDriver=1;
		driverForceOptics=0;
		viewdriverInExternal=1;
		getInAction="GetInMRAP_01";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic02",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic02",
			"passenger_apc_generic04",
			"passenger_apc_narrow_generic01",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright"
		};
		memoryPointMissile[]=
		{
			"spice rakety",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"konec rakety",
			"konec hlavne"
		};
		class UserActions
		{
			class CargoDoorOpen
			{
				userActionID=60;
				displayName="Open Cargo Door";
				displayNameDefault="Open Cargo Door";
				textToolTip="Open Cargo Door";
				position="cargodoor_axis";
				radius=6;
				priority=2;
				onlyForPlayer=0;
				condition="((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",1]";
				animPeriod=5;
			};
			class CargoDoorClose: CargoDoorOpen
			{
				userActionID=61;
				displayName="Close Cargo Door";
				displayNameDefault="Close Cargo Door";
				textToolTip="Close Cargo Door";
				priority=2;
				condition="((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement="this animate [""CargoDoor"",0]";
				animPeriod=5;
			};
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Oryx";
				displayName="Press SPACEBAR to Flip Oryx";
				position="";
				radius=6;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 2]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=3;
						minElev=-12;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						gunBeg="usti hlavne3";
						gunEnd="konec hlavne3";
						weapons[]=
						{
							"OPTRE_M247H_RCWS",
							"Laserdesignator_mounted"
						};
						magazines[]=
						{
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"OPTRE_200Rnd_127x99_M247H",
							"Laserbatteries"
						};
						turretInfoType="RscOptics_APC_Wheeled_01_gunner";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						memoryPointGunnerOutOptics="commanderview";
						gunnerForceOptics=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						class ViewOptics: RCWSOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={0,1};
							thermalResolution[]={4096};
						};
						startEngine=0;
						viewGunnerInExternal=1;
						LODTurnedIn=1100;
						LODTurnedOut=1100;
						selectionFireAnim="zasleh3";
					};
				};
				memoryPointGun="usti hlavne2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				weapons[]=
				{
					"OPTRE_M503_30mm_Autocannon",
					"OPTRE_M247T_Coax",
					"OPTRE_M670_ATGM_Launcher",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"OPTRE_300Rnd_30mm_HE2",
					"OPTRE_300Rnd_30mm_HE2",
					"OPTRE_300Rnd_30mm_HE2",
					"OPTRE_300Rnd_30mm_HE2",
					"OPTRE_250Rnd_30mm_AP2",
					"OPTRE_250Rnd_30mm_AP2",
					"OPTRE_250Rnd_30mm_AP2",
					"OPTRE_250Rnd_30mm_AP2",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_500Rnd_762x51_Box_Tracer",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"OPTRE_2Rnd_GAT_missiles",
					"SmokeLauncherMag"
				};
				minElev=-12;
				maxElev=35;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				selectionFireAnim="zasleh2";
				gun="maingun";
				body="mainturret";
				gunAxis="Osa Hlavne";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				LODTurnedIn=1100;
				turretAxis="OsaVeze";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						thermalResolution[]={4096};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usePip=1;
			};
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source="reload";
				weapon="OPTRE_M503_30mm_Autocannon";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="OPTRE_M670_ATGM_Launcher";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class CargoDoorAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class HitERA_Front_src
			{
				source="Hit";
				hitpoint="HitERA_Front";
				raw=1;
			};
			class HitERA_Left_1_src
			{
				source="Hit";
				hitpoint="HitERA_Left_1";
				raw=1;
			};
			class HitERA_Right_1_src
			{
				source="Hit";
				hitpoint="HitERA_Right_1";
				raw=1;
			};
			class HitERA_Left_2_src
			{
				source="Hit";
				hitpoint="HitERA_Left_2";
				raw=1;
			};
			class HitERA_Right_2_src
			{
				source="Hit";
				hitpoint="HitERA_Right_2";
				raw=1;
			};
			class HitERA_Left_3_src
			{
				source="Hit";
				hitpoint="HitERA_Left_3";
				raw=1;
			};
			class HitERA_Right_3_src
			{
				source="Hit";
				hitpoint="HitERA_Right_3";
				raw=1;
			};
			class HitERA_Left_4_src
			{
				source="Hit";
				hitpoint="HitERA_Left_4";
				raw=1;
			};
			class HitERA_Right_4_src
			{
				source="Hit";
				hitpoint="HitERA_Right_4";
				raw=1;
			};
			class HitERA_Left_5_src
			{
				source="Hit";
				hitpoint="HitERA_Left_5";
				raw=1;
			};
			class HitERA_Right_5_src
			{
				source="Hit";
				hitpoint="HitERA_Right_5";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="Attach Hull Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBags",
					1
				};
				mass=-50;
			};
			class showCamonetTurret
			{
				displayName="Attach Turret Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showBagsTurret",
					1
				};
				mass=-50;
			};
			class showCamonetgun
			{
				displayName="Attach Gun Camo Net";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBags
			{
				displayName="Attach Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showBagsTurret
			{
				displayName="Attach Turret Backpacks";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showera
			{
				displayName="Attach Explosive Reactive Armor";
				author="Article 2 Studios";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=600;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetgun",
			0,
			"showCamonetTurret",
			0,
			"showBags",
			0,
			"showBagsTurret",
			0,
			"showera",
			0
		};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				hitpoint="Light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				hitpoint="Light_L_flare";
				useFlare=1;
			};
			class LightCarRearL01: Left
			{
				color[]={200,0,0};
				direction="rearlight_l_end";
				position="rearlight_l_flare";
				selection="rearlight_l";
				hitpoint="rearlight_l";
				flareSize=0.80000001;
				useFlare=1;
				intensity=2;
				class Attenuation
				{
					constant=0;
					hardLimitEnd=0;
					hardLimitStart=0;
					linear=0;
					quadratic=0;
					start=0;
				};
			};
			class LightCarRearR01: LightCarRearL01
			{
				direction="rearlight_r_end";
				position="rearlight_r_flare";
				selection="rearlight_r";
				hitpoint="rearlight_r";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Right",
				"Right2",
				"LightCarRearL01",
				"LightCarRearR01"
			}
		};
		class textureSources
		{
			class colorstand
			{
				displayName="$STR_OPTRE_TEXTURESOURCES_STANDARD";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_armor_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_main_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\oryx_turret_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\scorpion_mg_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colordes
			{
				displayName="$STR_OPTRE_TEXTURESOURCES_TAN";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_desert_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colortund
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_tundra_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_jungle_ca.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_jungle_co.paa",
					"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_armor_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_main_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\oryx_turret_co.paa",
			"\OPTRE_Vehicles\Oryx\data\texture\scorpion_mg_co.paa",
			"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
		};
	};
};