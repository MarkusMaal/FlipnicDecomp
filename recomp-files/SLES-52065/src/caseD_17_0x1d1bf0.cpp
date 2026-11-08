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

// Function: caseD_17
// Address: 0x1d1bf0 - 0x1d1c04
void caseD_17_0x1d1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x1d1bf0");
#endif

    switch (ctx->pc) {
        case 0x1d1bfcu: goto label_1d1bfc;
        default: break;
    }

    ctx->pc = 0x1d1bf0u;

    // 0x1d1bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf4: 0xc074800  jal         func_1D2000
    ctx->pc = 0x1D1BF4u;
    SET_GPR_U32(ctx, 31, 0x1D1BFCu);
    ctx->pc = 0x1D1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF4u;
    // 0x1d1bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2000u, 0x1D1BF4u, 0x1D1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D1BFCu;
    {
        const bool branch_taken_0x1d1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bfc) {
            ctx->pc = 0x1D1C60u;
            return;
        }
    }
    ctx->pc = 0x1D1C04u;
}
