class CfgPatches {
    class 53rd_Halo_5_Helmets {
        units[] = 
        {
        };
        weapons[] = 
        {
			"53rd_EOD_Helmet_Gold_H5",
			"53rd_H5_Scout_Helmet_gol",
			"53rd_AA_Helmet_Gold_H5",
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
	
	
	class MA_H4_Scout_Helmet;
	class MA_AA_Helmet;
	class MA_EOD_Helmet;

	class 53rd_H5_Scout_Helmet_gold: MA_H4_Scout_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Scout Helmet (Cherry)";
		model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		picture="MA_Armor\data\Icons\H4_Scout_Helmet.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\Custom helmets\Scout_Helmet_Wood_co.paa",
			"53rd_SC_aux\Custom helmets\Scout_Visor_Gold_co.paa"
		};
	};
	class 53rd_EOD_Helmet_Gold_H5: MA_EOD_Helmet
	{
    	scope=2;
    	scopeArsenal=2;
    	displayName="[53rd] EOD Helmet (Cherry)";
    	model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
    	picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Custom helmets\53rd_EOD_Testing.paa",
			"53rd_SC_aux\Custom helmets\EOD_Visor_Gold_co.paa"
		};
	};
	class 53rd_AA_Helmet_Gold_H5:  MA_AA_Helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] Air Assault Helmet (Cherry)";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
			hiddenSelectionsTextures[]=
			{
			"53rd_SC_aux\tex\Custom helmets\53rd_AA_Testing.paa",
			"53rd_SC_aux\Custom helmets\AA_Visor_gold_co.paa"
			};
	};
};
