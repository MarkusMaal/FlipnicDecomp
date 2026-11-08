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

// Function: entry_0013d880
// Address: 0x13d880 - 0x13d890
void entry_0013d880_0x13d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d880_0x13d880");
#endif

    ctx->pc = 0x13d880u;

    // 0x13d880: 0xac8501b8  sw          $a1, 0x1B8($a0)
    ctx->pc = 0x13d880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 5));
    // 0x13d884: 0x3e00008  jr          $ra
    ctx->pc = 0x13D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D884u;
        // 0x13d888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D88Cu;
    // 0x13d88c: 0x0  nop
    ctx->pc = 0x13d88cu;
    // NOP
    ctx->pc = 0x13d890u;
}
