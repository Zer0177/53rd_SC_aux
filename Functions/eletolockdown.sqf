_veh = ( typeof _this );
_objectsArray = [
	["Land_OPTRE_medical_tent_grn",[12,-4,0],0,1,0,[],"","",true,false], 
	["VES_Static_M41",[9,12,0],360,1,0,[],"","",true,false], 
	["VES_Static_M41",[-9,12,0],3.07211,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[-15,-2,0],90,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[-15,7,0],90,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[-15,-11,0],90,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[19,-2,0],270,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[12,16,0],225.001,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[-12,16,0],135,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[19,7,0],270,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[19,-11,0],270,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[0,-23,0],0,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[11,-21,0],315,1,0,[],"","",true,false], 
	["Land_OPTRE_M72_barrier",[-13,-21,0],45,1,0,[],"","",true,false]
];
[getpos _this, (direction _this), _objectsArray, 0] call BIS_fnc_objectsMapper;
_medtent = getPos player nearestObject "Land_OPTRE_medical_tent_grn"; 
_medtent addItemCargoGlobal ["ACE_elasticBandage", 60];
_medtent addItemCargoGlobal ["ACE_packingBandage", 60];
_medtent addItemCargoGlobal ["ACE_plasmaIV_500", 10];
_medtent addItemCargoGlobal ["MEU_Biofoam_Light", 40];
_medtent addItemCargoGlobal ["MEU_Medigel_Light", 40];
_medtent addItemCargoGlobal ["MEU_PlasmaIV", 10];
_medtent addItemCargoGlobal ["MEU_compat_Ibuprofen", 40];
_medtent addItemCargoGlobal ["MEU_Emergency_MedKit", 2];
_medtent addItemCargoGlobal ["ACE_epinephrine", 20];
_medtent addItemCargoGlobal ["ACE_tourniquet", 16];
_medtent addItemCargoGlobal ["ACE_morphine", 10];
_medtent addItemCargoGlobal ["ACE_plasmaIV", 10];
_medtent addItemCargoGlobal ["ACE_splint", 10];
_turretmain = createVehicle ["VES_Static_M41", (getPosATL _this), [], 0, 'None'];
_turretmain attachTo [_this,[4.4,7.85, 2.25]];
_turretstarboard = createVehicle ["OPTRE_Static_M247T_Tripod", (getPosATL _this), [], 0, 'None'];
_turretstarboard attachTo [_this,[5.5,-3.8,-0.35]];
_turretstarboard setDir 90;
_turretport = createVehicle ["OPTRE_Static_M247T_Tripod", (getPosATL _this), [], 0, 'None'];
_turretport attachTo [_this,[-5.5,-3.8,-0.35]];
_turretport setDir 270;
_respawn = [west, _this,"Elephant Respawn"] call BIS_fnc_addRespawnPosition;
_respawnPositions = west call BIS_fnc_getRespawnPositions;
_idnum = count _respawnPositions;
missionNameSpace setVariable ["respawncount", _idnum, true];
_this setFuel 0.00001;