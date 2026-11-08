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

// Function: FUN_001ec2e0
// Address: 0x1ec2e0 - 0x1ec300
void FUN_001ec2e0_0x1ec2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec2e0_0x1ec2e0");
#endif

    switch (ctx->pc) {
        case 0x1ec2f0u: goto label_1ec2f0;
        default: break;
    }

    ctx->pc = 0x1ec2e0u;

    // 0x1ec2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec2e8: 0xc07acf8  jal         func_1EB3E0
    ctx->pc = 0x1EC2E8u;
    SET_GPR_U32(ctx, 31, 0x1EC2F0u);
    ctx->pc = 0x1EB3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB3E0u, 0x1EC2E8u, 0x1EC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC2F0u;
label_1ec2f0:
    // 0x1ec2f0: 0xf  sync
    ctx->pc = 0x1ec2f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F8u;
        // 0x1ec2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC300u;
}
