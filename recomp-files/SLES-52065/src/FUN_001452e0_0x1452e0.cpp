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

// Function: FUN_001452e0
// Address: 0x1452e0 - 0x145388
void FUN_001452e0_0x1452e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001452e0_0x1452e0");
#endif

    switch (ctx->pc) {
        case 0x14533cu: goto label_14533c;
        case 0x145348u: goto label_145348;
        default: break;
    }

    ctx->pc = 0x1452e0u;

    // 0x1452e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1452e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1452e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1452e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1452e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1452e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1452ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1452ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1452f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1452f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1452f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1452f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1452f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1452fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145300: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x145300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145304: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x145304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145308: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14530c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14530Cu;
    {
        const bool branch_taken_0x14530c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x145310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14530Cu;
        // 0x145310: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14530c) {
            ctx->pc = 0x14531Cu;
            goto label_14531c;
        }
    }
    ctx->pc = 0x145314u;
    // 0x145314: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x145314u;
    {
        const bool branch_taken_0x145314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145314u;
        // 0x145318: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145314) {
            ctx->pc = 0x14536Cu;
            goto label_14536c;
        }
    }
    ctx->pc = 0x14531Cu;
label_14531c:
    // 0x14531c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145320: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x145320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145324: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x145324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x145328: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14532c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x14532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145330: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x145330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x145334: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145334u;
    {
        const bool branch_taken_0x145334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145334u;
        // 0x145338: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145334) {
            ctx->pc = 0x145354u;
            goto label_145354;
        }
    }
    ctx->pc = 0x14533Cu;
label_14533c:
    // 0x14533c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145340: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145340u;
    SET_GPR_U32(ctx, 31, 0x145348u);
    ctx->pc = 0x145344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145340u;
    // 0x145344: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145340u, 0x145348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145348u;
label_145348:
    // 0x145348: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14534c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x145350: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x145350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_145354:
    // 0x145354: 0x0  nop
    ctx->pc = 0x145354u;
    // NOP
    // 0x145358: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x145358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14535c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145360: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x145360u;
    {
        const bool branch_taken_0x145360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145360) {
            ctx->pc = 0x14533Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14533c;
        }
    }
    ctx->pc = 0x145368u;
    // 0x145368: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x145368u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_14536c:
    // 0x14536c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14537c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14537cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145380: 0x3e00008  jr          $ra
    ctx->pc = 0x145380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145380u;
        // 0x145384: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145388u;
}
