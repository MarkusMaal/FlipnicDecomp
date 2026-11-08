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

// Function: entry_0011aed8
// Address: 0x11aed8 - 0x11af08
void entry_0011aed8_0x11aed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aed8_0x11aed8");
#endif

    switch (ctx->pc) {
        case 0x11aee0u: goto label_11aee0;
        case 0x11aef4u: goto label_11aef4;
        case 0x11af00u: goto label_11af00;
        default: break;
    }

    ctx->pc = 0x11aed8u;

    // 0x11aed8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AED8u;
    SET_GPR_U32(ctx, 31, 0x11AEE0u);
    ctx->pc = 0x11AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AED8u;
    // 0x11aedc: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AED8u, 0x11AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEE0u;
label_11aee0:
    // 0x11aee0: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x11AEE0u;
    {
        const bool branch_taken_0x11aee0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEE0u;
        // 0x11aee4: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aee0) {
            ctx->pc = 0x11AF08u;
            return;
        }
    }
    ctx->pc = 0x11AEE8u;
    // 0x11aee8: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x11aeec: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AEECu;
    SET_GPR_U32(ctx, 31, 0x11AEF4u);
    ctx->pc = 0x11AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEECu;
    // 0x11aef0: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AEECu, 0x11AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEF4u;
label_11aef4:
    // 0x11aef4: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x11aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x11aef8: 0xc080664  jal         func_201990
    ctx->pc = 0x11AEF8u;
    SET_GPR_U32(ctx, 31, 0x11AF00u);
    ctx->pc = 0x11AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEF8u;
    // 0x11aefc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AEF8u, 0x11AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF00u;
label_11af00:
    // 0x11af00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AF00u;
    {
        const bool branch_taken_0x11af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF00u;
        // 0x11af04: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af00) {
            ctx->pc = 0x11AF14u;
            return;
        }
    }
    ctx->pc = 0x11AF08u;
}
