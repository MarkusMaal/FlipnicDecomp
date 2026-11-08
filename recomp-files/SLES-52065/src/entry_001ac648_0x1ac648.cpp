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

// Function: entry_001ac648
// Address: 0x1ac648 - 0x1ac690
void entry_001ac648_0x1ac648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac648_0x1ac648");
#endif

    switch (ctx->pc) {
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac688u: goto label_1ac688;
        default: break;
    }

    ctx->pc = 0x1ac648u;

    // 0x1ac648: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1AC648u;
    SET_GPR_U32(ctx, 31, 0x1AC650u);
    ctx->pc = 0x1AC64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC648u;
    // 0x1ac64c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1AC648u, 0x1AC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC650u;
label_1ac650:
    // 0x1ac650: 0x8e2206e0  lw          $v0, 0x6E0($s1)
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1760)));
    // 0x1ac654: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1ac658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac65c: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AC65Cu;
    SET_GPR_U32(ctx, 31, 0x1AC664u);
    ctx->pc = 0x1AC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC65Cu;
    // 0x1ac660: 0xae2206e0  sw          $v0, 0x6E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AC65Cu, 0x1AC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC664u;
label_1ac664:
    // 0x1ac664: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1AC664u;
    {
        const bool branch_taken_0x1ac664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC664u;
        // 0x1ac668: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac664) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC66Cu;
    // 0x1ac66c: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AC66Cu;
    SET_GPR_U32(ctx, 31, 0x1AC674u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AC66Cu, 0x1AC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC674u;
label_1ac674:
    // 0x1ac674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac67c: 0xa22206d9  sb          $v0, 0x6D9($s1)
    ctx->pc = 0x1ac67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac680: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AC680u;
    SET_GPR_U32(ctx, 31, 0x1AC688u);
    ctx->pc = 0x1AC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC680u;
    // 0x1ac684: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC680u, 0x1AC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC688u;
label_1ac688:
    // 0x1ac688: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1AC688u;
    {
        const bool branch_taken_0x1ac688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac688) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC690u;
}
