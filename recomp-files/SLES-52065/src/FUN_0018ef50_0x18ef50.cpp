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

// Function: FUN_0018ef50
// Address: 0x18ef50 - 0x18f0b8
void FUN_0018ef50_0x18ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ef50_0x18ef50");
#endif

    switch (ctx->pc) {
        case 0x18ef7cu: goto label_18ef7c;
        case 0x18ef98u: goto label_18ef98;
        case 0x18eff0u: goto label_18eff0;
        case 0x18f038u: goto label_18f038;
        case 0x18f058u: goto label_18f058;
        default: break;
    }

    ctx->pc = 0x18ef50u;

    // 0x18ef50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18ef54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18ef54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18ef58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ef5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ef60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ef64: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18ef64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ef6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18ef6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ef74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ef78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18ef7c:
    // 0x18ef7c: 0x868401e8  lh          $a0, 0x1E8($s4)
    ctx->pc = 0x18ef7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 488)));
    // 0x18ef80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ef84: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x18EF84u;
    {
        const bool branch_taken_0x18ef84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF84u;
        // 0x18ef88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef84) {
            ctx->pc = 0x18F07Cu;
            goto label_18f07c;
        }
    }
    ctx->pc = 0x18EF8Cu;
    // 0x18ef8c: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x18EF8Cu;
    {
        const bool branch_taken_0x18ef8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF8Cu;
        // 0x18ef90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef8c) {
            ctx->pc = 0x18F07Cu;
            goto label_18f07c;
        }
    }
    ctx->pc = 0x18EF94u;
    // 0x18ef94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18ef94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ef98:
    // 0x18ef98: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18ef9c: 0x8e8402e0  lw          $a0, 0x2E0($s4)
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x18efa0: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x18efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x18efa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18efa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18efac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18efacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18efb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18efb4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x18efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18efb8: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x18efbc: 0x480002c  bltz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x18EFBCu;
    {
        const bool branch_taken_0x18efbc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFBCu;
        // 0x18efc0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efbc) {
            ctx->pc = 0x18F070u;
            goto label_18f070;
        }
    }
    ctx->pc = 0x18EFC4u;
    // 0x18efc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18efc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18efcc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18efd0: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x18efd4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18efd8: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18efdc: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18efe0: 0x71b021  addu        $s6, $v1, $s1
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18efe4: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x18efe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x18efe8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x18EFE8u;
    {
        const bool branch_taken_0x18efe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE8u;
        // 0x18efec: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efe8) {
            ctx->pc = 0x18F070u;
            goto label_18f070;
        }
    }
    ctx->pc = 0x18EFF0u;
label_18eff0:
    // 0x18eff0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18eff4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x18eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x18eff8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x18eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18effc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x18effcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x18f000: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x18f004: 0xc68c01c0  lwc1        $f12, 0x1C0($s4)
    ctx->pc = 0x18f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f008: 0x26880290  addiu       $t0, $s4, 0x290
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
    // 0x18f00c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x18f00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f010: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18f014: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x18f014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x18f018: 0x848301f4  lh          $v1, 0x1F4($a0)
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x18f01c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x18f01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18f020: 0x8c8401f0  lw          $a0, 0x1F0($a0)
    ctx->pc = 0x18f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x18f024: 0x0  nop
    ctx->pc = 0x18f024u;
    // NOP
    // 0x18f028: 0x1010  mfhi        $v0
    ctx->pc = 0x18f028u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18f02c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x18f030: 0xc063b30  jal         func_18ECC0
    ctx->pc = 0x18F030u;
    SET_GPR_U32(ctx, 31, 0x18F038u);
    ctx->pc = 0x18F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F030u;
    // 0x18f034: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECC0u, 0x18F030u, 0x18F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F038u;
label_18f038:
    // 0x18f038: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F038u;
    {
        const bool branch_taken_0x18f038 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18f038) {
            ctx->pc = 0x18F060u;
            goto label_18f060;
        }
    }
    ctx->pc = 0x18F040u;
    // 0x18f040: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18f044: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18f048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f04c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x18f050: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x18F050u;
    SET_GPR_U32(ctx, 31, 0x18F058u);
    ctx->pc = 0x18F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F050u;
    // 0x18f054: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x18F050u, 0x18F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F058u;
label_18f058:
    // 0x18f058: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F058u;
    {
        const bool branch_taken_0x18f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f058) {
            ctx->pc = 0x18F070u;
            goto label_18f070;
        }
    }
    ctx->pc = 0x18F060u;
label_18f060:
    // 0x18f060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f064: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x18f064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x18f068: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x18F068u;
    {
        const bool branch_taken_0x18f068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F068u;
        // 0x18f06c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f068) {
            ctx->pc = 0x18EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18eff0;
        }
    }
    ctx->pc = 0x18F070u;
label_18f070:
    // 0x18f070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18f074: 0x1a00ffc8  blez        $s0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x18F074u;
    {
        const bool branch_taken_0x18f074 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x18F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F074u;
        // 0x18f078: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f074) {
            ctx->pc = 0x18EF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef98;
        }
    }
    ctx->pc = 0x18F07Cu;
label_18f07c:
    // 0x18f07c: 0x0  nop
    ctx->pc = 0x18f07cu;
    // NOP
    // 0x18f080: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x18f084: 0x2aa3000a  slti        $v1, $s5, 0xA
    ctx->pc = 0x18f084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18f088: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x18F088u;
    {
        const bool branch_taken_0x18f088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f088) {
            ctx->pc = 0x18EF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef7c;
        }
    }
    ctx->pc = 0x18F090u;
    // 0x18f090: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18f090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f094: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18f094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f098: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f09c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f09cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f0a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f0a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f0a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f0a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f0a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f0ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B0u;
        // 0x18f0b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F0B8u;
}
