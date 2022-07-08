private _loadout = getUnitLoadout player;
_loadout params ["_rifle", "_launcher", "_handgun", "_uniform", "_vest", "_backpack"];
private _dollarValue = 0;
private _getDollarValue = {
    params ["_class"];
    private _cfg = "CfgWeapons";
    if (isClass (configFile >> "CfgVehicles" >> _class)) then
    {
        _cfg = "CfgVehicles";
    };
    getNumber(configFile >> _cfg >> _class >> "dollarvalue");
};
{
    _x params ["_class"];
	if (isNil "_class") exitWith{};
    _dollarValue = _dollarValue + (_class call _getDollarValue);
} forEach [_rifle, _launcher, _handgun];
{
    _x params ["_class", "_items"];
	if (isNil "_class") exitWith{};
    _dollarValue = _dollarValue + (_class call _getDollarValue);
    {
        _x params ["_class", "_count"];
        _dollarValue = _dollarValue + ((_class call _getDollarValue) * _count);
    } forEach _items;
} forEach [_uniform, _vest, _backpack];

