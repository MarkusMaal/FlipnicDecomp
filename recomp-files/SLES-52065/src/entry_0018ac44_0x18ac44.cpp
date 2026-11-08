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

// Function: entry_0018ac44
// Address: 0x18ac44 - 0x18ac58
void entry_0018ac44_0x18ac44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac44_0x18ac44");
#endif

    switch (ctx->pc) {
        case 0x18ac54u: goto label_18ac54;
        default: break;
    }

    ctx->pc = 0x18ac44u;

    // 0x18ac44: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AC44u;
    {
        const bool branch_taken_0x18ac44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC44u;
        // 0x18ac48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac44) {
            ctx->pc = 0x18AC58u;
            return;
        }
    }
    ctx->pc = 0x18AC4Cu;
    // 0x18ac4c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x18AC4Cu;
    SET_GPR_U32(ctx, 31, 0x18AC54u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x18AC4Cu, 0x18AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC54u;
label_18ac54:
    // 0x18ac54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18ac58u;
}
