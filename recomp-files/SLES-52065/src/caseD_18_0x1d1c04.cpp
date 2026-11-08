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

// Function: caseD_18
// Address: 0x1d1c04 - 0x1d1c18
void caseD_18_0x1d1c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x1d1c04");
#endif

    switch (ctx->pc) {
        case 0x1d1c10u: goto label_1d1c10;
        default: break;
    }

    ctx->pc = 0x1d1c04u;

    // 0x1d1c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c08: 0xc0748dc  jal         func_1D2370
    ctx->pc = 0x1D1C08u;
    SET_GPR_U32(ctx, 31, 0x1D1C10u);
    ctx->pc = 0x1D1C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C08u;
    // 0x1d1c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2370u, 0x1D1C08u, 0x1D1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C10u;
label_1d1c10:
    // 0x1d1c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1C10u;
    {
        const bool branch_taken_0x1d1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c10) {
            ctx->pc = 0x1D1C60u;
            return;
        }
    }
    ctx->pc = 0x1D1C18u;
}
