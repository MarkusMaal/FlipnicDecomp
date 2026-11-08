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

// Function: entry_001b5228
// Address: 0x1b5228 - 0x1b5244
void entry_001b5228_0x1b5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5228_0x1b5228");
#endif

    switch (ctx->pc) {
        case 0x1b5234u: goto label_1b5234;
        default: break;
    }

    ctx->pc = 0x1b5228u;

label_1b5228:
    // 0x1b5228: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b522c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B522Cu;
    SET_GPR_U32(ctx, 31, 0x1B5234u);
    ctx->pc = 0x1B5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B522Cu;
    // 0x1b5230: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B522Cu, 0x1B5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5234u;
label_1b5234:
    // 0x1b5234: 0x0  nop
    ctx->pc = 0x1b5234u;
    // NOP
    // 0x1b5238: 0x0  nop
    ctx->pc = 0x1b5238u;
    // NOP
    // 0x1b523c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B523Cu;
    {
        const bool branch_taken_0x1b523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b523c) {
            ctx->pc = 0x1B5228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5228;
        }
    }
    ctx->pc = 0x1B5244u;
}
