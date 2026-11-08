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

// Function: entry_0011b2a4
// Address: 0x11b2a4 - 0x11b2cc
void entry_0011b2a4_0x11b2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b2a4_0x11b2a4");
#endif

    switch (ctx->pc) {
        case 0x11b2b8u: goto label_11b2b8;
        case 0x11b2c4u: goto label_11b2c4;
        default: break;
    }

    ctx->pc = 0x11b2a4u;

    // 0x11b2a4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B2A4u;
    {
        const bool branch_taken_0x11b2a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2A4u;
        // 0x11b2a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2a4) {
            ctx->pc = 0x11B2CCu;
            return;
        }
    }
    ctx->pc = 0x11B2ACu;
    // 0x11b2ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11b2b0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B2B0u;
    SET_GPR_U32(ctx, 31, 0x11B2B8u);
    ctx->pc = 0x11B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2B0u;
    // 0x11b2b4: 0x262503c4  addiu       $a1, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B2B0u, 0x11B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2B8u;
label_11b2b8:
    // 0x11b2b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11b2bc: 0xc080664  jal         func_201990
    ctx->pc = 0x11B2BCu;
    SET_GPR_U32(ctx, 31, 0x11B2C4u);
    ctx->pc = 0x11B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2BCu;
    // 0x11b2c0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11B2BCu, 0x11B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2C4u;
label_11b2c4:
    // 0x11b2c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B2C4u;
    {
        const bool branch_taken_0x11b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C4u;
        // 0x11b2c8: 0x8e3000fc  lw          $s0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2c4) {
            ctx->pc = 0x11B2FCu;
            return;
        }
    }
    ctx->pc = 0x11B2CCu;
}
