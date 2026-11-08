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

// Function: FUN_001b4c70
// Address: 0x1b4c70 - 0x1b4c9c
void FUN_001b4c70_0x1b4c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4c70_0x1b4c70");
#endif

    switch (ctx->pc) {
        case 0x1b4c80u: goto label_1b4c80;
        case 0x1b4c90u: goto label_1b4c90;
        default: break;
    }

    ctx->pc = 0x1b4c70u;

    // 0x1b4c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c78: 0xc06d458  jal         func_1B5160
    ctx->pc = 0x1B4C78u;
    SET_GPR_U32(ctx, 31, 0x1B4C80u);
    ctx->pc = 0x1B5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5160u, 0x1B4C78u, 0x1B4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C80u;
label_1b4c80:
    // 0x1b4c80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b4c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b4c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c88: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x1B4C88u;
    SET_GPR_U32(ctx, 31, 0x1B4C90u);
    ctx->pc = 0x1B4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C88u;
    // 0x1b4c8c: 0x24a50ce8  addiu       $a1, $a1, 0xCE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x1B4C88u, 0x1B4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C90u;
label_1b4c90:
    // 0x1b4c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C94u;
        // 0x1b4c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C9Cu;
}
