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

// Function: entry_0013cf60
// Address: 0x13cf60 - 0x13cf80
void entry_0013cf60_0x13cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cf60_0x13cf60");
#endif

    ctx->pc = 0x13cf60u;

    // 0x13cf60: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x13cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x13cf64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13cf68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cf6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf70: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13cf74: 0x3e00008  jr          $ra
    ctx->pc = 0x13CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF74u;
        // 0x13cf78: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CF7Cu;
    // 0x13cf7c: 0x0  nop
    ctx->pc = 0x13cf7cu;
    // NOP
    ctx->pc = 0x13cf80u;
}
