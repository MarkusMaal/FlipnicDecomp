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

// Function: entry_001dd6c8
// Address: 0x1dd6c8 - 0x1dd6f4
void entry_001dd6c8_0x1dd6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd6c8_0x1dd6c8");
#endif

    ctx->pc = 0x1dd6c8u;

    // 0x1dd6c8: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1dd6cc: 0x25447330  addiu       $a0, $t2, 0x7330
    ctx->pc = 0x1dd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 29488));
    // 0x1dd6d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd6d4: 0x2405fbff  addiu       $a1, $zero, -0x401
    ctx->pc = 0x1dd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1dd6d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd6dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd6e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd6e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd6e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dd6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dd6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ECu;
        // 0x1dd6f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6F4u;
}
