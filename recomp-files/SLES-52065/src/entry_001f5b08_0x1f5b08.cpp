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

// Function: entry_001f5b08
// Address: 0x1f5b08 - 0x1f5b10
void entry_001f5b08_0x1f5b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5b08_0x1f5b08");
#endif

    ctx->pc = 0x1f5b08u;

    // 0x1f5b08: 0xc07d6ca  jal         func_1F5B28
    ctx->pc = 0x1F5B08u;
    SET_GPR_U32(ctx, 31, 0x1F5B10u);
    ctx->pc = 0x1F5B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B08u;
    // 0x1f5b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5B28u, 0x1F5B08u, 0x1F5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B10u;
}
