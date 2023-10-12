class CfgPatches {
	class Tenthed_Armor_Misriah_Named {
		author = "Akira, Tiny";
		name = "10th Armor - Misriah Named";
		requiredAddons[] = {
			"MA_Armor",
			"Tenthed_Armor_Misriah_Base"
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
	class ItemInfo;

	class Tenthed_M56SR_Helmet;
	class Tenthed_M56A_Helmet;
	class Tenthed_M56G_Helmet;
	class Tenthed_M56E_Helmet;
	class Tenthed_M56_Scout_Helmet;

	class Tenthed_Vest_Base;

	// Akira
	#include "data\Akira\armor.cpp"

	// Tiny
	#include "data\Tiny\armor.cpp"

	// Lion
	#include "data\Lion\armor.cpp"

	// Nova
	#include "data\Nova\armor.cpp"

	// Villainess
	#include "data\Villainess\armor.cpp"
	
	// Void
	#include "data\Void\armor.cpp"

	// Mac
	#include "data\Mac\armor.cpp"
	
	// Bbstine
	#include "data\Bbstine\armor.cpp"

	// Flipper
	#include "data\Flipper\armor.cpp"

	// Rambler
	#include "data\Rambler\armor.cpp"

	// Slim
	#include "data\Slim\armor.cpp"

	// Boomstick
	#include "data\Boomstick\armor.cpp"
    
    // Blindwolf
	#include "data\Blindwolf\armor.cpp"

	// Jad
	#include "data\Jad\armor.cpp"
//
	// Clem
	#include "data\Clem\armor.cpp"

	// Cookie
	#include "data\Cookie\armor.cpp"

	// Dovah
	#include "data\Dovah\armor.cpp"

	// Drake
	#include "data\Drake\armor.cpp"

	// Gutts
	#include "data\Gutts\armor.cpp"

	// HardDrop
	#include "data\HardDrop\armor.cpp"

	// Hatchet
	#include "data\Hatchet\armor.cpp"

	// Leek
	#include "data\Leek\armor.cpp"

	// Nobody
	#include "data\Nobody\armor.cpp"

	// Seagull
	#include "data\Seagull\armor.cpp"

	// Som
	#include "data\Som\armor.cpp"
//
	// Cossack
	#include "data\Cossack\armor.cpp"

	// Evader
	#include "data\Evader\armor.cpp"

	// Freedom
	#include "data\Freedom\armor.cpp"

	// Goldy
	#include "data\Goldy\armor.cpp"

	// Grimgnaw
	#include "data\Grimgnaw\armor.cpp"

	// Hodge
	#include "data\Hodge\armor.cpp"

	// Infra
	#include "data\Infra\armor.cpp"

	// McInnes
	#include "data\McInnes\armor.cpp"

	// Meatshield
	#include "data\Meatshield\armor.cpp"

	// Tiger
	#include "data\Tiger\armor.cpp"
};