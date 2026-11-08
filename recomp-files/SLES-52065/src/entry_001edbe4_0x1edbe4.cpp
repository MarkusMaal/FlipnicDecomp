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

// Function: entry_001edbe4
// Address: 0x1edbe4 - 0x1edbec
void entry_001edbe4_0x1edbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edbe4_0x1edbe4");
#endif

    ctx->pc = 0x1edbe4u;

    // 0x1edbe4: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x1EDBE4u;
    SET_GPR_U32(ctx, 31, 0x1EDBECu);
    ctx->pc = 0x1EDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDBE4u;
    // 0x1edbe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1EDBE4u, 0x1EDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBECu;
}
