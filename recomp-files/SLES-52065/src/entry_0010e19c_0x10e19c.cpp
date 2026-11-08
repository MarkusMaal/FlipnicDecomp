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

// Function: entry_0010e19c
// Address: 0x10e19c - 0x10e1b8
void entry_0010e19c_0x10e19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e19c_0x10e19c");
#endif

    switch (ctx->pc) {
        case 0x10e1a8u: goto label_10e1a8;
        default: break;
    }

    ctx->pc = 0x10e19cu;

label_10e19c:
    // 0x10e19c: 0x0  nop
    ctx->pc = 0x10e19cu;
    // NOP
    // 0x10e1a0: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x10E1A0u;
    SET_GPR_U32(ctx, 31, 0x10E1A8u);
    ctx->pc = 0x10E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1A0u;
    // 0x10e1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10E1A0u, 0x10E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1A8u;
label_10e1a8:
    // 0x10e1a8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x10e1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x10e1ac: 0x0  nop
    ctx->pc = 0x10e1acu;
    // NOP
    // 0x10e1b0: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10E1B0u;
    {
        const bool branch_taken_0x10e1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1b0) {
            ctx->pc = 0x10E19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e19c;
        }
    }
    ctx->pc = 0x10E1B8u;
}
