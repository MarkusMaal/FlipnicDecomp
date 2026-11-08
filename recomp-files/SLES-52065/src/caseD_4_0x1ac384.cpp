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

// Function: caseD_4
// Address: 0x1ac384 - 0x1ac3ac
void caseD_4_0x1ac384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ac384");
#endif

    switch (ctx->pc) {
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a4u: goto label_1ac3a4;
        default: break;
    }

    ctx->pc = 0x1ac384u;

    // 0x1ac384: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AC384u;
    SET_GPR_U32(ctx, 31, 0x1AC38Cu);
    ctx->pc = 0x1AC388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC384u;
    // 0x1ac388: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AC384u, 0x1AC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC38Cu;
label_1ac38c:
    // 0x1ac38c: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x1AC38Cu;
    {
        const bool branch_taken_0x1ac38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac38c) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC394u;
    // 0x1ac394: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AC394u;
    SET_GPR_U32(ctx, 31, 0x1AC39Cu);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AC394u, 0x1AC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC39Cu;
label_1ac39c:
    // 0x1ac39c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC39Cu;
    SET_GPR_U32(ctx, 31, 0x1AC3A4u);
    ctx->pc = 0x1AC3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC39Cu;
    // 0x1ac3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC39Cu, 0x1AC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3A4u;
label_1ac3a4:
    // 0x1ac3a4: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1AC3A4u;
    {
        const bool branch_taken_0x1ac3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3a4) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC3ACu;
}
