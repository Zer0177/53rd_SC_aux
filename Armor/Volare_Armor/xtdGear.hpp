class XtdGearModels
{
	class CfgWeapons
	{
		class VolareHelm
		{
			label = "Volare Helmets";
			author = "Seven";
			options[] = {"type","pol","Armor"};
			
			class Armor
			{
				label = "Armor";
				values[] = {"Pilot","Combat"};
				class Pilot
				{
					label = "Pilot";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Combat
				{
					label = "Combat";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"blk","blu","red"};
				changeingame = 1;
                changedelay  = 0;
				class blk
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class blu
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class snow
				{
					label = "Snow";
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
		class VolareArm
		{
			label = "Volare Armor";
			author = "Seven";
			options[] = {"type","Armor"};
			
			class Armor
			{
				label = "Armor";
				values[] = {"Pilot","Combat"};
				class Pilot
				{
					label = "Pilot";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class Combat
				{
					label = "Combat";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"blk","blu","red","nco","woodland","urban","desert","snow";
				changeingame = 1;
                changedelay  = 0;
				class blk
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class blu
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class red
				{
					label = "Red";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class snow
				{
					label = "nco";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class blk
				{
					label = "woodland";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class blu
				{
					label = "urban";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class red
				{
					label = "desert";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class snow
				{
					label = "Snow";
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
        //Helmets
        class 53rd_VX19_Black_Helmet
		{
		model = "VolareHelm";
		Armor = "Pilot";
		type = "blk";
		pol = "on";
		};
		class 53rd_VX19_Blue_Helmet:53rd_VX19_Black_Helmet
		{
		type = "blu";
		};
		class 53rd_VX19_Red_Helmet:53rd_VX19_Black_Helmet
		{
		type = "red";
		};
		class 53rd_VX19_Snow_Helmet:53rd_VX19_Black_Helmet
		{
		type = "snow";
		};
        
        
        //dp
        class 53rd_VX19_Black_Helmet_dp
		{
		model = "VolareHelm";
		Armor = "Pilot";
		type = "blk";
		pol = "off";
		};
		class 53rd_VX19_Blue_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		type = "blu";
		};
		class 53rd_VX19_Red_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		type = "red";
		};
		class 53rd_VX19_Snow_Helmet_dp:53rd_VX19_Black_Helmet_dp
		{
		type = "snow";
		};

        class 53rd_Volare_Combat_Armor_Urban
		{
		model = "VolareArm";
		Armor = "Armor";
		type = "urban";
		};
		class 53rd_Volare_Combat_Armor_Woodland:53rd_Volare_Combat_Armor_Urban
		{
		type = "woodland";
		};
		class 53rd_Volare_Combat_Armor_Desert:53rd_Volare_Combat_Armor_Urban
		{
		type = "desert";
		};
		class 53rd_Volare_Combat_Armor_Snow:53rd_Volare_Combat_Armor_Urban
		{
		type = "snow";
		};

		class 53rd_V_Pilot_Armor_Black
		{
		model = "VolareArm";
		Armor = "Pilot";
		type = "urban";
		};
		class 53rd_V_Pilot_Armor_Black_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "blk";
		};
		class 53rd_V_Pilot_Armor_BU_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "blu";
		};
		class 53rd_V_Pilot_Armor_Red_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "red";
		};
		class 53rd_V_Pilot_Armor_Red_NCO:53rd_V_Pilot_Armor_Black
		{
		type = "nco";
		};
		class 53rd_V_Pilot_Armor_White:53rd_V_Pilot_Armor_Black
		{
		type = "snow";
		};    		 		
	};
};