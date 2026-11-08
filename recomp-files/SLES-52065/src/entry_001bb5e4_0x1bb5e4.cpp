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

// Function: entry_001bb5e4
// Address: 0x1bb5e4 - 0x1bb5f4
void entry_001bb5e4_0x1bb5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb5e4_0x1bb5e4");
#endif

    ctx->pc = 0x1bb5e4u;

    // 0x1bb5e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5E4u;
    {
        const bool branch_taken_0x1bb5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5E4u;
        // 0x1bb5e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5e4) {
            ctx->pc = 0x1BB5F4u;
            return;
        }
    }
    ctx->pc = 0x1BB5ECu;
    // 0x1bb5ec: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BB5ECu;
    SET_GPR_U32(ctx, 31, 0x1BB5F4u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BB5ECu, 0x1BB5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5F4u;
}
