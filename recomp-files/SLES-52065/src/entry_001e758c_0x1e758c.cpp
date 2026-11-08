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

// Function: entry_001e758c
// Address: 0x1e758c - 0x1e75a0
void entry_001e758c_0x1e758c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e758c_0x1e758c");
#endif

    switch (ctx->pc) {
        case 0x1e7598u: goto label_1e7598;
        default: break;
    }

    ctx->pc = 0x1e758cu;

    // 0x1e758c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7590: 0xc079ebc  jal         func_1E7AF0
    ctx->pc = 0x1E7590u;
    SET_GPR_U32(ctx, 31, 0x1E7598u);
    ctx->pc = 0x1E7594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7590u;
    // 0x1e7594: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF0u, 0x1E7590u, 0x1E7598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7598u;
label_1e7598:
    // 0x1e7598: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E7598u;
    {
        const bool branch_taken_0x1e7598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7598u;
        // 0x1e759c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7598) {
            ctx->pc = 0x1E7670u;
            return;
        }
    }
    ctx->pc = 0x1E75A0u;
}
