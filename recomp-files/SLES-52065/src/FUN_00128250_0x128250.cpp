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

// Function: FUN_00128250
// Address: 0x128250 - 0x128258
void FUN_00128250_0x128250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128250_0x128250");
#endif

    ctx->pc = 0x128250u;

    // 0x128250: 0x804a514  j           func_129450
    ctx->pc = 0x128250u;
    ctx->pc = 0x128254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128250u;
    // 0x128254: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129450u;
    FUN_00129450_0x129450(rdram, ctx, runtime); return;
    ctx->pc = 0x128258u;
}
