#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001228ec
// Address: 0x1228ec - 0x1228f0
void entry_001228ec_0x1228ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228ec_0x1228ec");
#endif

    ctx->pc = 0x1228ecu;

    // 0x1228ec: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1228ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    ctx->pc = 0x1228f0u;
}
