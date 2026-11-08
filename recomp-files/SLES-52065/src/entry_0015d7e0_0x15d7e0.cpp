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

// Function: entry_0015d7e0
// Address: 0x15d7e0 - 0x15d818
void entry_0015d7e0_0x15d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d7e0_0x15d7e0");
#endif

    ctx->pc = 0x15d7e0u;

    // 0x15d7e0: 0x8e032cd4  lw          $v1, 0x2CD4($s0)
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    // 0x15d7e4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d7e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d7e8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15D7E8u;
    {
        const bool branch_taken_0x15d7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7E8u;
        // 0x15d7ec: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7e8) {
            ctx->pc = 0x15D7BCu;
            return;
        }
    }
    ctx->pc = 0x15D7F0u;
    // 0x15d7f0: 0xae003dd8  sw          $zero, 0x3DD8($s0)
    ctx->pc = 0x15d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15832), GPR_U32(ctx, 0));
    // 0x15d7f4: 0xae003df0  sw          $zero, 0x3DF0($s0)
    ctx->pc = 0x15d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15856), GPR_U32(ctx, 0));
    // 0x15d7f8: 0xae002cd4  sw          $zero, 0x2CD4($s0)
    ctx->pc = 0x15d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11476), GPR_U32(ctx, 0));
    // 0x15d7fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d810: 0x3e00008  jr          $ra
    ctx->pc = 0x15D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D810u;
        // 0x15d814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D818u;
}
