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

// Function: entry_00225ef0
// Address: 0x225ef0 - 0x225f10
void entry_00225ef0_0x225ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225ef0_0x225ef0");
#endif

    ctx->pc = 0x225ef0u;

    // 0x225ef0: 0xaf808350  sw          $zero, -0x7CB0($gp)
    ctx->pc = 0x225ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935376), GPR_U32(ctx, 0));
    // 0x225ef4: 0xaf808354  sw          $zero, -0x7CAC($gp)
    ctx->pc = 0x225ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935380), GPR_U32(ctx, 0));
    // 0x225ef8: 0xaf808358  sw          $zero, -0x7CA8($gp)
    ctx->pc = 0x225ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935384), GPR_U32(ctx, 0));
    // 0x225efc: 0x3e00008  jr          $ra
    ctx->pc = 0x225EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EFCu;
        // 0x225f00: 0xaf80835c  sw          $zero, -0x7CA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F04u;
    // 0x225f04: 0x0  nop
    ctx->pc = 0x225f04u;
    // NOP
    // 0x225f08: 0x0  nop
    ctx->pc = 0x225f08u;
    // NOP
    // 0x225f0c: 0x0  nop
    ctx->pc = 0x225f0cu;
    // NOP
    ctx->pc = 0x225f10u;
}
