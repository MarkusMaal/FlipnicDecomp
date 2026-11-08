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

// Function: entry_0013a0f4
// Address: 0x13a0f4 - 0x13a114
void entry_0013a0f4_0x13a0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a0f4_0x13a0f4");
#endif

    ctx->pc = 0x13a0f4u;

    // 0x13a0f4: 0x0  nop
    ctx->pc = 0x13a0f4u;
    // NOP
    // 0x13a0f8: 0x14a6ffd3  bne         $a1, $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13A0F8u;
    {
        const bool branch_taken_0x13a0f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x13a0f8) {
            ctx->pc = 0x13A048u;
            return;
        }
    }
    ctx->pc = 0x13A100u;
    // 0x13a100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A10Cu;
        // 0x13a110: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A114u;
}
