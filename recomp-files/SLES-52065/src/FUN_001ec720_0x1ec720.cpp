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

// Function: FUN_001ec720
// Address: 0x1ec720 - 0x1ec744
void FUN_001ec720_0x1ec720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec720_0x1ec720");
#endif

    switch (ctx->pc) {
        case 0x1ec738u: goto label_1ec738;
        default: break;
    }

    ctx->pc = 0x1ec720u;

    // 0x1ec720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ec724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ec728: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ec728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec72c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec730: 0xc07ae94  jal         func_1EBA50
    ctx->pc = 0x1EC730u;
    SET_GPR_U32(ctx, 31, 0x1EC738u);
    ctx->pc = 0x1EC734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC730u;
    // 0x1ec734: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA50u, 0x1EC730u, 0x1EC738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC738u;
label_1ec738:
    // 0x1ec738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC73Cu;
        // 0x1ec740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC744u;
}
