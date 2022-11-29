class CfgPatches {
    class Tenthed_objects {
        author = "Akira";
        name = "10th ODST: Objects";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {
			"Tenthed_FlagStand",
			"Tenthed_ODST_Flag",
			"Tenthed_ODST_FlagPole"
		};
    };
};
class CfgVehicles {
	class Flagpole_F;
	class Sign_F;
	class Flag_White_F;

	class Tenthed_FlagBase : Flagpole_F {
		model = "\OPTRE_Misc\Multiplayer\CTF_flag_pole";
		armor = 999999;
		armorStructural = 999;
		scope = 1;
		scopeCurator = 1;
		displayName = "[10th] Flag (Base)";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Military";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"optre_misc\multiplayer\data\flag_guidon_whiteunsc_co.paa"
		};
		hiddenSelectionsMaterials[] = {
			"optre_misc\multiplayer\data\CTF_flag.rvmat"
		};
	};
	class Tenthed_FlagStand : Sign_F {
		model = "\OPTRE_Misc\Multiplayer\CTF_flag_stand";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Flag (Stand)";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Military";
	};
	class Tenthed_ODST_Flag : Tenthed_FlagBase {
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] ODST Logo Flag";
		hiddenSelections[] = {
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"Tenthed_Objects\data\flag_guidon_10thODST_co.paa"
		};
	};
	class Tenthed_ODST_FlagPole: Flag_White_F
	{
		author="Akira";
		scope = 2;
		scopeCurator = 2;
		displayName = "[10th] Flag (Pole)";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Military";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\Tenthed_Objects\data\flag_10thODST_co.paa'";
		};
	};
};
