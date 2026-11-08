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

// Function: entry_001c0850
// Address: 0x1c0850 - 0x1c0870
void entry_001c0850_0x1c0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0850_0x1c0850");
#endif

    switch (ctx->pc) {
        case 0x1c0858u: goto label_1c0858;
        case 0x1c086cu: goto label_1c086c;
        default: break;
    }

    ctx->pc = 0x1c0850u;

    // 0x1c0850: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C0850u;
    SET_GPR_U32(ctx, 31, 0x1C0858u);
    ctx->pc = 0x1C0854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0850u;
    // 0x1c0854: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C0850u, 0x1C0858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0858u;
label_1c0858:
    // 0x1c0858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0858u;
    {
        const bool branch_taken_0x1c0858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0858u;
        // 0x1c085c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0858) {
            ctx->pc = 0x1C0870u;
            return;
        }
    }
    ctx->pc = 0x1C0860u;
    // 0x1c0860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0864: 0xc07049c  jal         func_1C1270
    ctx->pc = 0x1C0864u;
    SET_GPR_U32(ctx, 31, 0x1C086Cu);
    ctx->pc = 0x1C0868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0864u;
    // 0x1c0868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1270u, 0x1C0864u, 0x1C086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C086Cu;
label_1c086c:
    // 0x1c086c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c0870u;
}
