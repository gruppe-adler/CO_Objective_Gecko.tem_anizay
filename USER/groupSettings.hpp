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

                channel1 = "net1";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";
            };
        };
    class group2 {
            groupName = "Alpha";

            class shortrange {
                defaultChannel = 2;

                channel2 = "net2";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";    
            };
        };
    class group3 {
            groupName = "Alpha One";

            class shortrange {
                defaultChannel = 3;

                channel3 = "net3";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";    
            };
        }; 
    class group4 {
            groupName = "Alpha Two";

            class shortrange {
                defaultChannel = 4;

                channel4 = "net4";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";    
            };
        };   
    class group5 {
            groupName = "Bravo";

            class shortrange {
                defaultChannel = 5;

                channel5 = "net5";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";    
            };
        };
    class group6 {
            groupName = "Bravo One";

            class shortrange {
                defaultChannel = 6;

                channel6 = "net6";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";    
            };
        }; 
    class group7 {
            groupName = "Bravo Two";

            class shortrange {
                defaultChannel = 7;

                channel7 = "net7";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net1";
                channel2 = "net2";    
            };
        };
    class group8 {
            groupName = "Bandit One";

            class shortrange {
                defaultChannel = 8;

                channel8 = "net8";
            };

            class longrange {
                defaultChannel = 1;
                altChannel = 2;
                
                channel1 = "net2";
                channel2 = "net1";
            };
        }; 
    class group9 {
            groupName = "Bandit Two";

            class shortrange {
                defaultChannel = 9;

                channel9 = "net9";
            };
            class longrange {
                defaultChannel = 1;
                altChannel = 2;

                channel1 = "net2";
                channel2 = "net1";
            };
        };                               
};

class OPFOR {

};

class INDEPENDENT {

};
