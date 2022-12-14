/// Magazines macros definition ///

#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches {
    class Tenthed_Units {
        author = "Akira";
        name = "10th ODST: Units";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};

/// Sample character config ///
class CfgVehicles		// Character classes are defined under cfgVehicles.
{
	class B_Soldier_base_F;					// For inheritance to work, the base class has to be defined.
	class B_soldier_new : B_Soldier_base_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		author = "Splendid Modder";			// The name of the author of the asset, which is displayed in the editor.
		scope = 2;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
		displayName = "New Soldier";		// The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
		uniformClass = "U_B_soldier_new";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"camo"};								// List of model selections which can be changed with hiddenSelectionTextures[]
																	// and hiddenSelectionMaterials[] properties. If empty, model textures are used.
		hiddenSelectionsTextures[] = {"\A3\Characters_F_New\BLUFOR\Data\b_soldier_new.paa"};	// The textures for the selections defined above.
																								// If empty, no texture is used.
		canDeactivateMines = true;				// Can this character deactivate mines?
		engineer = true;						// Can this character repair vehicles?
		attendant = 1;							// Can this character heal soldiers?
		icon = "iconManEngineer";				// If a character has a special role, a special icon shall be used.
		picture = "pictureRepair";				// The same as above, but for the squad picture.
		backpack = "B_Kitbag_mcamo_Eng";		// Which backpack the character is wearing.
		weapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {MAG_10(30Rnd_65x39_caseless_mag),MAG_3(16Rnd_9x21_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)}; // What ammunition the character has.
		respawnMagazines[] = {MAG_10(30Rnd_65x39_caseless_mag),MAG_3(16Rnd_9x21_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)}; // What ammunition the character respawns with.
		linkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles}; // Which items the character has.
		respawnLinkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles}; // Which items the character respawns with.
	};
};

/// Uniform config ///
class CfgWeapons
{
	class UniformItem;
	class U_B_soldier_new : Uniform_Base
	{
		author = "Splendid Modder";
		scope = 2;
		displayName = "New Uniform";
		picture = "\A3\characters_f\data\ui\icon_u_b_soldier_new_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_New\BLUFOR\Data\b_soldier_new.paa"};
			
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = B_soldier_new;
			containerClass = Supply40;
			mass = 40;
		};
	};
};