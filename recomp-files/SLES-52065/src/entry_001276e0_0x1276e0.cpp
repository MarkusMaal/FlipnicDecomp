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

// Function: entry_001276e0
// Address: 0x1276e0 - 0x127738
void entry_001276e0_0x1276e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001276e0_0x1276e0");
#endif

    switch (ctx->pc) {
        case 0x127724u: goto label_127724;
        default: break;
    }

    ctx->pc = 0x1276e0u;

    // 0x1276e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276e4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1276e8: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1276e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1276ec: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1276f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1276f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1276f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1276f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276fc: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1276fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x127700: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127704: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x127704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x127708: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12770c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x12770cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x127710: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127714: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x127714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x127718: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12771c: 0xc04a098  jal         func_128260
    ctx->pc = 0x12771Cu;
    SET_GPR_U32(ctx, 31, 0x127724u);
    ctx->pc = 0x127720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12771Cu;
    // 0x127720: 0x2444002c  addiu       $a0, $v0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128260u, 0x12771Cu, 0x127724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127724u;
label_127724:
    // 0x127724: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12772c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12772cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127730: 0x3e00008  jr          $ra
    ctx->pc = 0x127730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127730u;
        // 0x127734: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127738u;
}
