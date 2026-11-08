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

// Function: FUN_0011e8e0
// Address: 0x11e8e0 - 0x11e8e8
void FUN_0011e8e0_0x11e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011e8e0_0x11e8e0");
#endif

    ctx->pc = 0x11e8e0u;

    // 0x11e8e0: 0x807be92  j           func_1EFA48
    ctx->pc = 0x11E8E0u;
    ctx->pc = 0x11E8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E8E0u;
    // 0x11e8e4: 0x8c840530  lw          $a0, 0x530($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA48u;
    FUN_001efa48_0x1efa48(rdram, ctx, runtime); return;
    ctx->pc = 0x11E8E8u;
}
