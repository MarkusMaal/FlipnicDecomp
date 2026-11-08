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

// Function: FUN_0017a450
// Address: 0x17a450 - 0x17a948
void FUN_0017a450_0x17a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a450_0x17a450");
#endif

    switch (ctx->pc) {
        case 0x17a450u: goto label_17a450;
        case 0x17a454u: goto label_17a454;
        case 0x17a458u: goto label_17a458;
        case 0x17a45cu: goto label_17a45c;
        case 0x17a460u: goto label_17a460;
        case 0x17a464u: goto label_17a464;
        case 0x17a468u: goto label_17a468;
        case 0x17a46cu: goto label_17a46c;
        case 0x17a470u: goto label_17a470;
        case 0x17a474u: goto label_17a474;
        case 0x17a478u: goto label_17a478;
        case 0x17a47cu: goto label_17a47c;
        case 0x17a480u: goto label_17a480;
        case 0x17a484u: goto label_17a484;
        case 0x17a488u: goto label_17a488;
        case 0x17a48cu: goto label_17a48c;
        case 0x17a490u: goto label_17a490;
        case 0x17a494u: goto label_17a494;
        case 0x17a498u: goto label_17a498;
        case 0x17a49cu: goto label_17a49c;
        case 0x17a4a0u: goto label_17a4a0;
        case 0x17a4a4u: goto label_17a4a4;
        case 0x17a4a8u: goto label_17a4a8;
        case 0x17a4acu: goto label_17a4ac;
        case 0x17a4b0u: goto label_17a4b0;
        case 0x17a4b4u: goto label_17a4b4;
        case 0x17a4b8u: goto label_17a4b8;
        case 0x17a4bcu: goto label_17a4bc;
        case 0x17a4c0u: goto label_17a4c0;
        case 0x17a4c4u: goto label_17a4c4;
        case 0x17a4c8u: goto label_17a4c8;
        case 0x17a4ccu: goto label_17a4cc;
        case 0x17a4d0u: goto label_17a4d0;
        case 0x17a4d4u: goto label_17a4d4;
        case 0x17a4d8u: goto label_17a4d8;
        case 0x17a4dcu: goto label_17a4dc;
        case 0x17a4e0u: goto label_17a4e0;
        case 0x17a4e4u: goto label_17a4e4;
        case 0x17a4e8u: goto label_17a4e8;
        case 0x17a4ecu: goto label_17a4ec;
        case 0x17a4f0u: goto label_17a4f0;
        case 0x17a4f4u: goto label_17a4f4;
        case 0x17a4f8u: goto label_17a4f8;
        case 0x17a4fcu: goto label_17a4fc;
        case 0x17a500u: goto label_17a500;
        case 0x17a504u: goto label_17a504;
        case 0x17a508u: goto label_17a508;
        case 0x17a50cu: goto label_17a50c;
        case 0x17a510u: goto label_17a510;
        case 0x17a514u: goto label_17a514;
        case 0x17a518u: goto label_17a518;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a520u: goto label_17a520;
        case 0x17a524u: goto label_17a524;
        case 0x17a528u: goto label_17a528;
        case 0x17a52cu: goto label_17a52c;
        case 0x17a530u: goto label_17a530;
        case 0x17a534u: goto label_17a534;
        case 0x17a538u: goto label_17a538;
        case 0x17a53cu: goto label_17a53c;
        case 0x17a540u: goto label_17a540;
        case 0x17a544u: goto label_17a544;
        case 0x17a548u: goto label_17a548;
        case 0x17a54cu: goto label_17a54c;
        case 0x17a550u: goto label_17a550;
        case 0x17a554u: goto label_17a554;
        case 0x17a558u: goto label_17a558;
        case 0x17a55cu: goto label_17a55c;
        case 0x17a560u: goto label_17a560;
        case 0x17a564u: goto label_17a564;
        case 0x17a568u: goto label_17a568;
        case 0x17a56cu: goto label_17a56c;
        case 0x17a570u: goto label_17a570;
        case 0x17a574u: goto label_17a574;
        case 0x17a578u: goto label_17a578;
        case 0x17a57cu: goto label_17a57c;
        case 0x17a580u: goto label_17a580;
        case 0x17a584u: goto label_17a584;
        case 0x17a588u: goto label_17a588;
        case 0x17a58cu: goto label_17a58c;
        case 0x17a590u: goto label_17a590;
        case 0x17a594u: goto label_17a594;
        case 0x17a598u: goto label_17a598;
        case 0x17a59cu: goto label_17a59c;
        case 0x17a5a0u: goto label_17a5a0;
        case 0x17a5a4u: goto label_17a5a4;
        case 0x17a5a8u: goto label_17a5a8;
        case 0x17a5acu: goto label_17a5ac;
        case 0x17a5b0u: goto label_17a5b0;
        case 0x17a5b4u: goto label_17a5b4;
        case 0x17a5b8u: goto label_17a5b8;
        case 0x17a5bcu: goto label_17a5bc;
        case 0x17a5c0u: goto label_17a5c0;
        case 0x17a5c4u: goto label_17a5c4;
        case 0x17a5c8u: goto label_17a5c8;
        case 0x17a5ccu: goto label_17a5cc;
        case 0x17a5d0u: goto label_17a5d0;
        case 0x17a5d4u: goto label_17a5d4;
        case 0x17a5d8u: goto label_17a5d8;
        case 0x17a5dcu: goto label_17a5dc;
        case 0x17a5e0u: goto label_17a5e0;
        case 0x17a5e4u: goto label_17a5e4;
        case 0x17a5e8u: goto label_17a5e8;
        case 0x17a5ecu: goto label_17a5ec;
        case 0x17a5f0u: goto label_17a5f0;
        case 0x17a5f4u: goto label_17a5f4;
        case 0x17a5f8u: goto label_17a5f8;
        case 0x17a5fcu: goto label_17a5fc;
        case 0x17a600u: goto label_17a600;
        case 0x17a604u: goto label_17a604;
        case 0x17a608u: goto label_17a608;
        case 0x17a60cu: goto label_17a60c;
        case 0x17a610u: goto label_17a610;
        case 0x17a614u: goto label_17a614;
        case 0x17a618u: goto label_17a618;
        case 0x17a61cu: goto label_17a61c;
        case 0x17a620u: goto label_17a620;
        case 0x17a624u: goto label_17a624;
        case 0x17a628u: goto label_17a628;
        case 0x17a62cu: goto label_17a62c;
        case 0x17a630u: goto label_17a630;
        case 0x17a634u: goto label_17a634;
        case 0x17a638u: goto label_17a638;
        case 0x17a63cu: goto label_17a63c;
        case 0x17a640u: goto label_17a640;
        case 0x17a644u: goto label_17a644;
        case 0x17a648u: goto label_17a648;
        case 0x17a64cu: goto label_17a64c;
        case 0x17a650u: goto label_17a650;
        case 0x17a654u: goto label_17a654;
        case 0x17a658u: goto label_17a658;
        case 0x17a65cu: goto label_17a65c;
        case 0x17a660u: goto label_17a660;
        case 0x17a664u: goto label_17a664;
        case 0x17a668u: goto label_17a668;
        case 0x17a66cu: goto label_17a66c;
        case 0x17a670u: goto label_17a670;
        case 0x17a674u: goto label_17a674;
        case 0x17a678u: goto label_17a678;
        case 0x17a67cu: goto label_17a67c;
        case 0x17a680u: goto label_17a680;
        case 0x17a684u: goto label_17a684;
        case 0x17a688u: goto label_17a688;
        case 0x17a68cu: goto label_17a68c;
        case 0x17a690u: goto label_17a690;
        case 0x17a694u: goto label_17a694;
        case 0x17a698u: goto label_17a698;
        case 0x17a69cu: goto label_17a69c;
        case 0x17a6a0u: goto label_17a6a0;
        case 0x17a6a4u: goto label_17a6a4;
        case 0x17a6a8u: goto label_17a6a8;
        case 0x17a6acu: goto label_17a6ac;
        case 0x17a6b0u: goto label_17a6b0;
        case 0x17a6b4u: goto label_17a6b4;
        case 0x17a6b8u: goto label_17a6b8;
        case 0x17a6bcu: goto label_17a6bc;
        case 0x17a6c0u: goto label_17a6c0;
        case 0x17a6c4u: goto label_17a6c4;
        case 0x17a6c8u: goto label_17a6c8;
        case 0x17a6ccu: goto label_17a6cc;
        case 0x17a6d0u: goto label_17a6d0;
        case 0x17a6d4u: goto label_17a6d4;
        case 0x17a6d8u: goto label_17a6d8;
        case 0x17a6dcu: goto label_17a6dc;
        case 0x17a6e0u: goto label_17a6e0;
        case 0x17a6e4u: goto label_17a6e4;
        case 0x17a6e8u: goto label_17a6e8;
        case 0x17a6ecu: goto label_17a6ec;
        case 0x17a6f0u: goto label_17a6f0;
        case 0x17a6f4u: goto label_17a6f4;
        case 0x17a6f8u: goto label_17a6f8;
        case 0x17a6fcu: goto label_17a6fc;
        case 0x17a700u: goto label_17a700;
        case 0x17a704u: goto label_17a704;
        case 0x17a708u: goto label_17a708;
        case 0x17a70cu: goto label_17a70c;
        case 0x17a710u: goto label_17a710;
        case 0x17a714u: goto label_17a714;
        case 0x17a718u: goto label_17a718;
        case 0x17a71cu: goto label_17a71c;
        case 0x17a720u: goto label_17a720;
        case 0x17a724u: goto label_17a724;
        case 0x17a728u: goto label_17a728;
        case 0x17a72cu: goto label_17a72c;
        case 0x17a730u: goto label_17a730;
        case 0x17a734u: goto label_17a734;
        case 0x17a738u: goto label_17a738;
        case 0x17a73cu: goto label_17a73c;
        case 0x17a740u: goto label_17a740;
        case 0x17a744u: goto label_17a744;
        case 0x17a748u: goto label_17a748;
        case 0x17a74cu: goto label_17a74c;
        case 0x17a750u: goto label_17a750;
        case 0x17a754u: goto label_17a754;
        case 0x17a758u: goto label_17a758;
        case 0x17a75cu: goto label_17a75c;
        case 0x17a760u: goto label_17a760;
        case 0x17a764u: goto label_17a764;
        case 0x17a768u: goto label_17a768;
        case 0x17a76cu: goto label_17a76c;
        case 0x17a770u: goto label_17a770;
        case 0x17a774u: goto label_17a774;
        case 0x17a778u: goto label_17a778;
        case 0x17a77cu: goto label_17a77c;
        case 0x17a780u: goto label_17a780;
        case 0x17a784u: goto label_17a784;
        case 0x17a788u: goto label_17a788;
        case 0x17a78cu: goto label_17a78c;
        case 0x17a790u: goto label_17a790;
        case 0x17a794u: goto label_17a794;
        case 0x17a798u: goto label_17a798;
        case 0x17a79cu: goto label_17a79c;
        case 0x17a7a0u: goto label_17a7a0;
        case 0x17a7a4u: goto label_17a7a4;
        case 0x17a7a8u: goto label_17a7a8;
        case 0x17a7acu: goto label_17a7ac;
        case 0x17a7b0u: goto label_17a7b0;
        case 0x17a7b4u: goto label_17a7b4;
        case 0x17a7b8u: goto label_17a7b8;
        case 0x17a7bcu: goto label_17a7bc;
        case 0x17a7c0u: goto label_17a7c0;
        case 0x17a7c4u: goto label_17a7c4;
        case 0x17a7c8u: goto label_17a7c8;
        case 0x17a7ccu: goto label_17a7cc;
        case 0x17a7d0u: goto label_17a7d0;
        case 0x17a7d4u: goto label_17a7d4;
        case 0x17a7d8u: goto label_17a7d8;
        case 0x17a7dcu: goto label_17a7dc;
        case 0x17a7e0u: goto label_17a7e0;
        case 0x17a7e4u: goto label_17a7e4;
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a7ecu: goto label_17a7ec;
        case 0x17a7f0u: goto label_17a7f0;
        case 0x17a7f4u: goto label_17a7f4;
        case 0x17a7f8u: goto label_17a7f8;
        case 0x17a7fcu: goto label_17a7fc;
        case 0x17a800u: goto label_17a800;
        case 0x17a804u: goto label_17a804;
        case 0x17a808u: goto label_17a808;
        case 0x17a80cu: goto label_17a80c;
        case 0x17a810u: goto label_17a810;
        case 0x17a814u: goto label_17a814;
        case 0x17a818u: goto label_17a818;
        case 0x17a81cu: goto label_17a81c;
        case 0x17a820u: goto label_17a820;
        case 0x17a824u: goto label_17a824;
        case 0x17a828u: goto label_17a828;
        case 0x17a82cu: goto label_17a82c;
        case 0x17a830u: goto label_17a830;
        case 0x17a834u: goto label_17a834;
        case 0x17a838u: goto label_17a838;
        case 0x17a83cu: goto label_17a83c;
        case 0x17a840u: goto label_17a840;
        case 0x17a844u: goto label_17a844;
        case 0x17a848u: goto label_17a848;
        case 0x17a84cu: goto label_17a84c;
        case 0x17a850u: goto label_17a850;
        case 0x17a854u: goto label_17a854;
        case 0x17a858u: goto label_17a858;
        case 0x17a85cu: goto label_17a85c;
        case 0x17a860u: goto label_17a860;
        case 0x17a864u: goto label_17a864;
        case 0x17a868u: goto label_17a868;
        case 0x17a86cu: goto label_17a86c;
        case 0x17a870u: goto label_17a870;
        case 0x17a874u: goto label_17a874;
        case 0x17a878u: goto label_17a878;
        case 0x17a87cu: goto label_17a87c;
        case 0x17a880u: goto label_17a880;
        case 0x17a884u: goto label_17a884;
        case 0x17a888u: goto label_17a888;
        case 0x17a88cu: goto label_17a88c;
        case 0x17a890u: goto label_17a890;
        case 0x17a894u: goto label_17a894;
        case 0x17a898u: goto label_17a898;
        case 0x17a89cu: goto label_17a89c;
        case 0x17a8a0u: goto label_17a8a0;
        case 0x17a8a4u: goto label_17a8a4;
        case 0x17a8a8u: goto label_17a8a8;
        case 0x17a8acu: goto label_17a8ac;
        case 0x17a8b0u: goto label_17a8b0;
        case 0x17a8b4u: goto label_17a8b4;
        case 0x17a8b8u: goto label_17a8b8;
        case 0x17a8bcu: goto label_17a8bc;
        case 0x17a8c0u: goto label_17a8c0;
        case 0x17a8c4u: goto label_17a8c4;
        case 0x17a8c8u: goto label_17a8c8;
        case 0x17a8ccu: goto label_17a8cc;
        case 0x17a8d0u: goto label_17a8d0;
        case 0x17a8d4u: goto label_17a8d4;
        case 0x17a8d8u: goto label_17a8d8;
        case 0x17a8dcu: goto label_17a8dc;
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8e4u: goto label_17a8e4;
        case 0x17a8e8u: goto label_17a8e8;
        case 0x17a8ecu: goto label_17a8ec;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a8f4u: goto label_17a8f4;
        case 0x17a8f8u: goto label_17a8f8;
        case 0x17a8fcu: goto label_17a8fc;
        case 0x17a900u: goto label_17a900;
        case 0x17a904u: goto label_17a904;
        case 0x17a908u: goto label_17a908;
        case 0x17a90cu: goto label_17a90c;
        case 0x17a910u: goto label_17a910;
        case 0x17a914u: goto label_17a914;
        case 0x17a918u: goto label_17a918;
        case 0x17a91cu: goto label_17a91c;
        case 0x17a920u: goto label_17a920;
        case 0x17a924u: goto label_17a924;
        case 0x17a928u: goto label_17a928;
        case 0x17a92cu: goto label_17a92c;
        case 0x17a930u: goto label_17a930;
        case 0x17a934u: goto label_17a934;
        case 0x17a938u: goto label_17a938;
        case 0x17a93cu: goto label_17a93c;
        case 0x17a940u: goto label_17a940;
        case 0x17a944u: goto label_17a944;
        default: break;
    }

    ctx->pc = 0x17a450u;

label_17a450:
    // 0x17a450: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x17a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_17a454:
    // 0x17a454: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17a458:
    // 0x17a458: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17a45c:
    // 0x17a45c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17a460:
    // 0x17a460: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a464:
    // 0x17a464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a468:
    // 0x17a468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a46c:
    // 0x17a46c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x17a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a470:
    // 0x17a470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a474:
    // 0x17a474: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x17a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
label_17a478:
    // 0x17a478: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_17a47c:
    if (ctx->pc == 0x17A47Cu) {
        ctx->pc = 0x17A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A478u;
        // 0x17a47c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A480u;
        goto label_17a480;
    }
    ctx->pc = 0x17A478u;
    {
        const bool branch_taken_0x17a478 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A478u;
        // 0x17a47c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a478) {
            ctx->pc = 0x17A488u;
            goto label_17a488;
        }
    }
    ctx->pc = 0x17A480u;
label_17a480:
    // 0x17a480: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a484:
    if (ctx->pc == 0x17A484u) {
        ctx->pc = 0x17A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A480u;
        // 0x17a484: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A488u;
        goto label_17a488;
    }
    ctx->pc = 0x17A480u;
    {
        const bool branch_taken_0x17a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A480u;
        // 0x17a484: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a480) {
            ctx->pc = 0x17A4A0u;
            goto label_17a4a0;
        }
    }
    ctx->pc = 0x17A488u;
label_17a488:
    // 0x17a488: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17a488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17a48c:
    // 0x17a48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17a490:
    // 0x17a490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17a494:
    // 0x17a494: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a498:
    // 0x17a498: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_17a49c:
    // 0x17a49c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x17a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_17a4a0:
    // 0x17a4a0: 0xc46401c0  lwc1        $f4, 0x1C0($v1)
    ctx->pc = 0x17a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_17a4a4:
    // 0x17a4a4: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
label_17a4a8:
    // 0x17a4a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17a4ac:
    // 0x17a4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a4b0:
    // 0x17a4b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17a4b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a4b4:
    // 0x17a4b4: 0x248476c0  addiu       $a0, $a0, 0x76C0
    ctx->pc = 0x17a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30400));
label_17a4b8:
    // 0x17a4b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17a4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17a4bc:
    // 0x17a4bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17a4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17a4c0:
    // 0x17a4c0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_17a4c4:
    if (ctx->pc == 0x17A4C4u) {
        ctx->pc = 0x17A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4C0u;
        // 0x17a4c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4C8u;
        goto label_17a4c8;
    }
    ctx->pc = 0x17A4C0u;
    {
        const bool branch_taken_0x17a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4C0u;
        // 0x17a4c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4c0) {
            ctx->pc = 0x17A5BCu;
            goto label_17a5bc;
        }
    }
    ctx->pc = 0x17A4C8u;
label_17a4c8:
    // 0x17a4c8: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a4cc:
    // 0x17a4cc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x17a4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17a4d0:
    // 0x17a4d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17a4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17a4d4:
    // 0x17a4d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17a4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17a4d8:
    // 0x17a4d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_17a4dc:
    // 0x17a4dc: 0x8cc92cd8  lw          $t1, 0x2CD8($a2)
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_17a4e0:
    // 0x17a4e0: 0xa123007b  sb          $v1, 0x7B($t1)
    ctx->pc = 0x17a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 123), (uint8_t)GPR_U32(ctx, 3));
label_17a4e4:
    // 0x17a4e4: 0x8f8a85f4  lw          $t2, -0x7A0C($gp)
    ctx->pc = 0x17a4e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a4e8:
    // 0x17a4e8: 0x8d482cd0  lw          $t0, 0x2CD0($t2)
    ctx->pc = 0x17a4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11472)));
label_17a4ec:
    // 0x17a4ec: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_17a4f0:
    if (ctx->pc == 0x17A4F0u) {
        ctx->pc = 0x17A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4ECu;
        // 0x17a4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4F4u;
        goto label_17a4f4;
    }
    ctx->pc = 0x17A4ECu;
    {
        const bool branch_taken_0x17a4ec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x17A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4ECu;
        // 0x17a4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4ec) {
            ctx->pc = 0x17A4FCu;
            goto label_17a4fc;
        }
    }
    ctx->pc = 0x17A4F4u;
label_17a4f4:
    // 0x17a4f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_17a4f8:
    if (ctx->pc == 0x17A4F8u) {
        ctx->pc = 0x17A4FCu;
        goto label_17a4fc;
    }
    ctx->pc = 0x17A4F4u;
    {
        const bool branch_taken_0x17a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4f4) {
            ctx->pc = 0x17A51Cu;
            goto label_17a51c;
        }
    }
    ctx->pc = 0x17A4FCu;
label_17a4fc:
    // 0x17a4fc: 0x0  nop
    ctx->pc = 0x17a4fcu;
    // NOP
label_17a500:
    // 0x17a500: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x17a500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_17a504:
    // 0x17a504: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x17a504u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_17a508:
    // 0x17a508: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17a50c:
    // 0x17a50c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17a50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_17a510:
    // 0x17a510: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x17a510u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_17a514:
    // 0x17a514: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x17a514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_17a518:
    // 0x17a518: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x17a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_17a51c:
    // 0x17a51c: 0x0  nop
    ctx->pc = 0x17a51cu;
    // NOP
label_17a520:
    // 0x17a520: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x17a520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17a524:
    // 0x17a524: 0xc5210064  lwc1        $f1, 0x64($t1)
    ctx->pc = 0x17a524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a528:
    // 0x17a528: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x17a528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_17a52c:
    // 0x17a52c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x17a52cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_17a530:
    // 0x17a530: 0xe52101c4  swc1        $f1, 0x1C4($t1)
    ctx->pc = 0x17a530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 452), bits); }
label_17a534:
    // 0x17a534: 0x8f8a85f4  lw          $t2, -0x7A0C($gp)
    ctx->pc = 0x17a534u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a538:
    // 0x17a538: 0x8d482cd0  lw          $t0, 0x2CD0($t2)
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11472)));
label_17a53c:
    // 0x17a53c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_17a540:
    if (ctx->pc == 0x17A540u) {
        ctx->pc = 0x17A544u;
        goto label_17a544;
    }
    ctx->pc = 0x17A53Cu;
    {
        const bool branch_taken_0x17a53c = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x17a53c) {
            ctx->pc = 0x17A54Cu;
            goto label_17a54c;
        }
    }
    ctx->pc = 0x17A544u;
label_17a544:
    // 0x17a544: 0x10000009  b           . + 4 + (0x9 << 2)
label_17a548:
    if (ctx->pc == 0x17A548u) {
        ctx->pc = 0x17A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A544u;
        // 0x17a548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A54Cu;
        goto label_17a54c;
    }
    ctx->pc = 0x17A544u;
    {
        const bool branch_taken_0x17a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A544u;
        // 0x17a548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a544) {
            ctx->pc = 0x17A56Cu;
            goto label_17a56c;
        }
    }
    ctx->pc = 0x17A54Cu;
label_17a54c:
    // 0x17a54c: 0x0  nop
    ctx->pc = 0x17a54cu;
    // NOP
label_17a550:
    // 0x17a550: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x17a550u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_17a554:
    // 0x17a554: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x17a554u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_17a558:
    // 0x17a558: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x17a558u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17a55c:
    // 0x17a55c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x17a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_17a560:
    // 0x17a560: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x17a560u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_17a564:
    // 0x17a564: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x17a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_17a568:
    // 0x17a568: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_17a56c:
    // 0x17a56c: 0x0  nop
    ctx->pc = 0x17a56cu;
    // NOP
label_17a570:
    // 0x17a570: 0x84c601e8  lh          $a2, 0x1E8($a2)
    ctx->pc = 0x17a570u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 488)));
label_17a574:
    // 0x17a574: 0x14c70003  bne         $a2, $a3, . + 4 + (0x3 << 2)
label_17a578:
    if (ctx->pc == 0x17A578u) {
        ctx->pc = 0x17A57Cu;
        goto label_17a57c;
    }
    ctx->pc = 0x17A574u;
    {
        const bool branch_taken_0x17a574 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x17a574) {
            ctx->pc = 0x17A584u;
            goto label_17a584;
        }
    }
    ctx->pc = 0x17A57Cu;
label_17a57c:
    // 0x17a57c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17a580:
    if (ctx->pc == 0x17A580u) {
        ctx->pc = 0x17A584u;
        goto label_17a584;
    }
    ctx->pc = 0x17A57Cu;
    {
        const bool branch_taken_0x17a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a57c) {
            ctx->pc = 0x17A588u;
            goto label_17a588;
        }
    }
    ctx->pc = 0x17A584u;
label_17a584:
    // 0x17a584: 0x0  nop
    ctx->pc = 0x17a584u;
    // NOP
label_17a588:
    // 0x17a588: 0xc52101c4  lwc1        $f1, 0x1C4($t1)
    ctx->pc = 0x17a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a58c:
    // 0x17a58c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17a58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a590:
    // 0x17a590: 0x0  nop
    ctx->pc = 0x17a590u;
    // NOP
label_17a594:
    // 0x17a594: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17a598:
    if (ctx->pc == 0x17A598u) {
        ctx->pc = 0x17A59Cu;
        goto label_17a59c;
    }
    ctx->pc = 0x17A594u;
    {
        const bool branch_taken_0x17a594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a594) {
            ctx->pc = 0x17A5A0u;
            goto label_17a5a0;
        }
    }
    ctx->pc = 0x17A59Cu;
label_17a59c:
    // 0x17a59c: 0xe52201c4  swc1        $f2, 0x1C4($t1)
    ctx->pc = 0x17a59cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 452), bits); }
label_17a5a0:
    // 0x17a5a0: 0xc52101c4  lwc1        $f1, 0x1C4($t1)
    ctx->pc = 0x17a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a5a4:
    // 0x17a5a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17a5a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a5a8:
    // 0x17a5a8: 0x0  nop
    ctx->pc = 0x17a5a8u;
    // NOP
label_17a5ac:
    // 0x17a5ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17a5b0:
    if (ctx->pc == 0x17A5B0u) {
        ctx->pc = 0x17A5B4u;
        goto label_17a5b4;
    }
    ctx->pc = 0x17A5ACu;
    {
        const bool branch_taken_0x17a5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a5ac) {
            ctx->pc = 0x17A5B8u;
            goto label_17a5b8;
        }
    }
    ctx->pc = 0x17A5B4u;
label_17a5b4:
    // 0x17a5b4: 0xe52001c4  swc1        $f0, 0x1C4($t1)
    ctx->pc = 0x17a5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 452), bits); }
label_17a5b8:
    // 0x17a5b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17a5bc:
    // 0x17a5bc: 0x0  nop
    ctx->pc = 0x17a5bcu;
    // NOP
label_17a5c0:
    // 0x17a5c0: 0x28a60004  slti        $a2, $a1, 0x4
    ctx->pc = 0x17a5c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_17a5c4:
    // 0x17a5c4: 0x14c0ffc0  bnez        $a2, . + 4 + (-0x40 << 2)
label_17a5c8:
    if (ctx->pc == 0x17A5C8u) {
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5CCu;
        goto label_17a5cc;
    }
    ctx->pc = 0x17A5C4u;
    {
        const bool branch_taken_0x17a5c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5c4) {
            ctx->pc = 0x17A4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a4c8;
        }
    }
    ctx->pc = 0x17A5CCu;
label_17a5cc:
    // 0x17a5cc: 0x8f838620  lw          $v1, -0x79E0($gp)
    ctx->pc = 0x17a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
label_17a5d0:
    // 0x17a5d0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a5d4:
    // 0x17a5d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17a5d8:
    // 0x17a5d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17a5dc:
    // 0x17a5dc: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_17a5e0:
    // 0x17a5e0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x17a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_17a5e4:
    // 0x17a5e4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_17a5e8:
    if (ctx->pc == 0x17A5E8u) {
        ctx->pc = 0x17A5ECu;
        goto label_17a5ec;
    }
    ctx->pc = 0x17A5E4u;
    {
        const bool branch_taken_0x17a5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5e4) {
            ctx->pc = 0x17A640u;
            goto label_17a640;
        }
    }
    ctx->pc = 0x17A5ECu;
label_17a5ec:
    // 0x17a5ec: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x17a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_17a5f0:
    // 0x17a5f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_17a5f4:
    if (ctx->pc == 0x17A5F4u) {
        ctx->pc = 0x17A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F0u;
        // 0x17a5f4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5F8u;
        goto label_17a5f8;
    }
    ctx->pc = 0x17A5F0u;
    {
        const bool branch_taken_0x17a5f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F0u;
        // 0x17a5f4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5f0) {
            ctx->pc = 0x17A600u;
            goto label_17a600;
        }
    }
    ctx->pc = 0x17A5F8u;
label_17a5f8:
    // 0x17a5f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a5fc:
    if (ctx->pc == 0x17A5FCu) {
        ctx->pc = 0x17A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F8u;
        // 0x17a5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A600u;
        goto label_17a600;
    }
    ctx->pc = 0x17A5F8u;
    {
        const bool branch_taken_0x17a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F8u;
        // 0x17a5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5f8) {
            ctx->pc = 0x17A618u;
            goto label_17a618;
        }
    }
    ctx->pc = 0x17A600u;
label_17a600:
    // 0x17a600: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17a600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a604:
    // 0x17a604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a608:
    // 0x17a608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a60c:
    // 0x17a60c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a610:
    // 0x17a610: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17a614:
    // 0x17a614: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_17a618:
    // 0x17a618: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x17a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_17a61c:
    // 0x17a61c: 0xc07d392  jal         func_1F4E48
label_17a620:
    if (ctx->pc == 0x17A620u) {
        ctx->pc = 0x17A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A61Cu;
        // 0x17a620: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A624u;
        goto label_17a624;
    }
    ctx->pc = 0x17A61Cu;
    SET_GPR_U32(ctx, 31, 0x17A624u);
    ctx->pc = 0x17A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A61Cu;
    // 0x17a620: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x17A61Cu, 0x17A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A624u;
label_17a624:
    // 0x17a624: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x17a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_17a628:
    // 0x17a628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17a62c:
    // 0x17a62c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a630:
    // 0x17a630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a634:
    // 0x17a634: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a638:
    // 0x17a638: 0xc0465f0  jal         func_1197C0
label_17a63c:
    if (ctx->pc == 0x17A63Cu) {
        ctx->pc = 0x17A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A638u;
        // 0x17a63c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A640u;
        goto label_17a640;
    }
    ctx->pc = 0x17A638u;
    SET_GPR_U32(ctx, 31, 0x17A640u);
    ctx->pc = 0x17A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A638u;
    // 0x17a63c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17A638u, 0x17A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A640u;
label_17a640:
    // 0x17a640: 0x920301d3  lbu         $v1, 0x1D3($s0)
    ctx->pc = 0x17a640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 467)));
label_17a644:
    // 0x17a644: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
label_17a648:
    if (ctx->pc == 0x17A648u) {
        ctx->pc = 0x17A64Cu;
        goto label_17a64c;
    }
    ctx->pc = 0x17A644u;
    {
        const bool branch_taken_0x17a644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a644) {
            ctx->pc = 0x17A928u;
            goto label_17a928;
        }
    }
    ctx->pc = 0x17A64Cu;
label_17a64c:
    // 0x17a64c: 0x8f83862c  lw          $v1, -0x79D4($gp)
    ctx->pc = 0x17a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936108)));
label_17a650:
    // 0x17a650: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a654:
    // 0x17a654: 0xac43602c  sw          $v1, 0x602C($v0)
    ctx->pc = 0x17a654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24620), GPR_U32(ctx, 3));
label_17a658:
    // 0x17a658: 0x8f828620  lw          $v0, -0x79E0($gp)
    ctx->pc = 0x17a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
label_17a65c:
    // 0x17a65c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a660:
    // 0x17a660: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a664:
    // 0x17a664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a668:
    // 0x17a668: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17a66c:
    // 0x17a66c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x17a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_17a670:
    // 0x17a670: 0xac624028  sw          $v0, 0x4028($v1)
    ctx->pc = 0x17a670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16424), GPR_U32(ctx, 2));
label_17a674:
    // 0x17a674: 0xc05ca6c  jal         func_1729B0
label_17a678:
    if (ctx->pc == 0x17A678u) {
        ctx->pc = 0x17A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A674u;
        // 0x17a678: 0x8f848630  lw          $a0, -0x79D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A67Cu;
        goto label_17a67c;
    }
    ctx->pc = 0x17A674u;
    SET_GPR_U32(ctx, 31, 0x17A67Cu);
    ctx->pc = 0x17A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A674u;
    // 0x17a678: 0x8f848630  lw          $a0, -0x79D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1729B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1729B0u, 0x17A674u, 0x17A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A67Cu;
label_17a67c:
    // 0x17a67c: 0xae020424  sw          $v0, 0x424($s0)
    ctx->pc = 0x17a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 2));
label_17a680:
    // 0x17a680: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_17a684:
    // 0x17a684: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a688:
    // 0x17a688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a68c:
    // 0x17a68c: 0xc6000400  lwc1        $f0, 0x400($s0)
    ctx->pc = 0x17a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a690:
    // 0x17a690: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x17a690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_17a694:
    // 0x17a694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17a698:
    // 0x17a698: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17a698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17a69c:
    // 0x17a69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17a69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a6a0:
    // 0x17a6a0: 0xc4826018  lwc1        $f2, 0x6018($a0)
    ctx->pc = 0x17a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a6a4:
    // 0x17a6a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17a6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_17a6a8:
    // 0x17a6a8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17a6a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_17a6ac:
    // 0x17a6ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x17a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_17a6b0:
    // 0x17a6b0: 0xc6000404  lwc1        $f0, 0x404($s0)
    ctx->pc = 0x17a6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a6b4:
    // 0x17a6b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17a6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17a6b8:
    // 0x17a6b8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x17a6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_17a6bc:
    // 0x17a6bc: 0xc6000408  lwc1        $f0, 0x408($s0)
    ctx->pc = 0x17a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a6c0:
    // 0x17a6c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17a6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17a6c4:
    // 0x17a6c4: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x17a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_17a6c8:
    // 0x17a6c8: 0x1000005d  b           . + 4 + (0x5D << 2)
label_17a6cc:
    if (ctx->pc == 0x17A6CCu) {
        ctx->pc = 0x17A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C8u;
        // 0x17a6cc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6D0u;
        goto label_17a6d0;
    }
    ctx->pc = 0x17A6C8u;
    {
        const bool branch_taken_0x17a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C8u;
        // 0x17a6cc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6c8) {
            ctx->pc = 0x17A840u;
            goto label_17a840;
        }
    }
    ctx->pc = 0x17A6D0u;
label_17a6d0:
    // 0x17a6d0: 0x8f848628  lw          $a0, -0x79D8($gp)
    ctx->pc = 0x17a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_17a6d4:
    // 0x17a6d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a6d8:
    // 0x17a6d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a6dc:
    // 0x17a6dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a6e0:
    // 0x17a6e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_17a6e4:
    // 0x17a6e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17a6e8:
    // 0x17a6e8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a6ec:
    // 0x17a6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a6f0:
    // 0x17a6f0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x17a6f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a6f4:
    // 0x17a6f4: 0xc04c6d8  jal         func_131B60
label_17a6f8:
    if (ctx->pc == 0x17A6F8u) {
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F4u;
        // 0x17a6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6FCu;
        goto label_17a6fc;
    }
    ctx->pc = 0x17A6F4u;
    SET_GPR_U32(ctx, 31, 0x17A6FCu);
    ctx->pc = 0x17A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6F4u;
    // 0x17a6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x17A6F4u, 0x17A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6FCu;
label_17a6fc:
    // 0x17a6fc: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a700:
    // 0x17a700: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a704:
    // 0x17a704: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a708:
    // 0x17a708: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17a70c:
    // 0x17a70c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a710:
    // 0x17a710: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17a714:
    // 0x17a714: 0xc07d38e  jal         func_1F4E38
label_17a718:
    if (ctx->pc == 0x17A718u) {
        ctx->pc = 0x17A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A714u;
        // 0x17a718: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A71Cu;
        goto label_17a71c;
    }
    ctx->pc = 0x17A714u;
    SET_GPR_U32(ctx, 31, 0x17A71Cu);
    ctx->pc = 0x17A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A714u;
    // 0x17a718: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17A714u, 0x17A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A71Cu;
label_17a71c:
    // 0x17a71c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a720:
    // 0x17a720: 0xc05c550  jal         func_171540
label_17a724:
    if (ctx->pc == 0x17A724u) {
        ctx->pc = 0x17A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A720u;
        // 0x17a724: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A728u;
        goto label_17a728;
    }
    ctx->pc = 0x17A720u;
    SET_GPR_U32(ctx, 31, 0x17A728u);
    ctx->pc = 0x17A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A720u;
    // 0x17a724: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x17A720u, 0x17A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A728u;
label_17a728:
    // 0x17a728: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a72c:
    // 0x17a72c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a730:
    // 0x17a730: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x17a730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_17a734:
    // 0x17a734: 0x320f809  jalr        $t9
label_17a738:
    if (ctx->pc == 0x17A738u) {
        ctx->pc = 0x17A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A734u;
        // 0x17a738: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A73Cu;
        goto label_17a73c;
    }
    ctx->pc = 0x17A734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A73Cu);
        ctx->pc = 0x17A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A734u;
        // 0x17a738: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A734u, 0x17A73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A73Cu;
label_17a73c:
    // 0x17a73c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17a740:
    // 0x17a740: 0xc04c6dc  jal         func_131B70
label_17a744:
    if (ctx->pc == 0x17A744u) {
        ctx->pc = 0x17A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A740u;
        // 0x17a744: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A748u;
        goto label_17a748;
    }
    ctx->pc = 0x17A740u;
    SET_GPR_U32(ctx, 31, 0x17A748u);
    ctx->pc = 0x17A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A740u;
    // 0x17a744: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x17A740u, 0x17A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A748u;
label_17a748:
    // 0x17a748: 0x8f928630  lw          $s2, -0x79D0($gp)
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a74c:
    // 0x17a74c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a750:
    // 0x17a750: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a754:
    // 0x17a754: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17a758:
    // 0x17a758: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a75c:
    // 0x17a75c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_17a760:
    // 0x17a760: 0xc07d38e  jal         func_1F4E38
label_17a764:
    if (ctx->pc == 0x17A764u) {
        ctx->pc = 0x17A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A760u;
        // 0x17a764: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A768u;
        goto label_17a768;
    }
    ctx->pc = 0x17A760u;
    SET_GPR_U32(ctx, 31, 0x17A768u);
    ctx->pc = 0x17A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A760u;
    // 0x17a764: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17A760u, 0x17A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A768u;
label_17a768:
    // 0x17a768: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x17a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17a76c:
    // 0x17a76c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17a76cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17a770:
    // 0x17a770: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x17a770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_17a774:
    // 0x17a774: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x17a774u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_17a778:
    // 0x17a778: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x17a778u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_17a77c:
    // 0x17a77c: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x17a77cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_17a780:
    // 0x17a780: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x17a780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17a784:
    // 0x17a784: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x17a784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17a788:
    // 0x17a788: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x17a788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17a78c:
    // 0x17a78c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x17a78cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17a790:
    // 0x17a790: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x17a790u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_17a794:
    // 0x17a794: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x17a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a798:
    // 0x17a798: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a79c:
    // 0x17a79c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x17a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a7a0:
    // 0x17a7a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a7a4:
    // 0x17a7a4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x17a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a7a8:
    // 0x17a7a8: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a7ac:
    // 0x17a7ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a7b0:
    // 0x17a7b0: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x17a7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_17a7b4:
    // 0x17a7b4: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x17a7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_17a7b8:
    // 0x17a7b8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17a7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_17a7bc:
    // 0x17a7bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a7c0:
    // 0x17a7c0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_17a7c4:
    // 0x17a7c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17a7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17a7c8:
    // 0x17a7c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17a7cc:
    if (ctx->pc == 0x17A7CCu) {
        ctx->pc = 0x17A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7C8u;
        // 0x17a7cc: 0xac6000a4  sw          $zero, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7D0u;
        goto label_17a7d0;
    }
    ctx->pc = 0x17A7C8u;
    {
        const bool branch_taken_0x17a7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7C8u;
        // 0x17a7cc: 0xac6000a4  sw          $zero, 0xA4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7c8) {
            ctx->pc = 0x17A7ECu;
            goto label_17a7ec;
        }
    }
    ctx->pc = 0x17A7D0u;
label_17a7d0:
    // 0x17a7d0: 0x8e030410  lw          $v1, 0x410($s0)
    ctx->pc = 0x17a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_17a7d4:
    // 0x17a7d4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a7d8:
    // 0x17a7d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a7dc:
    // 0x17a7dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a7e0:
    // 0x17a7e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a7e4:
    // 0x17a7e4: 0xc0465f0  jal         func_1197C0
label_17a7e8:
    if (ctx->pc == 0x17A7E8u) {
        ctx->pc = 0x17A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E4u;
        // 0x17a7e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7ECu;
        goto label_17a7ec;
    }
    ctx->pc = 0x17A7E4u;
    SET_GPR_U32(ctx, 31, 0x17A7ECu);
    ctx->pc = 0x17A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7E4u;
    // 0x17a7e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17A7E4u, 0x17A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7ECu;
label_17a7ec:
    // 0x17a7ec: 0x0  nop
    ctx->pc = 0x17a7ecu;
    // NOP
label_17a7f0:
    // 0x17a7f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a7f4:
    // 0x17a7f4: 0xc04c6f0  jal         func_131BC0
label_17a7f8:
    if (ctx->pc == 0x17A7F8u) {
        ctx->pc = 0x17A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7F4u;
        // 0x17a7f8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7FCu;
        goto label_17a7fc;
    }
    ctx->pc = 0x17A7F4u;
    SET_GPR_U32(ctx, 31, 0x17A7FCu);
    ctx->pc = 0x17A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A7F4u;
    // 0x17a7f8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x17A7F4u, 0x17A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7FCu;
label_17a7fc:
    // 0x17a7fc: 0x8f838630  lw          $v1, -0x79D0($gp)
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_17a800:
    // 0x17a800: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a804:
    // 0x17a804: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x17a804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a808:
    // 0x17a808: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17a80c:
    // 0x17a80c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17a810:
    // 0x17a810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a814:
    // 0x17a814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a818:
    // 0x17a818: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x17a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_17a81c:
    // 0x17a81c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17a81cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17a820:
    // 0x17a820: 0x320f809  jalr        $t9
label_17a824:
    if (ctx->pc == 0x17A824u) {
        ctx->pc = 0x17A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A820u;
        // 0x17a824: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A828u;
        goto label_17a828;
    }
    ctx->pc = 0x17A820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A828u);
        ctx->pc = 0x17A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A820u;
        // 0x17a824: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A820u, 0x17A828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A828u;
label_17a828:
    // 0x17a828: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x17a828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a82c:
    // 0x17a82c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a830:
    // 0x17a830: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_17a834:
    // 0x17a834: 0x320f809  jalr        $t9
label_17a838:
    if (ctx->pc == 0x17A838u) {
        ctx->pc = 0x17A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A834u;
        // 0x17a838: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A83Cu;
        goto label_17a83c;
    }
    ctx->pc = 0x17A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A83Cu);
        ctx->pc = 0x17A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A834u;
        // 0x17a838: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A834u, 0x17A83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A83Cu;
label_17a83c:
    // 0x17a83c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a840:
    // 0x17a840: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x17a840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_17a844:
    // 0x17a844: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
label_17a848:
    if (ctx->pc == 0x17A848u) {
        ctx->pc = 0x17A84Cu;
        goto label_17a84c;
    }
    ctx->pc = 0x17A844u;
    {
        const bool branch_taken_0x17a844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a844) {
            ctx->pc = 0x17A6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a6d0;
        }
    }
    ctx->pc = 0x17A84Cu;
label_17a84c:
    // 0x17a84c: 0x8e030424  lw          $v1, 0x424($s0)
    ctx->pc = 0x17a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
label_17a850:
    // 0x17a850: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_17a854:
    if (ctx->pc == 0x17A854u) {
        ctx->pc = 0x17A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A850u;
        // 0x17a854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A858u;
        goto label_17a858;
    }
    ctx->pc = 0x17A850u;
    {
        const bool branch_taken_0x17a850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A850u;
        // 0x17a854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a850) {
            ctx->pc = 0x17A928u;
            goto label_17a928;
        }
    }
    ctx->pc = 0x17A858u;
label_17a858:
    // 0x17a858: 0x1000002e  b           . + 4 + (0x2E << 2)
label_17a85c:
    if (ctx->pc == 0x17A85Cu) {
        ctx->pc = 0x17A860u;
        goto label_17a860;
    }
    ctx->pc = 0x17A858u;
    {
        const bool branch_taken_0x17a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a858) {
            ctx->pc = 0x17A914u;
            goto label_17a914;
        }
    }
    ctx->pc = 0x17A860u;
label_17a860:
    // 0x17a860: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17a864:
    // 0x17a864: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17a864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_17a868:
    // 0x17a868: 0x244276d0  addiu       $v0, $v0, 0x76D0
    ctx->pc = 0x17a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30416));
label_17a86c:
    // 0x17a86c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x17a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_17a870:
    // 0x17a870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a874:
    // 0x17a874: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a878:
    // 0x17a878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a87c:
    // 0x17a87c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a880:
    // 0x17a880: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17a884:
    // 0x17a884: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x17a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_17a888:
    // 0x17a888: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x17a888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a88c:
    // 0x17a88c: 0xc04c6d8  jal         func_131B60
label_17a890:
    if (ctx->pc == 0x17A890u) {
        ctx->pc = 0x17A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A88Cu;
        // 0x17a890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A894u;
        goto label_17a894;
    }
    ctx->pc = 0x17A88Cu;
    SET_GPR_U32(ctx, 31, 0x17A894u);
    ctx->pc = 0x17A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A88Cu;
    // 0x17a890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x17A88Cu, 0x17A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A894u;
label_17a894:
    // 0x17a894: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x17a894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_17a898:
    // 0x17a898: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17a89c:
    // 0x17a89c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17a8a0:
    // 0x17a8a0: 0xc05c550  jal         func_171540
label_17a8a4:
    if (ctx->pc == 0x17A8A4u) {
        ctx->pc = 0x17A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8A0u;
        // 0x17a8a4: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8A8u;
        goto label_17a8a8;
    }
    ctx->pc = 0x17A8A0u;
    SET_GPR_U32(ctx, 31, 0x17A8A8u);
    ctx->pc = 0x17A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8A0u;
    // 0x17a8a4: 0x24450220  addiu       $a1, $v0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x17A8A0u, 0x17A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A8A8u;
label_17a8a8:
    // 0x17a8a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x17a8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17a8ac:
    // 0x17a8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a8b0:
    // 0x17a8b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x17a8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_17a8b4:
    // 0x17a8b4: 0x320f809  jalr        $t9
label_17a8b8:
    if (ctx->pc == 0x17A8B8u) {
        ctx->pc = 0x17A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8B4u;
        // 0x17a8b8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8BCu;
        goto label_17a8bc;
    }
    ctx->pc = 0x17A8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A8BCu);
        ctx->pc = 0x17A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8B4u;
        // 0x17a8b8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8B4u, 0x17A8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A8BCu;
label_17a8bc:
    // 0x17a8bc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x17a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_17a8c0:
    // 0x17a8c0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x17a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_17a8c4:
    // 0x17a8c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x17a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_17a8c8:
    // 0x17a8c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17a8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_17a8cc:
    // 0x17a8cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a8d0:
    // 0x17a8d0: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x17a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17a8d4:
    // 0x17a8d4: 0xc482022c  lwc1        $f2, 0x22C($a0)
    ctx->pc = 0x17a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a8d8:
    // 0x17a8d8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_17a8dc:
    // 0x17a8dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x17a8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_17a8e0:
    // 0x17a8e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17a8e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a8e4:
    // 0x17a8e4: 0x0  nop
    ctx->pc = 0x17a8e4u;
    // NOP
label_17a8e8:
    // 0x17a8e8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x17a8e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_17a8ec:
    // 0x17a8ec: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x17a8ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_17a8f0:
    // 0x17a8f0: 0xe481022c  swc1        $f1, 0x22C($a0)
    ctx->pc = 0x17a8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
label_17a8f4:
    // 0x17a8f4: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x17a8f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
label_17a8f8:
    // 0x17a8f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17a8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a8fc:
    // 0x17a8fc: 0x0  nop
    ctx->pc = 0x17a8fcu;
    // NOP
label_17a900:
    // 0x17a900: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17a904:
    if (ctx->pc == 0x17A904u) {
        ctx->pc = 0x17A908u;
        goto label_17a908;
    }
    ctx->pc = 0x17A900u;
    {
        const bool branch_taken_0x17a900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a900) {
            ctx->pc = 0x17A910u;
            goto label_17a910;
        }
    }
    ctx->pc = 0x17A908u;
label_17a908:
    // 0x17a908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17a908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17a90c:
    // 0x17a90c: 0xe480022c  swc1        $f0, 0x22C($a0)
    ctx->pc = 0x17a90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 556), bits); }
label_17a910:
    // 0x17a910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a914:
    // 0x17a914: 0x0  nop
    ctx->pc = 0x17a914u;
    // NOP
label_17a918:
    // 0x17a918: 0x8f838624  lw          $v1, -0x79DC($gp)
    ctx->pc = 0x17a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936100)));
label_17a91c:
    // 0x17a91c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17a91cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17a920:
    // 0x17a920: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_17a924:
    if (ctx->pc == 0x17A924u) {
        ctx->pc = 0x17A928u;
        goto label_17a928;
    }
    ctx->pc = 0x17A920u;
    {
        const bool branch_taken_0x17a920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a920) {
            ctx->pc = 0x17A860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a860;
        }
    }
    ctx->pc = 0x17A928u;
label_17a928:
    // 0x17a928: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17a928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17a92c:
    // 0x17a92c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a92cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17a930:
    // 0x17a930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a934:
    // 0x17a934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a938:
    // 0x17a938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a93c:
    // 0x17a93c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a940:
    // 0x17a940: 0x3e00008  jr          $ra
label_17a944:
    if (ctx->pc == 0x17A944u) {
        ctx->pc = 0x17A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A940u;
        // 0x17a944: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A948u;
        goto label_fallthrough_0x17a940;
    }
    ctx->pc = 0x17A940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A940u;
        // 0x17a944: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a940:
    ctx->pc = 0x17A948u;
}
