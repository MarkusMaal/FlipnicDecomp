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

// Function: entry_001137fc
// Address: 0x1137fc - 0x113840
void entry_001137fc_0x1137fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001137fc_0x1137fc");
#endif

    switch (ctx->pc) {
        case 0x113830u: goto label_113830;
        default: break;
    }

    ctx->pc = 0x1137fcu;

label_1137fc:
    // 0x1137fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1137fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_113800:
    // 0x113800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_113804:
    // 0x113804: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113808:
    // 0x113808: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x113808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11380c:
    // 0x11380c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11380cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113810:
    // 0x113810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113814:
    // 0x113814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113818:
    // 0x113818: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x113818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11381c:
    // 0x11381c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113820:
    // 0x113820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_113824:
    // 0x113824: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x113824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_113828:
    // 0x113828: 0x320f809  jalr        $t9
label_11382c:
    if (ctx->pc == 0x11382Cu) {
        ctx->pc = 0x11382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113828u;
        // 0x11382c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113830u;
        goto label_113830;
    }
    ctx->pc = 0x113828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113830u);
        ctx->pc = 0x11382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113828u;
        // 0x11382c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113828u, 0x113830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113830u;
label_113830:
    // 0x113830: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_113834:
    // 0x113834: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_113838:
    // 0x113838: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11383c:
    if (ctx->pc == 0x11383Cu) {
        ctx->pc = 0x11383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113838u;
        // 0x11383c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113840u;
        goto label_fallthrough_0x113838;
    }
    ctx->pc = 0x113838u;
    {
        const bool branch_taken_0x113838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113838u;
        // 0x11383c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113838) {
            ctx->pc = 0x1137FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1137fc;
        }
    }
label_fallthrough_0x113838:
    ctx->pc = 0x113840u;
}
