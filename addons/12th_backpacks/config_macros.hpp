#define BP_MAXLOAD 425
#define BP_MASS 60

#define BP_TEXPATH(CAMOTYPE,FILE) \x\12thMEUAssets\addons\12th_backpacks\backpack\##CAMOTYPE\##FILE

#define BP_DISP(DISPLAY_TYPE) [12th][DISPLAY_TYPE] Backpack
#define BP_DISP_RTO(DISPLAY_TYPE) [12th][DISPLAY_TYPE] Backpack RTO
#define BP_DISP_BIO(DISPLAY_TYPE) [12th][DISPLAY_TYPE] Backpack Biofoam
#define BP_DISP_POUCH(DISPLAY_TYPE) [12th][DISPLAY_TYPE] Backpack Pouches

#define BACKPACK_ALLTYPES(CAMOTYPE, DISPLAY_TYPE)             \
class 12th_backpack_##CAMOTYPE : 12th_backpack_base {         \
  scope=2;                                                    \
  scopeArsenal=2;                                             \
  displayName=#BP_DISP(DISPLAY_TYPE);                         \
  hiddenSelectionsTextures[]={                                \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                        \
    "",                                                       \
    "",                                                       \
    ""                                                        \
  };                                                          \
};                                                            \
                                                              \
class 12th_backpack_##CAMOTYPE##_rto : 12th_backpack_base {   \
  scope=2;                                                    \
  scopeArsenal=2;                                             \
  displayName=#BP_DISP_RTO(DISPLAY_TYPE);                     \
  hiddenSelectionsTextures[]={                                \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                        \
    "",                                                       \
    "",                                                       \
    #BP_TEXPATH(base,addon_antenna_ca.paa)                    \
  };                                                          \
};                                                            \
                                                              \
class 12th_backpack_##CAMOTYPE##_bio : 12th_backpack_base {   \
  scope=2;                                                    \
  scopeArsenal=2;                                             \
  displayName=#BP_DISP_BIO(DISPLAY_TYPE);                     \
  hiddenSelectionsTextures[]={                                \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                        \
    "",                                                       \
    #BP_TEXPATH(base,addon_biofoam_ca.paa),                   \
    ""                                                        \
  };                                                          \
};                                                            \
                                                              \
class 12th_backpack_##CAMOTYPE##_pouch : 12th_backpack_base { \
  scope=2;                                                    \
  scopeArsenal=2;                                             \
  displayName=#BP_DISP_POUCH(DISPLAY_TYPE);                   \
  hiddenSelectionsTextures[]={                                \
    #BP_TEXPATH(CAMOTYPE,main_ca.paa),                        \
    #BP_TEXPATH(CAMOTYPE,addon_pouch_ca.paa),                 \
    "",                                                       \
    ""                                                        \
  };                                                          \
};