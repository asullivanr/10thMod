class CfgPatches {
    class Tenthed_eden_zeus_objects {
        author = "Akira";
        name = "10th ODST: Eden and Zeus objects";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = { };
    };
};
class CfgVehicles {

	class Land_CerealsBox_F;
	class Tenthed_CerealBox_Base : Land_CerealsBox_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "ODST CerealBox";
		editorCategory = "Tenthed_EditorCategory_Objects";
		editorSubcategory = "Tenthed_EditorSubcategory_Objects_Zeus";
	};

	class Tenthed_CerealBox_TriggerOn : Tenthed_CerealBox_Base {
		displayName = "Trigger Enable: CerealBox";
	};
	class Tenthed_CerealBox_TriggerOff : Tenthed_CerealBox_Base {
		displayName = "Trigger Disable: CerealBox";
	};

	class Tenthed_CerealBox_TriggerOnAirfield : Tenthed_CerealBox_Base {
		displayName = "Trigger Enable: Airfield";
	};
	class Tenthed_CerealBox_TriggerOffAirfield : Tenthed_CerealBox_Base {
		displayName = "Trigger Disable: Airfield";
	};

	class Tenthed_CerealBox_TriggerOnAA : Tenthed_CerealBox_Base {
		displayName = "Trigger Enable: AA System";
	};
	class Tenthed_CerealBox_TriggerOffAA : Tenthed_CerealBox_Base {
		displayName = "Trigger Disable: AA System";
	};
};
