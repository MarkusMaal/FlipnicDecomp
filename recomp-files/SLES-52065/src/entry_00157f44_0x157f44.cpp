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

// Function: entry_00157f44
// Address: 0x157f44 - 0x157f5c
void entry_00157f44_0x157f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f44_0x157f44");
#endif

    ctx->pc = 0x157f44u;

    // 0x157f44: 0x0  nop
    ctx->pc = 0x157f44u;
    // NOP
    // 0x157f48: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x157f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x157f4c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x157F4Cu;
    {
        const bool branch_taken_0x157f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F4Cu;
        // 0x157f50: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f4c) {
            ctx->pc = 0x157F2Cu;
            return;
        }
    }
    ctx->pc = 0x157F54u;
    // 0x157f54: 0x3e00008  jr          $ra
    ctx->pc = 0x157F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157F5Cu;
}
