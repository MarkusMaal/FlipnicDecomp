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

// Function: FUN_001435d0
// Address: 0x1435d0 - 0x143a7c
void FUN_001435d0_0x1435d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001435d0_0x1435d0");
#endif

    switch (ctx->pc) {
        case 0x14364cu: goto label_14364c;
        case 0x143654u: goto label_143654;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436fcu: goto label_1436fc;
        case 0x14375cu: goto label_14375c;
        case 0x1437dcu: goto label_1437dc;
        case 0x143818u: goto label_143818;
        case 0x14388cu: goto label_14388c;
        case 0x1438c8u: goto label_1438c8;
        case 0x1438e8u: goto label_1438e8;
        case 0x1438f0u: goto label_1438f0;
        case 0x143914u: goto label_143914;
        case 0x143968u: goto label_143968;
        case 0x1439b4u: goto label_1439b4;
        case 0x143a14u: goto label_143a14;
        case 0x143a3cu: goto label_143a3c;
        case 0x143a50u: goto label_143a50;
        default: break;
    }

    ctx->pc = 0x1435d0u;

    // 0x1435d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1435d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1435d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1435d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1435d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1435d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1435dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1435dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1435e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1435e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1435e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1435e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1435e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1435e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1435ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1435f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1435f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1435f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1435f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1435f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1435fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143600: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x143600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143604: 0x12600112  beqz        $s3, . + 4 + (0x112 << 2)
    ctx->pc = 0x143604u;
    {
        const bool branch_taken_0x143604 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x143608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143604u;
        // 0x143608: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143604) {
            ctx->pc = 0x143A50u;
            goto label_143a50;
        }
    }
    ctx->pc = 0x14360Cu;
    // 0x14360c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x14360cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x143610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x143610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x143614: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143618: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x143618u;
    {
        const bool branch_taken_0x143618 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143618) {
            ctx->pc = 0x143634u;
            goto label_143634;
        }
    }
    ctx->pc = 0x143620u;
    // 0x143620: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143624: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x143624u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x143628: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x143628u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14362c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14362Cu;
    {
        const bool branch_taken_0x14362c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14362c) {
            ctx->pc = 0x143654u;
            goto label_143654;
        }
    }
    ctx->pc = 0x143634u;
label_143634:
    // 0x143634: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143638: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x143638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14363c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14363cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x143640: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x143640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x143644: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x143644u;
    SET_GPR_U32(ctx, 31, 0x14364Cu);
    ctx->pc = 0x143648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143644u;
    // 0x143648: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x143644u, 0x14364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14364Cu;
label_14364c:
    // 0x14364c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14364Cu;
    SET_GPR_U32(ctx, 31, 0x143654u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14364Cu, 0x143654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143654u;
label_143654:
    // 0x143654: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143658: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x143658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14365c: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x143660: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x143660u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x143664: 0x14200079  bnez        $at, . + 4 + (0x79 << 2)
    ctx->pc = 0x143664u;
    {
        const bool branch_taken_0x143664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143664) {
            ctx->pc = 0x14384Cu;
            goto label_14384c;
        }
    }
    ctx->pc = 0x14366Cu;
    // 0x14366c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x143670: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x143670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x143674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143678: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14367c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14367Cu;
    {
        const bool branch_taken_0x14367c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x143680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14367Cu;
        // 0x143680: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14367c) {
            ctx->pc = 0x14368Cu;
            goto label_14368c;
        }
    }
    ctx->pc = 0x143684u;
    // 0x143684: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x143688: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x143688u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
label_14368c:
    // 0x14368c: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14368cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143690: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x143690u;
    {
        const bool branch_taken_0x143690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143690u;
        // 0x143694: 0x134900  sll         $t1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143690) {
            ctx->pc = 0x14374Cu;
            goto label_14374c;
        }
    }
    ctx->pc = 0x143698u;
    // 0x143698: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x143698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14369c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14369Cu;
    {
        const bool branch_taken_0x14369c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14369Cu;
        // 0x1436a0: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14369c) {
            ctx->pc = 0x1436ECu;
            goto label_1436ec;
        }
    }
    ctx->pc = 0x1436A4u;
label_1436a4:
    // 0x1436a4: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1436A4u;
    {
        const bool branch_taken_0x1436a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436a4) {
            ctx->pc = 0x1436CCu;
            goto label_1436cc;
        }
    }
    ctx->pc = 0x1436ACu;
    // 0x1436ac: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1436acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1436b0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1436b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1436b4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1436b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1436b8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1436b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1436bc: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x1436bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1436c0: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1436c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1436c4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1436c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1436c8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1436c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1436cc:
    // 0x1436cc: 0x0  nop
    ctx->pc = 0x1436ccu;
    // NOP
    // 0x1436d0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1436d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1436d4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1436d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1436d8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1436d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1436dc: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1436e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1436e4: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1436E4u;
    {
        const bool branch_taken_0x1436e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1436E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436E4u;
        // 0x1436e8: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436e4) {
            ctx->pc = 0x1436A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1436a4;
        }
    }
    ctx->pc = 0x1436ECu;
label_1436ec:
    // 0x1436ec: 0x0  nop
    ctx->pc = 0x1436ecu;
    // NOP
    // 0x1436f0: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1436f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1436f4: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1436F4u;
    {
        const bool branch_taken_0x1436f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436F4u;
        // 0x1436f8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436f4) {
            ctx->pc = 0x14380Cu;
            goto label_14380c;
        }
    }
    ctx->pc = 0x1436FCu;
label_1436fc:
    // 0x1436fc: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1436FCu;
    {
        const bool branch_taken_0x1436fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436fc) {
            ctx->pc = 0x143724u;
            goto label_143724;
        }
    }
    ctx->pc = 0x143704u;
    // 0x143704: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x143704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143708: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x143708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14370c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x14370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143710: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x143710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143714: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x143714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x143718: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x143718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x14371c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x14371cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x143720: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x143720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_143724:
    // 0x143724: 0x0  nop
    ctx->pc = 0x143724u;
    // NOP
    // 0x143728: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14372c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x143730: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x143730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x143734: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x143734u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143738: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14373c: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14373Cu;
    {
        const bool branch_taken_0x14373c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14373Cu;
        // 0x143740: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14373c) {
            ctx->pc = 0x1436FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1436fc;
        }
    }
    ctx->pc = 0x143744u;
    // 0x143744: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x143744u;
    {
        const bool branch_taken_0x143744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143744) {
            ctx->pc = 0x14380Cu;
            goto label_14380c;
        }
    }
    ctx->pc = 0x14374Cu;
label_14374c:
    // 0x14374c: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x14374cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x143750: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x143750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143754: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x143754u;
    {
        const bool branch_taken_0x143754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143754u;
        // 0x143758: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143754) {
            ctx->pc = 0x1437A4u;
            goto label_1437a4;
        }
    }
    ctx->pc = 0x14375Cu;
label_14375c:
    // 0x14375c: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14375Cu;
    {
        const bool branch_taken_0x14375c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x14375c) {
            ctx->pc = 0x143784u;
            goto label_143784;
        }
    }
    ctx->pc = 0x143764u;
    // 0x143764: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x143764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143768: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x143768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14376c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x14376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143770: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x143770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143774: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x143774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x143778: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x143778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x14377c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x14377cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x143780: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x143780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_143784:
    // 0x143784: 0x0  nop
    ctx->pc = 0x143784u;
    // NOP
    // 0x143788: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14378c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14378cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x143790: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x143790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x143794: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x143794u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14379c: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14379Cu;
    {
        const bool branch_taken_0x14379c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1437A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14379Cu;
        // 0x1437a0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14379c) {
            ctx->pc = 0x14375Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14375c;
        }
    }
    ctx->pc = 0x1437A4u;
label_1437a4:
    // 0x1437a4: 0x0  nop
    ctx->pc = 0x1437a4u;
    // NOP
    // 0x1437a8: 0xd32023  subu        $a0, $a2, $s3
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1437ac: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1437b0: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1437b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1437b4: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1437b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1437b8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1437B8u;
    {
        const bool branch_taken_0x1437b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1437BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437B8u;
        // 0x1437bc: 0x243082b  sltu        $at, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437b8) {
            ctx->pc = 0x1437CCu;
            goto label_1437cc;
        }
    }
    ctx->pc = 0x1437C0u;
    // 0x1437c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1437C0u;
    {
        const bool branch_taken_0x1437c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437c0) {
            ctx->pc = 0x1437CCu;
            goto label_1437cc;
        }
    }
    ctx->pc = 0x1437C8u;
    // 0x1437c8: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_1437cc:
    // 0x1437cc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1437ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1437d0: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x1437d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1437d4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1437D4u;
    {
        const bool branch_taken_0x1437d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437d4) {
            ctx->pc = 0x14380Cu;
            goto label_14380c;
        }
    }
    ctx->pc = 0x1437DCu;
label_1437dc:
    // 0x1437dc: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x1437e0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1437e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1437e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1437e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1437e8: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1437ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1437ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1437f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1437f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1437f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1437f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1437fc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1437fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x143800: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x143804: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x143804u;
    {
        const bool branch_taken_0x143804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143804u;
        // 0x143808: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143804) {
            ctx->pc = 0x1437DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1437dc;
        }
    }
    ctx->pc = 0x14380Cu;
label_14380c:
    // 0x14380c: 0x0  nop
    ctx->pc = 0x14380cu;
    // NOP
    // 0x143810: 0x1260008f  beqz        $s3, . + 4 + (0x8F << 2)
    ctx->pc = 0x143810u;
    {
        const bool branch_taken_0x143810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x143810) {
            ctx->pc = 0x143A50u;
            goto label_143a50;
        }
    }
    ctx->pc = 0x143818u;
label_143818:
    // 0x143818: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14381c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143820: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x143820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x143824: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x143824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143828: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x143828u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x14382c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14382cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143830: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x143830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x143834: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x143834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143838: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x143838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x14383c: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x14383Cu;
    {
        const bool branch_taken_0x14383c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x143840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14383Cu;
        // 0x143840: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14383c) {
            ctx->pc = 0x143818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143818;
        }
    }
    ctx->pc = 0x143844u;
    // 0x143844: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x143844u;
    {
        const bool branch_taken_0x143844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143844u;
        // 0x143848: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143844) {
            ctx->pc = 0x143A54u;
            goto label_143a54;
        }
    }
    ctx->pc = 0x14384Cu;
label_14384c:
    // 0x14384c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x14384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x143850: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x143850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x143854: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x143854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x143858: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x143858u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x14385c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14385cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x143860: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143864: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143868: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143868u;
    {
        const bool branch_taken_0x143868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143868u;
        // 0x14386c: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143868) {
            ctx->pc = 0x143878u;
            goto label_143878;
        }
    }
    ctx->pc = 0x143870u;
    // 0x143870: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143870u;
    {
        const bool branch_taken_0x143870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143870) {
            ctx->pc = 0x143880u;
            goto label_143880;
        }
    }
    ctx->pc = 0x143878u;
label_143878:
    // 0x143878: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x143878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14387c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14387cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_143880:
    // 0x143880: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x143880u;
    {
        const bool branch_taken_0x143880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143880u;
        // 0x143884: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143880) {
            ctx->pc = 0x1438BCu;
            goto label_1438bc;
        }
    }
    ctx->pc = 0x143888u;
    // 0x143888: 0x3c0107ff  lui         $at, 0x7FF
    ctx->pc = 0x143888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
label_14388c:
    // 0x14388c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x14388cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x143890: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x143890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x143894: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x143894u;
    {
        const bool branch_taken_0x143894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143894) {
            ctx->pc = 0x1438A4u;
            goto label_1438a4;
        }
    }
    ctx->pc = 0x14389Cu;
    // 0x14389c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14389Cu;
    {
        const bool branch_taken_0x14389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14389Cu;
        // 0x1438a0: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14389c) {
            ctx->pc = 0x1438ACu;
            goto label_1438ac;
        }
    }
    ctx->pc = 0x1438A4u;
label_1438a4:
    // 0x1438a4: 0x0  nop
    ctx->pc = 0x1438a4u;
    // NOP
    // 0x1438a8: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x1438a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1438ac:
    // 0x1438ac: 0x0  nop
    ctx->pc = 0x1438acu;
    // NOP
    // 0x1438b0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x1438b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1438b4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1438B4u;
    {
        const bool branch_taken_0x1438b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1438B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438B4u;
        // 0x1438b8: 0x3c0107ff  lui         $at, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438b4) {
            ctx->pc = 0x14388Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14388c;
        }
    }
    ctx->pc = 0x1438BCu;
label_1438bc:
    // 0x1438bc: 0x0  nop
    ctx->pc = 0x1438bcu;
    // NOP
    // 0x1438c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1438C0u;
    SET_GPR_U32(ctx, 31, 0x1438C8u);
    ctx->pc = 0x1438C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438C0u;
    // 0x1438c4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1438C0u, 0x1438C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438C8u;
label_1438c8:
    // 0x1438c8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1438c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438cc: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1438CCu;
    {
        const bool branch_taken_0x1438cc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1438D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438CCu;
        // 0x1438d0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438cc) {
            ctx->pc = 0x1438F0u;
            goto label_1438f0;
        }
    }
    ctx->pc = 0x1438D4u;
    // 0x1438d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1438d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1438d8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1438dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1438dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1438e0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1438E0u;
    SET_GPR_U32(ctx, 31, 0x1438E8u);
    ctx->pc = 0x1438E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438E0u;
    // 0x1438e4: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1438E0u, 0x1438E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438E8u;
label_1438e8:
    // 0x1438e8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1438E8u;
    SET_GPR_U32(ctx, 31, 0x1438F0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1438E8u, 0x1438F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438F0u;
label_1438f0:
    // 0x1438f0: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x1438f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x1438f4: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x1438f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x1438f8: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x1438f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1438fc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1438fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143900: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x143900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x143904: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x143904u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x143908: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x143908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14390c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14390Cu;
    {
        const bool branch_taken_0x14390c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14390Cu;
        // 0x143910: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14390c) {
            ctx->pc = 0x14395Cu;
            goto label_14395c;
        }
    }
    ctx->pc = 0x143914u;
label_143914:
    // 0x143914: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143914u;
    {
        const bool branch_taken_0x143914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143914) {
            ctx->pc = 0x14393Cu;
            goto label_14393c;
        }
    }
    ctx->pc = 0x14391Cu;
    // 0x14391c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143920: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x143920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143924: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x143924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143928: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x143928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14392c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x14392cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x143930: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x143930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x143934: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x143934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x143938: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x143938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_14393c:
    // 0x14393c: 0x0  nop
    ctx->pc = 0x14393cu;
    // NOP
    // 0x143940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143944: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x143944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x143948: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14394c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x14394cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x143950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x143950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x143954: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x143954u;
    {
        const bool branch_taken_0x143954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143954u;
        // 0x143958: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143954) {
            ctx->pc = 0x143914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143914;
        }
    }
    ctx->pc = 0x14395Cu;
label_14395c:
    // 0x14395c: 0x0  nop
    ctx->pc = 0x14395cu;
    // NOP
    // 0x143960: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x143960u;
    {
        const bool branch_taken_0x143960 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x143960) {
            ctx->pc = 0x1439A8u;
            goto label_1439a8;
        }
    }
    ctx->pc = 0x143968u;
label_143968:
    // 0x143968: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143968u;
    {
        const bool branch_taken_0x143968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x143968) {
            ctx->pc = 0x143990u;
            goto label_143990;
        }
    }
    ctx->pc = 0x143970u;
    // 0x143970: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x143970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143974: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x143974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143978: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x143978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14397c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143980: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x143980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x143984: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x143984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x143988: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x143988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x14398c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x14398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_143990:
    // 0x143990: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143994: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x143994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143998: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14399c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1439a0: 0x1660fff1  bnez        $s3, . + 4 + (-0xF << 2)
    ctx->pc = 0x1439A0u;
    {
        const bool branch_taken_0x1439a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1439A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439A0u;
        // 0x1439a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439a0) {
            ctx->pc = 0x143968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143968;
        }
    }
    ctx->pc = 0x1439A8u;
label_1439a8:
    // 0x1439a8: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x1439a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1439ac: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1439ACu;
    {
        const bool branch_taken_0x1439ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439ac) {
            ctx->pc = 0x1439FCu;
            goto label_1439fc;
        }
    }
    ctx->pc = 0x1439B4u;
label_1439b4:
    // 0x1439b4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1439B4u;
    {
        const bool branch_taken_0x1439b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1439b4) {
            ctx->pc = 0x1439DCu;
            goto label_1439dc;
        }
    }
    ctx->pc = 0x1439BCu;
    // 0x1439bc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1439bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1439c0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1439c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1439c4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1439c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1439c8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1439c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1439cc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1439ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1439d0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1439d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1439d4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1439d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1439d8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1439d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1439dc:
    // 0x1439dc: 0x0  nop
    ctx->pc = 0x1439dcu;
    // NOP
    // 0x1439e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1439e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1439e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1439e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1439e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1439e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1439ec: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1439ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1439f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1439f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1439f4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1439F4u;
    {
        const bool branch_taken_0x1439f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1439F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439F4u;
        // 0x1439f8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439f4) {
            ctx->pc = 0x1439B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1439b4;
        }
    }
    ctx->pc = 0x1439FCu;
label_1439fc:
    // 0x1439fc: 0x0  nop
    ctx->pc = 0x1439fcu;
    // NOP
    // 0x143a00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x143a04: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x143A04u;
    {
        const bool branch_taken_0x143a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x143A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A04u;
        // 0x143a08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a04) {
            ctx->pc = 0x143A34u;
            goto label_143a34;
        }
    }
    ctx->pc = 0x143A0Cu;
    // 0x143a0c: 0xc050ea0  jal         func_143A80
    ctx->pc = 0x143A0Cu;
    SET_GPR_U32(ctx, 31, 0x143A14u);
    ctx->pc = 0x143A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A80u, 0x143A0Cu, 0x143A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A14u;
label_143a14:
    // 0x143a14: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x143a18: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x143a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x143a1c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x143a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x143a20: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x143a20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x143a24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x143a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143a28: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143a2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x143a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x143a30: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x143a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_143a34:
    // 0x143a34: 0xc0510d8  jal         func_144360
    ctx->pc = 0x143A34u;
    SET_GPR_U32(ctx, 31, 0x143A3Cu);
    ctx->pc = 0x143A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A34u;
    // 0x143a38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144360u, 0x143A34u, 0x143A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A3Cu;
label_143a3c:
    // 0x143a3c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x143a40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143A40u;
    {
        const bool branch_taken_0x143a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a40) {
            ctx->pc = 0x143A50u;
            goto label_143a50;
        }
    }
    ctx->pc = 0x143A48u;
    // 0x143a48: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143A48u;
    SET_GPR_U32(ctx, 31, 0x143A50u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143A48u, 0x143A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A50u;
label_143a50:
    // 0x143a50: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x143a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_143a54:
    // 0x143a54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x143a54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143a58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x143a58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143a5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143a5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143a60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143a60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143a64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143a68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a74: 0x3e00008  jr          $ra
    ctx->pc = 0x143A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A74u;
        // 0x143a78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A7Cu;
}
