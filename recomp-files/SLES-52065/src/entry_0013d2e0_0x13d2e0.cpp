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

// Function: entry_0013d2e0
// Address: 0x13d2e0 - 0x13d2f0
void entry_0013d2e0_0x13d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d2e0_0x13d2e0");
#endif

    ctx->pc = 0x13d2e0u;

    // 0x13d2e0: 0xac850178  sw          $a1, 0x178($a0)
    ctx->pc = 0x13d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 5));
    // 0x13d2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2E4u;
        // 0x13d2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D2ECu;
    // 0x13d2ec: 0x0  nop
    ctx->pc = 0x13d2ecu;
    // NOP
    ctx->pc = 0x13d2f0u;
}
