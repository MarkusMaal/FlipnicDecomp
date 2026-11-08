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

// Function: FUN_001fbe48
// Address: 0x1fbe48 - 0x1fbe5c
void FUN_001fbe48_0x1fbe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbe48_0x1fbe48");
#endif

    ctx->pc = 0x1fbe48u;

    // 0x1fbe48: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBE48u;
    {
        const bool branch_taken_0x1fbe48 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE48u;
        // 0x1fbe4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe48) {
            ctx->pc = 0x1FBE54u;
            goto label_1fbe54;
        }
    }
    ctx->pc = 0x1FBE50u;
    // 0x1fbe50: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1fbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1fbe54:
    // 0x1fbe54: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE5Cu;
}
