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

// Function: entry_001a389c
// Address: 0x1a389c - 0x1a38b0
void entry_001a389c_0x1a389c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a389c_0x1a389c");
#endif

    switch (ctx->pc) {
        case 0x1a38a8u: goto label_1a38a8;
        default: break;
    }

    ctx->pc = 0x1a389cu;

    // 0x1a389c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a38a0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A38A0u;
    SET_GPR_U32(ctx, 31, 0x1A38A8u);
    ctx->pc = 0x1A38A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38A0u;
    // 0x1a38a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A38A0u, 0x1A38A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38A8u;
label_1a38a8:
    // 0x1a38a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1A38A8u;
    {
        const bool branch_taken_0x1a38a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38a8) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A38B0u;
}
