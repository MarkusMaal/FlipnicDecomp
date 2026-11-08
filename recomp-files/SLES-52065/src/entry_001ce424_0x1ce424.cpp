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

// Function: entry_001ce424
// Address: 0x1ce424 - 0x1ce43c
void entry_001ce424_0x1ce424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce424_0x1ce424");
#endif

    switch (ctx->pc) {
        case 0x1ce42cu: goto label_1ce42c;
        default: break;
    }

    ctx->pc = 0x1ce424u;

    // 0x1ce424: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE424u;
    SET_GPR_U32(ctx, 31, 0x1CE42Cu);
    ctx->pc = 0x1CE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE424u;
    // 0x1ce428: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE424u, 0x1CE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE42Cu;
label_1ce42c:
    // 0x1ce42c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE42Cu;
    {
        const bool branch_taken_0x1ce42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE42Cu;
        // 0x1ce430: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce42c) {
            ctx->pc = 0x1CE43Cu;
            return;
        }
    }
    ctx->pc = 0x1CE434u;
    // 0x1ce434: 0xc073944  jal         func_1CE510
    ctx->pc = 0x1CE434u;
    SET_GPR_U32(ctx, 31, 0x1CE43Cu);
    ctx->pc = 0x1CE438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE434u;
    // 0x1ce438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE510u, 0x1CE434u, 0x1CE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE43Cu;
}
