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

// Function: FUN_0018f780
// Address: 0x18f780 - 0x18f814
void FUN_0018f780_0x18f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f780_0x18f780");
#endif

    ctx->pc = 0x18f780u;

    // 0x18f780: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x18f780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f784: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f788: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18f78c: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x18f78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18f790: 0x8d070034  lw          $a3, 0x34($t0)
    ctx->pc = 0x18f790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x18f794: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18f794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18f798: 0xad070034  sw          $a3, 0x34($t0)
    ctx->pc = 0x18f798u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 7));
    // 0x18f79c: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x18f79cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f7a0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18f7a4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x18f7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18f7a8: 0x24e80034  addiu       $t0, $a3, 0x34
    ctx->pc = 0x18f7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 52));
    // 0x18f7ac: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x18f7acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18f7b0: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F7B0u;
    {
        const bool branch_taken_0x18f7b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f7b0) {
            ctx->pc = 0x18F7BCu;
            goto label_18f7bc;
        }
    }
    ctx->pc = 0x18F7B8u;
    // 0x18f7b8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x18f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_18f7bc:
    // 0x18f7bc: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F7BCu;
    {
        const bool branch_taken_0x18f7bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7bc) {
            ctx->pc = 0x18F7C8u;
            goto label_18f7c8;
        }
    }
    ctx->pc = 0x18F7C4u;
    // 0x18f7c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_18f7c8:
    // 0x18f7c8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f7cc: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f7d0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x18f7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18f7d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f7d8: 0x8ce70034  lw          $a3, 0x34($a3)
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x18f7dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f7e0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18f7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18f7e4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18f7e8: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x18f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x18f7ec: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f7f0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f7f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18f7f8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18f7fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f800: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x18f800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18f804: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18f804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18f808: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f80c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F80Cu;
        // 0x18f810: 0xac660154  sw          $a2, 0x154($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F814u;
}
