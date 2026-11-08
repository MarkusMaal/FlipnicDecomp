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

// Function: FUN_00118ff0
// Address: 0x118ff0 - 0x118ff8
void FUN_00118ff0_0x118ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118ff0_0x118ff0");
#endif

    ctx->pc = 0x118ff0u;

    // 0x118ff0: 0x8046400  j           func_119000
    ctx->pc = 0x118FF0u;
    ctx->pc = 0x118FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FF0u;
    // 0x118ff4: 0x8f85802c  lw          $a1, -0x7FD4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    FUN_00119000_0x119000(rdram, ctx, runtime); return;
    ctx->pc = 0x118FF8u;
}
