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

// Function: entry_001b61f8
// Address: 0x1b61f8 - 0x1b6214
void entry_001b61f8_0x1b61f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b61f8_0x1b61f8");
#endif

    switch (ctx->pc) {
        case 0x1b6208u: goto label_1b6208;
        default: break;
    }

    ctx->pc = 0x1b61f8u;

label_1b61f8:
    // 0x1b61f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b61f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b61fc:
    // 0x1b61fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b61fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b6200:
    // 0x1b6200: 0x320f809  jalr        $t9
label_1b6204:
    if (ctx->pc == 0x1B6204u) {
        ctx->pc = 0x1B6208u;
        goto label_1b6208;
    }
    ctx->pc = 0x1B6200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6208u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6200u, 0x1B6208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6208u;
label_1b6208:
    // 0x1b6208: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b620c:
    if (ctx->pc == 0x1B620Cu) {
        ctx->pc = 0x1B6210u;
        goto label_1b6210;
    }
    ctx->pc = 0x1B6208u;
    {
        const bool branch_taken_0x1b6208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6208) {
            ctx->pc = 0x1B621Cu;
            return;
        }
    }
    ctx->pc = 0x1B6210u;
label_1b6210:
    // 0x1b6210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6214u;
}
