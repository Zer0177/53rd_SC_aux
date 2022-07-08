private _vehicle = vehicle player;
private _MEUBurnList=["VES_D77HTCIS","53rd_Raven","VES_D77HTCIS_A","VES_D77HTCI_A","VES_D77HTCI","VES_AV14_AIM","VES_AV14_AGM","VES_AV14_Rockets","VES_AV14","OPTRE_AV22_Sparrowhawk","OPTRE_AV22A_Sparrowhawk","OPTRE_AV22B_Sparrowhawk","OPTRE_AV22C_Sparrowhawk","VES_UH144S","VES_UH144S_A","VES_UH144","VES_UH144_A","11_Pelican", "11_Sparrowhawk_L","11_Sparrowhawk_G", "Icarus_AV14", "11_Falcon","11_Falcon_G","11_Refined_Hornet", "MEU_Stealth_falcon" ];

if (!MEU_EX_Afterburner_Enable) then
{
	private _boostStatus = _vehicle getvariable ["OPTRE_Afterburners_EngagedStatus",false];

	if ((driver _vehicle != player) OR _boostStatus OR !(isEngineOn _vehicle) OR (isTouchingGround _vehicle) OR (_MEUBurnList findIf {_vehicle isKindOf _x} < 0)) exitWith{};

	private ["_vel", "_dir"];

	_vehicle setvariable ["OPTRE_Afterburners_EngagedStatus",true,true];
	hint parseText "<t color='#2CDB24'>Afterburners [ON]</t>";
	if (speed _vehicle <= 600) then {
			_vel = velocity _vehicle;
			_dir = direction _vehicle;
			_vehicle setVelocity [
			(_vel select 0) + (sin _dir * 10),
			(_vel select 1) + (cos _dir * 10),
			(_vel select 2)
			];
	};
	sleep 1;
	hintSilent "";

	while {((_vehicle getvariable ["OPTRE_Afterburners_EngagedStatus",false]) AND (alive _vehicle))} do
	{ 
		if (speed _vehicle <= 600) then {
			_vel = velocity _vehicle;
			_dir = direction _vehicle;
			_vehicle setVelocity [
			(_vel select 0) + (sin _dir * 10), 
			(_vel select 1) + (cos _dir * 10), 
			(_vel select 2)
			];
		};
		sleep 0.5;
	};
} else 
{
	private _exBoostStatus = _vehicle getVariable ["MEU_Afterburner_Status", false];
	private _exBrakeStatus = _vehicle getVariable ["MEU_Airbrake_Status", false];
	private ["_vel", "_dir", "_speed"];
	private _hinted = false;
	
	if ((driver _vehicle != player) OR !(isEngineOn _vehicle) OR (isTouchingGround _vehicle) OR (_MEUBurnList findIf {_vehicle isKindOf _x} < 0)) exitWith {};
	
	if (_exBoostStatus) then
	{
		hint parseText "[EX]Afterburners [<t color='#ff0000'>OFF</t>]";
		_vehicle setvariable ["MEU_Afterburner_Status", false, true];
		sleep 0.3;
		hintSilent "";
	} else 
	{
		hint parseText "[EX]Afterburners [<t color='#2CDB24'>ON</t>]";
		_vehicle setvariable ["MEU_Afterburner_Status", true, true];
		_vehicle setvariable ["MEU_Airbrake_Status", false, true];
		_hinted = true;
	};

	while {((_vehicle getVariable ["MEU_Afterburner_Status", false]) AND (alive _vehicle))} do
	{
		if ((speed _vehicle <= 600) AND (speed _vehicle > 0)) then 
		{
			_vel = velocity _vehicle;
			_dir = vectorDir _vehicle;
			_speed = 10;
			_vehicle setVelocity [
				(_vel # 0) + ((_dir # 0) * _speed), 
				(_vel # 1) + ((_dir # 1) * _speed), 
				(_vel # 2) + ((_dir # 2) * _speed)
			];
		};
		sleep 0.3;
		if(_hinted) then {_hinted = false; hintSilent "";};
	};
};