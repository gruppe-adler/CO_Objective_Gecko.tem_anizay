/*
*   Hier können eigene Funktionen eingebunden werden.
*   Ist in CfgFunctions included.
*/

//SUSHI SCRIPT ============================================================

class SAF {
    #define SAF_FNCS
        #include "..\sushi_scripts\core\init.cpp"
        #include "..\sushi_scripts\breach\init.cpp"
    #undef SAF_FNCS
};

class GRAD_USER {
    class common {
        file = "USER\functions";
        class intro {};
    };
};
class Second_primary{
	tag="second_primary";
	class functions{
		file = "second_primary";
		class init{postInit=1;};
		class toggle{};
		class drop{};
		class toggleCondition{};
		class fill{};
		class renderPFH{};
		class addMagazine{};
	};
};