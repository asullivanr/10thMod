class CfgPatches {
    class Tenthed_ArcherMissile {
        author = "Akira";
        name = "10th ODST: ArcherMissile";
        requiredAddons[] = {
            "Tenthed_core",
        };
        weapons[] = {};
        units[] = {};
    };
};

#include "style.hpp"

class CfgFunctions
{
	class Tenthed
	{
		class Main
		{
			file = "\Tenthed_Functions\ArcherMissile\functions";
			class predator {};
			class predatorInit {
				postInit = 1;
			};
		};
	};
};

class CfgWeapons{
    class ItemCore;
    class ToolKitItem;

    // possible fix
    //class ACE_SelfActions;
    //class ACE_Equipment;


	class ArcherMissileTablet : ItemCore
	{
		author="Akira";
		_generalMacro="ToolKit";
		scope=2;
		displayName="[10th] ArcherMissileTablet";
		descriptionShort="ArcherMissileTablet gives ability to call archer missile strikes onto targets.";
		picture="\A3\Weapons_F\Items\data\UI\gear_Toolkit_CA.paa";
		model="\A3\Weapons_F\Items\Toolkit";
		class ItemInfo: ToolKitItem
		{
			mass=80;
			uniformModel="\A3\Weapons_F\Items\Toolkit";
		};
        class ACE_SelfActions {
            class ACE_Equipment {
                class Tenthed_ArcherMissile_Term {
                    displayName = "Archer Missile on Self";
                    condition = "_player";
                    exceptions[] = {};
                    statement = "this call Tenthed_fnc_predator}]";
                };
                class Tenthed_ArcherMissile_Map {
                    displayName = "Archer Missile on Map location";
                    condition = "true";
                    exceptions[] = {};
                    statement = "this ['Launch',['fromMap']] call Tenthed_fnc_predator}]";
                };
            };
        };  
	};
}
