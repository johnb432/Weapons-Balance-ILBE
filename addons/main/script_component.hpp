#define COMPONENT main
#define COMPONENT_BEAUTIFIED ILBE
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_ILBE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_ILBE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_ILBE
#endif

#include "script_macros.hpp"
