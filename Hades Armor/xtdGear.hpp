class XtdGearModels
{
	class CfgWeapons
	{
		class ODSTARMOR
		{
			label = "Nemesis Armor";
			author = "Seven & Body";
			options[] = {"person"};
			
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
		class 53rd_ODST_NRM:53rd_UNSC_M52A_Armor_Base
		{
		person = "rifleman";
		};
		class 53rd_ODST_SL:53rd_UNSC_M52A_Armor_Base
		{
		person = "sl";
		};
		class 53rd_ODST_TL:53rd_UNSC_M52A_Armor_Base
		{
		person = "tl";
		};
		class 53rd_ODST_Breacher:53rd_UNSC_M52A_Armor_Base
		{
		person = "breacher";
		};
		class 53rd_ODST_Marksmen:53rd_UNSC_M52A_Armor_Base
		{
		person = "marksmen";
		};
		class 53rd_ODST_Light:53rd_UNSC_M52A_Armor_Base
		{
		person = "light";
		};
		class 53rd_ODST_Heavy:53rd_UNSC_M52A_Armor_Base
		{
		person = "heavy";
		};
		class 53rd_ODST_Medic:53rd_UNSC_M52A_Armor_Base
		{
		person = "medic";
		};
	};
};