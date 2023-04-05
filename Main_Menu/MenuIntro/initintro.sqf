cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;

//videosintro = ["53rd_SC_aux\Main\MenuIntro\Loading-screen-1.ogv", "53rd_SC_aux\Main\MenuIntro\Loading-screen-1.ogv"] call BIS_fnc_selectRandom;

while {true} do
{
    _video = ["53rd_SC_aux\Main\MenuIntro\Loading-screen-1.ogv"] spawn BIS_fnc_playVideo;
    waitUntil {scriptDone _video};    
};

 