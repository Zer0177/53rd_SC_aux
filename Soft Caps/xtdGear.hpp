class XtdGearModels
{
	class CfgWeapons
	{
		class Soft_Caps
		{
			label = "Soft Caps";
			author = "Ithias/Body";
			options[] = {"Type","Camo"};
			
			class Type
			{
				label = "Type";
				values[] = {"Boonie_Hat","Patrol_Cap","Military_Cap","Stetson"};
				changeingame = 1;
                changedelay  = 0;
				class Boonie_Hat
				{
					label = "Boonie Hat";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Patrol_Cap
				{
					label = "Patrol Cap";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class Military_Cap
				{
					label = "Soft Cap";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
            };
			class Camo
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
		class Berets
		{
			label = "Berets";
			author = "Ithias/Body";
			options[] = {"Type"};
			
			class Type
			{
				label = "Type";
				values[] = {"heph","heph_med","heph_med_led","vol"};
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
				class vol
				{
					label = "Volare";
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
		
		//Berets
        class 53rd_Beret_Hephaestus
		{
		model = "Berets";
		Type = "heph";
		};
		class 53rd_Beret_Hephaestus_med:53rd_Beret_Hephaestus
		{
		Type = "heph_med";
		};
		class 53rd_Beret_Hephaestus_med_led:53rd_Beret_Hephaestus
		{
		Type = "heph_med_led";
		};
		class 53rd_Beret_Volare:53rd_Beret_Hephaestus
		{
		Type = "vol";
		};

		//BOONIE
		class 53rd_Soft_Cap_Boonie_Urban
		{
		model= "Soft_Caps"
		Type = "Boonie_Hat";
		Camo = "Urban"
		};
		class 53rd_Soft_Cap_Boonie_Woodland:53rd_Soft_Cap_Boonie_Urban
		{
		Camo = "Woodland";
		};
		class 53rd_Soft_Cap_Boonie_Desert:53rd_Soft_Cap_Boonie_Urban
		{
		Camo = "Desert";
		};
		class 53rd_Soft_Cap_Boonie_Snow:53rd_Soft_Cap_Boonie_Urban
		{
		Camo = "Snow";
		};

		//Patrol Cap
		class 53rd_Soft_Cap_Patrol_Cap_Black
		{
		model= "Soft_Caps"
		Type = "Patrol_Cap";
		Camo = "Black";
		};
		class 53rd_Soft_Cap_Patrol_Cap_Urban:53rd_Soft_Cap_Patrol_Cap_Black
		{
		Camo = "Urban";
		};
		class 53rd_Soft_Cap_Patrol_Cap_Desert:53rd_Soft_Cap_Patrol_Cap_Black
		{
		Camo = "Desert";
		};
		class 53rd_Soft_Cap_Patrol_Cap_Woodland:53rd_Soft_Cap_Patrol_Cap_Black
		{
		Camo = "Woodland";
		};
		
		//Military Cap
		class 53rd_Soft_Cap_Military_Cap_Urban
		{
		model= "Soft_Caps"
		Type = "Military_Cap";
		Camo = "Urban";
		};
		class 53rd_Soft_Cap_Military_Cap_Woodland:53rd_Soft_Cap_Military_Cap_Urban
		{
		Camo = "Woodland";
		};
		class 53rd_Soft_Cap_Military_Cap_Desert:53rd_Soft_Cap_Military_Cap_Urban
		{
		Camo = "Desert";
		};
	};
};