#define COMPONENT example_addon
#define COMPONENT_BEAUTIFIED Example_Addon
#include "\z\TAG\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_EXAMPLE_ADDON
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_EXAMPLE_ADDON
    #define DEBUG_SETTINGS DEBUG_SETTINGS_EXAMPLE_ADDON
#endif

#include "\z\TAG\addons\main\script_macros.hpp"
