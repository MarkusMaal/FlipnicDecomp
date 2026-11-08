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

// Function: entry_001ee10c
// Address: 0x1ee10c - 0x1ee128
void entry_001ee10c_0x1ee10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee10c_0x1ee10c");
#endif

    ctx->pc = 0x1ee10cu;

    // 0x1ee10c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1ee10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ee110: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee110u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee114: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ee114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ee118: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1ee118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ee11c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1ee11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1ee120: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE120u;
        // 0x1ee124: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE128u;
}
