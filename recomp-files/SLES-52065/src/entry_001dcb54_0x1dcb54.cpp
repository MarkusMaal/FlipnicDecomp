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

// Function: entry_001dcb54
// Address: 0x1dcb54 - 0x1dcb68
void entry_001dcb54_0x1dcb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcb54_0x1dcb54");
#endif

    ctx->pc = 0x1dcb54u;

    // 0x1dcb54: 0x29020030  slti        $v0, $t0, 0x30
    ctx->pc = 0x1dcb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dcb58: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DCB58u;
    {
        const bool branch_taken_0x1dcb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB58u;
        // 0x1dcb5c: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb58) {
            ctx->pc = 0x1DCB10u;
            return;
        }
    }
    ctx->pc = 0x1DCB60u;
    // 0x1dcb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB60u;
        // 0x1dcb64: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB68u;
}
