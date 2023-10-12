class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusCamoCustoms
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
				values[] = {"Body","Cherry","Panzer"};
				class Body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Cherry
				{
					label = "Cherry";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Panzer
				{
					label = "Panzer";
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
		class HephaestusCustomCamo
		{
			label = "Hephaestus Custom Vests";
			author = "Body";
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
				values[] = {"Fixer","Body","Panzer","Cherry"};
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
				class Cherry
				{
					label = "Cherry";
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
        
		//Bodyy
		class 53rd_OP_Body_DS
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Bodyy";
        dp="yes";
		};
		class 53rd_OP_Body_WN:53rd_OP_Body_DS
		{
		Helm_Camo = "Snow";
		};
		class 53rd_OP_Body_UB:53rd_OP_Body_DS
		{
		Helm_Camo = "Urban";
		};
		class 53rd_OP_Body_WD:53rd_OP_Body_DS
		{
		Helm_Camo = "Woodland";
		};
		
		class 53rd_OP_Body_DS_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Bodyy";
        dp="yes";
		};
		class 53rd_OP_Body_WN_dp:53rd_OP_Body_DS_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_OP_Body_UB_dp:53rd_OP_Body_DS_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_OP_Body_WD_dp:53rd_OP_Body_DS_dp
		{
		Helm_Camo = "Woodland";
		};
        
		//Cherryy
		class 53rd_OP_Cherry_DS
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Cherryy";
        dp="yes";
		};
		class 53rd_OP_Cherry_WN:53rd_OP_Cherry_DS
		{
		Helm_Camo = "Snow";
		};
		class 53rd_OP_Cherry_UB:53rd_OP_Cherry_DS
		{
		Helm_Camo = "Urban";
		};
		class 53rd_OP_Cherry_WD:53rd_OP_Cherry_DS
		{
		Helm_Camo = "Woodland";
		};
		
		class 53rd_OP_Cherry_DS_dp
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Cherryy";
        dp="yes";
		};
		class 53rd_OP_Cherry_WN_dp:53rd_OP_Cherry_DS_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_OP_Cherry_UB_dp:53rd_OP_Cherry_DS_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_OP_Cherry_WD_dp:53rd_OP_Cherry_DS_dp
		{
		Helm_Camo = "Woodland";
		};
		
		//Panzery
		class 53rd_OP_Panzer_DS
		{
		model = "HephaestusCustomHelm";
		Helm_Camo = "Desert";
		Person = "Panzery";
        dp="yes";
		};
		class 53rd_OP_Panzer_WN:53rd_OP_Panzer_DS
		{
		Helm_Camo = "Snow";
		};
		class 53rd_OP_Panzer_UB:53rd_OP_Panzer_DS
		{
		Helm_Camo = "Urban";
		};
		class 53rd_OP_Panzer_WD:53rd_OP_Panzer_DS
		{
		Helm_Camo = "Woodland";
		};
		
		class 53rd_OP_Panzer_DS_dp
		{
		model = "HephaestusCustomHelm";
		class 53rd_OP_Panzer_WN_dp:53rd_OP_Panzer_DS_dp
		{
		Helm_Camo = "Snow";
		};
		class 53rd_OP_Panzer_UB_dp:53rd_OP_Panzer_DS_dp
		{
		Helm_Camo = "Urban";
		};
		class 53rd_OP_Panzer_WD_dp:53rd_OP_Panzer_DS_dp
		{
		Helm_Camo = "Woodland";
		};
        would dw
		//Fixer
		class 53rd_Custom_Fixer_Woodland
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Woodland";aw
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
		class 53rd_Custom_Body_Desert
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

        //Cherry
		class 53rd_Custom_Armor_Cherry_Desert
		{
		model = "HephaestusCustomVest";
		Vest_Camo = "Desert";
		Person = "Cherry";
		};
		class 53rd_Custom_Armor_Cherry_Snow:53rd_Custom_Armor_Cherry_Desert
		{
		Vest_Camo = "Snow";
		};
		class 53rd_Custom_Armor_Cherry_Urban:53rd_Custom_Armor_Cherry_Desert
		{
		Vest_Camo = "Urban";
		};
		class 53rd_Custom_Armor_Cherry_Woodland:53rd_Custom_Armor_Cherry_Desert
		{
		Vest_Camo = "Woodland";
		};
	};
};