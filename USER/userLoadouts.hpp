/*
*   Hier können eigene factions für grad-loadout eingetragen werden.
*   Anleitung im Wiki.
*/
#ifdef NIGHTVISION
  #define NVITEM "ACE_NVG_Gen4"
#else
  #define NVITEM ""
#endif

#ifdef LASERS
  #define LLITEM "rhsusf_acc_anpeq15"
#else
  #define LLITEM ""
#endif

#ifdef GUNLIGHTS
  #define LLITEM ""
#endif

#ifdef SUPPRESSORS
  #define SUPPRESSORITEM "hlc_muzzle_556NATO_KAC"
#else
  #define SUPPRESSORITEM ""
#endif

class UsDeltaForce {
    class AllUnits {
        uniform = "rhs_uniform_g3_mc";
        backpack = "";
        vest = "rhsusf_spcs_ocp_rifleman";
        primaryWeapon = "rhs_weap_mk18_KAC_d";
        primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
        primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
        primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
        primaryWeaponPointer = "rhsusf_acc_anpeq15";
        primaryWeaponUnderbarrel = "rhsusf_acc_grip2_tan";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "rhsusf_weap_glock17g4";
        handgunWeaponMagazine = "rhsusf_mag_17Rnd_9x19_JHP";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "hlc_acc_DBALPL_FL";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        headgear = "rhsusf_opscore_mar_ut_pelt";
        goggles = "";
        binoculars = "ACE_Vector";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ACE_Altimeter";
        gps = "ItemGPS";
        radio = "TFAR_anprc152";
        nvgoggles = "";
    };
    class Type {
    	//Rifleman
        class Soldier_F {
            vest = "rhsusf_spcs_ocp_rifleman";
            backpack = "";
            primaryWeapon = "rhs_weap_mk18_KAC_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            primaryWeaponPointer = "rhsusf_acc_anpeq15";
            primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip2_tan";
            binoculars = "ACE_Vector";
            addItemsToUniform[] = {
            	LIST_5("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_1("rhsusf_mag_17Rnd_9x19_JHP"),

				LIST_4("ACE_packingBandage"),
                LIST_4("ACE_elasticBandage"),
                LIST_4("ACE_quikclot"),
                LIST_4("ACE_tourniquet"),
                LIST_2("ACE_morphine"),
                LIST_2("ACE_epinephrine")
            };
            addItemsToVest[] = {
                LIST_8("hlc_30rnd_556x45_MDim_EMAG"),
                LIST_2("rhs_mag_m67"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen")
            };
        };
        //Medic
        class medic_F: Soldier_F {
            vest = "rhsusf_spcs_ocp_medic";
            backpack = "B_Kitbag_mcamo";
            primaryWeapon = "rhs_weap_mk18_KAC_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            primaryWeaponPointer = "rhsusf_acc_anpeq15";
            primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip2_tan";
            binoculars = "ACE_Vector";
            addItemsToUniform[] = {
            
            };
            addItemsToVest[] = {
                LIST_8("hlc_30rnd_556x45_MDim_EMAG"),
                LIST_2("rhs_mag_m67"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen")
            }; 
            class Rank {
                class PRIVATE {
                    GRAD_FACTIONS_MEDICITEMS_CFR
                };
                class CORPORAL {
                    GRAD_FACTIONS_MEDICITEMS_SQ
                };
                class SERGEANT {
                    GRAD_FACTIONS_MEDICITEMS_PT
                };
                class LIEUTENANT: SERGEANT {};
                class CAPTAIN: SERGEANT {};
                class MAJOR: SERGEANT {};
                class COLONEL: SERGEANT {}; 
            };
        };
        //Grenadier
        class Soldier_GL_F: Soldier_F {
            vest = "rhsusf_spcs_ocp_grenadier";
            backpack = "rhsusf_assault_eagleaiii_ocp";
            primaryWeapon = "rhs_weap_m4a1_blockII_M203_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
            primaryWeaponUnderbarrelMagazine = "1Rnd_HE_Grenade_shell";
            binoculars = "ACE_Vector";
            addItemsToUniform[] = {
               
            };
            addItemsToVest[] = {
                LIST_8("hlc_30rnd_556x45_MDim_EMAG"),
                LIST_2("rhs_mag_m67"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen")
            };
            addItemsToBackpack[] = {
                LIST_4("ACE_HuntIR_M203"),
                LIST_2("1Rnd_Smoke_Grenade_shell"),
                LIST_2("1Rnd_SmokeRed_Grenade_shell"),
                LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
                LIST_2("1Rnd_SmokeBlue_Grenade_shell"),
                LIST_9("1Rnd_HE_Grenade_shell")
            };
        };
        //Breacher
        class engineer_F: Soldier_F {
            vest = "rhsusf_spcs_ocp_rifleman";
            backpack = "rhsusf_assault_eagleaiii_ocp";
            primaryWeapon = "rhs_weap_mk18_KAC_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            primaryWeaponPointer = "rhsusf_acc_anpeq15";
            primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip2_tan";
            binoculars = "ACE_Vector";
            addItemsToUniform[] = {
                LIST_8("hlc_30rnd_556x45_MDim_EMAG")
               
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_m67"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen"),
                LIST_8("rhsusf_5Rnd_Slug"),
                LIST_8("rhsusf_5Rnd_00Buck")
            };
            addItemsToBackpack[] = {
                "rhs_weap_M590_5RD",
                LIST_1("ACE_DefusalKit"),
                LIST_1("ACE_Clacker"),
                LIST_1("ACE_wirecutter"),
                LIST_6("DemoCharge_Remote_Mag")
            };    
            class rhs_weap_M590_5RD {
                     muzzle = "";
                    pointer = "";
                       optics = "";
                    magazine = "rhsusf_5Rnd_00Buck";
                    underBarrelMagazine = "";
                    underBarrel = "";
            };
                LIST_1("ACE_DefusalKit"),
                LIST_1("ACE_Clacker"),
                LIST_1("ACE_wirecutter"),
                LIST_6("DemoCharge_Remote_Mag")
            };
        };
        //TL
        class Soldier_TL_F: Soldier_F {
            vest = "rhsusf_spcs_ocp_teamleader";
            backpack = "TFAR_rt1523g_big_rhs";
            primaryWeapon = "rhs_weap_m4a1_blockII_M203_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
            primaryWeaponUnderbarrelMagazine = "1Rnd_Smoke_Grenade_shell";
            binoculars = "ACE_Vector";
            addItemsToUniform[] = {
               
            };
            addItemsToVest[] = {
                LIST_8("hlc_30rnd_556x45_MDim_EMAG"),
                LIST_2("rhs_mag_m67"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen")
            };
            addItemsToBackpack[] = {
                LIST_4("ACE_HuntIR_M203"),
                LIST_1("1Rnd_Smoke_Grenade_shell"),
                LIST_2("1Rnd_SmokeRed_Grenade_shell"),
                LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
                LIST_2("1Rnd_SmokeBlue_Grenade_shell")
            };
        };
		//SQL
        class Soldier_SL_F: Soldier_F {
            vest = "rhsusf_spcs_ocp_squadleader";
            backpack = "TFAR_rt1523g_big_rhs";
            primaryWeapon = "rhs_weap_m4a1_blockII_M203_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "rhsusf_acc_ACOG_RMR";
            primaryWeaponMuzzle = "hlc_muzzle_556NATO_KAC";
            primaryWeaponUnderbarrelMagazine = "1Rnd_Smoke_Grenade_shell";
            binoculars = "ACE_Vector";
            addItemsToUniform[] = {
            
            };
            addItemsToVest[] = {
                LIST_8("hlc_30rnd_556x45_MDim_EMAG"),
                LIST_2("rhs_mag_m67"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellBlue"),
                LIST_2("SmokeShellGreen")
            };
            addItemsToBackpack[] = {
                LIST_4("ACE_HuntIR_M203"),
                LIST_1("1Rnd_Smoke_Grenade_shell"),
                LIST_2("1Rnd_SmokeRed_Grenade_shell"),
                LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
                LIST_2("1Rnd_SmokeBlue_Grenade_shell")
            };
        };
        //Heli Pilot One
        class Helipilot_F: Soldier_F {
            uniform = "U_B_HeliPilotCoveralls";
            vest = "V_LegStrapBag_olive_F";
            backpack = "B_Parachute";
            headgear = "rhsusf_hgu56p_visor_mask_green_mo";
            primaryWeapon = "rhs_weap_m4a1_blockII_KAC_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "optic_Holosight";
            primaryWeaponMuzzle = "rhsusf_acc_SF3P556";
            primaryWeaponUnderbarrel = "rhsusf_acc_tdstubby_tan";
            handgunWeapon = "rhsusf_weap_glock17g4";
            handgunWeaponMagazine = "rhsusf_mag_17Rnd_9x19_JHP";
            binoculars = "Laserdesignator_03";
            nvgoggles = "ACE_NVG_Gen4";
            addItemsToUniform[] = {
                LIST_1("SmokeShellGreen"),
                LIST_1("Chemlight_green"),
                LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag")
            };
            addItemsToVest[] = {
                LIST_3("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellRed"),
                LIST_2("SmokeShellGreen"),
                LIST_2("SmokeShellBlue")
            };
        };
        //Heli Pilot Two
        class helicrew_F: Soldier_F {
            uniform = "U_B_HeliPilotCoveralls";
            vest = "V_LegStrapBag_olive_F";
            backpack = "B_Parachute";
            headgear = "rhsusf_hgu56p_visor_mask_smiley";
            primaryWeapon = "rhs_weap_m4a1_blockII_KAC_d";
            primaryWeaponMagazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
            primaryWeaponOptics = "optic_Holosight";
            primaryWeaponMuzzle = "rhsusf_acc_SF3P556";
            primaryWeaponUnderbarrel = "rhsusf_acc_tdstubby_tan";
            handgunWeapon = "rhsusf_weap_glock17g4";
            handgunWeaponMagazine = "rhsusf_mag_17Rnd_9x19_JHP";
            binoculars = "Laserdesignator_03";
            nvgoggles = "ACE_NVG_Gen4";
            addItemsToUniform[] = {
                LIST_1("SmokeShellGreen"),
                LIST_1("Chemlight_green"),
                LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag")
            };
            addItemsToVest[] = {
                LIST_3("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
                LIST_2("rhsusf_mag_17Rnd_9x19_JHP"),
                LIST_2("SmokeShell"),
                LIST_2("SmokeShellRed"),
                LIST_2("SmokeShellGreen"),
                LIST_2("SmokeShellBlue")
            };
        };
    };
};