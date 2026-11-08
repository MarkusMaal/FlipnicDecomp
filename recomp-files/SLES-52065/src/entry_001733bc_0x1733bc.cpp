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

// Function: entry_001733bc
// Address: 0x1733bc - 0x1733d8
void entry_001733bc_0x1733bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001733bc_0x1733bc");
#endif

    ctx->pc = 0x1733bcu;

    // 0x1733bc: 0x0  nop
    ctx->pc = 0x1733bcu;
    // NOP
    // 0x1733c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1733c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1733c4: 0x28e30040  slti        $v1, $a3, 0x40
    ctx->pc = 0x1733c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1733c8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1733C8u;
    {
        const bool branch_taken_0x1733c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733C8u;
        // 0x1733cc: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733c8) {
            ctx->pc = 0x173370u;
            return;
        }
    }
    ctx->pc = 0x1733D0u;
    // 0x1733d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1733D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1733D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1733D8u;
}
