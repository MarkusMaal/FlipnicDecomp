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

// Function: entry_0012fa40
// Address: 0x12fa40 - 0x12fa78
void entry_0012fa40_0x12fa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fa40_0x12fa40");
#endif

    ctx->pc = 0x12fa40u;

    // 0x12fa40: 0x8f8384b0  lw          $v1, -0x7B50($gp)
    ctx->pc = 0x12fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x12fa44: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x12fa44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12fa48: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12FA48u;
    {
        const bool branch_taken_0x12fa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA48u;
        // 0x12fa4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa48) {
            ctx->pc = 0x12F9DCu;
            return;
        }
    }
    ctx->pc = 0x12FA50u;
    // 0x12fa50: 0xaf8084b0  sw          $zero, -0x7B50($gp)
    ctx->pc = 0x12fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 0));
    // 0x12fa54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12fa54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fa58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12fa58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fa5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12fa5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fa60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12fa60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fa64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12fa64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fa68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12fa68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fa6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fa70: 0x3e00008  jr          $ra
    ctx->pc = 0x12FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA70u;
        // 0x12fa74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FA78u;
}
