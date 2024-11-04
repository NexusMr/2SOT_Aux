class CfgPatches
{
	class 2SOT_Aux_Backpack_Infantry
	{
		author = "Taldrian 2nd - Swords of Taldria Aux Team";
		requiredAddons[] ={"2SOT_Aux_Backpack_Main"};
		units[] = {""};
		weapons[] = {""};
	};
};
class CfgWeapons
{
	class Taldrian_StdHelm;	
	class 2SOT_H_StdHelm_Test: Taldrian_StdHelm
	{
		author = "Rogue771";
		scope = 2;
		scopeArsenal = 2;		
		displayName = "[2SOT] Standard Helm";
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Headwear\StandardHelmet\Data\2SOT_Taldrian_Test.paa"};
	};
};