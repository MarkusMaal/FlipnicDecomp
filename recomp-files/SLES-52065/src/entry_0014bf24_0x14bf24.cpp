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

// Function: entry_0014bf24
// Address: 0x14bf24 - 0x14bfb0
void entry_0014bf24_0x14bf24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bf24_0x14bf24");
#endif

    switch (ctx->pc) {
        case 0x14bf38u: goto label_14bf38;
        case 0x14bf58u: goto label_14bf58;
        default: break;
    }

    ctx->pc = 0x14bf24u;

    // 0x14bf24: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x14bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf28: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x14bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x14bf2c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf30: 0xc0519b4  jal         func_1466D0
    ctx->pc = 0x14BF30u;
    SET_GPR_U32(ctx, 31, 0x14BF38u);
    ctx->pc = 0x14BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF30u;
    // 0x14bf34: 0x8c4400b0  lw          $a0, 0xB0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1466D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1466D0u, 0x14BF30u, 0x14BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF38u;
label_14bf38:
    // 0x14bf38: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf40: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14bf44: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x14bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x14bf48: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf4c: 0xa0430054  sb          $v1, 0x54($v0)
    ctx->pc = 0x14bf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bf50: 0xc04d5e8  jal         func_1357A0
    ctx->pc = 0x14BF50u;
    SET_GPR_U32(ctx, 31, 0x14BF58u);
    ctx->pc = 0x14BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF50u;
    // 0x14bf54: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1357A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1357A0u, 0x14BF50u, 0x14BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF58u;
label_14bf58:
    // 0x14bf58: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf60: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14bf64: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x14bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x14bf68: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf6c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x14bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x14bf70: 0xac4002b4  sw          $zero, 0x2B4($v0)
    ctx->pc = 0x14bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
    // 0x14bf74: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf78: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x14bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x14bf7c: 0xac4002b8  sw          $zero, 0x2B8($v0)
    ctx->pc = 0x14bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 0));
    // 0x14bf80: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf84: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x14bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x14bf88: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf8c: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x14bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x14bf90: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bf94: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x14bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x14bf98: 0xaf8385d8  sw          $v1, -0x7A28($gp)
    ctx->pc = 0x14bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 3));
    // 0x14bf9c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14bfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bfa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFA8u;
        // 0x14bfac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BFB0u;
}
