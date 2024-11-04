class CfgPatches
{
	class 2SOT_Aux_Faction_DetachmentUniform
	{
		author = "Taldrian 2nd - Swords of Taldria Aux Team";
		requiredAddons[] ={"2SOT_Aux_Faction_Main"};
		units[] = {""};
		weapons[] = {""};
	};
};
class CfgVehicles
{
	class IC_CAD_TANKER_02_inf_836_B;
/////////////////////////////////////	
	class 2SOT_taldrian_B_03: IC_CAD_TANKER_02_inf_836_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"IC_SL_VEST_01","IC_SL_HELMET_01","IC_SL_GASMASK","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;
		faction = "IC_SL_B";
		displayName = "Trooper";
		uniformClass = "2SOT_taldrian_U_03";
		hiddenSelections[] = {"camo1","camo"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Faction\DetachmentUniforms\Data\2SOT_dragoon_bottom_01_co.paa","\2SOT_Aux\2SOT_Faction\DetachmentUniforms\Data\2SOT_dragoon_top_01_co.paa"};
	};
	class 2SOT_taldrian_B_04: IC_CAD_TANKER_02_inf_836_B
	{
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		linkedItems[] = {"IC_SL_VEST_01","IC_SL_HELMET_01","IC_SL_GASMASK","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 1;

		faction = "IC_SL_B";
		displayName = "Trooper";
		uniformClass = "2SOT_taldrian_U_04";
		hiddenSelections[] = {"camo1","camo"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Faction\DetachmentUniforms\Data\2SOT_dragoon_bottom_01_co.paa","\2SOT_Aux\2SOT_Faction\DetachmentUniforms\Data\2SOT_dragoon_top_02_co.paa"};
	};	
};
class cfgWeapons
{
	class IC_CAD_TANKER_02_U_836_B;	
	class ItemInfo;
	class UniformItem;
/////////////////////////////////////	
	class 2SOT_taldrian_U_03: IC_CAD_TANKER_02_U_836_B
	{
		scope = 2;
		scopearsenal = 2;
		displayName = "[2SOT] Taldrian Crew Fatigues ('Standard Issue')";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "2SOT_taldrian_B_03";
			containerClass="Supply140";
			uniformType="Neopren";
			mass = 80;
		};
	};
	class 2SOT_taldrian_U_04: IC_CAD_TANKER_02_U_836_B
	{
		scope = 2;
		scopearsenal = 2;		
		displayName = "[2SOT] Taldrian Crew Fatigues ('Non-Commissioned Officer')";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "2SOT_taldrian_B_04";
			containerClass="Supply140";
			uniformType="Neopren";
			mass = 80;
		};
	};
};