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

// Function: entry_001fbf7c
// Address: 0x1fbf7c - 0x1fbf88
void entry_001fbf7c_0x1fbf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbf7c_0x1fbf7c");
#endif

    ctx->pc = 0x1fbf7cu;

    // 0x1fbf7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf80: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1FBF80u;
    SET_GPR_U32(ctx, 31, 0x1FBF88u);
    ctx->pc = 0x1FBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF80u;
    // 0x1fbf84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1FBF80u, 0x1FBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF88u;
}
