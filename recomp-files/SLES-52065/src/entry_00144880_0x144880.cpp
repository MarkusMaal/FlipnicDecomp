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

// Function: entry_00144880
// Address: 0x144880 - 0x144890
void entry_00144880_0x144880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144880_0x144880");
#endif

    ctx->pc = 0x144880u;

    // 0x144880: 0x3e00008  jr          $ra
    ctx->pc = 0x144880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144880u;
        // 0x144884: 0x248200fc  addiu       $v0, $a0, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144888u;
    // 0x144888: 0x0  nop
    ctx->pc = 0x144888u;
    // NOP
    // 0x14488c: 0x0  nop
    ctx->pc = 0x14488cu;
    // NOP
    ctx->pc = 0x144890u;
}
