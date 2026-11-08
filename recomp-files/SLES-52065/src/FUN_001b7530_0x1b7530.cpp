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

// Function: FUN_001b7530
// Address: 0x1b7530 - 0x1b7548
void FUN_001b7530_0x1b7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7530_0x1b7530");
#endif

    ctx->pc = 0x1b7530u;

    // 0x1b7530: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1b7530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b7534: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b7538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b753c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7540: 0x806e1d4  j           func_1B8750
    ctx->pc = 0x1B7540u;
    ctx->pc = 0x1B7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7540u;
    // 0x1b7544: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    FUN_001b8750_0x1b8750(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7548u;
}
