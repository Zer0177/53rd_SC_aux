/// https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide ///
/// Equipment list macros definition ///

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgPatches {
	class Grey_body {
		units[] = 
        {
        };
		weapons[] = 
        {
			"53rd_Soft_Cap_Boonie_Urban",
			"53rd_UNSC_PatrolCap",
			"53rd_Cap",
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class Hands;
	class Pelvis;
	class H_Booniehat_khk;
	class OPTRE_UNSC_PatrolCap_Army;
	class OPTRE_CPD_Cap;
    class H_HelmetB;
//Boonie Hat
    class 53rd_Soft_Cap_Boonie_Urban: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="[53rd] Boonie Hat (Urban)";
		model="\A3\Characters_F\Common\booniehat";
		optreVarietys[]=
        {
            "",
            "",
            ""
        };
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Boonie_Urban.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};
	class 53rd_Soft_Cap_Boonie_Snow: 53rd_Soft_Cap_Boonie_Urban
	{
		displayName="[53rd] Boonie Hat (Snow)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Boonie_Snow.paa"
		};
	};
	class 53rd_Soft_Cap_Boonie_Desert: 53rd_Soft_Cap_Boonie_Urban
	{
		displayName="[53rd] Boonie Hat (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Boonie_Desert.paa"
		};
	};
	class 53rd_Soft_Cap_Boonie_Woodland: 53rd_Soft_Cap_Boonie_Urban
	{
		displayName="[53rd] Boonie Hat (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Boonie_Woodland.paa"
		};
	};
	
	
//Patrol Cap
    class 53rd_Soft_Cap_Patrol_Cap_Black: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd Strike Company";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] Patrol Cap (Black)";
		model="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
		optreVarietys[]=
        {
            "",
            "",
            ""
        };
		optreHUDStyle="ODST_1";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Patrol_Cap_Black.paa"
        };
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"hide_marines"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
    };
	class 53rd_Soft_Cap_Patrol_Cap_Woodland: 53rd_Soft_Cap_Patrol_Cap_Black
    {
        displayName="[53rd] Patrol Cap (Woodland)";
        hiddenSelectionsTextures[]=
        {
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Patrol_Cap_Woodland.paa"
        };
    };
	class 53rd_Soft_Cap_Patrol_Cap_Urban: 53rd_Soft_Cap_Patrol_Cap_Black
    {
        displayName="[53rd] Patrol Cap (Urban)";
        hiddenSelectionsTextures[]=
        {
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Patrol_Cap_Urban.paa"
        };
    };
	class 53rd_Soft_Cap_Patrol_Cap_Desert: 53rd_Soft_Cap_Patrol_Cap_Black
    {
        displayName="[53rd] Patrol Cap (Desert)";
        hiddenSelectionsTextures[]=
        {
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Patrol_Cap_Desert.paa"
        };
    };
	
///////Military Caps
	class 53rd_Soft_Cap_Military_Cap_Urban: OPTRE_CPD_Cap
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="[53rd] Military Cap (Urban)";
		model="\A3\Characters_F\Common\cappatrol";
		optreVarietys[]=
        {
            "",
            "",
            ""
        };
		optreHUDStyle="ODST_1";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Military_Cap_Urban.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=0;
			uniformModel="\A3\Characters_F\Common\cappatrol";
			hiddenSelections[]=
			{
				"camo",
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.5;
				};
			};
		};
	};
	class 53rd_Soft_Cap_Military_Cap_Woodland: 53rd_Soft_Cap_Military_Cap_Urban
	{
		displayName="[53rd] Military Cap (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Military_Cap_Woodland.paa"
		};
	};
	class 53rd_Soft_Cap_Military_Cap_Desert: 53rd_Soft_Cap_Military_Cap_Urban
	{
		displayName="[53rd] Military Cap (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\53rd_SC_Aux\tex\Soft caps\53rd_Soft_Cap_Military_Cap_Desert.paa"
		};
	};
};
class CfgGlasses
{
};