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

// Function: entry_001f10f0
// Address: 0x1f10f0 - 0x1f1100
void entry_001f10f0_0x1f10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f10f0_0x1f10f0");
#endif

    switch (ctx->pc) {
        case 0x1f10f8u: goto label_1f10f8;
        default: break;
    }

    ctx->pc = 0x1f10f0u;

    // 0x1f10f0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F10F0u;
    SET_GPR_U32(ctx, 31, 0x1F10F8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F10F0u, 0x1F10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10F8u;
label_1f10f8:
    // 0x1f10f8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F10F8u;
    {
        const bool branch_taken_0x1f10f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10F8u;
        // 0x1f10fc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10f8) {
            ctx->pc = 0x1F11D0u;
            return;
        }
    }
    ctx->pc = 0x1F1100u;
}
