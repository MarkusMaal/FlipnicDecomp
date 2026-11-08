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

// Function: entry_0013bfc0
// Address: 0x13bfc0 - 0x13bfd8
void entry_0013bfc0_0x13bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bfc0_0x13bfc0");
#endif

    ctx->pc = 0x13bfc0u;

    // 0x13bfc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFC0u;
    {
        const bool branch_taken_0x13bfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfc0) {
            ctx->pc = 0x13BFD8u;
            return;
        }
    }
    ctx->pc = 0x13BFC8u;
    // 0x13bfc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BFC8u;
    {
        const bool branch_taken_0x13bfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFC8u;
        // 0x13bfcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfc8) {
            ctx->pc = 0x13BFD8u;
            return;
        }
    }
    ctx->pc = 0x13BFD0u;
    // 0x13bfd0: 0xc04efbc  jal         func_13BEF0
    ctx->pc = 0x13BFD0u;
    SET_GPR_U32(ctx, 31, 0x13BFD8u);
    ctx->pc = 0x13BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BEF0u, 0x13BFD0u, 0x13BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFD8u;
}
