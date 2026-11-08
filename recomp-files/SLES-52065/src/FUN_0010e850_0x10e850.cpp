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

// Function: FUN_0010e850
// Address: 0x10e850 - 0x10eb14
void FUN_0010e850_0x10e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e850_0x10e850");
#endif

    switch (ctx->pc) {
        case 0x10e850u: goto label_10e850;
        case 0x10e854u: goto label_10e854;
        case 0x10e858u: goto label_10e858;
        case 0x10e85cu: goto label_10e85c;
        case 0x10e860u: goto label_10e860;
        case 0x10e864u: goto label_10e864;
        case 0x10e868u: goto label_10e868;
        case 0x10e86cu: goto label_10e86c;
        case 0x10e870u: goto label_10e870;
        case 0x10e874u: goto label_10e874;
        case 0x10e878u: goto label_10e878;
        case 0x10e87cu: goto label_10e87c;
        case 0x10e880u: goto label_10e880;
        case 0x10e884u: goto label_10e884;
        case 0x10e888u: goto label_10e888;
        case 0x10e88cu: goto label_10e88c;
        case 0x10e890u: goto label_10e890;
        case 0x10e894u: goto label_10e894;
        case 0x10e898u: goto label_10e898;
        case 0x10e89cu: goto label_10e89c;
        case 0x10e8a0u: goto label_10e8a0;
        case 0x10e8a4u: goto label_10e8a4;
        case 0x10e8a8u: goto label_10e8a8;
        case 0x10e8acu: goto label_10e8ac;
        case 0x10e8b0u: goto label_10e8b0;
        case 0x10e8b4u: goto label_10e8b4;
        case 0x10e8b8u: goto label_10e8b8;
        case 0x10e8bcu: goto label_10e8bc;
        case 0x10e8c0u: goto label_10e8c0;
        case 0x10e8c4u: goto label_10e8c4;
        case 0x10e8c8u: goto label_10e8c8;
        case 0x10e8ccu: goto label_10e8cc;
        case 0x10e8d0u: goto label_10e8d0;
        case 0x10e8d4u: goto label_10e8d4;
        case 0x10e8d8u: goto label_10e8d8;
        case 0x10e8dcu: goto label_10e8dc;
        case 0x10e8e0u: goto label_10e8e0;
        case 0x10e8e4u: goto label_10e8e4;
        case 0x10e8e8u: goto label_10e8e8;
        case 0x10e8ecu: goto label_10e8ec;
        case 0x10e8f0u: goto label_10e8f0;
        case 0x10e8f4u: goto label_10e8f4;
        case 0x10e8f8u: goto label_10e8f8;
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e900u: goto label_10e900;
        case 0x10e904u: goto label_10e904;
        case 0x10e908u: goto label_10e908;
        case 0x10e90cu: goto label_10e90c;
        case 0x10e910u: goto label_10e910;
        case 0x10e914u: goto label_10e914;
        case 0x10e918u: goto label_10e918;
        case 0x10e91cu: goto label_10e91c;
        case 0x10e920u: goto label_10e920;
        case 0x10e924u: goto label_10e924;
        case 0x10e928u: goto label_10e928;
        case 0x10e92cu: goto label_10e92c;
        case 0x10e930u: goto label_10e930;
        case 0x10e934u: goto label_10e934;
        case 0x10e938u: goto label_10e938;
        case 0x10e93cu: goto label_10e93c;
        case 0x10e940u: goto label_10e940;
        case 0x10e944u: goto label_10e944;
        case 0x10e948u: goto label_10e948;
        case 0x10e94cu: goto label_10e94c;
        case 0x10e950u: goto label_10e950;
        case 0x10e954u: goto label_10e954;
        case 0x10e958u: goto label_10e958;
        case 0x10e95cu: goto label_10e95c;
        case 0x10e960u: goto label_10e960;
        case 0x10e964u: goto label_10e964;
        case 0x10e968u: goto label_10e968;
        case 0x10e96cu: goto label_10e96c;
        case 0x10e970u: goto label_10e970;
        case 0x10e974u: goto label_10e974;
        case 0x10e978u: goto label_10e978;
        case 0x10e97cu: goto label_10e97c;
        case 0x10e980u: goto label_10e980;
        case 0x10e984u: goto label_10e984;
        case 0x10e988u: goto label_10e988;
        case 0x10e98cu: goto label_10e98c;
        case 0x10e990u: goto label_10e990;
        case 0x10e994u: goto label_10e994;
        case 0x10e998u: goto label_10e998;
        case 0x10e99cu: goto label_10e99c;
        case 0x10e9a0u: goto label_10e9a0;
        case 0x10e9a4u: goto label_10e9a4;
        case 0x10e9a8u: goto label_10e9a8;
        case 0x10e9acu: goto label_10e9ac;
        case 0x10e9b0u: goto label_10e9b0;
        case 0x10e9b4u: goto label_10e9b4;
        case 0x10e9b8u: goto label_10e9b8;
        case 0x10e9bcu: goto label_10e9bc;
        case 0x10e9c0u: goto label_10e9c0;
        case 0x10e9c4u: goto label_10e9c4;
        case 0x10e9c8u: goto label_10e9c8;
        case 0x10e9ccu: goto label_10e9cc;
        case 0x10e9d0u: goto label_10e9d0;
        case 0x10e9d4u: goto label_10e9d4;
        case 0x10e9d8u: goto label_10e9d8;
        case 0x10e9dcu: goto label_10e9dc;
        case 0x10e9e0u: goto label_10e9e0;
        case 0x10e9e4u: goto label_10e9e4;
        case 0x10e9e8u: goto label_10e9e8;
        case 0x10e9ecu: goto label_10e9ec;
        case 0x10e9f0u: goto label_10e9f0;
        case 0x10e9f4u: goto label_10e9f4;
        case 0x10e9f8u: goto label_10e9f8;
        case 0x10e9fcu: goto label_10e9fc;
        case 0x10ea00u: goto label_10ea00;
        case 0x10ea04u: goto label_10ea04;
        case 0x10ea08u: goto label_10ea08;
        case 0x10ea0cu: goto label_10ea0c;
        case 0x10ea10u: goto label_10ea10;
        case 0x10ea14u: goto label_10ea14;
        case 0x10ea18u: goto label_10ea18;
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea20u: goto label_10ea20;
        case 0x10ea24u: goto label_10ea24;
        case 0x10ea28u: goto label_10ea28;
        case 0x10ea2cu: goto label_10ea2c;
        case 0x10ea30u: goto label_10ea30;
        case 0x10ea34u: goto label_10ea34;
        case 0x10ea38u: goto label_10ea38;
        case 0x10ea3cu: goto label_10ea3c;
        case 0x10ea40u: goto label_10ea40;
        case 0x10ea44u: goto label_10ea44;
        case 0x10ea48u: goto label_10ea48;
        case 0x10ea4cu: goto label_10ea4c;
        case 0x10ea50u: goto label_10ea50;
        case 0x10ea54u: goto label_10ea54;
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea5cu: goto label_10ea5c;
        case 0x10ea60u: goto label_10ea60;
        case 0x10ea64u: goto label_10ea64;
        case 0x10ea68u: goto label_10ea68;
        case 0x10ea6cu: goto label_10ea6c;
        case 0x10ea70u: goto label_10ea70;
        case 0x10ea74u: goto label_10ea74;
        case 0x10ea78u: goto label_10ea78;
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10ea80u: goto label_10ea80;
        case 0x10ea84u: goto label_10ea84;
        case 0x10ea88u: goto label_10ea88;
        case 0x10ea8cu: goto label_10ea8c;
        case 0x10ea90u: goto label_10ea90;
        case 0x10ea94u: goto label_10ea94;
        case 0x10ea98u: goto label_10ea98;
        case 0x10ea9cu: goto label_10ea9c;
        case 0x10eaa0u: goto label_10eaa0;
        case 0x10eaa4u: goto label_10eaa4;
        case 0x10eaa8u: goto label_10eaa8;
        case 0x10eaacu: goto label_10eaac;
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab4u: goto label_10eab4;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eabcu: goto label_10eabc;
        case 0x10eac0u: goto label_10eac0;
        case 0x10eac4u: goto label_10eac4;
        case 0x10eac8u: goto label_10eac8;
        case 0x10eaccu: goto label_10eacc;
        case 0x10ead0u: goto label_10ead0;
        case 0x10ead4u: goto label_10ead4;
        case 0x10ead8u: goto label_10ead8;
        case 0x10eadcu: goto label_10eadc;
        case 0x10eae0u: goto label_10eae0;
        case 0x10eae4u: goto label_10eae4;
        case 0x10eae8u: goto label_10eae8;
        case 0x10eaecu: goto label_10eaec;
        case 0x10eaf0u: goto label_10eaf0;
        case 0x10eaf4u: goto label_10eaf4;
        case 0x10eaf8u: goto label_10eaf8;
        case 0x10eafcu: goto label_10eafc;
        case 0x10eb00u: goto label_10eb00;
        case 0x10eb04u: goto label_10eb04;
        case 0x10eb08u: goto label_10eb08;
        case 0x10eb0cu: goto label_10eb0c;
        case 0x10eb10u: goto label_10eb10;
        default: break;
    }

    ctx->pc = 0x10e850u;

label_10e850:
    // 0x10e850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10e854:
    // 0x10e854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10e858:
    // 0x10e858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10e85c:
    // 0x10e85c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e860:
    // 0x10e860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10e864:
    // 0x10e864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e868:
    // 0x10e868: 0x8c820234  lw          $v0, 0x234($a0)
    ctx->pc = 0x10e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
label_10e86c:
    // 0x10e86c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e870:
    if (ctx->pc == 0x10E870u) {
        ctx->pc = 0x10E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E86Cu;
        // 0x10e870: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E874u;
        goto label_10e874;
    }
    ctx->pc = 0x10E86Cu;
    {
        const bool branch_taken_0x10e86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E86Cu;
        // 0x10e870: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e86c) {
            ctx->pc = 0x10E87Cu;
            goto label_10e87c;
        }
    }
    ctx->pc = 0x10E874u;
label_10e874:
    // 0x10e874: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_10e878:
    if (ctx->pc == 0x10E878u) {
        ctx->pc = 0x10E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E874u;
        // 0x10e878: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E87Cu;
        goto label_10e87c;
    }
    ctx->pc = 0x10E874u;
    {
        const bool branch_taken_0x10e874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E874u;
        // 0x10e878: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e874) {
            ctx->pc = 0x10EAFCu;
            goto label_10eafc;
        }
    }
    ctx->pc = 0x10E87Cu;
label_10e87c:
    // 0x10e87c: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x10e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10e880:
    // 0x10e880: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x10e880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10e884:
    // 0x10e884: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_10e888:
    if (ctx->pc == 0x10E888u) {
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E884u;
        // 0x10e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E88Cu;
        goto label_10e88c;
    }
    ctx->pc = 0x10E884u;
    {
        const bool branch_taken_0x10e884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E884u;
        // 0x10e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e884) {
            ctx->pc = 0x10EA90u;
            goto label_10ea90;
        }
    }
    ctx->pc = 0x10E88Cu;
label_10e88c:
    // 0x10e88c: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x10e88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_10e890:
    // 0x10e890: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
label_10e894:
    if (ctx->pc == 0x10E894u) {
        ctx->pc = 0x10E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E890u;
        // 0x10e894: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E898u;
        goto label_10e898;
    }
    ctx->pc = 0x10E890u;
    {
        const bool branch_taken_0x10e890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E890u;
        // 0x10e894: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e890) {
            ctx->pc = 0x10EA34u;
            goto label_10ea34;
        }
    }
    ctx->pc = 0x10E898u;
label_10e898:
    // 0x10e898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e89c:
    // 0x10e89c: 0x8e280220  lw          $t0, 0x220($s1)
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e8a0:
    // 0x10e8a0: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x10e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_10e8a4:
    // 0x10e8a4: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_10e8a8:
    // 0x10e8a8: 0x8e270210  lw          $a3, 0x210($s1)
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e8ac:
    // 0x10e8ac: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e8b0:
    // 0x10e8b0: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x10e8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e8b4:
    // 0x10e8b4: 0x244f0002  addiu       $t7, $v0, 0x2
    ctx->pc = 0x10e8b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_10e8b8:
    // 0x10e8b8: 0x244e0003  addiu       $t6, $v0, 0x3
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_10e8bc:
    // 0x10e8bc: 0x244d0004  addiu       $t5, $v0, 0x4
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_10e8c0:
    // 0x10e8c0: 0x244c0005  addiu       $t4, $v0, 0x5
    ctx->pc = 0x10e8c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_10e8c4:
    // 0x10e8c4: 0x244b0006  addiu       $t3, $v0, 0x6
    ctx->pc = 0x10e8c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_10e8c8:
    // 0x10e8c8: 0x244a0007  addiu       $t2, $v0, 0x7
    ctx->pc = 0x10e8c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_10e8cc:
    // 0x10e8cc: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x10e8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_10e8d0:
    // 0x10e8d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_10e8d4:
    // 0x10e8d4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x10e8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_10e8d8:
    // 0x10e8d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_10e8dc:
    // 0x10e8dc: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_10e8e0:
    // 0x10e8e0: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e8e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e8e4:
    // 0x10e8e4: 0x43382a  slt         $a3, $v0, $v1
    ctx->pc = 0x10e8e4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e8e8:
    // 0x10e8e8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e8ec:
    // 0x10e8ec: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e8f0:
    // 0x10e8f0: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e8f4:
    // 0x10e8f4: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10e8f8:
    // 0x10e8f8: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x10e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_10e8fc:
    // 0x10e8fc: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e900:
    // 0x10e900: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e904:
    // 0x10e904: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x10e904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_10e908:
    // 0x10e908: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10e90c:
    // 0x10e90c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10e910:
    // 0x10e910: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e910u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e914:
    // 0x10e914: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e918:
    // 0x10e918: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e91c:
    // 0x10e91c: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e920:
    // 0x10e920: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10e924:
    // 0x10e924: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x10e924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_10e928:
    // 0x10e928: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e92c:
    // 0x10e92c: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e92cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e930:
    // 0x10e930: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
label_10e934:
    // 0x10e934: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10e938:
    // 0x10e938: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10e93c:
    // 0x10e93c: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e940:
    // 0x10e940: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e944:
    // 0x10e944: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e948:
    // 0x10e948: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e94c:
    // 0x10e94c: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10e950:
    // 0x10e950: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x10e950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_10e954:
    // 0x10e954: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e958:
    // 0x10e958: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e95c:
    // 0x10e95c: 0x1c94821  addu        $t1, $t6, $t1
    ctx->pc = 0x10e95cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_10e960:
    // 0x10e960: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10e964:
    // 0x10e964: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10e968:
    // 0x10e968: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e968u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e96c:
    // 0x10e96c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e96cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e970:
    // 0x10e970: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e974:
    // 0x10e974: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e978:
    // 0x10e978: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10e97c:
    // 0x10e97c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x10e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
label_10e980:
    // 0x10e980: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e984:
    // 0x10e984: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e988:
    // 0x10e988: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
label_10e98c:
    // 0x10e98c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e98cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10e990:
    // 0x10e990: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10e994:
    // 0x10e994: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e994u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e998:
    // 0x10e998: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e99c:
    // 0x10e99c: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e9a0:
    // 0x10e9a0: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e9a4:
    // 0x10e9a4: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10e9a8:
    // 0x10e9a8: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x10e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
label_10e9ac:
    // 0x10e9ac: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e9acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e9b0:
    // 0x10e9b0: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e9b4:
    // 0x10e9b4: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x10e9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_10e9b8:
    // 0x10e9b8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10e9bc:
    // 0x10e9bc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10e9c0:
    // 0x10e9c0: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e9c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e9c4:
    // 0x10e9c4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e9c8:
    // 0x10e9c8: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e9cc:
    // 0x10e9cc: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e9d0:
    // 0x10e9d0: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10e9d4:
    // 0x10e9d4: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x10e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
label_10e9d8:
    // 0x10e9d8: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e9dc:
    // 0x10e9dc: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e9e0:
    // 0x10e9e0: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x10e9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_10e9e4:
    // 0x10e9e4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10e9e8:
    // 0x10e9e8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10e9ec:
    // 0x10e9ec: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e9ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10e9f0:
    // 0x10e9f0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10e9f4:
    // 0x10e9f4: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10e9f8:
    // 0x10e9f8: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
label_10e9fc:
    // 0x10e9fc: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
label_10ea00:
    // 0x10ea00: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x10ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
label_10ea04:
    // 0x10ea04: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10ea04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10ea08:
    // 0x10ea08: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10ea08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10ea0c:
    // 0x10ea0c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x10ea0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_10ea10:
    // 0x10ea10: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_10ea14:
    // 0x10ea14: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10ea14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_10ea18:
    // 0x10ea18: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_10ea1c:
    // 0x10ea1c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10ea1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_10ea20:
    // 0x10ea20: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_10ea24:
    // 0x10ea24: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x10ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_10ea28:
    // 0x10ea28: 0x8ca501d4  lw          $a1, 0x1D4($a1)
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
label_10ea2c:
    // 0x10ea2c: 0x14e0ff9b  bnez        $a3, . + 4 + (-0x65 << 2)
label_10ea30:
    if (ctx->pc == 0x10EA30u) {
        ctx->pc = 0x10EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA2Cu;
        // 0x10ea30: 0xacc5001c  sw          $a1, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA34u;
        goto label_10ea34;
    }
    ctx->pc = 0x10EA2Cu;
    {
        const bool branch_taken_0x10ea2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA2Cu;
        // 0x10ea30: 0xacc5001c  sw          $a1, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea2c) {
            ctx->pc = 0x10E89Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e89c;
        }
    }
    ctx->pc = 0x10EA34u;
label_10ea34:
    // 0x10ea34: 0x0  nop
    ctx->pc = 0x10ea34u;
    // NOP
label_10ea38:
    // 0x10ea38: 0x10000010  b           . + 4 + (0x10 << 2)
label_10ea3c:
    if (ctx->pc == 0x10EA3Cu) {
        ctx->pc = 0x10EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA38u;
        // 0x10ea3c: 0x23880  sll         $a3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA40u;
        goto label_10ea40;
    }
    ctx->pc = 0x10EA38u;
    {
        const bool branch_taken_0x10ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA38u;
        // 0x10ea3c: 0x23880  sll         $a3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea38) {
            ctx->pc = 0x10EA7Cu;
            goto label_10ea7c;
        }
    }
    ctx->pc = 0x10EA40u;
label_10ea40:
    // 0x10ea40: 0x8e260220  lw          $a2, 0x220($s1)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10ea44:
    // 0x10ea44: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_10ea48:
    // 0x10ea48: 0x8e250210  lw          $a1, 0x210($s1)
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10ea4c:
    // 0x10ea4c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x10ea4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_10ea50:
    // 0x10ea50: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ea54:
    // 0x10ea54: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_10ea58:
    // 0x10ea58: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_10ea5c:
    // 0x10ea5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10ea60:
    // 0x10ea60: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_10ea64:
    // 0x10ea64: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_10ea68:
    // 0x10ea68: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10ea6c:
    // 0x10ea6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10ea70:
    // 0x10ea70: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x10ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_10ea74:
    // 0x10ea74: 0x8c8401d4  lw          $a0, 0x1D4($a0)
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_10ea78:
    // 0x10ea78: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x10ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
label_10ea7c:
    // 0x10ea7c: 0x0  nop
    ctx->pc = 0x10ea7cu;
    // NOP
label_10ea80:
    // 0x10ea80: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x10ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10ea84:
    // 0x10ea84: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x10ea84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10ea88:
    // 0x10ea88: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_10ea8c:
    if (ctx->pc == 0x10EA8Cu) {
        ctx->pc = 0x10EA90u;
        goto label_10ea90;
    }
    ctx->pc = 0x10EA88u;
    {
        const bool branch_taken_0x10ea88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ea88) {
            ctx->pc = 0x10EA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea40;
        }
    }
    ctx->pc = 0x10EA90u;
label_10ea90:
    // 0x10ea90: 0x10000015  b           . + 4 + (0x15 << 2)
label_10ea94:
    if (ctx->pc == 0x10EA94u) {
        ctx->pc = 0x10EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA90u;
        // 0x10ea94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EA98u;
        goto label_10ea98;
    }
    ctx->pc = 0x10EA90u;
    {
        const bool branch_taken_0x10ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA90u;
        // 0x10ea94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea90) {
            ctx->pc = 0x10EAE8u;
            goto label_10eae8;
        }
    }
    ctx->pc = 0x10EA98u;
label_10ea98:
    // 0x10ea98: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10ea9c:
    // 0x10ea9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10eaa0:
    // 0x10eaa0: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10eaa4:
    // 0x10eaa4: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x10eaa4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10eaa8:
    // 0x10eaa8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_10eaac:
    // 0x10eaac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10eab0:
    // 0x10eab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10eab4:
    // 0x10eab4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10eab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10eab8:
    // 0x10eab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10eabc:
    // 0x10eabc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10eac0:
    // 0x10eac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10eac4:
    // 0x10eac4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10eac8:
    // 0x10eac8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10eacc:
    // 0x10eacc: 0x1010  mfhi        $v0
    ctx->pc = 0x10eaccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_10ead0:
    // 0x10ead0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10ead4:
    // 0x10ead4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_10ead8:
    // 0x10ead8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10eadc:
    // 0x10eadc: 0x320f809  jalr        $t9
label_10eae0:
    if (ctx->pc == 0x10EAE0u) {
        ctx->pc = 0x10EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EADCu;
        // 0x10eae0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAE4u;
        goto label_10eae4;
    }
    ctx->pc = 0x10EADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EAE4u);
        ctx->pc = 0x10EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EADCu;
        // 0x10eae0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EADCu, 0x10EAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EAE4u;
label_10eae4:
    // 0x10eae4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10eae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10eae8:
    // 0x10eae8: 0x8e250224  lw          $a1, 0x224($s1)
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10eaec:
    // 0x10eaec: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x10eaecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10eaf0:
    // 0x10eaf0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_10eaf4:
    if (ctx->pc == 0x10EAF4u) {
        ctx->pc = 0x10EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAF0u;
        // 0x10eaf4: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAF8u;
        goto label_10eaf8;
    }
    ctx->pc = 0x10EAF0u;
    {
        const bool branch_taken_0x10eaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAF0u;
        // 0x10eaf4: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaf0) {
            ctx->pc = 0x10EA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea98;
        }
    }
    ctx->pc = 0x10EAF8u;
label_10eaf8:
    // 0x10eaf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10eaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eafc:
    // 0x10eafc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10eafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10eb00:
    // 0x10eb00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10eb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10eb04:
    // 0x10eb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10eb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10eb08:
    // 0x10eb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10eb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10eb0c:
    // 0x10eb0c: 0x3e00008  jr          $ra
label_10eb10:
    if (ctx->pc == 0x10EB10u) {
        ctx->pc = 0x10EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB0Cu;
        // 0x10eb10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EB14u;
        goto label_fallthrough_0x10eb0c;
    }
    ctx->pc = 0x10EB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB0Cu;
        // 0x10eb10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10eb0c:
    ctx->pc = 0x10EB14u;
}
