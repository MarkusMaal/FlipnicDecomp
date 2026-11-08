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

// Function: entry_001c34a0
// Address: 0x1c34a0 - 0x1c34b0
void entry_001c34a0_0x1c34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34a0_0x1c34a0");
#endif

    switch (ctx->pc) {
        case 0x1c34a8u: goto label_1c34a8;
        default: break;
    }

    ctx->pc = 0x1c34a0u;

    // 0x1c34a0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C34A0u;
    SET_GPR_U32(ctx, 31, 0x1C34A8u);
    ctx->pc = 0x1C34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34A0u;
    // 0x1c34a4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C34A0u, 0x1C34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34A8u;
label_1c34a8:
    // 0x1c34a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C34A8u;
    {
        const bool branch_taken_0x1c34a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34a8) {
            ctx->pc = 0x1C34F0u;
            return;
        }
    }
    ctx->pc = 0x1C34B0u;
}
