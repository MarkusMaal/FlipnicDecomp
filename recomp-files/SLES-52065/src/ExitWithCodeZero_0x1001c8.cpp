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

// Function: ExitWithCodeZero
// Address: 0x1001c8 - 0x1001d0
void ExitWithCodeZero_0x1001c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitWithCodeZero_0x1001c8");
#endif

    ctx->pc = 0x1001c8u;

    // 0x1001c8: 0x807d274  j           func_1F49D0
    ctx->pc = 0x1001C8u;
    ctx->pc = 0x1001CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001C8u;
    // 0x1001cc: 0x2025  move        $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    Exit_0x1f49d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1001D0u;
}
