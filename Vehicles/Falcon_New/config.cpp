	class CfgPatches
	{
		class 53rd_Vehicles_Air_Falcon_II
		{
			units[]=
			{
				"53rd_CMA_falcon",
				"53rd_UNSC_falcon_armed,"
			};
			weapons[]={};
			requiredVersion=0.1;
			requiredAddons[]={};
			magazines[]={};
		};
	};
	class CfgVehicles
	{
		class OPTRE_UNSC_falcon 
		{ 
			class Components; 
		}; 
		class OPTRE_UNSC_falcon_armed_S 
		{ 
			class Components; 
		}; 
		class 53rd_CMA_falcon: OPTRE_UNSC_falcon
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay  (Unarmed)";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Rotary";
			crew="53rd_Volare_airmen_unit";
			tf_range=25000;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			weapons[]=
			{
				"OPTRE_M638",
				"CMFlareLauncher",
				"Laserdesignator_pilotCamera"
			};
			magazines[]=
			{
				"OPTRE_2000Rnd_20mm_HE",
				"OPTRE_2000Rnd_20mm_HE",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
				"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
			};			
			class Components:Components 
			{ 
				class TransportPylonsComponent 
				{ 
					UIPicture="\optre_vehicles_air\falcon\FalconPylonPic.paa"; 
					class pylons 
					{ 
						class WingPylonRight1 
						{ 
							maxweight=560; 
							hardpoints[]= 
							{ 
								"OPAEX_Hardpoint_UH144" 
							}; 
							attachment="OPTRE_16Rnd_Anvil1_missiles"; 
							bay=-1; 
							priority=3; 
							UIposition[]={0.34999999,0.1}; 
							turret[]={}; 
						}; 
						class WingPylonLeft1: WingPylonRight1 
						{ 
							mirroredMissilePos=1; 
							UIposition[]={0.34999999,0.46700001}; 
						}; 
					}; 
					class Presets 
					{ 
						class Default 
						{ 
							displayName="Empty"; 
							attachment[]={}; 
						}; 
						class CAS_Rockets 
						{ 
							displayName="CAS: ANVIL I"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil1_missiles", 
								"OPTRE_16Rnd_Anvil1_missiles" 
							}; 
						}; 
						class CAS_Rockets_Guided 
						{ 
							displayName="CAS: ANVIL II & III"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil2_missiles", 
								"OPTRE_16Rnd_Anvil3_missiles" 
							}; 
						}; 
						class CAS_AT 
						{ 
							displayName="AT"; 
							attachment[]= 
							{ 
								"OPTRE_1Rnd_Jackknife_missile", 
								"OPTRE_1Rnd_Jackknife_missile" 
							}; 
						}; 
					}; 
				}; 
			};
		};
		class 53rd_UNSC_falcon_armed: OPTRE_UNSC_falcon_armed_S
		{
			editorPreview="\OPTRE_Core\Data\logo_ca.paa";
			displayName="[53rd] UH-144 Jay  (Armed)";
			scope=2;
			scopeCurator=2;
			scopeArsenal=2;
			forceInGarage=1;
			editorCategory = "53rd_cat_faction";
			editorSubCategory = "53rd_Rotary";
			crew="53rd_Volare_airmen_unit";
			tf_range=25000;
			tf_isolatedAmount=0.40000001;
			tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
			tf_hasLRradio=1;
			enableRadio=1;
			weapons[]=
			{
				"OPTRE_M638",
				"CMFlareLauncher",
				"Laserdesignator_pilotCamera"
			};
			magazines[]=
			{
				"OPTRE_2000Rnd_20mm_HE",
				"OPTRE_2000Rnd_20mm_HE",
				"168Rnd_CMFlare_Chaff_Magazine",
				"Laserbatteries"
			};
			hiddenSelectionsTextures[]=
			{
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Main_co.paa",
				"53rd_SC_aux\Vehicles\Falcon_New\53rd_Falcon_Attachments_co.paa",
				"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
			};
						class Components:Components 
			{ 
				class TransportPylonsComponent 
				{ 
					UIPicture="\optre_vehicles_air\falcon\FalconPylonPic.paa"; 
					class pylons 
					{ 
						class WingPylonRight1 
						{ 
							maxweight=560; 
							hardpoints[]= 
							{ 
								"OPAEX_Hardpoint_UH144" 
							}; 
							attachment="OPTRE_16Rnd_Anvil1_missiles"; 
							bay=-1; 
							priority=3; 
							UIposition[]={0.34999999,0.1}; 
							turret[]={}; 
						}; 
						class WingPylonLeft1: WingPylonRight1 
						{ 
							mirroredMissilePos=1; 
							UIposition[]={0.34999999,0.46700001}; 
						}; 
					}; 
					class Presets 
					{ 
						class Default 
						{ 
							displayName="Empty"; 
							attachment[]={}; 
						}; 
						class CAS_Rockets 
						{ 
							displayName="CAS: ANVIL I"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil1_missiles", 
								"OPTRE_16Rnd_Anvil1_missiles" 
							}; 
						}; 
						class CAS_Rockets_Guided 
						{ 
							displayName="CAS: ANVIL II & III"; 
							attachment[]= 
							{ 
								"OPTRE_16Rnd_Anvil2_missiles", 
								"OPTRE_16Rnd_Anvil3_missiles" 
							}; 
						}; 
						class CAS_AT 
						{ 
							displayName="AT"; 
							attachment[]= 
							{ 
								"OPTRE_1Rnd_Jackknife_missile", 
								"OPTRE_1Rnd_Jackknife_missile" 
							}; 
						}; 
					}; 
				}; 
			}; 
		};
	};
