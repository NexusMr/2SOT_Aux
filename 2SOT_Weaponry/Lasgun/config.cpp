class CfgPatches
{
	class 2SOT_Aux_Weaponry_Lasgun
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
	class ic_cad_LuciusP_Wood;
	class ic_cad_LuciusFM;
	class ic_cad_LuciusLongLas;
	class ic_cad_LuciusLMG;
/////////////////////////////////////////////////
	class 2SOT_nemesis_arifle_01: ic_cad_LuciusP_Wood
	{
		author = "Rogue771";
		baseWeapon = "2SOT_nemesis_arifle_01";		
		displayName = "[2SOT] Imp. Lasrifle ('Nemesis-Tessera Pattern')";
		scope = 2;
		magazineGroup[] = {"2SOT_lasrifle_magwell"};		
		magazines[] = {"2SOT_las_powerpack"};
		cursor = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_Dot";
		cursoraim = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_03";		
		hiddenSelectionsTextures[] = {"IC_Departmento_Munitorum\IC_Departmento_Weapons\Rifles\LuciusPattern\Data\ic_cad_LuciusP_co.paa"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0};		
	};
	class 2SOT_nemesis_arifle_02: ic_cad_LuciusFM
	{
		author = "Rogue771";
		baseWeapon = "2SOT_nemesis_arifle_02";		
		displayName = "[2SOT] Imp. Lasgun ('Nemesis-Tessera Pattern')";
		scope = 2;
		magazineGroup[] = {"2SOT_lasrifle_magwell"};		
		magazines[] = {"2SOT_las_powerpack"};
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
		cursoraim = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_03";		
		hiddenSelectionsTextures[] = {"IC_Departmento_Munitorum\IC_Departmento_Weapons\Rifles\LuciusPattern\Data\ic_cad_LuciusP_co.paa"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0};			
	};	
/////////////////////////////////////////////////
	class 2SOT_nemesis_lmg_01: ic_cad_LuciusLMG
	{
		author = "Rogue771";
		baseWeapon = "2SOT_nemesis_lmg_01";		
		displayName = "[2SOT] Imp. SAL ('Nemesis-Tessera Pattern')";
		scope = 2;
		magazines[] = {"2SOT_sal_powerpack"};
		cursor = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_Dot";
		cursoraim = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_03";		
		hiddenSelectionsTextures[] = {"IC_Departmento_Munitorum\IC_Departmento_Weapons\Rifles\LuciusPattern\Data\ic_cad_LuciusP_co.paa"};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0};		
	};		
/////////////////////////////////////////////////	
	class 2SOT_nemesis_srifle_01: ic_cad_LuciusLongLas
	{
		author = "Rogue771";
		baseWeapon = "2SOT_nemesis_srifle_01";
		scope = 2;
		displayName = "[2SOT] Imp. Longlas ('Nemesis-Tessera Pattern')";
		hiddenSelectionsTextures[] = {"IC_Departmento_Munitorum\IC_Departmento_Weapons\Rifles\LuciusPattern\Data\ic_cad_LuciusP_co.paa"};
		magazines[] = {"2SOT_longlas_powerpack"};
		cursor = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_Dot";
		cursoraim = "\2SOT_Aux\2SOT_Weaponry\Data\2SOT_Cursor_03";				
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.5,0.3};
				iconScale = 0.15;
				compatibleItems[] = {"dm_M3610xSightNM"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"IC_bayonet_01","IC_bayonet_02"};
				displayName = "Bayonet Lug";
				iconPosition[] = {0.1,0.2};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			class PointerSlot{};
			mass = 120;
		};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {0,0,1};
		fireLightAmbient[] = {0,0,0};				
	};
};