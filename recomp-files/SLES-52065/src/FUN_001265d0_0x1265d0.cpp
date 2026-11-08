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

// Function: FUN_001265d0
// Address: 0x1265d0 - 0x1265f0
void FUN_001265d0_0x1265d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001265d0_0x1265d0");
#endif

    switch (ctx->pc) {
        case 0x1265e0u: goto label_1265e0;
        default: break;
    }

    ctx->pc = 0x1265d0u;

    // 0x1265d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1265d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1265d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1265d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1265d8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1265D8u;
    SET_GPR_U32(ctx, 31, 0x1265E0u);
    ctx->pc = 0x1265DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265D8u;
    // 0x1265dc: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1265D8u, 0x1265E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265E0u;
label_1265e0:
    // 0x1265e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1265e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1265e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1265e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1265e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1265E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1265ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265E8u;
        // 0x1265ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1265F0u;
}
