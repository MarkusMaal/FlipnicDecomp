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

// Function: FUN_001f3280
// Address: 0x1f3280 - 0x1f329c
void FUN_001f3280_0x1f3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3280_0x1f3280");
#endif

    switch (ctx->pc) {
        case 0x1f3290u: goto label_1f3290;
        default: break;
    }

    ctx->pc = 0x1f3280u;

    // 0x1f3280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3288: 0xc07cb24  jal         func_1F2C90
    ctx->pc = 0x1F3288u;
    SET_GPR_U32(ctx, 31, 0x1F3290u);
    ctx->pc = 0x1F2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2C90u, 0x1F3288u, 0x1F3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3290u;
label_1f3290:
    // 0x1f3290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3294: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3294u;
        // 0x1f3298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F329Cu;
}
