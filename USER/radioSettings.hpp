/*
*   Definiert voreingestellte Funkfrequenzen und Netznamen.
*   Netzname ist optional und wird, sofern vorhanden, bei Spielstart am Kartenrand vermerkt.
*
*   Die ersten 8 Shortrange Netze werden auf den SR Kanälen 1-8 und die ersten 9 Longrange Netze werden auf den LR Kanälen 1-9 voreingestellt.
*   Es können weitere Netze definiert werden, die dann in der groupsettings.hpp einzelnen Gruppen zugewiesen werden können.
*
*   Beispiel:
    class net1 {
        freq = 32.5;
        name = "Command Kanal";
    };

    //[...]

    class net10 {
        freq = 80.1;
        name = "Air Intern";
    };
*/

//SHORTRANGE KANÄLE ============================================================
class shortrange {
    class net1 {
        freq = 50;
        name = "SR: Raider";
    };

    class net2 {
        freq = 60;
        name = "SR: Alpha";
    };

    class net3 {
        freq = 70;
        name = "SR: Alpha One";
    };

    class net4 {
        freq = 80;
        name = "SR: Alpha Two";
    };

    class net5 {
        freq = 90;
        name = "SR: Bravo";
    };

    class net6 {
        freq = 100;
        name = "SR: Bravo One";
    };

    class net7 {
        freq = 110;
        name = "SR: Bravo Two";
    };

    class net8 {
        freq = 120;
        name = "SR: Bandit One";
    };

    class net9 {
        freq = 130;
        name = "SR: Bandit Two";
    };
};


//LONGRANGE KANÄLE =============================================================
class longrange {
    class net1 {
        freq = 32;
        name = "LR: Command";
    };
    class net2 {
        freq = 33;
          name = "LR: Air";
    };
};