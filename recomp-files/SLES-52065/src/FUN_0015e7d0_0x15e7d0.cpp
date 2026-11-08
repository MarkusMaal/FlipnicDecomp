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

// Function: FUN_0015e7d0
// Address: 0x15e7d0 - 0x15e998
void FUN_0015e7d0_0x15e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015e7d0_0x15e7d0");
#endif

    switch (ctx->pc) {
        case 0x15e7d0u: goto label_15e7d0;
        case 0x15e7d4u: goto label_15e7d4;
        case 0x15e7d8u: goto label_15e7d8;
        case 0x15e7dcu: goto label_15e7dc;
        case 0x15e7e0u: goto label_15e7e0;
        case 0x15e7e4u: goto label_15e7e4;
        case 0x15e7e8u: goto label_15e7e8;
        case 0x15e7ecu: goto label_15e7ec;
        case 0x15e7f0u: goto label_15e7f0;
        case 0x15e7f4u: goto label_15e7f4;
        case 0x15e7f8u: goto label_15e7f8;
        case 0x15e7fcu: goto label_15e7fc;
        case 0x15e800u: goto label_15e800;
        case 0x15e804u: goto label_15e804;
        case 0x15e808u: goto label_15e808;
        case 0x15e80cu: goto label_15e80c;
        case 0x15e810u: goto label_15e810;
        case 0x15e814u: goto label_15e814;
        case 0x15e818u: goto label_15e818;
        case 0x15e81cu: goto label_15e81c;
        case 0x15e820u: goto label_15e820;
        case 0x15e824u: goto label_15e824;
        case 0x15e828u: goto label_15e828;
        case 0x15e82cu: goto label_15e82c;
        case 0x15e830u: goto label_15e830;
        case 0x15e834u: goto label_15e834;
        case 0x15e838u: goto label_15e838;
        case 0x15e83cu: goto label_15e83c;
        case 0x15e840u: goto label_15e840;
        case 0x15e844u: goto label_15e844;
        case 0x15e848u: goto label_15e848;
        case 0x15e84cu: goto label_15e84c;
        case 0x15e850u: goto label_15e850;
        case 0x15e854u: goto label_15e854;
        case 0x15e858u: goto label_15e858;
        case 0x15e85cu: goto label_15e85c;
        case 0x15e860u: goto label_15e860;
        case 0x15e864u: goto label_15e864;
        case 0x15e868u: goto label_15e868;
        case 0x15e86cu: goto label_15e86c;
        case 0x15e870u: goto label_15e870;
        case 0x15e874u: goto label_15e874;
        case 0x15e878u: goto label_15e878;
        case 0x15e87cu: goto label_15e87c;
        case 0x15e880u: goto label_15e880;
        case 0x15e884u: goto label_15e884;
        case 0x15e888u: goto label_15e888;
        case 0x15e88cu: goto label_15e88c;
        case 0x15e890u: goto label_15e890;
        case 0x15e894u: goto label_15e894;
        case 0x15e898u: goto label_15e898;
        case 0x15e89cu: goto label_15e89c;
        case 0x15e8a0u: goto label_15e8a0;
        case 0x15e8a4u: goto label_15e8a4;
        case 0x15e8a8u: goto label_15e8a8;
        case 0x15e8acu: goto label_15e8ac;
        case 0x15e8b0u: goto label_15e8b0;
        case 0x15e8b4u: goto label_15e8b4;
        case 0x15e8b8u: goto label_15e8b8;
        case 0x15e8bcu: goto label_15e8bc;
        case 0x15e8c0u: goto label_15e8c0;
        case 0x15e8c4u: goto label_15e8c4;
        case 0x15e8c8u: goto label_15e8c8;
        case 0x15e8ccu: goto label_15e8cc;
        case 0x15e8d0u: goto label_15e8d0;
        case 0x15e8d4u: goto label_15e8d4;
        case 0x15e8d8u: goto label_15e8d8;
        case 0x15e8dcu: goto label_15e8dc;
        case 0x15e8e0u: goto label_15e8e0;
        case 0x15e8e4u: goto label_15e8e4;
        case 0x15e8e8u: goto label_15e8e8;
        case 0x15e8ecu: goto label_15e8ec;
        case 0x15e8f0u: goto label_15e8f0;
        case 0x15e8f4u: goto label_15e8f4;
        case 0x15e8f8u: goto label_15e8f8;
        case 0x15e8fcu: goto label_15e8fc;
        case 0x15e900u: goto label_15e900;
        case 0x15e904u: goto label_15e904;
        case 0x15e908u: goto label_15e908;
        case 0x15e90cu: goto label_15e90c;
        case 0x15e910u: goto label_15e910;
        case 0x15e914u: goto label_15e914;
        case 0x15e918u: goto label_15e918;
        case 0x15e91cu: goto label_15e91c;
        case 0x15e920u: goto label_15e920;
        case 0x15e924u: goto label_15e924;
        case 0x15e928u: goto label_15e928;
        case 0x15e92cu: goto label_15e92c;
        case 0x15e930u: goto label_15e930;
        case 0x15e934u: goto label_15e934;
        case 0x15e938u: goto label_15e938;
        case 0x15e93cu: goto label_15e93c;
        case 0x15e940u: goto label_15e940;
        case 0x15e944u: goto label_15e944;
        case 0x15e948u: goto label_15e948;
        case 0x15e94cu: goto label_15e94c;
        case 0x15e950u: goto label_15e950;
        case 0x15e954u: goto label_15e954;
        case 0x15e958u: goto label_15e958;
        case 0x15e95cu: goto label_15e95c;
        case 0x15e960u: goto label_15e960;
        case 0x15e964u: goto label_15e964;
        case 0x15e968u: goto label_15e968;
        case 0x15e96cu: goto label_15e96c;
        case 0x15e970u: goto label_15e970;
        case 0x15e974u: goto label_15e974;
        case 0x15e978u: goto label_15e978;
        case 0x15e97cu: goto label_15e97c;
        case 0x15e980u: goto label_15e980;
        case 0x15e984u: goto label_15e984;
        case 0x15e988u: goto label_15e988;
        case 0x15e98cu: goto label_15e98c;
        case 0x15e990u: goto label_15e990;
        case 0x15e994u: goto label_15e994;
        default: break;
    }

    ctx->pc = 0x15e7d0u;

label_15e7d0:
    // 0x15e7d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_15e7d4:
    // 0x15e7d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15e7d8:
    // 0x15e7d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15e7dc:
    // 0x15e7dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15e7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15e7e0:
    // 0x15e7e0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x15e7e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e7e4:
    // 0x15e7e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15e7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15e7e8:
    // 0x15e7e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15e7ec:
    // 0x15e7ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e7f0:
    // 0x15e7f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e7f4:
    // 0x15e7f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e7f8:
    // 0x15e7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e7fc:
    // 0x15e7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e800:
    // 0x15e800: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x15e800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_15e804:
    // 0x15e804: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x15e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_15e808:
    // 0x15e808: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15e80c:
    // 0x15e80c: 0x3c3b021  addu        $s6, $fp, $v1
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_15e810:
    // 0x15e810: 0x86c40228  lh          $a0, 0x228($s6)
    ctx->pc = 0x15e810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 552)));
label_15e814:
    // 0x15e814: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15e818:
    // 0x15e818: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_15e81c:
    if (ctx->pc == 0x15E81Cu) {
        ctx->pc = 0x15E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E818u;
        // 0x15e81c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E820u;
        goto label_15e820;
    }
    ctx->pc = 0x15E818u;
    {
        const bool branch_taken_0x15e818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E818u;
        // 0x15e81c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e818) {
            ctx->pc = 0x15E940u;
            goto label_15e940;
        }
    }
    ctx->pc = 0x15E820u;
label_15e820:
    // 0x15e820: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
label_15e824:
    if (ctx->pc == 0x15E824u) {
        ctx->pc = 0x15E828u;
        goto label_15e828;
    }
    ctx->pc = 0x15E820u;
    {
        const bool branch_taken_0x15e820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e820) {
            ctx->pc = 0x15E940u;
            goto label_15e940;
        }
    }
    ctx->pc = 0x15E828u;
label_15e828:
    // 0x15e828: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x15e828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_15e82c:
    // 0x15e82c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15e82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e830:
    // 0x15e830: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15e830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e834:
    // 0x15e834: 0x0  nop
    ctx->pc = 0x15e834u;
    // NOP
label_15e838:
    // 0x15e838: 0x8ec40320  lw          $a0, 0x320($s6)
    ctx->pc = 0x15e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 800)));
label_15e83c:
    // 0x15e83c: 0x8fc52c1c  lw          $a1, 0x2C1C($fp)
    ctx->pc = 0x15e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11292)));
label_15e840:
    // 0x15e840: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15e840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15e844:
    // 0x15e844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e848:
    // 0x15e848: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15e84c:
    // 0x15e84c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15e850:
    // 0x15e850: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15e854:
    // 0x15e854: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x15e854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_15e858:
    // 0x15e858: 0x4800027  bltz        $a0, . + 4 + (0x27 << 2)
label_15e85c:
    if (ctx->pc == 0x15E85Cu) {
        ctx->pc = 0x15E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E858u;
        // 0x15e85c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E860u;
        goto label_15e860;
    }
    ctx->pc = 0x15E858u;
    {
        const bool branch_taken_0x15e858 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E858u;
        // 0x15e85c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e858) {
            ctx->pc = 0x15E8F8u;
            goto label_15e8f8;
        }
    }
    ctx->pc = 0x15E860u;
label_15e860:
    // 0x15e860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e864:
    // 0x15e864: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15e868:
    // 0x15e868: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15e86c:
    // 0x15e86c: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x15e86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_15e870:
    // 0x15e870: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_15e874:
    if (ctx->pc == 0x15E874u) {
        ctx->pc = 0x15E878u;
        goto label_15e878;
    }
    ctx->pc = 0x15E870u;
    {
        const bool branch_taken_0x15e870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e870) {
            ctx->pc = 0x15E8F8u;
            goto label_15e8f8;
        }
    }
    ctx->pc = 0x15E878u;
label_15e878:
    // 0x15e878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e87c:
    // 0x15e87c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_15e880:
    // 0x15e880: 0x8c940030  lw          $s4, 0x30($a0)
    ctx->pc = 0x15e880u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_15e884:
    // 0x15e884: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_15e888:
    // 0x15e888: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x15e888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_15e88c:
    // 0x15e88c: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x15e88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15e890:
    // 0x15e890: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_15e894:
    if (ctx->pc == 0x15E894u) {
        ctx->pc = 0x15E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E890u;
        // 0x15e894: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E898u;
        goto label_15e898;
    }
    ctx->pc = 0x15E890u;
    {
        const bool branch_taken_0x15e890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E890u;
        // 0x15e894: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e890) {
            ctx->pc = 0x15E8F8u;
            goto label_15e8f8;
        }
    }
    ctx->pc = 0x15E898u;
label_15e898:
    // 0x15e898: 0x3d21821  addu        $v1, $fp, $s2
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_15e89c:
    // 0x15e89c: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15e8a0:
    // 0x15e8a0: 0x24772cd8  addiu       $s7, $v1, 0x2CD8
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 11480));
label_15e8a4:
    // 0x15e8a4: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15e8a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15e8a8:
    // 0x15e8a8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_15e8ac:
    if (ctx->pc == 0x15E8ACu) {
        ctx->pc = 0x15E8B0u;
        goto label_15e8b0;
    }
    ctx->pc = 0x15E8A8u;
    {
        const bool branch_taken_0x15e8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e8a8) {
            ctx->pc = 0x15E8E4u;
            goto label_15e8e4;
        }
    }
    ctx->pc = 0x15E8B0u;
label_15e8b0:
    // 0x15e8b0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e8b4:
    // 0x15e8b4: 0x26d50040  addiu       $s5, $s6, 0x40
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_15e8b8:
    // 0x15e8b8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15e8bc:
    // 0x15e8bc: 0x320f809  jalr        $t9
label_15e8c0:
    if (ctx->pc == 0x15E8C0u) {
        ctx->pc = 0x15E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8BCu;
        // 0x15e8c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8C4u;
        goto label_15e8c4;
    }
    ctx->pc = 0x15E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E8C4u);
        ctx->pc = 0x15E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8BCu;
        // 0x15e8c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8BCu, 0x15E8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8C4u;
label_15e8c4:
    // 0x15e8c4: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e8c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e8c8:
    // 0x15e8c8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_15e8cc:
    if (ctx->pc == 0x15E8CCu) {
        ctx->pc = 0x15E8D0u;
        goto label_15e8d0;
    }
    ctx->pc = 0x15E8C8u;
    {
        const bool branch_taken_0x15e8c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e8c8) {
            ctx->pc = 0x15E8E4u;
            goto label_15e8e4;
        }
    }
    ctx->pc = 0x15E8D0u;
label_15e8d0:
    // 0x15e8d0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_15e8d4:
    // 0x15e8d4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e8d8:
    // 0x15e8d8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15e8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15e8dc:
    // 0x15e8dc: 0x320f809  jalr        $t9
label_15e8e0:
    if (ctx->pc == 0x15E8E0u) {
        ctx->pc = 0x15E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8DCu;
        // 0x15e8e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8E4u;
        goto label_15e8e4;
    }
    ctx->pc = 0x15E8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E8E4u);
        ctx->pc = 0x15E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8DCu;
        // 0x15e8e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8DCu, 0x15E8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8E4u;
label_15e8e4:
    // 0x15e8e4: 0x0  nop
    ctx->pc = 0x15e8e4u;
    // NOP
label_15e8e8:
    // 0x15e8e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15e8ec:
    // 0x15e8ec: 0x291182a  slt         $v1, $s4, $s1
    ctx->pc = 0x15e8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15e8f0:
    // 0x15e8f0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_15e8f4:
    if (ctx->pc == 0x15E8F4u) {
        ctx->pc = 0x15E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F0u;
        // 0x15e8f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8F8u;
        goto label_15e8f8;
    }
    ctx->pc = 0x15E8F0u;
    {
        const bool branch_taken_0x15e8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F0u;
        // 0x15e8f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8f0) {
            ctx->pc = 0x15E898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e898;
        }
    }
    ctx->pc = 0x15E8F8u;
label_15e8f8:
    // 0x15e8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15e8fc:
    // 0x15e8fc: 0x1a00ffcd  blez        $s0, . + 4 + (-0x33 << 2)
label_15e900:
    if (ctx->pc == 0x15E900u) {
        ctx->pc = 0x15E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8FCu;
        // 0x15e900: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E904u;
        goto label_15e904;
    }
    ctx->pc = 0x15E8FCu;
    {
        const bool branch_taken_0x15e8fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8FCu;
        // 0x15e900: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8fc) {
            ctx->pc = 0x15E834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e834;
        }
    }
    ctx->pc = 0x15E904u;
label_15e904:
    // 0x15e904: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15e908:
    // 0x15e908: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_15e90c:
    if (ctx->pc == 0x15E90Cu) {
        ctx->pc = 0x15E910u;
        goto label_15e910;
    }
    ctx->pc = 0x15E908u;
    {
        const bool branch_taken_0x15e908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e908) {
            ctx->pc = 0x15E940u;
            goto label_15e940;
        }
    }
    ctx->pc = 0x15E910u;
label_15e910:
    // 0x15e910: 0xc6cc0324  lwc1        $f12, 0x324($s6)
    ctx->pc = 0x15e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15e914:
    // 0x15e914: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_15e918:
    // 0x15e918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15e918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e91c:
    // 0x15e91c: 0x0  nop
    ctx->pc = 0x15e91cu;
    // NOP
label_15e920:
    // 0x15e920: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x15e920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e924:
    // 0x15e924: 0x0  nop
    ctx->pc = 0x15e924u;
    // NOP
label_15e928:
    // 0x15e928: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_15e92c:
    if (ctx->pc == 0x15E92Cu) {
        ctx->pc = 0x15E930u;
        goto label_15e930;
    }
    ctx->pc = 0x15E928u;
    {
        const bool branch_taken_0x15e928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e928) {
            ctx->pc = 0x15E940u;
            goto label_15e940;
        }
    }
    ctx->pc = 0x15E930u;
label_15e930:
    // 0x15e930: 0x8ec4037c  lw          $a0, 0x37C($s6)
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 892)));
label_15e934:
    // 0x15e934: 0xc6cd0200  lwc1        $f13, 0x200($s6)
    ctx->pc = 0x15e934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15e938:
    // 0x15e938: 0xc054b14  jal         func_152C50
label_15e93c:
    if (ctx->pc == 0x15E93Cu) {
        ctx->pc = 0x15E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E938u;
        // 0x15e93c: 0x26c50040  addiu       $a1, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E940u;
        goto label_15e940;
    }
    ctx->pc = 0x15E938u;
    SET_GPR_U32(ctx, 31, 0x15E940u);
    ctx->pc = 0x15E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E938u;
    // 0x15e93c: 0x26c50040  addiu       $a1, $s6, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152C50u, 0x15E938u, 0x15E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E940u;
label_15e940:
    // 0x15e940: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15e944:
    // 0x15e944: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x15e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
label_15e948:
    // 0x15e948: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15e948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_15e94c:
    // 0x15e94c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15e950:
    // 0x15e950: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15e954:
    // 0x15e954: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x15e954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_15e958:
    // 0x15e958: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15e95c:
    // 0x15e95c: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x15e95cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_15e960:
    // 0x15e960: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_15e964:
    if (ctx->pc == 0x15E964u) {
        ctx->pc = 0x15E968u;
        goto label_15e968;
    }
    ctx->pc = 0x15E960u;
    {
        const bool branch_taken_0x15e960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e960) {
            ctx->pc = 0x15E808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e808;
        }
    }
    ctx->pc = 0x15E968u;
label_15e968:
    // 0x15e968: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15e96c:
    // 0x15e96c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e96cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15e970:
    // 0x15e970: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15e974:
    // 0x15e974: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15e978:
    // 0x15e978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e97c:
    // 0x15e97c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e980:
    // 0x15e980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e984:
    // 0x15e984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e988:
    // 0x15e988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e98c:
    // 0x15e98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e990:
    // 0x15e990: 0x3e00008  jr          $ra
label_15e994:
    if (ctx->pc == 0x15E994u) {
        ctx->pc = 0x15E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E990u;
        // 0x15e994: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E998u;
        goto label_fallthrough_0x15e990;
    }
    ctx->pc = 0x15E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E990u;
        // 0x15e994: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15e990:
    ctx->pc = 0x15E998u;
}
