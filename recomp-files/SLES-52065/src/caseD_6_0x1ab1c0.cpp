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

// Function: caseD_6
// Address: 0x1ab1c0 - 0x1ab1d0
void caseD_6_0x1ab1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ab1c0");
#endif

    switch (ctx->pc) {
        case 0x1ab1c8u: goto label_1ab1c8;
        default: break;
    }

    ctx->pc = 0x1ab1c0u;

    // 0x1ab1c0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AB1C0u;
    SET_GPR_U32(ctx, 31, 0x1AB1C8u);
    ctx->pc = 0x1AB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1C0u;
    // 0x1ab1c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AB1C0u, 0x1AB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1C8u;
label_1ab1c8:
    // 0x1ab1c8: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x1AB1C8u;
    {
        const bool branch_taken_0x1ab1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab1c8) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB1D0u;
}
