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

// Function: FUN_0017e140
// Address: 0x17e140 - 0x17e150
void FUN_0017e140_0x17e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e140_0x17e140");
#endif

    ctx->pc = 0x17e140u;

    // 0x17e140: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e144: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e148: 0x805f880  j           func_17E200
    ctx->pc = 0x17E148u;
    ctx->pc = 0x17E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E148u;
    // 0x17e14c: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E200u;
    FUN_0017e200_0x17e200(rdram, ctx, runtime); return;
    ctx->pc = 0x17E150u;
}
