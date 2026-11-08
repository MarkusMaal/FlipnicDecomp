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

// Function: entry_001c2448
// Address: 0x1c2448 - 0x1c2470
void entry_001c2448_0x1c2448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2448_0x1c2448");
#endif

    switch (ctx->pc) {
        case 0x1c2454u: goto label_1c2454;
        case 0x1c2468u: goto label_1c2468;
        default: break;
    }

    ctx->pc = 0x1c2448u;

    // 0x1c2448: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c2448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c244c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C244Cu;
    SET_GPR_U32(ctx, 31, 0x1C2454u);
    ctx->pc = 0x1C2450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C244Cu;
    // 0x1c2450: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C244Cu, 0x1C2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2454u;
label_1c2454:
    // 0x1c2454: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c2458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c245c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2460: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2460u;
    SET_GPR_U32(ctx, 31, 0x1C2468u);
    ctx->pc = 0x1C2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2460u;
    // 0x1c2464: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2460u, 0x1C2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2468u;
label_1c2468:
    // 0x1c2468: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2468u;
    {
        const bool branch_taken_0x1c2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2468u;
        // 0x1c246c: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2468) {
            ctx->pc = 0x1C2484u;
            return;
        }
    }
    ctx->pc = 0x1C2470u;
}
