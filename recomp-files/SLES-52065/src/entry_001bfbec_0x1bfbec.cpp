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

// Function: entry_001bfbec
// Address: 0x1bfbec - 0x1bfc04
void entry_001bfbec_0x1bfbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfbec_0x1bfbec");
#endif

    switch (ctx->pc) {
        case 0x1bfbf4u: goto label_1bfbf4;
        default: break;
    }

    ctx->pc = 0x1bfbecu;

    // 0x1bfbec: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BFBECu;
    SET_GPR_U32(ctx, 31, 0x1BFBF4u);
    ctx->pc = 0x1BFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBECu;
    // 0x1bfbf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BFBECu, 0x1BFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBF4u;
label_1bfbf4:
    // 0x1bfbf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFBF4u;
    {
        const bool branch_taken_0x1bfbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF4u;
        // 0x1bfbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbf4) {
            ctx->pc = 0x1BFC04u;
            return;
        }
    }
    ctx->pc = 0x1BFBFCu;
    // 0x1bfbfc: 0xc06ffbc  jal         func_1BFEF0
    ctx->pc = 0x1BFBFCu;
    SET_GPR_U32(ctx, 31, 0x1BFC04u);
    ctx->pc = 0x1BFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBFCu;
    // 0x1bfc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEF0u, 0x1BFBFCu, 0x1BFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC04u;
}
