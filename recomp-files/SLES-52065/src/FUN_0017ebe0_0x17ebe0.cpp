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

// Function: FUN_0017ebe0
// Address: 0x17ebe0 - 0x17ebf8
void FUN_0017ebe0_0x17ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ebe0_0x17ebe0");
#endif

    ctx->pc = 0x17ebe0u;

    // 0x17ebe0: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17ebe4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17ebe8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17ebec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ebf0: 0x805fb00  j           func_17EC00
    ctx->pc = 0x17EBF0u;
    ctx->pc = 0x17EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBF0u;
    // 0x17ebf4: 0x8c47001c  lw          $a3, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    FUN_0017ec00_0x17ec00(rdram, ctx, runtime); return;
    ctx->pc = 0x17EBF8u;
}
