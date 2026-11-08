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

// Function: entry_001ae644
// Address: 0x1ae644 - 0x1ae67c
void entry_001ae644_0x1ae644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae644_0x1ae644");
#endif

    switch (ctx->pc) {
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae674u: goto label_1ae674;
        default: break;
    }

    ctx->pc = 0x1ae644u;

label_1ae644:
    // 0x1ae644: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1ae648: 0xac400670  sw          $zero, 0x670($v0)
    ctx->pc = 0x1ae648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 0));
    // 0x1ae64c: 0xc06bc24  jal         func_1AF090
    ctx->pc = 0x1AE64Cu;
    SET_GPR_U32(ctx, 31, 0x1AE654u);
    ctx->pc = 0x1AE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE64Cu;
    // 0x1ae650: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF090u, 0x1AE64Cu, 0x1AE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE654u;
label_1ae654:
    // 0x1ae654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ae658: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1ae658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae65c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AE65Cu;
    {
        const bool branch_taken_0x1ae65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE65Cu;
        // 0x1ae660: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae65c) {
            ctx->pc = 0x1AE644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae644;
        }
    }
    ctx->pc = 0x1AE664u;
    // 0x1ae664: 0xc058018  jal         func_160060
    ctx->pc = 0x1AE664u;
    SET_GPR_U32(ctx, 31, 0x1AE66Cu);
    ctx->pc = 0x1AE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE664u;
    // 0x1ae668: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AE664u, 0x1AE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE66Cu;
label_1ae66c:
    // 0x1ae66c: 0xc06bc24  jal         func_1AF090
    ctx->pc = 0x1AE66Cu;
    SET_GPR_U32(ctx, 31, 0x1AE674u);
    ctx->pc = 0x1AE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE66Cu;
    // 0x1ae670: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF090u, 0x1AE66Cu, 0x1AE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE674u;
label_1ae674:
    // 0x1ae674: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE674u;
    SET_GPR_U32(ctx, 31, 0x1AE67Cu);
    ctx->pc = 0x1AE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE674u;
    // 0x1ae678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE674u, 0x1AE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE67Cu;
}
