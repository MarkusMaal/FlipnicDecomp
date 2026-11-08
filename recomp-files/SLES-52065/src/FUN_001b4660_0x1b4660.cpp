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

// Function: FUN_001b4660
// Address: 0x1b4660 - 0x1b487c
void FUN_001b4660_0x1b4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4660_0x1b4660");
#endif

    switch (ctx->pc) {
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4664u: goto label_1b4664;
        case 0x1b4668u: goto label_1b4668;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b4670u: goto label_1b4670;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4678u: goto label_1b4678;
        case 0x1b467cu: goto label_1b467c;
        case 0x1b4680u: goto label_1b4680;
        case 0x1b4684u: goto label_1b4684;
        case 0x1b4688u: goto label_1b4688;
        case 0x1b468cu: goto label_1b468c;
        case 0x1b4690u: goto label_1b4690;
        case 0x1b4694u: goto label_1b4694;
        case 0x1b4698u: goto label_1b4698;
        case 0x1b469cu: goto label_1b469c;
        case 0x1b46a0u: goto label_1b46a0;
        case 0x1b46a4u: goto label_1b46a4;
        case 0x1b46a8u: goto label_1b46a8;
        case 0x1b46acu: goto label_1b46ac;
        case 0x1b46b0u: goto label_1b46b0;
        case 0x1b46b4u: goto label_1b46b4;
        case 0x1b46b8u: goto label_1b46b8;
        case 0x1b46bcu: goto label_1b46bc;
        case 0x1b46c0u: goto label_1b46c0;
        case 0x1b46c4u: goto label_1b46c4;
        case 0x1b46c8u: goto label_1b46c8;
        case 0x1b46ccu: goto label_1b46cc;
        case 0x1b46d0u: goto label_1b46d0;
        case 0x1b46d4u: goto label_1b46d4;
        case 0x1b46d8u: goto label_1b46d8;
        case 0x1b46dcu: goto label_1b46dc;
        case 0x1b46e0u: goto label_1b46e0;
        case 0x1b46e4u: goto label_1b46e4;
        case 0x1b46e8u: goto label_1b46e8;
        case 0x1b46ecu: goto label_1b46ec;
        case 0x1b46f0u: goto label_1b46f0;
        case 0x1b46f4u: goto label_1b46f4;
        case 0x1b46f8u: goto label_1b46f8;
        case 0x1b46fcu: goto label_1b46fc;
        case 0x1b4700u: goto label_1b4700;
        case 0x1b4704u: goto label_1b4704;
        case 0x1b4708u: goto label_1b4708;
        case 0x1b470cu: goto label_1b470c;
        case 0x1b4710u: goto label_1b4710;
        case 0x1b4714u: goto label_1b4714;
        case 0x1b4718u: goto label_1b4718;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4720u: goto label_1b4720;
        case 0x1b4724u: goto label_1b4724;
        case 0x1b4728u: goto label_1b4728;
        case 0x1b472cu: goto label_1b472c;
        case 0x1b4730u: goto label_1b4730;
        case 0x1b4734u: goto label_1b4734;
        case 0x1b4738u: goto label_1b4738;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4740u: goto label_1b4740;
        case 0x1b4744u: goto label_1b4744;
        case 0x1b4748u: goto label_1b4748;
        case 0x1b474cu: goto label_1b474c;
        case 0x1b4750u: goto label_1b4750;
        case 0x1b4754u: goto label_1b4754;
        case 0x1b4758u: goto label_1b4758;
        case 0x1b475cu: goto label_1b475c;
        case 0x1b4760u: goto label_1b4760;
        case 0x1b4764u: goto label_1b4764;
        case 0x1b4768u: goto label_1b4768;
        case 0x1b476cu: goto label_1b476c;
        case 0x1b4770u: goto label_1b4770;
        case 0x1b4774u: goto label_1b4774;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b477cu: goto label_1b477c;
        case 0x1b4780u: goto label_1b4780;
        case 0x1b4784u: goto label_1b4784;
        case 0x1b4788u: goto label_1b4788;
        case 0x1b478cu: goto label_1b478c;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b4794u: goto label_1b4794;
        case 0x1b4798u: goto label_1b4798;
        case 0x1b479cu: goto label_1b479c;
        case 0x1b47a0u: goto label_1b47a0;
        case 0x1b47a4u: goto label_1b47a4;
        case 0x1b47a8u: goto label_1b47a8;
        case 0x1b47acu: goto label_1b47ac;
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b4u: goto label_1b47b4;
        case 0x1b47b8u: goto label_1b47b8;
        case 0x1b47bcu: goto label_1b47bc;
        case 0x1b47c0u: goto label_1b47c0;
        case 0x1b47c4u: goto label_1b47c4;
        case 0x1b47c8u: goto label_1b47c8;
        case 0x1b47ccu: goto label_1b47cc;
        case 0x1b47d0u: goto label_1b47d0;
        case 0x1b47d4u: goto label_1b47d4;
        case 0x1b47d8u: goto label_1b47d8;
        case 0x1b47dcu: goto label_1b47dc;
        case 0x1b47e0u: goto label_1b47e0;
        case 0x1b47e4u: goto label_1b47e4;
        case 0x1b47e8u: goto label_1b47e8;
        case 0x1b47ecu: goto label_1b47ec;
        case 0x1b47f0u: goto label_1b47f0;
        case 0x1b47f4u: goto label_1b47f4;
        case 0x1b47f8u: goto label_1b47f8;
        case 0x1b47fcu: goto label_1b47fc;
        case 0x1b4800u: goto label_1b4800;
        case 0x1b4804u: goto label_1b4804;
        case 0x1b4808u: goto label_1b4808;
        case 0x1b480cu: goto label_1b480c;
        case 0x1b4810u: goto label_1b4810;
        case 0x1b4814u: goto label_1b4814;
        case 0x1b4818u: goto label_1b4818;
        case 0x1b481cu: goto label_1b481c;
        case 0x1b4820u: goto label_1b4820;
        case 0x1b4824u: goto label_1b4824;
        case 0x1b4828u: goto label_1b4828;
        case 0x1b482cu: goto label_1b482c;
        case 0x1b4830u: goto label_1b4830;
        case 0x1b4834u: goto label_1b4834;
        case 0x1b4838u: goto label_1b4838;
        case 0x1b483cu: goto label_1b483c;
        case 0x1b4840u: goto label_1b4840;
        case 0x1b4844u: goto label_1b4844;
        case 0x1b4848u: goto label_1b4848;
        case 0x1b484cu: goto label_1b484c;
        case 0x1b4850u: goto label_1b4850;
        case 0x1b4854u: goto label_1b4854;
        case 0x1b4858u: goto label_1b4858;
        case 0x1b485cu: goto label_1b485c;
        case 0x1b4860u: goto label_1b4860;
        case 0x1b4864u: goto label_1b4864;
        case 0x1b4868u: goto label_1b4868;
        case 0x1b486cu: goto label_1b486c;
        case 0x1b4870u: goto label_1b4870;
        case 0x1b4874u: goto label_1b4874;
        case 0x1b4878u: goto label_1b4878;
        default: break;
    }

    ctx->pc = 0x1b4660u;

label_1b4660:
    // 0x1b4660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b4664:
    // 0x1b4664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b4664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b4668:
    // 0x1b4668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b4668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b466c:
    // 0x1b466c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b4670:
    // 0x1b4670: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b4670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b4674:
    // 0x1b4674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b4678:
    // 0x1b4678: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b4678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b467c:
    // 0x1b467c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b4680:
    // 0x1b4680: 0x12600077  beqz        $s3, . + 4 + (0x77 << 2)
label_1b4684:
    if (ctx->pc == 0x1B4684u) {
        ctx->pc = 0x1B4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4680u;
        // 0x1b4684: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4688u;
        goto label_1b4688;
    }
    ctx->pc = 0x1B4680u;
    {
        const bool branch_taken_0x1b4680 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4680u;
        // 0x1b4684: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4680) {
            ctx->pc = 0x1B4860u;
            goto label_1b4860;
        }
    }
    ctx->pc = 0x1B4688u;
label_1b4688:
    // 0x1b4688: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1b468c:
    // 0x1b468c: 0x3c0207ff  lui         $v0, 0x7FF
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
label_1b4690:
    // 0x1b4690: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1b4690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b4694:
    // 0x1b4694: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x1b4694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4698:
    // 0x1b4698: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b4698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1b469c:
    // 0x1b469c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1b469cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b46a0:
    // 0x1b46a0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1b46a4:
    // 0x1b46a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b46a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b46a8:
    // 0x1b46a8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_1b46ac:
    if (ctx->pc == 0x1B46ACu) {
        ctx->pc = 0x1B46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46A8u;
        // 0x1b46ac: 0x668024  and         $s0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46B0u;
        goto label_1b46b0;
    }
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46A8u;
        // 0x1b46ac: 0x668024  and         $s0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B47D8u;
            goto label_1b47d8;
        }
    }
    ctx->pc = 0x1B46B0u;
label_1b46b0:
    // 0x1b46b0: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x1b46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
label_1b46b4:
    // 0x1b46b4: 0x8f838720  lw          $v1, -0x78E0($gp)
    ctx->pc = 0x1b46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936352)));
label_1b46b8:
    // 0x1b46b8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1b46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1b46bc:
    // 0x1b46bc: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_1b46c0:
    if (ctx->pc == 0x1B46C0u) {
        ctx->pc = 0x1B46C4u;
        goto label_1b46c4;
    }
    ctx->pc = 0x1B46BCu;
    {
        const bool branch_taken_0x1b46bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b46bc) {
            ctx->pc = 0x1B47B8u;
            goto label_1b47b8;
        }
    }
    ctx->pc = 0x1B46C4u;
label_1b46c4:
    // 0x1b46c4: 0xdcaa0060  ld          $t2, 0x60($a1)
    ctx->pc = 0x1b46c4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 96)));
label_1b46c8:
    // 0x1b46c8: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x1b46c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1b46cc:
    // 0x1b46cc: 0x25bb8  dsll        $t3, $v0, 14
    ctx->pc = 0x1b46ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << 14);
label_1b46d0:
    // 0x1b46d0: 0x2406fc0f  addiu       $a2, $zero, -0x3F1
    ctx->pc = 0x1b46d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
label_1b46d4:
    // 0x1b46d4: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1b46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_1b46d8:
    // 0x1b46d8: 0x64070130  daddiu      $a3, $zero, 0x130
    ctx->pc = 0x1b46d8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)304);
label_1b46dc:
    // 0x1b46dc: 0x34493fff  ori         $t1, $v0, 0x3FFF
    ctx->pc = 0x1b46dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_1b46e0:
    // 0x1b46e0: 0x2403ffc3  addiu       $v1, $zero, -0x3D
    ctx->pc = 0x1b46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
label_1b46e4:
    // 0x1b46e4: 0x6402000a  daddiu      $v0, $zero, 0xA
    ctx->pc = 0x1b46e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
label_1b46e8:
    // 0x1b46e8: 0x6404001c  daddiu      $a0, $zero, 0x1C
    ctx->pc = 0x1b46e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)28);
label_1b46ec:
    // 0x1b46ec: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b46ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1b46f0:
    // 0x1b46f0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b46f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1b46f4:
    // 0x1b46f4: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x1b46f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
label_1b46f8:
    // 0x1b46f8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1b46f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1b46fc:
    // 0x1b46fc: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x1b46fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_1b4700:
    // 0x1b4700: 0xfcaa0060  sd          $t2, 0x60($a1)
    ctx->pc = 0x1b4700u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 10));
label_1b4704:
    // 0x1b4704: 0x3c083fff  lui         $t0, 0x3FFF
    ctx->pc = 0x1b4704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16383 << 16));
label_1b4708:
    // 0x1b4708: 0x94ad0062  lhu         $t5, 0x62($a1)
    ctx->pc = 0x1b4708u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 98)));
label_1b470c:
    // 0x1b470c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1b470cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1b4710:
    // 0x1b4710: 0x1096025  or          $t4, $t0, $t1
    ctx->pc = 0x1b4710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1b4714:
    // 0x1b4714: 0x300a001f  andi        $t2, $zero, 0x1F
    ctx->pc = 0x1b4714u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
label_1b4718:
    // 0x1b4718: 0x3c09fff8  lui         $t1, 0xFFF8
    ctx->pc = 0x1b4718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65528 << 16));
label_1b471c:
    // 0x1b471c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1b471cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1b4720:
    // 0x1b4720: 0x3529001f  ori         $t1, $t1, 0x1F
    ctx->pc = 0x1b4720u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)31);
label_1b4724:
    // 0x1b4724: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1b4724u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_1b4728:
    // 0x1b4728: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1b4728u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_1b472c:
    // 0x1b472c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1b472cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1b4730:
    // 0x1b4730: 0x1095825  or          $t3, $t0, $t1
    ctx->pc = 0x1b4730u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1b4734:
    // 0x1b4734: 0x1a66824  and         $t5, $t5, $a2
    ctx->pc = 0x1b4734u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 6));
label_1b4738:
    // 0x1b4738: 0x2409ffe0  addiu       $t1, $zero, -0x20
    ctx->pc = 0x1b4738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_1b473c:
    // 0x1b473c: 0x1a73825  or          $a3, $t5, $a3
    ctx->pc = 0x1b473cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) | GPR_U64(ctx, 7));
label_1b4740:
    // 0x1b4740: 0x2406ff1f  addiu       $a2, $zero, -0xE1
    ctx->pc = 0x1b4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
label_1b4744:
    // 0x1b4744: 0xa4a70062  sh          $a3, 0x62($a1)
    ctx->pc = 0x1b4744u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 7));
label_1b4748:
    // 0x1b4748: 0x64080020  daddiu      $t0, $zero, 0x20
    ctx->pc = 0x1b4748u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
label_1b474c:
    // 0x1b474c: 0x90a70063  lbu         $a3, 0x63($a1)
    ctx->pc = 0x1b474cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 99)));
label_1b4750:
    // 0x1b4750: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1b4750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1b4754:
    // 0x1b4754: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b4754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b4758:
    // 0x1b4758: 0xa0a30063  sb          $v1, 0x63($a1)
    ctx->pc = 0x1b4758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 99), (uint8_t)GPR_U32(ctx, 3));
label_1b475c:
    // 0x1b475c: 0xdca30060  ld          $v1, 0x60($a1)
    ctx->pc = 0x1b475cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 96)));
label_1b4760:
    // 0x1b4760: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x1b4760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_1b4764:
    // 0x1b4764: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b4768:
    // 0x1b4768: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x1b4768u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
label_1b476c:
    // 0x1b476c: 0x94a30060  lhu         $v1, 0x60($a1)
    ctx->pc = 0x1b476cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
label_1b4770:
    // 0x1b4770: 0xdca20060  ld          $v0, 0x60($a1)
    ctx->pc = 0x1b4770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 96)));
label_1b4774:
    // 0x1b4774: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1b4774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_1b4778:
    // 0x1b4778: 0x246300dc  addiu       $v1, $v1, 0xDC
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
label_1b477c:
    // 0x1b477c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x1b477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_1b4780:
    // 0x1b4780: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b4780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b4784:
    // 0x1b4784: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b4784u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1b4788:
    // 0x1b4788: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1b4788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_1b478c:
    // 0x1b478c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b478cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_1b4790:
    // 0x1b4790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b4794:
    // 0x1b4794: 0xfca20060  sd          $v0, 0x60($a1)
    ctx->pc = 0x1b4794u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 2));
label_1b4798:
    // 0x1b4798: 0x90a20067  lbu         $v0, 0x67($a1)
    ctx->pc = 0x1b4798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 103)));
label_1b479c:
    // 0x1b479c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1b479cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_1b47a0:
    // 0x1b47a0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1b47a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_1b47a4:
    // 0x1b47a4: 0xa0a20067  sb          $v0, 0x67($a1)
    ctx->pc = 0x1b47a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 103), (uint8_t)GPR_U32(ctx, 2));
label_1b47a8:
    // 0x1b47a8: 0x90a20067  lbu         $v0, 0x67($a1)
    ctx->pc = 0x1b47a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 103)));
label_1b47ac:
    // 0x1b47ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1b47acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1b47b0:
    // 0x1b47b0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1b47b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_1b47b4:
    // 0x1b47b4: 0xa0a20067  sb          $v0, 0x67($a1)
    ctx->pc = 0x1b47b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 103), (uint8_t)GPR_U32(ctx, 2));
label_1b47b8:
    // 0x1b47b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b47b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b47bc:
    // 0x1b47bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b47c0:
    // 0x1b47c0: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1b47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1b47c4:
    // 0x1b47c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b47c8:
    // 0x1b47c8: 0x320f809  jalr        $t9
label_1b47cc:
    if (ctx->pc == 0x1B47CCu) {
        ctx->pc = 0x1B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C8u;
        // 0x1b47cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47D0u;
        goto label_1b47d0;
    }
    ctx->pc = 0x1B47C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B47D0u);
        ctx->pc = 0x1B47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47C8u;
        // 0x1b47cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B47C8u, 0x1B47D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B47D0u;
label_1b47d0:
    // 0x1b47d0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b47d4:
    if (ctx->pc == 0x1B47D4u) {
        ctx->pc = 0x1B47D8u;
        goto label_1b47d8;
    }
    ctx->pc = 0x1B47D0u;
    {
        const bool branch_taken_0x1b47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b47d0) {
            ctx->pc = 0x1B4858u;
            goto label_1b4858;
        }
    }
    ctx->pc = 0x1B47D8u;
label_1b47d8:
    // 0x1b47d8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1b47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1b47dc:
    // 0x1b47dc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1b47e0:
    // 0x1b47e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b47e4:
    // 0x1b47e4: 0xc0485c8  jal         func_121720
label_1b47e8:
    if (ctx->pc == 0x1B47E8u) {
        ctx->pc = 0x1B47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E4u;
        // 0x1b47e8: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47ECu;
        goto label_1b47ec;
    }
    ctx->pc = 0x1B47E4u;
    SET_GPR_U32(ctx, 31, 0x1B47ECu);
    ctx->pc = 0x1B47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47E4u;
    // 0x1b47e8: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1B47E4u, 0x1B47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47ECu;
label_1b47ec:
    // 0x1b47ec: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1b47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1b47f0:
    // 0x1b47f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b47f4:
    // 0x1b47f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b47f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b47f8:
    // 0x1b47f8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1b47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b47fc:
    // 0x1b47fc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1b4800:
    if (ctx->pc == 0x1B4800u) {
        ctx->pc = 0x1B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47FCu;
        // 0x1b4800: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4804u;
        goto label_1b4804;
    }
    ctx->pc = 0x1B47FCu;
    {
        const bool branch_taken_0x1b47fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47FCu;
        // 0x1b4800: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47fc) {
            ctx->pc = 0x1B480Cu;
            goto label_1b480c;
        }
    }
    ctx->pc = 0x1B4804u;
label_1b4804:
    // 0x1b4804: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1b4804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1b4808:
    // 0x1b4808: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1b480c:
    // 0x1b480c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1b4810:
    if (ctx->pc == 0x1B4810u) {
        ctx->pc = 0x1B4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B480Cu;
        // 0x1b4810: 0x5217c  dsll32      $a0, $a1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4814u;
        goto label_1b4814;
    }
    ctx->pc = 0x1B480Cu;
    {
        const bool branch_taken_0x1b480c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B480Cu;
        // 0x1b4810: 0x5217c  dsll32      $a0, $a1, 5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b480c) {
            ctx->pc = 0x1B4858u;
            goto label_1b4858;
        }
    }
    ctx->pc = 0x1B4814u;
label_1b4814:
    // 0x1b4814: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x1b4814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1b4818:
    // 0x1b4818: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b4818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
label_1b481c:
    // 0x1b481c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_1b4820:
    // 0x1b4820: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1b4820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_1b4824:
    // 0x1b4824: 0x3197e  dsrl32      $v1, $v1, 5
    ctx->pc = 0x1b4824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 5));
label_1b4828:
    // 0x1b4828: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x1b4828u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1b482c:
    // 0x1b482c: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x1b482cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
label_1b4830:
    // 0x1b4830: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1b4830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b4834:
    // 0x1b4834: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1b4834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1b4838:
    // 0x1b4838: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1b4838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1b483c:
    // 0x1b483c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1b483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1b4840:
    // 0x1b4840: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1b4840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1b4844:
    // 0x1b4844: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b4844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4848:
    // 0x1b4848: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1b484c:
    // 0x1b484c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b484cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1b4850:
    // 0x1b4850: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1b4850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4854:
    // 0x1b4854: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1b4854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_1b4858:
    // 0x1b4858: 0x1600ff8b  bnez        $s0, . + 4 + (-0x75 << 2)
label_1b485c:
    if (ctx->pc == 0x1B485Cu) {
        ctx->pc = 0x1B485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4858u;
        // 0x1b485c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4860u;
        goto label_1b4860;
    }
    ctx->pc = 0x1B4858u;
    {
        const bool branch_taken_0x1b4858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4858u;
        // 0x1b485c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4858) {
            ctx->pc = 0x1B4688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4688;
        }
    }
    ctx->pc = 0x1B4860u;
label_1b4860:
    // 0x1b4860: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b4860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b4864:
    // 0x1b4864: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b4864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4868:
    // 0x1b4868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b486c:
    // 0x1b486c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b486cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4870:
    // 0x1b4870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4874:
    // 0x1b4874: 0x3e00008  jr          $ra
label_1b4878:
    if (ctx->pc == 0x1B4878u) {
        ctx->pc = 0x1B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4874u;
        // 0x1b4878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B487Cu;
        goto label_fallthrough_0x1b4874;
    }
    ctx->pc = 0x1B4874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4874u;
        // 0x1b4878: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b4874:
    ctx->pc = 0x1B487Cu;
}
