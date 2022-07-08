class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusHelm
		{
			label = "Hephaestus Helmets";
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
				values[] = {"rifle","spc","tl","sl","plt","medic","medic_nco","medic_plt","beret"};
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
					label = "TL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class sl
				{
					label = "SL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class plt
				{
					label = "Plt";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic_nco
				{
					label = "NCO Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic_plt
				{
					label = "Plt Medic";
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
		class HephaestusVest
		{
			label = "Hephaestus Vests";
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
				values[] = {"rifle","spc","tl","sl","medic","medic_plt"};
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
					label = "TL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class sl
				{
					label = "SL";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic
				{
					label = "Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
				class medic_plt
				{
					label = "Plt Medic";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
			};
		};
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
		class 53rd_Beret_Volare:53rd_VX19_Black_Helmet
		{
		type = "beret";
		};
        
        class 53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		model = "HephaestusHelm";
		environment = "def";
		type = "rifle";
		pol = "on";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SPC_SLV:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "spc";
		};
		class 53rd_CH252_GREY_HEV_Sealed_TL_SLV:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "tl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SL_SLV:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "sl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_PLS_SLV:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "plt";
		};
		class 53rd_CH252_GREY_CORP_Sealed_SLV:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "medic";
		};
		class 53rd_CH252_GREY_CORP_Sealed_GLD:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "medic_nco";
		};
		class 53rd_CH252_GREY_CORP_Sealed_PLM:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "medic_plt";
		};
		class 53rd_Beret_Hephaestus:53rd_CH252_GREY_HEV_Sealed_PFC_SLV
		{
		type = "beret";
		};
        
		class 53rd_CH252_Wood_HEV_Sealed_PFC_SLV
		{
		model = "HephaestusHelm";
		environment = "wood";
		type = "rifle";
		pol = "on";
		};
		class 53rd_CH252_DES_HEV_Sealed_PFC_SLV:53rd_CH252_Wood_HEV_Sealed_PFC_SLV
		{
		environment = "des";
		};
		class 53rd_CH252_WIN_HEV_Sealed_PFC_SLV:53rd_CH252_Wood_HEV_Sealed_PFC_SLV
		{
		environment = "snow";
		};
		class 53rd_CH252_JUG_HEV_Sealed_PFC_SLV:53rd_CH252_Wood_HEV_Sealed_PFC_SLV
		{
		environment = "jung";
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
        
        class 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		model = "HephaestusHelm";
		environment = "def";
		type = "rifle";
		pol = "off";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SPC_SLV_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "spc";
		};
		class 53rd_CH252_GREY_HEV_Sealed_TL_SLV_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "tl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SL_SLV_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "sl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_PLS_SLV_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "plt";
		};
		class 53rd_CH252_GREY_CORP_Sealed_SLV_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "medic";
		};
		class 53rd_CH252_GREY_CORP_Sealed_GLD_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "medic_nco";
		};
		class 53rd_CH252_GREY_CORP_Sealed_PLM_dp:53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp
		{
		type = "medic_plt";
		};
        
		class 53rd_CH252_Wood_HEV_Sealed_PFC_SLV_dp
		{
		model = "HephaestusHelm";
		environment = "wood";
		type = "rifle";
		pol = "off";
		};
		class 53rd_CH252_DES_HEV_Sealed_PFC_SLV_dp:53rd_CH252_Wood_HEV_Sealed_PFC_SLV_dp
		{
		environment = "des";
		};
		class 53rd_CH252_WIN_HEV_Sealed_PFC_SLV_dp:53rd_CH252_Wood_HEV_Sealed_PFC_SLV_dp
		{
		environment = "snow";
		};
		class 53rd_CH252_JUG_HEV_Sealed_PFC_SLV_dp:53rd_CH252_Wood_HEV_Sealed_PFC_SLV_dp
		{
		environment = "jung";
		};
        //Armor
		class Armor_Hephaestus_Rifleman
		{
		model = "HephaestusVest";
		environment = "def";
		type = "rifle";
		};
		class Armor_Hephaestus_Specialist:Armor_Hephaestus_Rifleman
		{
		type = "spc";
		};
		class Armor_Hephaestus_Team_Leader:Armor_Hephaestus_Rifleman
		{
		type = "tl";
		};
		class Armor_Hephaestus_Squad_Leader:Armor_Hephaestus_Rifleman
		{
		type = "sl";
		};
		class Armor_Hephaestus_Medic:Armor_Hephaestus_Rifleman
		{
		type = "medic";
		};
		class Armor_Hephaestus_Platoon_Medic:Armor_Hephaestus_Rifleman
		{
		type = "medic_plt";
		};
        
		class Armor_Hephaestus_Rifleman_WDL
		{
		model = "HephaestusVest";
		environment = "wood";
		type = "rifle";
		};
		class Armor_Hephaestus_Rifleman_DES:Armor_Hephaestus_Rifleman_WDL
		{
		environment = "des";
		};
		class Armor_Hephaestus_Rifleman_WIN:Armor_Hephaestus_Rifleman_WDL
		{
		environment = "snow";
		};
		class Armor_Hephaestus_Rifleman_JUG:Armor_Hephaestus_Rifleman_WDL
		{
		environment = "jung";
		};
	};
};