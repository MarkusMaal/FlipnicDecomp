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

// Function: entry_001ae7a8
// Address: 0x1ae7a8 - 0x1ae7b0
void entry_001ae7a8_0x1ae7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae7a8_0x1ae7a8");
#endif

    ctx->pc = 0x1ae7a8u;

    // 0x1ae7a8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE7A8u;
    SET_GPR_U32(ctx, 31, 0x1AE7B0u);
    ctx->pc = 0x1AE7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7A8u;
    // 0x1ae7ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE7A8u, 0x1AE7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7B0u;
}
