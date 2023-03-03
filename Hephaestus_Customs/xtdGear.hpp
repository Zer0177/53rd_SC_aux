class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusCustomHelm
		{
			label = "Hephaestus Custom Helmets";
			author = "Ithias";
			options[] = {"Camo","Person","dp"};
			
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
			class Person
			{
				label = "Person";
				values[] = {"Panzer","Ithias","Fixer","Lonewulf","Ryuu","Body","Hazard"};
				changeingame = 1;
                changedelay  = 0;
				class Panzer
				{
					label = "Panzer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ithias
				{
					label = "Ithias";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Fixer
				{
					label = "Fixer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Lonewulf
				{
					label = "Lonewulf";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ryuu
				{
					label = "Ryuu";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Hazard
				{
					label = "Hazard";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
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
		class HephaestusCustomVest
		{
			label = "Hephaestus Custom Vests";
			author = "Ithias";
			options[] = {"Camo","Person"};
			
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
			class Person
			{
				label = "Person";
				values[] = {"Fixer","Body","Panzer","Ryuu","Ithias","Joker","Hazard"};
				changeingame = 1;
                changedelay  = 0;
				class Fixer
				{
					label = "Fixer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Panzer
				{
					label = "Panzer";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ryuu
				{
					label = "Ryuu";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Ithias
				{
					label = "Ithias";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Joker
				{
					label = "Joker";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Hazard
				{
					label = "Hazard";
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
		//panzer
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Panzer";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Snow:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Urban:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Woodland:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Panzer";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		Camo = "Woodland";
		};
		//Ithias
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Ithias";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Snow:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Urban:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Woodland:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Ithias";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		Camo = "Woodland";
		};
		//Ryuu
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Ryuu";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Snow:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Urban:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Woodland:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Ryuu";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		Camo = "Woodland";
		};
		//Lonewulf
		class 53rd_Custom_Helmet_Lonewulf_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Lonewulf";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Lonewulf_Snow:53rd_Custom_Helmet_Lonewulf_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Lonewulf_Urban:53rd_Custom_Helmet_Lonewulf_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Lonewulf_Woodland:53rd_Custom_Helmet_Lonewulf_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Lonewulf";
        dp="no";
		};
		class 53rd_Custom_Helmet_Lonewulf_Snow_dp:53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Lonewulf_Urban_dp:53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Lonewulf_Woodland_dp:53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		Camo = "Woodland";
		};
		
		//Body
		class 53rd_Custom_Helmet_Body_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Body";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Body_Snow:53rd_Custom_Helmet_Body_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Body_Urban:53rd_Custom_Helmet_Body_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Body_Woodland:53rd_Custom_Helmet_Body_Desert
		{
		Camo = "Woodland";
		};
		
        //Fixer
        class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Fixer";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Snow:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Urban:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Woodland:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Fixer";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		Camo = "Woodland";
		};
		
		//Hazard
		//Lonewulf
		class 53rd_Custom_Helmet_Hazard_Desert
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Hazard";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Hazard_Snow:53rd_Custom_Helmet_Hazard_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Hazard_Urban:53rd_Custom_Helmet_Hazard_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Hazard_Woodland:53rd_Custom_Helmet_Hazard_Desert
		{
		Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Hazard_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Camo = "Desert";
		Person = "Hazard";
        dp="no";
		};
		class 53rd_Custom_Helmet_Hazard_Snow_dp:53rd_Custom_Helmet_Hazard_Desert_dp
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Hazard_Urban_dp:53rd_Custom_Helmet_Hazard_Desert_dp
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Hazard_Woodland_dp:53rd_Custom_Helmet_Hazard_Desert_dp
		{
		Camo = "Woodland";
		};

        
        //armors
		//Fixer
		class 53rd_Custom_Fixer_Woodland
		{
		model = "HephaestusCustomVest";
		Camo = "Woodland";
		Person = "Fixer";
		};
		class 53rd_Custom_Armor_Fixer_Desert:53rd_Custom_Fixer_Woodland
		{
		Camo = "Desert";
		};
		class 53rd_Custom_Armor_Fixer_Snow:53rd_Custom_Fixer_Woodland
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Fixer_Urban:53rd_Custom_Fixer_Woodland
		{
		Camo = "Urban";
		};
		
		//Body
		class 53rd_Custom_Armor_Body_Desert
		{
		model = "HephaestusCustomVest";
		Camo = "Desert";
		Person = "Body";
		};
		class 53rd_Custom_Armor_Body_Snow:53rd_Custom_Armor_Body_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Body_Urban:53rd_Custom_Armor_Body_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Armor_Body_Woodland:53rd_Custom_Armor_Body_Desert
		{
		Camo = "Woodland";
		};

        //Panzer
		class 53rd_Custom_Armor_Panzer_Desert
		{
		model = "HephaestusCustomVest";
		Camo = "Desert";
		Person = "Panzer";
		};
		class 53rd_Custom_Armor_Panzer_Snow:53rd_Custom_Armor_Panzer_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Panzer_Urban:53rd_Custom_Armor_Panzer_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Armor_Panzer_Woodland:53rd_Custom_Armor_Panzer_Desert
		{
		Camo = "Woodland";
		};

        //Ryuu
		class 53rd_Custom_Armor_Ryuu_Desert
		{
		model = "HephaestusCustomVest";
		Camo = "Desert";
		Person = "Ryuu";
		};
		class 53rd_Custom_Armor_Ryuu_Snow:53rd_Custom_Armor_Ryuu_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Ryuu_Urban:53rd_Custom_Armor_Ryuu_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Armor_Ryuu_Woodland:53rd_Custom_Armor_Ryuu_Desert
		{
		Camo = "Woodland";
		};
		
		//Ithias
		class 53rd_Custom_Armor_Ithias_Desert
		{
		model = "HephaestusCustomVest";
		Camo = "Desert";
		Person = "Ithias";
		};
		class 53rd_Custom_Armor_Ithias_Snow:53rd_Custom_Armor_Ithias_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Ithias_Urban:53rd_Custom_Armor_Ithias_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Armor_Ithias_Woodland:53rd_Custom_Armor_Ithias_Desert
		{
		Camo = "Woodland";
		};
		
		//Joker
		class 53rd_Custom_Armor_Joker_Desert
		{
		model = "HephaestusCustomVest";
		Camo = "Desert";
		Person = "Joker";
		};
		class 53rd_Custom_Armor_Joker_Snow:53rd_Custom_Armor_Joker_Desert
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Joker_Urban:53rd_Custom_Armor_Joker_Desert
		{
		Camo = "Urban";
		};
		class 53rd_Custom_Armor_Joker_Woodland:53rd_Custom_Armor_Joker_Desert
		{
		Camo = "Woodland";
		};
        
        //Hazard
		class 53rd_Custom_Armor_Hazard_Woodland
		{
		model = "HephaestusCustomVest";
		Camo = "Woodland";
		Person = "Hazard";
		};
		class 53rd_Custom_Armor_Hazard_Desert:53rd_Custom_Armor_Hazard_Woodland
		{
		Camo = "Desert";
		};
		class 53rd_Custom_Armor_Hazard_Snow:53rd_Custom_Armor_Hazard_Woodland
		{
		Camo = "Snow";
		};
		class 53rd_Custom_Armor_Hazard_Urban:53rd_Custom_Armor_Hazard_Woodland
		{
		Camo = "Urban";
		};


	};
};