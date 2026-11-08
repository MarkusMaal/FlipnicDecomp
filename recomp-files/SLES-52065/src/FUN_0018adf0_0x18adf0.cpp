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

// Function: FUN_0018adf0
// Address: 0x18adf0 - 0x18adf8
void FUN_0018adf0_0x18adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018adf0_0x18adf0");
#endif

    ctx->pc = 0x18adf0u;

    // 0x18adf0: 0x80764ea  j           func_1D93A8
    ctx->pc = 0x18ADF0u;
    ctx->pc = 0x18ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADF0u;
    // 0x18adf4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93A8u;
    FUN_001d93a8_0x1d93a8(rdram, ctx, runtime); return;
    ctx->pc = 0x18ADF8u;
}
