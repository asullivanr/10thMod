class CfgPatches {
    class Tenthed_objects {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Objects";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgVehicles {
	class Strategic;
	class Tenthed_Bunker_base : Strategic {
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "Tenthed_Bunker_base";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		editorCategory = "EdCat_Structures_Altis";
		editorSubcategory = "EdSubcat_Military";
		vehicleClass = "Structures_Military";
		destrType = "DestructBuilding";
		accuracy = 1000;
		armor = 1000; // Default: 500
		class DestructionEffects {};
	};
	class Tenthed_BagBunker_Large_F : Tenthed_Bunker_base {
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 12.17;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.88999999;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BagBunker_Large_F.jpg";
		_generalMacro = "Tenthed_BagBunker_Large_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_BagBunker_Large_F0";
		model = "\A3\Structures_F\Mil\BagBunker\BagBunker_Large_F.p3d";
		icon = "iconObject_1x1";
		editorCategory = "EdCat_Structures_Altis";
	};
	class Tenthed_BagBunker_Small_F : Tenthed_Bunker_base {
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 5.6900001;
		class SimpleObject {
			eden = 0;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.96600002;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BagBunker_Small_F.jpg";
		_generalMacro = "Tenthed_BagBunker_Small_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_Land_BagBunker_Small_F0";
		model = "\A3\Structures_F\Mil\BagBunker\BagBunker_Small_F.p3d";
		icon = "iconObject_1x1";
		editorCategory = "EdCat_Structures_Altis";
	};
};
