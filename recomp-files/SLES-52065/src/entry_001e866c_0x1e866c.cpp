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

// Function: entry_001e866c
// Address: 0x1e866c - 0x1e8698
void entry_001e866c_0x1e866c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e866c_0x1e866c");
#endif

    ctx->pc = 0x1e866cu;

    // 0x1e866c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e866cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e8670: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1e8670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e8674: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e8674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8678: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e8678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e867c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e867cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8680: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e8680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e8684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e868c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e868cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8690: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8690u;
        // 0x1e8694: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8698u;
}
