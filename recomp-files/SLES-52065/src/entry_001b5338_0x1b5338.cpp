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

// Function: entry_001b5338
// Address: 0x1b5338 - 0x1b5354
void entry_001b5338_0x1b5338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5338_0x1b5338");
#endif

    switch (ctx->pc) {
        case 0x1b5344u: goto label_1b5344;
        default: break;
    }

    ctx->pc = 0x1b5338u;

label_1b5338:
    // 0x1b5338: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b533c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B533Cu;
    SET_GPR_U32(ctx, 31, 0x1B5344u);
    ctx->pc = 0x1B5340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B533Cu;
    // 0x1b5340: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B533Cu, 0x1B5344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5344u;
label_1b5344:
    // 0x1b5344: 0x0  nop
    ctx->pc = 0x1b5344u;
    // NOP
    // 0x1b5348: 0x0  nop
    ctx->pc = 0x1b5348u;
    // NOP
    // 0x1b534c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B534Cu;
    {
        const bool branch_taken_0x1b534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b534c) {
            ctx->pc = 0x1B5338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5338;
        }
    }
    ctx->pc = 0x1B5354u;
}
