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

// Function: entry_00172980
// Address: 0x172980 - 0x1729ac
void entry_00172980_0x172980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172980_0x172980");
#endif

    ctx->pc = 0x172980u;

    // 0x172980: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172984: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x172984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172988: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x172988u;
    {
        const bool branch_taken_0x172988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172988) {
            ctx->pc = 0x172940u;
            return;
        }
    }
    ctx->pc = 0x172990u;
    // 0x172990: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x172990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17299c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17299cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1729a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1729a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1729a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1729A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1729A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729A4u;
        // 0x1729a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1729A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1729ACu;
}
