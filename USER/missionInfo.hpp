/*
*   Legt allgemeine Information über die Mission fest.
*/

author = "XDrake & Eras für Gruppe Adler";                                               // Missionsersteller
onLoadName = "Objective Gecko";                                                   // Name der Mission
onLoadMission = "Move, shoot, communicate.";                                                             // Beschreibung der Mission (wird im Ladebildschirm unterhalb des Ladebildes angezeigt)
loadScreen = "data\loadpic.paa";                                                // Ladebild
overviewPicture = "data\loadpic.paa";                                                           // Bild, das in der Missionsauswahl angezeigt wird
overviewText = "Move, shoot, communicate.";                                                              // Text, der in der Missionsauswahl angezeigt wird

//SUSHI SCRIPT ============================================================

#define SAF_DEF
    #include "..\sushi_scripts\core\init.cpp"
    #include "..\sushi_scripts\breach\init.cpp"
#undef SAF_DEF