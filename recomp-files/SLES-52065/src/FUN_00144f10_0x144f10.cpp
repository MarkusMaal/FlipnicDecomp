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

// Function: FUN_00144f10
// Address: 0x144f10 - 0x144f38
void FUN_00144f10_0x144f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144f10_0x144f10");
#endif

    switch (ctx->pc) {
        case 0x144f2cu: goto label_144f2c;
        default: break;
    }

    ctx->pc = 0x144f10u;

    // 0x144f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144f18: 0x8c8401a4  lw          $a0, 0x1A4($a0)
    ctx->pc = 0x144f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x144f1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144F1Cu;
    {
        const bool branch_taken_0x144f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144f1c) {
            ctx->pc = 0x144F2Cu;
            goto label_144f2c;
        }
    }
    ctx->pc = 0x144F24u;
    // 0x144f24: 0xc05135c  jal         func_144D70
    ctx->pc = 0x144F24u;
    SET_GPR_U32(ctx, 31, 0x144F2Cu);
    ctx->pc = 0x144D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D70u, 0x144F24u, 0x144F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F2Cu;
label_144f2c:
    // 0x144f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144f30: 0x3e00008  jr          $ra
    ctx->pc = 0x144F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F30u;
        // 0x144f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F38u;
}
