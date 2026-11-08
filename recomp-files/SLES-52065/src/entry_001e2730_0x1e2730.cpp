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

// Function: entry_001e2730
// Address: 0x1e2730 - 0x1e2750
void entry_001e2730_0x1e2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2730_0x1e2730");
#endif

    ctx->pc = 0x1e2730u;

    // 0x1e2730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e2730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2734: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1e2734u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1e2738: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e273c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E273Cu;
        // 0x1e2740: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E273Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2744u;
    // 0x1e2744: 0x0  nop
    ctx->pc = 0x1e2744u;
    // NOP
    // 0x1e2748: 0x0  nop
    ctx->pc = 0x1e2748u;
    // NOP
    // 0x1e274c: 0x0  nop
    ctx->pc = 0x1e274cu;
    // NOP
    ctx->pc = 0x1e2750u;
}
