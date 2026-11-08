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

// Function: caseD_3
// Address: 0x194810 - 0x19483c
void caseD_3_0x194810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x194810");
#endif

    switch (ctx->pc) {
        case 0x194824u: goto label_194824;
        default: break;
    }

    ctx->pc = 0x194810u;

    // 0x194810: 0x8e830334  lw          $v1, 0x334($s4)
    ctx->pc = 0x194810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x194814: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x194814u;
    {
        const bool branch_taken_0x194814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194814u;
        // 0x194818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194814) {
            ctx->pc = 0x194920u;
            return;
        }
    }
    ctx->pc = 0x19481Cu;
    // 0x19481c: 0xc064364  jal         func_190D90
    ctx->pc = 0x19481Cu;
    SET_GPR_U32(ctx, 31, 0x194824u);
    ctx->pc = 0x194820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19481Cu;
    // 0x194820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190D90u, 0x19481Cu, 0x194824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194824u;
label_194824:
    // 0x194824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194828: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x194828u;
    {
        const bool branch_taken_0x194828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194828) {
            ctx->pc = 0x19483Cu;
            return;
        }
    }
    ctx->pc = 0x194830u;
    // 0x194830: 0xae830334  sw          $v1, 0x334($s4)
    ctx->pc = 0x194830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 3));
    // 0x194834: 0x1000054f  b           . + 4 + (0x54F << 2)
    ctx->pc = 0x194834u;
    {
        const bool branch_taken_0x194834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194834u;
        // 0x194838: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194834) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x19483Cu;
}
