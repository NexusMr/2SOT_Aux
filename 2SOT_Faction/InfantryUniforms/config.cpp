class CfgPatches
{
	class 2SOT_Aux_Faction_InfantryUniform
	{
		author = "Taldrian 2nd - Swords of Taldria Aux Team";
		requiredAddons[] ={"2SOT_Aux_Faction_Main"};
		units[] = {""};
		weapons[] = {""};
	};
};
class CfgVehicles
{
	class IC_SL_inf_B;
/////////////////////////////////////	
	class 2SOT_taldrian_B_01: IC_SL_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"IC_SL_VEST_01","IC_SL_HELMET_01","IC_SL_GASMASK","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;
		model = "\IC_SL_INF\Uniform\IC_SL_UNIFORM.p3d";
		faction = "IC_SL_B";
		displayName = "Trooper";
		uniformClass = "2SOT_taldrian_U_01";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Faction\InfantryUniforms\Data\2SOT_infantry_top_01_co.paa","\2SOT_Aux\2SOT_Faction\InfantryUniforms\Data\2SOT_infantry_bottom_01_co.paa"};
	};
	class 2SOT_taldrian_B_02: IC_SL_inf_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"IC_SL_VEST_01","IC_SL_HELMET_01","IC_SL_GASMASK","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;
		model = "\IC_SL_INF\Uniform\IC_SL_UNIFORM.p3d";
		faction = "IC_SL_B";
		displayName = "Trooper";
		uniformClass = "2SOT_taldrian_U_02";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Faction\InfantryUniforms\Data\2SOT_infantry_top_02_co.paa","\2SOT_Aux\2SOT_Faction\InfantryUniforms\Data\2SOT_infantry_bottom_02_co.paa"};
	};	
};
class cfgWeapons
{
	class IC_SL_inf_B;	
	class ItemInfo;
	class UniformItem;
/////////////////////////////////////	
	class 2SOT_taldrian_U_01: IC_SL_inf_B
	{
		scope = 2;
		scopearsenal = 2;
		displayName = "[2SOT] Taldrian Infantry Fatigues ('Standard Issue')";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "2SOT_taldrian_B_01";
			containerClass="Supply140";
			uniformType="Neopren";
			mass = 80;
		};
	};
	class 2SOT_taldrian_U_02: IC_SL_inf_B
	{
		scope = 2;
		scopearsenal = 2;		
		displayName = "[2SOT] Taldrian Infantry Fatigues ('Non-Commissioned Officer')";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "2SOT_taldrian_B_02";
			containerClass="Supply140";
			uniformType="Neopren";
			mass = 80;
		};
	};
};