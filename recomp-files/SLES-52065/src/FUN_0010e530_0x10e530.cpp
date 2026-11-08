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

// Function: FUN_0010e530
// Address: 0x10e530 - 0x10e780
void FUN_0010e530_0x10e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e530_0x10e530");
#endif

    switch (ctx->pc) {
        case 0x10e530u: goto label_10e530;
        case 0x10e534u: goto label_10e534;
        case 0x10e538u: goto label_10e538;
        case 0x10e53cu: goto label_10e53c;
        case 0x10e540u: goto label_10e540;
        case 0x10e544u: goto label_10e544;
        case 0x10e548u: goto label_10e548;
        case 0x10e54cu: goto label_10e54c;
        case 0x10e550u: goto label_10e550;
        case 0x10e554u: goto label_10e554;
        case 0x10e558u: goto label_10e558;
        case 0x10e55cu: goto label_10e55c;
        case 0x10e560u: goto label_10e560;
        case 0x10e564u: goto label_10e564;
        case 0x10e568u: goto label_10e568;
        case 0x10e56cu: goto label_10e56c;
        case 0x10e570u: goto label_10e570;
        case 0x10e574u: goto label_10e574;
        case 0x10e578u: goto label_10e578;
        case 0x10e57cu: goto label_10e57c;
        case 0x10e580u: goto label_10e580;
        case 0x10e584u: goto label_10e584;
        case 0x10e588u: goto label_10e588;
        case 0x10e58cu: goto label_10e58c;
        case 0x10e590u: goto label_10e590;
        case 0x10e594u: goto label_10e594;
        case 0x10e598u: goto label_10e598;
        case 0x10e59cu: goto label_10e59c;
        case 0x10e5a0u: goto label_10e5a0;
        case 0x10e5a4u: goto label_10e5a4;
        case 0x10e5a8u: goto label_10e5a8;
        case 0x10e5acu: goto label_10e5ac;
        case 0x10e5b0u: goto label_10e5b0;
        case 0x10e5b4u: goto label_10e5b4;
        case 0x10e5b8u: goto label_10e5b8;
        case 0x10e5bcu: goto label_10e5bc;
        case 0x10e5c0u: goto label_10e5c0;
        case 0x10e5c4u: goto label_10e5c4;
        case 0x10e5c8u: goto label_10e5c8;
        case 0x10e5ccu: goto label_10e5cc;
        case 0x10e5d0u: goto label_10e5d0;
        case 0x10e5d4u: goto label_10e5d4;
        case 0x10e5d8u: goto label_10e5d8;
        case 0x10e5dcu: goto label_10e5dc;
        case 0x10e5e0u: goto label_10e5e0;
        case 0x10e5e4u: goto label_10e5e4;
        case 0x10e5e8u: goto label_10e5e8;
        case 0x10e5ecu: goto label_10e5ec;
        case 0x10e5f0u: goto label_10e5f0;
        case 0x10e5f4u: goto label_10e5f4;
        case 0x10e5f8u: goto label_10e5f8;
        case 0x10e5fcu: goto label_10e5fc;
        case 0x10e600u: goto label_10e600;
        case 0x10e604u: goto label_10e604;
        case 0x10e608u: goto label_10e608;
        case 0x10e60cu: goto label_10e60c;
        case 0x10e610u: goto label_10e610;
        case 0x10e614u: goto label_10e614;
        case 0x10e618u: goto label_10e618;
        case 0x10e61cu: goto label_10e61c;
        case 0x10e620u: goto label_10e620;
        case 0x10e624u: goto label_10e624;
        case 0x10e628u: goto label_10e628;
        case 0x10e62cu: goto label_10e62c;
        case 0x10e630u: goto label_10e630;
        case 0x10e634u: goto label_10e634;
        case 0x10e638u: goto label_10e638;
        case 0x10e63cu: goto label_10e63c;
        case 0x10e640u: goto label_10e640;
        case 0x10e644u: goto label_10e644;
        case 0x10e648u: goto label_10e648;
        case 0x10e64cu: goto label_10e64c;
        case 0x10e650u: goto label_10e650;
        case 0x10e654u: goto label_10e654;
        case 0x10e658u: goto label_10e658;
        case 0x10e65cu: goto label_10e65c;
        case 0x10e660u: goto label_10e660;
        case 0x10e664u: goto label_10e664;
        case 0x10e668u: goto label_10e668;
        case 0x10e66cu: goto label_10e66c;
        case 0x10e670u: goto label_10e670;
        case 0x10e674u: goto label_10e674;
        case 0x10e678u: goto label_10e678;
        case 0x10e67cu: goto label_10e67c;
        case 0x10e680u: goto label_10e680;
        case 0x10e684u: goto label_10e684;
        case 0x10e688u: goto label_10e688;
        case 0x10e68cu: goto label_10e68c;
        case 0x10e690u: goto label_10e690;
        case 0x10e694u: goto label_10e694;
        case 0x10e698u: goto label_10e698;
        case 0x10e69cu: goto label_10e69c;
        case 0x10e6a0u: goto label_10e6a0;
        case 0x10e6a4u: goto label_10e6a4;
        case 0x10e6a8u: goto label_10e6a8;
        case 0x10e6acu: goto label_10e6ac;
        case 0x10e6b0u: goto label_10e6b0;
        case 0x10e6b4u: goto label_10e6b4;
        case 0x10e6b8u: goto label_10e6b8;
        case 0x10e6bcu: goto label_10e6bc;
        case 0x10e6c0u: goto label_10e6c0;
        case 0x10e6c4u: goto label_10e6c4;
        case 0x10e6c8u: goto label_10e6c8;
        case 0x10e6ccu: goto label_10e6cc;
        case 0x10e6d0u: goto label_10e6d0;
        case 0x10e6d4u: goto label_10e6d4;
        case 0x10e6d8u: goto label_10e6d8;
        case 0x10e6dcu: goto label_10e6dc;
        case 0x10e6e0u: goto label_10e6e0;
        case 0x10e6e4u: goto label_10e6e4;
        case 0x10e6e8u: goto label_10e6e8;
        case 0x10e6ecu: goto label_10e6ec;
        case 0x10e6f0u: goto label_10e6f0;
        case 0x10e6f4u: goto label_10e6f4;
        case 0x10e6f8u: goto label_10e6f8;
        case 0x10e6fcu: goto label_10e6fc;
        case 0x10e700u: goto label_10e700;
        case 0x10e704u: goto label_10e704;
        case 0x10e708u: goto label_10e708;
        case 0x10e70cu: goto label_10e70c;
        case 0x10e710u: goto label_10e710;
        case 0x10e714u: goto label_10e714;
        case 0x10e718u: goto label_10e718;
        case 0x10e71cu: goto label_10e71c;
        case 0x10e720u: goto label_10e720;
        case 0x10e724u: goto label_10e724;
        case 0x10e728u: goto label_10e728;
        case 0x10e72cu: goto label_10e72c;
        case 0x10e730u: goto label_10e730;
        case 0x10e734u: goto label_10e734;
        case 0x10e738u: goto label_10e738;
        case 0x10e73cu: goto label_10e73c;
        case 0x10e740u: goto label_10e740;
        case 0x10e744u: goto label_10e744;
        case 0x10e748u: goto label_10e748;
        case 0x10e74cu: goto label_10e74c;
        case 0x10e750u: goto label_10e750;
        case 0x10e754u: goto label_10e754;
        case 0x10e758u: goto label_10e758;
        case 0x10e75cu: goto label_10e75c;
        case 0x10e760u: goto label_10e760;
        case 0x10e764u: goto label_10e764;
        case 0x10e768u: goto label_10e768;
        case 0x10e76cu: goto label_10e76c;
        case 0x10e770u: goto label_10e770;
        case 0x10e774u: goto label_10e774;
        case 0x10e778u: goto label_10e778;
        case 0x10e77cu: goto label_10e77c;
        default: break;
    }

    ctx->pc = 0x10e530u;

label_10e530:
    // 0x10e530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10e534:
    // 0x10e534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10e538:
    // 0x10e538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10e53c:
    // 0x10e53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10e540:
    // 0x10e540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e544:
    // 0x10e544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10e548:
    // 0x10e548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e54c:
    // 0x10e54c: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x10e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_10e550:
    // 0x10e550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e554:
    if (ctx->pc == 0x10E554u) {
        ctx->pc = 0x10E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E550u;
        // 0x10e554: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E558u;
        goto label_10e558;
    }
    ctx->pc = 0x10E550u;
    {
        const bool branch_taken_0x10e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E550u;
        // 0x10e554: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e550) {
            ctx->pc = 0x10E560u;
            goto label_10e560;
        }
    }
    ctx->pc = 0x10E558u;
label_10e558:
    // 0x10e558: 0x10000082  b           . + 4 + (0x82 << 2)
label_10e55c:
    if (ctx->pc == 0x10E55Cu) {
        ctx->pc = 0x10E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E558u;
        // 0x10e55c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E560u;
        goto label_10e560;
    }
    ctx->pc = 0x10E558u;
    {
        const bool branch_taken_0x10e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E558u;
        // 0x10e55c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e558) {
            ctx->pc = 0x10E764u;
            goto label_10e764;
        }
    }
    ctx->pc = 0x10E560u;
label_10e560:
    // 0x10e560: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e564:
    // 0x10e564: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x10e564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10e568:
    // 0x10e568: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_10e56c:
    if (ctx->pc == 0x10E56Cu) {
        ctx->pc = 0x10E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E568u;
        // 0x10e56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E570u;
        goto label_10e570;
    }
    ctx->pc = 0x10E568u;
    {
        const bool branch_taken_0x10e568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E568u;
        // 0x10e56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e568) {
            ctx->pc = 0x10E6F8u;
            goto label_10e6f8;
        }
    }
    ctx->pc = 0x10E570u;
label_10e570:
    // 0x10e570: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x10e570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_10e574:
    // 0x10e574: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
label_10e578:
    if (ctx->pc == 0x10E578u) {
        ctx->pc = 0x10E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E574u;
        // 0x10e578: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E57Cu;
        goto label_10e57c;
    }
    ctx->pc = 0x10E574u;
    {
        const bool branch_taken_0x10e574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E574u;
        // 0x10e578: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e574) {
            ctx->pc = 0x10E6A4u;
            goto label_10e6a4;
        }
    }
    ctx->pc = 0x10E57Cu;
label_10e57c:
    // 0x10e57c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e580:
    // 0x10e580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e584:
    // 0x10e584: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e584u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e588:
    // 0x10e588: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x10e588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_10e58c:
    // 0x10e58c: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x10e58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_10e590:
    // 0x10e590: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_10e594:
    // 0x10e594: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x10e594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e598:
    // 0x10e598: 0x43402a  slt         $t0, $v0, $v1
    ctx->pc = 0x10e598u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e59c:
    // 0x10e59c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_10e5a0:
    // 0x10e5a0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e5a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e5a4:
    // 0x10e5a4: 0x85290000  lh          $t1, 0x0($t1)
    ctx->pc = 0x10e5a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_10e5a8:
    // 0x10e5a8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e5ac:
    // 0x10e5ac: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e5b0:
    // 0x10e5b0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e5b4:
    // 0x10e5b4: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e5b8:
    // 0x10e5b8: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x10e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
label_10e5bc:
    // 0x10e5bc: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e5bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e5c0:
    // 0x10e5c0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e5c4:
    // 0x10e5c4: 0x85290002  lh          $t1, 0x2($t1)
    ctx->pc = 0x10e5c4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_10e5c8:
    // 0x10e5c8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e5cc:
    // 0x10e5cc: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e5d0:
    // 0x10e5d0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e5d4:
    // 0x10e5d4: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e5d8:
    // 0x10e5d8: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x10e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
label_10e5dc:
    // 0x10e5dc: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e5e0:
    // 0x10e5e0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e5e4:
    // 0x10e5e4: 0x85290004  lh          $t1, 0x4($t1)
    ctx->pc = 0x10e5e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_10e5e8:
    // 0x10e5e8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e5ec:
    // 0x10e5ec: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e5f0:
    // 0x10e5f0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e5f4:
    // 0x10e5f4: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e5f8:
    // 0x10e5f8: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x10e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_10e5fc:
    // 0x10e5fc: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e600:
    // 0x10e600: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e604:
    // 0x10e604: 0x85290006  lh          $t1, 0x6($t1)
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_10e608:
    // 0x10e608: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e608u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e60c:
    // 0x10e60c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e60cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e610:
    // 0x10e610: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e614:
    // 0x10e614: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e618:
    // 0x10e618: 0xace9000c  sw          $t1, 0xC($a3)
    ctx->pc = 0x10e618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 9));
label_10e61c:
    // 0x10e61c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e620:
    // 0x10e620: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e624:
    // 0x10e624: 0x85290008  lh          $t1, 0x8($t1)
    ctx->pc = 0x10e624u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
label_10e628:
    // 0x10e628: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e628u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e62c:
    // 0x10e62c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e630:
    // 0x10e630: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e634:
    // 0x10e634: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e634u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e638:
    // 0x10e638: 0xace90010  sw          $t1, 0x10($a3)
    ctx->pc = 0x10e638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 9));
label_10e63c:
    // 0x10e63c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e63cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e640:
    // 0x10e640: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e644:
    // 0x10e644: 0x8529000a  lh          $t1, 0xA($t1)
    ctx->pc = 0x10e644u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
label_10e648:
    // 0x10e648: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e648u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e64c:
    // 0x10e64c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e650:
    // 0x10e650: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e654:
    // 0x10e654: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e658:
    // 0x10e658: 0xace90014  sw          $t1, 0x14($a3)
    ctx->pc = 0x10e658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 9));
label_10e65c:
    // 0x10e65c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e65cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e660:
    // 0x10e660: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e664:
    // 0x10e664: 0x8529000c  lh          $t1, 0xC($t1)
    ctx->pc = 0x10e664u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
label_10e668:
    // 0x10e668: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e668u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e66c:
    // 0x10e66c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e670:
    // 0x10e670: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
label_10e674:
    // 0x10e674: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
label_10e678:
    // 0x10e678: 0xace90018  sw          $t1, 0x18($a3)
    ctx->pc = 0x10e678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 9));
label_10e67c:
    // 0x10e67c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e67cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e680:
    // 0x10e680: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10e684:
    // 0x10e684: 0x8529000e  lh          $t1, 0xE($t1)
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
label_10e688:
    // 0x10e688: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x10e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_10e68c:
    // 0x10e68c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e68cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_10e690:
    // 0x10e690: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x10e690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_10e694:
    // 0x10e694: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x10e694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_10e698:
    // 0x10e698: 0x8cc601d4  lw          $a2, 0x1D4($a2)
    ctx->pc = 0x10e698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 468)));
label_10e69c:
    // 0x10e69c: 0x1500ffb9  bnez        $t0, . + 4 + (-0x47 << 2)
label_10e6a0:
    if (ctx->pc == 0x10E6A0u) {
        ctx->pc = 0x10E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E69Cu;
        // 0x10e6a0: 0xace6001c  sw          $a2, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6A4u;
        goto label_10e6a4;
    }
    ctx->pc = 0x10E69Cu;
    {
        const bool branch_taken_0x10e69c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E69Cu;
        // 0x10e6a0: 0xace6001c  sw          $a2, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e69c) {
            ctx->pc = 0x10E584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e584;
        }
    }
    ctx->pc = 0x10E6A4u;
label_10e6a4:
    // 0x10e6a4: 0x0  nop
    ctx->pc = 0x10e6a4u;
    // NOP
label_10e6a8:
    // 0x10e6a8: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10e6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_10e6ac:
    // 0x10e6ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_10e6b0:
    if (ctx->pc == 0x10E6B0u) {
        ctx->pc = 0x10E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6ACu;
        // 0x10e6b0: 0x23880  sll         $a3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E6B4u;
        goto label_10e6b4;
    }
    ctx->pc = 0x10E6ACu;
    {
        const bool branch_taken_0x10e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6ACu;
        // 0x10e6b0: 0x23880  sll         $a3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6ac) {
            ctx->pc = 0x10E6E8u;
            goto label_10e6e8;
        }
    }
    ctx->pc = 0x10E6B4u;
label_10e6b4:
    // 0x10e6b4: 0x8e250210  lw          $a1, 0x210($s1)
    ctx->pc = 0x10e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e6b8:
    // 0x10e6b8: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x10e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_10e6bc:
    // 0x10e6bc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e6c0:
    // 0x10e6c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x10e6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_10e6c4:
    // 0x10e6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e6c8:
    // 0x10e6c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_10e6cc:
    // 0x10e6cc: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x10e6ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_10e6d0:
    // 0x10e6d0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x10e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_10e6d4:
    // 0x10e6d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10e6d8:
    // 0x10e6d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10e6dc:
    // 0x10e6dc: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x10e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_10e6e0:
    // 0x10e6e0: 0x8c8401d4  lw          $a0, 0x1D4($a0)
    ctx->pc = 0x10e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_10e6e4:
    // 0x10e6e4: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x10e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_10e6e8:
    // 0x10e6e8: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x10e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e6ec:
    // 0x10e6ec: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x10e6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e6f0:
    // 0x10e6f0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_10e6f4:
    if (ctx->pc == 0x10E6F4u) {
        ctx->pc = 0x10E6F8u;
        goto label_10e6f8;
    }
    ctx->pc = 0x10E6F0u;
    {
        const bool branch_taken_0x10e6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e6f0) {
            ctx->pc = 0x10E6B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e6b4;
        }
    }
    ctx->pc = 0x10E6F8u;
label_10e6f8:
    // 0x10e6f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e6fc:
    // 0x10e6fc: 0x10000013  b           . + 4 + (0x13 << 2)
label_10e700:
    if (ctx->pc == 0x10E700u) {
        ctx->pc = 0x10E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6FCu;
        // 0x10e700: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E704u;
        goto label_10e704;
    }
    ctx->pc = 0x10E6FCu;
    {
        const bool branch_taken_0x10e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6FCu;
        // 0x10e700: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6fc) {
            ctx->pc = 0x10E74Cu;
            goto label_10e74c;
        }
    }
    ctx->pc = 0x10E704u;
label_10e704:
    // 0x10e704: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x10e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e708:
    // 0x10e708: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10e70c:
    // 0x10e70c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e710:
    // 0x10e710: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x10e710u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10e714:
    // 0x10e714: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_10e718:
    // 0x10e718: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x10e718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e71c:
    // 0x10e71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e720:
    // 0x10e720: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e724:
    // 0x10e724: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e728:
    // 0x10e728: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e72c:
    // 0x10e72c: 0x1010  mfhi        $v0
    ctx->pc = 0x10e72cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_10e730:
    // 0x10e730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e734:
    // 0x10e734: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x10e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_10e738:
    // 0x10e738: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e73c:
    // 0x10e73c: 0x320f809  jalr        $t9
label_10e740:
    if (ctx->pc == 0x10E740u) {
        ctx->pc = 0x10E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E73Cu;
        // 0x10e740: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E744u;
        goto label_10e744;
    }
    ctx->pc = 0x10E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E744u);
        ctx->pc = 0x10E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E73Cu;
        // 0x10e740: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E73Cu, 0x10E744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E744u;
label_10e744:
    // 0x10e744: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x10e744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_10e748:
    // 0x10e748: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10e748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10e74c:
    // 0x10e74c: 0x0  nop
    ctx->pc = 0x10e74cu;
    // NOP
label_10e750:
    // 0x10e750: 0x8e250220  lw          $a1, 0x220($s1)
    ctx->pc = 0x10e750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10e754:
    // 0x10e754: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x10e754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_10e758:
    // 0x10e758: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_10e75c:
    if (ctx->pc == 0x10E75Cu) {
        ctx->pc = 0x10E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E758u;
        // 0x10e75c: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E760u;
        goto label_10e760;
    }
    ctx->pc = 0x10E758u;
    {
        const bool branch_taken_0x10e758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E758u;
        // 0x10e75c: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e758) {
            ctx->pc = 0x10E704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e704;
        }
    }
    ctx->pc = 0x10E760u;
label_10e760:
    // 0x10e760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e764:
    // 0x10e764: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10e768:
    // 0x10e768: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10e768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10e76c:
    // 0x10e76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10e76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e770:
    // 0x10e770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e774:
    // 0x10e774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10e778:
    // 0x10e778: 0x3e00008  jr          $ra
label_10e77c:
    if (ctx->pc == 0x10E77Cu) {
        ctx->pc = 0x10E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E778u;
        // 0x10e77c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E780u;
        goto label_fallthrough_0x10e778;
    }
    ctx->pc = 0x10E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E778u;
        // 0x10e77c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e778:
    ctx->pc = 0x10E780u;
}
