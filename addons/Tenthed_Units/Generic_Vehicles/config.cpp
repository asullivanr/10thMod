class CfgPatches {
    class Generic_Vehicles {
        author = "Akira";
        name = "10th ODST: Generic Vehicles";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses {
    class Tenthed_UnitFact_Generic {
        displayname = "[10th] ODST Faction";
        priority = 1;
        side = 0;
        icon = "\Tenthed_Core\data\logo.paa";
        flag = "\Tenthed_Core\data\logo.paa";
    };
};
class CfgEditorCategories {
    class Tenthed_EditorCategory_Generic {
        displayName = "[10th] Generic enemy vehicles";
    };
};
class CfgEditorSubcategories {
    // Vehicles that are not a great threat and are more to give them something to shoot and waste rockets or whatever on.
    class Tenthed_EditorSubcategories_Generic_NonThreat_Ground {
        displayName = "Non-threat - Ground";
    };
    class Tenthed_EditorSubcategories_Generic_NonThreat_Air {
        displayName = "Non-threat - Air";
    };

    // Vehicles that are challenging but not gonna kill them unless they are dum.
    class Tenthed_EditorSubcategories_Generic_Threat_Ground {
        displayName = "Threat - Ground";
    };
    class Tenthed_EditorSubcategories_Generic_Threat_Air {
        displayName = "Threat - Air";
    };

    // Deploy this if you want a squad to MASCAS
    class Tenthed_EditorSubcategories_Generic_MASCAS_Ground {
        displayName = "MASCAS - Ground";
    };
    class Tenthed_EditorSubcategories_Generic_MASCAS_Air {
        displayName = "MASCAS - Air";
    };
};
class CfgVehicles {

    // Ground

    // Warthog - HMG
	class OPTRE_M12_LRV_ins: OPTRE_M12_LRV {
		displayName="M12 LRV (MG) [Ins]";
		author="Article 2 Studios";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa"
		};
		class textureSources
		{
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins_co.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins2_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\ins\m12_turret_ins3_co.paa"
				};
			};
		};
		vehicleClass="OPTRE_Ins_Vehicle_class";
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_BR";
		faction="OPTRE_Ins";
	};
    // Warthog - Transport
	class OPTRE_M12_ins_APC: OPTRE_M12_Base {
		scope=2;
		scopeCurator=2;
		displayName="M12 APC (Ins)";
		model="\OPTRE_Vehicles\Warthog\M12_INNIE_APC.p3d";
		transportSoldier=8;
		cargoAction[]=
		{
			"passenger_generic01_foldhands"
		};
		side=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		faction="OPTRE_Ins";
		class textureSources
		{
			class Green
			{
				displayName="Green";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\grn_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
				};
			};
			class Sand
			{
				displayName="Sand";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie_co.paa",
					"\OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
				};
			};
			class Guerrilla
			{
				displayName="Guerrilla";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\gen_warthog_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
				};
			};
			class Innie
			{
				displayName="Innie";
				author="Article 2 Studios";
				textures[]=
				{
					"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class CargoGunner_1: NewTurret
			{
				gunnerInAction="passenger_inside_2";
				gunnerAction="";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=9;
				proxyType="CPCargo";
				showAsCargo=1;
				forceHideGunner=1;
				maxElev=30;
				minElev=-20;
				maxTurn=95;
				minTurn=-95;
				animationSourceHatch="cargo_front";
				enabledByAnimationSource="";
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				viewGunnerInExternal=1;
				canHideGunner=1;
				hasGunner=1;
				allowLauncherIn=0;
				allowLauncherOut=0;
				isPersonTurret=2;
				weapons[]={};
				magazines[]={};
				primaryGunner=0;
				primaryObserver=0;
				gunnerOpticsShowCursor=0;
				body="";
				gun="";
				animationSourceBody="";
				animationSourceGun="";
				soundServo[]=
				{
					"",
					"db-50",
					1
				};
				startEngine=0;
				hideWeaponsGunner=0;
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				commanding=-1;
				gunnerOpticsModel="";
				gunnerOutOpticsColor[]={0,0,0,1};
				gunnerForceOptics=0;
				gunnerOutForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsEffect[]={};
				stabilizedInAxes=0;
			};
			class CargoTurret_02: CargoGunner_1
			{
				class TurnIn
				{
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
				};
				gunnerAction="vehicle_turnout_2";
				gunnerInAction="passenger_inside_7";
				canHideGunner=1;
				forceHideGunner=0;
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				allowLauncherIn=0;
				allowLauncherOut=1;
				isPersonTurret=1;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				animationSourceHatch="gunner_move";
				enabledByAnimationSource="gunner_prox_rot";
				gunnerForceOptics=0;
				memoryPointGunnerOptics="";
				selectionFireAnim="";
				commanding=-1;
				gunnerType="OPTRE_Ins_URF_Autorifleman";
				gunnerName="Top Gunner";
				memoryPointsGetInGunner="pos pas1";
				memoryPointsGetInGunnerDir="pos pas1 dir";
				gunnerCompartments="Compartment2";
				proxyIndex=10;
				showAsCargo=1;
				primaryGunner=0;
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\ins\M12HogMaav_extupper_innie2_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa"
		};
	};
    // Drones

    // Other
    class OPTRE_m1087_stallion_cover_unsc; // Non-Threat
    class Tenthed_Stallion_NonThreat : OPTRE_m1087_stallion_cover_unsc {
		displayName = "Stallion";
		author = "10th ODST";
        side = 0;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "Tenthed_UnitFact_Generic";
		editorCategory = "Tenthed_EditorCategory_Generic";
		editorSubcategory = "Tenthed_EditorSubcategories_Generic_NonThreat_Ground";

	};

    // Scorpian Tank
	class OPTRE_M808B_INS: OPTRE_M808B_UNSC {
		crew="OPTRE_Ins_URF_Rifleman_AR";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPTRE_INS";
		displayName="M808B Scorpion MBT (Ins)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_base_ins_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_tur_ins_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\det_3_ins_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_insdecals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\ins\mine_roller_ins_co.paa"
		};
		class textureSources
		{
			class ins
			{
				displayName="Ins";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_base_ins_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_tur_ins_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\det_3_ins_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_insdecals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\Scorp_net_ins_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\ins\mine_roller_ins_co.paa"
				};
			};
		};
	};
    // Mammoth Tank
    class HTNK; // MASCAS
    class Mammoth_Ghex: HTNK {
        side = 0;
		author = "10th ODST";
		displayName = "Mammoth Tank";
		faction = "Tenthed_UnitFact_Generic";
		editorCategory = "Tenthed_EditorCategory_Generic";
		editorSubcategory = "Tenthed_EditorSubcategories_Generic_MASCAS_Ground";

		crew="O_T_crew_F";
		editorPreview="\HTNK\ico\htnk_csatp_editor.jpg";
		hiddenSelections[]= {
			"tex_chassis",
			"tex_tourelle",
			"tex_grilles"
		};
		hiddenSelectionsTextures[]= {
			"HTNK\textures\htnk_chassis_csatp_co.paa",
			"HTNK\textures\htnk_tourelle_csatp_co.paa",
			"HTNK\textures\htnk_grilles_green_co.paa"
		};
	};

    // Air

    // Pelicans
    class OPTRE_Pelican_armed_SOCOM; // MASCAS
	class Tenthed_Pelican_SOCOM_Generic_MASCAS : OPTRE_Pelican_armed_SOCOM {
		displayName = "Pelican SOCOM";
		author = "10th ODST";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        side = 0;
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";

		faction = "Tenthed_UnitFact_Generic";
		editorCategory = "Tenthed_EditorCategory_Generic";
		editorSubcategory = "Tenthed_EditorSubcategories_Generic_MASCAS_Air";

		hiddenSelectionsTextures[] = {
			"\Tenthed_Vehicles\data\Pelican_Variants\pelican_DESERT.paa",
			""
		};
	};
	class OPTRE_Pelican_armed; // Threat
	class OPTRE_Pelican_armed_ins: OPTRE_Pelican_armed {
		author="Article 2 Studios";
		displayName="D77H-TCI/AV Pelican (Ins)";
		side=0;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		hiddenSelectionsTextures[]= {
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa",
			""
		};
		textureList[]= {
			"colorinnie",
			1
		};
	};
	class OPTRE_Pelican_armed_70mm; // MASCAS
	class OPTRE_Pelican_armed_70mm_ins: OPTRE_Pelican_armed_70mm {
		displayName="D77H-TCI/AV Pelican 70mm (Ins)";
		side=0;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		hiddenSelectionsTextures[]= {
			"OPTRE_Vehicles\Pelican\data\PelicanExterior_innie_CO.paa",
			""
		};
		textureList[]= {
			"colorinnie",
			1
		};
	};
    // Hornets
	class OPTRE_UNSC_hornet_ins: OPTRE_UNSC_hornet {
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		side=0;
		displayName="AV-14 Hornet (Innie)";
		hiddenSelectionsTextures[]=
		{
			"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"
		};
		textureList[]=
		{
			"colorinnie",
			1
		};
	};
	class OPTRE_UNSC_hornet_CAS: OPTRE_UNSC_hornet_CAP {
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="AV-14 Hornet (Innie) [CAS]";
	};
    // Falcons
	class OPTRE_ins_falcon;
	class OPTRE_ins_falcon_unarmed: OPTRE_ins_falcon {
		author="Article 2 Studios";
		side=0;
		displayName="UH-144 Falcon (Unarmed) [Ins]";
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Falcon\data\falcon_hull_ins_CO.paa",
			"optre_vehicles\falcon\data\falcon_hullextra_ins_co.paa",
			"optre_vehicles\falcon\data\falcon_wingtips_ins_co.paa",
			"optre_vehicles\falcon\data\falcon_skid_ins_co.paa"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\OPTRE_Vehicles\falcon\FalconPylonPic.paa";
				class pylons
				{
					class WingPylonRight1
					{
						maxweight=560;
						hardpoints[]=
						{
							""
						};
						attachment="";
						bay=-1;
						priority=3;
						UIposition[]={0.34999999,0.1};
						turret[]={};
					};
					class WingPylonLeft1: WingPylonRight1
					{
						mirroredMissilePos=1;
						UIposition[]={0.34999999,0.46700001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Empty";
						attachment[]={};
					};
				};
			};
		};
	};
	class OPTRE_falcon_base;
	class OPTRE_ins_falcon: OPTRE_falcon_base {
		scope=2;
		scopeCurator=2;
		side=0;
		author="Article 2 Studios";
		faction="OPTRE_Ins";
		crew="OPTRE_Ins_URF_Crewman";
		vehicleClass="OPTRE_Ins_Air_class";
		displayName="UH-144 Falcon [Ins]";
		hiddenSelectionsTextures[]= {
			"OPTRE_Vehicles\Falcon\data\falcon_hull_ins_CO.paa",
			"optre_vehicles\falcon\data\falcon_hullextra_ins_co.paa",
			"optre_vehicles\falcon\data\falcon_wingtips_ins_co.paa",
			"optre_vehicles\falcon\data\falcon_skid_ins_co.paa"
		};
		textureList[]= {
			"ins",
			1
		};
		class ins {
			displayName="Innies";
			author="Article 2 Studios";
			textures[]= {
				"OPTRE_Vehicles\Falcon\data\falcon_hull_ins_CO.paa",
				"optre_vehicles\falcon\data\falcon_hullextra_ins_co.paa",
				"optre_vehicles\falcon\data\falcon_wingtips_ins_co.paa",
				"optre_vehicles\falcon\data\falcon_skid_ins_co.paa"
			};
			factions[]= {
				"OPTRE_Ins"
			};
		};
	};
	// Nightingale
	class TCF_URF_Nightingale: TCF_Nightingale_base {
		scope=2;
		scopeCurator=2;
		side=0;
		vehicleClass="Air";
		crew="TCF_URF_Pilot";
		displayName="EV-41 Nightingale";
		editorCategory="TCF_URF";
		editorSubcategory="TCF_Vehicle_Rotary";
		class textureSources
		{
			class TCF_URA_desert
			{
				author="Baseplate";
				displayName="Desert";
				textures[]=
				{
					"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_URFD_CO.paa"
				};
			};
			class TCF_URA_woodland
			{
				author="Baseplate";
				displayName="Woodland";
				textures[]=
				{
					"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_URF_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"TCF_Vehicles\EV_41_Nightingale\data\TCF_EV41_URF_CO.paa"
		};
		textureList[]=
		{
			"TCF_URA_desert",
			1,
			"TCF_URA_woodland",
			1
		};
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
	};
};