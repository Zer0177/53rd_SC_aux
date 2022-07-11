class XtdGearModels
{
	class CfgWeapons
	{
		class HephaestusUni
		{
			label = "Hephaestus Uniforms";
			author = "Seven";
			options[] = {"environment"};
			
			class environment
			{
				label = "Camo";
				values[] = {"def","wood","des","snow","jung"};
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
				class jung
				{
					label = "Jungle";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
            };
		};
		class HephaestusHelm
		{
			label = "Hephaestus Helmets";
			author = "Seven";
			options[] = {"environment","type","pol"};
			
			class environment
			{
				label = "Camo";
				values[] = {"def","wood","des","snow","jung"};
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
				class jung
				{
					label = "Jungle";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"res","rifle","spc","tl","sl","plt","medic","medic_nco","medic_plt","beret"};
				changeingame = 1;
                changedelay  = 0;
				class res
				{
					label = "Reservist";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
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
				values[] = {"def","wood","des","snow","jung"};
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
				class jung
				{
					label = "Jungle";
					image = "#(rgb,8,8,3)color(0.295,0.325,0.126,1)";
				};
			};
			class type
			{
				label = "Type";
				values[] = {"res","rifle","spc","tl","sl","medic","medic_plt"};
				changeingame = 1;
                changedelay  = 0;
				class res
				{
					label = "Reservist";
					image = "#(rgb,8,8,3)color(0.2,0.2,0.2,0.4)";
				};
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
	};
};
class XtdGearInfos
{
    class CfgWeapons 
    {
        //Helmets
        class 53rd_BDU_Slim
		{
		model = "HephaestusUni";
		environment = "def";
		};
		class 53rd_BDU_Wdl_Slim:53rd_BDU_Slim
		{
		environment = "wood";
		};
		class 53rd_BDU_Des_Slim:53rd_BDU_Slim
		{
		environment = "des";
		};
		class 53rd_BDU_Snw_Slim:53rd_BDU_Slim
		{
		environment = "snow";
		};
		class 53rd_BDU_Jgl_Slim:53rd_BDU_Slim
		{
		environment = "jung";
		};
        
        class 53rd_CH252_GREY_Sealed_Reserve
		{
		model = "HephaestusHelm";
		environment = "def";
		type = "res";
		pol = "on";
		};
		class 53rd_CH252_GREY_HEV_Sealed_PFC_SLV:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "rifle";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SPC_SLV:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "spc";
		};
		class 53rd_CH252_GREY_HEV_Sealed_TL_SLV:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "tl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SL_SLV:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "sl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_PLS_SLV:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "plt";
		};
		class 53rd_CH252_GREY_CORP_Sealed_SLV:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "medic";
		};
		class 53rd_CH252_GREY_CORP_Sealed_GLD:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "medic_nco";
		};
		class 53rd_CH252_GREY_CORP_Sealed_PLM:53rd_CH252_GREY_Sealed_Reserve
		{
		type = "medic_plt";
		};
		class 53rd_Beret_Hephaestus:53rd_CH252_GREY_Sealed_Reserve
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
        
        class 53rd_CH252_GREY_Sealed_Reserve_dp
		{
		model = "HephaestusHelm";
		environment = "def";
		type = "res";
		pol = "off";
		};
		class 53rd_CH252_GREY_HEV_Sealed_PFC_SLV_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "rifle";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SPC_SLV_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "spc";
		};
		class 53rd_CH252_GREY_HEV_Sealed_TL_SLV_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "tl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_SL_SLV_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "sl";
		};
		class 53rd_CH252_GREY_HEV_Sealed_PLS_SLV_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "plt";
		};
		class 53rd_CH252_GREY_CORP_Sealed_SLV_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "medic";
		};
		class 53rd_CH252_GREY_CORP_Sealed_GLD_dp:53rd_CH252_GREY_Sealed_Reserve_dp
		{
		type = "medic_nco";
		};
		class 53rd_CH252_GREY_CORP_Sealed_PLM_dp:53rd_CH252_GREY_Sealed_Reserve_dp
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
		class Armor_Hephaestus_Reservist
		{
		model = "HephaestusVest";
		environment = "def";
		type = "res";
		};
		class Armor_Hephaestus_Rifleman:Armor_Hephaestus_Reservist
		{
		type = "rifle";
		};
		class Armor_Hephaestus_Specialist:Armor_Hephaestus_Reservist
		{
		type = "spc";
		};
		class Armor_Hephaestus_Team_Leader:Armor_Hephaestus_Reservist
		{
		type = "tl";
		};
		class Armor_Hephaestus_Squad_Leader:Armor_Hephaestus_Reservist
		{
		type = "sl";
		};
		class Armor_Hephaestus_Medic:Armor_Hephaestus_Reservist
		{
		type = "medic";
		};
		class Armor_Hephaestus_Platoon_Medic:Armor_Hephaestus_Reservist
		{
		type = "medic_plt";
		};
        
		class Armor_Hephaestus_WDL_Rifleman
		{
		model = "HephaestusVest";
		environment = "wood";
		type = "rifle";
		};
		class Armor_Hephaestus_WDL_Specialist:Armor_Hephaestus_WDL_Rifleman
		{
		type = "spc";
		};
		class Armor_Hephaestus_WDL_Team_Leader:Armor_Hephaestus_WDL_Rifleman
		{
		type = "tl";
		};
		class Armor_Hephaestus_WDL_Squad_Leader:Armor_Hephaestus_WDL_Rifleman
		{
		type = "sl";
		};
		class Armor_Hephaestus_WDL_Medic:Armor_Hephaestus_WDL_Rifleman
		{
		type = "medic";
		};
		class Armor_Hephaestus_WDL_Platoon_Medic:Armor_Hephaestus_WDL_Rifleman
		{
		type = "medic_plt";
		};
        
		class Armor_Hephaestus_DES_Rifleman
		{
		model = "HephaestusVest";
		environment = "des";
		type = "rifle";
		};
		class Armor_Hephaestus_DES_Specialist:Armor_Hephaestus_DES_Rifleman
		{
		type = "spc";
		};
		class Armor_Hephaestus_DES_Team_Leader:Armor_Hephaestus_DES_Rifleman
		{
		type = "tl";
		};
		class Armor_Hephaestus_DES_Squad_Leader:Armor_Hephaestus_DES_Rifleman
		{
		type = "sl";
		};
		class Armor_Hephaestus_DES_Medic:Armor_Hephaestus_DES_Rifleman
		{
		type = "medic";
		};
		class Armor_Hephaestus_DES_Platoon_Medic:Armor_Hephaestus_DES_Rifleman
		{
		type = "medic_plt";
		};
        
		class Armor_Hephaestus_WIN_Rifleman
		{
		model = "HephaestusVest";
		environment = "snow";
		type = "rifle";
		};
		class Armor_Hephaestus_WIN_Specialist:Armor_Hephaestus_WIN_Rifleman
		{
		type = "spc";
		};
		class Armor_Hephaestus_WIN_Team_Leader:Armor_Hephaestus_WIN_Rifleman
		{
		type = "tl";
		};
		class Armor_Hephaestus_WIN_Squad_Leader:Armor_Hephaestus_WIN_Rifleman
		{
		type = "sl";
		};
		class Armor_Hephaestus_WIN_Medic:Armor_Hephaestus_WIN_Rifleman
		{
		type = "medic";
		};
		class Armor_Hephaestus_WIN_Platoon_Medic:Armor_Hephaestus_WIN_Rifleman
		{
		type = "medic_plt";
		};
        
		class Armor_Hephaestus_JUG_Rifleman
		{
		model = "HephaestusVest";
		environment = "jung";
		type = "rifle";
		};
		class Armor_Hephaestus_JUG_Specialist:Armor_Hephaestus_JUG_Rifleman
		{
		type = "spc";
		};
		class Armor_Hephaestus_JUG_Team_Leader:Armor_Hephaestus_JUG_Rifleman
		{
		type = "tl";
		};
		class Armor_Hephaestus_JUG_Squad_Leader:Armor_Hephaestus_JUG_Rifleman
		{
		type = "sl";
		};
		class Armor_Hephaestus_JUG_Medic:Armor_Hephaestus_JUG_Rifleman
		{
		type = "medic";
		};
		class Armor_Hephaestus_JUG_Platoon_Medic:Armor_Hephaestus_JUG_Rifleman
		{
		type = "medic_plt";
		};
	};
};