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

// Function: entry_001afec0
// Address: 0x1afec0 - 0x1aff08
void entry_001afec0_0x1afec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afec0_0x1afec0");
#endif

    ctx->pc = 0x1afec0u;

    // 0x1afec0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x1afec0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1afec4: 0x1480ff30  bnez        $a0, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x1AFEC4u;
    {
        const bool branch_taken_0x1afec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afec4) {
            ctx->pc = 0x1AFB88u;
            return;
        }
    }
    ctx->pc = 0x1AFECCu;
    // 0x1afecc: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1afeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1afed0: 0x1460ff2d  bnez        $v1, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x1AFED0u;
    {
        const bool branch_taken_0x1afed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afed0) {
            ctx->pc = 0x1AFB88u;
            return;
        }
    }
    ctx->pc = 0x1AFED8u;
    // 0x1afed8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1afedc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1afedcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1afee0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1afee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1afee4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1afee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1afee8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1afee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1afeec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1afeecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1afef0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1afef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afef4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1afef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afef8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1afef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afefc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1afefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aff00: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF00u;
        // 0x1aff04: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFF08u;
}
