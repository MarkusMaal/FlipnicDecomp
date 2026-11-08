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

// Function: entry_001b5ed8
// Address: 0x1b5ed8 - 0x1b5ee0
void entry_001b5ed8_0x1b5ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ed8_0x1b5ed8");
#endif

    ctx->pc = 0x1b5ed8u;

    // 0x1b5ed8: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B5ED8u;
    SET_GPR_U32(ctx, 31, 0x1B5EE0u);
    ctx->pc = 0x1B5EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5ED8u;
    // 0x1b5edc: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B5ED8u, 0x1B5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EE0u;
}
