/*private _objshield = "MEU_Deployable_Shield";
    
private _shielddamaged = createVehicle ["MEU_Deployable_Shield_Damaged", (getPosATL _objshield), [], 0, "CAN_COLLIDE"]; 
    
private _shieldhealth = (1 - damage _objshield) * 100; // Health in % from 0 to 100
    
private _shielddamage = damage _objshield;
_objshield addEventHandler ["hit",
    {
    _unit = (_this select 0);
    _source = select _ammo;
    _instigator = (_this select "");
    _damage = 50;
        
	params ["_unit","_source", "_damage","_instigator"];
        
if ((_shieldhealth) < 50) then { _objshield setObjectTexture [1, "first_meu_aux\data\11th\Hades_H\Ares_Company.paa"]};
                                             
if ((_shieldhealth) < 25) then { deleteVehicle _objshield};
                                             
if (deleteVehicle _objshield) then { _shielddamaged };
}];    
*/ 