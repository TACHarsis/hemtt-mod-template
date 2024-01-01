#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {}; // It's good practice to include all your addons (except this one) in this list (obviously not done with the example)
        authors[] = {"Your Name", "Other Author"}; // sub array of authors, considered for the specific addon
        author = "TAG Team"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// information on the whole mod (only needed once)
class CfgMods {
    class PREFIX {
        dir = "@MOD_NAME";
        name = "My Cool Mod";
        
        author = "TAG Team";                    // probably shown somewhere in the mods menu, but probably ignored by CBA/HEMTT

        picture         = "title_co.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "https://www.ehre.to"; // Website URL, that can accessed from the expansions menu 
        actionName      = "today?";              // label of button/tooltip in extension menu
        description     = "It's unclear where this will show"; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] = {1, 0.0, 0.86, 1};
    };
};
// Configs go here
