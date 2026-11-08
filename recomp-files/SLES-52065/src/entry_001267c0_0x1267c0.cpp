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

// Function: entry_001267c0
// Address: 0x1267c0 - 0x1267e0
void entry_001267c0_0x1267c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001267c0_0x1267c0");
#endif

    ctx->pc = 0x1267c0u;

    // 0x1267c0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1267c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1267c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1267c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1267c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1267cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1267CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1267D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267CCu;
        // 0x1267d0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1267D4u;
    // 0x1267d4: 0x0  nop
    ctx->pc = 0x1267d4u;
    // NOP
    // 0x1267d8: 0x0  nop
    ctx->pc = 0x1267d8u;
    // NOP
    // 0x1267dc: 0x0  nop
    ctx->pc = 0x1267dcu;
    // NOP
    ctx->pc = 0x1267e0u;
}
