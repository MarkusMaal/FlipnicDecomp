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

// Function: FUN_001197c0
// Address: 0x1197c0 - 0x119914
void FUN_001197c0_0x1197c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001197c0_0x1197c0");
#endif

    switch (ctx->pc) {
        case 0x1197c0u: goto label_1197c0;
        case 0x1197c4u: goto label_1197c4;
        case 0x1197c8u: goto label_1197c8;
        case 0x1197ccu: goto label_1197cc;
        case 0x1197d0u: goto label_1197d0;
        case 0x1197d4u: goto label_1197d4;
        case 0x1197d8u: goto label_1197d8;
        case 0x1197dcu: goto label_1197dc;
        case 0x1197e0u: goto label_1197e0;
        case 0x1197e4u: goto label_1197e4;
        case 0x1197e8u: goto label_1197e8;
        case 0x1197ecu: goto label_1197ec;
        case 0x1197f0u: goto label_1197f0;
        case 0x1197f4u: goto label_1197f4;
        case 0x1197f8u: goto label_1197f8;
        case 0x1197fcu: goto label_1197fc;
        case 0x119800u: goto label_119800;
        case 0x119804u: goto label_119804;
        case 0x119808u: goto label_119808;
        case 0x11980cu: goto label_11980c;
        case 0x119810u: goto label_119810;
        case 0x119814u: goto label_119814;
        case 0x119818u: goto label_119818;
        case 0x11981cu: goto label_11981c;
        case 0x119820u: goto label_119820;
        case 0x119824u: goto label_119824;
        case 0x119828u: goto label_119828;
        case 0x11982cu: goto label_11982c;
        case 0x119830u: goto label_119830;
        case 0x119834u: goto label_119834;
        case 0x119838u: goto label_119838;
        case 0x11983cu: goto label_11983c;
        case 0x119840u: goto label_119840;
        case 0x119844u: goto label_119844;
        case 0x119848u: goto label_119848;
        case 0x11984cu: goto label_11984c;
        case 0x119850u: goto label_119850;
        case 0x119854u: goto label_119854;
        case 0x119858u: goto label_119858;
        case 0x11985cu: goto label_11985c;
        case 0x119860u: goto label_119860;
        case 0x119864u: goto label_119864;
        case 0x119868u: goto label_119868;
        case 0x11986cu: goto label_11986c;
        case 0x119870u: goto label_119870;
        case 0x119874u: goto label_119874;
        case 0x119878u: goto label_119878;
        case 0x11987cu: goto label_11987c;
        case 0x119880u: goto label_119880;
        case 0x119884u: goto label_119884;
        case 0x119888u: goto label_119888;
        case 0x11988cu: goto label_11988c;
        case 0x119890u: goto label_119890;
        case 0x119894u: goto label_119894;
        case 0x119898u: goto label_119898;
        case 0x11989cu: goto label_11989c;
        case 0x1198a0u: goto label_1198a0;
        case 0x1198a4u: goto label_1198a4;
        case 0x1198a8u: goto label_1198a8;
        case 0x1198acu: goto label_1198ac;
        case 0x1198b0u: goto label_1198b0;
        case 0x1198b4u: goto label_1198b4;
        case 0x1198b8u: goto label_1198b8;
        case 0x1198bcu: goto label_1198bc;
        case 0x1198c0u: goto label_1198c0;
        case 0x1198c4u: goto label_1198c4;
        case 0x1198c8u: goto label_1198c8;
        case 0x1198ccu: goto label_1198cc;
        case 0x1198d0u: goto label_1198d0;
        case 0x1198d4u: goto label_1198d4;
        case 0x1198d8u: goto label_1198d8;
        case 0x1198dcu: goto label_1198dc;
        case 0x1198e0u: goto label_1198e0;
        case 0x1198e4u: goto label_1198e4;
        case 0x1198e8u: goto label_1198e8;
        case 0x1198ecu: goto label_1198ec;
        case 0x1198f0u: goto label_1198f0;
        case 0x1198f4u: goto label_1198f4;
        case 0x1198f8u: goto label_1198f8;
        case 0x1198fcu: goto label_1198fc;
        case 0x119900u: goto label_119900;
        case 0x119904u: goto label_119904;
        case 0x119908u: goto label_119908;
        case 0x11990cu: goto label_11990c;
        case 0x119910u: goto label_119910;
        default: break;
    }

    ctx->pc = 0x1197c0u;

label_1197c0:
    // 0x1197c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1197c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1197c4:
    // 0x1197c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1197c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1197c8:
    // 0x1197c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1197c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1197cc:
    // 0x1197cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1197ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1197d0:
    // 0x1197d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1197d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1197d4:
    // 0x1197d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1197d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1197d8:
    // 0x1197d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1197d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1197dc:
    // 0x1197dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1197dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1197e0:
    // 0x1197e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1197e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1197e4:
    // 0x1197e4: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1197e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1197e8:
    // 0x1197e8: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x1197e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1197ec:
    // 0x1197ec: 0x90a30022  lbu         $v1, 0x22($a1)
    ctx->pc = 0x1197ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
label_1197f0:
    // 0x1197f0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1197f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1197f4:
    // 0x1197f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1197f8:
    if (ctx->pc == 0x1197F8u) {
        ctx->pc = 0x1197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197F4u;
        // 0x1197f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1197FCu;
        goto label_1197fc;
    }
    ctx->pc = 0x1197F4u;
    {
        const bool branch_taken_0x1197f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197F4u;
        // 0x1197f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197f4) {
            ctx->pc = 0x119804u;
            goto label_119804;
        }
    }
    ctx->pc = 0x1197FCu;
label_1197fc:
    // 0x1197fc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_119800:
    if (ctx->pc == 0x119800u) {
        ctx->pc = 0x119800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197FCu;
        // 0x119800: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119804u;
        goto label_119804;
    }
    ctx->pc = 0x1197FCu;
    {
        const bool branch_taken_0x1197fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197FCu;
        // 0x119800: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197fc) {
            ctx->pc = 0x1198F4u;
            goto label_1198f4;
        }
    }
    ctx->pc = 0x119804u;
label_119804:
    // 0x119804: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x119804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
label_119808:
    // 0x119808: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_11980c:
    if (ctx->pc == 0x11980Cu) {
        ctx->pc = 0x119810u;
        goto label_119810;
    }
    ctx->pc = 0x119808u;
    {
        const bool branch_taken_0x119808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119808) {
            ctx->pc = 0x119864u;
            goto label_119864;
        }
    }
    ctx->pc = 0x119810u;
label_119810:
    // 0x119810: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x119810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_119814:
    // 0x119814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_119818:
    // 0x119818: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x119818u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_11981c:
    // 0x11981c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x11981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_119820:
    // 0x119820: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x119820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_119824:
    // 0x119824: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_119828:
    // 0x119828: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11982c:
    // 0x11982c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_119830:
    if (ctx->pc == 0x119830u) {
        ctx->pc = 0x119834u;
        goto label_119834;
    }
    ctx->pc = 0x11982Cu;
    {
        const bool branch_taken_0x11982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11982c) {
            ctx->pc = 0x119884u;
            goto label_119884;
        }
    }
    ctx->pc = 0x119834u;
label_119834:
    // 0x119834: 0x10000013  b           . + 4 + (0x13 << 2)
label_119838:
    if (ctx->pc == 0x119838u) {
        ctx->pc = 0x119838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119834u;
        // 0x119838: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11983Cu;
        goto label_11983c;
    }
    ctx->pc = 0x119834u;
    {
        const bool branch_taken_0x119834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119834u;
        // 0x119838: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119834) {
            ctx->pc = 0x119884u;
            goto label_119884;
        }
    }
    ctx->pc = 0x11983Cu;
label_11983c:
    // 0x11983c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_119840:
    // 0x119840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_119844:
    // 0x119844: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x119844u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_119848:
    // 0x119848: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x119848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_11984c:
    // 0x11984c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x11984cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_119850:
    // 0x119850: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_119854:
    // 0x119854: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_119858:
    // 0x119858: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_11985c:
    if (ctx->pc == 0x11985Cu) {
        ctx->pc = 0x119860u;
        goto label_119860;
    }
    ctx->pc = 0x119858u;
    {
        const bool branch_taken_0x119858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119858) {
            ctx->pc = 0x119864u;
            goto label_119864;
        }
    }
    ctx->pc = 0x119860u;
label_119860:
    // 0x119860: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x119860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_119864:
    // 0x119864: 0x0  nop
    ctx->pc = 0x119864u;
    // NOP
label_119868:
    // 0x119868: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x119868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_11986c:
    // 0x11986c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_119870:
    // 0x119870: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x119870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119874:
    // 0x119874: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x119874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_119878:
    // 0x119878: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_11987c:
    if (ctx->pc == 0x11987Cu) {
        ctx->pc = 0x11987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119878u;
        // 0x11987c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119880u;
        goto label_119880;
    }
    ctx->pc = 0x119878u;
    {
        const bool branch_taken_0x119878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119878u;
        // 0x11987c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119878) {
            ctx->pc = 0x11983Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11983c;
        }
    }
    ctx->pc = 0x119880u;
label_119880:
    // 0x119880: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x119880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_119884:
    // 0x119884: 0x86900000  lh          $s0, 0x0($s4)
    ctx->pc = 0x119884u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_119888:
    // 0x119888: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x119888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_11988c:
    // 0x11988c: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x11988cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119890:
    // 0x119890: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119894:
    // 0x119894: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119898:
    // 0x119898: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11989c:
    // 0x11989c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1198a0:
    // 0x1198a0: 0x320f809  jalr        $t9
label_1198a4:
    if (ctx->pc == 0x1198A4u) {
        ctx->pc = 0x1198A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A0u;
        // 0x1198a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198A8u;
        goto label_1198a8;
    }
    ctx->pc = 0x1198A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1198A8u);
        ctx->pc = 0x1198A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A0u;
        // 0x1198a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198A0u, 0x1198A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1198A8u;
label_1198a8:
    // 0x1198a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1198a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1198ac:
    // 0x1198ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1198b0:
    // 0x1198b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1198b4:
    // 0x1198b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1198b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1198b8:
    // 0x1198b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1198b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1198bc:
    // 0x1198bc: 0x320f809  jalr        $t9
label_1198c0:
    if (ctx->pc == 0x1198C0u) {
        ctx->pc = 0x1198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198BCu;
        // 0x1198c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198C4u;
        goto label_1198c4;
    }
    ctx->pc = 0x1198BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1198C4u);
        ctx->pc = 0x1198C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198BCu;
        // 0x1198c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198BCu, 0x1198C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1198C4u;
label_1198c4:
    // 0x1198c4: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_1198c8:
    if (ctx->pc == 0x1198C8u) {
        ctx->pc = 0x1198CCu;
        goto label_1198cc;
    }
    ctx->pc = 0x1198C4u;
    {
        const bool branch_taken_0x1198c4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1198c4) {
            ctx->pc = 0x1198ECu;
            goto label_1198ec;
        }
    }
    ctx->pc = 0x1198CCu;
label_1198cc:
    // 0x1198cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1198ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1198d0:
    // 0x1198d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1198d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1198d4:
    // 0x1198d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1198d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1198d8:
    // 0x1198d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1198d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1198dc:
    // 0x1198dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1198dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1198e0:
    // 0x1198e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1198e4:
    // 0x1198e4: 0x320f809  jalr        $t9
label_1198e8:
    if (ctx->pc == 0x1198E8u) {
        ctx->pc = 0x1198E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E4u;
        // 0x1198e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198ECu;
        goto label_1198ec;
    }
    ctx->pc = 0x1198E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1198ECu);
        ctx->pc = 0x1198E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E4u;
        // 0x1198e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198E4u, 0x1198ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1198ECu;
label_1198ec:
    // 0x1198ec: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1198ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_1198f0:
    // 0x1198f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1198f4:
    // 0x1198f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1198f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1198f8:
    // 0x1198f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1198f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1198fc:
    // 0x1198fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1198fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_119900:
    // 0x119900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119904:
    // 0x119904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119908:
    // 0x119908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11990c:
    // 0x11990c: 0x3e00008  jr          $ra
label_119910:
    if (ctx->pc == 0x119910u) {
        ctx->pc = 0x119910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11990Cu;
        // 0x119910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119914u;
        goto label_fallthrough_0x11990c;
    }
    ctx->pc = 0x11990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11990Cu;
        // 0x119910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11990c:
    ctx->pc = 0x119914u;
}
