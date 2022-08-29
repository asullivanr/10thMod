class CfgPatches {
	class Tenthed_Vehicle {
		author = "Silver, Kodiak, Crow, Akira";
		name = "10th ODST: Vehicle Retextures";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core"
		};
		weapons[] = {};
	};
};
class CfgVehicles {
	class VES_D77HTCI_A;
	class OPTRE_UNSC_hornet_green_CAP;
	class OPTRE_M808S;
	class OPTRE_M413_MGS_UNSC_tan;
	class OPTRE_m1087_stallion_cover_unsc;

	class Tenthed_Pelican : VES_D77HTCI_A {
		  displayName = "10th_Pelican";
		  author = "PocketsTheWizard";
		  scope = 2;
		  scopeCurator = 2;
		  hiddenSelectionsTextures[] =
		  {
			  "10th_AC\data\vehicles\10th_PelicanExterior.paa",
			  ""
		  };
	};
	class Archangel_Pelican : VES_D77HTCI_A {
		displayName = "Archangel_Pelican";
		author = "PocketsTheWizard";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\archanglePelican.paa",
			""
		};
	};
	class Dodo_Pelican : VES_D77HTCI_A {
		displayName = "DodoAirLines";
		author = "PocketsTheWizard";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\DodoPelican.paa",
			""
		};
	};
	class beeHornet : OPTRE_UNSC_hornet_green_CAP {
		scope = 2;
		scopeCurator = 2;
		author = "PcoketsTheWizard";
		displayName = "b(ee)Hornet";
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\beeHornet.paa"
		};
	};
	class ZakuHornet1 : OPTRE_UNSC_hornet_green_CAP {
		scope = 2;
		scopeCurator = 2;
		author = "PcoketsTheWizard";
		displayName = "Red Comet Hornet";
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\ZakuHornet.paa"
		};
	};
	class ARES_Tank : OPTRE_M808S {
		scope = 2;
		scopeCurator = 2;
		author = "PcoketsTheWizard";
		displayName = "AresScorpion";
		magazines[] =
		{
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
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\body_lopo_DR.paa",
			"10th_AC\data\vehicles\cing_dv_m808s_DR.paa",
			"10th_AC\data\vehicles\cing_rt_m808s_DR.paa",
			"10th_AC\data\vehicles\turretbase_lopo_DR.paa",
			"10th_AC\data\vehicles\turrethead_lopo_DR.paa",
			"10th_AC\data\vehicles\turretguns_lopo_DR.paa",
			"10th_AC\data\vehicles\ghammer_lopo_DR.paa",
		};
	};
	class ARES_MGS : OPTRE_M413_MGS_UNSC_tan {
		displayName = "AresMGS";
		author = "PocketsTheWizard";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\Bison_Body_tan_CO.paa",
			"10th_AC\data\vehicles\Bison_Misc_tan_CO.paa",
			"10th_AC\data\vehicles\Bison_WheelsCannon_tan_CO.paa",
			"10th_AC\data\vehicles\Bison_Seats_CO.paa",
			"10th_AC\data\vehicles\Bison_Interior_CO.paa",
			"10th_AC\data\vehicles\Bison_MFCDScreens_CO.paa",
			"10th_AC\data\vehicles\Bison_90mm_tan_CO.paa",
		};
	};
	class Zeus_Stallion : OPTRE_m1087_stallion_cover_unsc {
		displayName = "Zeus Stallion";
		author = "Kodiak";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[] =
		{
			"10th_AC\data\vehicles\zeusstallion.paa",
			"10th_AC\data\vehicles\Truck_ext02_standard_co.paa",
			"10th_AC\data\vehicles\Truck_cargo_standard_co.paa",
			"10th_AC\data\vehicles\Truck_cover_standard_co.paa",
		};
	};
}