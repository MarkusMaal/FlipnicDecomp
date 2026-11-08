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

// Function: entry_0010e368
// Address: 0x10e368 - 0x10e390
void entry_0010e368_0x10e368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e368_0x10e368");
#endif

    switch (ctx->pc) {
        case 0x10e384u: goto label_10e384;
        default: break;
    }

    ctx->pc = 0x10e368u;

    // 0x10e368: 0x8e4401d4  lw          $a0, 0x1D4($s2)
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x10e36c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e370: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E370u;
    {
        const bool branch_taken_0x10e370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e370) {
            ctx->pc = 0x10E390u;
            return;
        }
    }
    ctx->pc = 0x10E378u;
    // 0x10e378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e37c: 0xc04394c  jal         func_10E530
    ctx->pc = 0x10E37Cu;
    SET_GPR_U32(ctx, 31, 0x10E384u);
    ctx->pc = 0x10E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E37Cu;
    // 0x10e380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E530u, 0x10E37Cu, 0x10E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E384u;
label_10e384:
    // 0x10e384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e388: 0xc043a14  jal         func_10E850
    ctx->pc = 0x10E388u;
    SET_GPR_U32(ctx, 31, 0x10E390u);
    ctx->pc = 0x10E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E388u;
    // 0x10e38c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E850u, 0x10E388u, 0x10E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E390u;
}
