params ["_caller", "_target", "_selection", "_className"];
_wear = goggles _target;
_findit = ["Marks_Avitors_dp","ODST_Shemagh_Olive_dp","ODST_Shemagh_Urban_dp","ODST_Shemagh_Tan_dp","ODST_Shemagh_Brown_dp","JTAC_Bala_dp"] find _wear;
_selected = ["Marks_Aviators","ODST_Shemagh_Olive","ODST_Shemagh_Urban","ODST_Shemagh_Tan","ODST_Shemagh_Brown","JTAC_Bala"] select _findit;
_target addGoggles _selected;