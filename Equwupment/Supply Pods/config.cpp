class CfgPatches
{
	class 53rd_Supply_Pods
	{
		units[]=
		{
		"53rd_Ammo_SupplyPod_Empty",
		"53rd_SupplyPod_Marksmen",
		"53rd_Ammo_SupplyPod_Basic",
		"53rd_Ammo_SupplyPod_Heavy",
		"53rd_Ammo_SupplyPod_CQB",
		"53rd_Ammo_SupplyPod_Medic",
		"53rd_Ammo_SupplyPod_Explosives",
		"53rd_Ammo_SupplyPod_Equipment"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
	};
};
class CfgVehicles
{
	class OPTRE_Ammo_Rack_Weapons;
	class 53rd_Ammo_SupplyPod_Empty: OPTRE_Ammo_Rack_Weapons
	{
		dlc="53rd";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Empty)";
		model="\OPTRE_misc\crates\Supply_pod.p3d";
		aauthor="53rd aux";
		icon="iconCrateWpns";
		transportMaxWeapons=8;
		transportMaxMagazines=50;
		maximumLoad=2000;
		transportMaxBackpacks=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.5;
		armor=10000;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class 53rd_SupplyPod_Marksmen: 53rd_Ammo_SupplyPod_Empty
	{
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Marksmen)";
		author="53rd aux";
		class TransportMagazines
		{
			class xx_53rd_BR_MAG
			{
				magazine="OPTRE_36Rnd_95x40_Mag";
				count=50;
			};
			class xx_53rd_BR_MAG_JHP
			{
				magazine="OPTRE_36Rnd_95x40_Mag_JHP";
				count=50;
			};
			class xx_53rd_20Rnd_86x70_Mag_JHP
			{
				magazine="OPTRE_20Rnd_86x70_Mag_JHP";
				count=50;
			};
			class xx_53rd_M14X_JHP
			{
				magazine="OPTRE_15Rnd_762x51_Mag";
				count=30;
			};
			class xx_APFSDS
			{
				magazine="OPTRE_4Rnd_145x114_APFSDS_Mag";
				count=8;
			};
			class xx_APFSDS_HE
			{
				magazine="OPTRE_4Rnd_145x114_HEDP_Mag";
				count=4;
			};
				class xx_53rd_srs99c_scope
			{
				weapon="optre_srs99c_scope";
				count=2;
			};
		};
		class TransportWeapons
		{
			class xx_53rd_OPTRE_BR45
			{
				weapon="OPTRE_BR45";
				count=5;
			};
			class xx_OPTRE_BR55
			{
				weapon="OPTRE_BR55";
				count=5;
			};
			class xx_53rd_OPTRE_M14X
			{
				weapon="OPTRE_M14X";
				count=2;
			};
			class xx_53rd_OPTRE_CR77
			{
				weapon="OPTRE_CR77";
				count=2;
			};
			class xx_53rd_OPTRE_SRS99C
			{
				weapon="OPTRE_SRS99C";
				count=2;
			};
				class xx_53rd_srs99c_scope
			{
				weapon="optre_srs99c_scope";
				count=2;
			};
		};
		class TransportItems
		{
		};
	};
	class 53rd_Ammo_SupplyPod_Basic: 53rd_Ammo_SupplyPod_Empty
	{
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Basic)";
		author="53rd aux";
		class TransportMagazines
		{
			class xx_53rd_60RND_762x51_Mag_JHP
			{
				magazine="OPTRE_60RND_762x51_Mag_JHP";
				count=30;
			};
			class xx_53rd_60RND_762x51_Mag
			{
				magazine="OPTRE_32Rnd_762x51_Mag_Tracer";
				count=30;
			};
			class xx_53rd_Commando_20Rnd_65_Mag
			{
				magazine="Commando_20Rnd_65_Mag";
				count=30;
			};
			class xx_53rd_3Rnd_Smoke_Grenarde_shell
			{
				magazine="3Rnd_Smoke_Grenarde_shell";
				count=20;
			};
			class xx_53rd_3Rnd_SmokeRed_Grenarde_shell
			{
				magazine="3Rnd_SmokeRed_Grenarde_shell";
				count=20;
			};
			class xx_53rd_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=20;
			};
			class xx_53rd_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=20;
			};
			class xx_53rd_1Rnd_SmokeWhite_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeWhite_Grenade_shell";
				count=20;
			};
			class xx_53rd_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokePurple_Grenade_shell";
				count=02;
			};
			class xx_53rd_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeRed_Grenade_shell";
				count=20;
			};
			class xx_53rd_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeGreen_Grenade_shell";
				count=20;
			};
		};
		class TransportWeapons
		{
			class xx_53rd_MA32
			{
				weapon="53rd_MA32";
				count=5;
			};
			class xx_53rd_MA32GL
			{
				weapon="53rd_MA32";
				count=5;
			};
			class xx_53rd_MA37
			{
				weapon="53rd_MA32";
				count=5;
			};
			class xx_53rd_MA37GL
			{
				weapon="53rd_MA32";
				count=5;
			};
			class xx_53rd_Commando
			{
				weapon="53rd_MA32";
				count=5;
			};
		};
		class TransportItems
		{
		};
	};
	class 53rd_Ammo_SupplyPod_Heavy: 53rd_Ammo_SupplyPod_Empty
	{
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Heavy)";
		author="53rd aux";
		class TransportMagazines
		{
			class xx_53rd_OPTRE_36Rnd_95x40_Mag_JHP
			{
				magazine="OPTRE_36Rnd_95x40_Mag_JHP";
				count=45;
			};
			class xx_53rd_200Rnd_95x40_Box_JHP
			{
				magazine="OPTRE_200Rnd_95x40_Box_JHP";
				count=15;
			};
			class xx_53rd_400Rnd_762x51_Box_Tracer
			{
				magazine="OPTRE_400Rnd_762x51_Box_Tracer";
				count=15;
			};
			class xx_53rd_1Rnd_50x137_HEAT
			{
				magazine="OPTRE_1Rnd_50x137_HEAT";
				count=8;
			};
			class xx_53rd_1Rnd_50x137_PEN
			{
				magazine="OPTRE_1Rnd_50x137_PEN";
				count=8;
			};
			class xx_53rd_1Rnd_50x137_HE
			{
				magazine="OPTRE_1Rnd_50x137_HE";
				count=8;
			};
			class xx_53rd_M41_Twin_HEAT_Thermal
			{
				magazine="OPTRE_M41_Twin_HEAT_Thermal";
				count=8;
			};
			class xx_53rd_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=6;
			};
			class xx_53rd_FC_Railgun_Slug
			{
				magazine="OPTRE_FC_Railgun_Slug";
				count=15;
			};
		};
		class TransportWeapons
		{
			class xx_53rd_OPTRE_M41_SSR
			{
				weapon="OPTRE_M41_SSR";
				count=2;
			};
			class xx_53rd_OPTRE_M73
			{
				weapon="OPTRE_M73";
				count=4;
			};
			class xx_53rd_NLAW
			{
				weapon="53rd_NLAW";
				count=2;
			};
			class xx_53rd_launch_MRAWS_green_rail_F
			{
				weapon="launch_MRAWS_green_rail_F";
				count=2;
			};
		};
		class TransportItems
		{
		};
	};
	class 53rd_Ammo_SupplyPod_CQB: 53rd_Ammo_SupplyPod_Empty
	{
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (CQB)";
		author="53rd aux";
		class TransportMagazines
		{
			class xx_53rd_60Rnd_5x23mm_Mag_JHP
			{
				magazine="OPTRE_60Rnd_5x23mm_Mag_JHP";
				count=30;
			};
			class 53rd_64Rnd_57x31_Mag
			{
				magazine="OPTRE_64Rnd_57x31_Mag";
				count=10;
			};
			class 53rd_OPTRE_12Rnd_8Gauge_Pellets
			{
				magazine="OPTRE_12Rnd_8Gauge_Pellets";
				count=10;
			};
			class 53rd_OPTRE_12Rnd_8Gauge_Slugs
			{
				magazine="OPTRE_12Rnd_8Gauge_Slugs";
				count=10;
			};
			class 53rd_OPTRE_6Rnd_8Gauge_Pellet
			{
				magazine="OPTRE_6Rnd_8Gauge_Pellet";
				count=10;
			};
			class 53rd_OPTRE_6Rnd_8Gauge_Slug
			{
				magazine="OPTRE_6Rnd_8Gauge_Slug";
				count=10;
			};
		};
		class TransportWeapons
		{
			class xx_53rd_M7
			{
				weapon="OPTRE_M7";
				count=5;
			};
			class xx_53rd_M90A
			{
				weapon="OPTRE_M90A";
				count=5;
			};
			class xx_53rd_M45TAC
			{
				weapon="OPTRE_M45TAC";
				count=5;
			};
			class xx_OPTRE_M12_SOC
			{
				weapon="OPTRE_M12_SOC";
				count=5;
			};
		};
		class TransportItems
		{
		};
	};
	class 53rd_Ammo_SupplyPod_Explosives: 53rd_Ammo_SupplyPod_Empty
	{
		dlc="OPTRE";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Demo)";
		author="53rd aux";
		class TransportMagazines
		{
			class xx_C7_Remote_Mag
			{
				magazine="C7_Remote_Mag";
				count=10;
			};
			class xx_c7_thrown_mag
			{
				magazine="c7_thrown_mag";
				count=10;
			};
			class C12_Remote_Mag
			{
				magazine="C12_Remote_Mag";
				count=10;
			};
			class c12_thrown_mag
			{
				magazine="c12_thrown_mag";
				count=10;
			};
			class M168_Remote_Mag
			{
				magazine="M168_Remote_Mag";
				count=10;
			};
			class OPTRE_M9_Frag
			{
				magazine="OPTRE_M9_Frag";
				count=10;
			};
			class APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=20;
			};
			class UNSCMine_Range_Mag
			{
				magazine="UNSCMine_Range_Mag";
				count=10;
			};
			class DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=15;
			}
			class xx_B_Mortar_01_weapon_F
			{
				weapon="B_Mortar_01_weapon_F";
				count=2;
			};
			class xx_B_Mortar_01_support_F
			{
				weapon="B_Mortar_01_support_F";
				count=2;
			};
		};
		class TransportWeapons
		{
			class xx_B_Mortar_01_weapon_F
			{
				weapon="B_Mortar_01_weapon_F";
				count=2;
			};
			class xx_B_Mortar_01_support_F
			{
				weapon="B_Mortar_01_support_F";
				count=2;
			};
			class ACE_M26_Clacker
			{
				weapon="ACE_M26_Clacker";
				count=4;
			}
			class ACE_1Rnd_82mm_Mo_HE_Guided
			{
				weapon="ACE_1Rnd_82mm_Mo_HE_Guided";
				count=20;
			}
			class ACE_1Rnd_82mm_Mo_HE
			{
				weapon="ACE_1Rnd_82mm_Mo_HE";
				count=20;
			}
			class ACE_1Rnd_82mm_Mo_Illum
			{
				weapon="ACE_1Rnd_82mm_Mo_Illum";
				count=20;
			}
			class ACE_1Rnd_82mm_Mo_Smoke
			{
				weapon="ACE_1Rnd_82mm_Mo_Smoke";
				count=20;
			}
		};
		class TransportItems
		{
		};
	};
	class 53rd_Ammo_SupplyPod_Equipment: 53rd_Ammo_SupplyPod_Empty
	{
		dlc="53rd";
		editorCategory = "53rd_cat_faction";
		displayName="[53rd] Supply Pod (Equipment)";
		author="53rd aux";
		class TransportMagazines
		{
			class xx_53rd_ANPRC_Heavy_515
			{
				weapon="53rd_ANPRC_Heavy_515";
				count=2;
			};
		};
		class TransportWeapons
		{
			class OPTRE_Smartfinder
			{
				weapon="OPTRE_Smartfinder";
				count=20;
			}
			class VES_NVG_CNM
			{
				weapon="VES_NVG_CNM";
				count=20;
			}
			class tf_anprc152
			{
				weapon="tf_anprc152";
				count=20;
			}
			class ACE_MapTools
			{
				weapon="ACE_MapTools";
				count=10;
			}
			class ACE_EntrenchingTool
			{
				weapon="ACE_EntrenchingTool";
				count=10;
			}
			class ToolKit
			{
				weapon="ToolKit";
				count=10;
			}
			class ItemcTabHCam
			{
				weapon="ItemcTabHCam";
				count=10;
			}
			class ACE_Fortify
			{
				weapon="ACE_Fortify";
				count=20;
			}
			class ACE_Flashlight_XL50
			{
				weapon="ACE_Flashlight_XL50";
				count=20;
			}
			class ItemcTab
			{
				weapon="ItemcTab";
				count=20;
			}
			class ItemMap
			{
				weapon="ItemMap";
				count=20;
			}
			class Laserbatteries
			{
				weapon="Laserbatteries";
				count=10;
			}
			class ACE_EarPlugs
			{
				weapon="ACE_EarPlugs";
				count=20;
			}
			class ACE_M26_Clacker
			{
				weapon="ACE_M26_Clacker";
				count=20;
			}
			class ACE_wirecutter
			{
				weapon="ACE_wirecutter";
				count=20;
			}
		};
		class TransportItems
		{
			class ItemMap
			{
				weapon="ItemMap";
				count=20;
			}
			class B_UavTerminal
			{
				weapon="B_UavTerminal";
				count=4;
			}
		};
	};
};
