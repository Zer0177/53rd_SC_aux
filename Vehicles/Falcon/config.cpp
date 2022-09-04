class CfgPatches {
	class 53rd_Air_Falcon {
		units[] = {"53rd_UNSC_Falcon","53rd_UNSC_falcon_AMA"};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {};
	};
};
class cfgWeapons {
    
};

class cfgVehicles 
{ 
    class OPTRE_UNSC_falcon;
    class 53rd_UNSC_falcon_AMA: OPTRE_UNSC_falcon
    {
        dlc="53rd";
        author="Skywalker";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        forceInGarage=1;
        editorCategory = "53rd_cat_faction";
        editorSubCategory = "53rd_Rotary";
        crew="53rd_Volare_airmen_unit";
        displayName="[53rd] UH-144 Falcon (Ama)";
        hiddenSelectionsTextures[]=
        {
            "53rd_SC_aux\Vehicles\Falcon\Falcon_Hull_Standard_BLUE_CO.paa",
            "53rd_SC_aux\Vehicles\Falcon\Falcon_HullExtra_Standard_CO.paa",
            "53rd_SC_aux\Vehicles\Falcon\falcon_wingtips_standard_co.paa",
            "53rd_SC_aux\Vehicles\Falcon\Falcon_Skid_Standard_CO.paa"
        };
        tf_range=25000;
        tf_isolatedAmount=0.40000001;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        enableRadio=1;
        class UserActions
        {
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
                statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast";
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
                statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
                textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
                userActionID=58;
            };
            class Thruster400Engage
            {
                animPeriod=5;
                condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND   (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player  == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
                displayName="<t color='#04B45F'>Engage Forward Thrusters";
                displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
                onlyForPlayer=0;
                position="cargo_door_handle";
                priority=10;
                radius=100000;
                showWindow=0;
                statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
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
                statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
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
                statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage";
                textToolTip="<t color='#FCE205'>Disengage Afterburners";
                userActionID=55;
            };
        };
        class 53rd_UNSC_falcon: OPTRE_UNSC_falcon
        {
            dlc="53rd";
            author="Skywalker";
            scope=2;
            scopeCurator=2;
            scopeArsenal=2;
            forceInGarage=1;
            editorCategory = "53rd_cat_faction";
            editorSubCategory = "53rd_Rotary";
            crew="53rd_Volare_airmen_unit";
            displayName="[53rd] UH-144 Falcon";
            hiddenSelectionsTextures[]=
            {
                "53rd_SC_aux\Vehicles\Falcon\Falcon_Hull_Standard_CO.paa",
                "53rd_SC_aux\Vehicles\Falcon\Falcon_HullExtra_Standard_CO.paa",
                "optre_vehicles\falcon\data\falcon_wingtips_standard_co.paa",
                "53rd_SC_aux\Vehicles\Falcon\Falcon_Skid_Standard_CO.paa"
            };
            tf_range=25000;
            tf_isolatedAmount=0.40000001;
            tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
            tf_hasLRradio=1;
            enableRadio=1;
            class UserActions
            {
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
                    statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast";
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
                    statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
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
                    statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
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
                    statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
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
                    statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage";
                    textToolTip="<t color='#FCE205'>Disengage Afterburners";
                    userActionID=55;
                };
            };
        };
    };
};  