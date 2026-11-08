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

// Function: entry_0019f6e0
// Address: 0x19f6e0 - 0x19f700
void entry_0019f6e0_0x19f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6e0_0x19f6e0");
#endif

    switch (ctx->pc) {
        case 0x19f6f8u: goto label_19f6f8;
        default: break;
    }

    ctx->pc = 0x19f6e0u;

    // 0x19f6e0: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x19f6e4: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x19f6e8: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x19F6E8u;
    {
        const bool branch_taken_0x19f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6e8) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F6F0u;
    // 0x19f6f0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19F6F0u;
    SET_GPR_U32(ctx, 31, 0x19F6F8u);
    ctx->pc = 0x19F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6F0u;
    // 0x19f6f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F6F0u, 0x19F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6F8u;
label_19f6f8:
    // 0x19f6f8: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x19F6F8u;
    {
        const bool branch_taken_0x19f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6f8) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F700u;
}
