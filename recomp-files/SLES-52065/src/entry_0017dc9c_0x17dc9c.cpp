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

// Function: entry_0017dc9c
// Address: 0x17dc9c - 0x17dca8
void entry_0017dc9c_0x17dc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc9c_0x17dc9c");
#endif

    switch (ctx->pc) {
        case 0x17dca4u: goto label_17dca4;
        default: break;
    }

    ctx->pc = 0x17dc9cu;

    // 0x17dc9c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17DC9Cu;
    SET_GPR_U32(ctx, 31, 0x17DCA4u);
    ctx->pc = 0x17DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC9Cu;
    // 0x17dca0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17DC9Cu, 0x17DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCA4u;
label_17dca4:
    // 0x17dca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17dca8u;
}
