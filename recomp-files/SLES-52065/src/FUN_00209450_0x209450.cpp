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

// Function: FUN_00209450
// Address: 0x209450 - 0x20947c
void FUN_00209450_0x209450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209450_0x209450");
#endif

    switch (ctx->pc) {
        case 0x209470u: goto label_209470;
        default: break;
    }

    ctx->pc = 0x209450u;

    // 0x209450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20945c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209460: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x209460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x209464: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x209464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x209468: 0xc082238  jal         func_2088E0
    ctx->pc = 0x209468u;
    SET_GPR_U32(ctx, 31, 0x209470u);
    ctx->pc = 0x20946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209468u;
    // 0x20946c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x209468u, 0x209470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209470u;
label_209470:
    // 0x209470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209474: 0x3e00008  jr          $ra
    ctx->pc = 0x209474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209474u;
        // 0x209478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20947Cu;
}
