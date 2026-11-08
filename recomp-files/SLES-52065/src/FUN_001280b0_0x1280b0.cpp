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

// Function: FUN_001280b0
// Address: 0x1280b0 - 0x1280b8
void FUN_001280b0_0x1280b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001280b0_0x1280b0");
#endif

    ctx->pc = 0x1280b0u;

    // 0x1280b0: 0x804a508  j           func_129420
    ctx->pc = 0x1280B0u;
    ctx->pc = 0x1280B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1280B0u;
    // 0x1280b4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    FUN_00129420_0x129420(rdram, ctx, runtime); return;
    ctx->pc = 0x1280B8u;
}
