class CfgPatches {
    class Tenthed_weapons {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Weapons";
        requiredAddons[] = {
            "Tenthed_core",
			"sc_weapons_2"
        };
        weapons[] = {};
        units[] = {};
    };
};

class asdg_MuzzleSlot_338;
class asdg_OpticRail1913;

//class asdg_OpticRail;
class asdg_UnderSlot;
//class asdg_MuzzleSlot;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class UnderBarrelSlot;

class CfgWeapons {
	class SC_Rifle_PKMP;

	class Tenthed_SC_Rifle_PKMP : SC_Rifle_PKMP {
		scope = 2;
		author = "Scion Conflict Mod Team";
		maxZeroing = 1000;
		displayName = "[10th] PKMP";
		descriptionshort = "[10th] PKMP - Heavy Machine Gun";
		model = "\sc_weapons_2\data\pkmp\pkmp.p3d";
		magazines[] = {
			"Tenthed_SC_200Rnd_338_Mag"
		};
		reloadAction = "GestureReloadSPAR_02";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"
		};
		drySound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",
			0.60000002,
			1,
			10
		};
		reloadMagazineSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[] = {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",
			0.69999999,
			1,
			5
		};
		picture = "\sc_weapons_2\data\icons\icon_pkmp_ca.paa";
		inertia = 1;
		recoil = "recoil_mmg_01";
		modes[] = {
			"FullAutoFast",
			"FullAutoSlow"
		};
		hiddenSelections[] = {
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"sc_weapons_2\data\pkmp\textures\body_co.paa",
			"sc_weapons_2\data\pkmp\textures\mag_co.paa"
		};

		mrbs = 3000;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 657.86;
		ACE_Overheating_allowSwapBarrel = 1;

		class FullAutoSlow : Mode_FullAuto {
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {
					"MMG02_Shot_SoundSet",
					"MMG02_Tail_SoundSet",
					"MMG02_InteriorTail_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType {
				soundsetshot[] = {
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			dispersion = 0.00122;
			reloadTime = 0.15000001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAutoFast : FullAutoSlow {
			reloadTime = 0.075000003;
			textureType = "fastAuto";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 140;
			allowedSlots[] = { 901 };
			class MuzzleSlot : asdg_MuzzleSlot_338 {};
			class CowsSlot : asdg_OpticRail1913 {};
			class UnderBarrelSlot : asdg_UnderSlot {};
		};
	};
}