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

// Function: entry_001e50a0
// Address: 0x1e50a0 - 0x1e50a8
void entry_001e50a0_0x1e50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e50a0_0x1e50a0");
#endif

    ctx->pc = 0x1e50a0u;

    // 0x1e50a0: 0xc079878  jal         func_1E61E0
    ctx->pc = 0x1E50A0u;
    SET_GPR_U32(ctx, 31, 0x1E50A8u);
    ctx->pc = 0x1E50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50A0u;
    // 0x1e50a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E61E0u, 0x1E50A0u, 0x1E50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50A8u;
}
