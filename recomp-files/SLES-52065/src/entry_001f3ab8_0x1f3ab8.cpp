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

// Function: entry_001f3ab8
// Address: 0x1f3ab8 - 0x1f3ac4
void entry_001f3ab8_0x1f3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ab8_0x1f3ab8");
#endif

    ctx->pc = 0x1f3ab8u;

    // 0x1f3ab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3abc: 0xc07ce0a  jal         func_1F3828
    ctx->pc = 0x1F3ABCu;
    SET_GPR_U32(ctx, 31, 0x1F3AC4u);
    ctx->pc = 0x1F3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3ABCu;
    // 0x1f3ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3828u, 0x1F3ABCu, 0x1F3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AC4u;
}
