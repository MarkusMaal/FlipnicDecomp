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

// Function: FUN_0015e480
// Address: 0x15e480 - 0x15e7c8
void FUN_0015e480_0x15e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015e480_0x15e480");
#endif

    switch (ctx->pc) {
        case 0x15e480u: goto label_15e480;
        case 0x15e484u: goto label_15e484;
        case 0x15e488u: goto label_15e488;
        case 0x15e48cu: goto label_15e48c;
        case 0x15e490u: goto label_15e490;
        case 0x15e494u: goto label_15e494;
        case 0x15e498u: goto label_15e498;
        case 0x15e49cu: goto label_15e49c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4a8u: goto label_15e4a8;
        case 0x15e4acu: goto label_15e4ac;
        case 0x15e4b0u: goto label_15e4b0;
        case 0x15e4b4u: goto label_15e4b4;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4c0u: goto label_15e4c0;
        case 0x15e4c4u: goto label_15e4c4;
        case 0x15e4c8u: goto label_15e4c8;
        case 0x15e4ccu: goto label_15e4cc;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4d4u: goto label_15e4d4;
        case 0x15e4d8u: goto label_15e4d8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e0u: goto label_15e4e0;
        case 0x15e4e4u: goto label_15e4e4;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e4ecu: goto label_15e4ec;
        case 0x15e4f0u: goto label_15e4f0;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e4f8u: goto label_15e4f8;
        case 0x15e4fcu: goto label_15e4fc;
        case 0x15e500u: goto label_15e500;
        case 0x15e504u: goto label_15e504;
        case 0x15e508u: goto label_15e508;
        case 0x15e50cu: goto label_15e50c;
        case 0x15e510u: goto label_15e510;
        case 0x15e514u: goto label_15e514;
        case 0x15e518u: goto label_15e518;
        case 0x15e51cu: goto label_15e51c;
        case 0x15e520u: goto label_15e520;
        case 0x15e524u: goto label_15e524;
        case 0x15e528u: goto label_15e528;
        case 0x15e52cu: goto label_15e52c;
        case 0x15e530u: goto label_15e530;
        case 0x15e534u: goto label_15e534;
        case 0x15e538u: goto label_15e538;
        case 0x15e53cu: goto label_15e53c;
        case 0x15e540u: goto label_15e540;
        case 0x15e544u: goto label_15e544;
        case 0x15e548u: goto label_15e548;
        case 0x15e54cu: goto label_15e54c;
        case 0x15e550u: goto label_15e550;
        case 0x15e554u: goto label_15e554;
        case 0x15e558u: goto label_15e558;
        case 0x15e55cu: goto label_15e55c;
        case 0x15e560u: goto label_15e560;
        case 0x15e564u: goto label_15e564;
        case 0x15e568u: goto label_15e568;
        case 0x15e56cu: goto label_15e56c;
        case 0x15e570u: goto label_15e570;
        case 0x15e574u: goto label_15e574;
        case 0x15e578u: goto label_15e578;
        case 0x15e57cu: goto label_15e57c;
        case 0x15e580u: goto label_15e580;
        case 0x15e584u: goto label_15e584;
        case 0x15e588u: goto label_15e588;
        case 0x15e58cu: goto label_15e58c;
        case 0x15e590u: goto label_15e590;
        case 0x15e594u: goto label_15e594;
        case 0x15e598u: goto label_15e598;
        case 0x15e59cu: goto label_15e59c;
        case 0x15e5a0u: goto label_15e5a0;
        case 0x15e5a4u: goto label_15e5a4;
        case 0x15e5a8u: goto label_15e5a8;
        case 0x15e5acu: goto label_15e5ac;
        case 0x15e5b0u: goto label_15e5b0;
        case 0x15e5b4u: goto label_15e5b4;
        case 0x15e5b8u: goto label_15e5b8;
        case 0x15e5bcu: goto label_15e5bc;
        case 0x15e5c0u: goto label_15e5c0;
        case 0x15e5c4u: goto label_15e5c4;
        case 0x15e5c8u: goto label_15e5c8;
        case 0x15e5ccu: goto label_15e5cc;
        case 0x15e5d0u: goto label_15e5d0;
        case 0x15e5d4u: goto label_15e5d4;
        case 0x15e5d8u: goto label_15e5d8;
        case 0x15e5dcu: goto label_15e5dc;
        case 0x15e5e0u: goto label_15e5e0;
        case 0x15e5e4u: goto label_15e5e4;
        case 0x15e5e8u: goto label_15e5e8;
        case 0x15e5ecu: goto label_15e5ec;
        case 0x15e5f0u: goto label_15e5f0;
        case 0x15e5f4u: goto label_15e5f4;
        case 0x15e5f8u: goto label_15e5f8;
        case 0x15e5fcu: goto label_15e5fc;
        case 0x15e600u: goto label_15e600;
        case 0x15e604u: goto label_15e604;
        case 0x15e608u: goto label_15e608;
        case 0x15e60cu: goto label_15e60c;
        case 0x15e610u: goto label_15e610;
        case 0x15e614u: goto label_15e614;
        case 0x15e618u: goto label_15e618;
        case 0x15e61cu: goto label_15e61c;
        case 0x15e620u: goto label_15e620;
        case 0x15e624u: goto label_15e624;
        case 0x15e628u: goto label_15e628;
        case 0x15e62cu: goto label_15e62c;
        case 0x15e630u: goto label_15e630;
        case 0x15e634u: goto label_15e634;
        case 0x15e638u: goto label_15e638;
        case 0x15e63cu: goto label_15e63c;
        case 0x15e640u: goto label_15e640;
        case 0x15e644u: goto label_15e644;
        case 0x15e648u: goto label_15e648;
        case 0x15e64cu: goto label_15e64c;
        case 0x15e650u: goto label_15e650;
        case 0x15e654u: goto label_15e654;
        case 0x15e658u: goto label_15e658;
        case 0x15e65cu: goto label_15e65c;
        case 0x15e660u: goto label_15e660;
        case 0x15e664u: goto label_15e664;
        case 0x15e668u: goto label_15e668;
        case 0x15e66cu: goto label_15e66c;
        case 0x15e670u: goto label_15e670;
        case 0x15e674u: goto label_15e674;
        case 0x15e678u: goto label_15e678;
        case 0x15e67cu: goto label_15e67c;
        case 0x15e680u: goto label_15e680;
        case 0x15e684u: goto label_15e684;
        case 0x15e688u: goto label_15e688;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e690u: goto label_15e690;
        case 0x15e694u: goto label_15e694;
        case 0x15e698u: goto label_15e698;
        case 0x15e69cu: goto label_15e69c;
        case 0x15e6a0u: goto label_15e6a0;
        case 0x15e6a4u: goto label_15e6a4;
        case 0x15e6a8u: goto label_15e6a8;
        case 0x15e6acu: goto label_15e6ac;
        case 0x15e6b0u: goto label_15e6b0;
        case 0x15e6b4u: goto label_15e6b4;
        case 0x15e6b8u: goto label_15e6b8;
        case 0x15e6bcu: goto label_15e6bc;
        case 0x15e6c0u: goto label_15e6c0;
        case 0x15e6c4u: goto label_15e6c4;
        case 0x15e6c8u: goto label_15e6c8;
        case 0x15e6ccu: goto label_15e6cc;
        case 0x15e6d0u: goto label_15e6d0;
        case 0x15e6d4u: goto label_15e6d4;
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e6dcu: goto label_15e6dc;
        case 0x15e6e0u: goto label_15e6e0;
        case 0x15e6e4u: goto label_15e6e4;
        case 0x15e6e8u: goto label_15e6e8;
        case 0x15e6ecu: goto label_15e6ec;
        case 0x15e6f0u: goto label_15e6f0;
        case 0x15e6f4u: goto label_15e6f4;
        case 0x15e6f8u: goto label_15e6f8;
        case 0x15e6fcu: goto label_15e6fc;
        case 0x15e700u: goto label_15e700;
        case 0x15e704u: goto label_15e704;
        case 0x15e708u: goto label_15e708;
        case 0x15e70cu: goto label_15e70c;
        case 0x15e710u: goto label_15e710;
        case 0x15e714u: goto label_15e714;
        case 0x15e718u: goto label_15e718;
        case 0x15e71cu: goto label_15e71c;
        case 0x15e720u: goto label_15e720;
        case 0x15e724u: goto label_15e724;
        case 0x15e728u: goto label_15e728;
        case 0x15e72cu: goto label_15e72c;
        case 0x15e730u: goto label_15e730;
        case 0x15e734u: goto label_15e734;
        case 0x15e738u: goto label_15e738;
        case 0x15e73cu: goto label_15e73c;
        case 0x15e740u: goto label_15e740;
        case 0x15e744u: goto label_15e744;
        case 0x15e748u: goto label_15e748;
        case 0x15e74cu: goto label_15e74c;
        case 0x15e750u: goto label_15e750;
        case 0x15e754u: goto label_15e754;
        case 0x15e758u: goto label_15e758;
        case 0x15e75cu: goto label_15e75c;
        case 0x15e760u: goto label_15e760;
        case 0x15e764u: goto label_15e764;
        case 0x15e768u: goto label_15e768;
        case 0x15e76cu: goto label_15e76c;
        case 0x15e770u: goto label_15e770;
        case 0x15e774u: goto label_15e774;
        case 0x15e778u: goto label_15e778;
        case 0x15e77cu: goto label_15e77c;
        case 0x15e780u: goto label_15e780;
        case 0x15e784u: goto label_15e784;
        case 0x15e788u: goto label_15e788;
        case 0x15e78cu: goto label_15e78c;
        case 0x15e790u: goto label_15e790;
        case 0x15e794u: goto label_15e794;
        case 0x15e798u: goto label_15e798;
        case 0x15e79cu: goto label_15e79c;
        case 0x15e7a0u: goto label_15e7a0;
        case 0x15e7a4u: goto label_15e7a4;
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e7acu: goto label_15e7ac;
        case 0x15e7b0u: goto label_15e7b0;
        case 0x15e7b4u: goto label_15e7b4;
        case 0x15e7b8u: goto label_15e7b8;
        case 0x15e7bcu: goto label_15e7bc;
        case 0x15e7c0u: goto label_15e7c0;
        case 0x15e7c4u: goto label_15e7c4;
        default: break;
    }

    ctx->pc = 0x15e480u;

label_15e480:
    // 0x15e480: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x15e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_15e484:
    // 0x15e484: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15e484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15e488:
    // 0x15e488: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15e488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15e48c:
    // 0x15e48c: 0x246315b0  addiu       $v1, $v1, 0x15B0
    ctx->pc = 0x15e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
label_15e490:
    // 0x15e490: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15e494:
    // 0x15e494: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15e494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15e498:
    // 0x15e498: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15e49c:
    // 0x15e49c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x15e49cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e4a0:
    // 0x15e4a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15e4a4:
    // 0x15e4a4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15e4a8:
    // 0x15e4a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e4ac:
    // 0x15e4ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e4b0:
    // 0x15e4b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e4b4:
    // 0x15e4b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e4b8:
    // 0x15e4b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e4bc:
    // 0x15e4bc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x15e4bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15e4c0:
    // 0x15e4c0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x15e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_15e4c4:
    // 0x15e4c4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x15e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_15e4c8:
    // 0x15e4c8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x15e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_15e4cc:
    // 0x15e4cc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15e4d0:
    // 0x15e4d0: 0x2e39021  addu        $s2, $s7, $v1
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_15e4d4:
    // 0x15e4d4: 0x86440228  lh          $a0, 0x228($s2)
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 552)));
label_15e4d8:
    // 0x15e4d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15e4dc:
    // 0x15e4dc: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
label_15e4e0:
    if (ctx->pc == 0x15E4E0u) {
        ctx->pc = 0x15E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4DCu;
        // 0x15e4e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4E4u;
        goto label_15e4e4;
    }
    ctx->pc = 0x15E4DCu;
    {
        const bool branch_taken_0x15e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4DCu;
        // 0x15e4e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4dc) {
            ctx->pc = 0x15E76Cu;
            goto label_15e76c;
        }
    }
    ctx->pc = 0x15E4E4u;
label_15e4e4:
    // 0x15e4e4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x15e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_15e4e8:
    // 0x15e4e8: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x15e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_15e4ec:
    // 0x15e4ec: 0x8ee52c1c  lw          $a1, 0x2C1C($s7)
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11292)));
label_15e4f0:
    // 0x15e4f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15e4f4:
    // 0x15e4f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e4f8:
    // 0x15e4f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15e4fc:
    // 0x15e4fc: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15e500:
    // 0x15e500: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15e504:
    // 0x15e504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15e508:
    // 0x15e508: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_15e50c:
    // 0x15e50c: 0x4800090  bltz        $a0, . + 4 + (0x90 << 2)
label_15e510:
    if (ctx->pc == 0x15E510u) {
        ctx->pc = 0x15E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E50Cu;
        // 0x15e510: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E514u;
        goto label_15e514;
    }
    ctx->pc = 0x15E50Cu;
    {
        const bool branch_taken_0x15e50c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E50Cu;
        // 0x15e510: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e50c) {
            ctx->pc = 0x15E750u;
            goto label_15e750;
        }
    }
    ctx->pc = 0x15E514u;
label_15e514:
    // 0x15e514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e518:
    // 0x15e518: 0x3f100  sll         $fp, $v1, 4
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15e51c:
    // 0x15e51c: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x15e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_15e520:
    // 0x15e520: 0x8c730030  lw          $s3, 0x30($v1)
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15e524:
    // 0x15e524: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15e528:
    // 0x15e528: 0x263a821  addu        $s5, $s3, $v1
    ctx->pc = 0x15e528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_15e52c:
    // 0x15e52c: 0x275082a  slt         $at, $s3, $s5
    ctx->pc = 0x15e52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_15e530:
    // 0x15e530: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_15e534:
    if (ctx->pc == 0x15E534u) {
        ctx->pc = 0x15E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E530u;
        // 0x15e534: 0x138880  sll         $s1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E538u;
        goto label_15e538;
    }
    ctx->pc = 0x15E530u;
    {
        const bool branch_taken_0x15e530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E530u;
        // 0x15e534: 0x138880  sll         $s1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e530) {
            ctx->pc = 0x15E598u;
            goto label_15e598;
        }
    }
    ctx->pc = 0x15E538u;
label_15e538:
    // 0x15e538: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_15e53c:
    // 0x15e53c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15e540:
    // 0x15e540: 0x26540040  addiu       $s4, $s2, 0x40
    ctx->pc = 0x15e540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_15e544:
    // 0x15e544: 0x24562cd8  addiu       $s6, $v0, 0x2CD8
    ctx->pc = 0x15e544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
label_15e548:
    // 0x15e548: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x15e548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15e54c:
    // 0x15e54c: 0xc0563e4  jal         func_158F90
label_15e550:
    if (ctx->pc == 0x15E550u) {
        ctx->pc = 0x15E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E54Cu;
        // 0x15e550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E554u;
        goto label_15e554;
    }
    ctx->pc = 0x15E54Cu;
    SET_GPR_U32(ctx, 31, 0x15E554u);
    ctx->pc = 0x15E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E54Cu;
    // 0x15e550: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F90u, 0x15E54Cu, 0x15E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E554u;
label_15e554:
    // 0x15e554: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e558:
    // 0x15e558: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_15e55c:
    if (ctx->pc == 0x15E55Cu) {
        ctx->pc = 0x15E560u;
        goto label_15e560;
    }
    ctx->pc = 0x15E558u;
    {
        const bool branch_taken_0x15e558 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e558) {
            ctx->pc = 0x15E588u;
            goto label_15e588;
        }
    }
    ctx->pc = 0x15E560u;
label_15e560:
    // 0x15e560: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_15e564:
    // 0x15e564: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e568:
    // 0x15e568: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e56c:
    // 0x15e56c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15e570:
    // 0x15e570: 0x320f809  jalr        $t9
label_15e574:
    if (ctx->pc == 0x15E574u) {
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E570u;
        // 0x15e574: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E578u;
        goto label_15e578;
    }
    ctx->pc = 0x15E570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E578u);
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E570u;
        // 0x15e574: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E570u, 0x15E578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E578u;
label_15e578:
    // 0x15e578: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e57c:
    // 0x15e57c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_15e580:
    if (ctx->pc == 0x15E580u) {
        ctx->pc = 0x15E584u;
        goto label_15e584;
    }
    ctx->pc = 0x15E57Cu;
    {
        const bool branch_taken_0x15e57c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e57c) {
            ctx->pc = 0x15E588u;
            goto label_15e588;
        }
    }
    ctx->pc = 0x15E584u;
label_15e584:
    // 0x15e584: 0xae530240  sw          $s3, 0x240($s2)
    ctx->pc = 0x15e584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 19));
label_15e588:
    // 0x15e588: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15e588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15e58c:
    // 0x15e58c: 0x275182a  slt         $v1, $s3, $s5
    ctx->pc = 0x15e58cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_15e590:
    // 0x15e590: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_15e594:
    if (ctx->pc == 0x15E594u) {
        ctx->pc = 0x15E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E590u;
        // 0x15e594: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E598u;
        goto label_15e598;
    }
    ctx->pc = 0x15E590u;
    {
        const bool branch_taken_0x15e590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E590u;
        // 0x15e594: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e590) {
            ctx->pc = 0x15E538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e538;
        }
    }
    ctx->pc = 0x15E598u;
label_15e598:
    // 0x15e598: 0x8ee32c1c  lw          $v1, 0x2C1C($s7)
    ctx->pc = 0x15e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11292)));
label_15e59c:
    // 0x15e59c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_15e5a0:
    // 0x15e5a0: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x15e5a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15e5a4:
    // 0x15e5a4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15e5a8:
    // 0x15e5a8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_15e5ac:
    // 0x15e5ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15e5b0:
    // 0x15e5b0: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x15e5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_15e5b4:
    // 0x15e5b4: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15e5b8:
    // 0x15e5b8: 0x223b021  addu        $s6, $s1, $v1
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15e5bc:
    // 0x15e5bc: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x15e5bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_15e5c0:
    // 0x15e5c0: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_15e5c4:
    if (ctx->pc == 0x15E5C4u) {
        ctx->pc = 0x15E5C8u;
        goto label_15e5c8;
    }
    ctx->pc = 0x15E5C0u;
    {
        const bool branch_taken_0x15e5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c0) {
            ctx->pc = 0x15E684u;
            goto label_15e684;
        }
    }
    ctx->pc = 0x15E5C8u;
label_15e5c8:
    // 0x15e5c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15e5cc:
    // 0x15e5cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x15e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_15e5d0:
    // 0x15e5d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15e5d4:
    // 0x15e5d4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x15e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_15e5d8:
    // 0x15e5d8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15e5dc:
    // 0x15e5dc: 0xc042580  jal         func_109600
label_15e5e0:
    if (ctx->pc == 0x15E5E0u) {
        ctx->pc = 0x15E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5DCu;
        // 0x15e5e0: 0x24532cd8  addiu       $s3, $v0, 0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5E4u;
        goto label_15e5e4;
    }
    ctx->pc = 0x15E5DCu;
    SET_GPR_U32(ctx, 31, 0x15E5E4u);
    ctx->pc = 0x15E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5DCu;
    // 0x15e5e0: 0x24532cd8  addiu       $s3, $v0, 0x2CD8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109600u, 0x15E5DCu, 0x15E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5E4u;
label_15e5e4:
    // 0x15e5e4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_15e5e8:
    if (ctx->pc == 0x15E5E8u) {
        ctx->pc = 0x15E5ECu;
        goto label_15e5ec;
    }
    ctx->pc = 0x15E5E4u;
    {
        const bool branch_taken_0x15e5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e5e4) {
            ctx->pc = 0x15E668u;
            goto label_15e668;
        }
    }
    ctx->pc = 0x15E5ECu;
label_15e5ec:
    // 0x15e5ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e5f0:
    // 0x15e5f0: 0x26540040  addiu       $s4, $s2, 0x40
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_15e5f4:
    // 0x15e5f4: 0x26950210  addiu       $s5, $s4, 0x210
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 528));
label_15e5f8:
    // 0x15e5f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e5fc:
    // 0x15e5fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e600:
    // 0x15e600: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15e604:
    // 0x15e604: 0xc055fa0  jal         func_157E80
label_15e608:
    if (ctx->pc == 0x15E608u) {
        ctx->pc = 0x15E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E604u;
        // 0x15e608: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E60Cu;
        goto label_15e60c;
    }
    ctx->pc = 0x15E604u;
    SET_GPR_U32(ctx, 31, 0x15E60Cu);
    ctx->pc = 0x15E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E604u;
    // 0x15e608: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E80u, 0x15E604u, 0x15E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E60Cu;
label_15e60c:
    // 0x15e60c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e610:
    // 0x15e610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e614:
    // 0x15e614: 0xc0563e4  jal         func_158F90
label_15e618:
    if (ctx->pc == 0x15E618u) {
        ctx->pc = 0x15E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E614u;
        // 0x15e618: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E61Cu;
        goto label_15e61c;
    }
    ctx->pc = 0x15E614u;
    SET_GPR_U32(ctx, 31, 0x15E61Cu);
    ctx->pc = 0x15E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E614u;
    // 0x15e618: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F90u, 0x15E614u, 0x15E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E61Cu;
label_15e61c:
    // 0x15e61c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e620:
    // 0x15e620: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_15e624:
    if (ctx->pc == 0x15E624u) {
        ctx->pc = 0x15E628u;
        goto label_15e628;
    }
    ctx->pc = 0x15E620u;
    {
        const bool branch_taken_0x15e620 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e620) {
            ctx->pc = 0x15E650u;
            goto label_15e650;
        }
    }
    ctx->pc = 0x15E628u;
label_15e628:
    // 0x15e628: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e62c:
    // 0x15e62c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e630:
    // 0x15e630: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e634:
    // 0x15e634: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_15e638:
    // 0x15e638: 0x320f809  jalr        $t9
label_15e63c:
    if (ctx->pc == 0x15E63Cu) {
        ctx->pc = 0x15E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E638u;
        // 0x15e63c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E640u;
        goto label_15e640;
    }
    ctx->pc = 0x15E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E640u);
        ctx->pc = 0x15E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E638u;
        // 0x15e63c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E638u, 0x15E640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E640u;
label_15e640:
    // 0x15e640: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e644:
    // 0x15e644: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_15e648:
    if (ctx->pc == 0x15E648u) {
        ctx->pc = 0x15E64Cu;
        goto label_15e64c;
    }
    ctx->pc = 0x15E644u;
    {
        const bool branch_taken_0x15e644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e644) {
            ctx->pc = 0x15E650u;
            goto label_15e650;
        }
    }
    ctx->pc = 0x15E64Cu;
label_15e64c:
    // 0x15e64c: 0xae510240  sw          $s1, 0x240($s2)
    ctx->pc = 0x15e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 17));
label_15e650:
    // 0x15e650: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e654:
    // 0x15e654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15e658:
    // 0x15e658: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15e65c:
    // 0x15e65c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15e660:
    // 0x15e660: 0xc055fc8  jal         func_157F20
label_15e664:
    if (ctx->pc == 0x15E664u) {
        ctx->pc = 0x15E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E660u;
        // 0x15e664: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E668u;
        goto label_15e668;
    }
    ctx->pc = 0x15E660u;
    SET_GPR_U32(ctx, 31, 0x15E668u);
    ctx->pc = 0x15E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E660u;
    // 0x15e664: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157F20u, 0x15E660u, 0x15E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E668u;
label_15e668:
    // 0x15e668: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15e66c:
    // 0x15e66c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15e670:
    // 0x15e670: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_15e674:
    // 0x15e674: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15e674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_15e678:
    // 0x15e678: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x15e678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_15e67c:
    // 0x15e67c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_15e680:
    if (ctx->pc == 0x15E680u) {
        ctx->pc = 0x15E684u;
        goto label_15e684;
    }
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e5d0;
        }
    }
    ctx->pc = 0x15E684u;
label_15e684:
    // 0x15e684: 0x0  nop
    ctx->pc = 0x15e684u;
    // NOP
label_15e688:
    // 0x15e688: 0x8e430240  lw          $v1, 0x240($s2)
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
label_15e68c:
    // 0x15e68c: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
label_15e690:
    if (ctx->pc == 0x15E690u) {
        ctx->pc = 0x15E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E68Cu;
        // 0x15e690: 0x3c03c47a  lui         $v1, 0xC47A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E694u;
        goto label_15e694;
    }
    ctx->pc = 0x15E68Cu;
    {
        const bool branch_taken_0x15e68c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E68Cu;
        // 0x15e690: 0x3c03c47a  lui         $v1, 0xC47A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e68c) {
            ctx->pc = 0x15E710u;
            goto label_15e710;
        }
    }
    ctx->pc = 0x15E694u;
label_15e694:
    // 0x15e694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e698:
    // 0x15e698: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15e698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15e69c:
    // 0x15e69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e6a0:
    // 0x15e6a0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_15e6a4:
    // 0x15e6a4: 0xc4600254  lwc1        $f0, 0x254($v1)
    ctx->pc = 0x15e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15e6a8:
    // 0x15e6a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15e6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e6ac:
    // 0x15e6ac: 0x0  nop
    ctx->pc = 0x15e6acu;
    // NOP
label_15e6b0:
    // 0x15e6b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_15e6b4:
    if (ctx->pc == 0x15E6B4u) {
        ctx->pc = 0x15E6B8u;
        goto label_15e6b8;
    }
    ctx->pc = 0x15E6B0u;
    {
        const bool branch_taken_0x15e6b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e6b0) {
            ctx->pc = 0x15E6BCu;
            goto label_15e6bc;
        }
    }
    ctx->pc = 0x15E6B8u;
label_15e6b8:
    // 0x15e6b8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x15e6b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_15e6bc:
    // 0x15e6bc: 0x0  nop
    ctx->pc = 0x15e6bcu;
    // NOP
label_15e6c0:
    // 0x15e6c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15e6c4:
    // 0x15e6c4: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x15e6c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_15e6c8:
    // 0x15e6c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_15e6cc:
    if (ctx->pc == 0x15E6CCu) {
        ctx->pc = 0x15E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C8u;
        // 0x15e6cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6D0u;
        goto label_15e6d0;
    }
    ctx->pc = 0x15E6C8u;
    {
        const bool branch_taken_0x15e6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C8u;
        // 0x15e6cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6c8) {
            ctx->pc = 0x15E6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e6a0;
        }
    }
    ctx->pc = 0x15E6D0u;
label_15e6d0:
    // 0x15e6d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e6d4:
    // 0x15e6d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e6d8:
    // 0x15e6d8: 0x3c03c47a  lui         $v1, 0xC47A
    ctx->pc = 0x15e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
label_15e6dc:
    // 0x15e6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15e6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e6e0:
    // 0x15e6e0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x15e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_15e6e4:
    // 0x15e6e4: 0xc4610254  lwc1        $f1, 0x254($v1)
    ctx->pc = 0x15e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15e6e8:
    // 0x15e6e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15e6e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e6ec:
    // 0x15e6ec: 0x0  nop
    ctx->pc = 0x15e6ecu;
    // NOP
label_15e6f0:
    // 0x15e6f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_15e6f4:
    if (ctx->pc == 0x15E6F4u) {
        ctx->pc = 0x15E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6F0u;
        // 0x15e6f4: 0x24660254  addiu       $a2, $v1, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6F8u;
        goto label_15e6f8;
    }
    ctx->pc = 0x15E6F0u;
    {
        const bool branch_taken_0x15e6f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6F0u;
        // 0x15e6f4: 0x24660254  addiu       $a2, $v1, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6f0) {
            ctx->pc = 0x15E6FCu;
            goto label_15e6fc;
        }
    }
    ctx->pc = 0x15E6F8u;
label_15e6f8:
    // 0x15e6f8: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x15e6f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_15e6fc:
    // 0x15e6fc: 0x0  nop
    ctx->pc = 0x15e6fcu;
    // NOP
label_15e700:
    // 0x15e700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15e704:
    // 0x15e704: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x15e704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_15e708:
    // 0x15e708: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_15e70c:
    if (ctx->pc == 0x15E70Cu) {
        ctx->pc = 0x15E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E708u;
        // 0x15e70c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E710u;
        goto label_15e710;
    }
    ctx->pc = 0x15E708u;
    {
        const bool branch_taken_0x15e708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E708u;
        // 0x15e70c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e708) {
            ctx->pc = 0x15E6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e6e0;
        }
    }
    ctx->pc = 0x15E710u;
label_15e710:
    // 0x15e710: 0x8ee32c1c  lw          $v1, 0x2C1C($s7)
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11292)));
label_15e714:
    // 0x15e714: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_15e718:
    // 0x15e718: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15e71c:
    // 0x15e71c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_15e720:
    // 0x15e720: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_15e724:
    // 0x15e724: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15e724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15e728:
    // 0x15e728: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e72c:
    // 0x15e72c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x15e72cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_15e730:
    // 0x15e730: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_15e734:
    if (ctx->pc == 0x15E734u) {
        ctx->pc = 0x15E738u;
        goto label_15e738;
    }
    ctx->pc = 0x15E730u;
    {
        const bool branch_taken_0x15e730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e730) {
            ctx->pc = 0x15E750u;
            goto label_15e750;
        }
    }
    ctx->pc = 0x15E738u;
label_15e738:
    // 0x15e738: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15e73c:
    // 0x15e73c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x15e73cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_15e740:
    // 0x15e740: 0x0  nop
    ctx->pc = 0x15e740u;
    // NOP
label_15e744:
    // 0x15e744: 0x0  nop
    ctx->pc = 0x15e744u;
    // NOP
label_15e748:
    // 0x15e748: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_15e74c:
    if (ctx->pc == 0x15E74Cu) {
        ctx->pc = 0x15E750u;
        goto label_15e750;
    }
    ctx->pc = 0x15E748u;
    {
        const bool branch_taken_0x15e748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e748) {
            ctx->pc = 0x15E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e738;
        }
    }
    ctx->pc = 0x15E750u;
label_15e750:
    // 0x15e750: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15e754:
    // 0x15e754: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15e758:
    // 0x15e758: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_15e75c:
    // 0x15e75c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_15e760:
    // 0x15e760: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x15e760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_15e764:
    // 0x15e764: 0x1460ff60  bnez        $v1, . + 4 + (-0xA0 << 2)
label_15e768:
    if (ctx->pc == 0x15E768u) {
        ctx->pc = 0x15E76Cu;
        goto label_15e76c;
    }
    ctx->pc = 0x15E764u;
    {
        const bool branch_taken_0x15e764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e764) {
            ctx->pc = 0x15E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e4e8;
        }
    }
    ctx->pc = 0x15E76Cu;
label_15e76c:
    // 0x15e76c: 0x0  nop
    ctx->pc = 0x15e76cu;
    // NOP
label_15e770:
    // 0x15e770: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15e774:
    // 0x15e774: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
label_15e778:
    // 0x15e778: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x15e778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_15e77c:
    // 0x15e77c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15e780:
    // 0x15e780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15e784:
    // 0x15e784: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x15e784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_15e788:
    // 0x15e788: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15e78c:
    // 0x15e78c: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x15e78cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_15e790:
    // 0x15e790: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
label_15e794:
    if (ctx->pc == 0x15E794u) {
        ctx->pc = 0x15E798u;
        goto label_15e798;
    }
    ctx->pc = 0x15E790u;
    {
        const bool branch_taken_0x15e790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e790) {
            ctx->pc = 0x15E4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e4cc;
        }
    }
    ctx->pc = 0x15E798u;
label_15e798:
    // 0x15e798: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15e79c:
    // 0x15e79c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e79cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15e7a0:
    // 0x15e7a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e7a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15e7a4:
    // 0x15e7a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15e7a8:
    // 0x15e7a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e7a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e7ac:
    // 0x15e7ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e7b0:
    // 0x15e7b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e7b4:
    // 0x15e7b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e7b8:
    // 0x15e7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e7bc:
    // 0x15e7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e7c0:
    // 0x15e7c0: 0x3e00008  jr          $ra
label_15e7c4:
    if (ctx->pc == 0x15E7C4u) {
        ctx->pc = 0x15E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7C0u;
        // 0x15e7c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7C8u;
        goto label_fallthrough_0x15e7c0;
    }
    ctx->pc = 0x15E7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7C0u;
        // 0x15e7c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15e7c0:
    ctx->pc = 0x15E7C8u;
}
