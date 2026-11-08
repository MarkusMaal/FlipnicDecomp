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

// Function: FUN_0018add0
// Address: 0x18add0 - 0x18adf0
void FUN_0018add0_0x18add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018add0_0x18add0");
#endif

    ctx->pc = 0x18add0u;

    // 0x18add0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18add0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18add4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18add4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18add8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18add8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18addc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18addcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ade0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18ade0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ade4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x18ade4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ade8: 0x8076436  j           func_1D90D8
    ctx->pc = 0x18ADE8u;
    ctx->pc = 0x18ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ADE8u;
    // 0x18adec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D90D8u;
    FUN_001d90d8_0x1d90d8(rdram, ctx, runtime); return;
    ctx->pc = 0x18ADF0u;
}
