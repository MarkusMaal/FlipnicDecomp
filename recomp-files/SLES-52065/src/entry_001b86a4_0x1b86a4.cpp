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

// Function: entry_001b86a4
// Address: 0x1b86a4 - 0x1b86e4
void entry_001b86a4_0x1b86a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b86a4_0x1b86a4");
#endif

    ctx->pc = 0x1b86a4u;

    // 0x1b86a4: 0x0  nop
    ctx->pc = 0x1b86a4u;
    // NOP
    // 0x1b86a8: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1b86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1b86ac: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1b86acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b86b0: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1B86B0u;
    {
        const bool branch_taken_0x1b86b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b86b0) {
            ctx->pc = 0x1B8540u;
            return;
        }
    }
    ctx->pc = 0x1B86B8u;
    // 0x1b86b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b86b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b86bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b86bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b86c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b86c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b86c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b86c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b86c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b86c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b86cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b86ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b86d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b86d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b86d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b86d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b86d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b86d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b86dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B86DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86DCu;
        // 0x1b86e0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B86DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B86E4u;
}
