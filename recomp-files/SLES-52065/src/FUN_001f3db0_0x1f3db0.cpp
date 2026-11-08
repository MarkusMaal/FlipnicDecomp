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

// Function: FUN_001f3db0
// Address: 0x1f3db0 - 0x1f3df0
void FUN_001f3db0_0x1f3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3db0_0x1f3db0");
#endif

    switch (ctx->pc) {
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3de4u: goto label_1f3de4;
        default: break;
    }

    ctx->pc = 0x1f3db0u;

    // 0x1f3db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3db8: 0xc07aea0  jal         func_1EBA80
    ctx->pc = 0x1F3DB8u;
    SET_GPR_U32(ctx, 31, 0x1F3DC0u);
    ctx->pc = 0x1EBA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA80u, 0x1F3DB8u, 0x1F3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DC0u;
label_1f3dc0:
    // 0x1f3dc0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x1f3dc4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3DC4u;
    {
        const bool branch_taken_0x1f3dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f3dc4) {
            ctx->pc = 0x1F3DDCu;
            goto label_1f3ddc;
        }
    }
    ctx->pc = 0x1F3DCCu;
    // 0x1f3dcc: 0xc07cf7c  jal         func_1F3DF0
    ctx->pc = 0x1F3DCCu;
    SET_GPR_U32(ctx, 31, 0x1F3DD4u);
    ctx->pc = 0x1F3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3DF0u, 0x1F3DCCu, 0x1F3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DD4u;
label_1f3dd4:
    // 0x1f3dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3DD4u;
    {
        const bool branch_taken_0x1f3dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DD4u;
        // 0x1f3dd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dd4) {
            ctx->pc = 0x1F3DE8u;
            goto label_1f3de8;
        }
    }
    ctx->pc = 0x1F3DDCu;
label_1f3ddc:
    // 0x1f3ddc: 0xc07aea4  jal         func_1EBA90
    ctx->pc = 0x1F3DDCu;
    SET_GPR_U32(ctx, 31, 0x1F3DE4u);
    ctx->pc = 0x1EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA90u, 0x1F3DDCu, 0x1F3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DE4u;
label_1f3de4:
    // 0x1f3de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3de8:
    // 0x1f3de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DE8u;
        // 0x1f3dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3DF0u;
}
