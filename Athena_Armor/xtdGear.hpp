class XtdGearModels
{
	class CfgWeapons
	{
		class AthenaHelm
		{
			label = "Athena Helmets";
			author = "Seven";
			options[] = {"environment","type","pol"};
			
			class environment
			{
				label = "Camo";
				values[] = {"def","wood","des","snow"};
				class def
				{
					label = "Default";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class wood
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class des
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"rifle","nco","medic","plt"};
				changeingame = 1;
                changedelay  = 0;
				class rifle
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class nco
				{
					label = "NCO";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class plt
				{
					label = "Plt";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class pol
			{
				label = "Polarization";
				values[] = {"on","off"};
				changeingame = 1;
                changedelay  = 0;
				class on
				{
					label = "On";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class off
				{
					label = "Off";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
		class AthenaVest
		{
			label = "Athena Vests";
			author = "Seven";
			options[] = {"environment","type"};
			
			class environment
			{
				label = "Camo";
				values[] = {"def","wood","des","snow"};
				class def
				{
					label = "Default";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class wood
				{
					label = "Woodland";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class des
				{
					label = "Desert";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class snow
				{
					label = "Snow";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"rifle","spc","tl","sl","nco","medic"};
				changeingame = 1;
                changedelay  = 0;
				class rifle
				{
					label = "Rifleman";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class spc
				{
					label = "Spc";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class tl
				{
					label = "Team Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class sl
				{
					label = "Squad Lead";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class nco
				{
					label = "NCO";
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
        //helmuts
		class 53rd_Athena_Helmet_Rifleman
		{
		model = "AthenaHelm";
		environment = "def";
		type = "rifle";
		pol = "on";
		};
		class 53rd_Athena_Helmet_NCO:53rd_Athena_Helmet_Rifleman
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Ithias:53rd_Athena_Helmet_Rifleman
		{
		type = "plt";
		};
		class 53rd_Athena_Helmet_Medic:53rd_Athena_Helmet_Rifleman
		{
		type = "medic";
		};
        
		class 53rd_Athena_Helmet_Rifleman_Woodland
		{
		model = "AthenaHelm";
		environment = "wood";
		type = "rifle";
		pol = "on";
		};
		class 53rd_Athena_Helmet_NCO_Woodland:53rd_Athena_Helmet_Rifleman_Woodland
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Medic_Woodland:53rd_Athena_Helmet_Rifleman_Woodland
		{
		type = "medic";
		};
        
		class 53rd_Athena_Helmet_Rifleman_Desert
		{
		model = "AthenaHelm";
		environment = "des";
		type = "rifle";
		pol = "on";
		};
		class 53rd_Athena_Helmet_NCO_Desert:53rd_Athena_Helmet_Rifleman_Desert
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Medic_Desert:53rd_Athena_Helmet_Rifleman_Desert
		{
		type = "medic";
		};
        
		class 53rd_Athena_Helmet_Rifleman_Snow
		{
		model = "AthenaHelm";
		environment = "snow";
		type = "rifle";
		pol = "on";
		};
		class 53rd_Athena_Helmet_NCO_Snow:53rd_Athena_Helmet_Rifleman_Snow
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Medic_Snow:53rd_Athena_Helmet_Rifleman_Snow
		{
		type = "medic";
		};
        //dp
		class 53rd_Athena_Helmet_Rifleman_dp
		{
		model = "AthenaHelm";
		environment = "def";
		type = "rifle";
		pol = "off";
		};
		class 53rd_Athena_Helmet_NCO_dp:53rd_Athena_Helmet_Rifleman_dp
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Ithias_dp:53rd_Athena_Helmet_Rifleman_dp
		{
		type = "plt";
		};
		class 53rd_Athena_Helmet_Medic_dp:53rd_Athena_Helmet_Rifleman_dp
		{
		type = "medic";
		};
        
		class 53rd_Athena_Helmet_Rifleman_Woodland_dp
		{
		model = "AthenaHelm";
		environment = "wood";
		type = "rifle";
		pol = "off";
		};
		class 53rd_Athena_Helmet_NCO_Woodland_dp:53rd_Athena_Helmet_Rifleman_Woodland_dp
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Medic_Woodland_dp:53rd_Athena_Helmet_Rifleman_Woodland_dp
		{
		type = "medic";
		};
        
		class 53rd_Athena_Helmet_Rifleman_Desert_dp
		{
		model = "AthenaHelm";
		environment = "des";
		type = "rifle";
		pol = "off";
		};
		class 53rd_Athena_Helmet_NCO_Desert_dp:53rd_Athena_Helmet_Rifleman_Desert_dp
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Medic_Desert_dp:53rd_Athena_Helmet_Rifleman_Desert_dp
		{
		type = "medic";
		};
        
		class 53rd_Athena_Helmet_Rifleman_Snow_dp
		{
		model = "AthenaHelm";
		environment = "snow";
		type = "rifle";
		pol = "off";
		};
		class 53rd_Athena_Helmet_NCO_Snow_dp:53rd_Athena_Helmet_Rifleman_Snow_dp
		{
		type = "nco";
		};
		class 53rd_Athena_Helmet_Medic_Snow_dp:53rd_Athena_Helmet_Rifleman_Snow_dp
		{
		type = "medic";
		};
        
        //armors
		class 53rd_Athena_Armor_Rifleman
		{
		model = "AthenaVest";
		environment = "def";
		type = "rifle";
		};
		class 53rd_Athena_Armor_Specialist:53rd_Athena_Armor_Rifleman
		{
		type = "spc";
		};
		class 53rd_Athena_Armor_TL:53rd_Athena_Armor_Rifleman
		{
		type = "tl";
		};
		class 53rd_Athena_Armor_SL:53rd_Athena_Armor_Rifleman
		{
		type = "sl";
		};
		class 53rd_Athena_Armor_Ithias:53rd_Athena_Armor_Rifleman
		{
		type = "nco";
		};
		class 53rd_Athena_Armor_Medic:53rd_Athena_Armor_Rifleman
		{
		type = "medic";
		};
        
		class 53rd_Athena_Armor_Rifleman_Woodland
		{
		model = "AthenaVest";
		environment = "wood";
		type = "rifle";
		};
		class 53rd_Athena_Armor_Specialist_Woodland:53rd_Athena_Armor_Rifleman_Woodland
		{
		type = "spc";
		};
		class 53rd_Athena_Armor_TL_Woodland:53rd_Athena_Armor_Rifleman_Woodland
		{
		type = "tl";
		};
		class 53rd_Athena_Armor_SL_Woodland:53rd_Athena_Armor_Rifleman_Woodland
		{
		type = "sl";
		};
		class 53rd_Athena_Armor_Medic_Woodland:53rd_Athena_Armor_Rifleman_Woodland
		{
		type = "medic";
		};
        
		class 53rd_Athena_Armor_Rifleman_Desert
		{
		model = "AthenaVest";
		environment = "des";
		type = "rifle";
		};
		class 53rd_Athena_Armor_Specialist_Desert:53rd_Athena_Armor_Rifleman_Desert
		{
		type = "spc";
		};
		class 53rd_Athena_Armor_TL_Desert:53rd_Athena_Armor_Rifleman_Desert
		{
		type = "tl";
		};
		class 53rd_Athena_Armor_SL_Desert:53rd_Athena_Armor_Rifleman_Desert
		{
		type = "sl";
		};
		class 53rd_Athena_Armor_Medic_Desert:53rd_Athena_Armor_Rifleman_Desert
		{
		type = "medic";
		};
        
		class 53rd_Athena_Armor_Rifleman_Snow
		{
		model = "AthenaVest";
		environment = "snow";
		type = "rifle";
		};
		class 53rd_Athena_Armor_Specialist_Snow:53rd_Athena_Armor_Rifleman_Snow
		{
		type = "spc";
		};
		class 53rd_Athena_Armor_TL_Snow:53rd_Athena_Armor_Rifleman_Snow
		{
		type = "tl";
		};
		class 53rd_Athena_Armor_SL_Snow:53rd_Athena_Armor_Rifleman_Snow
		{
		type = "sl";
		};
		class 53rd_Athena_Armor_Medic_Snow:53rd_Athena_Armor_Rifleman_Snow
		{
		type = "medic";
		};
	};
};