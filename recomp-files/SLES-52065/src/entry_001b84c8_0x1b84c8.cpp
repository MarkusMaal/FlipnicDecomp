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

// Function: entry_001b84c8
// Address: 0x1b84c8 - 0x1b84e4
void entry_001b84c8_0x1b84c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b84c8_0x1b84c8");
#endif

    switch (ctx->pc) {
        case 0x1b84d0u: goto label_1b84d0;
        default: break;
    }

    ctx->pc = 0x1b84c8u;

label_1b84c8:
    // 0x1b84c8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B84C8u;
    SET_GPR_U32(ctx, 31, 0x1B84D0u);
    ctx->pc = 0x1B84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C8u;
    // 0x1b84cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B84C8u, 0x1B84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84D0u;
label_1b84d0:
    // 0x1b84d0: 0x0  nop
    ctx->pc = 0x1b84d0u;
    // NOP
    // 0x1b84d4: 0x0  nop
    ctx->pc = 0x1b84d4u;
    // NOP
    // 0x1b84d8: 0x0  nop
    ctx->pc = 0x1b84d8u;
    // NOP
    // 0x1b84dc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B84DCu;
    {
        const bool branch_taken_0x1b84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b84dc) {
            ctx->pc = 0x1B84C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b84c8;
        }
    }
    ctx->pc = 0x1B84E4u;
}
