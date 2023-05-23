	class CfgPatches 
	{
		class 53rd_Halo_4_Helmets 
		{
			units[] = 
			{
			};
			weapons[] = 
			{
				"53rd_H4_Scout_Helmet",
				"53rd_EOD_Helmet",
				"53rd_AA_Helmet_UB",
				"53rd_AA_Helmet_WD",
				"53rd_AA_Helmet_DS",
				"53rd_AA_Helmet_WN",
				"53rd_M56SH_Helmet_UB",
				"53rd_M56SH_Helmet_DS",
				"53rd_M56SH_Helmet_WD",
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
		class MA_M56SH_Helmet;
		//class 53rd_H4_Scout_Helmet: MA_M56_Scout_Helmet
		//{
			//scope=2;
			//scopeArsenal=2;
			//displayName="[53rd] Scout Helmet";
			//model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
			//picture="MA_Armor\data\Icons\H4_Scout_Helmet.paa"; //TODO: Update this
			//hiddenSelectionsTextures[]=
			//{
				//"53rd_SC_aux\Trooper helmets\H4\[53rd] H4 Helmet.paa",
				//"53rd_SC_aux\Trooper helmets\H4\Visor\[53rd] H4 Helmet(Visor).paa"
			//};
		//};
		class 53rd_EOD_Helmet: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Trooper helmets\EOD\[53rd] EOD Helmet.paa",
				"53rd_SC_aux\tex\Trooper helmets\EOD\[53rd] EOD Helmet(Visor).paa"
			};
		};

		class 53rd_EOD_Helmet_WD: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet Woodland";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Trooper helmets\EOD\[53rd] EOD Helmet_Woodland.paa",
				"53rd_SC_aux\tex\Trooper helmets\EOD\Visor\[53rd] EOD Helmet(Visor).paa"
			};
		};

		class 53rd_EOD_Helmet_DS: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet Desert";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Trooper helmets\EOD\[53rd] EOD Helmet_Desert.paa",
				"53rd_SC_aux\tex\Trooper helmets\EOD\Visor\[53rd] EOD Helmet(Visor).paa"
			};
		};
		
		class 53rd_EOD_Helmet_WN: MA_M56E_Helmet
		{
		scope=2;
		scopeArsenal=2;
		displayName="[53rd] EOD Helmet Winter";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa"; //TODO: Update this
		hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Trooper helmets\EOD\[53rd] EOD Helmet_Winter.paa",
				"53rd_SC_aux\tex\Trooper helmets\EOD\Visor\[53rd] EOD Helmet(Visor).paa"
			};
		};

		class 53rd_AA_Helmet_UB:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Air Assault Helmet (Urban)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Trooper helmets\AA\[53rd] AA Helmet.paa",
				"53rd_SC_aux\tex\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
				};
		};
		class 53rd_AA_Helmet_DS:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Air Assault Helmet (Desert)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Trooper helmets\AA\[53rd] AA Helmet (Desert).paa",
				"53rd_SC_aux\tex\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
				};
		};
		class 53rd_AA_Helmet_WN:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Air Assault Helmet (Winter)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
				hiddenSelectionsTextures[]=
				{
				"53rd_SC_aux\tex\Trooper helmets\AA\[53rd] AA Helmet (Winter).paa",
				"53rd_SC_aux\tex\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor_Winter).paa"
				};
		};
		class 53rd_AA_Helmet_WD:MA_M56A_Helmet
		{
			scope=2;
			scopeArsenal=2;
			displayName="[53rd] Air Assault Helmet (Woodland)";
			model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
			picture="MA_Armor\data\Icons\AA_Helmet.paa"; //TODO: Update this
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\tex\Trooper helmets\AA\[53rd] AA Helmet (Woodland).paa",
				"53rd_SC_aux\tex\Trooper helmets\AA\Visor\[53rd] AA Helmet(Visor).paa"
			};
		};
		//class 53rd_M56SH_Helmet_UB: MA_M56SH_Helmet
		//{
			//scope=2;
			//scopeArsenal=2;
			//displayName="[53rd] Halo 3 Helmet (Urban)";
			//model="MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
			//picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
			//hiddenSelectionsTextures[]=
			//{
				//"53rd_SC_aux\Trooper helmets\H3\[53rd] H3_ODST Helmet.paa",
				//"53rd_SC_aux\Trooper helmets\H3\Visor\[53rd] H3_ODST Helmet(Visor).paa"
			//};
		//};
		//class 53rd_M56SH_Helmet_WD: MA_M56SH_Helmet
		//{
			//scope=2;
			//scopeArsenal=2;
			//displayName="[53rd] Halo 3 Helmet (Woodland)";
			//model="MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
			//picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
			//hiddenSelectionsTextures[]=
			//{
				//"53rd_SC_aux\Trooper helmets\H3\[53rd] H3_ODST Helmet(Woodland).paa",
				//"53rd_SC_aux\Trooper helmets\H3\Visor\[53rd] H3_ODST Helmet(Visor).paa"
			//};
		//};
		//class 53rd_M56SH_Helmet_DS: MA_M56SH_Helmet
		//{
			//scope=2;
			//scopeArsenal=2;
			//displayName="[53rd] Halo 3 Helmet (Desert)";
			//model="MA_Armor\data\Helmets\H3_ODST\H3_ODST_Helmet.p3d";
			//picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
			//hiddenSelectionsTextures[]=
			//{
				//"53rd_SC_aux\Trooper helmets\H3\[53rd] H3_ODST Helmet(Desert).paa",
				//"53rd_SC_aux\Trooper helmets\H3\Visor\[53rd] H3_ODST Helmet(Visor).paa"
			//};

		//};
	};
