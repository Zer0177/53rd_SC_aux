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
        //custom armor
        class Armor_Hephaestus_PL
		{
		model = "CustomArmor";
		person = "body";
		};
		class 53rd_ODST_NRM:Armor_Hephaestus_PL
		{
		person = "rifleman";
		};
		class 53rd_ODST_SL:Armor_Hephaestus_PL
		{
		person = "sl";
		};
		class 53rd_ODST_TL:Armor_Hephaestus_PL
		{
		person = "tl";
		};
		class 53rd_ODST_Breacher:Armor_Hephaestus_PL
		{
		person = "breacher";
		};
		class 53rd_ODST_Marksmen:Armor_Hephaestus_PL
		{
		person = "marksmen";
		};
		class 53rd_ODST_Light:Armor_Hephaestus_PL
		{
		person = "light";
		};
		class 53rd_ODST_Heavy:Armor_Hephaestus_PL
		{
		person = "heavy";
		};
		class 53rd_ODST_Medic:Armor_Hephaestus_PL
		{
		person = "medic";
		};
	};
};