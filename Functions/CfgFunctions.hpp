class CfgFunctions
{
    class F53rd 
    { 
        class PelicanMagLiftSystem 
		{ 
			file="53rd_SC_aux\Functions"; 
            class PelicanLoadValidate 
            { 
                file = "53rd_SC_aux\Functions\fn_PelicanLoadValidate.sqf"; 
            }; 
            class PelicanUnLoadValidate 
            { 
                file = "53rd_SC_aux\Functions\fn_PelicanUnLoadValidate.sqf"; 
            }; 
        }; 
    }; 
    class MEU
    {
        class ACE_compat
        {
            class fn_meuPainReduce
            {
                file = "53rd_SC_aux\Functions\fn_meuPainReduce.sqf";
            };
            class fn_meuPainReduceLocal
            {
                file = "53rd_SC_aux\Functions\fn_meuPainReduceLocal.sqf";
            };
			class medkit
			{
                file = "53rd_SC_aux\Functions\fn_medkit.sqf";
			};
			class biomed
			{
                file = "53rd_SC_aux\Functions\fn_biomed.sqf";
			};
			class thrusterforward
			{
                file = "53rd_SC_aux\Functions\fn_thrusterforward.sqf";
			};
			class thrusterback
			{
                file = "53rd_SC_aux\Functions\fn_thrusterback.sqf";
			};
			class thrusterleft
			{
                file = "53rd_SC_aux\Functions\fn_thrusterleft.sqf";
			};
			class thrusterright
			{
                file = "53rd_SC_aux\Functions\fn_thrusterright.sqf";
			};
			class Bubbleshield_throw
			{
                file = "53rd_SC_aux\Functions\Bubbleshield_throw.sqf";
			};
            class Deployableshield_throw
			{
                file = "53rd_SC_aux\Functions\deployableshieldS\fn_ThrowDS.sqf";
			};
			class flexseal
			{
                file = "53rd_SC_aux\Functions\fn_flexseal.sqf";
			};
			class eletolockdown
			{
                file = "53rd_SC_aux\Functions\eletolockdown.sqf";
			};
			class lockdowntoele
			{
                file = "53rd_SC_aux\Functions\lockdowntoele.sqf";
			};
			class ElephantLoadValidate
			{
                file = "53rd_SC_aux\Functions\ElephantLoadValidate.sqf";
			};
			class ElephantUnloadValidate
			{
                file = "53rd_SC_aux\Functions\ElephantUnloadValidate.sqf";
			};
			class RailGunNARQ
			{
				file = "53rd_SC_aux\Functions\utility\RailgunNARQ.sqf";
			};
			class droptarget
			{
				file = "53rd_SC_aux\Functions\utility\createdroptarget.sqf";
			};
			class deldroptarget
			{
				file = "53rd_SC_aux\Functions\utility\deletedroptarget.sqf";
			};
			class costeffect
			{
				file = "53rd_SC_aux\Functions\utility\costeffect.sqf";
			};
			class costcalc
			{
				file = "53rd_SC_aux\Functions\utility\costcalc.sqf";
			};
        };
        class add11thFmgs
        {
        file =  "53rd_SC_aux\Functions";
                class add11thFmgs{};
        };
		class DepoVisors
        {
        file =  "53rd_SC_aux\Functions\DepoVisors";
                class ActivateV{};
				class DeactivateV{};

        };
		class shielddamage
        {
        file = "53rd_SC_aux\Functions\deployableshieldS\fn_damaged.sqf";
        };
        class shielddestroyed
        {
        file = "53rd_SC_aux\Functions\deployableshieldS\fn_destroy.sqf";
        };
        tag = "MEU";
		class afterburner_functions
		{
			file = "53rd_SC_aux\Functions\afterburnerMk1";
			class Afterburners_Disengage;
			class Afterburners_Engage;
		};
		class MEU_Keybinds
		{
			class keybinds
			{
				file = "53rd_SC_aux\Functions\keybinds.sqf";
				postInit = 1;
			};
		};
                class MEU_utility_functions
		{
			class get_config_attribute
			{
				file = "53rd_SC_aux\Functions\utility\get_config\get_config_attribute.sqf";
			};
			class integer_to_boolean
			{
				file = "53rd_SC_aux\Functions\utility\get_config\integer_to_boolean.sqf";
			};
		};

		class HEV
		{
			class HEVAdjust
			{
				file = "53rd_SC_aux\Functions\HEV\fn_HEVAdjust.sqf";
			};
		};
    };

	class MEU_Common
	{
		class functions
		{
			file = "53rd_SC_aux\Functions\common";

			class cloneObjectToLocal {};
			class easeIn {};
			class easeInOut {};
			class easeOut {};
			class move {};
			class moveObject {};
			class moveObjectLocal {};
			class moveTowards {};
			class turnTowards {};
		};
	};

	class MEU_Capital_Ships
	{
		class functions
		{
			file = "53rd_SC_aux\Functions\capital_ships";

			class ambientFleet {};
			class crashShip {};
			class crashShipLocal {};
			class createShipControls {};
			class moveShip {};
			class moveShipLocal {};
			class moveTo {};
			class selectShip {};
			class zeus
			{
				postInit = 1;
			};

			// GUI
			class cancelButton {};
			class controlSettingsOnLoad {};
			class moveButton {};
			class selectDestination {};
			class sliderChanged {};
		};
	};

	class MEU_Frigate
	{
		class functions
		{
			file = "53rd_SC_aux\Functions\frigate";

			class countdown {};
			class createControl {};
			class deployShip {};
			class deployShipLocal {};
			class dialogSettingsOnLoad {};
			class selectDestination {};

			class deployButton {};
			class spawnButton {};
		};
	};

	class MEU_Slipspace
	{
		class functions
		{
			file = "53rd_SC_aux\Functions\slipspace";

			class createShip {};
			class generateID {};
			class getShipDirOffset {};
			class jumpShipIn {};
			class jumpShipOut {};
			class moduleJumpShipIn {};
			class moduleJumpShipOut {};
			class zeus
			{
				postInit = 1;
			};
		};
	};

	class OPTRE
	{
		class HEV
		{
			class HEVChuteDeploy
			{
				file = "53rd_SC_aux\Functions\HEV\fn_HEVChuteDeploy.sqf";
			};

			class HEVDoor
			{
				file = "53rd_SC_aux\Functions\HEV\fn_HEVDoor.sqf";
			};

			class HEVHandleLanding
			{
				file = "53rd_SC_aux\Functions\HEV\fn_HEVHandleLanding.sqf";
			};
		};

		class MenuFunctions
		{
			class HEVRoom
			{
				file = "53rd_SC_aux\Functions\MenuFunctions\fn_HEVRoom.sqf";
			};
		};
	};
};
