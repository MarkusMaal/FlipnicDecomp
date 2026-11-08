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

// Function: entry_001aad30
// Address: 0x1aad30 - 0x1aad60
void entry_001aad30_0x1aad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aad30_0x1aad30");
#endif

    ctx->pc = 0x1aad30u;

    // 0x1aad30: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aad34: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x1aad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x1aad38: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x1aad38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x1aad3c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1aad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1aad40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1aad40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad44: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x1aad44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aad48: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1aad48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1aad4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD4Cu;
        // 0x1aad50: 0xa0800024  sb          $zero, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAD54u;
    // 0x1aad54: 0x0  nop
    ctx->pc = 0x1aad54u;
    // NOP
    // 0x1aad58: 0x0  nop
    ctx->pc = 0x1aad58u;
    // NOP
    // 0x1aad5c: 0x0  nop
    ctx->pc = 0x1aad5cu;
    // NOP
    ctx->pc = 0x1aad60u;
}
