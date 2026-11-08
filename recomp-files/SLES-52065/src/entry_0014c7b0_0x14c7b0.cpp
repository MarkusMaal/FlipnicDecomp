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

// Function: entry_0014c7b0
// Address: 0x14c7b0 - 0x14c7cc
void entry_0014c7b0_0x14c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c7b0_0x14c7b0");
#endif

    ctx->pc = 0x14c7b0u;

    // 0x14c7b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7C4u;
        // 0x14c7c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C7CCu;
}
