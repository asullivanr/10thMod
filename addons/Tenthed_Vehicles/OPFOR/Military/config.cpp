class CfgPatches {
	class Tenthed_OPFOR_Vehicles_Military {
		author = "Akira" ;
		name = "10th ODST: Vehicles";
		requiredAddons[] = {
			"Tenthed_core",
			"OPTRE_Core" 
		};
		weapons[] = {};
		units[] = {};
	};
};

class CfgVehicles {
// begin


	class O_Boat_Armed_01_hmg_F;
	class Tenthed_O_Boat_Armed_01_hmg_F : O_Boat_Armed_01_hmg_F {
		//editorCategory = "Tenthed_EditorCategory_Main"; // holder
		//editorSubcategory = "Tenthed_EditorSubcategory_Objects_Falcons"; // holder
		faction = "Tenthed_UnitFact_Military_Insurrection";
	};

	class O_Boat_Transport_01_F;
	class Tenthed_O_Boat_Transport_01_F : O_Boat_Transport_01_F {
		faction = "Tenthed_UnitFact_Military_Insurrection";
    };
    
	class O_Lifeboat;
    class Tenthed_O_Lifeboat : O_Lifeboat {
		faction = "Tenthed_UnitFact_Military_Insurrection";
    };

	class O_Truck_03_transport_F;
    class Tenthed_O_Truck_03_transport_F : O_Truck_03_transport_F {
		faction = "Tenthed_UnitFact_Military_Insurrection";
    };

	class O_Truck_03_covered_F;
    class Tenthed_O_Truck_03_covered_F : O_Truck_03_covered_F {};

	class O_UGV_01_rcws_F;
    class Tenthed_O_UGV_01_rcws_F : O_UGV_01_rcws_F {
		author="Baseplate";
		displayname="RCWS-12 Hyena";
		editorPreview="\TCF_MISC\EditorPreviews\TCF_Hyena_Frieden.jpg";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		//crew="B_UAV_AI";
		faction="Tenthed_UnitFact_Military_Insurrection";
		side=0;
		hiddenSelectionsTextures[]= {
			"TCF_OPFOR\Frieden\Vehicles\Data\Stomper\UGV_01_ext_Frieden_co.paa",
			"TCF_OPFOR\Frieden\Vehicles\Data\Stomper\UGV_01_int_Frieden_co.paa",
			"TCF_OPFOR\Frieden\Vehicles\Data\Turret_Frieden.paa"
		};
		//editorCategory="TCF_Frieden";
	};

	class O_Plane_Fighter_02_F;
    class Tenthed_O_Plane_Fighter_02_F : O_Plane_Fighter_02_F {};

	class O_SDV_01_F;
    class Tenthed_O_SDV_01_F : O_SDV_01_F {};
    
	// Mammoth Tanks
	class HTNK_SLA;
	class HTNK_Grey;
	class HTNK_Desert;
	class HTNK_Snow;
	class HTNK_Green;

	class O_HMG_01_high_F;
	class Tenthed_O_HMG_01_high_F : O_HMG_01_high_F {};

	class O_HMG_01_F;
	class Tenthed_O_HMG_01_F : O_HMG_01_F {};

	class O_Mortar_01_F;
	class Tenthed_O_Mortar_01_F : O_Mortar_01_F {};

	class optre_catfish_ins_mg_f;
	class Tenthed_optre_catfish_ins_mg_f : optre_catfish_ins_mg_f {};

	class optre_catfish_ins_unarmed_f;
	class Tenthed_optre_catfish_ins_unarmed_f : optre_catfish_ins_unarmed_f {};

	class OPTRE_M12_ins_MED;
	class Tenthed_OPTRE_M12_ins_MED : OPTRE_M12_ins_MED {};

	class OPTRE_M12_ins_APC;
	class Tenthed_OPTRE_M12_ins_APC : OPTRE_M12_ins_APC {};

	class OPTRE_M12_LRV_ins;
	class Tenthed_OPTRE_M12_LRV_ins : OPTRE_M12_LRV_ins {};
	
	class OPTRE_M12_TD_ins;
	class Tenthed_OPTRE_M12_TD_ins : OPTRE_M12_TD_ins {};

	class VES_M19_URF_HMG;
	class Tenthed_VES_M19_URF_HMG : VES_M19_URF_HMG {};

	class TCF_URF_Nightingale;
	class Tenthed_TCF_URF_Nightingale : TCF_URF_Nightingale {};

	// Pelicans
	class OPTRE_Pelican_armed_ins;
	class Tenthed_OPTRE_Pelican_armed_ins : OPTRE_Pelican_armed_ins {};

	class OPTRE_Pelican_armed_70mm_ins;
	class Tenthed_OPTRE_Pelican_armed_70mm_ins : OPTRE_Pelican_armed_70mm_ins {};

	class OPTRE_Pelican_unarmed_ins;
	class Tenthed_OPTRE_Pelican_unarmed_ins : OPTRE_Pelican_unarmed_ins {};
	
	// Falcon
	class OPTRE_ins_falcon;
	class Tenthed_OPTRE_ins_falcon : OPTRE_ins_falcon {};

	class OPTRE_ins_falcon_unarmed;
	class Tenthed_OPTRE_ins_falcon_unarmed : OPTRE_ins_falcon_unarmed {};

	class OPTRE_Falconagl_02;
	class Tenthed_OPTRE_Falconagl_02 : OPTRE_Falconagl_02 {};

	class OPTRE_M494_INS;
	class Tenthed_OPTRE_M494_INS : OPTRE_M494_INS {};

	class OPTRE_M808B_INS;
	class Tenthed_OPTRE_M808B_INS : OPTRE_M808B_INS {};

	class OPTRE_Static_FG75;
	class Tenthed_OPTRE_Static_FG75 : OPTRE_Static_FG75 {};

	class OPTRE_Static_M41_Ins;
	class Tenthed_OPTRE_Static_M41_Ins : OPTRE_Static_M41_Ins {};

	class OPTRE_Static_ATGM_Ins;
	class Tenthed_OPTRE_Static_ATGM_Ins : OPTRE_Static_ATGM_Ins {};

	class TCF_Arkhangelsk_Koslovic;
	class Tenthed_TCF_Arkhangelsk_Koslovic : TCF_Arkhangelsk_Koslovic {};

	class TCF_Ural_MLRS_Koslovic;
	class Tenthed_TCF_Ural_MLRS_Koslovic : TCF_Ural_MLRS_Koslovic {};

	class OPTRE_tarantula_02;
	class Tenthed_OPTRE_tarantula_02 : OPTRE_tarantula_02 {};

	class SC_SaurusAPC_AA_SE;
	class Tenthed_SC_SaurusAPC_AA_SE : SC_SaurusAPC_AA_SE {};

	class LM_OPCAN_M92_BOLT_URA;
	class Tenthed_LM_OPCAN_M92_BOLT_URA : LM_OPCAN_M92_BOLT_URA {};
	
	class FRI_RAD_Regular;
	class Tenthed_FRI_RAD_Regular : FRI_RAD_Regular {};

	class TCF_M247H_FRI;
	class Tenthed_TCF_M247H_FRI : TCF_M247H_FRI {};

	class TCF_M92_BOLT_FRI;
	class Tenthed_TCF_M92_BOLT_FRI : TCF_M92_BOLT_FRI {};

	class FRI_SAM_Regular;
	class Tenthed_FRI_SAM_Regular : FRI_SAM_Regular {};

	class O_G_HMG_02_F;
	class Tenthed_O_G_HMG_02_F : O_G_HMG_02_F {};

	class O_G_HMG_02_high_F;
	class Tenthed_O_G_HMG_02_high_F : O_G_HMG_02_high_F {};

	class O_G_Mortar_01_F;
	class Tenthed_O_G_Mortar_01_F : O_G_Mortar_01_F {};

	class TCF_M48_Buzz_FRI;
	class Tenthed_TCF_M48_Buzz_FRI : TCF_M48_Buzz_FRI {};

	class TCF_Witherwing_Frieden;
	class Tenthed_TCF_Witherwing_Frieden : TCF_Witherwing_Frieden {};

	class OPTRE_YSS_1000_A_ins;
	class Tenthed_OPTRE_YSS_1000_A_ins : OPTRE_YSS_1000_A_ins {};

	class OPTRE_bayonet_02;
	class Tenthed_OPTRE_bayonet_02 : OPTRE_bayonet_02 {};

	class TCF_gladius_02;
	class Tenthed_TCF_gladius_02 : TCF_gladius_02 {};
	
	class TCF_gladius_02L;
	class Tenthed_TCF_gladius_02L : TCF_gladius_02L {};

	class TCF_D81LRTA;
	class Tenthed_TCF_D81LRTA : TCF_D81LRTA {};

	class TCF_D81LRTI;
	class Tenthed_TCF_D81LRTI : TCF_D81LRTI {};

	class TCF_D56I;
	class Tenthed_TCF_D56I : TCF_D56I {};

	class TCF_D56V;
	class Tenthed_TCF_D56V : TCF_D56V {};

	class OPTRE_UNSC_hornet_ins;
	class Tenthed_OPTRE_UNSC_hornet_ins : OPTRE_UNSC_hornet_ins {};

	class VES_MQ221_URF;
	class Tenthed_VES_MQ221_URF : VES_MQ221_URF {};

	class LM_OPCAN_M350_INS_WDL;
	class Tenthed_LM_OPCAN_M350_INS_WDL : LM_OPCAN_M350_INS_WDL {};

	class TCF_Otakar_Koslovic;
	class Tenthed_TCF_Otakar_Koslovic : TCF_Otakar_Koslovic {};

	class TCF_Bastardsword;
	class Tenthed_TCF_Bastardsword : TCF_Bastardsword {};

	class OPTRE_m1015_mule_ins;
	class Tenthed_OPTRE_m1015_mule_ins : OPTRE_m1015_mule_ins {};

	class OPTRE_m1015_mule_ammo_ins;
	class Tenthed_OPTRE_m1015_mule_ammo_ins : OPTRE_m1015_mule_ammo_ins {};

	class OPTRE_m1015_mule_cover_ins;
	class Tenthed_OPTRE_m1015_mule_cover_ins : OPTRE_m1015_mule_cover_ins {};

	class OPTRE_m1015_mule_fuel_ins;
	class Tenthed_OPTRE_m1015_mule_fuel_ins : OPTRE_m1015_mule_fuel_ins {};

	class OPTRE_m1015_mule_medical_ins;
	class Tenthed_OPTRE_m1015_mule_medical_ins : OPTRE_m1015_mule_medical_ins {};

	class O_Plane_CAS_02_dynamicLoadout_F;
	class Tenthed_O_Plane_CAS_02_dynamicLoadout_F : O_Plane_CAS_02_dynamicLoadout_F {};



// end
};