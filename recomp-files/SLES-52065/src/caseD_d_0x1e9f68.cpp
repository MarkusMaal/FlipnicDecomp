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

// Function: caseD_d
// Address: 0x1e9f68 - 0x1e9fb4
void caseD_d_0x1e9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1e9f68");
#endif

    switch (ctx->pc) {
        case 0x1e9f78u: goto label_1e9f78;
        default: break;
    }

    ctx->pc = 0x1e9f68u;

    // 0x1e9f68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9f6c: 0x27a5032c  addiu       $a1, $sp, 0x32C
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
    // 0x1e9f70: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9F70u;
    SET_GPR_U32(ctx, 31, 0x1E9F78u);
    ctx->pc = 0x1E9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F70u;
    // 0x1e9f74: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9F70u, 0x1E9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F78u;
label_1e9f78:
    // 0x1e9f78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9f7c: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x1e9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
    // 0x1e9f80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9f84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9f88: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e9f8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f90: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1e9f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1e9f94: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1e9f98: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1e9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1e9f9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FACu;
        // 0x1e9fb0: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9FB4u;
}
