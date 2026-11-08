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

// Function: ReserveSaveArea
// Address: 0x1b3e30 - 0x1b3e80
void ReserveSaveArea_0x1b3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReserveSaveArea_0x1b3e30");
#endif

    switch (ctx->pc) {
        case 0x1b3e44u: goto label_1b3e44;
        case 0x1b3e58u: goto label_1b3e58;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e70u: goto label_1b3e70;
        default: break;
    }

    ctx->pc = 0x1b3e30u;

    // 0x1b3e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3e38: 0x24042908  addiu       $a0, $zero, 0x2908
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10504));
    // 0x1b3e3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B3E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B3E44u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B3E3Cu, 0x1B3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E44u;
label_1b3e44:
    // 0x1b3e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3E44u;
    {
        const bool branch_taken_0x1b3e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e44) {
            ctx->pc = 0x1B3E58u;
            goto label_1b3e58;
        }
    }
    ctx->pc = 0x1B3E4Cu;
    // 0x1b3e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e50: 0xc06ce20  jal         func_1B3880
    ctx->pc = 0x1B3E50u;
    SET_GPR_U32(ctx, 31, 0x1B3E58u);
    ctx->pc = 0x1B3880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3880u, 0x1B3E50u, 0x1B3E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E58u;
label_1b3e58:
    // 0x1b3e58: 0xaf828714  sw          $v0, -0x78EC($gp)
    ctx->pc = 0x1b3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 2));
    // 0x1b3e5c: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b3e60: 0xc06ce38  jal         func_1B38E0
    ctx->pc = 0x1B3E60u;
    SET_GPR_U32(ctx, 31, 0x1B3E68u);
    ctx->pc = 0x1B38E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38E0u, 0x1B3E60u, 0x1B3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E68u;
label_1b3e68:
    // 0x1b3e68: 0xc064148  jal         func_190520
    ctx->pc = 0x1B3E68u;
    SET_GPR_U32(ctx, 31, 0x1B3E70u);
    ctx->pc = 0x190520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190520u, 0x1B3E68u, 0x1B3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E70u;
label_1b3e70:
    // 0x1b3e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E80u;
}
