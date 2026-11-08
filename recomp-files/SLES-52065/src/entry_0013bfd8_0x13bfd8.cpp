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

// Function: entry_0013bfd8
// Address: 0x13bfd8 - 0x13bff0
void entry_0013bfd8_0x13bfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bfd8_0x13bfd8");
#endif

    ctx->pc = 0x13bfd8u;

    // 0x13bfd8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFD8u;
    {
        const bool branch_taken_0x13bfd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfd8) {
            ctx->pc = 0x13BFF0u;
            return;
        }
    }
    ctx->pc = 0x13BFE0u;
    // 0x13bfe0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BFE0u;
    {
        const bool branch_taken_0x13bfe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFE0u;
        // 0x13bfe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfe0) {
            ctx->pc = 0x13BFF0u;
            return;
        }
    }
    ctx->pc = 0x13BFE8u;
    // 0x13bfe8: 0xc04f010  jal         func_13C040
    ctx->pc = 0x13BFE8u;
    SET_GPR_U32(ctx, 31, 0x13BFF0u);
    ctx->pc = 0x13BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFE8u;
    // 0x13bfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C040u, 0x13BFE8u, 0x13BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFF0u;
}
