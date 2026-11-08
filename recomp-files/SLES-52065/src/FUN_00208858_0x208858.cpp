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

// Function: FUN_00208858
// Address: 0x208858 - 0x208884
void FUN_00208858_0x208858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208858_0x208858");
#endif

    switch (ctx->pc) {
        case 0x208878u: goto label_208878;
        default: break;
    }

    ctx->pc = 0x208858u;

    // 0x208858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20885c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20885cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x208860: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208868: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x208868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x20886c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x20886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x208870: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x208870u;
    SET_GPR_U32(ctx, 31, 0x208878u);
    ctx->pc = 0x208874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208870u;
    // 0x208874: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x208870u, 0x208878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208878u;
label_208878:
    // 0x208878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20887c: 0x3e00008  jr          $ra
    ctx->pc = 0x20887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20887Cu;
        // 0x208880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20887Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208884u;
}
