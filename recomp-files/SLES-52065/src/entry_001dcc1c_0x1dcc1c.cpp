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

// Function: entry_001dcc1c
// Address: 0x1dcc1c - 0x1dcc30
void entry_001dcc1c_0x1dcc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcc1c_0x1dcc1c");
#endif

    ctx->pc = 0x1dcc1cu;

    // 0x1dcc1c: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x1dcc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dcc20: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DCC20u;
    {
        const bool branch_taken_0x1dcc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC20u;
        // 0x1dcc24: 0x24c600e8  addiu       $a2, $a2, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc20) {
            ctx->pc = 0x1DCBF0u;
            return;
        }
    }
    ctx->pc = 0x1DCC28u;
    // 0x1dcc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC28u;
        // 0x1dcc2c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC30u;
}
