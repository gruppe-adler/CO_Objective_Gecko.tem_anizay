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

                channel1 = "SR_Raider";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Command";
                channel2 = "LR_Air";
            };
        };
    class group2 {
            groupName = "Alpha";

            class shortrange {
                defaultChannel = 2;

                channel2 = "SR_Alpha";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Command";
                channel2 = "LR_Air";    
            };
        };
    class group3 {
            groupName = "Alpha One";

            class shortrange {
                defaultChannel = 3;

                channel3 = "SR_Alpha_One";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Command";
                channel2 = "LR_Air";    
            };
        }; 
    class group4 {
            groupName = "Alpha Two";

            class shortrange {
                defaultChannel = 4;

                channel4 = "SR_Alpha_Two";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Command";
                channel2 = "LR_Air";    
            };
        };   
    class group5 {
            groupName = "Bravo";

            class shortrange {
                defaultChannel = 5;

                channel5 = "SR_Bravo";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR: Command";
                channel2 = "LR_Air";    
            };
        };
    class group6 {
            groupName = "Bravo One";

            class shortrange {
                defaultChannel = 6;

                channel6 = "SR_Bravo_One";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Command";
                channel2 = "LR_Air";    
            };
        }; 
    class group7 {
            groupName = "Bravo Two";

            class shortrange {
                defaultChannel = 7;

                channel7 = "SR_Bravo_Two";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Command";
                channel2 = "LR_Air";    
            };
        };
    class group8 {
            groupName = "Bandit One";

            class shortrange {
                defaultChannel = 8;

                channel8 = "SR_Bandit_One";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;
                
                channel1 = "LR_Air";
                channel2 = "LR_Command";
            };
        }; 
    class group9 {
            groupName = "Bandit Two";

            class shortrange {
                defaultChannel = 9;

                channel9 = "SR_Bandit_Two";
            };
            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "LR_Air";
                channel2 = "LR_Command";
            };
        };                               
};

class OPFOR {

};

class INDEPENDENT {

};
