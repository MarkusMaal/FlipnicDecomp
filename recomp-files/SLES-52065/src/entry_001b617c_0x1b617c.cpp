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

// Function: entry_001b617c
// Address: 0x1b617c - 0x1b618c
void entry_001b617c_0x1b617c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b617c_0x1b617c");
#endif

    ctx->pc = 0x1b617cu;

label_1b617c:
    // 0x1b617c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b6180:
    // 0x1b6180: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1b6180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1b6184:
    // 0x1b6184: 0x320f809  jalr        $t9
label_1b6188:
    if (ctx->pc == 0x1B6188u) {
        ctx->pc = 0x1B618Cu;
        goto label_fallthrough_0x1b6184;
    }
    ctx->pc = 0x1B6184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B618Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6184u, 0x1B618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b6184:
    ctx->pc = 0x1B618Cu;
}
