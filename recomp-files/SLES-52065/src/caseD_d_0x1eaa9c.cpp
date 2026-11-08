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

// Function: caseD_d
// Address: 0x1eaa9c - 0x1eaab0
void caseD_d_0x1eaa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1eaa9c");
#endif

    switch (ctx->pc) {
        case 0x1eaaa8u: goto label_1eaaa8;
        default: break;
    }

    ctx->pc = 0x1eaa9cu;

    // 0x1eaa9c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eaaa0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EAAA0u;
    SET_GPR_U32(ctx, 31, 0x1EAAA8u);
    ctx->pc = 0x1EAAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAA0u;
    // 0x1eaaa4: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EAAA0u, 0x1EAAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAA8u;
label_1eaaa8:
    // 0x1eaaa8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EAAA8u;
    {
        const bool branch_taken_0x1eaaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAA8u;
        // 0x1eaaac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaa8) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAAB0u;
}
