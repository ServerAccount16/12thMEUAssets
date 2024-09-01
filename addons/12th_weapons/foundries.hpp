class apistol_19_UNSC_M6C_Base_F: Pistol_Base_F
{
	author="Split Jaw";
	_generalMacro="apistol_19_UNSC_M6C_Base_F";
	magazines[]=
	{
		"12Rnd_127x40_m6_SAPHE",
		"12Rnd_127x40_m6_SAPHE_tracer"
	};
	magazineWell[]=
	{
		"19_UNSC_M6C_Magwell"
	};

ODST_1 = "OPTRE_ODST_HUD_AmmoCount_PistolODST";
Glasses = "OPTRE_GLASS_HUD_AmmoCount_PistolODST";
Eye = "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
	cursor = "OPTRE_M6B";
	hiddenSelections[] = {"camo","camo1","camo3"};
	hiddenSelectionsTextures[] = {"UNSC_F_Weapons\weapons\M6_data\m6c_slide_co.paa","UNSC_F_Weapons\weapons\M6_data\m6_details_co.paa","UNSC_F_Weapons\weapons\M6_data\m6_frame_co.paa"};
	reloadAction = "GestureReloadPistol";
	HUD_BulletInARows = 1;
	HUD_TotalPosibleBullet = 12;
	picture = "\OPTRE_Weapons\M6B\icons\m6b_icon.paa";
	pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Pistols\M6F_IRON.paa";

	ACE_barrelTwist=177.8;
	ACE_barrelLength=95;
	ACE_overheating_mrbs=99999;
	ACE_overheating_jamchance=0;
	ACE_overheating_slowdownFactor=0;
	ACE_overheating_allowSwapBarrel=0;
	ACE_overheating_dispersion=0;
	ACE_overheating_closedbolt=0;
	ACE_arsenal_hide=0;
	ACE_twistDirection=1;
	ACE_clearJamAction="GestureReload";
	ACE_checkTemperatureAction="Gear";
	magazineReloadSwitchPhase=0.8;
	class Library
	{
		libTextDesc="$STR_A3_CfgWeapons_arifle_XMX_Library0";
	};
	maxZeroing=100;
	distanceZoomMin=0;
	distanceZoomMax=100;
	descriptionShort="Standard Issue M6C Magnum";
	muzzles[]=
	{
		"this"
	};
		discreteDistanceInitIndex=1;
};


class 19_UNSC_M6C: apistol_19_UNSC_M6C_Base_F
{
	type=2;
	author="19th Fleet Mod Team - Split Jaw";
	_generalMacro="19_UNSC_M6C";
	baseWeapon="19_UNSC_M6C";
	scope=2;
	displayName="[19 - UNSC] M6C";
	model="\UNSC_F_Weapons\weapons\UNSC_M6C.p3d";
	mass=40;
	picture="\UNSC_F_Weapons\weapons\UI\M6c_UI.paa";
	UiPicture="\UNSC_F_Weapons\weapons\UI\M6c_UI.paa";
	muzzles[]=
	{
		"this"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass=60;
		class MuzzleSlot: MuzzleSlot
		{
			inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			displayName="Muzzle Slot";
			compatibleItems[]=
			{
		//		"optre_MA5Suppressor",
				//"19_UNSC_MA5A_Suppressor"
			};
			iconPosition[]={0,0.40000001};
		};
		class CowsSlot: CowsSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
			displayName="$STR_A3_CowsSlot0";
			compatibleitems[]=
			{
			};
			iconPosition[]={0.5,0.30000001};
		};
		class PointerSlot: PointerSlot
		{
			compatibleItems[]=
			{
			//	"optre_bmr_laser",
				//"acc_flashlight"
			//	"19_UNSC_MA5A_LAM"
			};
			iconPosition[]={0.2,0.40000001};
		};
	};
	inertia=0.15;
	aimTransitionSpeed=0.95;
	dexterity=5;
		recoil="recoil_mx";
	maxZeroing=100;
	class ItemInfo
	{
		priority=.1;
	};
	descriptionShort="Standard Issue M6C Magnum";
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {};
			closure2[] = {};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[] = {"50cal_Type115_Shot_SoundSet","50cal_Type115_Tail_SoundSet","50cal_Type115_interiorTail_SoundSet"};
		};
		class SilencedSound: BaseSoundModeType
		{
			SoundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
		reloadTime = 0.167;
		dispersion = 0.005;
		recoil = "recoil_single_trg";
		recoilProne = "recoil_single_prone_trg";
		minRange = 2;
		minRangeProbab = 0.01;
		midRange = 25;
		midRangeProbab = 0.2;
		maxRange = 50;
		maxRangeProbab = 0.1;
	};
	aiDispersionCoefY = 2;
	aiDispersionCoefX = 2;
};
};
