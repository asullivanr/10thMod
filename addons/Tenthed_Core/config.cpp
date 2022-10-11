class CfgPatches {
    class Tenthed_core {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Core";
        requiredAddons[] = {
            "OPTRE_Core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses {
    class Tenthed_UnitFact_Main {
        displayname = "[10th] ODST";
        priority = 1;
        side = 1;
        icon = "\Tenthed_Core\data\logo.paa";
        flag = "\Tenthed_Core\data\logo.paa";
    };
};
class CfgEditorCategories {
    class Tenthed_EditorCategory_Objects {
        displayName = "[10th] ODST";
    };
    class Tenthed_EditorCategory_Turrets {
        displayName = "[10th] Turrets";
    };
    class Tenthed_EditorCategory_Items {
        displayName = "[10th] Items";
    };
};
class CfgEditorSubcategories {
    class Tenthed_EditorSubcategory_Objects_Military {
        displayName = "Military";
    };
    class Tenthed_EditorSubcategory_Objects_Banners {
        displayName = "Banners";
    };
    class Tenthed_EditorSubcategory_Objects_Weapons {
        displayName = "Weapons";
    };
    class Tenthed_EditorSubcategory_Objects_Backpacks {
        displayName = "Backpacks";
    };
    class Tenthed_EditorSubcategory_Objects_Turrets {
        displayName = "Turrets";
    };
    class Tenthed_EditorSubcategory_Objects_Supplies {
        displayName = "Supplies";
    };
    class Tenthed_EditorSubcategory_Objects_Vehicles {
        displayName = "Vehicles";
    };
};
