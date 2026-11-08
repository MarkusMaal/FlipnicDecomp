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

// Function: entry_0017ca10
// Address: 0x17ca10 - 0x17ca20
void entry_0017ca10_0x17ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ca10_0x17ca10");
#endif

    ctx->pc = 0x17ca10u;

    // 0x17ca10: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA10u;
        // 0x17ca14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CA18u;
    // 0x17ca18: 0x0  nop
    ctx->pc = 0x17ca18u;
    // NOP
    // 0x17ca1c: 0x0  nop
    ctx->pc = 0x17ca1cu;
    // NOP
    ctx->pc = 0x17ca20u;
}
