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

// Function: entry_001b511c
// Address: 0x1b511c - 0x1b5138
void entry_001b511c_0x1b511c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b511c_0x1b511c");
#endif

    switch (ctx->pc) {
        case 0x1b5128u: goto label_1b5128;
        default: break;
    }

    ctx->pc = 0x1b511cu;

label_1b511c:
    // 0x1b511c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b511cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5120: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5120u;
    SET_GPR_U32(ctx, 31, 0x1B5128u);
    ctx->pc = 0x1B5124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5120u;
    // 0x1b5124: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5120u, 0x1B5128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5128u;
label_1b5128:
    // 0x1b5128: 0x0  nop
    ctx->pc = 0x1b5128u;
    // NOP
    // 0x1b512c: 0x0  nop
    ctx->pc = 0x1b512cu;
    // NOP
    // 0x1b5130: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5130u;
    {
        const bool branch_taken_0x1b5130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5130) {
            ctx->pc = 0x1B511Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b511c;
        }
    }
    ctx->pc = 0x1B5138u;
}
