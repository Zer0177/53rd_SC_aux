params ["_throwable"];

[
	{
		params ["_throwable"];

		private _shield = createVehicle ["MEU_Deployable_Shield", (getPosATL _throwable), [], 0, "CAN_COLLIDE"];
		deleteVehicle _throwable;

		[
			{
				params ["_shield"];

				deleteVehicle _shield;
			},
			[_shield],
			MEU_DeployableShield_Duration
		] call CBA_fnc_waitAndExecute;
	},
	[_throwable],
	MEU_DeployableShield_Time
] call CBA_fnc_waitAndExecute;

		if ((damage _shield) > 100) then { _shield setObjectTexture [1, "\pboname\texture2.paa"];

};

		if ((damage _shield) > 200) then { deleteVehicle _shield;

};
