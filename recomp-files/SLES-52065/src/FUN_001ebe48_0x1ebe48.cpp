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

// Function: FUN_001ebe48
// Address: 0x1ebe48 - 0x1ebe70
void FUN_001ebe48_0x1ebe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebe48_0x1ebe48");
#endif

    switch (ctx->pc) {
        case 0x1ebe58u: goto label_1ebe58;
        default: break;
    }

    ctx->pc = 0x1ebe48u;

    // 0x1ebe48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebe4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebe50: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1EBE50u;
    SET_GPR_U32(ctx, 31, 0x1EBE58u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1EBE50u, 0x1EBE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE58u;
label_1ebe58:
    // 0x1ebe58: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ebe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ebe5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebe60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ebe60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ebe64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebe68: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE68u;
        // 0x1ebe6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBE70u;
}
