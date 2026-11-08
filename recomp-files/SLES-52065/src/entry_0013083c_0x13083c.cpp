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

// Function: entry_0013083c
// Address: 0x13083c - 0x130858
void entry_0013083c_0x13083c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013083c_0x13083c");
#endif

    switch (ctx->pc) {
        case 0x130844u: goto label_130844;
        default: break;
    }

    ctx->pc = 0x13083cu;

label_13083c:
    // 0x13083c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x13083Cu;
    SET_GPR_U32(ctx, 31, 0x130844u);
    ctx->pc = 0x130840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13083Cu;
    // 0x130840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x13083Cu, 0x130844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130844u;
label_130844:
    // 0x130844: 0x0  nop
    ctx->pc = 0x130844u;
    // NOP
    // 0x130848: 0x0  nop
    ctx->pc = 0x130848u;
    // NOP
    // 0x13084c: 0x0  nop
    ctx->pc = 0x13084cu;
    // NOP
    // 0x130850: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130850u;
    {
        const bool branch_taken_0x130850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130850) {
            ctx->pc = 0x13083Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13083c;
        }
    }
    ctx->pc = 0x130858u;
}
