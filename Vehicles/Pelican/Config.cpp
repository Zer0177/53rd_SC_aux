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
	class SensorTemplateActiveRadar;
	class components;
	class 53rd_CORP_Pelican: VES_D77HTCI_A
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		crewCrashProtection=9.9999997e-005;
		crewExplosionProtection=9.9999997e-005;
		displayName="[53rd] Dortman Pelican";
		transportSoldier=21;
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Rotary";
		fuelCapacity=100;
		tf_range=120000;
		crew="53rd_Volare_airmen_unit";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Pelican\V_D77_CORP_CO.paa"
		};
		weapons[]=
		{
			"OPTRE_GUA23B",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		ace_cargo_space=10;
		ace_cargo_hasCargo=1;
		class ACE_Cargo
		{
			class Cargo
			{
				
			};
		};
        class Components : Components
        {
            class SensorsManagerComponent : SensorTemplateActiveRadar
            {
            };
        };
	};
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
		crew="53rd_Volare_airmen_unit";
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
			"OPTRE_GUA23B",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		ace_cargo_space=10;
		ace_cargo_hasCargo=1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "53rd_SupplyPod_Medical";
                    amount = 1;
                };
            };
        };
        class Components : Components
        {
            class SensorsManagerComponent : SensorTemplateActiveRadar
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
			class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
			class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			};
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				userActionID=9;
			};
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
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