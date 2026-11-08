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

// Function: entry_001be640
// Address: 0x1be640 - 0x1be664
void entry_001be640_0x1be640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be640_0x1be640");
#endif

    switch (ctx->pc) {
        case 0x1be648u: goto label_1be648;
        default: break;
    }

    ctx->pc = 0x1be640u;

    // 0x1be640: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE640u;
    SET_GPR_U32(ctx, 31, 0x1BE648u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE640u, 0x1BE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE648u;
label_1be648:
    // 0x1be648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1be648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be64c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be64cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be65c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE65Cu;
        // 0x1be660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE664u;
}
