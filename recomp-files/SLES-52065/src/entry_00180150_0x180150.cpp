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

// Function: entry_00180150
// Address: 0x180150 - 0x180158
void entry_00180150_0x180150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180150_0x180150");
#endif

    ctx->pc = 0x180150u;

    // 0x180150: 0xc0401a4  jal         func_100690
    ctx->pc = 0x180150u;
    SET_GPR_U32(ctx, 31, 0x180158u);
    ctx->pc = 0x180154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180150u;
    // 0x180154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x180150u, 0x180158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180158u;
}
