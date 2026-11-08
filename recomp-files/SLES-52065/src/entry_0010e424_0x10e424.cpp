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

// Function: entry_0010e424
// Address: 0x10e424 - 0x10e458
void entry_0010e424_0x10e424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e424_0x10e424");
#endif

    ctx->pc = 0x10e424u;

    // 0x10e424: 0x0  nop
    ctx->pc = 0x10e424u;
    // NOP
    // 0x10e428: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x10e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x10e42c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10e42cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e430: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10E430u;
    {
        const bool branch_taken_0x10e430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e430) {
            ctx->pc = 0x10E3E8u;
            return;
        }
    }
    ctx->pc = 0x10E438u;
    // 0x10e438: 0xae400230  sw          $zero, 0x230($s2)
    ctx->pc = 0x10e438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 0));
    // 0x10e43c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e440: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10e440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10e444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e44c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e450: 0x3e00008  jr          $ra
    ctx->pc = 0x10E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E450u;
        // 0x10e454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E458u;
}
