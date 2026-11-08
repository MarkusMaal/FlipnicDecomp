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

// Function: entry_001f01c4
// Address: 0x1f01c4 - 0x1f01d4
void entry_001f01c4_0x1f01c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f01c4_0x1f01c4");
#endif

    switch (ctx->pc) {
        case 0x1f01ccu: goto label_1f01cc;
        default: break;
    }

    ctx->pc = 0x1f01c4u;

    // 0x1f01c4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F01C4u;
    SET_GPR_U32(ctx, 31, 0x1F01CCu);
    ctx->pc = 0x1F01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01C4u;
    // 0x1f01c8: 0x8e64a46c  lw          $a0, -0x5B94($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F01C4u, 0x1F01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01CCu;
label_1f01cc:
    // 0x1f01cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01CCu;
    {
        const bool branch_taken_0x1f01cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01cc) {
            ctx->pc = 0x1F01DCu;
            return;
        }
    }
    ctx->pc = 0x1F01D4u;
}
