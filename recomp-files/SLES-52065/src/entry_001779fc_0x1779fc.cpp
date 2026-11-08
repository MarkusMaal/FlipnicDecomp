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

// Function: entry_001779fc
// Address: 0x1779fc - 0x177a10
void entry_001779fc_0x1779fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001779fc_0x1779fc");
#endif

    ctx->pc = 0x1779fcu;

    // 0x1779fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1779FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779FCu;
        // 0x177a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1779FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177A04u;
    // 0x177a04: 0x0  nop
    ctx->pc = 0x177a04u;
    // NOP
    // 0x177a08: 0x0  nop
    ctx->pc = 0x177a08u;
    // NOP
    // 0x177a0c: 0x0  nop
    ctx->pc = 0x177a0cu;
    // NOP
    ctx->pc = 0x177a10u;
}
