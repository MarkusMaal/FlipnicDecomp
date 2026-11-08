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

// Function: entry_0011e698
// Address: 0x11e698 - 0x11e6c8
void entry_0011e698_0x11e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e698_0x11e698");
#endif

    switch (ctx->pc) {
        case 0x11e6a0u: goto label_11e6a0;
        case 0x11e6b4u: goto label_11e6b4;
        case 0x11e6c0u: goto label_11e6c0;
        default: break;
    }

    ctx->pc = 0x11e698u;

    // 0x11e698: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E698u;
    SET_GPR_U32(ctx, 31, 0x11E6A0u);
    ctx->pc = 0x11E69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E698u;
    // 0x11e69c: 0x26450104  addiu       $a1, $s2, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E698u, 0x11E6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6A0u;
label_11e6a0:
    // 0x11e6a0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E6A0u;
    {
        const bool branch_taken_0x11e6a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6A0u;
        // 0x11e6a4: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6a0) {
            ctx->pc = 0x11E6C8u;
            return;
        }
    }
    ctx->pc = 0x11E6A8u;
    // 0x11e6a8: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x11e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x11e6ac: 0xc080702  jal         func_201C08
    ctx->pc = 0x11E6ACu;
    SET_GPR_U32(ctx, 31, 0x11E6B4u);
    ctx->pc = 0x11E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6ACu;
    // 0x11e6b0: 0x264503c4  addiu       $a1, $s2, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11E6ACu, 0x11E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6B4u;
label_11e6b4:
    // 0x11e6b4: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x11e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x11e6b8: 0xc080664  jal         func_201990
    ctx->pc = 0x11E6B8u;
    SET_GPR_U32(ctx, 31, 0x11E6C0u);
    ctx->pc = 0x11E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6B8u;
    // 0x11e6bc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E6B8u, 0x11E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6C0u;
label_11e6c0:
    // 0x11e6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E6C0u;
    {
        const bool branch_taken_0x11e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6C0u;
        // 0x11e6c4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6c0) {
            ctx->pc = 0x11E6D4u;
            return;
        }
    }
    ctx->pc = 0x11E6C8u;
}
