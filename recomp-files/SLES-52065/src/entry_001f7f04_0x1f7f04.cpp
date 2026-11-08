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

// Function: entry_001f7f04
// Address: 0x1f7f04 - 0x1f7f14
void entry_001f7f04_0x1f7f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7f04_0x1f7f04");
#endif

    ctx->pc = 0x1f7f04u;

    // 0x1f7f04: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7F04u;
    {
        const bool branch_taken_0x1f7f04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f04) {
            ctx->pc = 0x1F7F14u;
            return;
        }
    }
    ctx->pc = 0x1F7F0Cu;
    // 0x1f7f0c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F7F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F7F14u);
    ctx->pc = 0x1F7F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F0Cu;
    // 0x1f7f10: 0x24844800  addiu       $a0, $a0, 0x4800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F7F0Cu, 0x1F7F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F14u;
}
