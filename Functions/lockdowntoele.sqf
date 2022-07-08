_veh = ( typeof _this );
_resppoint = (missionNameSpace getVariable ["respawncount",[]]);
[west, (_resppoint -1)] call BIS_fnc_removeRespawnPosition;
{deleteVehicle _x} forEach nearestObjects [_this, ["Land_OPTRE_medical_tent_grn","VES_Static_M41","Land_OPTRE_M72_barrier","OPTRE_Static_M247T_Tripod"], 35];
_this setFuel 1;