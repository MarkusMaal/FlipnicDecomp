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

// Function: FUN_00132b90
// Address: 0x132b90 - 0x132be4
void FUN_00132b90_0x132b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132b90_0x132b90");
#endif

    switch (ctx->pc) {
        case 0x132bacu: goto label_132bac;
        case 0x132bc8u: goto label_132bc8;
        default: break;
    }

    ctx->pc = 0x132b90u;

    // 0x132b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132b98: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132b98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132b9c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x132B9Cu;
    {
        const bool branch_taken_0x132b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B9Cu;
        // 0x132ba0: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b9c) {
            ctx->pc = 0x132BD0u;
            goto label_132bd0;
        }
    }
    ctx->pc = 0x132BA4u;
    // 0x132ba4: 0xc04c998  jal         func_132660
    ctx->pc = 0x132BA4u;
    SET_GPR_U32(ctx, 31, 0x132BACu);
    ctx->pc = 0x132BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BA4u;
    // 0x132ba8: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132660u, 0x132BA4u, 0x132BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BACu;
label_132bac:
    // 0x132bac: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132bb0: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132bb4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132bb8: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132bbc: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132bc0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132BC0u;
    SET_GPR_U32(ctx, 31, 0x132BC8u);
    ctx->pc = 0x132BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BC0u;
    // 0x132bc4: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132BC0u, 0x132BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132BC8u;
label_132bc8:
    // 0x132bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132bcc: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132bccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_132bd0:
    // 0x132bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132bd4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x132bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x132bd8: 0x2442ccc8  addiu       $v0, $v0, -0x3338
    ctx->pc = 0x132bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
    // 0x132bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x132BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BDCu;
        // 0x132be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132BE4u;
}
