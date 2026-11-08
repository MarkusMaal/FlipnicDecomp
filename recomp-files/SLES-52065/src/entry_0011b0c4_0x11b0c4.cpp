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

// Function: entry_0011b0c4
// Address: 0x11b0c4 - 0x11b0ec
void entry_0011b0c4_0x11b0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b0c4_0x11b0c4");
#endif

    switch (ctx->pc) {
        case 0x11b0d8u: goto label_11b0d8;
        case 0x11b0e4u: goto label_11b0e4;
        default: break;
    }

    ctx->pc = 0x11b0c4u;

    // 0x11b0c4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B0C4u;
    {
        const bool branch_taken_0x11b0c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0C4u;
        // 0x11b0c8: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0c4) {
            ctx->pc = 0x11B0ECu;
            return;
        }
    }
    ctx->pc = 0x11B0CCu;
    // 0x11b0cc: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b0d0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B0D0u;
    SET_GPR_U32(ctx, 31, 0x11B0D8u);
    ctx->pc = 0x11B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0D0u;
    // 0x11b0d4: 0x262503c4  addiu       $a1, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B0D0u, 0x11B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0D8u;
label_11b0d8:
    // 0x11b0d8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x11b0dc: 0xc080664  jal         func_201990
    ctx->pc = 0x11B0DCu;
    SET_GPR_U32(ctx, 31, 0x11B0E4u);
    ctx->pc = 0x11B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0DCu;
    // 0x11b0e0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11B0DCu, 0x11B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0E4u;
label_11b0e4:
    // 0x11b0e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B0E4u;
    {
        const bool branch_taken_0x11b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0E4u;
        // 0x11b0e8: 0x263200f8  addiu       $s2, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e4) {
            ctx->pc = 0x11B0F8u;
            return;
        }
    }
    ctx->pc = 0x11B0ECu;
}
