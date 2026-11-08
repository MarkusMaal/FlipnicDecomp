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

// Function: entry_001dcc78
// Address: 0x1dcc78 - 0x1dcc8c
void entry_001dcc78_0x1dcc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcc78_0x1dcc78");
#endif

    ctx->pc = 0x1dcc78u;

    // 0x1dcc78: 0x28e20030  slti        $v0, $a3, 0x30
    ctx->pc = 0x1dcc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dcc7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DCC7Cu;
    {
        const bool branch_taken_0x1dcc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC7Cu;
        // 0x1dcc80: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc7c) {
            ctx->pc = 0x1DCC40u;
            return;
        }
    }
    ctx->pc = 0x1DCC84u;
    // 0x1dcc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC84u;
        // 0x1dcc88: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC8Cu;
}
