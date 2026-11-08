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

// Function: FUN_001003f0
// Address: 0x1003f0 - 0x100410
void FUN_001003f0_0x1003f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001003f0_0x1003f0");
#endif

    switch (ctx->pc) {
        case 0x100400u: goto label_100400;
        default: break;
    }

    ctx->pc = 0x1003f0u;

    // 0x1003f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1003f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1003f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1003f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1003f8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1003F8u;
    SET_GPR_U32(ctx, 31, 0x100400u);
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1003F8u, 0x100400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100400u;
label_100400:
    // 0x100400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100404: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100408: 0x3e00008  jr          $ra
    ctx->pc = 0x100408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100408u;
        // 0x10040c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100410u;
}
