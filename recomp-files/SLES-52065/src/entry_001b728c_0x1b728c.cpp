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

// Function: entry_001b728c
// Address: 0x1b728c - 0x1b729c
void entry_001b728c_0x1b728c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b728c_0x1b728c");
#endif

    switch (ctx->pc) {
        case 0x1b7294u: goto label_1b7294;
        default: break;
    }

    ctx->pc = 0x1b728cu;

    // 0x1b728c: 0xc06d8c4  jal         func_1B6310
    ctx->pc = 0x1B728Cu;
    SET_GPR_U32(ctx, 31, 0x1B7294u);
    ctx->pc = 0x1B7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B728Cu;
    // 0x1b7290: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6310u, 0x1B728Cu, 0x1B7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7294u;
label_1b7294:
    // 0x1b7294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7294u;
    {
        const bool branch_taken_0x1b7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7294) {
            ctx->pc = 0x1B72A8u;
            return;
        }
    }
    ctx->pc = 0x1B729Cu;
}
