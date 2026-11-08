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

// Function: FUN_0014c290
// Address: 0x14c290 - 0x14c7cc
void FUN_0014c290_0x14c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c290_0x14c290");
#endif

    switch (ctx->pc) {
        case 0x14c290u: goto label_14c290;
        case 0x14c294u: goto label_14c294;
        case 0x14c298u: goto label_14c298;
        case 0x14c29cu: goto label_14c29c;
        case 0x14c2a0u: goto label_14c2a0;
        case 0x14c2a4u: goto label_14c2a4;
        case 0x14c2a8u: goto label_14c2a8;
        case 0x14c2acu: goto label_14c2ac;
        case 0x14c2b0u: goto label_14c2b0;
        case 0x14c2b4u: goto label_14c2b4;
        case 0x14c2b8u: goto label_14c2b8;
        case 0x14c2bcu: goto label_14c2bc;
        case 0x14c2c0u: goto label_14c2c0;
        case 0x14c2c4u: goto label_14c2c4;
        case 0x14c2c8u: goto label_14c2c8;
        case 0x14c2ccu: goto label_14c2cc;
        case 0x14c2d0u: goto label_14c2d0;
        case 0x14c2d4u: goto label_14c2d4;
        case 0x14c2d8u: goto label_14c2d8;
        case 0x14c2dcu: goto label_14c2dc;
        case 0x14c2e0u: goto label_14c2e0;
        case 0x14c2e4u: goto label_14c2e4;
        case 0x14c2e8u: goto label_14c2e8;
        case 0x14c2ecu: goto label_14c2ec;
        case 0x14c2f0u: goto label_14c2f0;
        case 0x14c2f4u: goto label_14c2f4;
        case 0x14c2f8u: goto label_14c2f8;
        case 0x14c2fcu: goto label_14c2fc;
        case 0x14c300u: goto label_14c300;
        case 0x14c304u: goto label_14c304;
        case 0x14c308u: goto label_14c308;
        case 0x14c30cu: goto label_14c30c;
        case 0x14c310u: goto label_14c310;
        case 0x14c314u: goto label_14c314;
        case 0x14c318u: goto label_14c318;
        case 0x14c31cu: goto label_14c31c;
        case 0x14c320u: goto label_14c320;
        case 0x14c324u: goto label_14c324;
        case 0x14c328u: goto label_14c328;
        case 0x14c32cu: goto label_14c32c;
        case 0x14c330u: goto label_14c330;
        case 0x14c334u: goto label_14c334;
        case 0x14c338u: goto label_14c338;
        case 0x14c33cu: goto label_14c33c;
        case 0x14c340u: goto label_14c340;
        case 0x14c344u: goto label_14c344;
        case 0x14c348u: goto label_14c348;
        case 0x14c34cu: goto label_14c34c;
        case 0x14c350u: goto label_14c350;
        case 0x14c354u: goto label_14c354;
        case 0x14c358u: goto label_14c358;
        case 0x14c35cu: goto label_14c35c;
        case 0x14c360u: goto label_14c360;
        case 0x14c364u: goto label_14c364;
        case 0x14c368u: goto label_14c368;
        case 0x14c36cu: goto label_14c36c;
        case 0x14c370u: goto label_14c370;
        case 0x14c374u: goto label_14c374;
        case 0x14c378u: goto label_14c378;
        case 0x14c37cu: goto label_14c37c;
        case 0x14c380u: goto label_14c380;
        case 0x14c384u: goto label_14c384;
        case 0x14c388u: goto label_14c388;
        case 0x14c38cu: goto label_14c38c;
        case 0x14c390u: goto label_14c390;
        case 0x14c394u: goto label_14c394;
        case 0x14c398u: goto label_14c398;
        case 0x14c39cu: goto label_14c39c;
        case 0x14c3a0u: goto label_14c3a0;
        case 0x14c3a4u: goto label_14c3a4;
        case 0x14c3a8u: goto label_14c3a8;
        case 0x14c3acu: goto label_14c3ac;
        case 0x14c3b0u: goto label_14c3b0;
        case 0x14c3b4u: goto label_14c3b4;
        case 0x14c3b8u: goto label_14c3b8;
        case 0x14c3bcu: goto label_14c3bc;
        case 0x14c3c0u: goto label_14c3c0;
        case 0x14c3c4u: goto label_14c3c4;
        case 0x14c3c8u: goto label_14c3c8;
        case 0x14c3ccu: goto label_14c3cc;
        case 0x14c3d0u: goto label_14c3d0;
        case 0x14c3d4u: goto label_14c3d4;
        case 0x14c3d8u: goto label_14c3d8;
        case 0x14c3dcu: goto label_14c3dc;
        case 0x14c3e0u: goto label_14c3e0;
        case 0x14c3e4u: goto label_14c3e4;
        case 0x14c3e8u: goto label_14c3e8;
        case 0x14c3ecu: goto label_14c3ec;
        case 0x14c3f0u: goto label_14c3f0;
        case 0x14c3f4u: goto label_14c3f4;
        case 0x14c3f8u: goto label_14c3f8;
        case 0x14c3fcu: goto label_14c3fc;
        case 0x14c400u: goto label_14c400;
        case 0x14c404u: goto label_14c404;
        case 0x14c408u: goto label_14c408;
        case 0x14c40cu: goto label_14c40c;
        case 0x14c410u: goto label_14c410;
        case 0x14c414u: goto label_14c414;
        case 0x14c418u: goto label_14c418;
        case 0x14c41cu: goto label_14c41c;
        case 0x14c420u: goto label_14c420;
        case 0x14c424u: goto label_14c424;
        case 0x14c428u: goto label_14c428;
        case 0x14c42cu: goto label_14c42c;
        case 0x14c430u: goto label_14c430;
        case 0x14c434u: goto label_14c434;
        case 0x14c438u: goto label_14c438;
        case 0x14c43cu: goto label_14c43c;
        case 0x14c440u: goto label_14c440;
        case 0x14c444u: goto label_14c444;
        case 0x14c448u: goto label_14c448;
        case 0x14c44cu: goto label_14c44c;
        case 0x14c450u: goto label_14c450;
        case 0x14c454u: goto label_14c454;
        case 0x14c458u: goto label_14c458;
        case 0x14c45cu: goto label_14c45c;
        case 0x14c460u: goto label_14c460;
        case 0x14c464u: goto label_14c464;
        case 0x14c468u: goto label_14c468;
        case 0x14c46cu: goto label_14c46c;
        case 0x14c470u: goto label_14c470;
        case 0x14c474u: goto label_14c474;
        case 0x14c478u: goto label_14c478;
        case 0x14c47cu: goto label_14c47c;
        case 0x14c480u: goto label_14c480;
        case 0x14c484u: goto label_14c484;
        case 0x14c488u: goto label_14c488;
        case 0x14c48cu: goto label_14c48c;
        case 0x14c490u: goto label_14c490;
        case 0x14c494u: goto label_14c494;
        case 0x14c498u: goto label_14c498;
        case 0x14c49cu: goto label_14c49c;
        case 0x14c4a0u: goto label_14c4a0;
        case 0x14c4a4u: goto label_14c4a4;
        case 0x14c4a8u: goto label_14c4a8;
        case 0x14c4acu: goto label_14c4ac;
        case 0x14c4b0u: goto label_14c4b0;
        case 0x14c4b4u: goto label_14c4b4;
        case 0x14c4b8u: goto label_14c4b8;
        case 0x14c4bcu: goto label_14c4bc;
        case 0x14c4c0u: goto label_14c4c0;
        case 0x14c4c4u: goto label_14c4c4;
        case 0x14c4c8u: goto label_14c4c8;
        case 0x14c4ccu: goto label_14c4cc;
        case 0x14c4d0u: goto label_14c4d0;
        case 0x14c4d4u: goto label_14c4d4;
        case 0x14c4d8u: goto label_14c4d8;
        case 0x14c4dcu: goto label_14c4dc;
        case 0x14c4e0u: goto label_14c4e0;
        case 0x14c4e4u: goto label_14c4e4;
        case 0x14c4e8u: goto label_14c4e8;
        case 0x14c4ecu: goto label_14c4ec;
        case 0x14c4f0u: goto label_14c4f0;
        case 0x14c4f4u: goto label_14c4f4;
        case 0x14c4f8u: goto label_14c4f8;
        case 0x14c4fcu: goto label_14c4fc;
        case 0x14c500u: goto label_14c500;
        case 0x14c504u: goto label_14c504;
        case 0x14c508u: goto label_14c508;
        case 0x14c50cu: goto label_14c50c;
        case 0x14c510u: goto label_14c510;
        case 0x14c514u: goto label_14c514;
        case 0x14c518u: goto label_14c518;
        case 0x14c51cu: goto label_14c51c;
        case 0x14c520u: goto label_14c520;
        case 0x14c524u: goto label_14c524;
        case 0x14c528u: goto label_14c528;
        case 0x14c52cu: goto label_14c52c;
        case 0x14c530u: goto label_14c530;
        case 0x14c534u: goto label_14c534;
        case 0x14c538u: goto label_14c538;
        case 0x14c53cu: goto label_14c53c;
        case 0x14c540u: goto label_14c540;
        case 0x14c544u: goto label_14c544;
        case 0x14c548u: goto label_14c548;
        case 0x14c54cu: goto label_14c54c;
        case 0x14c550u: goto label_14c550;
        case 0x14c554u: goto label_14c554;
        case 0x14c558u: goto label_14c558;
        case 0x14c55cu: goto label_14c55c;
        case 0x14c560u: goto label_14c560;
        case 0x14c564u: goto label_14c564;
        case 0x14c568u: goto label_14c568;
        case 0x14c56cu: goto label_14c56c;
        case 0x14c570u: goto label_14c570;
        case 0x14c574u: goto label_14c574;
        case 0x14c578u: goto label_14c578;
        case 0x14c57cu: goto label_14c57c;
        case 0x14c580u: goto label_14c580;
        case 0x14c584u: goto label_14c584;
        case 0x14c588u: goto label_14c588;
        case 0x14c58cu: goto label_14c58c;
        case 0x14c590u: goto label_14c590;
        case 0x14c594u: goto label_14c594;
        case 0x14c598u: goto label_14c598;
        case 0x14c59cu: goto label_14c59c;
        case 0x14c5a0u: goto label_14c5a0;
        case 0x14c5a4u: goto label_14c5a4;
        case 0x14c5a8u: goto label_14c5a8;
        case 0x14c5acu: goto label_14c5ac;
        case 0x14c5b0u: goto label_14c5b0;
        case 0x14c5b4u: goto label_14c5b4;
        case 0x14c5b8u: goto label_14c5b8;
        case 0x14c5bcu: goto label_14c5bc;
        case 0x14c5c0u: goto label_14c5c0;
        case 0x14c5c4u: goto label_14c5c4;
        case 0x14c5c8u: goto label_14c5c8;
        case 0x14c5ccu: goto label_14c5cc;
        case 0x14c5d0u: goto label_14c5d0;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5d8u: goto label_14c5d8;
        case 0x14c5dcu: goto label_14c5dc;
        case 0x14c5e0u: goto label_14c5e0;
        case 0x14c5e4u: goto label_14c5e4;
        case 0x14c5e8u: goto label_14c5e8;
        case 0x14c5ecu: goto label_14c5ec;
        case 0x14c5f0u: goto label_14c5f0;
        case 0x14c5f4u: goto label_14c5f4;
        case 0x14c5f8u: goto label_14c5f8;
        case 0x14c5fcu: goto label_14c5fc;
        case 0x14c600u: goto label_14c600;
        case 0x14c604u: goto label_14c604;
        case 0x14c608u: goto label_14c608;
        case 0x14c60cu: goto label_14c60c;
        case 0x14c610u: goto label_14c610;
        case 0x14c614u: goto label_14c614;
        case 0x14c618u: goto label_14c618;
        case 0x14c61cu: goto label_14c61c;
        case 0x14c620u: goto label_14c620;
        case 0x14c624u: goto label_14c624;
        case 0x14c628u: goto label_14c628;
        case 0x14c62cu: goto label_14c62c;
        case 0x14c630u: goto label_14c630;
        case 0x14c634u: goto label_14c634;
        case 0x14c638u: goto label_14c638;
        case 0x14c63cu: goto label_14c63c;
        case 0x14c640u: goto label_14c640;
        case 0x14c644u: goto label_14c644;
        case 0x14c648u: goto label_14c648;
        case 0x14c64cu: goto label_14c64c;
        case 0x14c650u: goto label_14c650;
        case 0x14c654u: goto label_14c654;
        case 0x14c658u: goto label_14c658;
        case 0x14c65cu: goto label_14c65c;
        case 0x14c660u: goto label_14c660;
        case 0x14c664u: goto label_14c664;
        case 0x14c668u: goto label_14c668;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c670u: goto label_14c670;
        case 0x14c674u: goto label_14c674;
        case 0x14c678u: goto label_14c678;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c680u: goto label_14c680;
        case 0x14c684u: goto label_14c684;
        case 0x14c688u: goto label_14c688;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c690u: goto label_14c690;
        case 0x14c694u: goto label_14c694;
        case 0x14c698u: goto label_14c698;
        case 0x14c69cu: goto label_14c69c;
        case 0x14c6a0u: goto label_14c6a0;
        case 0x14c6a4u: goto label_14c6a4;
        case 0x14c6a8u: goto label_14c6a8;
        case 0x14c6acu: goto label_14c6ac;
        case 0x14c6b0u: goto label_14c6b0;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c6bcu: goto label_14c6bc;
        case 0x14c6c0u: goto label_14c6c0;
        case 0x14c6c4u: goto label_14c6c4;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6ccu: goto label_14c6cc;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c6dcu: goto label_14c6dc;
        case 0x14c6e0u: goto label_14c6e0;
        case 0x14c6e4u: goto label_14c6e4;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c6ecu: goto label_14c6ec;
        case 0x14c6f0u: goto label_14c6f0;
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6f8u: goto label_14c6f8;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c700u: goto label_14c700;
        case 0x14c704u: goto label_14c704;
        case 0x14c708u: goto label_14c708;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c710u: goto label_14c710;
        case 0x14c714u: goto label_14c714;
        case 0x14c718u: goto label_14c718;
        case 0x14c71cu: goto label_14c71c;
        case 0x14c720u: goto label_14c720;
        case 0x14c724u: goto label_14c724;
        case 0x14c728u: goto label_14c728;
        case 0x14c72cu: goto label_14c72c;
        case 0x14c730u: goto label_14c730;
        case 0x14c734u: goto label_14c734;
        case 0x14c738u: goto label_14c738;
        case 0x14c73cu: goto label_14c73c;
        case 0x14c740u: goto label_14c740;
        case 0x14c744u: goto label_14c744;
        case 0x14c748u: goto label_14c748;
        case 0x14c74cu: goto label_14c74c;
        case 0x14c750u: goto label_14c750;
        case 0x14c754u: goto label_14c754;
        case 0x14c758u: goto label_14c758;
        case 0x14c75cu: goto label_14c75c;
        case 0x14c760u: goto label_14c760;
        case 0x14c764u: goto label_14c764;
        case 0x14c768u: goto label_14c768;
        case 0x14c76cu: goto label_14c76c;
        case 0x14c770u: goto label_14c770;
        case 0x14c774u: goto label_14c774;
        case 0x14c778u: goto label_14c778;
        case 0x14c77cu: goto label_14c77c;
        case 0x14c780u: goto label_14c780;
        case 0x14c784u: goto label_14c784;
        case 0x14c788u: goto label_14c788;
        case 0x14c78cu: goto label_14c78c;
        case 0x14c790u: goto label_14c790;
        case 0x14c794u: goto label_14c794;
        case 0x14c798u: goto label_14c798;
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7a4u: goto label_14c7a4;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7b0u: goto label_14c7b0;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7bcu: goto label_14c7bc;
        case 0x14c7c0u: goto label_14c7c0;
        case 0x14c7c4u: goto label_14c7c4;
        case 0x14c7c8u: goto label_14c7c8;
        default: break;
    }

    ctx->pc = 0x14c290u;

label_14c290:
    // 0x14c290: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_14c294:
    // 0x14c294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c298:
    // 0x14c298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14c29c:
    // 0x14c29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_14c2a0:
    // 0x14c2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_14c2a4:
    // 0x14c2a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14c2a8:
    // 0x14c2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14c2ac:
    // 0x14c2ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c2b0:
    // 0x14c2b0: 0x90840055  lbu         $a0, 0x55($a0)
    ctx->pc = 0x14c2b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_14c2b4:
    // 0x14c2b4: 0x1483013e  bne         $a0, $v1, . + 4 + (0x13E << 2)
label_14c2b8:
    if (ctx->pc == 0x14C2B8u) {
        ctx->pc = 0x14C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2B4u;
        // 0x14c2b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C2BCu;
        goto label_14c2bc;
    }
    ctx->pc = 0x14C2B4u;
    {
        const bool branch_taken_0x14c2b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2B4u;
        // 0x14c2b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c2b4) {
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C2BCu;
label_14c2bc:
    // 0x14c2bc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x14c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_14c2c0:
    // 0x14c2c0: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x14c2c0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_14c2c4:
    // 0x14c2c4: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x14c2c4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_14c2c8:
    // 0x14c2c8: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x14c2c8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_14c2cc:
    // 0x14c2cc: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x14c2ccu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_14c2d0:
    // 0x14c2d0: 0x4be8e1bc  vmulax.xyzw $ACC, $vf28, $vf8x
    ctx->pc = 0x14c2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2d4:
    // 0x14c2d4: 0x4be8e8bd  vmadday.xyzw $ACC, $vf29, $vf8y
    ctx->pc = 0x14c2d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2d8:
    // 0x14c2d8: 0x4be8f0be  vmaddaz.xyzw $ACC, $vf30, $vf8z
    ctx->pc = 0x14c2d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2dc:
    // 0x14c2dc: 0x4be8fb0b  vmaddw.xyzw $vf12, $vf31, $vf8w
    ctx->pc = 0x14c2dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_14c2e0:
    // 0x14c2e0: 0x4be9e1bc  vmulax.xyzw $ACC, $vf28, $vf9x
    ctx->pc = 0x14c2e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2e4:
    // 0x14c2e4: 0x4be9e8bd  vmadday.xyzw $ACC, $vf29, $vf9y
    ctx->pc = 0x14c2e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2e8:
    // 0x14c2e8: 0x4be9f0be  vmaddaz.xyzw $ACC, $vf30, $vf9z
    ctx->pc = 0x14c2e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2ec:
    // 0x14c2ec: 0x4be9fb4b  vmaddw.xyzw $vf13, $vf31, $vf9w
    ctx->pc = 0x14c2ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_14c2f0:
    // 0x14c2f0: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x14c2f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2f4:
    // 0x14c2f4: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x14c2f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2f8:
    // 0x14c2f8: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x14c2f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c2fc:
    // 0x14c2fc: 0x4beafb8b  vmaddw.xyzw $vf14, $vf31, $vf10w
    ctx->pc = 0x14c2fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
label_14c300:
    // 0x14c300: 0x4bebe1bc  vmulax.xyzw $ACC, $vf28, $vf11x
    ctx->pc = 0x14c300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c304:
    // 0x14c304: 0x4bebe8bd  vmadday.xyzw $ACC, $vf29, $vf11y
    ctx->pc = 0x14c304u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c308:
    // 0x14c308: 0x4bebf0be  vmaddaz.xyzw $ACC, $vf30, $vf11z
    ctx->pc = 0x14c308u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14c30c:
    // 0x14c30c: 0x4bebfbcb  vmaddw.xyzw $vf15, $vf31, $vf11w
    ctx->pc = 0x14c30cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
label_14c310:
    // 0x14c310: 0x4bfc633c  vmove.xyzw  $vf28, $vf12
    ctx->pc = 0x14c310u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[12], _mm_castsi128_ps(mask)); }
label_14c314:
    // 0x14c314: 0x4bfd6b3c  vmove.xyzw  $vf29, $vf13
    ctx->pc = 0x14c314u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[13], _mm_castsi128_ps(mask)); }
label_14c318:
    // 0x14c318: 0x4bfe733c  vmove.xyzw  $vf30, $vf14
    ctx->pc = 0x14c318u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[14], _mm_castsi128_ps(mask)); }
label_14c31c:
    // 0x14c31c: 0x4bff7b3c  vmove.xyzw  $vf31, $vf15
    ctx->pc = 0x14c31cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[15], _mm_castsi128_ps(mask)); }
label_14c320:
    // 0x14c320: 0xc061c6c  jal         func_1871B0
label_14c324:
    if (ctx->pc == 0x14C324u) {
        ctx->pc = 0x14C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C320u;
        // 0x14c324: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C328u;
        goto label_14c328;
    }
    ctx->pc = 0x14C320u;
    SET_GPR_U32(ctx, 31, 0x14C328u);
    ctx->pc = 0x14C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C320u;
    // 0x14c324: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871B0u, 0x14C320u, 0x14C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C328u;
label_14c328:
    // 0x14c328: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x14c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_14c32c:
    // 0x14c32c: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x14c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c330:
    // 0x14c330: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x14c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c334:
    // 0x14c334: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14c334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14c338:
    // 0x14c338: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x14c338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_14c33c:
    // 0x14c33c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x14c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_14c340:
    // 0x14c340: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x14c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c344:
    // 0x14c344: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x14c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c348:
    // 0x14c348: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14c348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14c34c:
    // 0x14c34c: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x14c34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_14c350:
    // 0x14c350: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x14c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_14c354:
    // 0x14c354: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_14c358:
    if (ctx->pc == 0x14C358u) {
        ctx->pc = 0x14C35Cu;
        goto label_14c35c;
    }
    ctx->pc = 0x14C354u;
    {
        const bool branch_taken_0x14c354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c354) {
            ctx->pc = 0x14C460u;
            goto label_14c460;
        }
    }
    ctx->pc = 0x14C35Cu;
label_14c35c:
    // 0x14c35c: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x14c35cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_14c360:
    // 0x14c360: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_14c364:
    if (ctx->pc == 0x14C364u) {
        ctx->pc = 0x14C368u;
        goto label_14c368;
    }
    ctx->pc = 0x14C360u;
    {
        const bool branch_taken_0x14c360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c360) {
            ctx->pc = 0x14C460u;
            goto label_14c460;
        }
    }
    ctx->pc = 0x14C368u;
label_14c368:
    // 0x14c368: 0x8f85853c  lw          $a1, -0x7AC4($gp)
    ctx->pc = 0x14c368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_14c36c:
    // 0x14c36c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x14c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_14c370:
    // 0x14c370: 0x34480404  ori         $t0, $v0, 0x404
    ctx->pc = 0x14c370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_14c374:
    // 0x14c374: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x14c374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14c378:
    // 0x14c378: 0x3c026c0c  lui         $v0, 0x6C0C
    ctx->pc = 0x14c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27660 << 16));
label_14c37c:
    // 0x14c37c: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x14c37cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_14c380:
    // 0x14c380: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x14c380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14c384:
    // 0x14c384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c388:
    // 0x14c388: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x14c388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_14c38c:
    // 0x14c38c: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x14c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_14c390:
    // 0x14c390: 0x3444801b  ori         $a0, $v0, 0x801B
    ctx->pc = 0x14c390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32795);
label_14c394:
    // 0x14c394: 0xae250088  sw          $a1, 0x88($s1)
    ctx->pc = 0x14c394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 5));
label_14c398:
    // 0x14c398: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x14c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_14c39c:
    // 0x14c39c: 0x8f8b853c  lw          $t3, -0x7AC4($gp)
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
label_14c3a0:
    // 0x14c3a0: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_14c3a4:
    // 0x14c3a4: 0x256b0110  addiu       $t3, $t3, 0x110
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 272));
label_14c3a8:
    // 0x14c3a8: 0xaf8b853c  sw          $t3, -0x7AC4($gp)
    ctx->pc = 0x14c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 11));
label_14c3ac:
    // 0x14c3ac: 0x8e2b0088  lw          $t3, 0x88($s1)
    ctx->pc = 0x14c3acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_14c3b0:
    // 0x14c3b0: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x14c3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
label_14c3b4:
    // 0x14c3b4: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x14c3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
label_14c3b8:
    // 0x14c3b8: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x14c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_14c3bc:
    // 0x14c3bc: 0xa5690000  sh          $t1, 0x0($t3)
    ctx->pc = 0x14c3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 9));
label_14c3c0:
    // 0x14c3c0: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x14c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
label_14c3c4:
    // 0x14c3c4: 0xad67000c  sw          $a3, 0xC($t3)
    ctx->pc = 0x14c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 7));
label_14c3c8:
    // 0x14c3c8: 0x8e270088  lw          $a3, 0x88($s1)
    ctx->pc = 0x14c3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_14c3cc:
    // 0x14c3cc: 0xa0ea00d3  sb          $t2, 0xD3($a3)
    ctx->pc = 0x14c3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 211), (uint8_t)GPR_U32(ctx, 10));
label_14c3d0:
    // 0x14c3d0: 0xa0e000d2  sb          $zero, 0xD2($a3)
    ctx->pc = 0x14c3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 210), (uint8_t)GPR_U32(ctx, 0));
label_14c3d4:
    // 0x14c3d4: 0xace000d4  sw          $zero, 0xD4($a3)
    ctx->pc = 0x14c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 212), GPR_U32(ctx, 0));
label_14c3d8:
    // 0x14c3d8: 0xa4e600d0  sh          $a2, 0xD0($a3)
    ctx->pc = 0x14c3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 208), (uint16_t)GPR_U32(ctx, 6));
label_14c3dc:
    // 0x14c3dc: 0xace800d8  sw          $t0, 0xD8($a3)
    ctx->pc = 0x14c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 8));
label_14c3e0:
    // 0x14c3e0: 0xace400dc  sw          $a0, 0xDC($a3)
    ctx->pc = 0x14c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 4));
label_14c3e4:
    // 0x14c3e4: 0x8e260088  lw          $a2, 0x88($s1)
    ctx->pc = 0x14c3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_14c3e8:
    // 0x14c3e8: 0x8f8484dc  lw          $a0, -0x7B24($gp)
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
label_14c3ec:
    // 0x14c3ec: 0x24cb00f0  addiu       $t3, $a2, 0xF0
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
label_14c3f0:
    // 0x14c3f0: 0xa0ca00f3  sb          $t2, 0xF3($a2)
    ctx->pc = 0x14c3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 243), (uint8_t)GPR_U32(ctx, 10));
label_14c3f4:
    // 0x14c3f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x14c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_14c3f8:
    // 0x14c3f8: 0xa0c000f2  sb          $zero, 0xF2($a2)
    ctx->pc = 0x14c3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 242), (uint8_t)GPR_U32(ctx, 0));
label_14c3fc:
    // 0x14c3fc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14c3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_14c400:
    // 0x14c400: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x14c400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
label_14c404:
    // 0x14c404: 0xa4c000f0  sh          $zero, 0xF0($a2)
    ctx->pc = 0x14c404u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 240), (uint16_t)GPR_U32(ctx, 0));
label_14c408:
    // 0x14c408: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x14c408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
label_14c40c:
    // 0x14c40c: 0xacc300fc  sw          $v1, 0xFC($a2)
    ctx->pc = 0x14c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 3));
label_14c410:
    // 0x14c410: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x14c410u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
label_14c414:
    // 0x14c414: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x14c414u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 2));
label_14c418:
    // 0x14c418: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x14c418u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_14c41c:
    // 0x14c41c: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x14c41cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
label_14c420:
    // 0x14c420: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x14c420u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
label_14c424:
    // 0x14c424: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x14c424u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
label_14c428:
    // 0x14c428: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x14c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_14c42c:
    // 0x14c42c: 0xc061c0c  jal         func_187030
label_14c430:
    if (ctx->pc == 0x14C430u) {
        ctx->pc = 0x14C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C42Cu;
        // 0x14c430: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C434u;
        goto label_14c434;
    }
    ctx->pc = 0x14C42Cu;
    SET_GPR_U32(ctx, 31, 0x14C434u);
    ctx->pc = 0x14C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C42Cu;
    // 0x14c430: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187030u, 0x14C42Cu, 0x14C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C434u;
label_14c434:
    // 0x14c434: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x14c434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c438:
    // 0x14c438: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x14c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c43c:
    // 0x14c43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c440:
    // 0x14c440: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x14c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_14c444:
    // 0x14c444: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x14c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_14c448:
    // 0x14c448: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x14c448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_14c44c:
    // 0x14c44c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x14c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_14c450:
    // 0x14c450: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c454:
    // 0x14c454: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x14c454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_14c458:
    // 0x14c458: 0x320f809  jalr        $t9
label_14c45c:
    if (ctx->pc == 0x14C45Cu) {
        ctx->pc = 0x14C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C458u;
        // 0x14c45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C460u;
        goto label_14c460;
    }
    ctx->pc = 0x14C458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C460u);
        ctx->pc = 0x14C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C458u;
        // 0x14c45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C458u, 0x14C460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C460u;
label_14c460:
    // 0x14c460: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x14c460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c464:
    // 0x14c464: 0x8ca402b4  lw          $a0, 0x2B4($a1)
    ctx->pc = 0x14c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 692)));
label_14c468:
    // 0x14c468: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_14c46c:
    if (ctx->pc == 0x14C46Cu) {
        ctx->pc = 0x14C470u;
        goto label_14c470;
    }
    ctx->pc = 0x14C468u;
    {
        const bool branch_taken_0x14c468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c468) {
            ctx->pc = 0x14C4DCu;
            goto label_14c4dc;
        }
    }
    ctx->pc = 0x14C470u;
label_14c470:
    // 0x14c470: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c474:
    // 0x14c474: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c478:
    // 0x14c478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c47c:
    // 0x14c47c: 0x0  nop
    ctx->pc = 0x14c47cu;
    // NOP
label_14c480:
    // 0x14c480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c484:
    // 0x14c484: 0x0  nop
    ctx->pc = 0x14c484u;
    // NOP
label_14c488:
    // 0x14c488: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_14c48c:
    if (ctx->pc == 0x14C48Cu) {
        ctx->pc = 0x14C490u;
        goto label_14c490;
    }
    ctx->pc = 0x14C488u;
    {
        const bool branch_taken_0x14c488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c488) {
            ctx->pc = 0x14C4DCu;
            goto label_14c4dc;
        }
    }
    ctx->pc = 0x14C490u;
label_14c490:
    // 0x14c490: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c490u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c494:
    // 0x14c494: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c494u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c498:
    // 0x14c498: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c498u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c49c:
    // 0x14c49c: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c49cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c4a0:
    // 0x14c4a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c4a4:
    // 0x14c4a4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_14c4a8:
    // 0x14c4a8: 0x320f809  jalr        $t9
label_14c4ac:
    if (ctx->pc == 0x14C4ACu) {
        ctx->pc = 0x14C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4A8u;
        // 0x14c4ac: 0x8ca503c4  lw          $a1, 0x3C4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C4B0u;
        goto label_14c4b0;
    }
    ctx->pc = 0x14C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C4B0u);
        ctx->pc = 0x14C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4A8u;
        // 0x14c4ac: 0x8ca503c4  lw          $a1, 0x3C4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C4A8u, 0x14C4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C4B0u;
label_14c4b0:
    // 0x14c4b0: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c4b0u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c4b4:
    // 0x14c4b4: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c4b4u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c4b8:
    // 0x14c4b8: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c4b8u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c4bc:
    // 0x14c4bc: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c4bcu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c4c0:
    // 0x14c4c0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c4c4:
    // 0x14c4c4: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_14c4c8:
    // 0x14c4c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c4cc:
    // 0x14c4cc: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_14c4d0:
    // 0x14c4d0: 0x320f809  jalr        $t9
label_14c4d4:
    if (ctx->pc == 0x14C4D4u) {
        ctx->pc = 0x14C4D8u;
        goto label_14c4d8;
    }
    ctx->pc = 0x14C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C4D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C4D0u, 0x14C4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C4D8u;
label_14c4d8:
    // 0x14c4d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x14c4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_14c4dc:
    // 0x14c4dc: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x14c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c4e0:
    // 0x14c4e0: 0x8c6402b8  lw          $a0, 0x2B8($v1)
    ctx->pc = 0x14c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
label_14c4e4:
    // 0x14c4e4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_14c4e8:
    if (ctx->pc == 0x14C4E8u) {
        ctx->pc = 0x14C4ECu;
        goto label_14c4ec;
    }
    ctx->pc = 0x14C4E4u;
    {
        const bool branch_taken_0x14c4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4e4) {
            ctx->pc = 0x14C554u;
            goto label_14c554;
        }
    }
    ctx->pc = 0x14C4ECu;
label_14c4ec:
    // 0x14c4ec: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c4f0:
    // 0x14c4f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c4f4:
    // 0x14c4f4: 0x0  nop
    ctx->pc = 0x14c4f4u;
    // NOP
label_14c4f8:
    // 0x14c4f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c4f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c4fc:
    // 0x14c4fc: 0x0  nop
    ctx->pc = 0x14c4fcu;
    // NOP
label_14c500:
    // 0x14c500: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_14c504:
    if (ctx->pc == 0x14C504u) {
        ctx->pc = 0x14C508u;
        goto label_14c508;
    }
    ctx->pc = 0x14C500u;
    {
        const bool branch_taken_0x14c500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c500) {
            ctx->pc = 0x14C554u;
            goto label_14c554;
        }
    }
    ctx->pc = 0x14C508u;
label_14c508:
    // 0x14c508: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c508u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c50c:
    // 0x14c50c: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c50cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c510:
    // 0x14c510: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c510u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c514:
    // 0x14c514: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c514u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c518:
    // 0x14c518: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c51c:
    // 0x14c51c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_14c520:
    // 0x14c520: 0x320f809  jalr        $t9
label_14c524:
    if (ctx->pc == 0x14C524u) {
        ctx->pc = 0x14C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C520u;
        // 0x14c524: 0x8c6503c8  lw          $a1, 0x3C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C528u;
        goto label_14c528;
    }
    ctx->pc = 0x14C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C528u);
        ctx->pc = 0x14C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C520u;
        // 0x14c524: 0x8c6503c8  lw          $a1, 0x3C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C520u, 0x14C528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C528u;
label_14c528:
    // 0x14c528: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c528u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c52c:
    // 0x14c52c: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c52cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c530:
    // 0x14c530: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c530u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c534:
    // 0x14c534: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c534u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c538:
    // 0x14c538: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x14c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_14c53c:
    // 0x14c53c: 0x8c4402b8  lw          $a0, 0x2B8($v0)
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
label_14c540:
    // 0x14c540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c544:
    // 0x14c544: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x14c544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_14c548:
    // 0x14c548: 0x320f809  jalr        $t9
label_14c54c:
    if (ctx->pc == 0x14C54Cu) {
        ctx->pc = 0x14C550u;
        goto label_14c550;
    }
    ctx->pc = 0x14C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C550u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C548u, 0x14C550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C550u;
label_14c550:
    // 0x14c550: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x14c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_14c554:
    // 0x14c554: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c558:
    // 0x14c558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c55c:
    // 0x14c55c: 0x0  nop
    ctx->pc = 0x14c55cu;
    // NOP
label_14c560:
    // 0x14c560: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c564:
    // 0x14c564: 0x0  nop
    ctx->pc = 0x14c564u;
    // NOP
label_14c568:
    // 0x14c568: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_14c56c:
    if (ctx->pc == 0x14C56Cu) {
        ctx->pc = 0x14C570u;
        goto label_14c570;
    }
    ctx->pc = 0x14C568u;
    {
        const bool branch_taken_0x14c568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c568) {
            ctx->pc = 0x14C620u;
            goto label_14c620;
        }
    }
    ctx->pc = 0x14C570u;
label_14c570:
    // 0x14c570: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_14c574:
    // 0x14c574: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x14c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_14c578:
    // 0x14c578: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c57c:
    // 0x14c57c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_14c580:
    if (ctx->pc == 0x14C580u) {
        ctx->pc = 0x14C584u;
        goto label_14c584;
    }
    ctx->pc = 0x14C57Cu;
    {
        const bool branch_taken_0x14c57c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c57c) {
            ctx->pc = 0x14C680u;
            goto label_14c680;
        }
    }
    ctx->pc = 0x14C584u;
label_14c584:
    // 0x14c584: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14c588:
    // 0x14c588: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14c58c:
    // 0x14c58c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14c590:
    // 0x14c590: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14c594:
    // 0x14c594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c598:
    // 0x14c598: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x14c598u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14c59c:
    // 0x14c59c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14c5a0:
    // 0x14c5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c5a4:
    // 0x14c5a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_14c5a8:
    if (ctx->pc == 0x14C5A8u) {
        ctx->pc = 0x14C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5A4u;
        // 0x14c5a8: 0x2439821  addu        $s3, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5ACu;
        goto label_14c5ac;
    }
    ctx->pc = 0x14C5A4u;
    {
        const bool branch_taken_0x14c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5A4u;
        // 0x14c5a8: 0x2439821  addu        $s3, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5a4) {
            ctx->pc = 0x14C60Cu;
            goto label_14c60c;
        }
    }
    ctx->pc = 0x14C5ACu;
label_14c5ac:
    // 0x14c5ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5b0:
    // 0x14c5b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c5b4:
    // 0x14c5b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c5b8:
    // 0x14c5b8: 0x320f809  jalr        $t9
label_14c5bc:
    if (ctx->pc == 0x14C5BCu) {
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B8u;
        // 0x14c5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5C0u;
        goto label_14c5c0;
    }
    ctx->pc = 0x14C5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5C0u);
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B8u;
        // 0x14c5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5B8u, 0x14C5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C5C0u;
label_14c5c0:
    // 0x14c5c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5c4:
    // 0x14c5c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c5c8:
    // 0x14c5c8: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x14c5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_14c5cc:
    // 0x14c5cc: 0x320f809  jalr        $t9
label_14c5d0:
    if (ctx->pc == 0x14C5D0u) {
        ctx->pc = 0x14C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5CCu;
        // 0x14c5d0: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5D4u;
        goto label_14c5d4;
    }
    ctx->pc = 0x14C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5D4u);
        ctx->pc = 0x14C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5CCu;
        // 0x14c5d0: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5CCu, 0x14C5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C5D4u;
label_14c5d4:
    // 0x14c5d4: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c5d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c5d8:
    // 0x14c5d8: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c5d8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c5dc:
    // 0x14c5dc: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c5dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c5e0:
    // 0x14c5e0: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c5e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c5e4:
    // 0x14c5e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c5e8:
    // 0x14c5e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c5ec:
    // 0x14c5ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x14c5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_14c5f0:
    // 0x14c5f0: 0x320f809  jalr        $t9
label_14c5f4:
    if (ctx->pc == 0x14C5F4u) {
        ctx->pc = 0x14C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F0u;
        // 0x14c5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C5F8u;
        goto label_14c5f8;
    }
    ctx->pc = 0x14C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5F8u);
        ctx->pc = 0x14C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F0u;
        // 0x14c5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5F0u, 0x14C5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C5F8u;
label_14c5f8:
    // 0x14c5f8: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c5f8u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c5fc:
    // 0x14c5fc: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c5fcu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c600:
    // 0x14c600: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c600u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c604:
    // 0x14c604: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c604u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c608:
    // 0x14c608: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14c608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14c60c:
    // 0x14c60c: 0x0  nop
    ctx->pc = 0x14c60cu;
    // NOP
label_14c610:
    // 0x14c610: 0x1653ffe6  bne         $s2, $s3, . + 4 + (-0x1A << 2)
label_14c614:
    if (ctx->pc == 0x14C614u) {
        ctx->pc = 0x14C618u;
        goto label_14c618;
    }
    ctx->pc = 0x14C610u;
    {
        const bool branch_taken_0x14c610 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x14c610) {
            ctx->pc = 0x14C5ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c5ac;
        }
    }
    ctx->pc = 0x14C618u;
label_14c618:
    // 0x14c618: 0x10000019  b           . + 4 + (0x19 << 2)
label_14c61c:
    if (ctx->pc == 0x14C61Cu) {
        ctx->pc = 0x14C620u;
        goto label_14c620;
    }
    ctx->pc = 0x14C618u;
    {
        const bool branch_taken_0x14c618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c618) {
            ctx->pc = 0x14C680u;
            goto label_14c680;
        }
    }
    ctx->pc = 0x14C620u;
label_14c620:
    // 0x14c620: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_14c624:
    // 0x14c624: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x14c624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_14c628:
    // 0x14c628: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c628u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c62c:
    // 0x14c62c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_14c630:
    if (ctx->pc == 0x14C630u) {
        ctx->pc = 0x14C634u;
        goto label_14c634;
    }
    ctx->pc = 0x14C62Cu;
    {
        const bool branch_taken_0x14c62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c62c) {
            ctx->pc = 0x14C680u;
            goto label_14c680;
        }
    }
    ctx->pc = 0x14C634u;
label_14c634:
    // 0x14c634: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14c638:
    // 0x14c638: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14c63c:
    // 0x14c63c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14c640:
    // 0x14c640: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14c644:
    // 0x14c644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c648:
    // 0x14c648: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14c64c:
    // 0x14c64c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14c650:
    // 0x14c650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c654:
    // 0x14c654: 0x10000007  b           . + 4 + (0x7 << 2)
label_14c658:
    if (ctx->pc == 0x14C658u) {
        ctx->pc = 0x14C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C654u;
        // 0x14c658: 0x2439821  addu        $s3, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C65Cu;
        goto label_14c65c;
    }
    ctx->pc = 0x14C654u;
    {
        const bool branch_taken_0x14c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C654u;
        // 0x14c658: 0x2439821  addu        $s3, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c654) {
            ctx->pc = 0x14C674u;
            goto label_14c674;
        }
    }
    ctx->pc = 0x14C65Cu;
label_14c65c:
    // 0x14c65c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c660:
    // 0x14c660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c664:
    // 0x14c664: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c668:
    // 0x14c668: 0x320f809  jalr        $t9
label_14c66c:
    if (ctx->pc == 0x14C66Cu) {
        ctx->pc = 0x14C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C668u;
        // 0x14c66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C670u;
        goto label_14c670;
    }
    ctx->pc = 0x14C668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C670u);
        ctx->pc = 0x14C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C668u;
        // 0x14c66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C668u, 0x14C670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C670u;
label_14c670:
    // 0x14c670: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_14c674:
    // 0x14c674: 0x0  nop
    ctx->pc = 0x14c674u;
    // NOP
label_14c678:
    // 0x14c678: 0x1653fff8  bne         $s2, $s3, . + 4 + (-0x8 << 2)
label_14c67c:
    if (ctx->pc == 0x14C67Cu) {
        ctx->pc = 0x14C680u;
        goto label_14c680;
    }
    ctx->pc = 0x14C678u;
    {
        const bool branch_taken_0x14c678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x14c678) {
            ctx->pc = 0x14C65Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c65c;
        }
    }
    ctx->pc = 0x14C680u;
label_14c680:
    // 0x14c680: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c684:
    // 0x14c684: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x14c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c688:
    // 0x14c688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c68c:
    // 0x14c68c: 0x0  nop
    ctx->pc = 0x14c68cu;
    // NOP
label_14c690:
    // 0x14c690: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14c690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c694:
    // 0x14c694: 0x0  nop
    ctx->pc = 0x14c694u;
    // NOP
label_14c698:
    // 0x14c698: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_14c69c:
    if (ctx->pc == 0x14C69Cu) {
        ctx->pc = 0x14C6A0u;
        goto label_14c6a0;
    }
    ctx->pc = 0x14C698u;
    {
        const bool branch_taken_0x14c698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c698) {
            ctx->pc = 0x14C750u;
            goto label_14c750;
        }
    }
    ctx->pc = 0x14C6A0u;
label_14c6a0:
    // 0x14c6a0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_14c6a4:
    // 0x14c6a4: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14c6a8:
    // 0x14c6a8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c6a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c6ac:
    // 0x14c6ac: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_14c6b0:
    if (ctx->pc == 0x14C6B0u) {
        ctx->pc = 0x14C6B4u;
        goto label_14c6b4;
    }
    ctx->pc = 0x14C6ACu;
    {
        const bool branch_taken_0x14c6ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6ac) {
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C6B4u;
label_14c6b4:
    // 0x14c6b4: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14c6b8:
    // 0x14c6b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14c6bc:
    // 0x14c6bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14c6c0:
    // 0x14c6c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14c6c4:
    // 0x14c6c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c6c8:
    // 0x14c6c8: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14c6cc:
    // 0x14c6cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14c6d0:
    // 0x14c6d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c6d4:
    // 0x14c6d4: 0x10000019  b           . + 4 + (0x19 << 2)
label_14c6d8:
    if (ctx->pc == 0x14C6D8u) {
        ctx->pc = 0x14C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D4u;
        // 0x14c6d8: 0x2239021  addu        $s2, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6DCu;
        goto label_14c6dc;
    }
    ctx->pc = 0x14C6D4u;
    {
        const bool branch_taken_0x14c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6D4u;
        // 0x14c6d8: 0x2239021  addu        $s2, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6d4) {
            ctx->pc = 0x14C73Cu;
            goto label_14c73c;
        }
    }
    ctx->pc = 0x14C6DCu;
label_14c6dc:
    // 0x14c6dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14c6e0:
    // 0x14c6e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c6e4:
    // 0x14c6e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c6e8:
    // 0x14c6e8: 0x320f809  jalr        $t9
label_14c6ec:
    if (ctx->pc == 0x14C6ECu) {
        ctx->pc = 0x14C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6E8u;
        // 0x14c6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C6F0u;
        goto label_14c6f0;
    }
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C6F0u);
        ctx->pc = 0x14C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6E8u;
        // 0x14c6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C6E8u, 0x14C6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C6F0u;
label_14c6f0:
    // 0x14c6f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14c6f4:
    // 0x14c6f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c6f8:
    // 0x14c6f8: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x14c6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_14c6fc:
    // 0x14c6fc: 0x320f809  jalr        $t9
label_14c700:
    if (ctx->pc == 0x14C700u) {
        ctx->pc = 0x14C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6FCu;
        // 0x14c700: 0xc7ac0094  lwc1        $f12, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C704u;
        goto label_14c704;
    }
    ctx->pc = 0x14C6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C704u);
        ctx->pc = 0x14C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6FCu;
        // 0x14c700: 0xc7ac0094  lwc1        $f12, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C6FCu, 0x14C704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C704u;
label_14c704:
    // 0x14c704: 0x4be1e37d  vsqi.xyzw   $vf28, ($vi1++)
    ctx->pc = 0x14c704u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_14c708:
    // 0x14c708: 0x4be1eb7d  vsqi.xyzw   $vf29, ($vi1++)
    ctx->pc = 0x14c708u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_14c70c:
    // 0x14c70c: 0x4be1f37d  vsqi.xyzw   $vf30, ($vi1++)
    ctx->pc = 0x14c70cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_14c710:
    // 0x14c710: 0x4be1fb7d  vsqi.xyzw   $vf31, ($vi1++)
    ctx->pc = 0x14c710u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = _mm_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_14c714:
    // 0x14c714: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14c718:
    // 0x14c718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c71c:
    // 0x14c71c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_14c720:
    // 0x14c720: 0x320f809  jalr        $t9
label_14c724:
    if (ctx->pc == 0x14C724u) {
        ctx->pc = 0x14C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C720u;
        // 0x14c724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C728u;
        goto label_14c728;
    }
    ctx->pc = 0x14C720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C728u);
        ctx->pc = 0x14C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C720u;
        // 0x14c724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C720u, 0x14C728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C728u;
label_14c728:
    // 0x14c728: 0x4bff0b7e  vlqd.xyzw   $vf31, (--$vi1)
    ctx->pc = 0x14c728u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_14c72c:
    // 0x14c72c: 0x4bfe0b7e  vlqd.xyzw   $vf30, (--$vi1)
    ctx->pc = 0x14c72cu;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_14c730:
    // 0x14c730: 0x4bfd0b7e  vlqd.xyzw   $vf29, (--$vi1)
    ctx->pc = 0x14c730u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_14c734:
    // 0x14c734: 0x4bfc0b7e  vlqd.xyzw   $vf28, (--$vi1)
    ctx->pc = 0x14c734u;
    { ctx->vi[1] = (ctx->vi[1] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[1] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_14c738:
    // 0x14c738: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_14c73c:
    // 0x14c73c: 0x0  nop
    ctx->pc = 0x14c73cu;
    // NOP
label_14c740:
    // 0x14c740: 0x1632ffe6  bne         $s1, $s2, . + 4 + (-0x1A << 2)
label_14c744:
    if (ctx->pc == 0x14C744u) {
        ctx->pc = 0x14C748u;
        goto label_14c748;
    }
    ctx->pc = 0x14C740u;
    {
        const bool branch_taken_0x14c740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x14c740) {
            ctx->pc = 0x14C6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c6dc;
        }
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0x10000019  b           . + 4 + (0x19 << 2)
label_14c74c:
    if (ctx->pc == 0x14C74Cu) {
        ctx->pc = 0x14C750u;
        goto label_14c750;
    }
    ctx->pc = 0x14C748u;
    {
        const bool branch_taken_0x14c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c748) {
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C750u;
label_14c750:
    // 0x14c750: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_14c754:
    // 0x14c754: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14c754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_14c758:
    // 0x14c758: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c75c:
    // 0x14c75c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_14c760:
    if (ctx->pc == 0x14C760u) {
        ctx->pc = 0x14C764u;
        goto label_14c764;
    }
    ctx->pc = 0x14C75Cu;
    {
        const bool branch_taken_0x14c75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c75c) {
            ctx->pc = 0x14C7B0u;
            goto label_14c7b0;
        }
    }
    ctx->pc = 0x14C764u;
label_14c764:
    // 0x14c764: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_14c768:
    // 0x14c768: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14c76c:
    // 0x14c76c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14c770:
    // 0x14c770: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14c774:
    // 0x14c774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14c778:
    // 0x14c778: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x14c778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14c77c:
    // 0x14c77c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_14c780:
    // 0x14c780: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14c784:
    // 0x14c784: 0x10000007  b           . + 4 + (0x7 << 2)
label_14c788:
    if (ctx->pc == 0x14C788u) {
        ctx->pc = 0x14C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C784u;
        // 0x14c788: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C78Cu;
        goto label_14c78c;
    }
    ctx->pc = 0x14C784u;
    {
        const bool branch_taken_0x14c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C784u;
        // 0x14c788: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c784) {
            ctx->pc = 0x14C7A4u;
            goto label_14c7a4;
        }
    }
    ctx->pc = 0x14C78Cu;
label_14c78c:
    // 0x14c78c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c790:
    // 0x14c790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14c794:
    // 0x14c794: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_14c798:
    // 0x14c798: 0x320f809  jalr        $t9
label_14c79c:
    if (ctx->pc == 0x14C79Cu) {
        ctx->pc = 0x14C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C798u;
        // 0x14c79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7A0u;
        goto label_14c7a0;
    }
    ctx->pc = 0x14C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C7A0u);
        ctx->pc = 0x14C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C798u;
        // 0x14c79c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C798u, 0x14C7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C7A0u;
label_14c7a0:
    // 0x14c7a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14c7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_14c7a4:
    // 0x14c7a4: 0x0  nop
    ctx->pc = 0x14c7a4u;
    // NOP
label_14c7a8:
    // 0x14c7a8: 0x1611fff8  bne         $s0, $s1, . + 4 + (-0x8 << 2)
label_14c7ac:
    if (ctx->pc == 0x14C7ACu) {
        ctx->pc = 0x14C7B0u;
        goto label_14c7b0;
    }
    ctx->pc = 0x14C7A8u;
    {
        const bool branch_taken_0x14c7a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x14c7a8) {
            ctx->pc = 0x14C78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c78c;
        }
    }
    ctx->pc = 0x14C7B0u;
label_14c7b0:
    // 0x14c7b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14c7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14c7b4:
    // 0x14c7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14c7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c7b8:
    // 0x14c7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c7bc:
    // 0x14c7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c7c0:
    // 0x14c7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14c7c4:
    // 0x14c7c4: 0x3e00008  jr          $ra
label_14c7c8:
    if (ctx->pc == 0x14C7C8u) {
        ctx->pc = 0x14C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7C4u;
        // 0x14c7c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7CCu;
        goto label_fallthrough_0x14c7c4;
    }
    ctx->pc = 0x14C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7C4u;
        // 0x14c7c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c7c4:
    ctx->pc = 0x14C7CCu;
}
