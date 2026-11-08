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

// Function: entry_001e8650
// Address: 0x1e8650 - 0x1e8668
void entry_001e8650_0x1e8650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8650_0x1e8650");
#endif

    ctx->pc = 0x1e8650u;

    // 0x1e8650: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e8650u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e8654: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e8654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8658: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8658u;
    {
        const bool branch_taken_0x1e8658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8658) {
            ctx->pc = 0x1E8668u;
            return;
        }
    }
    ctx->pc = 0x1E8660u;
    // 0x1e8660: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E8660u;
    SET_GPR_U32(ctx, 31, 0x1E8668u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E8660u, 0x1E8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8668u;
}
