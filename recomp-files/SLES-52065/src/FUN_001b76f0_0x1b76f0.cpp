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

// Function: FUN_001b76f0
// Address: 0x1b76f0 - 0x1b76f8
void FUN_001b76f0_0x1b76f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b76f0_0x1b76f0");
#endif

    ctx->pc = 0x1b76f0u;

    // 0x1b76f0: 0x806e964  j           func_1BA590
    ctx->pc = 0x1B76F0u;
    ctx->pc = 0x1B76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76F0u;
    // 0x1b76f4: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA590u;
    FUN_001ba590_0x1ba590(rdram, ctx, runtime); return;
    ctx->pc = 0x1B76F8u;
}
