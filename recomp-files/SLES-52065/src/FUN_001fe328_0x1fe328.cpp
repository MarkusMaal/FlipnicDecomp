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

// Function: FUN_001fe328
// Address: 0x1fe328 - 0x1fe700
void FUN_001fe328_0x1fe328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe328_0x1fe328");
#endif

    switch (ctx->pc) {
        case 0x1fe328u: goto label_1fe328;
        case 0x1fe32cu: goto label_1fe32c;
        case 0x1fe330u: goto label_1fe330;
        case 0x1fe334u: goto label_1fe334;
        case 0x1fe338u: goto label_1fe338;
        case 0x1fe33cu: goto label_1fe33c;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe344u: goto label_1fe344;
        case 0x1fe348u: goto label_1fe348;
        case 0x1fe34cu: goto label_1fe34c;
        case 0x1fe350u: goto label_1fe350;
        case 0x1fe354u: goto label_1fe354;
        case 0x1fe358u: goto label_1fe358;
        case 0x1fe35cu: goto label_1fe35c;
        case 0x1fe360u: goto label_1fe360;
        case 0x1fe364u: goto label_1fe364;
        case 0x1fe368u: goto label_1fe368;
        case 0x1fe36cu: goto label_1fe36c;
        case 0x1fe370u: goto label_1fe370;
        case 0x1fe374u: goto label_1fe374;
        case 0x1fe378u: goto label_1fe378;
        case 0x1fe37cu: goto label_1fe37c;
        case 0x1fe380u: goto label_1fe380;
        case 0x1fe384u: goto label_1fe384;
        case 0x1fe388u: goto label_1fe388;
        case 0x1fe38cu: goto label_1fe38c;
        case 0x1fe390u: goto label_1fe390;
        case 0x1fe394u: goto label_1fe394;
        case 0x1fe398u: goto label_1fe398;
        case 0x1fe39cu: goto label_1fe39c;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3a4u: goto label_1fe3a4;
        case 0x1fe3a8u: goto label_1fe3a8;
        case 0x1fe3acu: goto label_1fe3ac;
        case 0x1fe3b0u: goto label_1fe3b0;
        case 0x1fe3b4u: goto label_1fe3b4;
        case 0x1fe3b8u: goto label_1fe3b8;
        case 0x1fe3bcu: goto label_1fe3bc;
        case 0x1fe3c0u: goto label_1fe3c0;
        case 0x1fe3c4u: goto label_1fe3c4;
        case 0x1fe3c8u: goto label_1fe3c8;
        case 0x1fe3ccu: goto label_1fe3cc;
        case 0x1fe3d0u: goto label_1fe3d0;
        case 0x1fe3d4u: goto label_1fe3d4;
        case 0x1fe3d8u: goto label_1fe3d8;
        case 0x1fe3dcu: goto label_1fe3dc;
        case 0x1fe3e0u: goto label_1fe3e0;
        case 0x1fe3e4u: goto label_1fe3e4;
        case 0x1fe3e8u: goto label_1fe3e8;
        case 0x1fe3ecu: goto label_1fe3ec;
        case 0x1fe3f0u: goto label_1fe3f0;
        case 0x1fe3f4u: goto label_1fe3f4;
        case 0x1fe3f8u: goto label_1fe3f8;
        case 0x1fe3fcu: goto label_1fe3fc;
        case 0x1fe400u: goto label_1fe400;
        case 0x1fe404u: goto label_1fe404;
        case 0x1fe408u: goto label_1fe408;
        case 0x1fe40cu: goto label_1fe40c;
        case 0x1fe410u: goto label_1fe410;
        case 0x1fe414u: goto label_1fe414;
        case 0x1fe418u: goto label_1fe418;
        case 0x1fe41cu: goto label_1fe41c;
        case 0x1fe420u: goto label_1fe420;
        case 0x1fe424u: goto label_1fe424;
        case 0x1fe428u: goto label_1fe428;
        case 0x1fe42cu: goto label_1fe42c;
        case 0x1fe430u: goto label_1fe430;
        case 0x1fe434u: goto label_1fe434;
        case 0x1fe438u: goto label_1fe438;
        case 0x1fe43cu: goto label_1fe43c;
        case 0x1fe440u: goto label_1fe440;
        case 0x1fe444u: goto label_1fe444;
        case 0x1fe448u: goto label_1fe448;
        case 0x1fe44cu: goto label_1fe44c;
        case 0x1fe450u: goto label_1fe450;
        case 0x1fe454u: goto label_1fe454;
        case 0x1fe458u: goto label_1fe458;
        case 0x1fe45cu: goto label_1fe45c;
        case 0x1fe460u: goto label_1fe460;
        case 0x1fe464u: goto label_1fe464;
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe46cu: goto label_1fe46c;
        case 0x1fe470u: goto label_1fe470;
        case 0x1fe474u: goto label_1fe474;
        case 0x1fe478u: goto label_1fe478;
        case 0x1fe47cu: goto label_1fe47c;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe484u: goto label_1fe484;
        case 0x1fe488u: goto label_1fe488;
        case 0x1fe48cu: goto label_1fe48c;
        case 0x1fe490u: goto label_1fe490;
        case 0x1fe494u: goto label_1fe494;
        case 0x1fe498u: goto label_1fe498;
        case 0x1fe49cu: goto label_1fe49c;
        case 0x1fe4a0u: goto label_1fe4a0;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe4a8u: goto label_1fe4a8;
        case 0x1fe4acu: goto label_1fe4ac;
        case 0x1fe4b0u: goto label_1fe4b0;
        case 0x1fe4b4u: goto label_1fe4b4;
        case 0x1fe4b8u: goto label_1fe4b8;
        case 0x1fe4bcu: goto label_1fe4bc;
        case 0x1fe4c0u: goto label_1fe4c0;
        case 0x1fe4c4u: goto label_1fe4c4;
        case 0x1fe4c8u: goto label_1fe4c8;
        case 0x1fe4ccu: goto label_1fe4cc;
        case 0x1fe4d0u: goto label_1fe4d0;
        case 0x1fe4d4u: goto label_1fe4d4;
        case 0x1fe4d8u: goto label_1fe4d8;
        case 0x1fe4dcu: goto label_1fe4dc;
        case 0x1fe4e0u: goto label_1fe4e0;
        case 0x1fe4e4u: goto label_1fe4e4;
        case 0x1fe4e8u: goto label_1fe4e8;
        case 0x1fe4ecu: goto label_1fe4ec;
        case 0x1fe4f0u: goto label_1fe4f0;
        case 0x1fe4f4u: goto label_1fe4f4;
        case 0x1fe4f8u: goto label_1fe4f8;
        case 0x1fe4fcu: goto label_1fe4fc;
        case 0x1fe500u: goto label_1fe500;
        case 0x1fe504u: goto label_1fe504;
        case 0x1fe508u: goto label_1fe508;
        case 0x1fe50cu: goto label_1fe50c;
        case 0x1fe510u: goto label_1fe510;
        case 0x1fe514u: goto label_1fe514;
        case 0x1fe518u: goto label_1fe518;
        case 0x1fe51cu: goto label_1fe51c;
        case 0x1fe520u: goto label_1fe520;
        case 0x1fe524u: goto label_1fe524;
        case 0x1fe528u: goto label_1fe528;
        case 0x1fe52cu: goto label_1fe52c;
        case 0x1fe530u: goto label_1fe530;
        case 0x1fe534u: goto label_1fe534;
        case 0x1fe538u: goto label_1fe538;
        case 0x1fe53cu: goto label_1fe53c;
        case 0x1fe540u: goto label_1fe540;
        case 0x1fe544u: goto label_1fe544;
        case 0x1fe548u: goto label_1fe548;
        case 0x1fe54cu: goto label_1fe54c;
        case 0x1fe550u: goto label_1fe550;
        case 0x1fe554u: goto label_1fe554;
        case 0x1fe558u: goto label_1fe558;
        case 0x1fe55cu: goto label_1fe55c;
        case 0x1fe560u: goto label_1fe560;
        case 0x1fe564u: goto label_1fe564;
        case 0x1fe568u: goto label_1fe568;
        case 0x1fe56cu: goto label_1fe56c;
        case 0x1fe570u: goto label_1fe570;
        case 0x1fe574u: goto label_1fe574;
        case 0x1fe578u: goto label_1fe578;
        case 0x1fe57cu: goto label_1fe57c;
        case 0x1fe580u: goto label_1fe580;
        case 0x1fe584u: goto label_1fe584;
        case 0x1fe588u: goto label_1fe588;
        case 0x1fe58cu: goto label_1fe58c;
        case 0x1fe590u: goto label_1fe590;
        case 0x1fe594u: goto label_1fe594;
        case 0x1fe598u: goto label_1fe598;
        case 0x1fe59cu: goto label_1fe59c;
        case 0x1fe5a0u: goto label_1fe5a0;
        case 0x1fe5a4u: goto label_1fe5a4;
        case 0x1fe5a8u: goto label_1fe5a8;
        case 0x1fe5acu: goto label_1fe5ac;
        case 0x1fe5b0u: goto label_1fe5b0;
        case 0x1fe5b4u: goto label_1fe5b4;
        case 0x1fe5b8u: goto label_1fe5b8;
        case 0x1fe5bcu: goto label_1fe5bc;
        case 0x1fe5c0u: goto label_1fe5c0;
        case 0x1fe5c4u: goto label_1fe5c4;
        case 0x1fe5c8u: goto label_1fe5c8;
        case 0x1fe5ccu: goto label_1fe5cc;
        case 0x1fe5d0u: goto label_1fe5d0;
        case 0x1fe5d4u: goto label_1fe5d4;
        case 0x1fe5d8u: goto label_1fe5d8;
        case 0x1fe5dcu: goto label_1fe5dc;
        case 0x1fe5e0u: goto label_1fe5e0;
        case 0x1fe5e4u: goto label_1fe5e4;
        case 0x1fe5e8u: goto label_1fe5e8;
        case 0x1fe5ecu: goto label_1fe5ec;
        case 0x1fe5f0u: goto label_1fe5f0;
        case 0x1fe5f4u: goto label_1fe5f4;
        case 0x1fe5f8u: goto label_1fe5f8;
        case 0x1fe5fcu: goto label_1fe5fc;
        case 0x1fe600u: goto label_1fe600;
        case 0x1fe604u: goto label_1fe604;
        case 0x1fe608u: goto label_1fe608;
        case 0x1fe60cu: goto label_1fe60c;
        case 0x1fe610u: goto label_1fe610;
        case 0x1fe614u: goto label_1fe614;
        case 0x1fe618u: goto label_1fe618;
        case 0x1fe61cu: goto label_1fe61c;
        case 0x1fe620u: goto label_1fe620;
        case 0x1fe624u: goto label_1fe624;
        case 0x1fe628u: goto label_1fe628;
        case 0x1fe62cu: goto label_1fe62c;
        case 0x1fe630u: goto label_1fe630;
        case 0x1fe634u: goto label_1fe634;
        case 0x1fe638u: goto label_1fe638;
        case 0x1fe63cu: goto label_1fe63c;
        case 0x1fe640u: goto label_1fe640;
        case 0x1fe644u: goto label_1fe644;
        case 0x1fe648u: goto label_1fe648;
        case 0x1fe64cu: goto label_1fe64c;
        case 0x1fe650u: goto label_1fe650;
        case 0x1fe654u: goto label_1fe654;
        case 0x1fe658u: goto label_1fe658;
        case 0x1fe65cu: goto label_1fe65c;
        case 0x1fe660u: goto label_1fe660;
        case 0x1fe664u: goto label_1fe664;
        case 0x1fe668u: goto label_1fe668;
        case 0x1fe66cu: goto label_1fe66c;
        case 0x1fe670u: goto label_1fe670;
        case 0x1fe674u: goto label_1fe674;
        case 0x1fe678u: goto label_1fe678;
        case 0x1fe67cu: goto label_1fe67c;
        case 0x1fe680u: goto label_1fe680;
        case 0x1fe684u: goto label_1fe684;
        case 0x1fe688u: goto label_1fe688;
        case 0x1fe68cu: goto label_1fe68c;
        case 0x1fe690u: goto label_1fe690;
        case 0x1fe694u: goto label_1fe694;
        case 0x1fe698u: goto label_1fe698;
        case 0x1fe69cu: goto label_1fe69c;
        case 0x1fe6a0u: goto label_1fe6a0;
        case 0x1fe6a4u: goto label_1fe6a4;
        case 0x1fe6a8u: goto label_1fe6a8;
        case 0x1fe6acu: goto label_1fe6ac;
        case 0x1fe6b0u: goto label_1fe6b0;
        case 0x1fe6b4u: goto label_1fe6b4;
        case 0x1fe6b8u: goto label_1fe6b8;
        case 0x1fe6bcu: goto label_1fe6bc;
        case 0x1fe6c0u: goto label_1fe6c0;
        case 0x1fe6c4u: goto label_1fe6c4;
        case 0x1fe6c8u: goto label_1fe6c8;
        case 0x1fe6ccu: goto label_1fe6cc;
        case 0x1fe6d0u: goto label_1fe6d0;
        case 0x1fe6d4u: goto label_1fe6d4;
        case 0x1fe6d8u: goto label_1fe6d8;
        case 0x1fe6dcu: goto label_1fe6dc;
        case 0x1fe6e0u: goto label_1fe6e0;
        case 0x1fe6e4u: goto label_1fe6e4;
        case 0x1fe6e8u: goto label_1fe6e8;
        case 0x1fe6ecu: goto label_1fe6ec;
        case 0x1fe6f0u: goto label_1fe6f0;
        case 0x1fe6f4u: goto label_1fe6f4;
        case 0x1fe6f8u: goto label_1fe6f8;
        case 0x1fe6fcu: goto label_1fe6fc;
        default: break;
    }

    ctx->pc = 0x1fe328u;

label_1fe328:
    // 0x1fe328: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1fe32c:
    // 0x1fe32c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1fe32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1fe330:
    // 0x1fe330: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fe330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1fe334:
    // 0x1fe334: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1fe334u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe338:
    // 0x1fe338: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1fe338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1fe33c:
    // 0x1fe33c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1fe33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1fe340:
    // 0x1fe340: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fe340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1fe344:
    // 0x1fe344: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fe344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1fe348:
    // 0x1fe348: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fe348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1fe34c:
    // 0x1fe34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fe350:
    // 0x1fe350: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fe350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1fe354:
    // 0x1fe354: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x1fe354u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fe358:
    // 0x1fe358: 0x124000d8  beqz        $s2, . + 4 + (0xD8 << 2)
label_1fe35c:
    if (ctx->pc == 0x1FE35Cu) {
        ctx->pc = 0x1FE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE358u;
        // 0x1fe35c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE360u;
        goto label_1fe360;
    }
    ctx->pc = 0x1FE358u;
    {
        const bool branch_taken_0x1fe358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE358u;
        // 0x1fe35c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe358) {
            ctx->pc = 0x1FE6BCu;
            goto label_1fe6bc;
        }
    }
    ctx->pc = 0x1FE360u;
label_1fe360:
    // 0x1fe360: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fe360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe364:
    // 0x1fe364: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1fe364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1fe368:
    // 0x1fe368: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1fe36c:
    if (ctx->pc == 0x1FE36Cu) {
        ctx->pc = 0x1FE370u;
        goto label_1fe370;
    }
    ctx->pc = 0x1FE368u;
    {
        const bool branch_taken_0x1fe368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe368) {
            ctx->pc = 0x1FE37Cu;
            goto label_1fe37c;
        }
    }
    ctx->pc = 0x1FE370u;
label_1fe370:
    // 0x1fe370: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1fe374:
    // 0x1fe374: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1fe378:
    if (ctx->pc == 0x1FE378u) {
        ctx->pc = 0x1FE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE374u;
        // 0x1fe378: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE37Cu;
        goto label_1fe37c;
    }
    ctx->pc = 0x1FE374u;
    {
        const bool branch_taken_0x1fe374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe374) {
            ctx->pc = 0x1FE378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE374u;
            // 0x1fe378: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE394u;
            goto label_1fe394;
        }
    }
    ctx->pc = 0x1FE37Cu;
label_1fe37c:
    // 0x1fe37c: 0xc08180c  jal         func_206030
label_1fe380:
    if (ctx->pc == 0x1FE380u) {
        ctx->pc = 0x1FE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE37Cu;
        // 0x1fe380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE384u;
        goto label_1fe384;
    }
    ctx->pc = 0x1FE37Cu;
    SET_GPR_U32(ctx, 31, 0x1FE384u);
    ctx->pc = 0x1FE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE37Cu;
    // 0x1fe380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206030u, 0x1FE37Cu, 0x1FE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE384u;
label_1fe384:
    // 0x1fe384: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_1fe388:
    if (ctx->pc == 0x1FE388u) {
        ctx->pc = 0x1FE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE384u;
        // 0x1fe388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE38Cu;
        goto label_1fe38c;
    }
    ctx->pc = 0x1FE384u;
    {
        const bool branch_taken_0x1fe384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE384u;
        // 0x1fe388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe384) {
            ctx->pc = 0x1FE6D4u;
            goto label_1fe6d4;
        }
    }
    ctx->pc = 0x1FE38Cu;
label_1fe38c:
    // 0x1fe38c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fe38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe390:
    // 0x1fe390: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1fe394:
    // 0x1fe394: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1fe394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1fe398:
    // 0x1fe398: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1fe39c:
    if (ctx->pc == 0x1FE39Cu) {
        ctx->pc = 0x1FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE398u;
        // 0x1fe39c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3A0u;
        goto label_1fe3a0;
    }
    ctx->pc = 0x1FE398u;
    {
        const bool branch_taken_0x1fe398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE398u;
        // 0x1fe39c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe398) {
            ctx->pc = 0x1FE414u;
            goto label_1fe414;
        }
    }
    ctx->pc = 0x1FE3A0u;
label_1fe3a0:
    // 0x1fe3a0: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1fe3a4:
    // 0x1fe3a4: 0x0  nop
    ctx->pc = 0x1fe3a4u;
    // NOP
label_1fe3a8:
    // 0x1fe3a8: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1fe3ac:
    if (ctx->pc == 0x1FE3ACu) {
        ctx->pc = 0x1FE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3A8u;
        // 0x1fe3ac: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3B0u;
        goto label_1fe3b0;
    }
    ctx->pc = 0x1FE3A8u;
    {
        const bool branch_taken_0x1fe3a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3A8u;
        // 0x1fe3ac: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3a8) {
            ctx->pc = 0x1FE3D4u;
            goto label_1fe3d4;
        }
    }
    ctx->pc = 0x1FE3B0u;
label_1fe3b0:
    // 0x1fe3b0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1fe3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fe3b4:
    // 0x1fe3b4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fe3b8:
    // 0x1fe3b8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1fe3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1fe3bc:
    // 0x1fe3bc: 0x0  nop
    ctx->pc = 0x1fe3bcu;
    // NOP
label_1fe3c0:
    // 0x1fe3c0: 0x0  nop
    ctx->pc = 0x1fe3c0u;
    // NOP
label_1fe3c4:
    // 0x1fe3c4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1fe3c8:
    if (ctx->pc == 0x1FE3C8u) {
        ctx->pc = 0x1FE3CCu;
        goto label_1fe3cc;
    }
    ctx->pc = 0x1FE3C4u;
    {
        const bool branch_taken_0x1fe3c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3c4) {
            ctx->pc = 0x1FE3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe3b0;
        }
    }
    ctx->pc = 0x1FE3CCu;
label_1fe3cc:
    // 0x1fe3cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe3d0:
    if (ctx->pc == 0x1FE3D0u) {
        ctx->pc = 0x1FE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3CCu;
        // 0x1fe3d0: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3D4u;
        goto label_1fe3d4;
    }
    ctx->pc = 0x1FE3CCu;
    {
        const bool branch_taken_0x1fe3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3CCu;
        // 0x1fe3d0: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3cc) {
            ctx->pc = 0x1FE3D8u;
            goto label_1fe3d8;
        }
    }
    ctx->pc = 0x1FE3D4u;
label_1fe3d4:
    // 0x1fe3d4: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x1fe3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1fe3d8:
    // 0x1fe3d8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1fe3dc:
    // 0x1fe3dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3e0:
    // 0x1fe3e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3e4:
    // 0x1fe3e4: 0x60f809  jalr        $v1
label_1fe3e8:
    if (ctx->pc == 0x1FE3E8u) {
        ctx->pc = 0x1FE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E4u;
        // 0x1fe3e8: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3ECu;
        goto label_1fe3ec;
    }
    ctx->pc = 0x1FE3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FE3ECu);
        ctx->pc = 0x1FE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E4u;
        // 0x1fe3e8: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE3E4u, 0x1FE3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE3ECu;
label_1fe3ec:
    // 0x1fe3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3f0:
    // 0x1fe3f0: 0x1a0000b4  blez        $s0, . + 4 + (0xB4 << 2)
label_1fe3f4:
    if (ctx->pc == 0x1FE3F4u) {
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F8u;
        goto label_1fe3f8;
    }
    ctx->pc = 0x1FE3F0u;
    {
        const bool branch_taken_0x1fe3f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3f0) {
            ctx->pc = 0x1FE6C4u;
            goto label_1fe6c4;
        }
    }
    ctx->pc = 0x1FE3F8u;
label_1fe3f8:
    // 0x1fe3f8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fe3fc:
    // 0x1fe3fc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1fe400:
    // 0x1fe400: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe404:
    // 0x1fe404: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1fe408:
    if (ctx->pc == 0x1FE408u) {
        ctx->pc = 0x1FE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE404u;
        // 0x1fe408: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE40Cu;
        goto label_1fe40c;
    }
    ctx->pc = 0x1FE404u;
    {
        const bool branch_taken_0x1fe404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE404u;
        // 0x1fe408: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe404) {
            ctx->pc = 0x1FE3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe3a8;
        }
    }
    ctx->pc = 0x1FE40Cu;
label_1fe40c:
    // 0x1fe40c: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1fe410:
    if (ctx->pc == 0x1FE410u) {
        ctx->pc = 0x1FE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE40Cu;
        // 0x1fe410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE414u;
        goto label_1fe414;
    }
    ctx->pc = 0x1FE40Cu;
    {
        const bool branch_taken_0x1fe40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE40Cu;
        // 0x1fe410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe40c) {
            ctx->pc = 0x1FE6D4u;
            goto label_1fe6d4;
        }
    }
    ctx->pc = 0x1FE414u;
label_1fe414:
    // 0x1fe414: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1fe414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1fe418:
    // 0x1fe418: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_1fe41c:
    if (ctx->pc == 0x1FE41Cu) {
        ctx->pc = 0x1FE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE418u;
        // 0x1fe41c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE420u;
        goto label_1fe420;
    }
    ctx->pc = 0x1FE418u;
    {
        const bool branch_taken_0x1fe418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE418u;
        // 0x1fe41c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe418) {
            ctx->pc = 0x1FE568u;
            goto label_1fe568;
        }
    }
    ctx->pc = 0x1FE420u;
label_1fe420:
    // 0x1fe420: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe424:
    if (ctx->pc == 0x1FE424u) {
        ctx->pc = 0x1FE428u;
        goto label_1fe428;
    }
    ctx->pc = 0x1FE420u;
    {
        const bool branch_taken_0x1fe420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe420) {
            ctx->pc = 0x1FE42Cu;
            goto label_1fe42c;
        }
    }
    ctx->pc = 0x1FE428u;
label_1fe428:
    // 0x1fe428: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fe428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe42c:
    // 0x1fe42c: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
label_1fe430:
    if (ctx->pc == 0x1FE430u) {
        ctx->pc = 0x1FE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE42Cu;
        // 0x1fe430: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE434u;
        goto label_1fe434;
    }
    ctx->pc = 0x1FE42Cu;
    {
        const bool branch_taken_0x1fe42c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE42Cu;
        // 0x1fe430: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe42c) {
            ctx->pc = 0x1FE45Cu;
            goto label_1fe45c;
        }
    }
    ctx->pc = 0x1FE434u;
label_1fe434:
    // 0x1fe434: 0x0  nop
    ctx->pc = 0x1fe434u;
    // NOP
label_1fe438:
    // 0x1fe438: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1fe438u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fe43c:
    // 0x1fe43c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1fe43cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fe440:
    // 0x1fe440: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1fe440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1fe444:
    // 0x1fe444: 0x0  nop
    ctx->pc = 0x1fe444u;
    // NOP
label_1fe448:
    // 0x1fe448: 0x0  nop
    ctx->pc = 0x1fe448u;
    // NOP
label_1fe44c:
    // 0x1fe44c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1fe450:
    if (ctx->pc == 0x1FE450u) {
        ctx->pc = 0x1FE454u;
        goto label_1fe454;
    }
    ctx->pc = 0x1FE44Cu;
    {
        const bool branch_taken_0x1fe44c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe44c) {
            ctx->pc = 0x1FE438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe438;
        }
    }
    ctx->pc = 0x1FE454u;
label_1fe454:
    // 0x1fe454: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe458:
    if (ctx->pc == 0x1FE458u) {
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE45Cu;
        goto label_1fe45c;
    }
    ctx->pc = 0x1FE454u;
    {
        const bool branch_taken_0x1fe454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe454) {
            ctx->pc = 0x1FE460u;
            goto label_1fe460;
        }
    }
    ctx->pc = 0x1FE45Cu;
label_1fe45c:
    // 0x1fe45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe460:
    // 0x1fe460: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1fe460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1fe464:
    // 0x1fe464: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fe468:
    if (ctx->pc == 0x1FE468u) {
        ctx->pc = 0x1FE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE464u;
        // 0x1fe468: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE46Cu;
        goto label_1fe46c;
    }
    ctx->pc = 0x1FE464u;
    {
        const bool branch_taken_0x1fe464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE464u;
        // 0x1fe468: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe464) {
            ctx->pc = 0x1FE4A0u;
            goto label_1fe4a0;
        }
    }
    ctx->pc = 0x1FE46Cu;
label_1fe46c:
    // 0x1fe46c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe470:
    // 0x1fe470: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1fe470u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1fe474:
    // 0x1fe474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe478:
    // 0x1fe478: 0xc07fe2a  jal         func_1FF8A8
label_1fe47c:
    if (ctx->pc == 0x1FE47Cu) {
        ctx->pc = 0x1FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE478u;
        // 0x1fe47c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE480u;
        goto label_1fe480;
    }
    ctx->pc = 0x1FE478u;
    SET_GPR_U32(ctx, 31, 0x1FE480u);
    ctx->pc = 0x1FE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE478u;
    // 0x1fe47c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE478u, 0x1FE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE480u;
label_1fe480:
    // 0x1fe480: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fe484:
    // 0x1fe484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe488:
    // 0x1fe488: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1fe48c:
    // 0x1fe48c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe490:
    // 0x1fe490: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fe490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1fe494:
    // 0x1fe494: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fe498:
    // 0x1fe498: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1fe49c:
    if (ctx->pc == 0x1FE49Cu) {
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4A0u;
        goto label_1fe4a0;
    }
    ctx->pc = 0x1FE498u;
    {
        const bool branch_taken_0x1fe498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe498) {
            ctx->pc = 0x1FE548u;
            goto label_1fe548;
        }
    }
    ctx->pc = 0x1FE4A0u;
label_1fe4a0:
    // 0x1fe4a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe4a4:
    // 0x1fe4a4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1fe4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1fe4a8:
    // 0x1fe4a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fe4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1fe4ac:
    // 0x1fe4ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fe4b0:
    if (ctx->pc == 0x1FE4B0u) {
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4B4u;
        goto label_1fe4b4;
    }
    ctx->pc = 0x1FE4ACu;
    {
        const bool branch_taken_0x1fe4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ac) {
            ctx->pc = 0x1FE4E8u;
            goto label_1fe4e8;
        }
    }
    ctx->pc = 0x1FE4B4u;
label_1fe4b4:
    // 0x1fe4b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1fe4b8:
    if (ctx->pc == 0x1FE4B8u) {
        ctx->pc = 0x1FE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B4u;
        // 0x1fe4b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4BCu;
        goto label_1fe4bc;
    }
    ctx->pc = 0x1FE4B4u;
    {
        const bool branch_taken_0x1fe4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B4u;
        // 0x1fe4b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4b4) {
            ctx->pc = 0x1FE4E8u;
            goto label_1fe4e8;
        }
    }
    ctx->pc = 0x1FE4BCu;
label_1fe4bc:
    // 0x1fe4bc: 0xc07fe2a  jal         func_1FF8A8
label_1fe4c0:
    if (ctx->pc == 0x1FE4C0u) {
        ctx->pc = 0x1FE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4BCu;
        // 0x1fe4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4C4u;
        goto label_1fe4c4;
    }
    ctx->pc = 0x1FE4BCu;
    SET_GPR_U32(ctx, 31, 0x1FE4C4u);
    ctx->pc = 0x1FE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4BCu;
    // 0x1fe4c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE4BCu, 0x1FE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4C4u;
label_1fe4c4:
    // 0x1fe4c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fe4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe4c8:
    // 0x1fe4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4cc:
    // 0x1fe4cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1fe4d0:
    // 0x1fe4d0: 0xc07f4fc  jal         func_1FD3F0
label_1fe4d4:
    if (ctx->pc == 0x1FE4D4u) {
        ctx->pc = 0x1FE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4D0u;
        // 0x1fe4d4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4D8u;
        goto label_1fe4d8;
    }
    ctx->pc = 0x1FE4D0u;
    SET_GPR_U32(ctx, 31, 0x1FE4D8u);
    ctx->pc = 0x1FE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4D0u;
    // 0x1fe4d4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE4D0u, 0x1FE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4D8u;
label_1fe4d8:
    // 0x1fe4d8: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_1fe4dc:
    if (ctx->pc == 0x1FE4DCu) {
        ctx->pc = 0x1FE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4D8u;
        // 0x1fe4dc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4E0u;
        goto label_1fe4e0;
    }
    ctx->pc = 0x1FE4D8u;
    {
        const bool branch_taken_0x1fe4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4d8) {
            ctx->pc = 0x1FE4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE4D8u;
            // 0x1fe4dc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6C8u;
            goto label_1fe6c8;
        }
    }
    ctx->pc = 0x1FE4E0u;
label_1fe4e0:
    // 0x1fe4e0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1fe4e4:
    if (ctx->pc == 0x1FE4E4u) {
        ctx->pc = 0x1FE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4E0u;
        // 0x1fe4e4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4E8u;
        goto label_1fe4e8;
    }
    ctx->pc = 0x1FE4E0u;
    {
        const bool branch_taken_0x1fe4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4E0u;
        // 0x1fe4e4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4e0) {
            ctx->pc = 0x1FE54Cu;
            goto label_1fe54c;
        }
    }
    ctx->pc = 0x1FE4E8u;
label_1fe4e8:
    // 0x1fe4e8: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1fe4ec:
    // 0x1fe4ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1fe4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1fe4f0:
    // 0x1fe4f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1fe4f4:
    if (ctx->pc == 0x1FE4F4u) {
        ctx->pc = 0x1FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F0u;
        // 0x1fe4f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4F8u;
        goto label_1fe4f8;
    }
    ctx->pc = 0x1FE4F0u;
    {
        const bool branch_taken_0x1fe4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4f0) {
            ctx->pc = 0x1FE4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE4F0u;
            // 0x1fe4f4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE520u;
            goto label_1fe520;
        }
    }
    ctx->pc = 0x1FE4F8u;
label_1fe4f8:
    // 0x1fe4f8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1fe4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fe4fc:
    // 0x1fe4fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fe4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe500:
    // 0x1fe500: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1fe504:
    // 0x1fe504: 0x40f809  jalr        $v0
label_1fe508:
    if (ctx->pc == 0x1FE508u) {
        ctx->pc = 0x1FE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE504u;
        // 0x1fe508: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE50Cu;
        goto label_1fe50c;
    }
    ctx->pc = 0x1FE504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE50Cu);
        ctx->pc = 0x1FE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE504u;
        // 0x1fe508: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE504u, 0x1FE50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE50Cu;
label_1fe50c:
    // 0x1fe50c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe510:
    // 0x1fe510: 0x5a00006d  blezl       $s0, . + 4 + (0x6D << 2)
label_1fe514:
    if (ctx->pc == 0x1FE514u) {
        ctx->pc = 0x1FE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE510u;
        // 0x1fe514: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE518u;
        goto label_1fe518;
    }
    ctx->pc = 0x1FE510u;
    {
        const bool branch_taken_0x1fe510 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1fe510) {
            ctx->pc = 0x1FE514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE510u;
            // 0x1fe514: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6C8u;
            goto label_1fe6c8;
        }
    }
    ctx->pc = 0x1FE518u;
label_1fe518:
    // 0x1fe518: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fe51c:
    if (ctx->pc == 0x1FE51Cu) {
        ctx->pc = 0x1FE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE518u;
        // 0x1fe51c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE520u;
        goto label_1fe520;
    }
    ctx->pc = 0x1FE518u;
    {
        const bool branch_taken_0x1fe518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE518u;
        // 0x1fe51c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe518) {
            ctx->pc = 0x1FE54Cu;
            goto label_1fe54c;
        }
    }
    ctx->pc = 0x1FE520u;
label_1fe520:
    // 0x1fe520: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe524:
    // 0x1fe524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe528:
    // 0x1fe528: 0xc07fe2a  jal         func_1FF8A8
label_1fe52c:
    if (ctx->pc == 0x1FE52Cu) {
        ctx->pc = 0x1FE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE528u;
        // 0x1fe52c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE530u;
        goto label_1fe530;
    }
    ctx->pc = 0x1FE528u;
    SET_GPR_U32(ctx, 31, 0x1FE530u);
    ctx->pc = 0x1FE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE528u;
    // 0x1fe52c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE528u, 0x1FE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE530u;
label_1fe530:
    // 0x1fe530: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fe534:
    // 0x1fe534: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe538:
    // 0x1fe538: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1fe53c:
    // 0x1fe53c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe540:
    // 0x1fe540: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fe540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1fe544:
    // 0x1fe544: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fe548:
    // 0x1fe548: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fe54c:
    // 0x1fe54c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1fe550:
    // 0x1fe550: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1fe550u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1fe554:
    // 0x1fe554: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fe554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe558:
    // 0x1fe558: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_1fe55c:
    if (ctx->pc == 0x1FE55Cu) {
        ctx->pc = 0x1FE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE558u;
        // 0x1fe55c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE560u;
        goto label_1fe560;
    }
    ctx->pc = 0x1FE558u;
    {
        const bool branch_taken_0x1fe558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE558u;
        // 0x1fe55c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe558) {
            ctx->pc = 0x1FE428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe428;
        }
    }
    ctx->pc = 0x1FE560u;
label_1fe560:
    // 0x1fe560: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1fe564:
    if (ctx->pc == 0x1FE564u) {
        ctx->pc = 0x1FE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE560u;
        // 0x1fe564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE568u;
        goto label_1fe568;
    }
    ctx->pc = 0x1FE560u;
    {
        const bool branch_taken_0x1fe560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE560u;
        // 0x1fe564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe560) {
            ctx->pc = 0x1FE6D4u;
            goto label_1fe6d4;
        }
    }
    ctx->pc = 0x1FE568u;
label_1fe568:
    // 0x1fe568: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1fe56c:
    if (ctx->pc == 0x1FE56Cu) {
        ctx->pc = 0x1FE570u;
        goto label_1fe570;
    }
    ctx->pc = 0x1FE568u;
    {
        const bool branch_taken_0x1fe568 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe568) {
            ctx->pc = 0x1FE594u;
            goto label_1fe594;
        }
    }
    ctx->pc = 0x1FE570u;
label_1fe570:
    // 0x1fe570: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fe570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe574:
    // 0x1fe574: 0x0  nop
    ctx->pc = 0x1fe574u;
    // NOP
label_1fe578:
    // 0x1fe578: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1fe578u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fe57c:
    // 0x1fe57c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1fe57cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fe580:
    // 0x1fe580: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1fe584:
    // 0x1fe584: 0x0  nop
    ctx->pc = 0x1fe584u;
    // NOP
label_1fe588:
    // 0x1fe588: 0x0  nop
    ctx->pc = 0x1fe588u;
    // NOP
label_1fe58c:
    // 0x1fe58c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_1fe590:
    if (ctx->pc == 0x1FE590u) {
        ctx->pc = 0x1FE594u;
        goto label_1fe594;
    }
    ctx->pc = 0x1FE58Cu;
    {
        const bool branch_taken_0x1fe58c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe58c) {
            ctx->pc = 0x1FE578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe578;
        }
    }
    ctx->pc = 0x1FE594u;
label_1fe594:
    // 0x1fe594: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_1fe598:
    if (ctx->pc == 0x1FE598u) {
        ctx->pc = 0x1FE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE594u;
        // 0x1fe598: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE59Cu;
        goto label_1fe59c;
    }
    ctx->pc = 0x1FE594u;
    {
        const bool branch_taken_0x1fe594 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe594) {
            ctx->pc = 0x1FE598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE594u;
            // 0x1fe598: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE5CCu;
            goto label_1fe5cc;
        }
    }
    ctx->pc = 0x1FE59Cu;
label_1fe59c:
    // 0x1fe59c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5a0:
    // 0x1fe5a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1fe5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1fe5a4:
    // 0x1fe5a4: 0xc07fda0  jal         func_1FF680
label_1fe5a8:
    if (ctx->pc == 0x1FE5A8u) {
        ctx->pc = 0x1FE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5A4u;
        // 0x1fe5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5ACu;
        goto label_1fe5ac;
    }
    ctx->pc = 0x1FE5A4u;
    SET_GPR_U32(ctx, 31, 0x1FE5ACu);
    ctx->pc = 0x1FE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5A4u;
    // 0x1fe5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF680u, 0x1FE5A4u, 0x1FE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5ACu;
label_1fe5ac:
    // 0x1fe5ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5b0:
    // 0x1fe5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fe5b4:
    if (ctx->pc == 0x1FE5B4u) {
        ctx->pc = 0x1FE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B0u;
        // 0x1fe5b4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5B8u;
        goto label_1fe5b8;
    }
    ctx->pc = 0x1FE5B0u;
    {
        const bool branch_taken_0x1fe5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B0u;
        // 0x1fe5b4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5b0) {
            ctx->pc = 0x1FE5C0u;
            goto label_1fe5c0;
        }
    }
    ctx->pc = 0x1FE5B8u;
label_1fe5b8:
    // 0x1fe5b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe5bc:
    if (ctx->pc == 0x1FE5BCu) {
        ctx->pc = 0x1FE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B8u;
        // 0x1fe5bc: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5C0u;
        goto label_1fe5c0;
    }
    ctx->pc = 0x1FE5B8u;
    {
        const bool branch_taken_0x1fe5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B8u;
        // 0x1fe5bc: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5b8) {
            ctx->pc = 0x1FE5C4u;
            goto label_1fe5c4;
        }
    }
    ctx->pc = 0x1FE5C0u;
label_1fe5c0:
    // 0x1fe5c0: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x1fe5c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fe5c4:
    // 0x1fe5c4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1fe5c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe5c8:
    // 0x1fe5c8: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1fe5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1fe5cc:
    // 0x1fe5cc: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1fe5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1fe5d0:
    // 0x1fe5d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fe5d4:
    // 0x1fe5d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5d8:
    // 0x1fe5d8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1fe5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe5dc:
    // 0x1fe5dc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1fe5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5e0:
    // 0x1fe5e0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1fe5e4:
    // 0x1fe5e4: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x1fe5e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_1fe5e8:
    // 0x1fe5e8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1fe5e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1fe5ec:
    // 0x1fe5ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1fe5f0:
    if (ctx->pc == 0x1FE5F0u) {
        ctx->pc = 0x1FE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5ECu;
        // 0x1fe5f0: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5F4u;
        goto label_1fe5f4;
    }
    ctx->pc = 0x1FE5ECu;
    {
        const bool branch_taken_0x1fe5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5ECu;
        // 0x1fe5f0: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5ec) {
            ctx->pc = 0x1FE630u;
            goto label_1fe630;
        }
    }
    ctx->pc = 0x1FE5F4u;
label_1fe5f4:
    // 0x1fe5f4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1fe5f8:
    // 0x1fe5f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fe5fc:
    if (ctx->pc == 0x1FE5FCu) {
        ctx->pc = 0x1FE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5F8u;
        // 0x1fe5fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE600u;
        goto label_1fe600;
    }
    ctx->pc = 0x1FE5F8u;
    {
        const bool branch_taken_0x1fe5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5F8u;
        // 0x1fe5fc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5f8) {
            ctx->pc = 0x1FE630u;
            goto label_1fe630;
        }
    }
    ctx->pc = 0x1FE600u;
label_1fe600:
    // 0x1fe600: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe604:
    // 0x1fe604: 0xc07fe2a  jal         func_1FF8A8
label_1fe608:
    if (ctx->pc == 0x1FE608u) {
        ctx->pc = 0x1FE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE604u;
        // 0x1fe608: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE60Cu;
        goto label_1fe60c;
    }
    ctx->pc = 0x1FE604u;
    SET_GPR_U32(ctx, 31, 0x1FE60Cu);
    ctx->pc = 0x1FE608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE604u;
    // 0x1fe608: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE604u, 0x1FE60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE60Cu;
label_1fe60c:
    // 0x1fe60c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fe60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe610:
    // 0x1fe610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe614:
    // 0x1fe614: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1fe614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1fe618:
    // 0x1fe618: 0xc07f4fc  jal         func_1FD3F0
label_1fe61c:
    if (ctx->pc == 0x1FE61Cu) {
        ctx->pc = 0x1FE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE618u;
        // 0x1fe61c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE620u;
        goto label_1fe620;
    }
    ctx->pc = 0x1FE618u;
    SET_GPR_U32(ctx, 31, 0x1FE620u);
    ctx->pc = 0x1FE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE618u;
    // 0x1fe61c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE618u, 0x1FE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE620u;
label_1fe620:
    // 0x1fe620: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1fe624:
    if (ctx->pc == 0x1FE624u) {
        ctx->pc = 0x1FE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE620u;
        // 0x1fe624: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE628u;
        goto label_1fe628;
    }
    ctx->pc = 0x1FE620u;
    {
        const bool branch_taken_0x1fe620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE620u;
        // 0x1fe624: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe620) {
            ctx->pc = 0x1FE6C4u;
            goto label_1fe6c4;
        }
    }
    ctx->pc = 0x1FE628u;
label_1fe628:
    // 0x1fe628: 0x10000018  b           . + 4 + (0x18 << 2)
label_1fe62c:
    if (ctx->pc == 0x1FE62Cu) {
        ctx->pc = 0x1FE630u;
        goto label_1fe630;
    }
    ctx->pc = 0x1FE628u;
    {
        const bool branch_taken_0x1fe628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe628) {
            ctx->pc = 0x1FE68Cu;
            goto label_1fe68c;
        }
    }
    ctx->pc = 0x1FE630u;
label_1fe630:
    // 0x1fe630: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x1fe630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1fe634:
    // 0x1fe634: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1fe638:
    if (ctx->pc == 0x1FE638u) {
        ctx->pc = 0x1FE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE634u;
        // 0x1fe638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE63Cu;
        goto label_1fe63c;
    }
    ctx->pc = 0x1FE634u;
    {
        const bool branch_taken_0x1fe634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE634u;
        // 0x1fe638: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe634) {
            ctx->pc = 0x1FE660u;
            goto label_1fe660;
        }
    }
    ctx->pc = 0x1FE63Cu;
label_1fe63c:
    // 0x1fe63c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fe640:
    // 0x1fe640: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe644:
    // 0x1fe644: 0x40f809  jalr        $v0
label_1fe648:
    if (ctx->pc == 0x1FE648u) {
        ctx->pc = 0x1FE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE644u;
        // 0x1fe648: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE64Cu;
        goto label_1fe64c;
    }
    ctx->pc = 0x1FE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE64Cu);
        ctx->pc = 0x1FE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE644u;
        // 0x1fe648: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE644u, 0x1FE64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE64Cu;
label_1fe64c:
    // 0x1fe64c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe650:
    // 0x1fe650: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_1fe654:
    if (ctx->pc == 0x1FE654u) {
        ctx->pc = 0x1FE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE650u;
        // 0x1fe654: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE658u;
        goto label_1fe658;
    }
    ctx->pc = 0x1FE650u;
    {
        const bool branch_taken_0x1fe650 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE650u;
        // 0x1fe654: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe650) {
            ctx->pc = 0x1FE6C4u;
            goto label_1fe6c4;
        }
    }
    ctx->pc = 0x1FE658u;
label_1fe658:
    // 0x1fe658: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fe65c:
    if (ctx->pc == 0x1FE65Cu) {
        ctx->pc = 0x1FE660u;
        goto label_1fe660;
    }
    ctx->pc = 0x1FE658u;
    {
        const bool branch_taken_0x1fe658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe658) {
            ctx->pc = 0x1FE68Cu;
            goto label_1fe68c;
        }
    }
    ctx->pc = 0x1FE660u;
label_1fe660:
    // 0x1fe660: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe664:
    // 0x1fe664: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe668:
    // 0x1fe668: 0xc07fe2a  jal         func_1FF8A8
label_1fe66c:
    if (ctx->pc == 0x1FE66Cu) {
        ctx->pc = 0x1FE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE668u;
        // 0x1fe66c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE670u;
        goto label_1fe670;
    }
    ctx->pc = 0x1FE668u;
    SET_GPR_U32(ctx, 31, 0x1FE670u);
    ctx->pc = 0x1FE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE668u;
    // 0x1fe66c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE668u, 0x1FE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE670u;
label_1fe670:
    // 0x1fe670: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1fe674:
    // 0x1fe674: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe678:
    // 0x1fe678: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fe678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1fe67c:
    // 0x1fe67c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe680:
    // 0x1fe680: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fe680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1fe684:
    // 0x1fe684: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1fe688:
    // 0x1fe688: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1fe68c:
    // 0x1fe68c: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_1fe690:
    if (ctx->pc == 0x1FE690u) {
        ctx->pc = 0x1FE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE68Cu;
        // 0x1fe690: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE694u;
        goto label_1fe694;
    }
    ctx->pc = 0x1FE68Cu;
    {
        const bool branch_taken_0x1fe68c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe68c) {
            ctx->pc = 0x1FE690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE68Cu;
            // 0x1fe690: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6A8u;
            goto label_1fe6a8;
        }
    }
    ctx->pc = 0x1FE694u;
label_1fe694:
    // 0x1fe694: 0xc07f4fc  jal         func_1FD3F0
label_1fe698:
    if (ctx->pc == 0x1FE698u) {
        ctx->pc = 0x1FE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE694u;
        // 0x1fe698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE69Cu;
        goto label_1fe69c;
    }
    ctx->pc = 0x1FE694u;
    SET_GPR_U32(ctx, 31, 0x1FE69Cu);
    ctx->pc = 0x1FE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE694u;
    // 0x1fe698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE694u, 0x1FE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE69Cu;
label_1fe69c:
    // 0x1fe69c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1fe6a0:
    if (ctx->pc == 0x1FE6A0u) {
        ctx->pc = 0x1FE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE69Cu;
        // 0x1fe6a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6A4u;
        goto label_1fe6a4;
    }
    ctx->pc = 0x1FE69Cu;
    {
        const bool branch_taken_0x1fe69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE69Cu;
        // 0x1fe6a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe69c) {
            ctx->pc = 0x1FE6C4u;
            goto label_1fe6c4;
        }
    }
    ctx->pc = 0x1FE6A4u;
label_1fe6a4:
    // 0x1fe6a4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1fe6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fe6a8:
    // 0x1fe6a8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1fe6ac:
    // 0x1fe6ac: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1fe6acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1fe6b0:
    // 0x1fe6b0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe6b4:
    // 0x1fe6b4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_1fe6b8:
    if (ctx->pc == 0x1FE6B8u) {
        ctx->pc = 0x1FE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6B4u;
        // 0x1fe6b8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6BCu;
        goto label_1fe6bc;
    }
    ctx->pc = 0x1FE6B4u;
    {
        const bool branch_taken_0x1fe6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6B4u;
        // 0x1fe6b8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6b4) {
            ctx->pc = 0x1FE568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe568;
        }
    }
    ctx->pc = 0x1FE6BCu;
label_1fe6bc:
    // 0x1fe6bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fe6c0:
    if (ctx->pc == 0x1FE6C0u) {
        ctx->pc = 0x1FE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6BCu;
        // 0x1fe6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6C4u;
        goto label_1fe6c4;
    }
    ctx->pc = 0x1FE6BCu;
    {
        const bool branch_taken_0x1fe6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6BCu;
        // 0x1fe6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6bc) {
            ctx->pc = 0x1FE6D4u;
            goto label_1fe6d4;
        }
    }
    ctx->pc = 0x1FE6C4u;
label_1fe6c4:
    // 0x1fe6c4: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fe6c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe6c8:
    // 0x1fe6c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe6cc:
    // 0x1fe6cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1fe6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1fe6d0:
    // 0x1fe6d0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x1fe6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_1fe6d4:
    // 0x1fe6d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1fe6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1fe6d8:
    // 0x1fe6d8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1fe6d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fe6dc:
    // 0x1fe6dc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1fe6dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe6e0:
    // 0x1fe6e0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1fe6e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe6e4:
    // 0x1fe6e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fe6e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe6e8:
    // 0x1fe6e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe6ec:
    // 0x1fe6ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fe6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe6f0:
    // 0x1fe6f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fe6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe6f4:
    // 0x1fe6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe6f8:
    // 0x1fe6f8: 0x3e00008  jr          $ra
label_1fe6fc:
    if (ctx->pc == 0x1FE6FCu) {
        ctx->pc = 0x1FE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6F8u;
        // 0x1fe6fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE700u;
        goto label_fallthrough_0x1fe6f8;
    }
    ctx->pc = 0x1FE6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6F8u;
        // 0x1fe6fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe6f8:
    ctx->pc = 0x1FE700u;
}
