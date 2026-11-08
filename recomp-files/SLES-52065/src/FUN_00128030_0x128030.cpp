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

// Function: FUN_00128030
// Address: 0x128030 - 0x128038
void FUN_00128030_0x128030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128030_0x128030");
#endif

    ctx->pc = 0x128030u;

    // 0x128030: 0x8049760  j           func_125D80
    ctx->pc = 0x128030u;
    ctx->pc = 0x128034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128030u;
    // 0x128034: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    FUN_00125d80_0x125d80(rdram, ctx, runtime); return;
    ctx->pc = 0x128038u;
}
