class CfgPatches {
    class Tenthed_Units_Astra_Armor {
        author = "Akira";
        name = "10th ODST: United Astra Federation Armor";
        requiredVersion=0.1;
        requiredAddons[] = {
            "Tenthed_core",
            "Tenthed_Units_Astra_Base"
        };
        weapons[] = {};
        units[] = {};
    };
};
class cfgWeapons {
	class HeadgearItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class NVGoggles;
	class HitPoints;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};

    // [10th] United Astra Federation

    // Helmets
    // OPTRE_FC_VX19_Helmet_Urban
    // OPTRE_UNSC_Recon_Helmet
    // OPTRE_UNSC_CH252_Helmet2_Vacuum_URB_MED
    // OPTRE_UNSC_CH252A_Black_Helmet

    // Armor
	class Tenthed_Astra_Vest_Base: V_PlateCarrier1_rgr {
		scope=0;
		scopeArsenal=0;
		author="";
		displayName="[10th] Base Astra Armor Vest";
		model="";
		picture="";
		hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem {
			vestType="Rebreather";
            hiddenSelections[]= {
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
            };
            hiddenSelectionsTextures[]= {
                "TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_2.paa",
                "TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL.paa",
                "TCF_EQUIPMENT\Vests\Misc\data\M52A_WDL_3.paa",
                "optre_unsc_units\army\data\ghillie_woodland_co.paa",
                "optre_unsc_units\army\data\odst_armor_co.paa"
            };
			uniformModel="";
			containerClass="Supply250";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 110;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 110;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 110;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 110;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 110;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 110;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 110;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 110;
					passThrough = 0.1;
				};
			};
		};
	};
    // VES_M52A_URB_Rifleman_D

	class VES_M52A_URB_Rifleman_D: Tenthed_Astra_Vest_Base
	{
        scope=2;
		scopeArsenal=2;
		displayName="[FZ] M52A (Rifleman)(D) Urban";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_R_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    // VES_M52A_URB_Grenadier_B
	class VES_M52A_URB_Grenadier_B: Tenthed_Astra_Vest_Base
	{
        scope=2;
		scopeArsenal=2;
		displayName="[FZ] M52A (Grenadier)(B) Urban";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    // VES_M52A_URB_Corpsman_B
	class VES_M52A_URB_Corpsman_B: Tenthed_Astra_Vest_Base
	{
        scope=2;
		scopeArsenal=2;
		displayName="[FZ] M52A (Corpsman)(B) Urban";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    // VES_M52A_URB_Security_B
	class VES_M52A_URB_Security_B: Tenthed_Astra_Vest_Base
	{
        scope=2;
		scopeArsenal=2;
		displayName="[FZ] M52A (Security)(B) Urban";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};

};