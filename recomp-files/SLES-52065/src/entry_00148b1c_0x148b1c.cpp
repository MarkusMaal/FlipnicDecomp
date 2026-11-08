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

// Function: entry_00148b1c
// Address: 0x148b1c - 0x148b48
void entry_00148b1c_0x148b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148b1c_0x148b1c");
#endif

    ctx->pc = 0x148b1cu;

    // 0x148b1c: 0x0  nop
    ctx->pc = 0x148b1cu;
    // NOP
    // 0x148b20: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x148b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x148b24: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x148b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x148b28: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x148b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x148b2c: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x148b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x148b30: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x148b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x148b34: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x148b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x148b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148b40: 0x3e00008  jr          $ra
    ctx->pc = 0x148B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B40u;
        // 0x148b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148B48u;
}
