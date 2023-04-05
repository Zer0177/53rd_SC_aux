class XtdGearModels
{
	class CfgWeapons
	{
		class SpartanHelms
		{
			label = "Spartan Helmets";
			author = "Seven";
			options[] = {"type","pol"};
			
			class type
			{
				label = "Type";
				values[] = {"MKV","EOD","AA","Scout"};
				changeingame = 1;
                changedelay  = 0;
				class blk
				{
					label = "MKV";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class blu
				{
					label = "EOD";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class red
				{
					label = "AA";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class snow
				{
					label = "Scout";
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
		class Soft_Wear
		{
			label = "Softies";
			author = "Seven";
			options[] = {"detach","camo"};
			
			class detach
			{
				label = "detach";
				values[] = {"boonie","UNSC","cap"};
				changeingame = 1;
                changedelay  = 0;
				class boonie
				{
					label = "Boonie hat";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class UNSC
				{
					label = "UNSC Cap";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class cap
				{
					label = "Soft Cap";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
            };
			class camo
			{
				label = "Camo";
				values[] = {"Urban","Woodland","Desert","Snow","Black"};
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
				class Black
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0.8,0.8,0.8,1)";
				};
			};
		};
	};
};
class XtdGearInfos
{
    class CfgWeapons 
    {
		//UNSC CAP
		class 53rd_UNSC_Cap_Black
		{
		model= "Soft_Wear"
		detach = "UNSC";
		camo = "Black";
		};
		class 53rd_UNSC_Cap_Urban:53rd_UNSC_Cap_Black
		{
		detach = "UNSC";
		camo = "Urban";
		};
		class 53rd_UNSC_Cap_Desert:53rd_UNSC_Cap_Black
		{
		detach = "UNSC";
		camo = "Desert";
		};
		class 53rd_UNSC_Cap_Woodland:53rd_UNSC_Cap_Black
		{
		detach = "UNSC";
		camo = "Woodland";
		};
		//BOONIE
		class 53rd_Boonie_gry
		{
		model= "Soft_Wear"
		detach = "boonie";
		camo = "Urban"
		};
		class 53rd_Boonie_Woodland:53rd_Boonie_gry
		{
		detach = "boonie";
		camo = "Woodland";
		};
		class 53rd_Boonie_Des:53rd_Boonie_gry
		{
		detach = "boonie";
		camo = "Desert";
		};
		class 53rd_Boonie_Winter:53rd_Boonie_gry
		{
		detach = "boonie";
		camo = "Snow";
		};
		//Soft Caps
		class 53rd_Soft_Urban
		{
		model= "Soft_Wear"
		detach = "cap";
		camo = "Urban";
		};
		class 53rd_Soft_Woodland:53rd_Soft_Urban
		{
		detach = "cap";
		camo = "Woodland";
		};
		class 53rd_Soft_Desert:53rd_Soft_Urban
		{
		detach = "cap";
		camo = "Desert";
		};
	};
};