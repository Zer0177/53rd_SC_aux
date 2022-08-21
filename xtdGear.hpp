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
				values[] = {"blk","blu","beret"};
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
				class beret
				{
					label = "Beret";
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
				values[] = {"heph","heph_med","heph_med_led","ath","vol","tart","stet"};
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
            };
		};
		class CustomArmor
		{
			label = "53rd Customs";
			author = "Seven";
			options[] = {"person"};
			
			class person
			{
				label = "Name";
				values[] = {"body","ithias","ryu","joker","panzer","rose","fixer"};
				class body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class ithias
				{
					label = "Ithias";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class ryu
				{
					label = "Ryu";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class joker
				{
					label = "Joker";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class panzer
				{
					label = "Panzer";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class rose
				{
					label = "Rose";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class fixer
				{
					label = "Fixer";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
            };
		};
		class CustomHelm
		{
			label = "53rd Customs";
			author = "Seven";
			options[] = {"person"};
			
			class person
			{
				label = "Name";
				values[] = {"body","ithias","ryu","primal","fixer"};
				class body
				{
					label = "Body";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class ithias
				{
					label = "Ithias";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class ryu
				{
					label = "Ryu";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class primal
				{
					label = "Primal";
					image = "#(rgb,8,8,3)color(0.4,0.4,0.4,1)";
				};
				class fixer
				{
					label = "Fixer";
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
        //custom start
        //custom armor
        class Armor_Hephaestus_PL
		{
		model = "CustomArmor";
		person = "body";
		};
		class 53rd_Athena_Armor_Ithias:Armor_Hephaestus_PL
		{
		person = "ithias";
		};
		class Armor_Hephaestus_Ryu:Armor_Hephaestus_PL
		{
		person = "ryu";
		};
		class Armor_Hephaestus_Joker:Armor_Hephaestus_PL
		{
		person = "joker";
		};
		class Armor_Hephaestus_Panzer:Armor_Hephaestus_PL
		{
		person = "panzer";
		};
		class 53rd_M52A_Rose_NCO:Armor_Hephaestus_PL
		{
		person = "rose";
		};
		class 53rd_M52A_Fixer_NCO:Armor_Hephaestus_PL
		{
		person = "fixer";
		};
        
        //custom helm
        class 53rd_CH252_GREY_HEV_Sealed_PLC_SLV
		{
		model = "CustomHelm";
		person = "body";
		};
		class 53rd_Athena_Helmet_Ithias:53rd_CH252_GREY_HEV_Sealed_PLC_SLV
		{
		person = "ithias";
		};
		class 53rd_CH252_GREY_HEV_RYU_SL_SLV:53rd_CH252_GREY_HEV_Sealed_PLC_SLV
		{
		person = "ryu";
		};
		class 53rd_CH252_GREY_HEV_Sealed_Primal:53rd_CH252_GREY_HEV_Sealed_PLC_SLV
		{
		person = "primal";
		};
	};
};