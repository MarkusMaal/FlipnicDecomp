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

// Function: entry_0014e84c
// Address: 0x14e84c - 0x14e86c
void entry_0014e84c_0x14e84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e84c_0x14e84c");
#endif

    ctx->pc = 0x14e84cu;

    // 0x14e84c: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x14e84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x14e850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e854: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E854u;
    {
        const bool branch_taken_0x14e854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e854) {
            ctx->pc = 0x14E86Cu;
            return;
        }
    }
    ctx->pc = 0x14E85Cu;
    // 0x14e85c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E85Cu;
    {
        const bool branch_taken_0x14e85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E85Cu;
        // 0x14e860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e85c) {
            ctx->pc = 0x14E86Cu;
            return;
        }
    }
    ctx->pc = 0x14E864u;
    // 0x14e864: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14E864u;
    SET_GPR_U32(ctx, 31, 0x14E86Cu);
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14E864u, 0x14E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E86Cu;
}
