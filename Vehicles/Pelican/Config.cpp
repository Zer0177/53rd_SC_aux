class CfgPatches {
	class 53rd_Air_Pelican {
		units[] = {"53rd_Pelican"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class CfgVehicles
{
	class Turrets;
	class CopilotTurret;
	class ACE_SelfActions;
	class CargoTurret;
	class VES_D77HTCI_A
    {
		class UserActions;
    };
	class DefaultVehicleSystemsDisplayManagerLeft;
	class DefaultVehicleSystemsDisplayManagerRight;
	class components;
	class 53rd_Pelican: VES_D77HTCI_A
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		crewCrashProtection=9.9999997e-005;
		crewExplosionProtection=9.9999997e-005;
		displayName="[53rd] D77H Pelican/AV";
		transportSoldier=21;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Rotary";
		fuelCapacity=200;
		tf_range=120000;
		crew="OPTRE_UNSC_Airforce_Soldier_Airman";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Pelican\V_D77HTCI_GRY_CO.paa"
		};
		weapons[]=
		{
			"OPTRE_GUA23A",
			"Icarus_CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"11_400Rnd_CMFlare_Chaff_Magazine"
		};
		ace_cargo_space=10;
		ace_cargo_hasCargo=1;
		class ACE_Cargo
		{
			class Cargo
			{
				
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
			class _xx_OPTRE_60Rnd_762x51_Mag_AP
			{
				magazine="OPTRE_60Rnd_762x51_Mag_AP";
				count=20;
			};
			class _xx_OPTRE_60Rnd_762x51_Mag_APT
			{
				magazine="OPTRE_60Rnd_762x51_Mag_APT";
				count=20;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag_HPSAP
			{
				magazine="OPTRE_36Rnd_95x40_Mag_HPSAP";
				count=20;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag_HPSAPT
			{
				magazine="OPTRE_36Rnd_95x40_Mag_HPSAPT";
				count=20;
			};
			class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJ
			{
				magazine="OPTRE_60Rnd_5x23mm_Mag_FMJ";
				count=20;
			};
			class _xx_OPTRE_60Rnd_5x23mm_Mag_FMJT
			{
				magazine="OPTRE_60Rnd_5x23mm_Mag_FMJT";
				count=20;
			};
			class _xx_OPTRE_20Rnd_86x70_Mag_AP
			{
				magazine="OPTRE_20Rnd_86x70_Mag_AP";
				count=20;
			};
			class _xx_30rnd_556x45_mag_AP
			{
				magazine="30rnd_556x45_mag_AP";
				count=20;
			};
			class _xx_30rnd_65x39_mag_AP
			{
				magazine="30rnd_65x39_mag_AP";
				count=20;
			};
			class _xx_30rnd_65x39_mag_msbs_AP
			{
				magazine="30rnd_65x39_mag_msbs_AP";
				count=20;
			};
			class _xx_M41_Twin_HEAT
			{
				magazine="M41_Twin_HEAT";
				count=4;
			};
			class _xx_M41_Twin_HEAT_WireGuided
			{
				magazine="M41_Twin_HEAT_WireGuided";
				count=2;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			class _xx_MEU_Biofoam_Light
			{
				name="MEU_Biofoam_Light";
				count=20;
			};
			class _xx_MEU_Medigel_Light
			{
				name="MEU_Medigel_Light";
				count=20;
			};
			class _xx_ACE_plasmaIV_1000
			{
				name="ACE_plasmaIV_1000";
				count=10;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=10;
			};
			class _xx_ACE_adenosine
			{
				name="ACE_adenosine";
				count=10;
			};
			class _xx_ACE_Banana
			{
				name="ACE_Banana";
				count=5;
			};
			class _xx_ACE_splint
			{
				name="ACE_splint";
				count=10;
			};
			class _xx_MEU_compat_Ibuprofen
			{
				name="MEU_compat_Ibuprofen";
				count=20;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=36;
			};
		};
		class UserActions: UserActions
		{
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#00BF00'>Maglock Cargo";
				displayNameDefault="<t color='#00BF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn F53rd_fnc_PelicanMaglockLoad";
				textToolTip="<t color='#00BF00'>Maglock Cargo";
				userActionID=6;
			};
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(14.4 / 120)";
					minFov="(14.4 / 120)";
					maxFov="(14.4 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(4.8 / 120)";
					minFov="0.01";
					maxFov="(4.8 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-90;
			maxTurn=90;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=25;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		memoryPointDriverOptics="gunnerview";
		class textureSources
		{
			class Grey
			{
				displayName="Grey";
				author="Body";
				textures[]=
				{
					"53rd_SC_aux\tex\Pelican\V_D77HTCI_GRY_CO.paa"
				};
			};
			class DGrey
			{
				displayName="Dark Grey";
				author="Body";
				textures[]=
				{
					"53rd_SC_aux\tex\Pelican\V_D77HTCI_DGRY_CO.paa"
				};
			};
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa"
				};
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor=10;
				visual="Hull";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor
			{
				armor=1.3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
		};
	};
};