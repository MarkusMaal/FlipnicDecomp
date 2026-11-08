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

// Function: FUN_001e1120
// Address: 0x1e1120 - 0x1e114c
void FUN_001e1120_0x1e1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1120_0x1e1120");
#endif

    ctx->pc = 0x1e1120u;

    // 0x1e1120: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e1124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e1124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1128: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e112c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e112cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1134: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e1138: 0x2421b350  addiu       $at, $at, -0x4CB0
    ctx->pc = 0x1e1138u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947664));
    // 0x1e113c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1e113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1e1140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e1140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1144: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1144u;
        // 0x1e1148: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E114Cu;
}
