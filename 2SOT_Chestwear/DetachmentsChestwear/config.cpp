class CfgPatches
{
	class 2SOT_Aux_Chestwear_DetachmentsChestWear
	{
		author = "Taldrian 2nd - Swords of Taldria Aux Team";
		requiredAddons[] ={"2SOT_Aux_Chestwear_Main"};
		units[] = {""};
		weapons[] = {""};
	};
};
class CfgWeapons
{	
	class IC_CAD_FlakVest;
	class VestItem;
//////////////////////////////////////////	
	class 2SOT_FlakVest_V_01: IC_CAD_FlakVest
	{
		scope = 2;
		scopeArsenal = 2;		
		displayName = "[2SOT] Taldrian Crew Armour ('Flakweave')";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\2SOT_Aux\2SOT_Chestwear\DetachmentsChestwear\Data\2SOT_Flakweave_01_co.paa"};
		descriptionShort = "Flak Level I";
	};
};