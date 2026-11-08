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

// Function: entry_001ae2c0
// Address: 0x1ae2c0 - 0x1ae2e0
void entry_001ae2c0_0x1ae2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae2c0_0x1ae2c0");
#endif

    ctx->pc = 0x1ae2c0u;

    // 0x1ae2c0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ae2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ae2c4: 0x2442b7f0  addiu       $v0, $v0, -0x4810
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
    // 0x1ae2c8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1ae2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1ae2cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ae2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2D0u;
        // 0x1ae2d4: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE2D8u;
    // 0x1ae2d8: 0x0  nop
    ctx->pc = 0x1ae2d8u;
    // NOP
    // 0x1ae2dc: 0x0  nop
    ctx->pc = 0x1ae2dcu;
    // NOP
    ctx->pc = 0x1ae2e0u;
}
