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
// Address: 0x1ea918 - 0x1ea930
void caseD_4_0x1ea918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ea918");
#endif

    switch (ctx->pc) {
        case 0x1ea924u: goto label_1ea924;
        default: break;
    }

    ctx->pc = 0x1ea918u;

    // 0x1ea918: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea91c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA91Cu;
    SET_GPR_U32(ctx, 31, 0x1EA924u);
    ctx->pc = 0x1EA920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA91Cu;
    // 0x1ea920: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA91Cu, 0x1EA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA924u;
label_1ea924:
    // 0x1ea924: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea928: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1EA928u;
    {
        const bool branch_taken_0x1ea928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA928u;
        // 0x1ea92c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea928) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA930u;
}
