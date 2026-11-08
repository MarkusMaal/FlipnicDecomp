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

// Function: entry_00179b4c
// Address: 0x179b4c - 0x179b64
void entry_00179b4c_0x179b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b4c_0x179b4c");
#endif

    ctx->pc = 0x179b4cu;

    // 0x179b4c: 0x0  nop
    ctx->pc = 0x179b4cu;
    // NOP
    // 0x179b50: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x179b50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179b54: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x179B54u;
    {
        const bool branch_taken_0x179b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B54u;
        // 0x179b58: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b54) {
            ctx->pc = 0x179B14u;
            return;
        }
    }
    ctx->pc = 0x179B5Cu;
    // 0x179b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x179B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179B64u;
}
