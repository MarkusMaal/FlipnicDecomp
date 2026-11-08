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

// Function: FUN_0010e280
// Address: 0x10e280 - 0x10e3a8
void FUN_0010e280_0x10e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e280_0x10e280");
#endif

    switch (ctx->pc) {
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e384u: goto label_10e384;
        case 0x10e390u: goto label_10e390;
        default: break;
    }

    ctx->pc = 0x10e280u;

    // 0x10e280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10e28c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10e290: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10e294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e298: 0xc0437d8  jal         func_10DF60
    ctx->pc = 0x10E298u;
    SET_GPR_U32(ctx, 31, 0x10E2A0u);
    ctx->pc = 0x10E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E298u;
    // 0x10e29c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF60u, 0x10E298u, 0x10E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2A0u;
label_10e2a0:
    // 0x10e2a0: 0x93858488  lbu         $a1, -0x7B78($gp)
    ctx->pc = 0x10e2a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x10e2a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E2A4u;
    {
        const bool branch_taken_0x10e2a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A4u;
        // 0x10e2a8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2a4) {
            ctx->pc = 0x10E2B8u;
            goto label_10e2b8;
        }
    }
    ctx->pc = 0x10E2ACu;
    // 0x10e2ac: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x10e2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x10e2b0: 0x90232eb5  lbu         $v1, 0x2EB5($at)
    ctx->pc = 0x10e2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x10e2b4: 0x0  nop
    ctx->pc = 0x10e2b4u;
    // NOP
label_10e2b8:
    // 0x10e2b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E2B8u;
    {
        const bool branch_taken_0x10e2b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10e2b8) {
            ctx->pc = 0x10E2C8u;
            goto label_10e2c8;
        }
    }
    ctx->pc = 0x10E2C0u;
    // 0x10e2c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E2C0u;
    {
        const bool branch_taken_0x10e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C0u;
        // 0x10e2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2c0) {
            ctx->pc = 0x10E2ECu;
            goto label_10e2ec;
        }
    }
    ctx->pc = 0x10E2C8u;
label_10e2c8:
    // 0x10e2c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10e2cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e2d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10e2d4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x10e2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10e2d8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E2D8u;
    {
        const bool branch_taken_0x10e2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10e2d8) {
            ctx->pc = 0x10E2E8u;
            goto label_10e2e8;
        }
    }
    ctx->pc = 0x10E2E0u;
    // 0x10e2e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E2E0u;
    {
        const bool branch_taken_0x10e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2e0) {
            ctx->pc = 0x10E2ECu;
            goto label_10e2ec;
        }
    }
    ctx->pc = 0x10E2E8u;
label_10e2e8:
    // 0x10e2e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e2ec:
    // 0x10e2ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10e2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e2f0: 0x14900004  bne         $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E2F0u;
    {
        const bool branch_taken_0x10e2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x10E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2F0u;
        // 0x10e2f4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2f0) {
            ctx->pc = 0x10E304u;
            goto label_10e304;
        }
    }
    ctx->pc = 0x10E2F8u;
    // 0x10e2f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10E2F8u;
    {
        const bool branch_taken_0x10e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2F8u;
        // 0x10e2fc: 0x9383848c  lbu         $v1, -0x7B74($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2f8) {
            ctx->pc = 0x10E35Cu;
            goto label_10e35c;
        }
    }
    ctx->pc = 0x10E300u;
    // 0x10e300: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_10e304:
    // 0x10e304: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E304u;
    {
        const bool branch_taken_0x10e304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e304) {
            ctx->pc = 0x10E318u;
            goto label_10e318;
        }
    }
    ctx->pc = 0x10E30Cu;
    // 0x10e30c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x10e30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x10e310: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x10e310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EBFu));
    // 0x10e314: 0x0  nop
    ctx->pc = 0x10e314u;
    // NOP
label_10e318:
    // 0x10e318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E318u;
    {
        const bool branch_taken_0x10e318 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10e318) {
            ctx->pc = 0x10E328u;
            goto label_10e328;
        }
    }
    ctx->pc = 0x10E320u;
    // 0x10e320: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E320u;
    {
        const bool branch_taken_0x10e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E320u;
        // 0x10e324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e320) {
            ctx->pc = 0x10E34Cu;
            goto label_10e34c;
        }
    }
    ctx->pc = 0x10E328u;
label_10e328:
    // 0x10e328: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10e32c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e330: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10e334: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x10e334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10e338: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E338u;
    {
        const bool branch_taken_0x10e338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10e338) {
            ctx->pc = 0x10E348u;
            goto label_10e348;
        }
    }
    ctx->pc = 0x10E340u;
    // 0x10e340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E340u;
    {
        const bool branch_taken_0x10e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e340) {
            ctx->pc = 0x10E34Cu;
            goto label_10e34c;
        }
    }
    ctx->pc = 0x10E348u;
label_10e348:
    // 0x10e348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e34c:
    // 0x10e34c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10e34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e350: 0x1490000f  bne         $a0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x10E350u;
    {
        const bool branch_taken_0x10e350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x10e350) {
            ctx->pc = 0x10E390u;
            goto label_10e390;
        }
    }
    ctx->pc = 0x10E358u;
    // 0x10e358: 0x9383848c  lbu         $v1, -0x7B74($gp)
    ctx->pc = 0x10e358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
label_10e35c:
    // 0x10e35c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E35Cu;
    {
        const bool branch_taken_0x10e35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e35c) {
            ctx->pc = 0x10E368u;
            goto label_10e368;
        }
    }
    ctx->pc = 0x10E364u;
    // 0x10e364: 0x108023  negu        $s0, $s0
    ctx->pc = 0x10e364u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_10e368:
    // 0x10e368: 0x8e4401d4  lw          $a0, 0x1D4($s2)
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x10e36c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e370: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E370u;
    {
        const bool branch_taken_0x10e370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e370) {
            ctx->pc = 0x10E390u;
            goto label_10e390;
        }
    }
    ctx->pc = 0x10E378u;
    // 0x10e378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e37c: 0xc04394c  jal         func_10E530
    ctx->pc = 0x10E37Cu;
    SET_GPR_U32(ctx, 31, 0x10E384u);
    ctx->pc = 0x10E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E37Cu;
    // 0x10e380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E530u, 0x10E37Cu, 0x10E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E384u;
label_10e384:
    // 0x10e384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e388: 0xc043a14  jal         func_10E850
    ctx->pc = 0x10E388u;
    SET_GPR_U32(ctx, 31, 0x10E390u);
    ctx->pc = 0x10E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E388u;
    // 0x10e38c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E850u, 0x10E388u, 0x10E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E390u;
label_10e390:
    // 0x10e390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10e394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3A0u;
        // 0x10e3a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E3A8u;
}
