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
    class Tenthed_O_UGV_01_rcws_F : O_UGV_01_rcws_F {};

	class O_Plane_Fighter_02_F;
    class Tenthed_O_Plane_Fighter_02_F : O_Plane_Fighter_02_F {};

	class O_SDV_01_F;
    class Tenthed_O_SDV_01_F : O_SDV_01_F {};
    
	class HTNK_SLA;
	class HTNK_Grey;
	class HTNK_Desert;
	class HTNK_Snow;
	class HTNK_Green;
	class O_HMG_01_high_F;
	class O_HMG_01_F;
	class O_Mortar_01_F;
	class optre_catfish_ins_mg_f;
	class optre_catfish_ins_unarmed_f;
	class OPTRE_M12_ins_MED;
	class OPTRE_M12_ins_APC;
	class OPTRE_M12_LRV_ins;
	class OPTRE_M12_TD_ins;
	class VES_M19_URF_HMG;
	class TCF_URF_Nightingale;
	class OPTRE_Pelican_armed_ins;
	class OPTRE_Pelican_armed_70mm_ins;
	class OPTRE_ins_falcon;
	class OPTRE_ins_falcon_unarmed;
	class OPTRE_Falconagl_02;
	class OPTRE_M494_INS;
	class OPTRE_M808B_INS;
	class OPTRE_Static_FG75;
	class OPTRE_Static_M41_Ins;
	class OPTRE_Static_ATGM_Ins;
	class TCF_Arkhangelsk_Koslovic;
	class TCF_Ural_MLRS_Koslovic;
	class OPTRE_tarantula_02;
	class SC_SaurusAPC_AA_SE;
	class LM_OPCAN_M92_BOLT_URA;
	class FRI_RAD_Regular;
	class TCF_M247H_FRI;
	class TCF_M92_BOLT_FRI;
	class FRI_SAM_Regular;
	class O_G_HMG_02_F;
	class O_G_HMG_02_high_F;
	class O_G_Mortar_01_F;
	class TCF_M48_Buzz_FRI;
	class TCF_Witherwing_Frieden;
	class OPTRE_YSS_1000_A_ins;
	class OPTRE_bayonet_02;
	class TCF_gladius_02;
	class TCF_gladius_02L;
	class TCF_D81LRTA;
	class TCF_D81LRTI;
	class TCF_D56I;
	class TCF_D56V;
	class OPTRE_UNSC_hornet_ins;
	class VES_MQ221_URF;
	class LM_OPCAN_M350_INS_WDL;
	class TCF_Otakar_Koslovic;
	class TCF_Bastardsword;
	class OPTRE_m1015_mule_ins;
	class OPTRE_m1015_mule_ammo_ins;
	class OPTRE_m1015_mule_cover_ins;
	class OPTRE_m1015_mule_fuel_ins;
	class OPTRE_m1015_mule_medical_ins;
	class O_Plane_CAS_02_dynamicLoadout_F;
	class OPTRE_Pelican_unarmed_ins;



// end
};