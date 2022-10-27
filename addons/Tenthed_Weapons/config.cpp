class CfgPatches {
    class Tenthed_weapons {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Weapons";
        requiredAddons[] = {
            "Tenthed_core",
			"sc_weapons_2"
        };
        weapons[] = {
			"Tenthed_SC_Rifle_PKMP",
			"Tenthed_Etilka"
		};
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

	class OPTRE_M247H_Etilka;
	class Tenthed_Etilka : OPTRE_M247H_Etilka {
		dlc = "OPTRE";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[10th] M247H HMG 'Etilka'";
		//descriptionShort = "Etilka was a specially-modified M247H machine gun employed by SPARTAN-II commando Jorge-052";
		descriptionShort = "";
		model = "\OPTRE_Weapons\Etilka\M247H_Jorge.p3d";
		cursor = "OPTRE_M41";
		magazines[] =
		{
			"Tenthed_SC_200Rnd_338_Mag"
			//"OPTRE_200Rnd_127x99_M247H_Etilka_Ball", // Original ammo types.
			//"OPTRE_200Rnd_127x99_M247H_Etilka"
		};
		magazineWell[] = {};
		baseWeapon = "Tenthed_Etilka";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Etilka\data\anim\Chainsaw.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\Etilka\data\anim\Chainsaw_Spartan.rtm"
		};
		class WeaponSlotsInfo {
			mass = 250;
			class CowsSlot : CowsSlot {
				compatibleitems[] = {};
			};
			class MuzzleSlot : MuzzleSlot {
				compatibleitems[] = {};
			};
		};
		modes[] =
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
		};
		class FullAuto : Mode_FullAuto {
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType {
				begin1[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[] =
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails {
					class TailTrees {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses {
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.001;
			recoil = "recoil_auto_mk200";
			recoilProne = "recoil_auto_prone_mk200";
			minRange = 2;
			minRangeProbab = 0.30000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
			soundBurst = 0;
			burst = 1;
			displayName = "$STR_DN_MODE_FULLAUTO";
			textureType = "fullAuto";
		};
		class close : FullAuto {
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000001;
			midRange = 20;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close {
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far : medium {
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.40000001;
			maxRange = 650;
			maxRangeProbab = 0.0099999998;
		};
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\etilka\data\m247_co.paa",
			"OPTRE_Weapons\etilka\data\mag_co.paa",
			"OPTRE_Weapons\etilka\data\heavyattach_co.paa"
		};
	};
}