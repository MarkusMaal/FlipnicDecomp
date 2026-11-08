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

// Function: entry_001a5a28
// Address: 0x1a5a28 - 0x1a5a58
void entry_001a5a28_0x1a5a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5a28_0x1a5a28");
#endif

    ctx->pc = 0x1a5a28u;

    // 0x1a5a28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a5a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a5a2c: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1a5a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a5a30: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1A5A30u;
    {
        const bool branch_taken_0x1a5a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A30u;
        // 0x1a5a34: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a30) {
            ctx->pc = 0x1A5960u;
            return;
        }
    }
    ctx->pc = 0x1A5A38u;
    // 0x1a5a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5a3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a5a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5a40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A50u;
        // 0x1a5a54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A58u;
}
