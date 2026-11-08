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

// Function: entry_00150658
// Address: 0x150658 - 0x150674
void entry_00150658_0x150658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150658_0x150658");
#endif

    ctx->pc = 0x150658u;

    // 0x150658: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x150658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15065c: 0x0  nop
    ctx->pc = 0x15065cu;
    // NOP
    // 0x150660: 0x0  nop
    ctx->pc = 0x150660u;
    // NOP
    // 0x150664: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x150664u;
    {
        const bool branch_taken_0x150664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150664) {
            ctx->pc = 0x150654u;
            return;
        }
    }
    ctx->pc = 0x15066Cu;
    // 0x15066c: 0x3e00008  jr          $ra
    ctx->pc = 0x15066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15066Cu;
        // 0x150670: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150674u;
}
