class CfgPatches {
	class Volare_Customs {
		units[] = 
        {
            ""
        };
		weapons[] = 
        {
            ""
        };
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
#include "xtdGear.hpp"
class cfgWeapons 
{
    class ItemInfo;
    class UniformItem;
	class VestItem;
	class HeadgearItem;
	class VES_CH252D;
	class OPTRE_UNSC_M52A_Armor_Base;
	class Hands;
	class Pelvis;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_WDL_Heavy;
	class VES_BDU_Evolved_Slim;
	class 53rd_Armor_Rifleman;
	class 53rd_Armor_Specialist;
	class 53rd_Armor_TL;
	class 53rd_Armor_SL;
	class 53rd_Armor_Medic;
	class 53rd_Armor_JTAC;
	class 53rd_Sealed_Base;
	class 53rd_Sealed_Base_dp;
	class 53rd_Unsealed_Base;
	class 53rd_Unsealed_Base_dp;
	class 53rd_Hephaestus_BDU_Slim;

//Customs


//Ben
class 53rd_VX19_Black_Helmet;
class 53rd_VX19_Black_Helmet_dp;
class 53rd_Custom_Helmet_BigBen : 53rd_VX19_Black_Helmet
    {
        scope = 2;
        scopeArsenal = 2;
		displayName = "[53rd] VX19 Flight Helmet (Hawaiian)";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_BigBen.paa",
			"53rd_SC_Aux\tex\visr_black_CO.paa"
		};
    };
	class 53rd_Custom_Helmet_BigBen_dp : 53rd_VX19_Black_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
		displayName = "[53rd] VX19 Flight Helmet (Hawaiian) dp";
		hiddenSelectionsTextures[] = 
        {
            "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_BigBen.paa",
			""
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
            uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
            hiddenSelectionsTextures[] = 
            {
                "53rd_SC_aux\tex\Customs\53rd_Custom_Helmet_BigBen.paa",
                ""
            };
			hiddenSelectionsMaterials[]=
			{
				"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",
				"OPTRE_FC_Units\Marines\data\h3_pilothelmet_Visor_trans.rvmat"
			};
        };
    };
};

class CfgVehicles
{

};