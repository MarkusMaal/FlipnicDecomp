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

// Function: entry_001e2710
// Address: 0x1e2710 - 0x1e2730
void entry_001e2710_0x1e2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2710_0x1e2710");
#endif

    ctx->pc = 0x1e2710u;

    // 0x1e2710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2714: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1e2714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1e2718: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e271c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E271Cu;
        // 0x1e2720: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2724u;
    // 0x1e2724: 0x0  nop
    ctx->pc = 0x1e2724u;
    // NOP
    // 0x1e2728: 0x0  nop
    ctx->pc = 0x1e2728u;
    // NOP
    // 0x1e272c: 0x0  nop
    ctx->pc = 0x1e272cu;
    // NOP
    ctx->pc = 0x1e2730u;
}
