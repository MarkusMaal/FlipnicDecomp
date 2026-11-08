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

// Function: FUN_0012f290
// Address: 0x12f290 - 0x12f37c
void FUN_0012f290_0x12f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f290_0x12f290");
#endif

    switch (ctx->pc) {
        case 0x12f2c4u: goto label_12f2c4;
        case 0x12f32cu: goto label_12f32c;
        default: break;
    }

    ctx->pc = 0x12f290u;

    // 0x12f290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f29c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f2a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f2a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12f2a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F2A8u;
    {
        const bool branch_taken_0x12f2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2A8u;
        // 0x12f2ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2a8) {
            ctx->pc = 0x12F2B8u;
            goto label_12f2b8;
        }
    }
    ctx->pc = 0x12F2B0u;
    // 0x12f2b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12F2B0u;
    {
        const bool branch_taken_0x12f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2B0u;
        // 0x12f2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2b0) {
            ctx->pc = 0x12F364u;
            goto label_12f364;
        }
    }
    ctx->pc = 0x12F2B8u;
label_12f2b8:
    // 0x12f2b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12F2BCu;
    {
        const bool branch_taken_0x12f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2BCu;
        // 0x12f2c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2bc) {
            ctx->pc = 0x12F318u;
            goto label_12f318;
        }
    }
    ctx->pc = 0x12F2C4u;
label_12f2c4:
    // 0x12f2c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f2cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x12f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12f2d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f2d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F2D8u;
    {
        const bool branch_taken_0x12f2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f2d8) {
            ctx->pc = 0x12F2ECu;
            goto label_12f2ec;
        }
    }
    ctx->pc = 0x12F2E0u;
    // 0x12f2e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x12f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x12f2e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f2e8: 0x0  nop
    ctx->pc = 0x12f2e8u;
    // NOP
label_12f2ec:
    // 0x12f2ec: 0x0  nop
    ctx->pc = 0x12f2ecu;
    // NOP
    // 0x12f2f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f2f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12f2f8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x12f2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12f2fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F2FCu;
    {
        const bool branch_taken_0x12f2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f2fc) {
            ctx->pc = 0x12F318u;
            goto label_12f318;
        }
    }
    ctx->pc = 0x12F304u;
    // 0x12f304: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f308: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12f308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f310: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12F310u;
    {
        const bool branch_taken_0x12f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F310u;
        // 0x12f314: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f310) {
            ctx->pc = 0x12F364u;
            goto label_12f364;
        }
    }
    ctx->pc = 0x12F318u;
label_12f318:
    // 0x12f318: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f31c: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x12f31cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12f320: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12f324: 0xc04c790  jal         func_131E40
    ctx->pc = 0x12F324u;
    SET_GPR_U32(ctx, 31, 0x12F32Cu);
    ctx->pc = 0x12F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F324u;
    // 0x12f328: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E40u, 0x12F324u, 0x12F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F32Cu;
label_12f32c:
    // 0x12f32c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12F32Cu;
    {
        const bool branch_taken_0x12f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f32c) {
            ctx->pc = 0x12F2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f2c4;
        }
    }
    ctx->pc = 0x12F334u;
    // 0x12f334: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f33c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x12f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12f340: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f344: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12f348: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F348u;
    {
        const bool branch_taken_0x12f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f348) {
            ctx->pc = 0x12F354u;
            goto label_12f354;
        }
    }
    ctx->pc = 0x12F350u;
    // 0x12f350: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x12f350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_12f354:
    // 0x12f354: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12f358: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12f35c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f360: 0x0  nop
    ctx->pc = 0x12f360u;
    // NOP
label_12f364:
    // 0x12f364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f36c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f36cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f374: 0x3e00008  jr          $ra
    ctx->pc = 0x12F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F374u;
        // 0x12f378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F37Cu;
}
