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

// Function: entry_001488dc
// Address: 0x1488dc - 0x148908
void entry_001488dc_0x1488dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001488dc_0x1488dc");
#endif

    ctx->pc = 0x1488dcu;

    // 0x1488dc: 0x0  nop
    ctx->pc = 0x1488dcu;
    // NOP
    // 0x1488e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1488e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1488e4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1488e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1488e8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1488e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1488ec: 0xac8a000c  sw          $t2, 0xC($a0)
    ctx->pc = 0x1488ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 10));
    // 0x1488f0: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x1488f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x1488f4: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x1488f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x1488f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1488f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1488fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1488fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148900: 0x3e00008  jr          $ra
    ctx->pc = 0x148900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148900u;
        // 0x148904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148908u;
}
