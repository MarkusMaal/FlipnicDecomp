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

// Function: FUN_00131010
// Address: 0x131010 - 0x1310b8
void FUN_00131010_0x131010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131010_0x131010");
#endif

    switch (ctx->pc) {
        case 0x13106cu: goto label_13106c;
        case 0x131078u: goto label_131078;
        default: break;
    }

    ctx->pc = 0x131010u;

    // 0x131010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x131014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x131018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x131018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13101c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x131020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13102c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131030: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x131030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131034: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x131034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131038: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x131038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13103c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13103Cu;
    {
        const bool branch_taken_0x13103c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x131040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13103Cu;
        // 0x131040: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13103c) {
            ctx->pc = 0x13104Cu;
            goto label_13104c;
        }
    }
    ctx->pc = 0x131044u;
    // 0x131044: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x131044u;
    {
        const bool branch_taken_0x131044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131044u;
        // 0x131048: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131044) {
            ctx->pc = 0x13109Cu;
            goto label_13109c;
        }
    }
    ctx->pc = 0x13104Cu;
label_13104c:
    // 0x13104c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131050: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x131050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131054: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x131054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131058: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x131058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13105c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131060: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x131060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131064u;
    {
        const bool branch_taken_0x131064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131064u;
        // 0x131068: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131064) {
            ctx->pc = 0x131084u;
            goto label_131084;
        }
    }
    ctx->pc = 0x13106Cu;
label_13106c:
    // 0x13106c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x131070: 0xc0401a4  jal         func_100690
    ctx->pc = 0x131070u;
    SET_GPR_U32(ctx, 31, 0x131078u);
    ctx->pc = 0x131074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131070u;
    // 0x131074: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x131070u, 0x131078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131078u;
label_131078:
    // 0x131078: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x131078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13107c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131080: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x131080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_131084:
    // 0x131084: 0x0  nop
    ctx->pc = 0x131084u;
    // NOP
    // 0x131088: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x131088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13108c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131090: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x131090u;
    {
        const bool branch_taken_0x131090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x131090) {
            ctx->pc = 0x13106Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13106c;
        }
    }
    ctx->pc = 0x131098u;
    // 0x131098: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x131098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_13109c:
    // 0x13109c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1310a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1310a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1310a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1310a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1310a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1310a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1310ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1310acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1310b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1310B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1310B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1310B0u;
        // 0x1310b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1310B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1310B8u;
}
