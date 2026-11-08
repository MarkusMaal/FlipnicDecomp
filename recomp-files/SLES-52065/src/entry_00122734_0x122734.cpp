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

// Function: entry_00122734
// Address: 0x122734 - 0x12273c
void entry_00122734_0x122734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122734_0x122734");
#endif

    ctx->pc = 0x122734u;

    // 0x122734: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122734u;
    SET_GPR_U32(ctx, 31, 0x12273Cu);
    ctx->pc = 0x122738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122734u;
    // 0x122738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122734u, 0x12273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12273Cu;
}
