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

// Function: entry_00138668
// Address: 0x138668 - 0x138690
void entry_00138668_0x138668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138668_0x138668");
#endif

    ctx->pc = 0x138668u;

    // 0x138668: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x138668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13866c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13866cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138670: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x138674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x138678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13867c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13867cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138688: 0x3e00008  jr          $ra
    ctx->pc = 0x138688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138688u;
        // 0x13868c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138690u;
}
