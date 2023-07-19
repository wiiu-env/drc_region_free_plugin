#include <wups.h>

WUPS_PLUGIN_NAME("drc_region_free_plugin");
WUPS_PLUGIN_DESCRIPTION("Allows the usage of gamepads from every region");
WUPS_PLUGIN_VERSION("0.2.1");
WUPS_PLUGIN_AUTHOR("Maschell");
WUPS_PLUGIN_LICENSE("GPL");

DECL_FUNCTION(uint32_t, CCRSysDRCFWUpdate, uint32_t u1) {
    return 0;
}

DECL_FUNCTION(uint32_t, CCRSysNeedsDRCFWUpdate, uint32_t u1, uint32_t *needsUpdateOut) {
    if (needsUpdateOut) {
        *needsUpdateOut = false;
    }
    return 0;
}

WUPS_MUST_REPLACE(CCRSysNeedsDRCFWUpdate, WUPS_LOADER_LIBRARY_NN_CCR, CCRSysNeedsDRCFWUpdate);
WUPS_MUST_REPLACE(CCRSysDRCFWUpdate, WUPS_LOADER_LIBRARY_NN_CCR, CCRSysDRCFWUpdate);
