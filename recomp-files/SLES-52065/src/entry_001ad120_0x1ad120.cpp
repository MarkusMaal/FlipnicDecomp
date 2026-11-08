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

// Function: entry_001ad120
// Address: 0x1ad120 - 0x1ad140
void entry_001ad120_0x1ad120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad120_0x1ad120");
#endif

    ctx->pc = 0x1ad120u;

    // 0x1ad120: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ad120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ad124: 0x2442b770  addiu       $v0, $v0, -0x4890
    ctx->pc = 0x1ad124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948720));
    // 0x1ad128: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1ad128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1ad12c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD12Cu;
        // 0x1ad130: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD134u;
    // 0x1ad134: 0x0  nop
    ctx->pc = 0x1ad134u;
    // NOP
    // 0x1ad138: 0x0  nop
    ctx->pc = 0x1ad138u;
    // NOP
    // 0x1ad13c: 0x0  nop
    ctx->pc = 0x1ad13cu;
    // NOP
    ctx->pc = 0x1ad140u;
}
