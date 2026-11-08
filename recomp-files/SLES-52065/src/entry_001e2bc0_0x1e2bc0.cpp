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

// Function: entry_001e2bc0
// Address: 0x1e2bc0 - 0x1e2be0
void entry_001e2bc0_0x1e2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2bc0_0x1e2bc0");
#endif

    ctx->pc = 0x1e2bc0u;

    // 0x1e2bc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2bc4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1e2bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1e2bc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BCCu;
        // 0x1e2bd0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2BD4u;
    // 0x1e2bd4: 0x0  nop
    ctx->pc = 0x1e2bd4u;
    // NOP
    // 0x1e2bd8: 0x0  nop
    ctx->pc = 0x1e2bd8u;
    // NOP
    // 0x1e2bdc: 0x0  nop
    ctx->pc = 0x1e2bdcu;
    // NOP
    ctx->pc = 0x1e2be0u;
}
