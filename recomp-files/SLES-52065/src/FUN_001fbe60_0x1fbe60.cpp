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

// Function: FUN_001fbe60
// Address: 0x1fbe60 - 0x1fbe7c
void FUN_001fbe60_0x1fbe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbe60_0x1fbe60");
#endif

    switch (ctx->pc) {
        case 0x1fbe70u: goto label_1fbe70;
        default: break;
    }

    ctx->pc = 0x1fbe60u;

    // 0x1fbe60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbe64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbe68: 0xc080c50  jal         func_203140
    ctx->pc = 0x1FBE68u;
    SET_GPR_U32(ctx, 31, 0x1FBE70u);
    ctx->pc = 0x1FBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE68u;
    // 0x1fbe6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203140u, 0x1FBE68u, 0x1FBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE70u;
label_1fbe70:
    // 0x1fbe70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE74u;
        // 0x1fbe78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE7Cu;
}
