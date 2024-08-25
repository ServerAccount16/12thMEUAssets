class CfgPatches {
  class 12th_supply_pods {
    units[] = {
      "12th_supply_pod_empty",
      "12th_supply_pod_medical",
      "12th_supply_pod_ex",
      "12th_supply_pod_at",
      "12th_supply_pod_mortar",
      "12th_supply_pod_rifle",
      "12th_supply_pod_mg",
      "12th_supply_pod_dmr"
    };
    requiredVersion = 0.1;
  };
};

class CfgVehicles {

  class OPTRE_Ammo_SupplyPod_Empty;

  class 12th_supply_pod_empty: OPTRE_Ammo_SupplyPod_Empty {
    author="Kelp";
    scope=2;
    scopeCurator=2;
    scopeArsenal=2;
    displayName="[12th] Supply Pod (Empty)";
    faction="12th_MEU";
    editorCategory="12th_MEU";
    editorSubcategory="12th_MEU_Supplies";
    transportMaxWeapons = 25;
    transportMaxMagazines = 100;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co.paa"
    };
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
  };

  class 12th_supply_pod_medical: 12th_supply_pod_empty {
    displayName="[12th] Supply Pod (Medical)";
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co_medical.paa"
    };
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {
      class _xx_kat_IV_16 {
        name = "kat_IV_16";
        count = 25;
      };
      class _xx_kat_naloxone {
        name = "kat_naloxone";
        count = 25;
      };
      class _xx_kat_AFAK {
        name = "kat_IFAK";
        count = 10;
      };
      class _xx_kat_IFAK {
        name = "kat_IFAK";
        count = 60;
      };
      class _xx_kat_MFAK {
        name = "kat_MFAK";
        count = 10;
      };
      class _xx_kat_Painkiller {
        name = "kat_Painkiller";
        count = 25;
      };
      class _xx_kat_Carbonate {
        name = "kat_Carbonate";
        count = 25;
      };
      class _xx_kat_IO_FAST {
        name = "kat_IO_FAST";
        count = 25;
      };
      class _xx_kat_kat_phenylephrine_inject {
        name = "kat_phenylephrine_inject";
        count = 25;
      };
      class _xx_kat_TXA {
        name = "kat_TXA";
        count = 25;
      };
      class _xx_ACE_elasticBandage {
        name = "ACE_elasticBandage";
        count = 100;
      };
      class _xx_DMNS_Biofoam {
        name = "DMNS_Biofoam";
        count = 100;
      };
      class _xx_ACE_tourniquet {
        name = "ACE_tourniquet";
        count = 30;
      };
      class _xx_ACE_splint {
        name = "ACE_splint";
        count = 30;
      };
      class _xx_ACE_morphine {
        name = "ACE_morphine";
        count = 25;
      };
      class _xx_ACE_adenosine {
        name = "ACE_adenosine";
        count = 25;
      };
      class _xx_ACE_epinephrine {
        name = "ACE_epinephrine";
        count = 25;
      };
      class _xx_ACE_salineIV {
        name = "ACE_salineIV";
        count = 20;
      };
      class _xx_ACE_salineIV_500 {
        name = "ACE_salineIV_500";
        count = 20;
      };
      class _xx_ACE_bodyBag {
        name = "ACE_bodyBag";
        count = 20;
      };
      class _xx_ACE_plasmaIV {
        name="ACE_plasmaIV";
        count=20;
      };
      class _xx_ACE_plasmaIV_500 {
        name="ACE_plasmaIV_500";
        count=20;
      };
      class _xx_kat_EACA {
        name="kat_EACA";
        count=25;
      };
      class _xx_kat_norepinephrine {
        name="kat_norepinephrine";
        count=25;
      };
      class _xx_kat_nitroglycerin {
        name="kat_nitroglycerin";
        count=25;
      };
    };
  };

  class 12th_supply_pod_ex: 12th_supply_pod_empty {
    displayName="[12th] Supply Pod (Explosives)";
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co_grenades.paa"
    };
    class TransportMagazines {
      class _xx_1Rnd_HE_Grenade_shell {
        magazine = "1Rnd_HE_Grenade_shell";
        count = 40;
      };
      class _xx_1Rnd_Smoke_Grenade_shell {
        magazine = "1Rnd_Smoke_Grenade_shell";
        count = 20;
      };
      class _xx_1Rnd_SmokeRed_Grenade_shell {
        magazine = "1Rnd_SmokeRed_Grenade_shell";
        count = 10;
      };
      class _xx_1Rnd_SmokePurple_Grenade_shell {
        magazine = "1Rnd_SmokePurple_Grenade_shell";
        count = 10;
      };
      class _xx_1Rnd_SmokeBlue_Grenade_shell {
        magazine = "1Rnd_SmokeBlue_Grenade_shell";
        count = 10;
      };
      class _xx_ACE_HuntIR_M203 {
        magazine = "ACE_HuntIR_M203";
        count = 10;
      };
      class _xx_C7_Remote_Mag {
        magazine = "C7_Remote_Mag";
        count = 20;
      };
      class _xx_C12_Remote_Mag {
        magazine = "C12_Remote_Mag";
        count = 10;
      };
      class _xx_tsp_frameCharge_mag {
        magazine = "tsp_frameCharge_mag";
        count = 10;
      };
      class _xx_tsp_popperCharge_mag {
        magazine = "tsp_popperCharge_mag";
        count = 20;
      };
      class _xx_tsp_stickCharge_mag {
        magazine = "tsp_stickCharge_mag";
        count = 10;
      };
      class _xx_DemoCharge_Remote_Mag {
        magazine = "DemoCharge_Remote_Mag";
        count = 10;
      };
      class _xx_M319_HEDP_Grenade_Shell {
        magazine = "M319_HEDP_Grenade_Shell";
        count = 20;
      };
    };
    class TransportWeapons {};
    class TransportItems {
      class _xx_ACE_IR_Strobe_Item {
        name = "ACE_IR_Strobe_Item";
        count = 30;
      };
      class _xx_OPTRE_M9_Frag {
        name = "OPTRE_M9_Frag";
        count = 20;
      };
      class _xx_OPTRE_M2_Smoke {
        name = "OPTRE_M2_Smoke";
        count = 20;
      };
      class _xx_OPTRE_M2_Smoke_Blue {
        name = "OPTRE_M2_Smoke_Blue";
        count = 10;
      };
      class _xx_OPTRE_M2_Smoke_Red {
        name = "OPTRE_M2_Smoke_Red";
        count = 10;
      };
      class _xx_OPTRE_M2_Smoke_Green {
        name = "OPTRE_M2_Smoke_Green";
        count = 10;
      };
      class _xx_OPTRE_M2_Smoke_Purple {
        name = "OPTRE_M2_Smoke_Purple";
        count = 10;
      };
      class _xx_OPTRE_ELB47_Strobe {
        name = "OPTRE_ELB47_Strobe";
        count = 5;
      };
      class _xx_ACE_M84 {
        name = "ACE_M84";
        count = 10;
      };
    };
  };

  class 12th_supply_pod_at: 12th_supply_pod_empty {
    displayName="[12th] Supply Pod (Launchers)";
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co_launchers.paa"
    };
    class TransportMagazines {
      class _xx_OPTRE_M41_Twin_HEAT_SACLOS {
        magazine = "OPTRE_M41_Twin_HEAT_SACLOS";
        count = 4;
      };
      class _xx_OPTRE_M41_Twin_HEAT_SALH {
        magazine = "OPTRE_M41_Twin_HEAT_SALH";
        count = 4;
      };
      class _xx_OPTRE_M41_Twin_HEAT_Thermal {
        magazine = "OPTRE_M41_Twin_HEAT_Thermal";
        count = 4;
      };
      class _xx_TCF_2Rnd_50x137_SALH {
        magazine = "TCF_2Rnd_50x137_SALH";
        count = 4;
      };
      class _xx_TCF_2Rnd_50x137_AA {
        magazine = "TCF_2Rnd_50x137_AA";
        count = 4;
      };
      class _xx_TCF_2Rnd_50x137_PEN {
        magazine = "TCF_2Rnd_50x137_PEN";
        count = 4;
      };
      class _xx_TCF_2Rnd_50x137_THERMO {
        magazine = "TCF_2Rnd_50x137_THERMO";
        count = 4;
      };
      class _xx_TCF_2Rnd_50x137_SACLOS {
        magazine = "TCF_2Rnd_50x137_SACLOS";
        count = 4;
      };
    };
    class TransportWeapons {
      class _xx_12th_m96 {
        weapon = "12th_m96";
        count = 10;
      };
    };
    class TransportItems {};
  };

  class 12th_supply_pod_mortar: 12th_supply_pod_empty {
    displayName="[12th] Supply Pod (Mortars)";
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co_mortar.paa"
    };
    class TransportMagazines {
      class _xx_avm224_M_6Rnd_60mm_HE_0_csw {
        magazine = "avm224_M_6Rnd_60mm_HE_0_csw";
        count = 20;
      };
      class _xx_avm224_M_6Rnd_60mm_HE_csw {
        magazine = "avm224_M_6Rnd_60mm_HE_csw";
        count = 20;
      };
      class _xx_avm224_M_6Rnd_60mm_ILLUM_IR_csw {
        magazine = "avm224_M_6Rnd_60mm_ILLUM_IR_csw";
        count = 10;
      };
      class _xx_avm224_M_6Rnd_60mm_ILLUM_csw {
        magazine = "avm224_M_6Rnd_60mm_ILLUM_csw";
        count = 10;
      };
    };
    class TransportWeapons {
      class _xx_avm224_W_M224_mortar_carry {
        weapon = "avm224_W_M224_mortar_carry";
        count = 1;
      };
    };
    class TransportItems {};
  };

  class 12th_supply_pod_rifle: 12th_supply_pod_empty {
    displayName="[12th] Supply Pod (Rifle Ammo)";
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co_rifle.paa"
    };
    class TransportMagazines {
      class _xx_OPTRE_32Rnd_762x51_Mag {
        magazine = "OPTRE_32Rnd_762x51_Mag";
        count = 50;
      };
      class _xx_OPTRE_32Rnd_762x51_Mag_Tracer {
        magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
        count = 50;
      };
      class _xx_OPTRE_36Rnd_95x40_Mag {
        magazine = "OPTRE_36Rnd_95x40_Mag";
        count = 25;
      };
      class _xx_OPTRE_36Rnd_95x40_Mag_Tracer {
        magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
        count = 25;
      };
      class _xx_OPTRE_60Rnd_5x23mm_Mag {
        magazine = "OPTRE_60Rnd_5x23mm_Mag";
        count = 25;
      };
      class _xx_OPTRE_12Rnd_8Gauge_Pellets {
        magazine = "OPTRE_12Rnd_8Gauge_Pellets";
        count = 25;
      };
      class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag {
        magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
        count = 10;
      };
    };
    class TransportWeapons {};
    class TransportItems {};
  };

  class 12th_supply_pod_mg: 12th_supply_pod_empty {
    displayName="[12th] Supply Pod (MG Ammo)";
    hiddenSelectionsTextures[] = {
      "\x\12thmd_assets\addons\12th_supply_pods\data\pod_co_gunner.paa"
    };
    class TransportMagazines {
      class _xx_12th_95x40_100rnd {
        magazine = "12th_95x40_100rnd";
        count = 10;
      };
      class _xx_12th_95x40_100rnd_T {
        magazine = "12th_95x40_100rnd_T";
        count = 10;
      };
      class _xx_12th_762x51_200rnd {
        magazine = "12th_762x51_200rnd";
        count = 10;
      };
      class _xx_12th_762x51_200rnd_T {
        magazine = "12th_762x51_200rnd_T";
        count = 10;
      };
      class _xx_12th_762x51_400rnd_T {
        magazine = "OPTRE_400Rnd_762x51_Box_Tracer";
        count = 5;
      };
      class _xx_ACE_SpareBarrel {
        magazine = "ACE_SpareBarrel";
        count = 5;
      };
    };
    class TransportWeapons {};
    class TransportItems {
      class _xx_ACE_WaterBottle {
        name = "ACE_WaterBottle";
        count = 10;
      };
    };
  };

  //-Supply pod load/unload logic. Interfaces with Maglock Mania

  class Logic;
  class Module_F: Logic {
    class Arguments {};
    class ModuleDescription {};
  };
  class Module_OPTRE_PelicanSupplyDrop: Module_F {
    class Arguments {
      class box1 {
        displayName = "Supply Pod 1";
        description = "Type of box required.";
        defaultValue = "rdm";
        typeName = "STRING";
        class values {
          class n1 {
            name = "none";
            value = "none";
          };
          class n2 {
            name = "Random Supply Pod";
            value = "rdm";
            default = 1;
          };
          class n3 {
            name = "Sniper [OLD] Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_Sniper";
          };
          class n4 {
            name = "Medical Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_Medical";
          };
          class n5 {
            name = "MA5B Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_AR";
          };
          class n6 {
            name = "LMG Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_LMG";
          };
          class n7 {
            name = "SMG Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_SMG";
          };
          class n8 {
            name = "Pistol Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_Pistol";
          };
          class n9 {
            name = "Shotgun Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_Shotgun";
          };
          class n10 {
            name = "Launcher Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_Launcher";
          };
          class n11 {
            name = "DMR Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_DMR";
          };
          class n12 {
            name = "BR Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_BR";
          };
          class n13 {
            name = "MA5K Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_MA5K";
          };
          class n14 {
            name = "SRS99C Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_SRS99C";
          };
          class n15 {
            name = "MA5BAC Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_ARC";
          };
          class n16 {
            name = "MA5BAC Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_ARC_GL";
          };
          class n17 {
            name = "M37 Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_37";
          };
          class n18 {
            name = "M37GL Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_37_GL";
          };
          class n19 {
            name = "MA5BGL Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_AR_GL";
          };
          class n20 {
            name = "CUSTOM Supply Pod";
            value = "OPTRE_Ammo_SupplyPod_Empty";
          };
          class n21 {
            name = "[12th] Medical Supply Pod";
            value = "12th_supply_pod_medical";
          };
          class n23 {
            name = "[12th] Explosives Supply Pod";
            value = "12th_supply_pod_ex";
          };
          class n25 {
            name = "[12th] Launcher Supply Pod";
            value = "12th_supply_pod_at";
          };
          class n26 {
            name = "[12th] Mortar Supply Pod";
            value = "12th_supply_pod_mortar";
          };
          class n27 {
            name = "[12th] Rifle Supply Pod";
            value = "12th_supply_pod_rifle";
          };
          class n28 {
            name = "[12th] Machine Gun Supply Pod";
            value = "12th_supply_pod_mg";
          };
        };
      };
    };
  };
};
