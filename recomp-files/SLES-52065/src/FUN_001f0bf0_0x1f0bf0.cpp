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

// Function: FUN_001f0bf0
// Address: 0x1f0bf0 - 0x1f0c0c
void FUN_001f0bf0_0x1f0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0bf0_0x1f0bf0");
#endif

    switch (ctx->pc) {
        case 0x1f0c00u: goto label_1f0c00;
        default: break;
    }

    ctx->pc = 0x1f0bf0u;

    // 0x1f0bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0bf8: 0xc07c21e  jal         func_1F0878
    ctx->pc = 0x1F0BF8u;
    SET_GPR_U32(ctx, 31, 0x1F0C00u);
    ctx->pc = 0x1F0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BF8u;
    // 0x1f0bfc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0878u, 0x1F0BF8u, 0x1F0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C00u;
label_1f0c00:
    // 0x1f0c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C04u;
        // 0x1f0c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0C0Cu;
}
