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

// Function: entry_001c2418
// Address: 0x1c2418 - 0x1c2444
void entry_001c2418_0x1c2418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2418_0x1c2418");
#endif

    switch (ctx->pc) {
        case 0x1c2428u: goto label_1c2428;
        case 0x1c243cu: goto label_1c243c;
        default: break;
    }

    ctx->pc = 0x1c2418u;

    // 0x1c2418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c241c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c2420: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2420u;
    SET_GPR_U32(ctx, 31, 0x1C2428u);
    ctx->pc = 0x1C2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2420u;
    // 0x1c2424: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2420u, 0x1C2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2428u;
label_1c2428:
    // 0x1c2428: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c242c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2434: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2434u;
    SET_GPR_U32(ctx, 31, 0x1C243Cu);
    ctx->pc = 0x1C2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2434u;
    // 0x1c2438: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2434u, 0x1C243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C243Cu;
label_1c243c:
    // 0x1c243c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C243Cu;
    {
        const bool branch_taken_0x1c243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C243Cu;
        // 0x1c2440: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c243c) {
            ctx->pc = 0x1C2484u;
            return;
        }
    }
    ctx->pc = 0x1C2444u;
}
