_pos = _this select 1;
_elephant = _this select 0;
_vehicles = ((_this select 0)getVariable ["OPTRE_elephant_AttachedToVehiclesEffect_" + str (_pos),[]]);
titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLIFT RELEASED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F"; 
	{
		detach _x;
		_vel = velocity (_this select 0);
		_x setVelocity [(_vel select 0) / 1.5, (_vel select 1) / 1.5, (_vel select 2) / 1.5];
		_x allowDamage false;
	} forEach _vehicles;
_elephant setVariable ["OPTRE_elephant_AttachedToVehiclesEffect_" + str (_pos) , nil, true];