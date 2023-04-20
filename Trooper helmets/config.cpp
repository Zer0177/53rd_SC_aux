class CfgPatches {
    class 53rd_Halo_4_Helmets {
        units[] = 
        {
        };
        weapons[] = 
        {
			"53rd_H4_Scout_Helmet",
			"53rd_EOD_Helmet",
			"53rd_AA_Helmet",
			"53rd_M56SR_Helm",
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
		class MA_M56_Scout_Helmet;
		class MA_M56A_Helmet;
		class MA_M56E_Helmet;
		class MA_M56SR_Helmet;
		
		class 53rd_H4_Scout_Helmet: MA_M56_Scout_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Scout Helmet";
			model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
			picture="MA_Armor\data\Icons\H4_Scout_Helmet.paa"; //TODO: Update this
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Trooper helmets\53rd_H4_Helmet.paa",
				"53rd_SC_aux\Trooper helmets\53rd_H4_Helmet_Visor.paa"
			};
		};
		class 53rd_EOD_Helmet: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Trooper helmets\53rd_EOD_Helmet.paa",
				"53rd_SC_aux\Trooper helmets\53rd_EOD_Helmet_Visor.paa"
			};
		};
		class 53rd_AA_Helmet:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Air Assault Helmet";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\Trooper helmets\53rd_AA_Helmet.paa",
				"53rd_SC_aux\Trooper helmets\53rd_AA_Helmet_Visor.paa"
				};
		};
		class 53rd_M56SR_Helmet: MA_M56SR_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] MSR ODST HR Helmet";
			model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Trooper helmets\53rd_H3_ODST_Helmet.paa",
				"53rd_SC_aux\Trooper helmets\53rd_H3_ODST_Helmet_Visor.paa"
			};
			class ItemInfo: ItemInfo
			{
				uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
				hiddenSelectionsTextures[]=
				{
					"53rd_SC_aux\Trooper helmets\53rd_H3_ODST_Helmet.paa",
					"53rd_SC_aux\Trooper helmets\53rd_H3_ODST_Helmet_Visor.paa"
				};
			};
		};
	};
