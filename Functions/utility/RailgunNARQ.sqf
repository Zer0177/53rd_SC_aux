_unit = _this select 0;
_source= _this select 1;
_damage = _this select 2;
_cmg = currentWeapon  _source; 
if (_cmg == "MEU_Railgun")then{
	_eng = _unit getHitPointDamage "HitEngine";
	_eng1 = _unit getHitPointDamage "HitEngine1";
	_fuel = _unit getHitPointDamage "HitHRotor";
	_rot = _unit getHitPointDamage "HitVRotor";
	_tail = _unit getHitPointDamage "HitFuel";
	_tur = _unit getHitPointDamage "HitTurret";
	_enghit=_eng + 0.25;
	_eng1hit=_eng1 + 0.25;
	_fuelhit=_fuel + 0.25;
	_turhit=_tur + 0.25;
	_rothit=_rot + 0.25;
	_tailhit=_tail + 0.25;
	_unit setHitPointDamage ["HitEngine", _enghit];
	_unit setHitPointDamage ["HitEngine1", _eng1hit];
	_unit setHitPointDamage ["HitFuel", _fuelhit];
	_unit setHitPointDamage ["HitTurret", _turhit];
	_unit setHitPointDamage ["HitHRotor", _rothit];
	_unit setHitPointDamage ["HitVRotor", _tailhit];

};