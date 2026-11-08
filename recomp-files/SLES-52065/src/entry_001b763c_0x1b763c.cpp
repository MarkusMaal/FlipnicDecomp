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

// Function: entry_001b763c
// Address: 0x1b763c - 0x1b7664
void entry_001b763c_0x1b763c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b763c_0x1b763c");
#endif

    ctx->pc = 0x1b763cu;

    // 0x1b763c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b763cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b7640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7644: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b7644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b764c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b764cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b765c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B765Cu;
        // 0x1b7660: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B765Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7664u;
}
