#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tfw_radios_ilbe"
        };
        author = "johnb43";
    };
};

#include "CfgVehicles.hpp"
