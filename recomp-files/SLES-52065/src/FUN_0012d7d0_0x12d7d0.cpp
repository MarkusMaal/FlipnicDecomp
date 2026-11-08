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

// Function: FUN_0012d7d0
// Address: 0x12d7d0 - 0x12d7d8
void FUN_0012d7d0_0x12d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d7d0_0x12d7d0");
#endif

    ctx->pc = 0x12d7d0u;

    // 0x12d7d0: 0x804b5f8  j           func_12D7E0
    ctx->pc = 0x12D7D0u;
    ctx->pc = 0x12D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D7D0u;
    // 0x12d7d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7E0u;
    FUN_0012d7e0_0x12d7e0(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7D8u;
}
