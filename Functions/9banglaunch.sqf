_ammo = _this select 6;
sleep 5;
_ammopos = getpos _ammo;
_bang = createVehicle ["MEU_9bang_nofuse_Mag", _ammopos, [], 0, "CAN_COLLIDE"];