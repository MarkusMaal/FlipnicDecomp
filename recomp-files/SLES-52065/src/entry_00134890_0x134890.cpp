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

// Function: entry_00134890
// Address: 0x134890 - 0x1348a0
void entry_00134890_0x134890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134890_0x134890");
#endif

    ctx->pc = 0x134890u;

    // 0x134890: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x134890u;
    {
        const bool branch_taken_0x134890 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x134894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134890u;
        // 0x134894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134890) {
            ctx->pc = 0x1348A0u;
            return;
        }
    }
    ctx->pc = 0x134898u;
    // 0x134898: 0xc053ed4  jal         func_14FB50
    ctx->pc = 0x134898u;
    SET_GPR_U32(ctx, 31, 0x1348A0u);
    ctx->pc = 0x14FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB50u, 0x134898u, 0x1348A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348A0u;
}
