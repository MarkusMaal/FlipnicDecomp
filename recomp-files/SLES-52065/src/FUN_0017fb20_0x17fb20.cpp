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

// Function: FUN_0017fb20
// Address: 0x17fb20 - 0x17fba0
void FUN_0017fb20_0x17fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fb20_0x17fb20");
#endif

    switch (ctx->pc) {
        case 0x17fb54u: goto label_17fb54;
        case 0x17fb60u: goto label_17fb60;
        default: break;
    }

    ctx->pc = 0x17fb20u;

    // 0x17fb20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17fb24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17fb28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fb2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fb30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17fb30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fb3c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17fb40: 0x8c92000c  lw          $s2, 0xC($a0)
    ctx->pc = 0x17fb40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17fb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17fb48: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17fb4c: 0x1251000b  beq         $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x17FB4Cu;
    {
        const bool branch_taken_0x17fb4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x17FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB4Cu;
        // 0x17fb50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb4c) {
            ctx->pc = 0x17FB7Cu;
            goto label_17fb7c;
        }
    }
    ctx->pc = 0x17FB54u;
label_17fb54:
    // 0x17fb54: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fb58: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x17FB58u;
    SET_GPR_U32(ctx, 31, 0x17FB60u);
    ctx->pc = 0x17FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB58u;
    // 0x17fb5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x17FB58u, 0x17FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB60u;
label_17fb60:
    // 0x17fb60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FB60u;
    {
        const bool branch_taken_0x17fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fb60) {
            ctx->pc = 0x17FB70u;
            goto label_17fb70;
        }
    }
    ctx->pc = 0x17FB68u;
    // 0x17fb68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17FB68u;
    {
        const bool branch_taken_0x17fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB68u;
        // 0x17fb6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb68) {
            ctx->pc = 0x17FB84u;
            goto label_17fb84;
        }
    }
    ctx->pc = 0x17FB70u;
label_17fb70:
    // 0x17fb70: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17fb74: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17FB74u;
    {
        const bool branch_taken_0x17fb74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x17FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB74u;
        // 0x17fb78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb74) {
            ctx->pc = 0x17FB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb54;
        }
    }
    ctx->pc = 0x17FB7Cu;
label_17fb7c:
    // 0x17fb7c: 0x0  nop
    ctx->pc = 0x17fb7cu;
    // NOP
    // 0x17fb80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17fb84:
    // 0x17fb84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17fb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fb88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fb8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB98u;
        // 0x17fb9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FBA0u;
}
