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

// Function: entry_0012d018
// Address: 0x12d018 - 0x12d028
void entry_0012d018_0x12d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d018_0x12d018");
#endif

    switch (ctx->pc) {
        case 0x12d020u: goto label_12d020;
        default: break;
    }

    ctx->pc = 0x12d018u;

    // 0x12d018: 0xc04b44c  jal         func_12D130
    ctx->pc = 0x12D018u;
    SET_GPR_U32(ctx, 31, 0x12D020u);
    ctx->pc = 0x12D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D018u;
    // 0x12d01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D130u, 0x12D018u, 0x12D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D020u;
label_12d020:
    // 0x12d020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12D020u;
    {
        const bool branch_taken_0x12d020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d020) {
            ctx->pc = 0x12D03Cu;
            return;
        }
    }
    ctx->pc = 0x12D028u;
}
