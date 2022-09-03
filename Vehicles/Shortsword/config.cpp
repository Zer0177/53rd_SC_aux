class CfgPatches {
	class 53rd_Air_Sword {
		units[] = {"53rd_UNSC_Shortsword"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};

class Components;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};

class cfgVehicles {	
	class DMNS_Shortsword_01_F;
	class 53rd_UNSC_Shortsword: DMNS_Shortsword_01_F
	{
		dlc="53rd";
		author="Demonic";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		forceInGarage=1;
		displayName="[53rd] B-62 Shortsword (CAP)";
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_FixedWing";
		crew="53rd_Volare_airmen_unit";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		weapons[]=
		{
			"CMFlareLauncher",
			"OPTRE_110mm_Gatling",
            "missiles_ASRAAM",
			"OPTRE_bomblauncher_2000lb"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"OPTRE_600Rnd_110mm",
			"OPTRE_600Rnd_110mm",
            "4Rnd_AAA_missiles",
			"4Rnd_AAA_missiles",
			"OPTRE_16Rnd_2000lb_bomb",
			"OPTRE_16Rnd_2000lb_bomb",
			"OPTRE_16Rnd_2000lb_bomb",
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=90;
						maxTrackableSpeed=400;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=1;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.2;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=16000;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableATL=100;
						maxTrackableSpeed=60;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeftSensors
			{
				class Components: components
				{
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						range=8000;
						resource="RscTransportCameraComponentDriver";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRightSensors
			{
				class Components: components
				{
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range=16000;
						resource="RscCustomInfoSensors";
					};
				};
			};
        };
		hiddenSelectionsTextures[] = 			// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"dmns\DMNS_Air\b_62_shortsword\data\shortsword_wings_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\hull_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\cockpit_hull_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\tail_co.paa",
			"dmns\DMNS_Air\b_62_shortsword\data\cockpit_ext_co.paa"
		};
	};
};