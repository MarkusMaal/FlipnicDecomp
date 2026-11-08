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

// Function: entry_0016e2c8
// Address: 0x16e2c8 - 0x16e2f0
void entry_0016e2c8_0x16e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e2c8_0x16e2c8");
#endif

    ctx->pc = 0x16e2c8u;

    // 0x16e2c8: 0x86430214  lh          $v1, 0x214($s2)
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x16e2cc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e2d0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x16E2D0u;
    {
        const bool branch_taken_0x16e2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e2d0) {
            ctx->pc = 0x16E278u;
            return;
        }
    }
    ctx->pc = 0x16E2D8u;
    // 0x16e2d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16e2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e2dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E8u;
        // 0x16e2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E2F0u;
}
