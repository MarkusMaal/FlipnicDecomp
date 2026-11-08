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

// Function: FUN_001f0fa0
// Address: 0x1f0fa0 - 0x1f0fbc
void FUN_001f0fa0_0x1f0fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0fa0_0x1f0fa0");
#endif

    switch (ctx->pc) {
        case 0x1f0fb0u: goto label_1f0fb0;
        default: break;
    }

    ctx->pc = 0x1f0fa0u;

    // 0x1f0fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0fa8: 0xc07c21e  jal         func_1F0878
    ctx->pc = 0x1F0FA8u;
    SET_GPR_U32(ctx, 31, 0x1F0FB0u);
    ctx->pc = 0x1F0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FA8u;
    // 0x1f0fac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0878u, 0x1F0FA8u, 0x1F0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FB0u;
label_1f0fb0:
    // 0x1f0fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FB4u;
        // 0x1f0fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FBCu;
}
