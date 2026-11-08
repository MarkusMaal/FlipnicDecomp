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

// Function: entry_001e0d28
// Address: 0x1e0d28 - 0x1e0d2c
void entry_001e0d28_0x1e0d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d28_0x1e0d28");
#endif

    ctx->pc = 0x1e0d28u;

    // 0x1e0d28: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1e0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x1e0d2cu;
}
