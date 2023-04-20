class CfgPatches {
	class 53rd_Land_Scorpion {
		units[] = {"53rd_Scorpion","53rd_Scorpion_125","53rd_ONI_Scorpion","53rd_CORP_Scorpion","53rd_M875_SPH","53rd_M875_SPH_SPC"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[]={"OPTRE_Core"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
	{
		class OPTRE_mortar_155mm;
		class 53rd_mortar_155mm: OPTRE_mortar_155mm
		{
			scope=1;
			displayName="(53rd) M252 155mm Howitzer";
			nameSound="cannon";
			cursor="mortar";
			cursorAim="EmptyCursor";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",
				31.622778,
				1,
				15
			};
			reloadTime=1;
			magazineReloadTime=1;
			autoReload=1;
			canLock=0;
			magazines[]=
			{
				"32Rnd_155mm_Mo_shells",
				"32Rnd_155mm_Mo_shells_O",
				"6Rnd_155mm_Mo_smoke",
				"6Rnd_155mm_Mo_smoke_O",
				"2Rnd_155mm_Mo_guided",
				"4Rnd_155mm_Mo_guided",
				"4Rnd_155mm_Mo_guided_O",
				"2Rnd_155mm_Mo_LG",
				"4Rnd_155mm_Mo_LG",
				"4Rnd_155mm_Mo_LG_O",
				"6Rnd_155mm_Mo_mine",
				"6Rnd_155mm_Mo_mine_O",
				"2Rnd_155mm_Mo_Cluster",
				"2Rnd_155mm_Mo_Cluster_O",
				"6Rnd_155mm_Mo_AT_mine",
				"6Rnd_155mm_Mo_AT_mine_O"
			};
			modes[]=
			{
				"Single1",
				"Single2",
				"Single3",
				"Single4",
				"Single5",
				"Burst1",
				"Burst2",
				"Burst3",
				"Burst4",
				"Burst5"
			};
			class GunParticles
			{
				class Effect1
				{
					effectName="ArtilleryFired1";
					positionName="usti hlavne";
					directionName="konec hlavne";
				};
			};
			class Single1: Mode_SemiAuto
			{
				displayName="$STR_A3_mortar_120mm_AMOS_Single10";
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
						2.5118864,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
				reloadSound[]=
				{
					"A3\sounds_f\dummysound",
					1,
					1,
					20
				};
				reloadTime=2;
				artilleryDispersion=3.2;
				artilleryCharge=0.19;
				aiRateOfFire=1;
				aiRateOfFireDistance=10;
				minRange=0;
				minRangeProbab=0.0099999998;
				midRange=1;
				midRangeProbab=0.0099999998;
				maxRange=2;
				maxRangeProbab=0.0099999998;
			};
			class Single2: Single1
			{
				displayName="$STR_A3_mortar_120mm_AMOS_Single20";
				artilleryCharge=0.30000001;
			};
			class Single3: Single1
			{
				displayName="$STR_A3_mortar_120mm_AMOS_Single30";
				artilleryCharge=0.47999999;
			};
			class Single4: Single1
			{
				displayName="$STR_A3_mortar_120mm_AMOS_Single40";
				artilleryCharge=0.80000001;
			};
			class Single5: Single1
			{
				displayName="$STR_A3_mortar_120mm_AMOS_Single50";
				artilleryCharge=1;
			};
			class Burst1: Mode_Burst
			{
				showToPlayer=0;
				displayName="$STR_A3_mortar_120mm_AMOS_Burst10";
				burst=6;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
						2.5118864,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						1
					};
				};
				reloadSound[]=
				{
					"A3\sounds_f\dummysound",
					1,
					1,
					20
				};
				soundBurst=0;
				reloadTime=0;
				minRange=800;
				minRangeProbab=0.5;
				midRange=1500;
				midRangeProbab=0.69999999;
				maxRange=2000;
				maxRangeProbab=0.5;
				artilleryDispersion=5.3000002;
				artilleryCharge=0.19;
			};
			class Burst2: Burst1
			{
				showToPlayer=0;
				displayName="$STR_A3_mortar_120mm_AMOS_Burst20";
				minRange=2000;
				minRangeProbab=0.40000001;
				midRange=3000;
				midRangeProbab=0.60000002;
				maxRange=5200;
				maxRangeProbab=0.40000001;
				artilleryCharge=0.30000001;
			};
			class Burst3: Burst1
			{
				showToPlayer=0;
				displayName="$STR_A3_mortar_120mm_AMOS_Burst30";
				minRange=5200;
				minRangeProbab=0.30000001;
				midRange=8000;
				midRangeProbab=0.40000001;
				maxRange=13300;
				maxRangeProbab=0.30000001;
				artilleryCharge=0.47999999;
			};
			class Burst4: Burst1
			{
				showToPlayer=0;
				displayName="$STR_A3_mortar_120mm_AMOS_Burst40";
				minRange=14600;
				minRangeProbab=0.2;
				midRange=25000;
				midRangeProbab=0.30000001;
				maxRange=37000;
				maxRangeProbab=0.2;
				artilleryCharge=0.80000001;
			};
			class Burst5: Burst1
			{
				showToPlayer=0;
				displayName="$STR_A3_mortar_120mm_AMOS_Burst50";
				minRange=25000;
				minRangeProbab=0.1;
				midRange=40000;
				midRangeProbab=0.2;
				maxRange=58000;
				maxRangeProbab=0.1;
				artilleryCharge=1;
			};
		};    
	};
class CfgVehicles
{
	
	class OPTRE_M808B_Arty_Base
	{
		class Turrets
		{
			class MainTurret;
		};
		class HitPoints;
		class CargoTurret;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
	};
	class OPTRE_M808BM_Base
	{
		class Turrets
		{
			class MainTurret;
		};
		class HitPoints;
		class CargoTurret;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
	};
class OPTRE_M808BM_UNSC;
class OPTRE_M875_SPH;
	
	class 53rd_M808BM_Base: OPTRE_M808BM_Base
	{
		accuracy=0.30000001;
		scope=1;
		scopeCurator=1;
		model="OPTRE_Vehicles\Scorpion\ScorpionBM.p3d";
		picture="\OPTRE_Vehicles\Scorpion\data\UI\M808B_MBT_ca.paa";
		icon="\OPTRE_Vehicles\Scorpion\data\UI\map_M808B_ca.paa";
		author="Article 2 Studios";
		editorPreview="OPTRE_Vehicles\Scorpion\data\UI\OPTRE_M808BM_UNSC.jpg";
		armor=755;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		forceHideDriver=1;
		driverForceOptics=0;
		driverAction="Driver_OPTRE_M808B";
		driverInAction="Driver_OPTRE_M808B";
		transportSoldier=0;
		viewdriverInExternal=1;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoCanEject=1;
		hideWeaponsCargo=0;
		castCargoShadow=1;
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				memoryPointGunnerOptics="gunnerview";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
				LODTurnedIn=0;
				LODTurnedOut=0;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo7";
				memoryPointsGetInGunnerDir="pos cargo7 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo8";
				memoryPointsGetInGunnerDir="pos cargo8 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"OPTRE_90mm_M512",
					"cannon_125mm_advanced",
					"OPTRE_M41_LAAG",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"20Rnd_125mm_APFSDS_T_Green",
					"20Rnd_125mm_APFSDS_T_Green",
					"12Rnd_125mm_HEAT_T_Green",
					"12Rnd_125mm_HE_T_Green",
					"OPTRE_10Rnd_90mm_S1",
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41",
					"SmokeLauncherMag"
				};
				minElev=-8;
				maxElev=25;
				initElev=0;
				turretInfoType="RscOptics_MBT_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_m_F.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="Gunner_OPTRE_M808B";
				gunnerInAction="Gunner_OPTRE_M808B";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=0;
				usepip=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=4.5;
						material=-1;
						name="otocVez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=4.5;
						material=-1;
						name="otocHlaven";
						visual="Hlaven";
						passThrough=0;
						minimalHit=0;
						explosionShielding=0.60000002;
						radius=0.25;
					};
				};
			};
			class CommanderTurret: MainTurret
			{
				class Turrets
				{
				};
				LODTurnedIn=1100;
				body="obsTurret";
				gun="obsGun";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				proxyType="CPCargo";
				proxyIndex=14;
				cargoCompartments[]=
				{
					"Compartment1"
				};
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh3";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				weapons[]=
				{
					"OPTRE_M41_LAAG",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41",
					"Laserbatteries"
				};
				minElev=-12;
				maxElev=45;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				commanding=-2;
				primaryGunner=0;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=4;
				memoryPointGunnerOptics="commanderview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerName="Commander";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				startEngine=0;
				gunnerForceOptics=0;
				usepip=1;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_tur_wood_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\Scorpion_mg_co.paa"
		};
		class UserActions
		{
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Scorpion";
				displayName="Press SPACEBAR to Flip Scorpion";
				position="";
				radius=15;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 3]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
	};
	
	class 53rd_Scorpion: 53rd_M808BM_Base
	{
		displayName="[53rd] M808BM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
        hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorp_tur_53rd_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa"
		};
		class TextureSources
        {
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_tur_wood_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorpion_mg_co.paa"
				};
			};
			class colorwhite
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_tundra_co.paa"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_desert_co.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_jungle_co.paa"
				};
			};
			class colorblk
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_black_co.paa"
				};
			};
			class colorgry
			{
				displayName="Grey";
				author="Sgt. Body";
				textures[]=
				{
					"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
					"53rd_SC_aux\tex\Scorpion\Scorp_tur_53rd_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
					"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa"
				};
			};
			
        };
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_track
                {
                    type = "ACE_track";
                    amount = 1;
                };
            };
        };
    };
	class 53rd_Scorpion_125: 53rd_Scorpion
	{
		displayName="[53rd] M808BM 125MM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		class EventHandlers
		{
        Init = "(_this select 0) addWeaponTurret ['TruckHorn2',[-1]];(_this select 0) addWeaponTurret ['cannon_125mm_advanced',[8]];(_this select 0) addMagazineTurret ['12Rnd_125mm_HE_T_Green',[8]];(_this select 0) addMagazineTurret ['24Rnd_125mm_APFSDS_T_Yellow',[8]];(_this select 0) addMagazineTurret ['12Rnd_125mm_HEAT_T_Red',[8]];";
        };
        hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\Scorp_base_125mm_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorp_tur_53rd_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa"
		};
		class TextureSources
        {
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_tur_wood_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorpion_mg_co.paa"
				};
			};
			class colorwhite
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_tundra_co.paa"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_desert_co.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_jungle_co.paa"
				};
			};
			class colorblk
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_tur_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\mine_roller_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_black_co.paa"
				};
			};
			class colorgry_53rd
			{
				displayName="Grey";
				author="Sgt. Body";
				textures[]=
				{
					"53rd_SC_aux\tex\Scorpion\Scorp_base_125mm_co.paa",
					"53rd_SC_aux\tex\Scorpion\Scorp_tur_53rd_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
					"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa"
				};
			};
			
        };
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class ACE_track
                {
                    type = "ACE_track";
                    amount = 1;
                };
            };
        };
    };
	class 53rd_ONI_Scorpion: 53rd_M808BM_Base
	{
		displayName="[ONI] M808BM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_ONI";
		editorCategory = "53rd_ONI_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\ONI_Tank_CO.paa",
			"53rd_SC_aux\tex\Scorpion\ONI_tank_Turret.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_ONI_co.paa"
		};
	};
	class 53rd_CORP_Scorpion: 53rd_M808BM_Base
	{
		displayName="[CORP] M808BM";
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="53rd_Dortman";
		editorCategory = "53rd_Dortman_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
				"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\Corp\Scorp_base_Corp_co.paa",
			"53rd_SC_aux\tex\Scorpion\Corp\Scorp_tur_Corp_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\mine_roller_co.paa",
			"53rd_SC_aux\tex\Scorpion\Corp\Scorpion_mg_Corp_co.paa"
		};
	};
	class 53rd_M875_SPH: OPTRE_M875_SPH
	{
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		displayName="[53rd] M875 SPH";
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorp_53rd_art_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa"
		};
	};
	class 53rd_M808B_Arty_Base: OPTRE_M808B_Arty_Base
	{
		fuelCapacity=20;
		fuelConsumptionRate=500;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class Turrets: Turrets
		{
			class CargoTurret1: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo1";
				memoryPointsGetInGunnerDir="pos cargo1 dir";
				memoryPointGunnerOptics="gunnerview";
				gunnerName="Passenger Gunner 1";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=60;
				minTurn=-60;
				isPersonTurret=2;
				ejectDeadGunner=1;
				gunnerInAction="passenger_inside_3";
				startEngine=0;
				allowLauncherIn=1;
				allowLauncherOut=1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo2";
				memoryPointsGetInGunnerDir="pos cargo2 dir";
				gunnerName="Passenger Gunner 2";
				proxyIndex=2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				gunnerName="Passenger Gunner 3";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo3";
				memoryPointsGetInGunnerDir="pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				gunnerName="Passenger Gunner 4";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo4";
				memoryPointsGetInGunnerDir="pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				gunnerName="Passenger Gunner 5";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo5";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				gunnerName="Passenger Gunner 6";
				gunnerCompartments="Compartment4";
				memoryPointsGetInGunner="pos cargo6";
				memoryPointsGetInGunnerDir="pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				gunnerName="Passenger Gunner 7";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo7";
				memoryPointsGetInGunnerDir="pos cargo7 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex=8;
				gunnerName="Passenger Gunner 8";
				gunnerCompartments="Compartment5";
				memoryPointsGetInGunner="pos cargo8";
				memoryPointsGetInGunnerDir="pos cargo8 dir";
			};
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				memoryPointGun="usti hlavne";
				selectionFireAnim="zasleh";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"53rd_mortar_155mm",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"32Rnd_155mm_Mo_shells",
					"4Rnd_155mm_Mo_guided",
					"6Rnd_155mm_Mo_mine",
					"2Rnd_155mm_Mo_Cluster",
					"6Rnd_155mm_Mo_smoke",
					"2Rnd_155mm_Mo_LG",
					"6Rnd_155mm_Mo_AT_mine",
					"SmokeLauncherMag"
				};
				minElev=-3;
				maxElev=80;
				elevationMode=3;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscWeaponRangeArtilleryAuto";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0};
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="Gunner_OPTRE_M808B";
				gunnerInAction="Gunner_OPTRE_M808B";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				forceHideGunner=1;
				gunnerForceOptics=1;
				usepip=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=4.5;
						material=-1;
						name="otocVez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=4.5;
						material=-1;
						name="otocHlaven";
						visual="Hlaven";
						passThrough=0;
						minimalHit=0;
						explosionShielding=0.60000002;
						radius=0.25;
					};
				};
			};
			class CommanderTurret: MainTurret
			{
				class Turrets
				{
				};
				LODTurnedIn=1100;
				body="obsTurret";
				gun="obsGun";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				proxyType="CPCargo";
				proxyIndex=14;
				cargoCompartments[]=
				{
					"Compartment1"
				};
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh3";
				maxVerticalRotSpeed="90/45";
				maxHorizontalRotSpeed="90/45";
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				weapons[]=
				{
					"OPTRE_M247H_RCWS",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
					"Laserbatteries"
				};
				minElev=-12;
				maxElev=45;
				elevationMode=0;
				initElev=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				commanding=-2;
				primaryGunner=0;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=4;
				memoryPointGunnerOptics="commanderview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerName="Commander";
				castGunnerShadow=0;
				stabilizedInAxes=3;
				viewGunnerInExternal=1;
				startEngine=0;
				gunnerForceOptics=1;
			};
		};
		class UserActions
		{
			class Flip
			{
				displayNameDefault="Press SPACEBAR to Flip Scorpion";
				displayName="Press SPACEBAR to Flip Scorpion";
				position="";
				radius=15;
				onlyForPlayer=1;
				condition="(alive this) AND !(canmove this)";
				statement="this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 3]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorpion_mg_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa"
		};
		class textureSources
		{
			class colorstand
			{
				displayName="Standard";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorpion_mg_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa"
				};
			};
			class colorwhite
			{
				displayName="White Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_art_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_tundra_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_art_camo_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_tundra_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_tundra_co.paa"
				};
			};
			class colortan
			{
				displayName="Tan";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_art_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_art_camo_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_desert_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_desert_co.paa"
				};
			};
			class colorjung
			{
				displayName="Green Digital";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_art_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_net_jungle_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_art_camo_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_jungle_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_jungle_co.paa"
				};
			};
			class colorblk
			{
				displayName="Black";
				author="Article 2 Studios";
				textures[]=
				{
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_art_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\Scorp_net_wood_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\Scorp_mg_black_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
					"OPTRE_Vehicles\Scorpion\data\texture\camo\det_3_black_co.paa"
				};
			};
		};
	};
	class 53rd_M875_SPH_SPC: 53rd_M808B_Arty_Base
	{
		author="53rd & Seven";
		dlc = "53rd";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		displayName="[53rd] M875 SPH - Popped Cherry";
		tf_range=25000;
		tf_isolatedAmount=0.40000001;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		enableRadio=1;
		crew="53rd_crewman_unit";
		typicalCargo[]=
		{
			"53rd_crewman_unit"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"53rd_SC_aux\tex\Scorpion\Scorp_base_53rd_co.paa",
			"53rd_SC_aux\tex\Scorpion\Scorp_53rd_art_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_net_wood_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_art_camo_ca.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\scorp_decals_ca.paa",
			"53rd_SC_aux\tex\Scorpion\Scorpion_mg_grey_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_1_lopo_co.paa",
			"OPTRE_Vehicles\Scorpion\data\texture\det_3_co.paa"
		};
	};
};

