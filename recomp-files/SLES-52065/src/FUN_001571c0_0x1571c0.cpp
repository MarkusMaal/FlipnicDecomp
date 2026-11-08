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

// Function: FUN_001571c0
// Address: 0x1571c0 - 0x1571e0
void FUN_001571c0_0x1571c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001571c0_0x1571c0");
#endif

    ctx->pc = 0x1571c0u;

    // 0x1571c0: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1571c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1571c4: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1571c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1571c8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1571C8u;
    {
        const bool branch_taken_0x1571c8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1571CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571C8u;
        // 0x1571cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571c8) {
            ctx->pc = 0x1571D8u;
            goto label_1571d8;
        }
    }
    ctx->pc = 0x1571D0u;
    // 0x1571d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1571d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1571d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1571d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1571d8:
    // 0x1571d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1571D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1571D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1571E0u;
}
