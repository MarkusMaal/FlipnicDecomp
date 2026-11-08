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

// Function: FUN_001f3260
// Address: 0x1f3260 - 0x1f327c
void FUN_001f3260_0x1f3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3260_0x1f3260");
#endif

    switch (ctx->pc) {
        case 0x1f3270u: goto label_1f3270;
        default: break;
    }

    ctx->pc = 0x1f3260u;

    // 0x1f3260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f3268: 0xc07cb24  jal         func_1F2C90
    ctx->pc = 0x1F3268u;
    SET_GPR_U32(ctx, 31, 0x1F3270u);
    ctx->pc = 0x1F326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3268u;
    // 0x1f326c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2C90u, 0x1F3268u, 0x1F3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3270u;
label_1f3270:
    // 0x1f3270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f3270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3274: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3274u;
        // 0x1f3278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F327Cu;
}
