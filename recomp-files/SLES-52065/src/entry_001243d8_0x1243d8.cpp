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

// Function: entry_001243d8
// Address: 0x1243d8 - 0x1243e8
void entry_001243d8_0x1243d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001243d8_0x1243d8");
#endif

    switch (ctx->pc) {
        case 0x1243e4u: goto label_1243e4;
        default: break;
    }

    ctx->pc = 0x1243d8u;

    // 0x1243d8: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x1243d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1243dc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1243DCu;
    SET_GPR_U32(ctx, 31, 0x1243E4u);
    ctx->pc = 0x1243E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1243DCu;
    // 0x1243e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1243DCu, 0x1243E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243E4u;
label_1243e4:
    // 0x1243e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1243e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1243e8u;
}
