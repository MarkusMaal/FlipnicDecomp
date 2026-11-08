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

// Function: entry_0011d55c
// Address: 0x11d55c - 0x11d584
void entry_0011d55c_0x11d55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d55c_0x11d55c");
#endif

    switch (ctx->pc) {
        case 0x11d564u: goto label_11d564;
        case 0x11d574u: goto label_11d574;
        default: break;
    }

    ctx->pc = 0x11d55cu;

    // 0x11d55c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11D55Cu;
    SET_GPR_U32(ctx, 31, 0x11D564u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11D55Cu, 0x11D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D564u;
label_11d564:
    // 0x11d564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d56c: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11D56Cu;
    SET_GPR_U32(ctx, 31, 0x11D574u);
    ctx->pc = 0x11D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D56Cu;
    // 0x11d570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11D56Cu, 0x11D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D574u;
label_11d574:
    // 0x11d574: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D574u;
    {
        const bool branch_taken_0x11d574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d574) {
            ctx->pc = 0x11D584u;
            return;
        }
    }
    ctx->pc = 0x11D57Cu;
    // 0x11d57c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11D57Cu;
    SET_GPR_U32(ctx, 31, 0x11D584u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11D57Cu, 0x11D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D584u;
}
