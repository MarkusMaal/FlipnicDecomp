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

// Function: entry_0015d6d4
// Address: 0x15d6d4 - 0x15d700
void entry_0015d6d4_0x15d6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d6d4_0x15d6d4");
#endif

    ctx->pc = 0x15d6d4u;

    // 0x15d6d4: 0x0  nop
    ctx->pc = 0x15d6d4u;
    // NOP
    // 0x15d6d8: 0x8e032cd4  lw          $v1, 0x2CD4($s0)
    ctx->pc = 0x15d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    // 0x15d6dc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d6e0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15D6E0u;
    {
        const bool branch_taken_0x15d6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6e0) {
            ctx->pc = 0x15D6B4u;
            return;
        }
    }
    ctx->pc = 0x15D6E8u;
    // 0x15d6e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15d6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d6ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6F8u;
        // 0x15d6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D700u;
}
