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

// Function: entry_0011b9d0
// Address: 0x11b9d0 - 0x11b9ec
void entry_0011b9d0_0x11b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9d0_0x11b9d0");
#endif

    switch (ctx->pc) {
        case 0x11b9d8u: goto label_11b9d8;
        default: break;
    }

    ctx->pc = 0x11b9d0u;

    // 0x11b9d0: 0xc046f0c  jal         func_11BC30
    ctx->pc = 0x11B9D0u;
    SET_GPR_U32(ctx, 31, 0x11B9D8u);
    ctx->pc = 0x11B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9D0u;
    // 0x11b9d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC30u, 0x11B9D0u, 0x11B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9D8u;
label_11b9d8:
    // 0x11b9d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9dc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B9DCu;
    {
        const bool branch_taken_0x11b9dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b9dc) {
            ctx->pc = 0x11B9ECu;
            return;
        }
    }
    ctx->pc = 0x11B9E4u;
    // 0x11b9e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11B9E4u;
    {
        const bool branch_taken_0x11b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9E4u;
        // 0x11b9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9e4) {
            ctx->pc = 0x11BA90u;
            return;
        }
    }
    ctx->pc = 0x11B9ECu;
}
