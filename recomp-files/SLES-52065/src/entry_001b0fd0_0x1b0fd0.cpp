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

// Function: entry_001b0fd0
// Address: 0x1b0fd0 - 0x1b0fd4
void entry_001b0fd0_0x1b0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0fd0_0x1b0fd0");
#endif

    ctx->pc = 0x1b0fd0u;

    // 0x1b0fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0fd4u;
}
