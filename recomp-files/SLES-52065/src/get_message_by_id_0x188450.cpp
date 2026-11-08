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

// Function: get_message_by_id
// Address: 0x188450 - 0x188494
void get_message_by_id_0x188450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_message_by_id_0x188450");
#endif

    ctx->pc = 0x188450u;

    // 0x188450: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188450u;
    {
        const bool branch_taken_0x188450 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x188454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188450u;
        // 0x188454: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188450) {
            ctx->pc = 0x188474u;
            goto label_188474;
        }
    }
    ctx->pc = 0x188458u;
    // 0x188458: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x18845c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18845cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188460: 0x24421a70  addiu       $v0, $v0, 0x1A70
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6768));
    // 0x188464: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x188464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x188468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18846c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18846Cu;
    {
        const bool branch_taken_0x18846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18846Cu;
        // 0x188470: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18846c) {
            ctx->pc = 0x18848Cu;
            goto label_18848c;
        }
    }
    ctx->pc = 0x188474u;
label_188474:
    // 0x188474: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x188474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x188478: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x188478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18847c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188480: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x188480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188484: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x188484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x188488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18848c:
    // 0x18848c: 0x3e00008  jr          $ra
    ctx->pc = 0x18848Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18848Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188494u;
}
