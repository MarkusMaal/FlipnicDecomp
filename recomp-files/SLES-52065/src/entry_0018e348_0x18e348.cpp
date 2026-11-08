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

// Function: entry_0018e348
// Address: 0x18e348 - 0x18e350
void entry_0018e348_0x18e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e348_0x18e348");
#endif

    ctx->pc = 0x18e348u;

    // 0x18e348: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x18E348u;
    SET_GPR_U32(ctx, 31, 0x18E350u);
    ctx->pc = 0x18E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E348u;
    // 0x18e34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x18E348u, 0x18E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E350u;
}
