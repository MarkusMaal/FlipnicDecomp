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

// Function: entry_001b63a4
// Address: 0x1b63a4 - 0x1b63b4
void entry_001b63a4_0x1b63a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b63a4_0x1b63a4");
#endif

    ctx->pc = 0x1b63a4u;

label_1b63a4:
    // 0x1b63a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b63a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b63a8:
    // 0x1b63a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b63a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b63ac:
    // 0x1b63ac: 0x320f809  jalr        $t9
label_1b63b0:
    if (ctx->pc == 0x1B63B0u) {
        ctx->pc = 0x1B63B4u;
        goto label_fallthrough_0x1b63ac;
    }
    ctx->pc = 0x1B63ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B63B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B63ACu, 0x1B63B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b63ac:
    ctx->pc = 0x1B63B4u;
}
