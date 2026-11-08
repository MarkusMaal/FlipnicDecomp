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

// Function: entry_00144628
// Address: 0x144628 - 0x144660
void entry_00144628_0x144628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144628_0x144628");
#endif

    switch (ctx->pc) {
        case 0x144640u: goto label_144640;
        default: break;
    }

    ctx->pc = 0x144628u;

    // 0x144628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14462c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14462cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144630: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x144630u;
    {
        const bool branch_taken_0x144630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144630u;
        // 0x144634: 0x26640090  addiu       $a0, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144630) {
            ctx->pc = 0x1445E0u;
            return;
        }
    }
    ctx->pc = 0x144638u;
    // 0x144638: 0xc050910  jal         func_142440
    ctx->pc = 0x144638u;
    SET_GPR_U32(ctx, 31, 0x144640u);
    ctx->pc = 0x142440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142440u, 0x144638u, 0x144640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144640u;
label_144640:
    // 0x144640: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x144640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14464c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14464cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144658: 0x3e00008  jr          $ra
    ctx->pc = 0x144658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144658u;
        // 0x14465c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144660u;
}
