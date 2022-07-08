_elephant = _this select 0;
_veh = _this select 1;
_pos = _this select 2;
_loaded = false;
_loc = switch (_pos) do
            {
                case 1: {[1.5,5.1, -1.6]};
                case 2: {[1.5,-2.0, -1.6]};
                case 3: {[-0.6,-8.5, -1.6]};
                default {[1.5,0, -1.20]};
            };
switch true do {
	case (_veh isKindOf "OPTRE_M12_Base" && _pos == 3) : {
		_veh attachTo [_elephant,_loc];
		_veh setDir 180;
		_loaded = true;
		_elephant setVariable ["Maglock_pos_" + str (_pos), false]
	};
	case (_veh isKindOf "OPTRE_M12_Base") : {
		_veh attachTo [_elephant,_loc];
		_veh setDir 0;
		_loaded = true;
		_elephant setVariable ["Maglock_pos_" + str (_pos), false]
	};
	case (_veh isKindOf "Quadbike_01_base_F") : {
		_veh attachTo [_elephant,[(_loc select 0),(_loc select 1),-3]];
		_veh setDir 0;
		_loaded = true;
		_elephant setVariable ["Maglock_pos_" + str (_pos), false]
	};
};
if (_loaded) then 
{
	_elephant setVariable ["OPTRE_elephant_AttachedToVehiclesEffect_" + str (_pos) , [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
	_elephant addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			if !(_x isKindof "OPTRE_Static_M247H_Shielded_Tripod") then {detach _x;};
		} forEach attachedObjects _unit;
	}];
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CARGO UNSUPPORTED!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be mag locked by the Elephant.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been designed to be lifted via maglock. Operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};