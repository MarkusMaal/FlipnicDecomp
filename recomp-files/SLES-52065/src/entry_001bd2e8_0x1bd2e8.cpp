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

// Function: entry_001bd2e8
// Address: 0x1bd2e8 - 0x1bd308
void entry_001bd2e8_0x1bd2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd2e8_0x1bd2e8");
#endif

    switch (ctx->pc) {
        case 0x1bd304u: goto label_1bd304;
        default: break;
    }

    ctx->pc = 0x1bd2e8u;

    // 0x1bd2e8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1bd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd2ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bd2f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1bd2f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd2f8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1bd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bd2fc: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1BD2FCu;
    SET_GPR_U32(ctx, 31, 0x1BD304u);
    ctx->pc = 0x1BD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2FCu;
    // 0x1bd300: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1BD2FCu, 0x1BD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD304u;
label_1bd304:
    // 0x1bd304: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->pc = 0x1bd308u;
}
