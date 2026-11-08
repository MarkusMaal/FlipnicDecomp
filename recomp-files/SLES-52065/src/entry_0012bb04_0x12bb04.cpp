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

// Function: entry_0012bb04
// Address: 0x12bb04 - 0x12bb38
void entry_0012bb04_0x12bb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bb04_0x12bb04");
#endif

    ctx->pc = 0x12bb04u;

    // 0x12bb04: 0x0  nop
    ctx->pc = 0x12bb04u;
    // NOP
    // 0x12bb08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12bb08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12bb0c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x12bb0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12bb10: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12BB10u;
    {
        const bool branch_taken_0x12bb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB10u;
        // 0x12bb14: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb10) {
            ctx->pc = 0x12BAE0u;
            return;
        }
    }
    ctx->pc = 0x12BB18u;
    // 0x12bb18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12bb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12bb1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12bb1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bb20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12bb20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bb24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12bb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12bb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12bb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb30: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB30u;
        // 0x12bb34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB38u;
}
