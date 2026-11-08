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

// Function: entry_001e3680
// Address: 0x1e3680 - 0x1e36a8
void entry_001e3680_0x1e3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3680_0x1e3680");
#endif

    ctx->pc = 0x1e3680u;

    // 0x1e3680: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e3684: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e3684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3688: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e3688u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e368c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e368cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e369c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e369cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e36a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E36A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36A0u;
        // 0x1e36a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E36A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E36A8u;
}
