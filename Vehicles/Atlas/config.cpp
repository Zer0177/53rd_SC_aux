class CfgPatches {
	class 53rd_Land_Atlas {
		units[] = {"53rd_M1022"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};
class CfgVehicles {
	class LM_OPCAN_MBTB_KOS;
	class 53rd_M1022: LM_OPCAN_MBTB_KOS
		{
		displayName="[53rd] M10 Atlas";
		author="Seven";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
        side=1;
		editorCategory = "53rd_cat_faction";
		editorSubCategory = "53rd_Tank";
		crew="VES_Rifleman_MA5B_MAR";
		typicalCargo[]=
		{
			"VES_Rifleman_MA5B_MAR"
		};
		hiddenSelectionsTextures[]=
		{
            "53rd_SC_aux\Vehicles\Atlas\White_Body.paa",
            "53rd_SC_aux\Vehicles\Atlas\White_Gun.paa",
            "53rd_SC_aux\Vehicles\Atlas\White_Back.paa",
            "53rd_SC_aux\Vehicles\merkava\camonet_NATO_Tundra_CO.paa"
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TextureSources
		{
			class meu_olive
			{
				author="53rd & Seven";
				displayName="Olive";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\Olive_Body.paa",
					"53rd_SC_aux\Vehicles\Atlas\Olive_Gun.paa",
					"53rd_SC_aux\Vehicles\Atlas\Olive_Back.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
			class meu_sand
			{
				author="53rd & Seven";
				displayName="Sand";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\Sand_Body.paa",
					"53rd_SC_aux\Vehicles\Atlas\Sand_Gun.paa",
					"53rd_SC_aux\Vehicles\Atlas\Sand_Back.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
			};
			class meu_winter
			{
				author="53rd & Seven";
				displayName="Winter";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\White_Body.paa",
					"53rd_SC_aux\Vehicles\Atlas\White_Gun.paa",
					"53rd_SC_aux\Vehicles\Atlas\White_Back.paa",
					"53rd_SC_aux\Vehicles\merkava\camonet_NATO_Tundra_CO.paa"
				};
			};
			class meu_winter_5_3
			{
				author="53rd & Seven";
				displayName="Winter (5-3)";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\White_Body_5-3.paa",
					"53rd_SC_aux\Vehicles\Atlas\White_Gun_5-3.paa",
					"53rd_SC_aux\Vehicles\Atlas\White_Back_5-3.paa",
					"53rd_SC_aux\Vehicles\merkava\Vehicles\camonet_NATO_Tundra_CO.paa"
				};
			};
			class meu_lemon
			{
				author="53rd & Seven";
				displayName="Lemon";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\Lemon_Body.paa",
					"53rd_SC_aux\Vehicles\Atlas\Lemon_Gun.paa",
					"53rd_SC_aux\Vehicles\Atlas\Lemon_Back.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
			};
			class meu_olive_PIA
			{
				author="53rd & Seven";
				displayName="Olive (Pain)";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\Olive_Body.paa",
					"53rd_SC_aux\Vehicles\Atlas\Olive_Gun.paa",
					"53rd_SC_aux\Vehicles\Atlas\Olive_Back_PIA.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
			};
			class meu_sand_PIA
			{
				author="53rd & Seven";
				displayName="Sand (Pain)";
				textures[]=
				{
					"53rd_SC_aux\Vehicles\Atlas\Sand_Body.paa",
					"53rd_SC_aux\Vehicles\Atlas\Sand_Gun.paa",
					"53rd_SC_aux\Vehicles\Atlas\Sand_Back_PIA.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
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
};	
