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

// Function: entry_0012dc7c
// Address: 0x12dc7c - 0x12dc98
void entry_0012dc7c_0x12dc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dc7c_0x12dc7c");
#endif

    switch (ctx->pc) {
        case 0x12dc84u: goto label_12dc84;
        default: break;
    }

    ctx->pc = 0x12dc7cu;

label_12dc7c:
    // 0x12dc7c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x12DC7Cu;
    SET_GPR_U32(ctx, 31, 0x12DC84u);
    ctx->pc = 0x12DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC7Cu;
    // 0x12dc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x12DC7Cu, 0x12DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC84u;
label_12dc84:
    // 0x12dc84: 0x0  nop
    ctx->pc = 0x12dc84u;
    // NOP
    // 0x12dc88: 0x0  nop
    ctx->pc = 0x12dc88u;
    // NOP
    // 0x12dc8c: 0x0  nop
    ctx->pc = 0x12dc8cu;
    // NOP
    // 0x12dc90: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DC90u;
    {
        const bool branch_taken_0x12dc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc90) {
            ctx->pc = 0x12DC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dc7c;
        }
    }
    ctx->pc = 0x12DC98u;
}
