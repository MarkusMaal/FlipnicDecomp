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

// Function: FUN_00136cf0
// Address: 0x136cf0 - 0x136cf8
void FUN_00136cf0_0x136cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136cf0_0x136cf0");
#endif

    ctx->pc = 0x136cf0u;

    // 0x136cf0: 0x804c558  j           func_131560
    ctx->pc = 0x136CF0u;
    ctx->pc = 0x136CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CF0u;
    // 0x136cf4: 0x8c840080  lw          $a0, 0x80($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    FUN_00131560_0x131560(rdram, ctx, runtime); return;
    ctx->pc = 0x136CF8u;
}
