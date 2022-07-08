params ["_throwable"];

[
	{
		params ["_throwable"];

		private _bubble = createVehicle ["MEU_FC_Energy_Shield", (getPosATL _throwable), [], 0, "CAN_COLLIDE"];
		deleteVehicle _throwable;

		[
			{
				params ["_bubble"];

				deleteVehicle _bubble;
			},
			[_bubble],
			MEU_Bubble_Duration
		] call CBA_fnc_waitAndExecute;
	},
	[_throwable],
	MEU_Bubble_Deploy_Time
] call CBA_fnc_waitAndExecute;
