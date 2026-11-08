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

// Function: entry_0014cb30
// Address: 0x14cb30 - 0x14cb48
void entry_0014cb30_0x14cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb30_0x14cb30");
#endif

    ctx->pc = 0x14cb30u;

    // 0x14cb30: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cb34: 0x8c4402bc  lw          $a0, 0x2BC($v0)
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
    // 0x14cb38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB38u;
    {
        const bool branch_taken_0x14cb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb38) {
            ctx->pc = 0x14CB48u;
            return;
        }
    }
    ctx->pc = 0x14CB40u;
    // 0x14cb40: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x14CB40u;
    SET_GPR_U32(ctx, 31, 0x14CB48u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x14CB40u, 0x14CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB48u;
}
