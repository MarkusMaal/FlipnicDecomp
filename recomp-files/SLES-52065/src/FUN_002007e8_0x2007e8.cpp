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

// Function: FUN_002007e8
// Address: 0x2007e8 - 0x200964
void FUN_002007e8_0x2007e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002007e8_0x2007e8");
#endif

    switch (ctx->pc) {
        case 0x20081cu: goto label_20081c;
        case 0x200884u: goto label_200884;
        case 0x2008e8u: goto label_2008e8;
        case 0x200930u: goto label_200930;
        default: break;
    }

    ctx->pc = 0x2007e8u;

    // 0x2007e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2007e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2007ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2007ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2007f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2007f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007f4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2007f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2007f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2007f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2007fc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2007fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200800: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x200800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x200804: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x200804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200808: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x200808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20080c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x20080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x200810: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x200810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x200814: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x200814u;
    SET_GPR_U32(ctx, 31, 0x20081Cu);
    ctx->pc = 0x200818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200814u;
    // 0x200818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x200814u, 0x20081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20081Cu;
label_20081c:
    // 0x20081c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20081cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200820: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x200820u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x200824: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x200824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x200828: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x20082c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x200830: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x200830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x200834: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x200834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x200838: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x200838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x20083c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x20083cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x200840: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x200840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x200844: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x200844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x200848: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x200848u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x20084c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x20084cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x200850: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x200850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x200854: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x200854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x200858: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x200858u;
    {
        const bool branch_taken_0x200858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200858u;
        // 0x20085c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200858) {
            ctx->pc = 0x20086Cu;
            goto label_20086c;
        }
    }
    ctx->pc = 0x200860u;
    // 0x200860: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x200864: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x200864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x200868: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x200868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20086c:
    // 0x20086c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x20086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x200870: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x200870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x200874: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x200874u;
    {
        const bool branch_taken_0x200874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200874u;
        // 0x200878: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200874) {
            ctx->pc = 0x2008DCu;
            goto label_2008dc;
        }
    }
    ctx->pc = 0x20087Cu;
    // 0x20087c: 0xc07ff90  jal         func_1FFE40
    ctx->pc = 0x20087Cu;
    SET_GPR_U32(ctx, 31, 0x200884u);
    ctx->pc = 0x200880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20087Cu;
    // 0x200880: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE40u, 0x20087Cu, 0x200884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200884u;
label_200884:
    // 0x200884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200888: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x200888u;
    {
        const bool branch_taken_0x200888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200888u;
        // 0x20088c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200888) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x200890u;
    // 0x200890: 0x52023  negu        $a0, $a1
    ctx->pc = 0x200890u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x200894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x200894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200898: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20089c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20089cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2008a0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2008a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2008a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2008a8: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2008a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2008ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2008ACu;
    {
        const bool branch_taken_0x2008ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008ACu;
        // 0x2008b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008ac) {
            ctx->pc = 0x2008BCu;
            goto label_2008bc;
        }
    }
    ctx->pc = 0x2008B4u;
label_2008b4:
    // 0x2008b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2008b8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2008b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2008bc:
    // 0x2008bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2008c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2008c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2008c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2008c8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2008c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2008cc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2008ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2008d0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2008d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2008D4u;
    {
        const bool branch_taken_0x2008d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008D4u;
        // 0x2008d8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008d4) {
            ctx->pc = 0x2008FCu;
            goto label_2008fc;
        }
    }
    ctx->pc = 0x2008DCu;
label_2008dc:
    // 0x2008dc: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2008dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2008e0: 0xc07ff90  jal         func_1FFE40
    ctx->pc = 0x2008E0u;
    SET_GPR_U32(ctx, 31, 0x2008E8u);
    ctx->pc = 0x2008E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2008E0u;
    // 0x2008e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE40u, 0x2008E0u, 0x2008E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008E8u;
label_2008e8:
    // 0x2008e8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2008ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2008f0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2008f4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2008f8: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x2008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_2008fc:
    // 0x2008fc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2008FCu;
    {
        const bool branch_taken_0x2008fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x200900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008FCu;
        // 0x200900: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008fc) {
            ctx->pc = 0x200918u;
            goto label_200918;
        }
    }
    ctx->pc = 0x200904u;
    // 0x200904: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x200908: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20090c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200910: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x200910u;
    {
        const bool branch_taken_0x200910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200910u;
        // 0x200914: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200910) {
            ctx->pc = 0x200938u;
            goto label_200938;
        }
    }
    ctx->pc = 0x200918u;
label_200918:
    // 0x200918: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x200918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x20091c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200920: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x200920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x200924: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x200924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x200928: 0xc07ff6e  jal         func_1FFDB8
    ctx->pc = 0x200928u;
    SET_GPR_U32(ctx, 31, 0x200930u);
    ctx->pc = 0x20092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200928u;
    // 0x20092c: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFDB8u, 0x200928u, 0x200930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200930u;
label_200930:
    // 0x200930: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x200934: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_200938:
    // 0x200938: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x200938u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x20093c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20093cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200940: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x200940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x200944: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x200944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200948: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x200948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20094c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x20094cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200950: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x200950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200954: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x200954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20095c: 0x3e00008  jr          $ra
    ctx->pc = 0x20095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20095Cu;
        // 0x200960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20095Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200964u;
}
