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

// Function: entry_00143190
// Address: 0x143190 - 0x1431a0
void entry_00143190_0x143190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143190_0x143190");
#endif

    ctx->pc = 0x143190u;

    // 0x143190: 0x3e00008  jr          $ra
    ctx->pc = 0x143190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143190u;
        // 0x143194: 0x90820028  lbu         $v0, 0x28($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143198u;
    // 0x143198: 0x0  nop
    ctx->pc = 0x143198u;
    // NOP
    // 0x14319c: 0x0  nop
    ctx->pc = 0x14319cu;
    // NOP
    ctx->pc = 0x1431a0u;
}
