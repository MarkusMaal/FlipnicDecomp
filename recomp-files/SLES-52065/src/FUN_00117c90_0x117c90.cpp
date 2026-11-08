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

// Function: FUN_00117c90
// Address: 0x117c90 - 0x117cc4
void FUN_00117c90_0x117c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117c90_0x117c90");
#endif

    ctx->pc = 0x117c90u;

    // 0x117c90: 0x8f848330  lw          $a0, -0x7CD0($gp)
    ctx->pc = 0x117c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x117c94: 0x27838328  addiu       $v1, $gp, -0x7CD8
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x117c98: 0x8f828334  lw          $v0, -0x7CCC($gp)
    ctx->pc = 0x117c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x117c9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x117c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x117ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x117ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x117ca4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x117ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117ca8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x117ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117cac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117CACu;
    {
        const bool branch_taken_0x117cac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CACu;
        // 0x117cb0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cac) {
            ctx->pc = 0x117CBCu;
            goto label_117cbc;
        }
    }
    ctx->pc = 0x117CB4u;
    // 0x117cb4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x117cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x117cb8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x117cb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_117cbc:
    // 0x117cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x117CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117CC4u;
}
