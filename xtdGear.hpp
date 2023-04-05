class XtdGearModels
{
	class CfgWeapons
	{
		class VolareHelm
		{
			label = "Volare Helmets";
			author = "Seven";
			options[] = {"type","pol"};
			
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
		class SoftCap
		{
			label = "Soft Cap";
			author = "Seven";
			options[] = {"detach"};
			
			class detach
			{
				label = "detach";
				values[] = {"heph","heph_med","heph_med_led","ath","vol","tart","stet","boonie","patrol","cap"};
				changeingame = 1;
                changedelay  = 0;
				class heph
				{
					label = "Hephaestus";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class heph_med
				{
					label = "Medical";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class heph_med_led
				{
					label = "Med Leader";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class ath
				{
					label = "Athena";
					image = "#(rgb,8,8,3)color(0.66,0.58,0.09,1)";
				};
				class vol
				{
					label = "Volare";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
				class tart
				{
					label = "Tartarus";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class stet
				{
					label = "Stetson";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
				class boonie
				{
					label = "Boonie";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class patrol
				{
					label = "Patrol Cap";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class cap
				{
					label = "Soft Cap";
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
        //Helmets
        class 53rd_VX19_Black_Helmet
		{
		model = "VolareHelm";
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
        
        //berets
        class 53rd_Beret_Hephaestus
		{
		model = "SoftCap";
		detach = "heph";
		};
		class 53rd_Beret_Hephaestus_med:53rd_Beret_Hephaestus
		{
		detach = "heph_med";
		};
		class 53rd_Beret_Hephaestus_med_led:53rd_Beret_Hephaestus
		{
		detach = "heph_med_led";
		};
		class 53rd_Beret_Athena:53rd_Beret_Hephaestus
		{
		detach = "ath";
		};
		class 53rd_Beret_Volare:53rd_Beret_Hephaestus
		{
		detach = "vol";
		};
		class 53rd_Beret_Tart:53rd_Beret_Hephaestus
		{
		detach = "tart";
		};
		class DAR_Stetson_53rd:53rd_Beret_Hephaestus
		{
		detach = "stet";
		};
	};
};