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

// Function: entry_001f8bb0
// Address: 0x1f8bb0 - 0x1f8bb8
void entry_001f8bb0_0x1f8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bb0_0x1f8bb0");
#endif

    ctx->pc = 0x1f8bb0u;

    // 0x1f8bb0: 0xc07e2c0  jal         func_1F8B00
    ctx->pc = 0x1F8BB0u;
    SET_GPR_U32(ctx, 31, 0x1F8BB8u);
    ctx->pc = 0x1F8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BB0u;
    // 0x1f8bb4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B00u, 0x1F8BB0u, 0x1F8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BB8u;
}
