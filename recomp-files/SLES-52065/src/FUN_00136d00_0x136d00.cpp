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

// Function: FUN_00136d00
// Address: 0x136d00 - 0x136d08
void FUN_00136d00_0x136d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136d00_0x136d00");
#endif

    ctx->pc = 0x136d00u;

    // 0x136d00: 0x804c558  j           func_131560
    ctx->pc = 0x136D00u;
    ctx->pc = 0x136D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D00u;
    // 0x136d04: 0x8c840084  lw          $a0, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    FUN_00131560_0x131560(rdram, ctx, runtime); return;
    ctx->pc = 0x136D08u;
}
