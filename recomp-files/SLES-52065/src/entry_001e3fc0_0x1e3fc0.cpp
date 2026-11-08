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

// Function: entry_001e3fc0
// Address: 0x1e3fc0 - 0x1e3fc8
void entry_001e3fc0_0x1e3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3fc0_0x1e3fc0");
#endif

    ctx->pc = 0x1e3fc0u;

    // 0x1e3fc0: 0xc079670  jal         func_1E59C0
    ctx->pc = 0x1E3FC0u;
    SET_GPR_U32(ctx, 31, 0x1E3FC8u);
    ctx->pc = 0x1E3FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FC0u;
    // 0x1e3fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59C0u, 0x1E3FC0u, 0x1E3FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FC8u;
}
