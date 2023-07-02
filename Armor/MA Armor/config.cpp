/*class CfgPatches {
    class 53rd_MA_Armor_Binns {
        units[] = 
        {
			"53rd_M56SR_Helmet",
			"53rd_M56SH_Helmet",
			"53rd_M56S_Vest",
			"53rd_M56R_Vest",
        };
        weapons[] = 
        {
			"53rd_M56SR_Helmet",
			"53rd_M56SH_Helmet",
			"53rd_M56S_Vest",
			"53rd_M56R_Vest",
        };
        requiredVersion = 0.100000;
        requiredAddons[] = {};
    };
}; 
class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	class VestItem;
	class HeadgearItem;
		
		
	//Base Vests
	class OPTRE_UNSC_M52A_Armor_Base;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class MA_Helmet_Base;
	class MA_M56S_Vest;
	class MA_M56R_Vest;
	class V_PlateCarrier1_rgr;
		
	class 53rd_M56SH_Helmet: MA_Helmet_Base
	{
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			side=1;
			displayName="(53rd) M56SH";
			model="MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
			picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Helmets\H3_ODST\Helmet_co.paa",
				"MA_Armor\data\Helmets\H3_ODST\Visor_co.paa"
			};
			class ItemInfo: ItemInfo
			{
			uniformModel="MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Helmets\H3_ODST\Helmet_co.paa",
				"MA_Armor\data\Helmets\H3_ODST\Visor_co.paa"
			};
		};
	};
	class 53rd_M56SR_Helmet: MA_Helmet_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="(53rd) M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_CO.paa"
			};
		};
	};
	class 53rd_Vest_Base: V_PlateCarrier1_rgr
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		author="53rd SC";
		displayName="(53rd) ODST Armor";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelections[]=
		{
			//"camo1",
			//"camo2",
			//"camo3",
			//"camo4",
			//"camo5",
			//"camo6",
			//"camo7",
			//"Left_Forearm_H3",
			//"Right_Forearm_H3",
			//"Left_Pauldron_H3",
			//"Right_Pauldron_H3",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			//"Thigh_Pouch",
			//"Armor_Lower_H3",
			//"Armor_Upper_H3",
			"Armor_Upper_Reach",
			"Armor_Lower_Reach",
			"Forearm_Reach_Left",
			"Forearm_Reach_Right",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[]=
				{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"53rd_SC_aux\tex\MA_Armor\Reach_Armor_Upper_Corrosive.paa",
				"53rd_SC_aux\tex\MA_Armor\Reach_Armor_Lower_Corrosive.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
				};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
			//"camo1",
			//"camo2",
			//"camo3",
			//"camo4",
			//"camo5",
			//"camo6",
			//"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
			//"Reach_Pauldron_Left",
			//"Reach_Pauldron_Right",
			//"Thigh_Pouch",
			"Armor_Lower_H3",
			"Armor_Upper_H3",
			//"Armor_Upper_Reach",
			//"Armor_Lower_Reach",
			//"Forearm_Reach_Left",
			//"Forearm_Reach_Right",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"53rd_SC_aux\tex\MA_Armor\Reach_Armor_Upper_Corrosive.paa",
				"53rd_SC_aux\tex\MA_Armor\Reach_Armor_Lower_Corrosive.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=25;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=20;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=30;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class 53rd_M56S_Vest: MA_M56S_Vest
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="(53rd) M56S Combat Armor";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelections[]=
		{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				//"Thigh_Pouch",
				//"Armor_Upper_Reach",
				//"Armor_Lower_Reach",
				//"Forearm_Reach_Left",
				//"Forearm_Reach_Right",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
				//"camo1",
				//"camo2",
				//"camo3",
				//"camo4",
				//"camo5",
				//"camo6",
				//"camo7",
				//"Reach_Pauldron_Left",
				//"Reach_Pauldron_Right",
				//"Thigh_Pouch",
				//"Armor_Upper_Reach",
				//"Armor_Lower_Reach",
				//"Forearm_Reach_Left",
				//"Forearm_Reach_Right",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				//"Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.5;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=35;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=35;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=35;
					passThrough=0.5;
				};
			};
		};
	};
	class 53rd_M56R_Vest: MA_M56R_Vest
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
		displayName="(53rd) M56R Combat Armor";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelections[]=
		{
			    //"camo1",
				//"camo2",
				//"camo3",
				//"camo4",
				//"camo5",
				//"camo6",
				//"camo7",
				//"Left_Forearm_H3",
				//"Right_Forearm_H3",
				//"Left_Pauldron_H3",
				//"Right_Pauldron_H3",
				//"Thigh_Pouch",
				//"Armor_Upper_H3",
				//"Armor_Lower_H3"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply200";
			hiddenSelections[]=
			{
			    //"camo1",
				//"camo2",
				//"camo3",
				//"camo4",
				//"camo5",
				//"camo6",
				//"camo7",
				//"Left_Forearm_H3",
				//"Right_Forearm_H3",
				//"Left_Pauldron_H3",
				//"Right_Pauldron_H3",
				//"Thigh_Pouch",
				//"Armor_Upper_H3",
				//"Armor_Lower_H3"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
		};
	};
	class CT_Vest: MA_M56S_Vest
	{
		author = "KAz";
		scope = 2;
		scopeArsenal = 2;
		displayName = "C.T";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
	//      "Reach_Pauldron_Left",
	//      "Reach_Pauldron_Right",
	        "Thigh_Pouch",
			"Armor_Upper_H3",
			"Armor_Lower_H3",
	//      "Armor_Upper_Reach",
	//      "Armor_Lower_Reach",
	//      "Forearm_Reach_Left",
	//      "Forearm_Reach_Right",
	//      "Forearm_Vent_Left",
	//      "Forearm_Vent_Right",
	//      "Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackUp.paa",       //camo1 (H3 Upper Armor)
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackDown.paa",       //camo2 (H3 Lower Armor)
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
			"Assets\Data\CharonIndustries\MainODST\CT\Vest\CTUpper.paa",    //camo4 (Reach Upper Armor)
			"Assets\Data\CharonIndustries\MainODST\CT\Vest\CTLower.paa",    //camo5 (Reach Lower Armor)
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"Left_Forearm_H3",
				"Right_Forearm_H3",
				"Left_Pauldron_H3",
				"Right_Pauldron_H3",
	//          "Reach_Pauldron_Left",
	//          "Reach_Pauldron_Right",
	            "Thigh_Pouch",
				"Armor_Upper_H3",
				"Armor_Lower_H3",
	//			"Armor_Upper_Reach",
	//			"Armor_Lower_Reach",
	//          "Forearm_Reach_Left",
	//          "Forearm_Reach_Right",
	//			"Forearm_Vent_Left",
	//			"Forearm_Vent_Right",
	//          "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
		};
	};
	class Demo_Vest: MA_M56S_Vest
	{
		author = "KAz";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Demo";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
	//      "Reach_Pauldron_Left",
	//      "Reach_Pauldron_Right",
	        "Thigh_Pouch",
			"Armor_Upper_H3",
			"Armor_Lower_H3",
	//      "Armor_Upper_Reach",
	//      "Armor_Lower_Reach",
	//      "Forearm_Reach_Left",
	//      "Forearm_Reach_Right",
	//      "Forearm_Vent_Left",
	//      "Forearm_Vent_Right",
	//      "Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackUp.paa",       //camo1 (H3 Upper Armor)
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackDown.paa",       //camo2 (H3 Lower Armor)
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
			"Assets\Data\CharonIndustries\MainODST\Demo\Vest\DemoUpper.paa",    //camo4 (Reach Upper Armor)
			"Assets\Data\CharonIndustries\MainODST\Demo\Vest\DemoLower.paa",    //camo5 (Reach Lower Armor)
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"Left_Forearm_H3",
				"Right_Forearm_H3",
				"Left_Pauldron_H3",
				"Right_Pauldron_H3",
	//          "Reach_Pauldron_Left",
	//          "Reach_Pauldron_Right",
	            "Thigh_Pouch",
				"Armor_Upper_H3",
				"Armor_Lower_H3",
	//			"Armor_Upper_Reach",
	//			"Armor_Lower_Reach",
	//          "Forearm_Reach_Left",
	//          "Forearm_Reach_Right",
	//			"Forearm_Vent_Left",
	//			"Forearm_Vent_Right",
	//          "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
		};
	};
	class Flame_Vest: MA_M56S_Vest
	{
		author = "KAz";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Flame";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
	//      "Reach_Pauldron_Left",
	//      "Reach_Pauldron_Right",
	        "Thigh_Pouch",
			"Armor_Upper_H3",
			"Armor_Lower_H3",
	//      "Armor_Upper_Reach",
	//      "Armor_Lower_Reach",
	//      "Forearm_Reach_Left",
	//      "Forearm_Reach_Right",
	//      "Forearm_Vent_Left",
	//      "Forearm_Vent_Right",
	//      "Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackUp.paa",       //camo1 (H3 Upper Armor)
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackDown.paa",       //camo2 (H3 Lower Armor)
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
			"Assets\Data\CharonIndustries\MainODST\Flame\Vest\FlameUpper.paa",    //camo4 (Reach Upper Armor)
			"Assets\Data\CharonIndustries\MainODST\Flame\Vest\FlameLower.paa",    //camo5 (Reach Lower Armor)
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"Left_Forearm_H3",
				"Right_Forearm_H3",
				"Left_Pauldron_H3",
				"Right_Pauldron_H3",
	//          "Reach_Pauldron_Left",
	//          "Reach_Pauldron_Right",
	            "Thigh_Pouch",
				"Armor_Upper_H3",
				"Armor_Lower_H3",
	//			"Armor_Upper_Reach",
	//			"Armor_Lower_Reach",
	//          "Forearm_Reach_Left",
	//          "Forearm_Reach_Right",
	//			"Forearm_Vent_Left",
	//			"Forearm_Vent_Right",
	//          "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
		};
	};
		class Girlie_Vest: MA_M56S_Vest
	{
		author = "KAz";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Girlie";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
	//      "Reach_Pauldron_Left",
	//      "Reach_Pauldron_Right",
	        "Thigh_Pouch",
			"Armor_Upper_H3",
			"Armor_Lower_H3",
	//      "Armor_Upper_Reach",
	//      "Armor_Lower_Reach",
	//      "Forearm_Reach_Left",
	//      "Forearm_Reach_Right",
	//      "Forearm_Vent_Left",
	//      "Forearm_Vent_Right",
	//      "Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackUp.paa",       //camo1 (H3 Upper Armor)
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackDown.paa",       //camo2 (H3 Lower Armor)
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
			"Assets\Data\CharonIndustries\MainODST\Girlie\Vest\GirlieUpper.paa",    //camo4 (Reach Upper Armor)
			"Assets\Data\CharonIndustries\MainODST\Girlie\Vest\GirlieLower.paa",    //camo5 (Reach Lower Armor)
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"Left_Forearm_H3",
				"Right_Forearm_H3",
				"Left_Pauldron_H3",
				"Right_Pauldron_H3",
	//          "Reach_Pauldron_Left",
	//          "Reach_Pauldron_Right",
	            "Thigh_Pouch",
				"Armor_Upper_H3",
				"Armor_Lower_H3",
	//			"Armor_Upper_Reach",
	//			"Armor_Lower_Reach",
	//          "Forearm_Reach_Left",
	//          "Forearm_Reach_Right",
	//			"Forearm_Vent_Left",
	//			"Forearm_Vent_Right",
	//          "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
		};
	};
			class Slev_Vest: MA_M56S_Vest
	{
		author = "KAz";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Sleeveless";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
	//      "Reach_Pauldron_Left",
	//      "Reach_Pauldron_Right",
	        "Thigh_Pouch",
			"Armor_Upper_H3",
			"Armor_Lower_H3",
	//      "Armor_Upper_Reach",
	//      "Armor_Lower_Reach",
	//      "Forearm_Reach_Left",
	//      "Forearm_Reach_Right",
	//      "Forearm_Vent_Left",
	//      "Forearm_Vent_Right",
	//      "Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackUp.paa",       //camo1 (H3 Upper Armor)
			"Assets\Data\Bravo3\Vest\Jackal\H3\JackDown.paa",       //camo2 (H3 Lower Armor)
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
			"Assets\Data\CharonIndustries\MainODST\Sleeveless\Vest\SleveUpper.paa",    //camo4 (Reach Upper Armor)
			"Assets\Data\CharonIndustries\MainODST\Sleeveless\Vest\SleveLower.paa",    //camo5 (Reach Lower Armor)
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"Left_Forearm_H3",
				"Right_Forearm_H3",
				"Left_Pauldron_H3",
				"Right_Pauldron_H3",
	//          "Reach_Pauldron_Left",
	//          "Reach_Pauldron_Right",
	            "Thigh_Pouch",
				"Armor_Upper_H3",
				"Armor_Lower_H3",
	//			"Armor_Upper_Reach",
	//			"Armor_Lower_Reach",
	//          "Forearm_Reach_Left",
	//          "Forearm_Reach_Right",
	//			"Forearm_Vent_Left",
	//			"Forearm_Vent_Right",
	//          "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"
			};
		};
	};
	class Sniper_Vest: MA_M56S_Vest
	{
		author = "C. Duck";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[Bravo-3] Phantom";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"Left_Forearm_H3",
			"Right_Forearm_H3",
			"Left_Pauldron_H3",
			"Right_Pauldron_H3",
	//      "Reach_Pauldron_Left",
	//      "Reach_Pauldron_Right",
	        "Thigh_Pouch",
			"Armor_Upper_H3",
			"Armor_Lower_H3",
	//      "Armor_Upper_Reach",
	//      "Armor_Lower_Reach",
	//      "Forearm_Reach_Left",
	//      "Forearm_Reach_Right",
	//      "Forearm_Vent_Left",
	//      "Forearm_Vent_Right",
	//      "Canisters"
		};
		hiddenSelectionsTextures[]=
		{
			"Assets\Data\Bravo3\Vest\Phantom\H3\Phantom_Up.paa",       //camo1 (H3 Upper Armor)
			"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",       //camo2 (H3 Lower Armor)
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
			"Assets\Data\CharonIndustries\MainODST\Sniper\Vest\SniperUpper.paa",    //camo4 (Reach Upper Armor)
			"Assets\Data\CharonIndustries\MainODST\Sniper\Vest\SniperLower.paa",    //camo5 (Reach Lower Armor)
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
		};
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"Left_Forearm_H3",
				"Right_Forearm_H3",
				"Left_Pauldron_H3",
				"Right_Pauldron_H3",
	//          "Reach_Pauldron_Left",
	//          "Reach_Pauldron_Right",
	            "Thigh_Pouch",
				"Armor_Upper_H3",
				"Armor_Lower_H3",
	//			"Armor_Upper_Reach",
	//			"Armor_Lower_Reach",
	//          "Forearm_Reach_Left",
	//          "Forearm_Reach_Right",
	//			"Forearm_Vent_Left",
	//			"Forearm_Vent_Right",
	//          "Canisters"
			};
			hiddenSelectionsTextures[]=
			{
				"MA_Armor\data\Vests\H3_ODST\Armor_Upper_co.paa",       //camo1 (H3 Upper Armor)
				"MA_Armor\data\Vests\H3_ODST\Armor_Lower_co.paa",       //camo2 (H3 Lower Armor)
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",    //camo4 (Reach Upper Armor)
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",    //camo5 (Reach Lower Armor)
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa"   //camo7 (Forearm Vents)
			};
		};
	};
};
