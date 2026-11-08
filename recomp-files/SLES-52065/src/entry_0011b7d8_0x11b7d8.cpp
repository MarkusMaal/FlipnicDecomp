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

// Function: entry_0011b7d8
// Address: 0x11b7d8 - 0x11b7f8
void entry_0011b7d8_0x11b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7d8_0x11b7d8");
#endif

    switch (ctx->pc) {
        case 0x11b7e0u: goto label_11b7e0;
        default: break;
    }

    ctx->pc = 0x11b7d8u;

    // 0x11b7d8: 0xc046c90  jal         func_11B240
    ctx->pc = 0x11B7D8u;
    SET_GPR_U32(ctx, 31, 0x11B7E0u);
    ctx->pc = 0x11B7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7D8u;
    // 0x11b7dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B240u, 0x11B7D8u, 0x11B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7E0u;
label_11b7e0:
    // 0x11b7e0: 0x0  nop
    ctx->pc = 0x11b7e0u;
    // NOP
    // 0x11b7e4: 0x0  nop
    ctx->pc = 0x11b7e4u;
    // NOP
    // 0x11b7e8: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B7E8u;
    {
        const bool branch_taken_0x11b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b7e8) {
            ctx->pc = 0x11B7D4u;
            return;
        }
    }
    ctx->pc = 0x11B7F0u;
    // 0x11b7f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11B7F0u;
    {
        const bool branch_taken_0x11b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b7f0) {
            ctx->pc = 0x11B824u;
            return;
        }
    }
    ctx->pc = 0x11B7F8u;
}
