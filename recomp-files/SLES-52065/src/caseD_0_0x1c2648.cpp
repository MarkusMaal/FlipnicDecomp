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

// Function: caseD_0
// Address: 0x1c2648 - 0x1c2668
void caseD_0_0x1c2648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c2648");
#endif

    switch (ctx->pc) {
        case 0x1c2658u: goto label_1c2658;
        default: break;
    }

    ctx->pc = 0x1c2648u;

    // 0x1c2648: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c264c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2650: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C2650u;
    SET_GPR_U32(ctx, 31, 0x1C2658u);
    ctx->pc = 0x1C2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2650u;
    // 0x1c2654: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C2650u, 0x1C2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2658u;
label_1c2658:
    // 0x1c2658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c265c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1c265cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1c2660: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x1C2660u;
    {
        const bool branch_taken_0x1c2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2660u;
        // 0x1c2664: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2660) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2668u;
}
