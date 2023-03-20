class XtdGearModels
{
	class CfgWeapons
	{
		class ODSTHelm
		{
			label = "ODST Helmets";
			author = "Ithias & Body";
			options[] = {"Camo","dp"};
			
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				class Urban
				{
					label = "Urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Desert
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class dp
			{
				label = "Polarization";
				values[] = {"yes","no"};
				changeingame = 1;
                changedelay  = 0;
				class yes
				{
					label = "Yes?";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class no
				{
					label = "no.";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class ODSTARMOR
		{
			label = "ODST Armor";
			author = "Seven & Body";
			options[] = {"person","camo"};
			
			class person
			{
				label = "Name";
				values[] = {"rifleman","breacher","heavy","light","sl","tl","medic"};
				class rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class breacher
				{
					label = "Breacher";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class heavy
				{
					label = "Heavy";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class light
				{
					label = "Light";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class sl
				{
					label = "Squad Leader";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class tl
				{
					label = "Team Leader";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class marksmen
				{
					label = "Marksmen";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
			};
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				class Urban
				{
					label = "urban";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Woodland
				{
					label = "woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class Desert
				{
					label = "desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class Snow
				{
					label = "snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
		};
	};
};
class XtdGearInfos
{
    class CfgWeapons 
    {
        class 53rd_UNSC_M52A_Armor_Base
		{
		model = "ODSTARMOR";
		person = "body";
		};
		class 53rd_ODST_NRM_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "rifleman";
		Camo = "Desert";
		};
		class 53rd_ODST_NRM_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "rifleman";
		Camo = "Woodland";
		};
		class 53rd_ODST_NRM_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "rifleman";
		Camo = "Snow";
		};
		class 53rd_ODST_NRM_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "rifleman";
		Camo = "Urban";
		};
		class 53rd_ODST_SL_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "sl";
		Camo = "Desert";
		};
		class 53rd_ODST_SL_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "sl";
		Camo = "Woodland";
		};
		class 53rd_ODST_SL_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "sl";
		Camo = "Snow";
		};
		class 53rd_ODST_SL_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "sl";
		Camo = "Urban";
		};
		class 53rd_ODST_TL_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "tl";
		Camo = "Desert";
		};
		class 53rd_ODST_TL_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "tl";
		Camo = "Woodland";
		};
		class 53rd_ODST_TL_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "tl";
		Camo = "Snow";
		};
		class 53rd_ODST_TL_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "tl";
		Camo = "Urban";
		};
		class 53rd_ODST_Breacher_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "breacher";
		Camo = "Desert";
		};
		class 53rd_ODST_Breacher_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "breacher";
		Camo = "Woodland";
		};
		class 53rd_ODST_Breacher_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "breacher";
		Camo = "Snow";
		};
		class 53rd_ODST_Breacher_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "breacher";
		Camo = "Urban";
		};
		class 53rd_ODST_Marksmen_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "marksmen";
		Camo = "Desert";
		};
		class 53rd_ODST_Marksmen_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "marksmen";
		Camo = "Woodland";
		};
		class 53rd_ODST_Marksmen_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "marksmen";
		Camo = "Snow";
		};
		class 53rd_ODST_Marksmen_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "marksmen";
		Camo = "Urban";
		};
		class 53rd_ODST_Light_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "light";
		Camo = "Desert";
		};
		class 53rd_ODST_Light_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "light";
		Camo = "Woodland";
		};
		class 53rd_ODST_Light_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "light";
		Camo = "Snow";
		};
		class 53rd_ODST_Light_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "light";
		Camo = "Urban";
		};
		class 53rd_ODST_Heavy_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "heavy";
		Camo = "Desert";
		};
		class 53rd_ODST_Heavy_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "heavy";
		Camo = "Woodland";
		};
		class 53rd_ODST_Heavy_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "heavy";
		Camo = "Snow";
		};
		class 53rd_ODST_Heavy_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "heavy";
		Camo = "Urban";
		};
		class 53rd_ODST_Medic_DE:53rd_UNSC_M52A_Armor_Base
		{
		person = "medic";
		Camo = "Desert";
		};
		class 53rd_ODST_Medic_WD:53rd_UNSC_M52A_Armor_Base
		{
		person = "medic";
		Camo = "Woodland";
		};
		class 53rd_ODST_Medic_SN:53rd_UNSC_M52A_Armor_Base
		{
		person = "medic";
		Camo = "Snow";
		};
		class 53rd_ODST_Medic_UB:53rd_UNSC_M52A_Armor_Base
		{
		person = "medic";
		Camo = "Urban";
		};

		class 53rd_Custom_Helmet_ODST_Desert
		{
		model = "ODSTHelm";
		Camo = "Desert";
        dp="yes";
		};
		class 53rd_Custom_Helmet_ODST_Snow:53rd_Custom_Helmet_ODST_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_ODST_Urban:53rd_Custom_Helmet_ODST_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_ODST_Woodland:53rd_Custom_Helmet_ODST_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_ODST_Desert_dp
		{
		model = "ODSTHelm";
		Camo = "Desert";
        dp="no";
		};
		class 53rd_Custom_Helmet_ODST_Snow_dp:53rd_Custom_Helmet_ODST_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_ODST_Urban_dp:53rd_Custom_Helmet_ODST_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_ODST_Woodland_dp:53rd_Custom_Helmet_ODST_Desert_dp
		{
		Camo = "Woodland";
		};
	};
};