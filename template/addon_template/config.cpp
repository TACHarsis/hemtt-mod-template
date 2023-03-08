#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"TAG_main"};
        authors = {"Your Name", "Other Author"}; // sub array of authors, considered for the specific addon, can be removed or left empty {}
        author = "TAG Team"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// configs go here
