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

// Function: entry_001a4794
// Address: 0x1a4794 - 0x1a47a8
void entry_001a4794_0x1a4794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4794_0x1a4794");
#endif

    switch (ctx->pc) {
        case 0x1a47a0u: goto label_1a47a0;
        default: break;
    }

    ctx->pc = 0x1a4794u;

    // 0x1a4794: 0x0  nop
    ctx->pc = 0x1a4794u;
    // NOP
    // 0x1a4798: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A4798u;
    SET_GPR_U32(ctx, 31, 0x1A47A0u);
    ctx->pc = 0x1A479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4798u;
    // 0x1a479c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A4798u, 0x1A47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47A0u;
label_1a47a0:
    // 0x1a47a0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A47A0u;
    {
        const bool branch_taken_0x1a47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47a0) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A47A8u;
}
