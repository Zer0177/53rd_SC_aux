_newvalue = player getVariable ["PlayerValue", 0];
_oldvalue = missionNamespace getVariable ["TotalDollarAmount", 0];
_cost = _oldvalue + _newvalue;
missionNamespace setVariable ["TotalDollarAmount", _cost, true];
player call MEU_fnc_costcalc;