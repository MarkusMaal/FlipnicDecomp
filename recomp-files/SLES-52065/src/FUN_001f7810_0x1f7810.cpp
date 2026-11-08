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

// Function: FUN_001f7810
// Address: 0x1f7810 - 0x1f78b0
void FUN_001f7810_0x1f7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7810_0x1f7810");
#endif

    switch (ctx->pc) {
        case 0x1f783cu: goto label_1f783c;
        case 0x1f7848u: goto label_1f7848;
        case 0x1f7850u: goto label_1f7850;
        case 0x1f7864u: goto label_1f7864;
        case 0x1f7890u: goto label_1f7890;
        default: break;
    }

    ctx->pc = 0x1f7810u;

    // 0x1f7810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f7818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f781c: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F781Cu;
    {
        const bool branch_taken_0x1f781c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F781Cu;
        // 0x1f7820: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f781c) {
            ctx->pc = 0x1F7874u;
            goto label_1f7874;
        }
    }
    ctx->pc = 0x1F7824u;
    // 0x1f7824: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7828: 0x8c43bb10  lw          $v1, -0x44F0($v0)
    ctx->pc = 0x1f7828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB10u));
    // 0x1f782c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F782Cu;
    {
        const bool branch_taken_0x1f782c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F782Cu;
        // 0x1f7830: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f782c) {
            ctx->pc = 0x1F783Cu;
            goto label_1f783c;
        }
    }
    ctx->pc = 0x1F7834u;
    // 0x1f7834: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7834u;
    SET_GPR_U32(ctx, 31, 0x1F783Cu);
    ctx->pc = 0x1F7838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7834u;
    // 0x1f7838: 0x24844738  addiu       $a0, $a0, 0x4738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7834u, 0x1F783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F783Cu;
label_1f783c:
    // 0x1f783c: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f783cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f7840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7840u;
    {
        const bool branch_taken_0x1f7840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7840u;
        // 0x1f7844: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7840) {
            ctx->pc = 0x1F7850u;
            goto label_1f7850;
        }
    }
    ctx->pc = 0x1F7848u;
label_1f7848:
    // 0x1f7848: 0xc07db24  jal         func_1F6C90
    ctx->pc = 0x1F7848u;
    SET_GPR_U32(ctx, 31, 0x1F7850u);
    ctx->pc = 0x1F784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7848u;
    // 0x1f784c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C90u, 0x1F7848u, 0x1F7850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7850u;
label_1f7850:
    // 0x1f7850: 0x8e22bb34  lw          $v0, -0x44CC($s1)
    ctx->pc = 0x1f7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949684)));
    // 0x1f7854: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1F7854u;
    {
        const bool branch_taken_0x1f7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7854) {
            ctx->pc = 0x1F7848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7848;
        }
    }
    ctx->pc = 0x1F785Cu;
    // 0x1f785c: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F785Cu;
    SET_GPR_U32(ctx, 31, 0x1F7864u);
    ctx->pc = 0x1F7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F785Cu;
    // 0x1f7860: 0x2604ccd0  addiu       $a0, $s0, -0x3330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F785Cu, 0x1F7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7864u;
label_1f7864:
    // 0x1f7864: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7864u;
    {
        const bool branch_taken_0x1f7864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7864u;
        // 0x1f7868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7864) {
            ctx->pc = 0x1F7848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7848;
        }
    }
    ctx->pc = 0x1F786Cu;
    // 0x1f786c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F786Cu;
        // 0x1f7870: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F78A0u;
            goto label_1f78a0;
        }
    }
    ctx->pc = 0x1F7874u;
label_1f7874:
    // 0x1f7874: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7878: 0x8c43bb34  lw          $v1, -0x44CC($v0)
    ctx->pc = 0x1f7878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB34u));
    // 0x1f787c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F787Cu;
    {
        const bool branch_taken_0x1f787c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F787Cu;
        // 0x1f7880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f787c) {
            ctx->pc = 0x1F789Cu;
            goto label_1f789c;
        }
    }
    ctx->pc = 0x1F7884u;
    // 0x1f7884: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7888: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F7888u;
    SET_GPR_U32(ctx, 31, 0x1F7890u);
    ctx->pc = 0x1F788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7888u;
    // 0x1f788c: 0x2484ccd0  addiu       $a0, $a0, -0x3330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F7888u, 0x1F7890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7890u;
label_1f7890:
    // 0x1f7890: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7890u;
    {
        const bool branch_taken_0x1f7890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7890u;
        // 0x1f7894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7890) {
            ctx->pc = 0x1F789Cu;
            goto label_1f789c;
        }
    }
    ctx->pc = 0x1F7898u;
    // 0x1f7898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f789c:
    // 0x1f789c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f789cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f78a0:
    // 0x1f78a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f78a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f78a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f78a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f78a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F78A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A8u;
        // 0x1f78ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F78A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F78B0u;
}
