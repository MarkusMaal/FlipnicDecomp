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

// Function: entry_0010bc84
// Address: 0x10bc84 - 0x10bca0
void entry_0010bc84_0x10bc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bc84_0x10bc84");
#endif

    ctx->pc = 0x10bc84u;

    // 0x10bc84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10bc84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bc88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10bc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bc8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10bc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10bc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10bc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bc98: 0x3e00008  jr          $ra
    ctx->pc = 0x10BC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC98u;
        // 0x10bc9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCA0u;
}
