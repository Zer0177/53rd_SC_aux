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
			"53rd_Boonie_gry",
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

    class 53rd_Boonie_gry: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="(53rd) Boonie Hat (Urban)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_booniehat_grey.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
	class 53rd_Boonie_Winter: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="(53rd) Boonie Hat (Winter)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_booniehat_winter_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
	class 53rd_Boonie_Des: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="(53rd) Boonie Hat (Desert)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_booniehat_desert_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
		};;
	};
	class 53rd_Boonie_Woodland: H_Booniehat_khk
	{
		author="53rd Strike Company";
		scope = 2;
		scopeArsenal = 2;
		displayName="(53rd) Boonie Hat (Woodland)";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model="\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_booniehat_woodland.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
	
	
//UNSC CAP
    class 53rd_UNSC_Cap_Black: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Black)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_grey.paa"
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
	class 53rd_UNSC_Cap_Woodland: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Woodland)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_Woodland.paa"
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
	class 53rd_UNSC_Cap_Urban: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Urban)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_winter.paa"
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
	class 53rd_UNSC_Cap_Desert: OPTRE_UNSC_PatrolCap_Army
    {
        author="53rd";
        scope = 2;
        scopeArsenal = 2;
        displayName="[53rd] UNSC Cap (Desert)";
        uniformModel="\OPTRE_UNSC_Units\Army\patrolcap.p3d";
        hiddenSelections[]=
        {
            "camo1",
            "hide_marines"
        };
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\tex\Soft caps\53rd_UNSC_Cap_Des.paa"
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
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
	
///////Soft Caps
	class 53rd_Soft_Urban: OPTRE_CPD_Cap
	{
		dlc="53rd Aux Mod";
		scope = 2;
		scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] Soft Cap (Urban)";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_Soft_Urban_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
	 class 53rd_Soft_Woodland: OPTRE_CPD_Cap
	{
		dlc="53rd Aux Mod";
		scope = 2;
		scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] Soft Cap (Woodland)";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_Soft_Woodland_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
	class 53rd_Soft_Desert: OPTRE_CPD_Cap
	{
		dlc="53rd Aux Mod";
		scope = 2;
		scopeArsenal = 2;
		author="Article 2 Studios";
		displayName="[53rd] Soft Cap (Desert)";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Soft caps\53rd_Soft_Des_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=1;
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
};
class CfgGlasses
{
};