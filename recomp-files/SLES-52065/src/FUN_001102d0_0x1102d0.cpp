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

// Function: FUN_001102d0
// Address: 0x1102d0 - 0x110948
void FUN_001102d0_0x1102d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001102d0_0x1102d0");
#endif

    switch (ctx->pc) {
        case 0x110310u: goto label_110310;
        case 0x11034cu: goto label_11034c;
        case 0x110374u: goto label_110374;
        case 0x11037cu: goto label_11037c;
        case 0x110390u: goto label_110390;
        case 0x1103d0u: goto label_1103d0;
        case 0x1103f8u: goto label_1103f8;
        case 0x110418u: goto label_110418;
        case 0x1104a0u: goto label_1104a0;
        case 0x1104c8u: goto label_1104c8;
        case 0x110504u: goto label_110504;
        case 0x110548u: goto label_110548;
        case 0x110564u: goto label_110564;
        case 0x11056cu: goto label_11056c;
        case 0x1105a4u: goto label_1105a4;
        case 0x1105d4u: goto label_1105d4;
        case 0x1105fcu: goto label_1105fc;
        case 0x110634u: goto label_110634;
        case 0x11065cu: goto label_11065c;
        case 0x11069cu: goto label_11069c;
        case 0x1106e0u: goto label_1106e0;
        case 0x1106fcu: goto label_1106fc;
        case 0x110724u: goto label_110724;
        case 0x11075cu: goto label_11075c;
        case 0x110784u: goto label_110784;
        case 0x1107c4u: goto label_1107c4;
        case 0x110808u: goto label_110808;
        case 0x110824u: goto label_110824;
        case 0x11084cu: goto label_11084c;
        case 0x110874u: goto label_110874;
        case 0x1108e4u: goto label_1108e4;
        case 0x11090cu: goto label_11090c;
        default: break;
    }

    ctx->pc = 0x1102d0u;

    // 0x1102d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1102d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1102d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1102d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1102d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1102d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1102dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1102dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1102e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1102e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1102e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1102e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1102e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1102e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1102ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1102f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1102f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1102f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1102f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1102fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1102fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110308: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x110308u;
    SET_GPR_U32(ctx, 31, 0x110310u);
    ctx->pc = 0x11030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110308u;
    // 0x11030c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x110308u, 0x110310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110310u;
label_110310:
    // 0x110310: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110314: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x110314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x110318: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
    ctx->pc = 0x110318u;
    {
        const bool branch_taken_0x110318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110318u;
        // 0x11031c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110318) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x110320u;
    // 0x110320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110324: 0x2463e3e0  addiu       $v1, $v1, -0x1C20
    ctx->pc = 0x110324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960096));
    // 0x110328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11032c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110330: 0x400008  jr          $v0
    ctx->pc = 0x110330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110338u: goto label_110338;
            case 0x110494u: goto label_110494;
            case 0x1104E8u: goto label_1104e8;
            case 0x110628u: goto label_110628;
            case 0x110680u: goto label_110680;
            case 0x110750u: goto label_110750;
            case 0x1107A8u: goto label_1107a8;
            case 0x1108D8u: goto label_1108d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110330u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110338u;
label_110338:
    // 0x110338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11033c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11033Cu;
    {
        const bool branch_taken_0x11033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11033Cu;
        // 0x110340: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11033c) {
            ctx->pc = 0x110390u;
            goto label_110390;
        }
    }
    ctx->pc = 0x110344u;
    // 0x110344: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110344u;
    {
        const bool branch_taken_0x110344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110344u;
        // 0x110348: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110344) {
            ctx->pc = 0x11037Cu;
            goto label_11037c;
        }
    }
    ctx->pc = 0x11034Cu;
label_11034c:
    // 0x11034c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110354: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110358: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11035c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11035cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110368: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11036c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11036Cu;
    SET_GPR_U32(ctx, 31, 0x110374u);
    ctx->pc = 0x110370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11036Cu;
    // 0x110370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11036Cu, 0x110374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110374u;
label_110374:
    // 0x110374: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x110374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x110378: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x110378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11037c:
    // 0x11037c: 0x0  nop
    ctx->pc = 0x11037cu;
    // NOP
    // 0x110380: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110384: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x110384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110388: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110388u;
    {
        const bool branch_taken_0x110388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110388) {
            ctx->pc = 0x11034Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11034c;
        }
    }
    ctx->pc = 0x110390u;
label_110390:
    // 0x110390: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x110390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x110394: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x110394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x110398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x110398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11039c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1103a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1103a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1103a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1103a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1103a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1103a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1103ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1103acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1103b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1103b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1103b4: 0x0  nop
    ctx->pc = 0x1103b4u;
    // NOP
    // 0x1103b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1103b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1103bc: 0x10200159  beqz        $at, . + 4 + (0x159 << 2)
    ctx->pc = 0x1103BCu;
    {
        const bool branch_taken_0x1103bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103BCu;
        // 0x1103c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103bc) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x1103C4u;
    // 0x1103c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1103c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1103C8u;
    {
        const bool branch_taken_0x1103c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C8u;
        // 0x1103cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103c8) {
            ctx->pc = 0x110400u;
            goto label_110400;
        }
    }
    ctx->pc = 0x1103D0u;
label_1103d0:
    // 0x1103d0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1103d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1103d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1103d8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1103d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1103dc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1103dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1103e0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1103e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1103e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1103e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1103e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1103ec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1103ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1103f0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1103F0u;
    SET_GPR_U32(ctx, 31, 0x1103F8u);
    ctx->pc = 0x1103F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103F0u;
    // 0x1103f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1103F0u, 0x1103F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103F8u;
label_1103f8:
    // 0x1103f8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1103f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1103fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1103fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_110400:
    // 0x110400: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110404: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x110404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110408: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x110408u;
    {
        const bool branch_taken_0x110408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110408u;
        // 0x11040c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110408) {
            ctx->pc = 0x1103D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1103d0;
        }
    }
    ctx->pc = 0x110410u;
    // 0x110410: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x110410u;
    {
        const bool branch_taken_0x110410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110410u;
        // 0x110414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110410) {
            ctx->pc = 0x110470u;
            goto label_110470;
        }
    }
    ctx->pc = 0x110418u;
label_110418:
    // 0x110418: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x110418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11041c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x110424: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11042c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110430: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110434: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x110434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x110438: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11043c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110440: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110440u;
    {
        const bool branch_taken_0x110440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110440) {
            ctx->pc = 0x110464u;
            goto label_110464;
        }
    }
    ctx->pc = 0x110448u;
    // 0x110448: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x110448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11044c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x110450: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x110450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x110454: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x110454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x110458: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x110458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11045c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x110460: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x110460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_110464:
    // 0x110464: 0x0  nop
    ctx->pc = 0x110464u;
    // NOP
    // 0x110468: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11046c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_110470:
    // 0x110470: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110474: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110478: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x110478u;
    {
        const bool branch_taken_0x110478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110478) {
            ctx->pc = 0x110418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110418;
        }
    }
    ctx->pc = 0x110480u;
    // 0x110480: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x110480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x110484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11048c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11048Cu;
    {
        const bool branch_taken_0x11048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11048Cu;
        // 0x110490: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11048c) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x110494u;
label_110494:
    // 0x110494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110498: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x110498u;
    {
        const bool branch_taken_0x110498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110498u;
        // 0x11049c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110498) {
            ctx->pc = 0x1104C8u;
            goto label_1104c8;
        }
    }
    ctx->pc = 0x1104A0u;
label_1104a0:
    // 0x1104a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1104a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1104a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1104a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1104a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1104ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1104acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1104b0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1104b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1104b4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1104b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1104b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1104b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1104bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1104bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1104c0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1104c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1104c4: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1104c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_1104c8:
    // 0x1104c8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1104c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1104cc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1104ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1104d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1104D0u;
    {
        const bool branch_taken_0x1104d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1104d0) {
            ctx->pc = 0x1104A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1104a0;
        }
    }
    ctx->pc = 0x1104D8u;
    // 0x1104d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1104d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1104dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1104dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1104e0: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x1104E0u;
    {
        const bool branch_taken_0x1104e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104E0u;
        // 0x1104e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104e0) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x1104E8u;
label_1104e8:
    // 0x1104e8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1104e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1104ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1104ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104f0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1104f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1104f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1104f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1104f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1104FCu;
    {
        const bool branch_taken_0x1104fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104FCu;
        // 0x110500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104fc) {
            ctx->pc = 0x110548u;
            goto label_110548;
        }
    }
    ctx->pc = 0x110504u;
label_110504:
    // 0x110504: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x110504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110508: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x110508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11050c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x11050cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110514: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x110514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x110518: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x110518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11051c: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x11051cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x110520: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110524: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110528: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110528u;
    {
        const bool branch_taken_0x110528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110528) {
            ctx->pc = 0x110540u;
            goto label_110540;
        }
    }
    ctx->pc = 0x110530u;
    // 0x110530: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x110530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x110534: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110534u;
    {
        const bool branch_taken_0x110534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110534u;
        // 0x110538: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110534) {
            ctx->pc = 0x110540u;
            goto label_110540;
        }
    }
    ctx->pc = 0x11053Cu;
    // 0x11053c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11053cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_110540:
    // 0x110540: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x110540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x110544: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_110548:
    // 0x110548: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11054c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11054Cu;
    {
        const bool branch_taken_0x11054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11054c) {
            ctx->pc = 0x110504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110504;
        }
    }
    ctx->pc = 0x110554u;
    // 0x110554: 0x14e600f3  bne         $a3, $a2, . + 4 + (0xF3 << 2)
    ctx->pc = 0x110554u;
    {
        const bool branch_taken_0x110554 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110554u;
        // 0x110558: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110554) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x11055Cu;
    // 0x11055c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11055Cu;
    {
        const bool branch_taken_0x11055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11055Cu;
        // 0x110560: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11055c) {
            ctx->pc = 0x1105B4u;
            goto label_1105b4;
        }
    }
    ctx->pc = 0x110564u;
label_110564:
    // 0x110564: 0xc044254  jal         func_110950
    ctx->pc = 0x110564u;
    SET_GPR_U32(ctx, 31, 0x11056Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x110564u, 0x11056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11056Cu;
label_11056c:
    // 0x11056c: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x11056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x110570: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x110570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110574: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x110574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x110578: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11057c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110580: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x110580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110588: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11058c: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x11058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110590: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110594: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110594u;
    {
        const bool branch_taken_0x110594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110594u;
        // 0x110598: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110594) {
            ctx->pc = 0x1105ACu;
            goto label_1105ac;
        }
    }
    ctx->pc = 0x11059Cu;
    // 0x11059c: 0xc042118  jal         func_108460
    ctx->pc = 0x11059Cu;
    SET_GPR_U32(ctx, 31, 0x1105A4u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x11059Cu, 0x1105A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105A4u;
label_1105a4:
    // 0x1105a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1105A4u;
    {
        const bool branch_taken_0x1105a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1105a4) {
            ctx->pc = 0x1105C8u;
            goto label_1105c8;
        }
    }
    ctx->pc = 0x1105ACu;
label_1105ac:
    // 0x1105ac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1105acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1105b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1105b4:
    // 0x1105b4: 0x0  nop
    ctx->pc = 0x1105b4u;
    // NOP
    // 0x1105b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1105b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1105bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1105bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1105c0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1105C0u;
    {
        const bool branch_taken_0x1105c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1105c0) {
            ctx->pc = 0x110564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110564;
        }
    }
    ctx->pc = 0x1105C8u;
label_1105c8:
    // 0x1105c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1105c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1105CCu;
    {
        const bool branch_taken_0x1105cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1105D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105CCu;
        // 0x1105d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105cc) {
            ctx->pc = 0x110604u;
            goto label_110604;
        }
    }
    ctx->pc = 0x1105D4u;
label_1105d4:
    // 0x1105d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1105d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1105d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1105dc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1105dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1105e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1105e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1105e4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1105e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1105e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1105e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1105ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1105ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1105f0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1105f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1105f4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1105F4u;
    SET_GPR_U32(ctx, 31, 0x1105FCu);
    ctx->pc = 0x1105F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105F4u;
    // 0x1105f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1105F4u, 0x1105FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105FCu;
label_1105fc:
    // 0x1105fc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1105fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_110604:
    // 0x110604: 0x0  nop
    ctx->pc = 0x110604u;
    // NOP
    // 0x110608: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11060c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11060cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110610: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110610u;
    {
        const bool branch_taken_0x110610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110610) {
            ctx->pc = 0x1105D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1105d4;
        }
    }
    ctx->pc = 0x110618u;
    // 0x110618: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11061c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110620: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x110620u;
    {
        const bool branch_taken_0x110620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110620u;
        // 0x110624: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110620) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x110628u;
label_110628:
    // 0x110628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11062c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11062Cu;
    {
        const bool branch_taken_0x11062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11062Cu;
        // 0x110630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11062c) {
            ctx->pc = 0x11065Cu;
            goto label_11065c;
        }
    }
    ctx->pc = 0x110634u;
label_110634:
    // 0x110634: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x110634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110638: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11063c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110640: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x110644: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110648: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11064c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11064cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110654: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110658: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_11065c:
    // 0x11065c: 0x0  nop
    ctx->pc = 0x11065cu;
    // NOP
    // 0x110660: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110664: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110668: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110668u;
    {
        const bool branch_taken_0x110668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110668) {
            ctx->pc = 0x110634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110634;
        }
    }
    ctx->pc = 0x110670u;
    // 0x110670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110678: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x110678u;
    {
        const bool branch_taken_0x110678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110678u;
        // 0x11067c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110678) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x110680u;
label_110680:
    // 0x110680: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110688: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x110688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11068c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11068cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110694: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x110694u;
    {
        const bool branch_taken_0x110694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110694u;
        // 0x110698: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110694) {
            ctx->pc = 0x1106E0u;
            goto label_1106e0;
        }
    }
    ctx->pc = 0x11069Cu;
label_11069c:
    // 0x11069c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1106a0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1106a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1106a4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1106a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1106a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1106a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1106ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1106acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1106b0: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1106b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1106b4: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1106b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1106b8: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1106b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1106bc: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1106bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1106c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1106C0u;
    {
        const bool branch_taken_0x1106c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1106c0) {
            ctx->pc = 0x1106D8u;
            goto label_1106d8;
        }
    }
    ctx->pc = 0x1106C8u;
    // 0x1106c8: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x1106c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x1106cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1106CCu;
    {
        const bool branch_taken_0x1106cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106CCu;
        // 0x1106d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106cc) {
            ctx->pc = 0x1106D8u;
            goto label_1106d8;
        }
    }
    ctx->pc = 0x1106D4u;
    // 0x1106d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1106d8:
    // 0x1106d8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1106d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1106dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1106dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1106e0:
    // 0x1106e0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1106e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1106e4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1106E4u;
    {
        const bool branch_taken_0x1106e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1106e4) {
            ctx->pc = 0x11069Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11069c;
        }
    }
    ctx->pc = 0x1106ECu;
    // 0x1106ec: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x1106ECu;
    {
        const bool branch_taken_0x1106ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1106F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106ECu;
        // 0x1106f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106ec) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x1106F4u;
    // 0x1106f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1106F4u;
    {
        const bool branch_taken_0x1106f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106F4u;
        // 0x1106f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106f4) {
            ctx->pc = 0x11072Cu;
            goto label_11072c;
        }
    }
    ctx->pc = 0x1106FCu;
label_1106fc:
    // 0x1106fc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1106fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110700: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x110700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x110704: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110708: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11070c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11070cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110710: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110718: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11071c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11071Cu;
    SET_GPR_U32(ctx, 31, 0x110724u);
    ctx->pc = 0x110720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11071Cu;
    // 0x110720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11071Cu, 0x110724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110724u;
label_110724:
    // 0x110724: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x110724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11072c:
    // 0x11072c: 0x0  nop
    ctx->pc = 0x11072cu;
    // NOP
    // 0x110730: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110734: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x110734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110738: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110738u;
    {
        const bool branch_taken_0x110738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110738) {
            ctx->pc = 0x1106FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1106fc;
        }
    }
    ctx->pc = 0x110740u;
    // 0x110740: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110748: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x110748u;
    {
        const bool branch_taken_0x110748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110748u;
        // 0x11074c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110748) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x110750u;
label_110750:
    // 0x110750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110754: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x110754u;
    {
        const bool branch_taken_0x110754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110754u;
        // 0x110758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110754) {
            ctx->pc = 0x110784u;
            goto label_110784;
        }
    }
    ctx->pc = 0x11075Cu;
label_11075c:
    // 0x11075c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x110764: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110768: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11076c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11076cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110770: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x110774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11077c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110780: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_110784:
    // 0x110784: 0x0  nop
    ctx->pc = 0x110784u;
    // NOP
    // 0x110788: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11078c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11078cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110790: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110790u;
    {
        const bool branch_taken_0x110790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110790) {
            ctx->pc = 0x11075Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11075c;
        }
    }
    ctx->pc = 0x110798u;
    // 0x110798: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11079c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1107a0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1107A0u;
    {
        const bool branch_taken_0x1107a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107A0u;
        // 0x1107a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107a0) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x1107A8u;
label_1107a8:
    // 0x1107a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1107a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1107ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1107acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107b0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1107b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1107b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1107b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1107b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1107BCu;
    {
        const bool branch_taken_0x1107bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107BCu;
        // 0x1107c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107bc) {
            ctx->pc = 0x110808u;
            goto label_110808;
        }
    }
    ctx->pc = 0x1107C4u;
label_1107c4:
    // 0x1107c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1107c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1107c8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1107c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1107cc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1107ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1107d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1107d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1107d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1107d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1107d8: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1107d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1107dc: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1107dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1107e0: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1107e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1107e4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1107e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1107e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1107E8u;
    {
        const bool branch_taken_0x1107e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1107e8) {
            ctx->pc = 0x110800u;
            goto label_110800;
        }
    }
    ctx->pc = 0x1107F0u;
    // 0x1107f0: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x1107f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x1107f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1107F4u;
    {
        const bool branch_taken_0x1107f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107F4u;
        // 0x1107f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107f4) {
            ctx->pc = 0x110800u;
            goto label_110800;
        }
    }
    ctx->pc = 0x1107FCu;
    // 0x1107fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1107fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_110800:
    // 0x110800: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x110800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x110804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_110808:
    // 0x110808: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x110808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11080c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11080Cu;
    {
        const bool branch_taken_0x11080c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11080c) {
            ctx->pc = 0x1107C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1107c4;
        }
    }
    ctx->pc = 0x110814u;
    // 0x110814: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x110814u;
    {
        const bool branch_taken_0x110814 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x110818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110814u;
        // 0x110818: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110814) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x11081Cu;
    // 0x11081c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11081Cu;
    {
        const bool branch_taken_0x11081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11081Cu;
        // 0x110820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11081c) {
            ctx->pc = 0x110854u;
            goto label_110854;
        }
    }
    ctx->pc = 0x110824u;
label_110824:
    // 0x110824: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x110824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11082c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110830: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x110830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x110834: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11083c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110840: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110844: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x110844u;
    SET_GPR_U32(ctx, 31, 0x11084Cu);
    ctx->pc = 0x110848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110844u;
    // 0x110848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x110844u, 0x11084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11084Cu;
label_11084c:
    // 0x11084c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x11084cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x110850: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x110850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_110854:
    // 0x110854: 0x0  nop
    ctx->pc = 0x110854u;
    // NOP
    // 0x110858: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11085c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11085cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110860: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x110860u;
    {
        const bool branch_taken_0x110860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110860u;
        // 0x110864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110860) {
            ctx->pc = 0x110824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110824;
        }
    }
    ctx->pc = 0x110868u;
    // 0x110868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11086c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11086Cu;
    {
        const bool branch_taken_0x11086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11086Cu;
        // 0x110870: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11086c) {
            ctx->pc = 0x1108B8u;
            goto label_1108b8;
        }
    }
    ctx->pc = 0x110874u;
label_110874:
    // 0x110874: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x110874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110878: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11087c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x110880: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x110880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110884: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x110884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110888: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x110888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11088c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110890: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110894: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110898: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11089c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11089Cu;
    {
        const bool branch_taken_0x11089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11089c) {
            ctx->pc = 0x1108B0u;
            goto label_1108b0;
        }
    }
    ctx->pc = 0x1108A4u;
    // 0x1108a4: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x1108a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1108a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1108a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1108ac: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x1108acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
label_1108b0:
    // 0x1108b0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1108b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1108b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1108b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1108b8:
    // 0x1108b8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1108b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1108bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1108bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1108c0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1108C0u;
    {
        const bool branch_taken_0x1108c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1108c0) {
            ctx->pc = 0x110874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110874;
        }
    }
    ctx->pc = 0x1108C8u;
    // 0x1108c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1108c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1108cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1108d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1108D0u;
    {
        const bool branch_taken_0x1108d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108D0u;
        // 0x1108d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108d0) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x1108D8u;
label_1108d8:
    // 0x1108d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1108d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1108DCu;
    {
        const bool branch_taken_0x1108dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1108E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108DCu;
        // 0x1108e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108dc) {
            ctx->pc = 0x11090Cu;
            goto label_11090c;
        }
    }
    ctx->pc = 0x1108E4u;
label_1108e4:
    // 0x1108e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1108e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1108e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1108e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1108ec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1108ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1108f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1108f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1108f4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1108f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1108f8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1108f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1108fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1108fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110904: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110908: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_11090c:
    // 0x11090c: 0x0  nop
    ctx->pc = 0x11090cu;
    // NOP
    // 0x110910: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x110910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x110914: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x110914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110918: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x110918u;
    {
        const bool branch_taken_0x110918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110918) {
            ctx->pc = 0x1108E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1108e4;
        }
    }
    ctx->pc = 0x110920u;
    // 0x110920: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x110920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_110924:
    // 0x110924: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x110924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11092c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11092cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x110930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x110934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x110938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11093c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11093cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110940: 0x3e00008  jr          $ra
    ctx->pc = 0x110940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110940u;
        // 0x110944: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110948u;
}
