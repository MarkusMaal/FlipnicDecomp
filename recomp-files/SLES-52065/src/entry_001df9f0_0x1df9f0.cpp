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

// Function: entry_001df9f0
// Address: 0x1df9f0 - 0x1dfa00
void entry_001df9f0_0x1df9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df9f0_0x1df9f0");
#endif

    switch (ctx->pc) {
        case 0x1df9f8u: goto label_1df9f8;
        default: break;
    }

    ctx->pc = 0x1df9f0u;

    // 0x1df9f0: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF9F0u;
    SET_GPR_U32(ctx, 31, 0x1DF9F8u);
    ctx->pc = 0x1DF9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9F0u;
    // 0x1df9f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF9F0u, 0x1DF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9F8u;
label_1df9f8:
    // 0x1df9f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DF9F8u;
    {
        const bool branch_taken_0x1df9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9F8u;
        // 0x1df9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9f8) {
            ctx->pc = 0x1DFA40u;
            return;
        }
    }
    ctx->pc = 0x1DFA00u;
}
