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

// Function: caseD_1a
// Address: 0x1d1c34 - 0x1d1c50
void caseD_1a_0x1d1c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x1d1c34");
#endif

    switch (ctx->pc) {
        case 0x1d1c48u: goto label_1d1c48;
        default: break;
    }

    ctx->pc = 0x1d1c34u;

    // 0x1d1c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c40: 0xc074b00  jal         func_1D2C00
    ctx->pc = 0x1D1C40u;
    SET_GPR_U32(ctx, 31, 0x1D1C48u);
    ctx->pc = 0x1D1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C40u;
    // 0x1d1c44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C00u, 0x1D1C40u, 0x1D1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C48u;
label_1d1c48:
    // 0x1d1c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1C48u;
    {
        const bool branch_taken_0x1d1c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c48) {
            ctx->pc = 0x1D1C60u;
            return;
        }
    }
    ctx->pc = 0x1D1C50u;
}
