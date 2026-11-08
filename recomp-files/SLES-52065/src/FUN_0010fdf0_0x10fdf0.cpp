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

// Function: FUN_0010fdf0
// Address: 0x10fdf0 - 0x10fe3c
void FUN_0010fdf0_0x10fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fdf0_0x10fdf0");
#endif

    switch (ctx->pc) {
        case 0x10fe0cu: goto label_10fe0c;
        case 0x10fe14u: goto label_10fe14;
        default: break;
    }

    ctx->pc = 0x10fdf0u;

    // 0x10fdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fdf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10fdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10fe00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10fe00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10FE04u;
    {
        const bool branch_taken_0x10fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE04u;
        // 0x10fe08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe04) {
            ctx->pc = 0x10FE18u;
            goto label_10fe18;
        }
    }
    ctx->pc = 0x10FE0Cu;
label_10fe0c:
    // 0x10fe0c: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x10FE0Cu;
    SET_GPR_U32(ctx, 31, 0x10FE14u);
    ctx->pc = 0x10FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE0Cu;
    // 0x10fe10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x10FE0Cu, 0x10FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE14u;
label_10fe14:
    // 0x10fe14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10fe18:
    // 0x10fe18: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x10fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10fe1c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10fe1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10fe20: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10FE20u;
    {
        const bool branch_taken_0x10fe20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE20u;
        // 0x10fe24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe20) {
            ctx->pc = 0x10FE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fe0c;
        }
    }
    ctx->pc = 0x10FE28u;
    // 0x10fe28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fe2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10fe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fe30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10fe30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fe34: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE34u;
        // 0x10fe38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE3Cu;
}
