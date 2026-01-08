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
		displayName = "Trigger CerealBox";
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

	class Tenthed_CerealBox_TriggerCinemaBorders1 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Cinema Borders, 1";
	};
	class Tenthed_CerealBox_TriggerCinemaBorders2 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Cinema Borders, 2";
	};
	class Tenthed_CerealBox_TriggerCinemaBorders3 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Cinema Borders, 3";
	};
	class Tenthed_CerealBox_TriggerCinemaBorders4 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Cinema Borders, 4";
	};
	class Tenthed_CerealBox_TriggerCinemaBorders5 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Cinema Borders, 5";
	};

	class Tenthed_CerealBox_TriggerPhase1 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Phase 1";
	};
	class Tenthed_CerealBox_TriggerPhase2 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Phase 2";
	};
	class Tenthed_CerealBox_TriggerPhase3 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Phase 3";
	};
	class Tenthed_CerealBox_TriggerPhase4 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Phase 4";
	};
	class Tenthed_CerealBox_TriggerPhase5 : Tenthed_CerealBox_Base {
		displayName = "Trigger: Phase 5";
	};
};
