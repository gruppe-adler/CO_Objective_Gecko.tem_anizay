/*
*   Legt Gruppennamen, Standard- und Sonderkanäle fest.
*   Gruppenspezifische Kanäle können über die Einträge channel1-channel8 für Shortrange und channel1-channel9 für Longrange festgelegt werden.
*   Hier werden die in der radiosettings.hpp definierten Kanalnamen oder Klassennamen der Kanäle verwendet.
*
*   Beispiel:
*
    class BLUFOR {
        class group1 {
            groupName = "Command";

            class shortrange {
                defaultChannel = 1;
                altChannel = 3;
                altChannelOnlyTL = 1;

                channel1 = "Command Kanal";
                channel3 = "net13";
                channel7 = "Command Intern";
            };

            class longrange {
                defaultChannel = 2;
                altChannel = 5;
                altChannelOnlyTL = 1;

                channel2 = "Air";
                channel5 = "net10";
            };
        };
    };
*
*/

class BLUFOR {
    class group1 {
            groupName = "Raider";

            class shortrange {
                defaultChannel = 1;

                channel1 = "SR: Raider";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";
            };
        };
    class group2 {
            groupName = "Alpha";

            class shortrange {
                defaultChannel = 2;

                channel2 = "SR: Alpha";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";    
            };
        };
    class group3 {
            groupName = "Alpha One";

            class shortrange {
                defaultChannel = 3;

                channel3 = "SR: Alpha One";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";    
            };
        }; 
    class group4 {
            groupName = "Alpha Two";

            class shortrange {
                defaultChannel = 4;

                channel4 = "SR: Alpha Two";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";    
            };
        };   
    class group5 {
            groupName = "Bravo";

            class shortrange {
                defaultChannel = 5;

                channel5 = "SR: Bravo";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";    
            };
        };
    class group6 {
            groupName = "Alpha One";

            class shortrange {
                defaultChannel = 6;

                channel6 = "SR: Bravo One";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";    
            };
        }; 
    class group7 {
            groupName = "Alpha Two";

            class shortrange {
                defaultChannel = 7;

                channel7 = "SR: Bravo Two";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR: Air";    
            };
        };
    class group8 {
            groupName = "Bandit One";

            class shortrange {
                defaultChannel = 8;

                channel8 = "SR: Bandit One";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;
                
                channel1 = "LR: Air";
                channel2 = "LR: Command";
            };
        }; 
    class group9 {
            groupName = "Bandit Two";

            class shortrange {
                defaultChannel = 9;

                channel9 = "SR: Bandit Two";
            };
            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Air";
                channel2 = "LR: Command";
            };
        };                               
};

class OPFOR {

};

class INDEPENDENT {

};
