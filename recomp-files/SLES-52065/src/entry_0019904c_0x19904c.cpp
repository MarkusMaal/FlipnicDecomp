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

// Function: entry_0019904c
// Address: 0x19904c - 0x199060
void entry_0019904c_0x19904c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019904c_0x19904c");
#endif

    ctx->pc = 0x19904cu;

    // 0x19904c: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x199050: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199050u;
    {
        const bool branch_taken_0x199050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199050) {
            ctx->pc = 0x199060u;
            return;
        }
    }
    ctx->pc = 0x199058u;
    // 0x199058: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x199058u;
    SET_GPR_U32(ctx, 31, 0x199060u);
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199058u, 0x199060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199060u;
}
