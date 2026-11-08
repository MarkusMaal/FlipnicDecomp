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

// Function: FUN_00136d10
// Address: 0x136d10 - 0x136d18
void FUN_00136d10_0x136d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136d10_0x136d10");
#endif

    ctx->pc = 0x136d10u;

    // 0x136d10: 0x804c558  j           func_131560
    ctx->pc = 0x136D10u;
    ctx->pc = 0x136D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D10u;
    // 0x136d14: 0x8c840088  lw          $a0, 0x88($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    FUN_00131560_0x131560(rdram, ctx, runtime); return;
    ctx->pc = 0x136D18u;
}
