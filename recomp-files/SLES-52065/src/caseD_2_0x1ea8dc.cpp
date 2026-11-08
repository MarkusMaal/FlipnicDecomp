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

// Function: caseD_2
// Address: 0x1ea8dc - 0x1ea8f4
void caseD_2_0x1ea8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ea8dc");
#endif

    switch (ctx->pc) {
        case 0x1ea8e8u: goto label_1ea8e8;
        default: break;
    }

    ctx->pc = 0x1ea8dcu;

    // 0x1ea8dc: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea8e0: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA8E0u;
    SET_GPR_U32(ctx, 31, 0x1EA8E8u);
    ctx->pc = 0x1EA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8E0u;
    // 0x1ea8e4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA8E0u, 0x1EA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA8E8u;
label_1ea8e8:
    // 0x1ea8e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea8ec: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1EA8ECu;
    {
        const bool branch_taken_0x1ea8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8ECu;
        // 0x1ea8f0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8ec) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA8F4u;
}
