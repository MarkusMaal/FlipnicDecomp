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

// Function: entry_001c2370
// Address: 0x1c2370 - 0x1c23a8
void entry_001c2370_0x1c2370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2370_0x1c2370");
#endif

    switch (ctx->pc) {
        case 0x1c2378u: goto label_1c2378;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c23a0u: goto label_1c23a0;
        default: break;
    }

    ctx->pc = 0x1c2370u;

    // 0x1c2370: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2370u;
    SET_GPR_U32(ctx, 31, 0x1C2378u);
    ctx->pc = 0x1C2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2370u;
    // 0x1c2374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2370u, 0x1C2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2378u;
label_1c2378:
    // 0x1c2378: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c237c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2384: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2384u;
    SET_GPR_U32(ctx, 31, 0x1C238Cu);
    ctx->pc = 0x1C2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2384u;
    // 0x1c2388: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2384u, 0x1C238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C238Cu;
label_1c238c:
    // 0x1c238c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c238cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c2390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2398: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2398u;
    SET_GPR_U32(ctx, 31, 0x1C23A0u);
    ctx->pc = 0x1C239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2398u;
    // 0x1c239c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2398u, 0x1C23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A0u;
label_1c23a0:
    // 0x1c23a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C23A0u;
    {
        const bool branch_taken_0x1c23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A0u;
        // 0x1c23a4: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23a0) {
            ctx->pc = 0x1C2484u;
            return;
        }
    }
    ctx->pc = 0x1C23A8u;
}
