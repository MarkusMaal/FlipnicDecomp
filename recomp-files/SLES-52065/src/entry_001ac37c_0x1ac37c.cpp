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

// Function: entry_001ac37c
// Address: 0x1ac37c - 0x1ac384
void entry_001ac37c_0x1ac37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac37c_0x1ac37c");
#endif

    ctx->pc = 0x1ac37cu;

    // 0x1ac37c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AC37Cu;
    SET_GPR_U32(ctx, 31, 0x1AC384u);
    ctx->pc = 0x1AC380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC37Cu;
    // 0x1ac380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC37Cu, 0x1AC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC384u;
}
