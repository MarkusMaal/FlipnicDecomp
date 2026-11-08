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

// Function: entry_001ccbe4
// Address: 0x1ccbe4 - 0x1ccc00
void entry_001ccbe4_0x1ccbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccbe4_0x1ccbe4");
#endif

    switch (ctx->pc) {
        case 0x1ccbf0u: goto label_1ccbf0;
        case 0x1ccbfcu: goto label_1ccbfc;
        default: break;
    }

    ctx->pc = 0x1ccbe4u;

    // 0x1ccbe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ccbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccbe8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CCBE8u;
    SET_GPR_U32(ctx, 31, 0x1CCBF0u);
    ctx->pc = 0x1CCBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBE8u;
    // 0x1ccbec: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CCBE8u, 0x1CCBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBF0u;
label_1ccbf0:
    // 0x1ccbf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbf4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1CCBF4u;
    SET_GPR_U32(ctx, 31, 0x1CCBFCu);
    ctx->pc = 0x1CCBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBF4u;
    // 0x1ccbf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1CCBF4u, 0x1CCBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBFCu;
label_1ccbfc:
    // 0x1ccbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ccc00u;
}
