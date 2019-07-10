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
    class SR_Raider {
        freq = 50;
        name = "SR: Raider";
    };

    class SR_Alpha {
        freq = 60;
        name = "SR: Alpha";
    };

    class SR_Alpha_One {
        freq = 70;
        name = "SR: Alpha One";
    };

    class SR_Alpha_Two {
        freq = 80;
        name = "SR: Alpha Two";
    };

    class SR_Bravo {
        freq = 90;
        name = "SR: Bravo";
    };

    class SR_Bravo_One {
        freq = 100;
        name = "SR: Bravo One";
    };

    class SR_Bravo_Two {
        freq = 110;
        name = "SR: Bravo Two";
    };

    class SR_Bandit_One {
        freq = 120;
        name = "SR: Bandit One";
    };

    class SR_Bandit_Two {
        freq = 130;
        name = "SR: Bandit Two";
    };
};


//LONGRANGE KANÄLE =============================================================
class longrange {
    class LR_Command {
        freq = 32;
        name = "LR: Command";
    };
    class LR_Air {
        freq = 33;
          name = "LR: Air";
    };
};