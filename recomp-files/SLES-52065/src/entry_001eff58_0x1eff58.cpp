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

// Function: entry_001eff58
// Address: 0x1eff58 - 0x1eff68
void entry_001eff58_0x1eff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff58_0x1eff58");
#endif

    switch (ctx->pc) {
        case 0x1eff60u: goto label_1eff60;
        default: break;
    }

    ctx->pc = 0x1eff58u;

    // 0x1eff58: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EFF58u;
    SET_GPR_U32(ctx, 31, 0x1EFF60u);
    ctx->pc = 0x1EFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF58u;
    // 0x1eff5c: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EFF58u, 0x1EFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF60u;
label_1eff60:
    // 0x1eff60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFF60u;
    {
        const bool branch_taken_0x1eff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF60u;
        // 0x1eff64: 0x3c152000  lui         $s5, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff60) {
            ctx->pc = 0x1EFF70u;
            return;
        }
    }
    ctx->pc = 0x1EFF68u;
}
