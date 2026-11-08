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

// Function: entry_00115bb8
// Address: 0x115bb8 - 0x115bf4
void entry_00115bb8_0x115bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115bb8_0x115bb8");
#endif

    switch (ctx->pc) {
        case 0x115bc4u: goto label_115bc4;
        default: break;
    }

    ctx->pc = 0x115bb8u;

label_115bb8:
    // 0x115bb8: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x115bbc: 0xc044b00  jal         func_112C00
    ctx->pc = 0x115BBCu;
    SET_GPR_U32(ctx, 31, 0x115BC4u);
    ctx->pc = 0x115BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115BBCu;
    // 0x115bc0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C00u, 0x115BBCu, 0x115BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115BC4u;
label_115bc4:
    // 0x115bc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x115bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x115bc8: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x115bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x115bcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115BCCu;
    {
        const bool branch_taken_0x115bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x115BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BCCu;
        // 0x115bd0: 0x26310044  addiu       $s1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bcc) {
            ctx->pc = 0x115BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bb8;
        }
    }
    ctx->pc = 0x115BD4u;
    // 0x115bd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x115bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115bd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x115bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x115bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x115be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115bec: 0x3e00008  jr          $ra
    ctx->pc = 0x115BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BECu;
        // 0x115bf0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115BF4u;
}
