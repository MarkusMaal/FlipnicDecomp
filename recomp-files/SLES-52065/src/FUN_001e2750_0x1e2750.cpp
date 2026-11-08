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

// Function: FUN_001e2750
// Address: 0x1e2750 - 0x1e276c
void FUN_001e2750_0x1e2750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2750_0x1e2750");
#endif

    switch (ctx->pc) {
        case 0x1e2760u: goto label_1e2760;
        default: break;
    }

    ctx->pc = 0x1e2750u;

    // 0x1e2750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2758: 0xc07951c  jal         func_1E5470
    ctx->pc = 0x1E2758u;
    SET_GPR_U32(ctx, 31, 0x1E2760u);
    ctx->pc = 0x1E275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2758u;
    // 0x1e275c: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5470u, 0x1E2758u, 0x1E2760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2760u;
label_1e2760:
    // 0x1e2760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2764: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2764u;
        // 0x1e2768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E276Cu;
}
