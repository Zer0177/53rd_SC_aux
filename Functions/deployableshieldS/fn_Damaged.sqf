params ["_object"]

private _objshield = "MEU_Deployable_Shield";

_objshield addEventHandler ["Dammaged", {
	params ["_unit", "_selection", "_damage", "_hitIndex", "_hitPoint", "_shooter", "_projectile"];

if (_objshield == _damage) then {deleteVehicle _objshield};

if (deleteVehicle _objshield) then { createVehicle ["MEU_Deployable_Shield_Damaged", (getPosATL "_objshield"), [], 0, "CAN_COLLIDE"]; };

    },
];