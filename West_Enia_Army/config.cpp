#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class West_Enia_Army {
		units[] = 
        {
            "WIP"
        };
		weapons[] = 
        {
            "WIP"
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class cfgWeapons{
    class ItemInfo;
	class VestItem;
	class HeadgearItem;
	class UniformItem;

//Base

//Vest
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;

	class WEA_Lite: V_CarrierRigKBT_01_light_base_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Lite Vest";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Chest_WEA.paa"
		};
	};
	class WEA_Vest: V_CarrierRigKBT_01_base_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Vest";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Chest_WEA.paa"
		};
	};
	class WEA_Heavy: V_CarrierRigKBT_01_heavy_base_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Heavy Vest";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Chest_WEA.paa"
		};
	};

//Uniform
	class Uniform_Base;

	class WEA_Uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Uniform";
		//picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Uniform_WEA.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WEA_Uniform_thing";
			containerClass="Supply40";
			mass=40;
		};
	};
	
//Helmet
	class H_HelmetHBK_F;
	
	class WEA_Helmet: H_HelmetHBK_F
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Helmet";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Helmet_WEA.paa"
		};
	};
};

class CfgVehicles{
	class B_G_Soldier_LAT_F;
	class B_Kitbag_rgr;
	
	class WEA_Uniform_thing: B_G_Soldier_LAT_F
	{
		scope=1;
		side=1;
		uniformClass="WEA_Uniform_thing_2";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Uniform_WEA.paa"
		};
	};
	
	class WEA_Kitbag: B_Kitbag_rgr
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayName="[53rd] West Enia Army Kitbag";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Kitbag_WEA.paa"
		};
	};
};

class CfgGlasses{
	class G_CBRN_S10;

//Base
class WEA_Gasmask_Base: G_CBRN_S10
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayname="Base thing";
		//picture="";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Gasmask_WEA.paa",
			"West_Enia_Army\Tex\Gasmask_Glasses_WEA.paa"
		};
	};

//Gas Mask

	class WEA_Gasmask: WEA_Gasmask_Base
	{
		scope=2;
		scopeArsenal=2;
		scopecurator=2;
		author="Ithias";
		displayname="[53rd] West Enia Army Gasmask";
		//picture="";
		hiddenSelectionsTextures[]=
		{
			"West_Enia_Army\Tex\Gasmask_WEA.paa",
			"West_Enia_Army\Tex\Gasmask_Glasses_WEA.paa"
		};
	};
};