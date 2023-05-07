class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusCustomHelm
		{
			label = "Hephaestus Custom Helmets";
			author = "Ithias";
			options[] = {"Helm_Camo","Person","dp"};
			
			class Helm_Camo
			{
				label = "Helm Camo";
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
				values[] = {"Panzer","Ithias","Fixer","Lonewulf","Ryuu","Body","Hazard","Hellfire","Patches","Tikles","Cherryy"};
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
				class Hellfire
				{
					label = "Hellfire";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Patches
				{
					label = "Patches";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Tikles
				{
					label = "Tikles";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Cherryy
				{
					label = "Cherryy";
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
			options[] = {"Vest_Camo","Person"};
			
			class Vest_Camo
			{
				label = "Vest Camo";
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
				values[] = {"Fixer","Body","Panzer","Ryuu","Ithias","Joker","Hazard","Lonewulf","Patches"};
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
				class Lonewulf
				{
					label = "Lonewulf";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Patches
				{
					label = "Patches";
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
		Helm_Camo = "Desert";
		Person = "Panzer";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Snow:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Urban:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Woodland:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Panzer";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Panzer_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Panzer_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		//Ithias
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Ithias";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Snow:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Urban:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Woodland:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Ithias";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ithias_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Ithias_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		//Ryuu
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Ryuu";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Snow:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Urban:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Woodland:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Ryuu";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Ryuu_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Ryuu_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		//Lonewulf
		class 53rd_Custom_Helmet_Lonewulf_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Lonewulf";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Lonewulf_Snow:53rd_Custom_Helmet_Lonewulf_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Lonewulf_Urban:53rd_Custom_Helmet_Lonewulf_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Lonewulf_Woodland:53rd_Custom_Helmet_Lonewulf_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Lonewulf";
        dp="no";
		};
		class 53rd_Custom_Helmet_Lonewulf_Snow_dp:53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Lonewulf_Urban_dp:53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Lonewulf_Woodland_dp:53rd_Custom_Helmet_Lonewulf_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		
		//Body
		class 53rd_Custom_Helmet_Body_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Body";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Body_Snow:53rd_Custom_Helmet_Body_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Body_Urban:53rd_Custom_Helmet_Body_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Body_Woodland:53rd_Custom_Helmet_Body_Desert
		{
		Helm_Camo = "Woodland";
		};
		
        //Fixer
        class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Fixer";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Snow:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Urban:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Woodland:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Fixer";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Fixer_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Fixer_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		
		//Hazard
		class 53rd_Custom_Helmet_Hazard_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Hazard";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Hazard_Snow:53rd_Custom_Helmet_Hazard_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Hazard_Urban:53rd_Custom_Helmet_Hazard_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Hazard_Woodland:53rd_Custom_Helmet_Hazard_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Hazard_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Hazard";
        dp="no";
		};
		class 53rd_Custom_Helmet_Hazard_Snow_dp:53rd_Custom_Helmet_Hazard_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Hazard_Urban_dp:53rd_Custom_Helmet_Hazard_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Hazard_Woodland_dp:53rd_Custom_Helmet_Hazard_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		
		//Hellfire
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Hellfire";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Snow:53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Urban:53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Woodland:53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Hellfire";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Hellfire_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Hellfire_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
		
		//Patches
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Patches";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Snow:53rd_Custom_Helmet_Vac_Sealed_Patches_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Urban:53rd_Custom_Helmet_Vac_Sealed_Patches_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Woodland:53rd_Custom_Helmet_Vac_Sealed_Patches_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Patches";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Patches_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Patches_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Patches_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Patches_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
        
		//Tikles
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Tikles";
        dp="yes";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Snow:53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Urban:53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Woodland:53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert
		{
		Helm_Camo = "Woodland";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Tikles";
        dp="no";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Snow_dp:53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Urban_dp:53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_Custom_Helmet_Vac_Sealed_Tikles_Woodland_dp:53rd_Custom_Helmet_Vac_Sealed_Tikles_Desert_dp
		{
		Helm_Camo = "Woodland";
		};
        
		//Cherryy
		class 53rd_AA_Cherry_DS
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Cherryy";
        dp="yes";
		};
		class 53rd_AA_Cherry_WN:53rd_AA_Cherry_DS
		{
		Helm_Camo = "Snow";
		};
		class 53rd_AA_Cherry_UB:53rd_AA_Cherry_DS
		{
		Helm_Camo = "Urban";
		};
		class 53rd_AA_Cherry_WD:53rd_AA_Cherry_DS
		{
		Helm_Camo = "Woodland";
		};

        
        //armors
		//Fixer
		class 53rd_Custom_Fixer_Woodland
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Woodland";
		Person = "Fixer";
		};
		class 53rd_Custom_Armor_Fixer_Desert:53rd_Custom_Fixer_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Custom_Armor_Fixer_Snow:53rd_Custom_Fixer_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Fixer_Urban:53rd_Custom_Fixer_Woodland
		{
		Vest_Camo = "Urban";
		};
		
		//Body
		class 53rd_Custom_Armor_Body_Desert
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Desert";
		Person = "Body";
		};
		class 53rd_Custom_Armor_Body_Snow:53rd_Custom_Armor_Body_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Body_Urban:53rd_Custom_Armor_Body_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Custom_Armor_Body_Woodland:53rd_Custom_Armor_Body_Desert
		{
		Vest_Camo = "Woodland";
		};

        //Panzer
		class 53rd_Custom_Armor_Panzer_Desert
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Desert";
		Person = "Panzer";
		};
		class 53rd_Custom_Armor_Panzer_Snow:53rd_Custom_Armor_Panzer_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Panzer_Urban:53rd_Custom_Armor_Panzer_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Custom_Armor_Panzer_Woodland:53rd_Custom_Armor_Panzer_Desert
		{
		Vest_Camo = "Woodland";
		};

        //Ryuu
		class 53rd_Custom_Armor_Ryuu_Desert
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Desert";
		Person = "Ryuu";
		};
		class 53rd_Custom_Armor_Ryuu_Snow:53rd_Custom_Armor_Ryuu_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Ryuu_Urban:53rd_Custom_Armor_Ryuu_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Custom_Armor_Ryuu_Woodland:53rd_Custom_Armor_Ryuu_Desert
		{
		Vest_Camo = "Woodland";
		};
		
		//Ithias
		class 53rd_Custom_Armor_Ithias_Desert
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Desert";
		Person = "Ithias";
		};
		class 53rd_Custom_Armor_Ithias_Snow:53rd_Custom_Armor_Ithias_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Ithias_Urban:53rd_Custom_Armor_Ithias_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Custom_Armor_Ithias_Woodland:53rd_Custom_Armor_Ithias_Desert
		{
		Vest_Camo = "Woodland";
		};
		
		//Joker
		class 53rd_Custom_Armor_Joker_Desert
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Desert";
		Person = "Joker";
		};
		class 53rd_Custom_Armor_Joker_Snow:53rd_Custom_Armor_Joker_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Joker_Urban:53rd_Custom_Armor_Joker_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Custom_Armor_Joker_Woodland:53rd_Custom_Armor_Joker_Desert
		{
		Vest_Camo = "Woodland";
		};
        
        //Hazard
		class 53rd_Custom_Armor_Hazard_Woodland
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Woodland";
		Person = "Hazard";
		};
		class 53rd_Custom_Armor_Hazard_Desert:53rd_Custom_Armor_Hazard_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Custom_Armor_Hazard_Snow:53rd_Custom_Armor_Hazard_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Hazard_Urban:53rd_Custom_Armor_Hazard_Woodland
		{
		Vest_Camo = "Urban";
		};
        
        //Lonewulf
		class 53rd_Custom_Armor_Lonewulf_Woodland
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Woodland";
		Person = "Lonewulf";
		};
		class 53rd_Custom_Armor_Lonewulf_Desert:53rd_Custom_Armor_Lonewulf_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Custom_Armor_Lonewulf_Snow:53rd_Custom_Armor_Lonewulf_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Lonewulf_Urban:53rd_Custom_Armor_Lonewulf_Woodland
		{
		Vest_Camo = "Urban";
		};
        
        //Patches
		class 53rd_Custom_Armor_Patches_Woodland
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Woodland";
		Person = "Patches";
		};
		class 53rd_Custom_Armor_Patches_Desert:53rd_Custom_Armor_Patches_Woodland
		{
		Vest_Camo = "Desert";
		};
		class 53rd_Custom_Armor_Patches_Snow:53rd_Custom_Armor_Patches_Woodland
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Patches_Urban:53rd_Custom_Armor_Patches_Woodland
		{
		Vest_Camo = "Urban";
		};

	};
};