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

// Function: FUN_00123b30
// Address: 0x123b30 - 0x123b98
void FUN_00123b30_0x123b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123b30_0x123b30");
#endif

    switch (ctx->pc) {
        case 0x123b44u: goto label_123b44;
        case 0x123b68u: goto label_123b68;
        default: break;
    }

    ctx->pc = 0x123b30u;

    // 0x123b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123b38: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x123b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x123b3c: 0xc049230  jal         func_1248C0
    ctx->pc = 0x123B3Cu;
    SET_GPR_U32(ctx, 31, 0x123B44u);
    ctx->pc = 0x123B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B3Cu;
    // 0x123b40: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248C0u, 0x123B3Cu, 0x123B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B44u;
label_123b44:
    // 0x123b44: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b48: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x123b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x123b4c: 0x24638870  addiu       $v1, $v1, -0x7790
    ctx->pc = 0x123b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x123b50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x123b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x123b54: 0x24a5ea70  addiu       $a1, $a1, -0x1590
    ctx->pc = 0x123b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961776));
    // 0x123b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x123b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x123b5c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b60: 0xc080702  jal         func_201C08
    ctx->pc = 0x123B60u;
    SET_GPR_U32(ctx, 31, 0x123B68u);
    ctx->pc = 0x123B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B60u;
    // 0x123b64: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x123B60u, 0x123B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B68u;
label_123b68:
    // 0x123b68: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b6c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x123b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x123b70: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b74: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x123b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x123b78: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b7c: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x123b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x123b80: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x123b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x123b88: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x123b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x123b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123b90: 0x3e00008  jr          $ra
    ctx->pc = 0x123B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B90u;
        // 0x123b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123B98u;
}
