_droppos = getPosATL _this ;
_target = "MEU_InvisibleTargetAir" createVehicle _droppos;
createVehicleCrew _target;  
_target attachTo [_this,[-0.5,-0.5,5]];
