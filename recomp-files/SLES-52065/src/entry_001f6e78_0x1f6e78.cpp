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

// Function: entry_001f6e78
// Address: 0x1f6e78 - 0x1f6e8c
void entry_001f6e78_0x1f6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e78_0x1f6e78");
#endif

    ctx->pc = 0x1f6e78u;

    // 0x1f6e78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6E78u;
    {
        const bool branch_taken_0x1f6e78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E78u;
        // 0x1f6e7c: 0x26844660  addiu       $a0, $s4, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 18016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e78) {
            ctx->pc = 0x1F6E8Cu;
            return;
        }
    }
    ctx->pc = 0x1F6E80u;
    // 0x1f6e80: 0x8e251340  lw          $a1, 0x1340($s1)
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x1f6e84: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F6E84u;
    SET_GPR_U32(ctx, 31, 0x1F6E8Cu);
    ctx->pc = 0x1F6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E84u;
    // 0x1f6e88: 0x8e06bb68  lw          $a2, -0x4498($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F6E84u, 0x1F6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E8Cu;
}
