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

// Function: FUN_00201698
// Address: 0x201698 - 0x2016b4
void FUN_00201698_0x201698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201698_0x201698");
#endif

    switch (ctx->pc) {
        case 0x2016a8u: goto label_2016a8;
        default: break;
    }

    ctx->pc = 0x201698u;

    // 0x201698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20169c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2016a0: 0xc07af7c  jal         func_1EBDF0
    ctx->pc = 0x2016A0u;
    SET_GPR_U32(ctx, 31, 0x2016A8u);
    ctx->pc = 0x1EBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBDF0u, 0x2016A0u, 0x2016A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2016A8u;
label_2016a8:
    // 0x2016a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2016a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2016ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2016ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016ACu;
        // 0x2016b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2016ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2016B4u;
}
