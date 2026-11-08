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

// Function: FUN_001f0a20
// Address: 0x1f0a20 - 0x1f0a3c
void FUN_001f0a20_0x1f0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0a20_0x1f0a20");
#endif

    switch (ctx->pc) {
        case 0x1f0a30u: goto label_1f0a30;
        default: break;
    }

    ctx->pc = 0x1f0a20u;

    // 0x1f0a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0a28: 0xc07c21e  jal         func_1F0878
    ctx->pc = 0x1F0A28u;
    SET_GPR_U32(ctx, 31, 0x1F0A30u);
    ctx->pc = 0x1F0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A28u;
    // 0x1f0a2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0878u, 0x1F0A28u, 0x1F0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A30u;
label_1f0a30:
    // 0x1f0a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A34u;
        // 0x1f0a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A3Cu;
}
