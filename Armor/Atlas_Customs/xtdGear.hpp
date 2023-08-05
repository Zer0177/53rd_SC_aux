class XtdGearModels
{
	class CfgWeapons
	{
		class AtlasCustomHelms
		{
			label = "Atlas Custom Helmets";
			author = "Tsuki";
			options[] = {"Camo","Person",};
			
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
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
			class Person
			{
				label = "Person";
				values[] = {"LoneWulf","Serpent","Tsuki","Texas"};
				class LoneWulf
				{
					label = "LoneWulf";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Serpent
				{
					label = "Serpent";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Tsuki
				{
					label = "Tsuki";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Texas
				{
					label = "Texas";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
        class Atlashelms
		{
			label = "Atlas Helmets";
			author = "Tsuki";
			options[] = {"Type","Camo"};
			
			class Type
			{
				label = "Type";
				values[] = {"Normal","NormalV","Medic","MedicV","Scout","Scout_PL"};
				class Normal
				{
					label = "Normal";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NormalV
				{
					label = "Normal Visor";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class MedicV
				{
					label = "Medic Visor";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Scout
				{
					label = "Scout";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Scout_PL
				{
					label = "Scout PL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				
			};
            class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
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
        };
		class AtlasCustomArmors
		{
			label = "Atlas Custom Armors"
			author = "Tsuki";
			options[] = {"Camo","Person"};
			
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
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
			class Person
			{
				label = "Person";
				values[] = {"LoneWulf","Serpent","Tsuki","Texas"};
				class LoneWulf
				{
					label = "LoneWulf";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Serpent
				{
					label = "Serpent";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Tsuki
				{
					label = "Tsuki";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Texas
				{
					label = "Texas";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
        
        class AtlasTeamArmors
		{
			label = "Atlas Team Armors"
			author = "Tsuki";
			options[] = {"Camo","Type"};
			
			class Camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow"};
				changeingame = 1;
                changedelay  = 0;
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
			class Type
			{
				label = "Type";
				values[] = {"Command","Gold"};
				class Command
				{
					label = "Command";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Serpent
				{
					label = "Gold";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
    };
};

class XtdGearInfos
{
    class CfgWeapons 
    {
		//helmets
		
		//LoneWulf
		class 53rd_Atlas_LoneWulf_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Custom_Helmet_SN
		{
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Custom_Helmet_DS
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "LoneWulf";
		}; 
		
		//Serpent
		class 53rd_Atlas_Serpent_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Custom_Helmet_SN
		{
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Custom_Helmet_DS
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "Serpent";
		}; 
		
		//Tsuki
		class 53rd_Atlas_Tsuki_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Custom_Helmet_SN
		{
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Tsuki";
		}; 
		class 53rd_Atlas_Tsuki_Custom_Helmet_DS
		{
		model = "AtlasCustomHelms";
		Camo = "Desert";
		Person = "Tsuki";
		};
		
		//Texas
		class 53rd_Atlas_Texas_Custom_Helmet
		{
		model = "AtlasCustomHelms";
		Camo = "Urban";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Custom_Helmet_SN
		{
		model = "AtlasCustomHelms";
		Camo = "Snow";
		Person = "Texas";
		};

		//Armors
		
		//LoneWulf
		class 53rd_Atlas_LoneWulf_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Armor_SN
		{
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "LoneWulf";
		};
		class 53rd_Atlas_LoneWulf_Armor_DS
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "LoneWulf";
		};
		
		//Serpent
		class 53rd_Atlas_Serpent_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Armor_SN
		{
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Serpent";
		};
		class 53rd_Atlas_Serpent_Armor_DS
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "Serpent";
		};
		
		//Tsuki
		class 53rd_Atlas_Tsuki_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Armor_SN
		{
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Tsuki";
		};
		class 53rd_Atlas_Tsuki_Armor_DS
		{
		model = "AtlasCustomArmors";
		Camo = "Desert";
		Person = "Tsuki";
		};
		
		//Texas
		class 53rd_Atlas_Texas_Armor
		{
		model = "AtlasCustomArmors";
		Camo = "Urban";
		Person = "Texas";
		};
		class 53rd_Atlas_Texas_Armor_SN
		{
		model = "AtlasCustomArmors";
		Camo = "Snow";
		Person = "Texas";
		};
        
        //Atlas Helmets
        class 53rd_Ranger_CH252_NV
		{
		model = "Atlashelms";
		Type = "NormalV";
        Camo = "Urban";
		};
		class 53rd_Ranger_CH252_MD:53rd_Ranger_CH252_NV
		{
        model = "Atlashelms";
		Type = "MedicV";
        Camo = "Urban";
		};
		class 53rd_Ranger_CH252_NML
		{
		model = "Atlashelms";
		Type = "Normal";
        Camo = "Urban";
		};
		class 53rd_HaloInf_Marine_WDL_UNSC_NV_headgear:53rd_Ranger_CH252_NML
		{
        model = "Atlashelms";
		Type = "Medic";
        Camo = "Urban";
		}; 
        
        //Atlas Team Helmets
        //Gold Helmet
		class Ranger_Scout
		{
		model = "Atlashelms";
		Type = "Scout";
        Camo = "Urban";
		};
        class Ranger_Scout_SN
        {
        model = "Atlashelms";
        Type = "Scout";
        Camo = "Snow";
        };
		class Ranger_Scout_DS
        {
        model = "Atlashelms";
        Type = "Scout";
        Camo = "Desert";
        };
        
        //Platoon Helmet
		class Ranger_PL_Scout
		{
		model = "Atlashelms";
		Type = "Scout_PL";
        Camo = "Urban";
		};
        class Ranger_PL_Scout_SN
        {
        model = "Atlashelms";
        Type = "Scout_PL";
        Camo = "Snow";
        };
		class Ranger_PL_Scout_DS
        {
        model = "Atlashelms";
        Type = "Scout_PL";
        Camo = "Desert";
        };
        
        //Atlas Team Armor
        //Command
		class 53rd_Atlas_PL_uniform
		{
		model = "AtlasTeamArmors";
		Camo = "Urban";
		Type = "Command";
		};
		class 53rd_Atlas_PL_uniform_SN
		{
		model = "AtlasTeamArmors";
		Camo = "Snow";
		Type = "Command";
		};
		class 53rd_Atlas_PL_uniform_DS
		{
		model = "AtlasTeamArmors";
		Camo = "Desert";
		Type = "Command";
		};
        
        //Gold
		class 53rd_Atlas_Y_uniform
		{
		model = "AtlasTeamArmors";
		Camo = "Urban";
		Type = "Gold";
		};
		class 53rd_Atlas_Gold_uniform_SN
		{
		model = "AtlasTeamArmors";
		Camo = "Snow";
		Type = "Gold";
		};
		class 53rd_Atlas_Gold_uniform_DS
		{
		model = "AtlasTeamArmors";
		Camo = "Desert";
		Type = "Gold";
		};
	};
};