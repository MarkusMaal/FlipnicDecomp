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

// Function: entry_001a9750
// Address: 0x1a9750 - 0x1a9770
void entry_001a9750_0x1a9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9750_0x1a9750");
#endif

    ctx->pc = 0x1a9750u;

    // 0x1a9750: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a9754: 0x2442b4c0  addiu       $v0, $v0, -0x4B40
    ctx->pc = 0x1a9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948032));
    // 0x1a9758: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1a9758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x1a975c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a975cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9760: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9760u;
        // 0x1a9764: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9768u;
    // 0x1a9768: 0x0  nop
    ctx->pc = 0x1a9768u;
    // NOP
    // 0x1a976c: 0x0  nop
    ctx->pc = 0x1a976cu;
    // NOP
    ctx->pc = 0x1a9770u;
}
