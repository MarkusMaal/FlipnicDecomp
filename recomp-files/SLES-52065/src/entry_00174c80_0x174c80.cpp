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

// Function: entry_00174c80
// Address: 0x174c80 - 0x174ccc
void entry_00174c80_0x174c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c80_0x174c80");
#endif

    switch (ctx->pc) {
        case 0x174c98u: goto label_174c98;
        default: break;
    }

    ctx->pc = 0x174c80u;

    // 0x174c80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x174c84: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174c88: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x174C88u;
    {
        const bool branch_taken_0x174c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C88u;
        // 0x174c8c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c88) {
            ctx->pc = 0x174C40u;
            return;
        }
    }
    ctx->pc = 0x174C90u;
    // 0x174c90: 0xc05c700  jal         func_171C00
    ctx->pc = 0x174C90u;
    SET_GPR_U32(ctx, 31, 0x174C98u);
    ctx->pc = 0x171C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C00u, 0x174C90u, 0x174C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C98u;
label_174c98:
    // 0x174c98: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x174c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x174c9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174ca0: 0xae2300fc  sw          $v1, 0xFC($s1)
    ctx->pc = 0x174ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 3));
    // 0x174ca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x174ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x174ca8: 0xae230104  sw          $v1, 0x104($s1)
    ctx->pc = 0x174ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    // 0x174cac: 0xa2200100  sb          $zero, 0x100($s1)
    ctx->pc = 0x174cacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x174cb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174cb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x174CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC4u;
        // 0x174cc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CCCu;
}
