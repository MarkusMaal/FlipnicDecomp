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

// Function: entry_001cd58c
// Address: 0x1cd58c - 0x1cd5ac
void entry_001cd58c_0x1cd58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd58c_0x1cd58c");
#endif

    switch (ctx->pc) {
        case 0x1cd5a4u: goto label_1cd5a4;
        default: break;
    }

    ctx->pc = 0x1cd58cu;

    // 0x1cd58c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cd590: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x1cd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd594: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD594u;
    {
        const bool branch_taken_0x1cd594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cd594) {
            ctx->pc = 0x1CD5ACu;
            return;
        }
    }
    ctx->pc = 0x1CD59Cu;
    // 0x1cd59c: 0xc07354c  jal         func_1CD530
    ctx->pc = 0x1CD59Cu;
    SET_GPR_U32(ctx, 31, 0x1CD5A4u);
    ctx->pc = 0x1CD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD530u, 0x1CD59Cu, 0x1CD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5A4u;
label_1cd5a4:
    // 0x1cd5a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD5A4u;
    {
        const bool branch_taken_0x1cd5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5a4) {
            ctx->pc = 0x1CD5C0u;
            return;
        }
    }
    ctx->pc = 0x1CD5ACu;
}
