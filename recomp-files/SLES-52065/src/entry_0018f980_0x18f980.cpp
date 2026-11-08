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

// Function: entry_0018f980
// Address: 0x18f980 - 0x18f99c
void entry_0018f980_0x18f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f980_0x18f980");
#endif

    switch (ctx->pc) {
        case 0x18f994u: goto label_18f994;
        default: break;
    }

    ctx->pc = 0x18f980u;

label_18f980:
    // 0x18f980: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x18f980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_18f984:
    // 0x18f984: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18f988:
    // 0x18f988: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_18f98c:
    // 0x18f98c: 0x40f809  jalr        $v0
label_18f990:
    if (ctx->pc == 0x18F990u) {
        ctx->pc = 0x18F994u;
        goto label_18f994;
    }
    ctx->pc = 0x18F98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F98Cu, 0x18F994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F994u;
label_18f994:
    // 0x18f994: 0x10000006  b           . + 4 + (0x6 << 2)
label_18f998:
    if (ctx->pc == 0x18F998u) {
        ctx->pc = 0x18F99Cu;
        goto label_fallthrough_0x18f994;
    }
    ctx->pc = 0x18F994u;
    {
        const bool branch_taken_0x18f994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f994) {
            ctx->pc = 0x18F9B0u;
            return;
        }
    }
label_fallthrough_0x18f994:
    ctx->pc = 0x18F99Cu;
}
