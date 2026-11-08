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

// Function: entry_00165a00
// Address: 0x165a00 - 0x165a08
void entry_00165a00_0x165a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a00_0x165a00");
#endif

    ctx->pc = 0x165a00u;

    // 0x165a00: 0xc059990  jal         func_166640
    ctx->pc = 0x165A00u;
    SET_GPR_U32(ctx, 31, 0x165A08u);
    ctx->pc = 0x165A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A00u;
    // 0x165a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x165A00u, 0x165A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A08u;
}
