_vehicles = ((_this select 0) getVariable ["OPTRE_Pelican_AttachedToVehiclesEffect",[]]);
	
if (
		(
			{
				(_x isKindOf "OPTRE_M808B_base") OR
				(_x isKindOf "OPTRE_M808B2") OR
				(_x isKindOf "OPTRE_M808S") OR
				(_x isKindOf "OPTRE_M12A1_LRV") OR 
				(_x isKindOf "OPTRE_M12_LRV") OR
				(_x isKindOf "OPTRE_M12G1_LRV") OR 
				(_x isKindOf "OPTRE_M12R_AA") OR 
				(_x isKindOf "OPTRE_M12_FAV_APC") OR 
				(_x isKindOf "OPTRE_M12_FAV") OR
				(_x isKindOf "OPTRE_M813_TT") OR
				(_x isKindOf "OPTRE_M413_base") OR
				(_x isKindOf "OPTRE_EscapePod") OR
				(_x isKindOf "OPTRE_M808BM_UNSC") OR
				(_x isKindOf "OPTRE_M494") OR
				(_x isKindOf "VES_IFV76_A") OR
				(_x isKindOf "Truck_03_base_F") OR
				(_x isKindOf "B_Boat_Armed_01_minigun_F") OR
				(_x isKindOf "B_Boat_Transport_01_F") OR
                (_x isKindOf "optre_hornet_base") OR
                (_x isKindOf "I_APC_Wheeled_03_cannon_F") OR
                (_x isKindOf "B_TMBT_01_arty_F") OR
                (_x isKindOf "B_MBT_01_arty_F") OR
                (_x isKindOf "B_T_APC_Tracked_01_AA_F") OR
                (_x isKindOf "B_APC_Tracked_01_AA_F") OR
				(_x isKindOf "Land_Device_slingloadable_F") OR
                (_x isKindOf "B_APC_Tracked_01_CRV_F") OR
				(_x isKindOf "B_T_APC_Tracked_01_CRV_F") OR
				(_x isKindOf "APC_Wheeled_02_base_v2_F") OR
				(_x isKindOf "MEU_Leopard") OR
				(_x isKindOf "MEU_Leopard_Medical_APC") OR
				(_x isKindOf "B_Lifeboat") OR
				(_x isKindOf "LM_OPCAN_MGS_AR_DES") OR
				(_x isKindOf "LM_OPCAN_MGS_AR_MIX") OR
				(_x isKindOf "LM_OPCAN_MGS_AR_WDL") OR
				(_x isKindOf "LM_OPCAN_MGS_MC_WDL") OR
				(_x isKindOf "B_AFV_Wheeled_01_cannon_F") OR
				(_x isKindOf "B_AFV_Wheeled_01_up_cannon_F") OR
				(_x isKindOf "B_T_AFV_Wheeled_01_cannon_F") OR
				(_x isKindOf "B_T_AFV_Wheeled_01_up_cannon_F") OR
				(_x isKindOf "1st_meu_oryx") OR
				(_x isKindOf "B_SDV_01_F") OR
				(_x isKindOf "53rd_M914_RV") OR
				(_x isKindOf "53rd_M914_RV") OR
				(_x isKindOf "53rd_M12R_AA") OR
				(_x isKindOf "53rd_M12G1_LRV") OR
				(_x isKindOf "53rd_M12_FAV") OR
				(_x isKindOf "53rd_M12A1_LRV") OR
				(_x isKindOf "53rd_M813_TT") OR
				(_x isKindOf "53rd_M12_FAV_APC") OR
				(_x isKindOf "53rd_M1022") OR
				(_x isKindOf "53rd_MGS_01D") OR
				(_x isKindOf "53rd_Scorpion") OR
				(_x isKindOf "53rd_UNSC_hornet")
			} count _vehicles > 0
		)
) then {
    //and ((_this "LandGearUp") == 0)
	//If we are less then 2 meters off ground, dont
	if ((((getPos (_this select 0)) select 2) < 2) and ({(_x isKindOf "OPTRE_M808B_base") OR (_x isKindOf "optre_hornet_base")} count _vehicles > 0)) then {
		
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>RELEASE FAILED!</t><br/>-------------------------------------------<br/>TOO LOW!", "PLAIN DOWN", -1, true, true];
		playSound "FD_CP_Not_Clear_F";
		
	} else {

		//before dropping see that gears are up
		if(
			(_this select 0) animationPhase "frontgear" == 0
		) exitWith {
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>GEARS STILL DOWN!</t><br/>-------------------------------------------<br/>Your landing gears must be raised to unload larger vehicles!", "PLAIN DOWN", -1, true, true];
			playSound "FD_CP_Not_Clear_F";
		};

		//Then do droppin shenanagins
		(_this select 0) allowDamage false;
		(_this select 0) setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [], true];
		//If above 200, do airdrop
		if ((((getPosATL (_this select 0)) select 2) >= 200) and !({(_x isKindOf "optre_hornet_base") OR (_x isKindOf "OPTRE_EscapePod") OR (_x isKindOf "Land_Device_slingloadable_F")} count _vehicles > 0)) then
		{
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLIFT AIRDROPPED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
			playSound "FD_Finish_F"; 
			{
				if ({(_x isKindOf "OPTRE_M808B_base") OR (_x isKindOf "optre_hornet_base")} count _vehicles > 0) then {player action ["LandGearUp", (_this select 0)]; Sleep 2;};
				detach _x;
				_vel = velocity (_this select 0);
				_x setVelocity [(_vel select 0) / 2, (_vel select 1) / 2, (_vel select 2) -25];
				_x allowDamage false;
				sleep .2;
				waitUntil {((position _x) select 2) <= 185};
				_para = createVehicle ["B_Parachute_02_F", position _x, [], 0, "CAN_COLLIDE"];
				_velx = velocity _x;
				_para setVelocity [(_velx select 0), (_velx select 1), (_velx select 2)];
				_para setDir (direction _x);
				_x attachTo [_para, [0,0,1]];
				sleep 2;
				_smoke = createVehicle ["SmokeShellRed", position _x, [], 0, "CAN_COLLIDE"];
				_smoke attachTo [_x, [0,0,0]];
				if ((daytime > 17.5) OR (daytime < 7)) then {_flare = createVehicle ["F_20mm_Red", position _smoke, [], 0, "CAN_COLLIDE"]; _flare attachTo [_smoke, [0,0,0]];};
				sleep 1;
				waitUntil {(((position _x) select 2) < 8) AND (((position _x) select 2) > 4)};
				detach _x;
				waitUntil {(((position _smoke) select 2) < 2) AND (((position _smoke) select 2) > 1)};
				detach _smoke;
			} forEach _vehicles;
		} else {
			//Else drop without parachute
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLIFT RELEASED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
			playSound "FD_Finish_F"; 
			{
				if (_x isKindOf "Land_Device_slingloadable_F") then {_x setVectorUp [0,0,1]};
				detach _x;
				_vel = velocity (_this select 0);
				_x setVelocity [(_vel select 0) / 1.5, (_vel select 1) / 1.5, (_vel select 2) / 1.5];
				_x allowDamage false;
			} forEach _vehicles;
		};
		
		sleep 0.5;
		
		{
			_x allowDamage true;
		} forEach _vehicles;
		(_this select 0) allowDamage true;
		};
		
} else {
	
	//before dropping see that gears are up
	if(
		(_this select 0) animationPhase "frontgear" == 0
	) exitWith {
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>GEARS STILL DOWN!</t><br/>-------------------------------------------<br/>Your landing gears must be raised to unload larger vehicles!", "PLAIN DOWN", -1, true, true];
		playSound "FD_CP_Not_Clear_F";
	};

	0 = (_this select 0) spawn OPTRE_fnc_PelicanLoad_UnloadAllSupplyPods;
	
}; 