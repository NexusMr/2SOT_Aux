class CfgPatches
{
	class 2SOT_Aux_Weaponry_Main
	{
		author = "Taldrian 2nd - Swords of Taldria Aux Team";
		requiredAddons[] ={"2SOT_Aux_Main"};
		units[] = {""};
		weapons[] = {""};
	};
};
class CfgAmmo
{
class B_762x51_Ball;
class IC_lasbolt;
////////////////////////////////////
	class 2SOT_long_960_rnd: B_762x51_Ball
	{
		hit = 20;
		indirectHit = 0;
		visibleFire = 3;
		audibleFire = 45;
		cartridge = "FxCartridge_762";
		typicalSpeed = 820;
		caliber = 2.4;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
	};
	class 2SOT_lasbolt: IC_lasbolt
	{
		effectsFire = "ChemlightLight_blue";		
		model = "\IC_Departmento_Munitorum\IC_Departmento_Weapons\bullettracer\ic_LasgunRndBlue.p3d";
	};	
	class 2SOT_longbolt: 2SOT_lasbolt
	{
		hit = 40;
		caliber = 4;
	};		
};
class CfgMagazines
{
class 30Rnd_556x45_Stanag;
class ic_las_powerpackBlue;
////////////////////////////////////	
	class 2SOT_30rnd_960_rifleMag: 30Rnd_556x45_Stanag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[2SOT] Long 9.60 mm 30Rnd Mag";
		ammo = "2SOT_long_960_rnd";
		count = 30;
		magazineGroup[] = {"2SOT_960_rifle_magwell"};
		tracersEvery = 0;
		descriptionShort = "";
	};
	class 2SOT_30rnd_960_Tracer_rifleMag: 2SOT_30rnd_960_rifleMag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[2SOT] Long 9.60 mm 30Rnd Tracer Mag";
		ammo = "2SOT_long_960_rnd";
		count = 30;
		magazineGroup[] = {"2SOT_960_rifle_magwell"};
		tracersEvery = 0;
		descriptionShort = "";
	};	
////////////////////////////////////		
	class 2SOT_las_powerpack: ic_las_powerpackBlue
	{
		displayName = "[2SOT] Lasgun Power Pack";
		ammo = "2SOT_lasbolt";
		count = 75;		
	};
	class 2SOT_sal_powerpack: ic_las_powerpackBlue
	{
		displayName = "[2SOT] SAL Power Pack";
		ammo = "2SOT_lasbolt";
		count = 150;		
	};	
	class 2SOT_longlas_powerpack: ic_las_powerpackBlue
	{
		displayName = "[2SOT] Longlas Power Pack";
		ammo = "2SOT_longbolt";
		count = 10;			
	};			
};
class CfgMagazineWells
{
	class 2SOT_960_rifle_magwell
	{
		2SOT_Magazines[] = {"2SOT_30rnd_960_rifleMag","2SOT_30rnd_960_Tracer_rifleMag"};
	};
	class 2SOT_lasrifle_magwell
	{
		2SOT_Magazines[] = {"2SOT_las_powerpack"};
	};	
};