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

// Function: caseD_b
// Address: 0x1eaa2c - 0x1eaa50
void caseD_b_0x1eaa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1eaa2c");
#endif

    switch (ctx->pc) {
        case 0x1eaa38u: goto label_1eaa38;
        case 0x1eaa44u: goto label_1eaa44;
        default: break;
    }

    ctx->pc = 0x1eaa2cu;

    // 0x1eaa2c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaa30: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA30u;
    SET_GPR_U32(ctx, 31, 0x1EAA38u);
    ctx->pc = 0x1EAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA30u;
    // 0x1eaa34: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA30u, 0x1EAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA38u;
label_1eaa38:
    // 0x1eaa38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa3c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA44u);
    ctx->pc = 0x1EAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAA3Cu;
    // 0x1eaa40: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAA3Cu, 0x1EAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAA44u;
label_1eaa44:
    // 0x1eaa44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1eaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eaa48: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1EAA48u;
    {
        const bool branch_taken_0x1eaa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA48u;
        // 0x1eaa4c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa48) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAA50u;
}
