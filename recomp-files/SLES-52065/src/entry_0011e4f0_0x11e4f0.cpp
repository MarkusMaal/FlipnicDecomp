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

// Function: entry_0011e4f0
// Address: 0x11e4f0 - 0x11e504
void entry_0011e4f0_0x11e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e4f0_0x11e4f0");
#endif

    switch (ctx->pc) {
        case 0x11e500u: goto label_11e500;
        default: break;
    }

    ctx->pc = 0x11e4f0u;

    // 0x11e4f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E4F0u;
    {
        const bool branch_taken_0x11e4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F0u;
        // 0x11e4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4f0) {
            ctx->pc = 0x11E504u;
            return;
        }
    }
    ctx->pc = 0x11E4F8u;
    // 0x11e4f8: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11E4F8u;
    SET_GPR_U32(ctx, 31, 0x11E500u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11E4F8u, 0x11E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E500u;
label_11e500:
    // 0x11e500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11e504u;
}
