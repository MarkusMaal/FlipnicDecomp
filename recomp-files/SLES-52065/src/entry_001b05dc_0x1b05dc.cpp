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

// Function: entry_001b05dc
// Address: 0x1b05dc - 0x1b05e4
void entry_001b05dc_0x1b05dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b05dc_0x1b05dc");
#endif

    ctx->pc = 0x1b05dcu;

    // 0x1b05dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b05dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05e0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1b05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x20u));
    ctx->pc = 0x1b05e4u;
}
