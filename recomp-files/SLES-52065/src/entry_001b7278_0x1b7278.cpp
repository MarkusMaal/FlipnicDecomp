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

// Function: entry_001b7278
// Address: 0x1b7278 - 0x1b728c
void entry_001b7278_0x1b7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7278_0x1b7278");
#endif

    switch (ctx->pc) {
        case 0x1b7284u: goto label_1b7284;
        default: break;
    }

    ctx->pc = 0x1b7278u;

    // 0x1b7278: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x1b7278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1b727c: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B727Cu;
    SET_GPR_U32(ctx, 31, 0x1B7284u);
    ctx->pc = 0x1B7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B727Cu;
    // 0x1b7280: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B727Cu, 0x1B7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7284u;
label_1b7284:
    // 0x1b7284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7284u;
    {
        const bool branch_taken_0x1b7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7284) {
            ctx->pc = 0x1B72A8u;
            return;
        }
    }
    ctx->pc = 0x1B728Cu;
}
