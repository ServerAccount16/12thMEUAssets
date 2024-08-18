
class CfgPatches {
  class 12th_faction_data {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"A3_Characters_F_BLUFOR"};
  };
};

// For now, this is but the bare bones required to define
// a faction.

// In the future, we could add all of our loadouts here
// maybe..

class CfgFactionClasses {
  class 12th_MEU {
    displayName = "12th Marine Expeditionary Unit";
    // TODO: add icon
    icon="";
    author="12th MEU S-4 Team";
    priority=99;
    side=1;
  };
};

class CfgEditorCategories {
  class 12th_MEU {
    displayName="12th Marine Expeditionary Unit";
    priority=99;
    side=1;
  };
};

class CfgEditorSubcategories {
  class 12th_MEU_Rotary {
    displayName="Rotary";
  };
  class 12th_MEU_Cars {
    displayName="Cars";
  };
  class 12th_MEU_Armor {
    displayName="Armor";
  };
  class 12th_MEU_Drones {
    displayName="Drones";
  };
  class 12th_MEU_Supplies {
    displayName="Supplies";
  };
  class 12th_MEU_FixedWing {
    displayName="Fixed Wing";
  };
};