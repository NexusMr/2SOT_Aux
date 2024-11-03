class CfgPatches
{
	class 2SOT_Aux_Weaponry_Autogun
	{
		author = "Taldrian 2nd - Swords of Taldria Aux Team";
		requiredAddons[] ={"2SOT_Aux_Weaponry_Main"};
		units[] = {""};
		weapons[] = {""};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class PointerSlot_Rail;
class WeaponSlotsInfo;
class CfgWeapons
{
	class AOH_Vindicare_Gun_base;
	class ic_cad_autogunDM;
/////////////////////////////////////////////////
	class 2SOT_atticabrius_arifle: AOH_Vindicare_Gun_base
	{
		author = "Rogue771";
		displayName = "[2SOT] Imp. Heavy Autogun ('Attica-Brius Pattern')";
		scope = 2;
		magazines[] = {"2SOT_30rnd_960_rifleMag","2SOT_30rnd_960_Tracer_rifleMag"};
		magazineWell[] = {"2SOT_960_rifle_magwell"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Weaponry\Autogun\Data\2SOT_AtticaBrius_01.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_H"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.5,0.4};
				iconScale = 0.15;
				compatibleItems[] = {"optic_Hamr","optic_arco_blk_f","optic_erco_blk_f","dm_m362xsightnm","dm_m36holosightnm","dm_M3610xSight"};
			};
			class PointerSlot	
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};
		};
		cursor = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_Dot";
		cursoraim = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_04";		
		modes[] = {"Single","FullAuto"};
		selectionFireAnim = "muzzleFlash";
		reloadAction = "WBK_DM_Bolter_Reload";
		reloadMagazineSound[] = {"\IC_Departmento_Munitorum\IC_Departmento_Weapons\Sounds\Bolter_reload.ogg",1.5,1,25};		
		recoil = "recoil_aoh_vindicare_01";
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = 1100;
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.196;
			dispersion = 0.00035;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 750;
			maxRangeProbab = 0.3;
			soundContinuous = 0;
			soundBurst = 0;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"2SOT_AtticaBrius_Standard_SoundSet"};
				begin1[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_midShot_01",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"2SOT_AtticaBrius_Silenced_SoundSet"};
				begin1[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_midShot_01",1,1,1800};
				soundBegin[] = {"begin1",1};
			};			
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"2SOT_AtticaBrius_Standard_SoundSet"};
				begin1[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_midShot_01",1,1,1800};
				soundBegin[] = {"begin1",1};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"2SOT_AtticaBrius_Silenced_SoundSet"};
				begin1[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Type115\Type115_silencerShot_01",1,1,1800};
				soundBegin[] = {"begin1",1};
			};				
			soundBurst = 0;
			reloadTime = 0.196;
			dispersion = 0.00035;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
		};
	};
	class 2SOT_atticabrius_artificer_arifle: 2SOT_atticabrius_arifle
	{
		author = "Rogue771";
		displayName = "[2SOT] Imp. Heavy Autogun ('Attica-Brius Pattern')";
		scope = 2;
		magazines[] = {"2SOT_30rnd_960_rifleMag","2SOT_30rnd_960_Tracer_rifleMag"};
		magazineWell[] = {"2SOT_960_rifle_magwell"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Weaponry\Autogun\Data\2SOT_AtticaBrius_02.paa"};
	};	
/////////////////////////////////////////////////	
	class 2SOT_thracian_arifle: ic_cad_autogunDM
	{
		author = "Rogue771";
		displayName = "[2SOT] Imp. Autogun ('Thracian')";
		scope = 2;
		magazines[] = {"ic_30rnd_825_rifleMag","ic_30rnd_825_Tracer_rifleMag"};
		magazineWell[] = {"ic_825_rifle_magwell"};
		cursor = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_Dot";
		cursoraim = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_04";		
	};
/////////////////////////////////////////////////		
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class 2SOT_AtticaBrius_Standard_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Type115_closeShot_SoundShader","Type115_distShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class 2SOT_AtticaBrius_Silenced_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Type115_silencerShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};	
};