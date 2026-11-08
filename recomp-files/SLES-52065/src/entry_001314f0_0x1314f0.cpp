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

// Function: entry_001314f0
// Address: 0x1314f0 - 0x1314f4
void entry_001314f0_0x1314f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001314f0_0x1314f0");
#endif

    ctx->pc = 0x1314f0u;

    // 0x1314f0: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1314f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    ctx->pc = 0x1314f4u;
}
