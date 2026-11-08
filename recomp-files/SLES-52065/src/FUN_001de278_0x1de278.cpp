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

// Function: FUN_001de278
// Address: 0x1de278 - 0x1de28c
void FUN_001de278_0x1de278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001de278_0x1de278");
#endif

    ctx->pc = 0x1de278u;

    // 0x1de278: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1de27c: 0x24637328  addiu       $v1, $v1, 0x7328
    ctx->pc = 0x1de27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29480));
    // 0x1de280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387328u));
    // 0x1de284: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE284u;
        // 0x1de288: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE28Cu;
}
