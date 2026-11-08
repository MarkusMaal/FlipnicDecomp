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

// Function: entry_00122804
// Address: 0x122804 - 0x122814
void entry_00122804_0x122804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122804_0x122804");
#endif

    ctx->pc = 0x122804u;

    // 0x122804: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122804u;
    {
        const bool branch_taken_0x122804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122804u;
        // 0x122808: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122804) {
            ctx->pc = 0x122814u;
            return;
        }
    }
    ctx->pc = 0x12280Cu;
    // 0x12280c: 0xc04619c  jal         func_118670
    ctx->pc = 0x12280Cu;
    SET_GPR_U32(ctx, 31, 0x122814u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x12280Cu, 0x122814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122814u;
}
