#include "\a3\editor_f\Data\Scripts\dikCodes.h"


[["1st MEU", "Auto Map Markers"], "Building Clear", ["Building Clear", "Mark Building as Clear"], "", {call QUI_fnc_MarkPosition;}, [DIK_DOWN, [false, false, false]]] call cba_fnc_addKeybind;

[["1st MEU", "Auto Map Markers"], "Rally Point", ["Rally Point", "Mark Rally Point"], "", {['RP', 'hd_flag'] call QUI_fnc_MarkLZ;}, [DIK_INSERT, [false, false, false]]] call cba_fnc_addKeybind;

[["1st MEU", "Auto Map Markers"], "Drop Zone", ["Drop Zone", "Mark Drop Zone"], "", {['DZ', 'hd_end'] call QUI_fnc_MarkLZ;}, [DIK_LEFT, [false, false, false]]] call cba_fnc_addKeybind;

[["1st MEU", "Auto Map Markers"], "Landing Zone", ["Landing Zone", "Mark Landing Zone"], "", {['LZ', 'hd_pickup'] call QUI_fnc_MarkLZ;}, [DIK_UPARROW, [false, false, false]]] call cba_fnc_addKeybind;

[["1st MEU", "Auto Map Markers"], "Casualty Collection Point", ["Casualty Collection Point", "Casualty Collection Point"], "", {['CCP', 'RedCrystal'] call QUI_fnc_MarkCCP;}] call cba_fnc_addKeybind;

[["1st MEU", "Auto Map Markers"], "Delete Nearest marker", ["Delete Nearest marker", "Delete Nearest marker"], "", {['hd_dot'] call QUI_fnc_DeleteMarker;}, [DIK_DELETE, [false, false, false]]] call cba_fnc_addKeybind;

[["1st MEU","Polarize"],"Polarized",["Polarized","Polarize Helmet"],{[player] spawn MEU_fnc_ActivateV;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;

[["1st MEU","Polarize"],"DePolarized",["DePolarized","DePolarize Helmet"],{[player] spawn MEU_fnc_DeactivateV;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;

[["1st MEU","Maglock"],"Release Maglock",["Release Maglock","Release Magloc"],{[vehicle player] spawn V_FZ_fnc_PelicanUnLoadValidate;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;