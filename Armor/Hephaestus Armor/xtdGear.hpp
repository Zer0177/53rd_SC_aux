class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusMSRHelmets
		{
			label = "Hephaestus MSR Helmets";
			author = "Tsuki";
			options[] = {"Camo","Type","Visor"};
			
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
				values[] = {"Regular","Medic"};
				class Regular
				{
					label = "Regular";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class Visor
			{
				label = "Visor";
				values[] = {"No","Yes"};
				class No
				{
					label = "No";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Yes
				{
					label = "Yes";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class HephaestusMSRArmors
		{
			label = "Hephaestus MSR Armors";
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
				values[] = {"Rifleman","Specialist","NCO","Medic"};
				class Rifleman
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Specialist
				{
					label = "Specialist";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class NCO
				{
					label = "NCO";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Medic
				{
					label = "Medic";
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
		//Hephaestus Helmets
		
		//Visor
		class 53rd_Hephaestus_CH252_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Urban";
		Type = "Regular";
		Visor = "Yes";
		};
		class 53rd_Hephaestus_Rifleman_CH252_Woodland_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Woodland";
		Type = "Regular";
		Visor = "Yes";
		};
		class 53rd_Hephaestus_Rifleman_CH252_Desert_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Desert";
		Type = "Regular";
		Visor = "Yes";
		};
		class 53rd_Hephaestus_Rifleman_CH252_Winter_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Snow";
		Type = "Regular";
		Visor = "Yes";
		};
		class 53rd_Hephaestus_CH252_Visor_MV
		{
		model = "HephaestusMSRHelmets";
		Camo = "Urban";
		Type = "Medic";
		Visor = "Yes";
		};
		
		//No Visor
		class 53rd_Hephaestus_Rifleman_CH252_Urban_No_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Urban";
		Type = "Regular";
		Visor = "No";
		};
		class 53rd_Hephaestus_Rifleman_CH252_Woodland_No_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Woodland";
		Type = "Regular";
		Visor = "No";
		};
		class 53rd_Hephaestus_Rifleman_CH252_Desert_No_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Desert";
		Type = "Regular";
		Visor = "No";
		};
		class 53rd_Hephaestus_Rifleman_CH252_Winter_No_Visor
		{
		model = "HephaestusMSRHelmets";
		Camo = "Snow";
		Type = "Regular";
		Visor = "No";
		};
		class 53rd_Hephaestus_CH252_Visor_MNV
		{
		model = "HephaestusMSRHelmets";
		Camo = "Urban";
		Type = "Medic";
		Visor = "No";
		};
		
		//Hephaestus Armors
		//Rifleman
		class 53rd_Hephaestus_uniform_MSR_Rifleman_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Urban";
		Type = "Rifleman";
		};
		class 53rd_Hephaestus_uniform_MSR_Rifleman_WDL: 53rd_Hephaestus_uniform_MSR_Rifleman_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Woodland";
		Type = "Rifleman";
		};
		class 53rd_Hephaestus_uniform_MSR_Rifleman_Des: 53rd_Hephaestus_uniform_MSR_Rifleman_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Desert";
		Type = "Rifleman";
		};
		class 53rd_Hephaestus_uniform_MSR_Rifleman_WTR: 53rd_Hephaestus_uniform_MSR_Rifleman_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Snow";
		Type = "Rifleman";
		};
		
		//Specialist
		class 53rd_Hephaestus_uniform_MSR_SPC_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Urban";
		Type = "Specialist";
		};
		class 53rd_Hephaestus_uniform_MSR_SPC_WDL: 53rd_Hephaestus_uniform_MSR_SPC_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Woodland";
		Type = "Specialist";
		};
		class 53rd_Hephaestus_uniform_MSR_SPC_DES: 53rd_Hephaestus_uniform_MSR_SPC_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Desert";
		Type = "Specialist";
		};
		class 53rd_Hephaestus_uniform_MSR_SPC_WTR: 53rd_Hephaestus_uniform_MSR_SPC_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Snow";
		Type = "Specialist";
		};
		
		//NCO
		class 53rd_Hephaestus_uniform_MSR_SL_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Urban";
		Type = "NCO";
		};
		class 53rd_Hephaestus_uniform_MSR_SL_Woodland: 53rd_Hephaestus_uniform_MSR_SL_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Woodland";
		Type = "NCO";
		};
		class 53rd_Hephaestus_uniform_MSR_SL_Desert: 53rd_Hephaestus_uniform_MSR_SL_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Desert";
		Type = "NCO";
		};
		class 53rd_Hephaestus_uniform_MSR_SL_Winter: 53rd_Hephaestus_uniform_MSR_SL_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Snow";
		Type = "NCO";
		};
		
		//Medic
		class 53rd_Hephaestus_uniform_MSR_Medic_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Urban";
		Type = "Medic";
		};
		class 53rd_Hephaestus_uniform_MSR_Medic_Woodland: 53rd_Hephaestus_uniform_MSR_Medic_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Woodland";
		Type = "Medic";
		};
		class 53rd_Hephaestus_uniform_MSR_Medic_Desert: 53rd_Hephaestus_uniform_MSR_Medic_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Desert";
		Type = "Medic";
		};
		class 53rd_Hephaestus_uniform_MSR_Medic_Winter: 53rd_Hephaestus_uniform_MSR_Medic_Urban
		{
		model = "HephaestusMSRArmors";
		Camo = "Snow";
		Type = "Medic";
		};
	};
};