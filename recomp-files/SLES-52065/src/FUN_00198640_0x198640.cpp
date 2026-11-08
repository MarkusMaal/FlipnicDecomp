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

// Function: FUN_00198640
// Address: 0x198640 - 0x198c60
void FUN_00198640_0x198640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198640_0x198640");
#endif

    switch (ctx->pc) {
        case 0x198640u: goto label_198640;
        case 0x198644u: goto label_198644;
        case 0x198648u: goto label_198648;
        case 0x19864cu: goto label_19864c;
        case 0x198650u: goto label_198650;
        case 0x198654u: goto label_198654;
        case 0x198658u: goto label_198658;
        case 0x19865cu: goto label_19865c;
        case 0x198660u: goto label_198660;
        case 0x198664u: goto label_198664;
        case 0x198668u: goto label_198668;
        case 0x19866cu: goto label_19866c;
        case 0x198670u: goto label_198670;
        case 0x198674u: goto label_198674;
        case 0x198678u: goto label_198678;
        case 0x19867cu: goto label_19867c;
        case 0x198680u: goto label_198680;
        case 0x198684u: goto label_198684;
        case 0x198688u: goto label_198688;
        case 0x19868cu: goto label_19868c;
        case 0x198690u: goto label_198690;
        case 0x198694u: goto label_198694;
        case 0x198698u: goto label_198698;
        case 0x19869cu: goto label_19869c;
        case 0x1986a0u: goto label_1986a0;
        case 0x1986a4u: goto label_1986a4;
        case 0x1986a8u: goto label_1986a8;
        case 0x1986acu: goto label_1986ac;
        case 0x1986b0u: goto label_1986b0;
        case 0x1986b4u: goto label_1986b4;
        case 0x1986b8u: goto label_1986b8;
        case 0x1986bcu: goto label_1986bc;
        case 0x1986c0u: goto label_1986c0;
        case 0x1986c4u: goto label_1986c4;
        case 0x1986c8u: goto label_1986c8;
        case 0x1986ccu: goto label_1986cc;
        case 0x1986d0u: goto label_1986d0;
        case 0x1986d4u: goto label_1986d4;
        case 0x1986d8u: goto label_1986d8;
        case 0x1986dcu: goto label_1986dc;
        case 0x1986e0u: goto label_1986e0;
        case 0x1986e4u: goto label_1986e4;
        case 0x1986e8u: goto label_1986e8;
        case 0x1986ecu: goto label_1986ec;
        case 0x1986f0u: goto label_1986f0;
        case 0x1986f4u: goto label_1986f4;
        case 0x1986f8u: goto label_1986f8;
        case 0x1986fcu: goto label_1986fc;
        case 0x198700u: goto label_198700;
        case 0x198704u: goto label_198704;
        case 0x198708u: goto label_198708;
        case 0x19870cu: goto label_19870c;
        case 0x198710u: goto label_198710;
        case 0x198714u: goto label_198714;
        case 0x198718u: goto label_198718;
        case 0x19871cu: goto label_19871c;
        case 0x198720u: goto label_198720;
        case 0x198724u: goto label_198724;
        case 0x198728u: goto label_198728;
        case 0x19872cu: goto label_19872c;
        case 0x198730u: goto label_198730;
        case 0x198734u: goto label_198734;
        case 0x198738u: goto label_198738;
        case 0x19873cu: goto label_19873c;
        case 0x198740u: goto label_198740;
        case 0x198744u: goto label_198744;
        case 0x198748u: goto label_198748;
        case 0x19874cu: goto label_19874c;
        case 0x198750u: goto label_198750;
        case 0x198754u: goto label_198754;
        case 0x198758u: goto label_198758;
        case 0x19875cu: goto label_19875c;
        case 0x198760u: goto label_198760;
        case 0x198764u: goto label_198764;
        case 0x198768u: goto label_198768;
        case 0x19876cu: goto label_19876c;
        case 0x198770u: goto label_198770;
        case 0x198774u: goto label_198774;
        case 0x198778u: goto label_198778;
        case 0x19877cu: goto label_19877c;
        case 0x198780u: goto label_198780;
        case 0x198784u: goto label_198784;
        case 0x198788u: goto label_198788;
        case 0x19878cu: goto label_19878c;
        case 0x198790u: goto label_198790;
        case 0x198794u: goto label_198794;
        case 0x198798u: goto label_198798;
        case 0x19879cu: goto label_19879c;
        case 0x1987a0u: goto label_1987a0;
        case 0x1987a4u: goto label_1987a4;
        case 0x1987a8u: goto label_1987a8;
        case 0x1987acu: goto label_1987ac;
        case 0x1987b0u: goto label_1987b0;
        case 0x1987b4u: goto label_1987b4;
        case 0x1987b8u: goto label_1987b8;
        case 0x1987bcu: goto label_1987bc;
        case 0x1987c0u: goto label_1987c0;
        case 0x1987c4u: goto label_1987c4;
        case 0x1987c8u: goto label_1987c8;
        case 0x1987ccu: goto label_1987cc;
        case 0x1987d0u: goto label_1987d0;
        case 0x1987d4u: goto label_1987d4;
        case 0x1987d8u: goto label_1987d8;
        case 0x1987dcu: goto label_1987dc;
        case 0x1987e0u: goto label_1987e0;
        case 0x1987e4u: goto label_1987e4;
        case 0x1987e8u: goto label_1987e8;
        case 0x1987ecu: goto label_1987ec;
        case 0x1987f0u: goto label_1987f0;
        case 0x1987f4u: goto label_1987f4;
        case 0x1987f8u: goto label_1987f8;
        case 0x1987fcu: goto label_1987fc;
        case 0x198800u: goto label_198800;
        case 0x198804u: goto label_198804;
        case 0x198808u: goto label_198808;
        case 0x19880cu: goto label_19880c;
        case 0x198810u: goto label_198810;
        case 0x198814u: goto label_198814;
        case 0x198818u: goto label_198818;
        case 0x19881cu: goto label_19881c;
        case 0x198820u: goto label_198820;
        case 0x198824u: goto label_198824;
        case 0x198828u: goto label_198828;
        case 0x19882cu: goto label_19882c;
        case 0x198830u: goto label_198830;
        case 0x198834u: goto label_198834;
        case 0x198838u: goto label_198838;
        case 0x19883cu: goto label_19883c;
        case 0x198840u: goto label_198840;
        case 0x198844u: goto label_198844;
        case 0x198848u: goto label_198848;
        case 0x19884cu: goto label_19884c;
        case 0x198850u: goto label_198850;
        case 0x198854u: goto label_198854;
        case 0x198858u: goto label_198858;
        case 0x19885cu: goto label_19885c;
        case 0x198860u: goto label_198860;
        case 0x198864u: goto label_198864;
        case 0x198868u: goto label_198868;
        case 0x19886cu: goto label_19886c;
        case 0x198870u: goto label_198870;
        case 0x198874u: goto label_198874;
        case 0x198878u: goto label_198878;
        case 0x19887cu: goto label_19887c;
        case 0x198880u: goto label_198880;
        case 0x198884u: goto label_198884;
        case 0x198888u: goto label_198888;
        case 0x19888cu: goto label_19888c;
        case 0x198890u: goto label_198890;
        case 0x198894u: goto label_198894;
        case 0x198898u: goto label_198898;
        case 0x19889cu: goto label_19889c;
        case 0x1988a0u: goto label_1988a0;
        case 0x1988a4u: goto label_1988a4;
        case 0x1988a8u: goto label_1988a8;
        case 0x1988acu: goto label_1988ac;
        case 0x1988b0u: goto label_1988b0;
        case 0x1988b4u: goto label_1988b4;
        case 0x1988b8u: goto label_1988b8;
        case 0x1988bcu: goto label_1988bc;
        case 0x1988c0u: goto label_1988c0;
        case 0x1988c4u: goto label_1988c4;
        case 0x1988c8u: goto label_1988c8;
        case 0x1988ccu: goto label_1988cc;
        case 0x1988d0u: goto label_1988d0;
        case 0x1988d4u: goto label_1988d4;
        case 0x1988d8u: goto label_1988d8;
        case 0x1988dcu: goto label_1988dc;
        case 0x1988e0u: goto label_1988e0;
        case 0x1988e4u: goto label_1988e4;
        case 0x1988e8u: goto label_1988e8;
        case 0x1988ecu: goto label_1988ec;
        case 0x1988f0u: goto label_1988f0;
        case 0x1988f4u: goto label_1988f4;
        case 0x1988f8u: goto label_1988f8;
        case 0x1988fcu: goto label_1988fc;
        case 0x198900u: goto label_198900;
        case 0x198904u: goto label_198904;
        case 0x198908u: goto label_198908;
        case 0x19890cu: goto label_19890c;
        case 0x198910u: goto label_198910;
        case 0x198914u: goto label_198914;
        case 0x198918u: goto label_198918;
        case 0x19891cu: goto label_19891c;
        case 0x198920u: goto label_198920;
        case 0x198924u: goto label_198924;
        case 0x198928u: goto label_198928;
        case 0x19892cu: goto label_19892c;
        case 0x198930u: goto label_198930;
        case 0x198934u: goto label_198934;
        case 0x198938u: goto label_198938;
        case 0x19893cu: goto label_19893c;
        case 0x198940u: goto label_198940;
        case 0x198944u: goto label_198944;
        case 0x198948u: goto label_198948;
        case 0x19894cu: goto label_19894c;
        case 0x198950u: goto label_198950;
        case 0x198954u: goto label_198954;
        case 0x198958u: goto label_198958;
        case 0x19895cu: goto label_19895c;
        case 0x198960u: goto label_198960;
        case 0x198964u: goto label_198964;
        case 0x198968u: goto label_198968;
        case 0x19896cu: goto label_19896c;
        case 0x198970u: goto label_198970;
        case 0x198974u: goto label_198974;
        case 0x198978u: goto label_198978;
        case 0x19897cu: goto label_19897c;
        case 0x198980u: goto label_198980;
        case 0x198984u: goto label_198984;
        case 0x198988u: goto label_198988;
        case 0x19898cu: goto label_19898c;
        case 0x198990u: goto label_198990;
        case 0x198994u: goto label_198994;
        case 0x198998u: goto label_198998;
        case 0x19899cu: goto label_19899c;
        case 0x1989a0u: goto label_1989a0;
        case 0x1989a4u: goto label_1989a4;
        case 0x1989a8u: goto label_1989a8;
        case 0x1989acu: goto label_1989ac;
        case 0x1989b0u: goto label_1989b0;
        case 0x1989b4u: goto label_1989b4;
        case 0x1989b8u: goto label_1989b8;
        case 0x1989bcu: goto label_1989bc;
        case 0x1989c0u: goto label_1989c0;
        case 0x1989c4u: goto label_1989c4;
        case 0x1989c8u: goto label_1989c8;
        case 0x1989ccu: goto label_1989cc;
        case 0x1989d0u: goto label_1989d0;
        case 0x1989d4u: goto label_1989d4;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989dcu: goto label_1989dc;
        case 0x1989e0u: goto label_1989e0;
        case 0x1989e4u: goto label_1989e4;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989ecu: goto label_1989ec;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989f4u: goto label_1989f4;
        case 0x1989f8u: goto label_1989f8;
        case 0x1989fcu: goto label_1989fc;
        case 0x198a00u: goto label_198a00;
        case 0x198a04u: goto label_198a04;
        case 0x198a08u: goto label_198a08;
        case 0x198a0cu: goto label_198a0c;
        case 0x198a10u: goto label_198a10;
        case 0x198a14u: goto label_198a14;
        case 0x198a18u: goto label_198a18;
        case 0x198a1cu: goto label_198a1c;
        case 0x198a20u: goto label_198a20;
        case 0x198a24u: goto label_198a24;
        case 0x198a28u: goto label_198a28;
        case 0x198a2cu: goto label_198a2c;
        case 0x198a30u: goto label_198a30;
        case 0x198a34u: goto label_198a34;
        case 0x198a38u: goto label_198a38;
        case 0x198a3cu: goto label_198a3c;
        case 0x198a40u: goto label_198a40;
        case 0x198a44u: goto label_198a44;
        case 0x198a48u: goto label_198a48;
        case 0x198a4cu: goto label_198a4c;
        case 0x198a50u: goto label_198a50;
        case 0x198a54u: goto label_198a54;
        case 0x198a58u: goto label_198a58;
        case 0x198a5cu: goto label_198a5c;
        case 0x198a60u: goto label_198a60;
        case 0x198a64u: goto label_198a64;
        case 0x198a68u: goto label_198a68;
        case 0x198a6cu: goto label_198a6c;
        case 0x198a70u: goto label_198a70;
        case 0x198a74u: goto label_198a74;
        case 0x198a78u: goto label_198a78;
        case 0x198a7cu: goto label_198a7c;
        case 0x198a80u: goto label_198a80;
        case 0x198a84u: goto label_198a84;
        case 0x198a88u: goto label_198a88;
        case 0x198a8cu: goto label_198a8c;
        case 0x198a90u: goto label_198a90;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198a9cu: goto label_198a9c;
        case 0x198aa0u: goto label_198aa0;
        case 0x198aa4u: goto label_198aa4;
        case 0x198aa8u: goto label_198aa8;
        case 0x198aacu: goto label_198aac;
        case 0x198ab0u: goto label_198ab0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198ab8u: goto label_198ab8;
        case 0x198abcu: goto label_198abc;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ac8u: goto label_198ac8;
        case 0x198accu: goto label_198acc;
        case 0x198ad0u: goto label_198ad0;
        case 0x198ad4u: goto label_198ad4;
        case 0x198ad8u: goto label_198ad8;
        case 0x198adcu: goto label_198adc;
        case 0x198ae0u: goto label_198ae0;
        case 0x198ae4u: goto label_198ae4;
        case 0x198ae8u: goto label_198ae8;
        case 0x198aecu: goto label_198aec;
        case 0x198af0u: goto label_198af0;
        case 0x198af4u: goto label_198af4;
        case 0x198af8u: goto label_198af8;
        case 0x198afcu: goto label_198afc;
        case 0x198b00u: goto label_198b00;
        case 0x198b04u: goto label_198b04;
        case 0x198b08u: goto label_198b08;
        case 0x198b0cu: goto label_198b0c;
        case 0x198b10u: goto label_198b10;
        case 0x198b14u: goto label_198b14;
        case 0x198b18u: goto label_198b18;
        case 0x198b1cu: goto label_198b1c;
        case 0x198b20u: goto label_198b20;
        case 0x198b24u: goto label_198b24;
        case 0x198b28u: goto label_198b28;
        case 0x198b2cu: goto label_198b2c;
        case 0x198b30u: goto label_198b30;
        case 0x198b34u: goto label_198b34;
        case 0x198b38u: goto label_198b38;
        case 0x198b3cu: goto label_198b3c;
        case 0x198b40u: goto label_198b40;
        case 0x198b44u: goto label_198b44;
        case 0x198b48u: goto label_198b48;
        case 0x198b4cu: goto label_198b4c;
        case 0x198b50u: goto label_198b50;
        case 0x198b54u: goto label_198b54;
        case 0x198b58u: goto label_198b58;
        case 0x198b5cu: goto label_198b5c;
        case 0x198b60u: goto label_198b60;
        case 0x198b64u: goto label_198b64;
        case 0x198b68u: goto label_198b68;
        case 0x198b6cu: goto label_198b6c;
        case 0x198b70u: goto label_198b70;
        case 0x198b74u: goto label_198b74;
        case 0x198b78u: goto label_198b78;
        case 0x198b7cu: goto label_198b7c;
        case 0x198b80u: goto label_198b80;
        case 0x198b84u: goto label_198b84;
        case 0x198b88u: goto label_198b88;
        case 0x198b8cu: goto label_198b8c;
        case 0x198b90u: goto label_198b90;
        case 0x198b94u: goto label_198b94;
        case 0x198b98u: goto label_198b98;
        case 0x198b9cu: goto label_198b9c;
        case 0x198ba0u: goto label_198ba0;
        case 0x198ba4u: goto label_198ba4;
        case 0x198ba8u: goto label_198ba8;
        case 0x198bacu: goto label_198bac;
        case 0x198bb0u: goto label_198bb0;
        case 0x198bb4u: goto label_198bb4;
        case 0x198bb8u: goto label_198bb8;
        case 0x198bbcu: goto label_198bbc;
        case 0x198bc0u: goto label_198bc0;
        case 0x198bc4u: goto label_198bc4;
        case 0x198bc8u: goto label_198bc8;
        case 0x198bccu: goto label_198bcc;
        case 0x198bd0u: goto label_198bd0;
        case 0x198bd4u: goto label_198bd4;
        case 0x198bd8u: goto label_198bd8;
        case 0x198bdcu: goto label_198bdc;
        case 0x198be0u: goto label_198be0;
        case 0x198be4u: goto label_198be4;
        case 0x198be8u: goto label_198be8;
        case 0x198becu: goto label_198bec;
        case 0x198bf0u: goto label_198bf0;
        case 0x198bf4u: goto label_198bf4;
        case 0x198bf8u: goto label_198bf8;
        case 0x198bfcu: goto label_198bfc;
        case 0x198c00u: goto label_198c00;
        case 0x198c04u: goto label_198c04;
        case 0x198c08u: goto label_198c08;
        case 0x198c0cu: goto label_198c0c;
        case 0x198c10u: goto label_198c10;
        case 0x198c14u: goto label_198c14;
        case 0x198c18u: goto label_198c18;
        case 0x198c1cu: goto label_198c1c;
        case 0x198c20u: goto label_198c20;
        case 0x198c24u: goto label_198c24;
        case 0x198c28u: goto label_198c28;
        case 0x198c2cu: goto label_198c2c;
        case 0x198c30u: goto label_198c30;
        case 0x198c34u: goto label_198c34;
        case 0x198c38u: goto label_198c38;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c40u: goto label_198c40;
        case 0x198c44u: goto label_198c44;
        case 0x198c48u: goto label_198c48;
        case 0x198c4cu: goto label_198c4c;
        case 0x198c50u: goto label_198c50;
        case 0x198c54u: goto label_198c54;
        case 0x198c58u: goto label_198c58;
        case 0x198c5cu: goto label_198c5c;
        default: break;
    }

    ctx->pc = 0x198640u;

label_198640:
    // 0x198640: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x198640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_198644:
    // 0x198644: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x198644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_198648:
    // 0x198648: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x198648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19864c:
    // 0x19864c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_198650:
    // 0x198650: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x198650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_198654:
    // 0x198654: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x198654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_198658:
    // 0x198658: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x198658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19865c:
    // 0x19865c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_198660:
    // 0x198660: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x198660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198664:
    // 0x198664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_198668:
    // 0x198668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19866c:
    // 0x19866c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_198670:
    // 0x198670: 0xc063dd4  jal         func_18F750
label_198674:
    if (ctx->pc == 0x198674u) {
        ctx->pc = 0x198674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198670u;
        // 0x198674: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198678u;
        goto label_198678;
    }
    ctx->pc = 0x198670u;
    SET_GPR_U32(ctx, 31, 0x198678u);
    ctx->pc = 0x198674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198670u;
    // 0x198674: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x198670u, 0x198678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198678u;
label_198678:
    // 0x198678: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x198678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19867c:
    // 0x19867c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_198680:
    // 0x198680: 0x1044016c  beq         $v0, $a0, . + 4 + (0x16C << 2)
label_198684:
    if (ctx->pc == 0x198684u) {
        ctx->pc = 0x198688u;
        goto label_198688;
    }
    ctx->pc = 0x198680u;
    {
        const bool branch_taken_0x198680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x198680) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198688u;
label_198688:
    // 0x198688: 0x1043016a  beq         $v0, $v1, . + 4 + (0x16A << 2)
label_19868c:
    if (ctx->pc == 0x19868Cu) {
        ctx->pc = 0x198690u;
        goto label_198690;
    }
    ctx->pc = 0x198688u;
    {
        const bool branch_taken_0x198688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198688) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198690u;
label_198690:
    // 0x198690: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x198690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_198694:
    // 0x198694: 0x1043015f  beq         $v0, $v1, . + 4 + (0x15F << 2)
label_198698:
    if (ctx->pc == 0x198698u) {
        ctx->pc = 0x19869Cu;
        goto label_19869c;
    }
    ctx->pc = 0x198694u;
    {
        const bool branch_taken_0x198694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198694) {
            ctx->pc = 0x198C14u;
            goto label_198c14;
        }
    }
    ctx->pc = 0x19869Cu;
label_19869c:
    // 0x19869c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1986a0:
    // 0x1986a0: 0x1043012c  beq         $v0, $v1, . + 4 + (0x12C << 2)
label_1986a4:
    if (ctx->pc == 0x1986A4u) {
        ctx->pc = 0x1986A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A0u;
        // 0x1986a4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986A8u;
        goto label_1986a8;
    }
    ctx->pc = 0x1986A0u;
    {
        const bool branch_taken_0x1986a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1986A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A0u;
        // 0x1986a4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a0) {
            ctx->pc = 0x198B54u;
            goto label_198b54;
        }
    }
    ctx->pc = 0x1986A8u;
label_1986a8:
    // 0x1986a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1986a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1986ac:
    // 0x1986ac: 0x10430087  beq         $v0, $v1, . + 4 + (0x87 << 2)
label_1986b0:
    if (ctx->pc == 0x1986B0u) {
        ctx->pc = 0x1986B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986ACu;
        // 0x1986b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986B4u;
        goto label_1986b4;
    }
    ctx->pc = 0x1986ACu;
    {
        const bool branch_taken_0x1986ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1986B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986ACu;
        // 0x1986b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986ac) {
            ctx->pc = 0x1988CCu;
            goto label_1988cc;
        }
    }
    ctx->pc = 0x1986B4u;
label_1986b4:
    // 0x1986b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1986b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1986b8:
    // 0x1986b8: 0x1043005d  beq         $v0, $v1, . + 4 + (0x5D << 2)
label_1986bc:
    if (ctx->pc == 0x1986BCu) {
        ctx->pc = 0x1986BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B8u;
        // 0x1986bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986C0u;
        goto label_1986c0;
    }
    ctx->pc = 0x1986B8u;
    {
        const bool branch_taken_0x1986b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1986BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B8u;
        // 0x1986bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986b8) {
            ctx->pc = 0x198830u;
            goto label_198830;
        }
    }
    ctx->pc = 0x1986C0u;
label_1986c0:
    // 0x1986c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1986c4:
    if (ctx->pc == 0x1986C4u) {
        ctx->pc = 0x1986C8u;
        goto label_1986c8;
    }
    ctx->pc = 0x1986C0u;
    {
        const bool branch_taken_0x1986c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1986c0) {
            ctx->pc = 0x1986D0u;
            goto label_1986d0;
        }
    }
    ctx->pc = 0x1986C8u;
label_1986c8:
    // 0x1986c8: 0x1000015b  b           . + 4 + (0x15B << 2)
label_1986cc:
    if (ctx->pc == 0x1986CCu) {
        ctx->pc = 0x1986CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986C8u;
        // 0x1986cc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986D0u;
        goto label_1986d0;
    }
    ctx->pc = 0x1986C8u;
    {
        const bool branch_taken_0x1986c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986C8u;
        // 0x1986cc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986c8) {
            ctx->pc = 0x198C38u;
            goto label_198c38;
        }
    }
    ctx->pc = 0x1986D0u;
label_1986d0:
    // 0x1986d0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1986d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1986d4:
    // 0x1986d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1986d8:
    // 0x1986d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1986dc:
    // 0x1986dc: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x1986dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1986e0:
    // 0x1986e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1986e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1986e4:
    // 0x1986e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1986e8:
    // 0x1986e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1986ec:
    if (ctx->pc == 0x1986ECu) {
        ctx->pc = 0x1986F0u;
        goto label_1986f0;
    }
    ctx->pc = 0x1986E8u;
    {
        const bool branch_taken_0x1986e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1986e8) {
            ctx->pc = 0x198718u;
            goto label_198718;
        }
    }
    ctx->pc = 0x1986F0u;
label_1986f0:
    // 0x1986f0: 0x2b29821  addu        $s3, $s5, $s2
    ctx->pc = 0x1986f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1986f4:
    // 0x1986f4: 0xae600678  sw          $zero, 0x678($s3)
    ctx->pc = 0x1986f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1656), GPR_U32(ctx, 0));
label_1986f8:
    // 0x1986f8: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1986f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1986fc:
    // 0x1986fc: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_198700:
    // 0x198700: 0xc057040  jal         func_15C100
label_198704:
    if (ctx->pc == 0x198704u) {
        ctx->pc = 0x198704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198700u;
        // 0x198704: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198708u;
        goto label_198708;
    }
    ctx->pc = 0x198700u;
    SET_GPR_U32(ctx, 31, 0x198708u);
    ctx->pc = 0x198704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198700u;
    // 0x198704: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x198700u, 0x198708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198708u;
label_198708:
    // 0x198708: 0xae620450  sw          $v0, 0x450($s3)
    ctx->pc = 0x198708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1104), GPR_U32(ctx, 2));
label_19870c:
    // 0x19870c: 0xae710490  sw          $s1, 0x490($s3)
    ctx->pc = 0x19870cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1168), GPR_U32(ctx, 17));
label_198710:
    // 0x198710: 0x10000003  b           . + 4 + (0x3 << 2)
label_198714:
    if (ctx->pc == 0x198714u) {
        ctx->pc = 0x198714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198710u;
        // 0x198714: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198718u;
        goto label_198718;
    }
    ctx->pc = 0x198710u;
    {
        const bool branch_taken_0x198710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198710u;
        // 0x198714: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198710) {
            ctx->pc = 0x198720u;
            goto label_198720;
        }
    }
    ctx->pc = 0x198718u;
label_198718:
    // 0x198718: 0x10000005  b           . + 4 + (0x5 << 2)
label_19871c:
    if (ctx->pc == 0x19871Cu) {
        ctx->pc = 0x19871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198718u;
        // 0x19871c: 0xaeb00340  sw          $s0, 0x340($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198720u;
        goto label_198720;
    }
    ctx->pc = 0x198718u;
    {
        const bool branch_taken_0x198718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198718u;
        // 0x19871c: 0xaeb00340  sw          $s0, 0x340($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198718) {
            ctx->pc = 0x198730u;
            goto label_198730;
        }
    }
    ctx->pc = 0x198720u;
label_198720:
    // 0x198720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x198720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_198724:
    // 0x198724: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x198724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_198728:
    // 0x198728: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_19872c:
    if (ctx->pc == 0x19872Cu) {
        ctx->pc = 0x19872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198728u;
        // 0x19872c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198730u;
        goto label_198730;
    }
    ctx->pc = 0x198728u;
    {
        const bool branch_taken_0x198728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198728u;
        // 0x19872c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198728) {
            ctx->pc = 0x1986E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1986e0;
        }
    }
    ctx->pc = 0x198730u;
label_198730:
    // 0x198730: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_198734:
    // 0x198734: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x198734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_198738:
    // 0x198738: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19873c:
    // 0x19873c: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x19873cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_198740:
    // 0x198740: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_198744:
    // 0x198744: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x198744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198748:
    // 0x198748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19874c:
    // 0x19874c: 0x8cc8284c  lw          $t0, 0x284C($a2)
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10316)));
label_198750:
    // 0x198750: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x198750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_198754:
    // 0x198754: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_198758:
    // 0x198758: 0x0  nop
    ctx->pc = 0x198758u;
    // NOP
label_19875c:
    // 0x19875c: 0x2810  mfhi        $a1
    ctx->pc = 0x19875cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_198760:
    // 0x198760: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x198760u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_198764:
    // 0x198764: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_198768:
    // 0x198768: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_19876c:
    // 0x19876c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_198770:
    // 0x198770: 0xaea40670  sw          $a0, 0x670($s5)
    ctx->pc = 0x198770u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 4));
label_198774:
    // 0x198774: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x198774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_198778:
    // 0x198778: 0x2810  mfhi        $a1
    ctx->pc = 0x198778u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_19877c:
    // 0x19877c: 0x10000018  b           . + 4 + (0x18 << 2)
label_198780:
    if (ctx->pc == 0x198780u) {
        ctx->pc = 0x198780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19877Cu;
        // 0x198780: 0xac85284c  sw          $a1, 0x284C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10316), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198784u;
        goto label_198784;
    }
    ctx->pc = 0x19877Cu;
    {
        const bool branch_taken_0x19877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19877Cu;
        // 0x198780: 0xac85284c  sw          $a1, 0x284C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10316), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19877c) {
            ctx->pc = 0x1987E0u;
            goto label_1987e0;
        }
    }
    ctx->pc = 0x198784u;
label_198784:
    // 0x198784: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_198788:
    // 0x198788: 0xacc004d0  sw          $zero, 0x4D0($a2)
    ctx->pc = 0x198788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1232), GPR_U32(ctx, 0));
label_19878c:
    // 0x19878c: 0x8ea50670  lw          $a1, 0x670($s5)
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_198790:
    // 0x198790: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_198794:
    // 0x198794: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x198794u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_198798:
    // 0x198798: 0x0  nop
    ctx->pc = 0x198798u;
    // NOP
label_19879c:
    // 0x19879c: 0x0  nop
    ctx->pc = 0x19879cu;
    // NOP
label_1987a0:
    // 0x1987a0: 0x2012  mflo        $a0
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1987a4:
    // 0x1987a4: 0xacc40510  sw          $a0, 0x510($a2)
    ctx->pc = 0x1987a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1296), GPR_U32(ctx, 4));
label_1987a8:
    // 0x1987a8: 0x8ea50670  lw          $a1, 0x670($s5)
    ctx->pc = 0x1987a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_1987ac:
    // 0x1987ac: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x1987acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_1987b0:
    // 0x1987b0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1987b0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1987b4:
    // 0x1987b4: 0x0  nop
    ctx->pc = 0x1987b4u;
    // NOP
label_1987b8:
    // 0x1987b8: 0x0  nop
    ctx->pc = 0x1987b8u;
    // NOP
label_1987bc:
    // 0x1987bc: 0x2010  mfhi        $a0
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1987c0:
    // 0x1987c0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1987c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1987c4:
    // 0x1987c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1987c8:
    if (ctx->pc == 0x1987C8u) {
        ctx->pc = 0x1987C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987C4u;
        // 0x1987c8: 0x24c70510  addiu       $a3, $a2, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1987CCu;
        goto label_1987cc;
    }
    ctx->pc = 0x1987C4u;
    {
        const bool branch_taken_0x1987c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987C4u;
        // 0x1987c8: 0x24c70510  addiu       $a3, $a2, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987c4) {
            ctx->pc = 0x1987D8u;
            goto label_1987d8;
        }
    }
    ctx->pc = 0x1987CCu;
label_1987cc:
    // 0x1987cc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1987d0:
    // 0x1987d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1987d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1987d4:
    // 0x1987d4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1987d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_1987d8:
    // 0x1987d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1987d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1987dc:
    // 0x1987dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1987dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1987e0:
    // 0x1987e0: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_1987e4:
    // 0x1987e4: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x1987e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1987e8:
    // 0x1987e8: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
label_1987ec:
    if (ctx->pc == 0x1987ECu) {
        ctx->pc = 0x1987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987E8u;
        // 0x1987ec: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1987F0u;
        goto label_1987f0;
    }
    ctx->pc = 0x1987E8u;
    {
        const bool branch_taken_0x1987e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987E8u;
        // 0x1987ec: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987e8) {
            ctx->pc = 0x198788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198788;
        }
    }
    ctx->pc = 0x1987F0u;
label_1987f0:
    // 0x1987f0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1987f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1987f4:
    // 0x1987f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1987f8:
    // 0x1987f8: 0x8ea70670  lw          $a3, 0x670($s5)
    ctx->pc = 0x1987f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_1987fc:
    // 0x1987fc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1987fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_198800:
    // 0x198800: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_198804:
    // 0x198804: 0xc064f7c  jal         func_193DF0
label_198808:
    if (ctx->pc == 0x198808u) {
        ctx->pc = 0x198808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198804u;
        // 0x198808: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19880Cu;
        goto label_19880c;
    }
    ctx->pc = 0x198804u;
    SET_GPR_U32(ctx, 31, 0x19880Cu);
    ctx->pc = 0x198808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198804u;
    // 0x198808: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x198804u, 0x19880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19880Cu;
label_19880c:
    // 0x19880c: 0xaea00674  sw          $zero, 0x674($s5)
    ctx->pc = 0x19880cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 0));
label_198810:
    // 0x198810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198814:
    // 0x198814: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x198814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_198818:
    // 0x198818: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19881c:
    // 0x19881c: 0xc063e14  jal         func_18F850
label_198820:
    if (ctx->pc == 0x198820u) {
        ctx->pc = 0x198820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19881Cu;
        // 0x198820: 0xa04328f4  sb          $v1, 0x28F4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10484), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198824u;
        goto label_198824;
    }
    ctx->pc = 0x19881Cu;
    SET_GPR_U32(ctx, 31, 0x198824u);
    ctx->pc = 0x198820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19881Cu;
    // 0x198820: 0xa04328f4  sb          $v1, 0x28F4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 10484), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19881Cu, 0x198824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198824u;
label_198824:
    // 0x198824: 0x10000103  b           . + 4 + (0x103 << 2)
label_198828:
    if (ctx->pc == 0x198828u) {
        ctx->pc = 0x19882Cu;
        goto label_19882c;
    }
    ctx->pc = 0x198824u;
    {
        const bool branch_taken_0x198824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198824) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x19882Cu;
label_19882c:
    // 0x19882c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19882cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198830:
    // 0x198830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x198830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198834:
    // 0x198834: 0x10000014  b           . + 4 + (0x14 << 2)
label_198838:
    if (ctx->pc == 0x198838u) {
        ctx->pc = 0x198838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198834u;
        // 0x198838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19883Cu;
        goto label_19883c;
    }
    ctx->pc = 0x198834u;
    {
        const bool branch_taken_0x198834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198834u;
        // 0x198838: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198834) {
            ctx->pc = 0x198888u;
            goto label_198888;
        }
    }
    ctx->pc = 0x19883Cu;
label_19883c:
    // 0x19883c: 0x2b09021  addu        $s2, $s5, $s0
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_198840:
    // 0x198840: 0x8e420510  lw          $v0, 0x510($s2)
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1296)));
label_198844:
    // 0x198844: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_198848:
    if (ctx->pc == 0x198848u) {
        ctx->pc = 0x19884Cu;
        goto label_19884c;
    }
    ctx->pc = 0x198844u;
    {
        const bool branch_taken_0x198844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198844) {
            ctx->pc = 0x19887Cu;
            goto label_19887c;
        }
    }
    ctx->pc = 0x19884Cu;
label_19884c:
    // 0x19884c: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_198850:
    // 0x198850: 0x264b0490  addiu       $t3, $s2, 0x490
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_198854:
    // 0x198854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198858:
    // 0x198858: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19885c:
    // 0x19885c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x19885cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_198860:
    // 0x198860: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_198864:
    // 0x198864: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x198864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_198868:
    // 0x198868: 0x8c48003c  lw          $t0, 0x3C($v0)
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_19886c:
    // 0x19886c: 0xc064d10  jal         func_193440
label_198870:
    if (ctx->pc == 0x198870u) {
        ctx->pc = 0x198870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19886Cu;
        // 0x198870: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198874u;
        goto label_198874;
    }
    ctx->pc = 0x19886Cu;
    SET_GPR_U32(ctx, 31, 0x198874u);
    ctx->pc = 0x198870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19886Cu;
    // 0x198870: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x19886Cu, 0x198874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198874u;
label_198874:
    // 0x198874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198878:
    // 0x198878: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x198878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
label_19887c:
    // 0x19887c: 0x0  nop
    ctx->pc = 0x19887cu;
    // NOP
label_198880:
    // 0x198880: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_198884:
    // 0x198884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x198884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_198888:
    // 0x198888: 0x8ea20340  lw          $v0, 0x340($s5)
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_19888c:
    // 0x19888c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x19888cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_198890:
    // 0x198890: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_198894:
    if (ctx->pc == 0x198894u) {
        ctx->pc = 0x198894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198890u;
        // 0x198894: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198898u;
        goto label_198898;
    }
    ctx->pc = 0x198890u;
    {
        const bool branch_taken_0x198890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198890u;
        // 0x198894: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198890) {
            ctx->pc = 0x198840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198840;
        }
    }
    ctx->pc = 0x198898u;
label_198898:
    // 0x198898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19889c:
    // 0x19889c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1988a0:
    if (ctx->pc == 0x1988A0u) {
        ctx->pc = 0x1988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19889Cu;
        // 0x1988a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988A4u;
        goto label_1988a4;
    }
    ctx->pc = 0x19889Cu;
    {
        const bool branch_taken_0x19889c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19889Cu;
        // 0x1988a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19889c) {
            ctx->pc = 0x1988B8u;
            goto label_1988b8;
        }
    }
    ctx->pc = 0x1988A4u;
label_1988a4:
    // 0x1988a4: 0xc063e14  jal         func_18F850
label_1988a8:
    if (ctx->pc == 0x1988A8u) {
        ctx->pc = 0x1988A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988A4u;
        // 0x1988a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988ACu;
        goto label_1988ac;
    }
    ctx->pc = 0x1988A4u;
    SET_GPR_U32(ctx, 31, 0x1988ACu);
    ctx->pc = 0x1988A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988A4u;
    // 0x1988a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1988A4u, 0x1988ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988ACu;
label_1988ac:
    // 0x1988ac: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_1988b0:
    if (ctx->pc == 0x1988B0u) {
        ctx->pc = 0x1988B4u;
        goto label_1988b4;
    }
    ctx->pc = 0x1988ACu;
    {
        const bool branch_taken_0x1988ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988ac) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x1988B4u;
label_1988b4:
    // 0x1988b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1988b8:
    // 0x1988b8: 0xc063e08  jal         func_18F820
label_1988bc:
    if (ctx->pc == 0x1988BCu) {
        ctx->pc = 0x1988BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988B8u;
        // 0x1988bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988C0u;
        goto label_1988c0;
    }
    ctx->pc = 0x1988B8u;
    SET_GPR_U32(ctx, 31, 0x1988C0u);
    ctx->pc = 0x1988BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988B8u;
    // 0x1988bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1988B8u, 0x1988C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988C0u;
label_1988c0:
    // 0x1988c0: 0x100000dc  b           . + 4 + (0xDC << 2)
label_1988c4:
    if (ctx->pc == 0x1988C4u) {
        ctx->pc = 0x1988C8u;
        goto label_1988c8;
    }
    ctx->pc = 0x1988C0u;
    {
        const bool branch_taken_0x1988c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988c0) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x1988C8u;
label_1988c8:
    // 0x1988c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1988c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1988cc:
    // 0x1988cc: 0x10000094  b           . + 4 + (0x94 << 2)
label_1988d0:
    if (ctx->pc == 0x1988D0u) {
        ctx->pc = 0x1988D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988CCu;
        // 0x1988d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988D4u;
        goto label_1988d4;
    }
    ctx->pc = 0x1988CCu;
    {
        const bool branch_taken_0x1988cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988CCu;
        // 0x1988d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988cc) {
            ctx->pc = 0x198B20u;
            goto label_198b20;
        }
    }
    ctx->pc = 0x1988D4u;
label_1988d4:
    // 0x1988d4: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1988d8:
    // 0x1988d8: 0x8e2304d0  lw          $v1, 0x4D0($s1)
    ctx->pc = 0x1988d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1232)));
label_1988dc:
    // 0x1988dc: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
label_1988e0:
    if (ctx->pc == 0x1988E0u) {
        ctx->pc = 0x1988E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988DCu;
        // 0x1988e0: 0x263604d0  addiu       $s6, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988E4u;
        goto label_1988e4;
    }
    ctx->pc = 0x1988DCu;
    {
        const bool branch_taken_0x1988dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988DCu;
        // 0x1988e0: 0x263604d0  addiu       $s6, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988dc) {
            ctx->pc = 0x198B18u;
            goto label_198b18;
        }
    }
    ctx->pc = 0x1988E4u;
label_1988e4:
    // 0x1988e4: 0x8e240490  lw          $a0, 0x490($s1)
    ctx->pc = 0x1988e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_1988e8:
    // 0x1988e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1988ec:
    // 0x1988ec: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1988f0:
    // 0x1988f0: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_1988f4:
    if (ctx->pc == 0x1988F4u) {
        ctx->pc = 0x1988F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988F0u;
        // 0x1988f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988F8u;
        goto label_1988f8;
    }
    ctx->pc = 0x1988F0u;
    {
        const bool branch_taken_0x1988f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1988F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988F0u;
        // 0x1988f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988f0) {
            ctx->pc = 0x198978u;
            goto label_198978;
        }
    }
    ctx->pc = 0x1988F8u;
label_1988f8:
    // 0x1988f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1988f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1988fc:
    // 0x1988fc: 0x10850010  beq         $a0, $a1, . + 4 + (0x10 << 2)
label_198900:
    if (ctx->pc == 0x198900u) {
        ctx->pc = 0x198904u;
        goto label_198904;
    }
    ctx->pc = 0x1988FCu;
    {
        const bool branch_taken_0x1988fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1988fc) {
            ctx->pc = 0x198940u;
            goto label_198940;
        }
    }
    ctx->pc = 0x198904u;
label_198904:
    // 0x198904: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_198908:
    if (ctx->pc == 0x198908u) {
        ctx->pc = 0x19890Cu;
        goto label_19890c;
    }
    ctx->pc = 0x198904u;
    {
        const bool branch_taken_0x198904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198904) {
            ctx->pc = 0x198914u;
            goto label_198914;
        }
    }
    ctx->pc = 0x19890Cu;
label_19890c:
    // 0x19890c: 0x10000031  b           . + 4 + (0x31 << 2)
label_198910:
    if (ctx->pc == 0x198910u) {
        ctx->pc = 0x198914u;
        goto label_198914;
    }
    ctx->pc = 0x19890Cu;
    {
        const bool branch_taken_0x19890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19890c) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x198914u;
label_198914:
    // 0x198914: 0x0  nop
    ctx->pc = 0x198914u;
    // NOP
label_198918:
    // 0x198918: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x198918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_19891c:
    // 0x19891c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_198920:
    // 0x198920: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_198924:
    // 0x198924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_198928:
    // 0x198928: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19892c:
    // 0x19892c: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_198930:
    // 0x198930: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_198934:
    if (ctx->pc == 0x198934u) {
        ctx->pc = 0x198938u;
        goto label_198938;
    }
    ctx->pc = 0x198930u;
    {
        const bool branch_taken_0x198930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198930) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x198938u;
label_198938:
    // 0x198938: 0x10000026  b           . + 4 + (0x26 << 2)
label_19893c:
    if (ctx->pc == 0x19893Cu) {
        ctx->pc = 0x19893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198938u;
        // 0x19893c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198940u;
        goto label_198940;
    }
    ctx->pc = 0x198938u;
    {
        const bool branch_taken_0x198938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198938u;
        // 0x19893c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198938) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x198940u;
label_198940:
    // 0x198940: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x198940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_198944:
    // 0x198944: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_198948:
    // 0x198948: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19894c:
    // 0x19894c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198950:
    // 0x198950: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_198954:
    // 0x198954: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_198958:
    // 0x198958: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x198958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_19895c:
    // 0x19895c: 0x320f809  jalr        $t9
label_198960:
    if (ctx->pc == 0x198960u) {
        ctx->pc = 0x198964u;
        goto label_198964;
    }
    ctx->pc = 0x19895Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198964u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19895Cu, 0x198964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198964u;
label_198964:
    // 0x198964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198968:
    // 0x198968: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_19896c:
    if (ctx->pc == 0x19896Cu) {
        ctx->pc = 0x198970u;
        goto label_198970;
    }
    ctx->pc = 0x198968u;
    {
        const bool branch_taken_0x198968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198968) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x198970u;
label_198970:
    // 0x198970: 0x10000018  b           . + 4 + (0x18 << 2)
label_198974:
    if (ctx->pc == 0x198974u) {
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198978u;
        goto label_198978;
    }
    ctx->pc = 0x198970u;
    {
        const bool branch_taken_0x198970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198970) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x198978u;
label_198978:
    // 0x198978: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_19897c:
    // 0x19897c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_198980:
    if (ctx->pc == 0x198980u) {
        ctx->pc = 0x198980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19897Cu;
        // 0x198980: 0x26250678  addiu       $a1, $s1, 0x678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198984u;
        goto label_198984;
    }
    ctx->pc = 0x19897Cu;
    {
        const bool branch_taken_0x19897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19897Cu;
        // 0x198980: 0x26250678  addiu       $a1, $s1, 0x678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19897c) {
            ctx->pc = 0x1989B0u;
            goto label_1989b0;
        }
    }
    ctx->pc = 0x198984u;
label_198984:
    // 0x198984: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x198984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_198988:
    // 0x198988: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19898c:
    // 0x19898c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19898cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_198990:
    // 0x198990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_198994:
    // 0x198994: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x198994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_198998:
    // 0x198998: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19899c:
    // 0x19899c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1989a0:
    if (ctx->pc == 0x1989A0u) {
        ctx->pc = 0x1989A4u;
        goto label_1989a4;
    }
    ctx->pc = 0x19899Cu;
    {
        const bool branch_taken_0x19899c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19899c) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x1989A4u;
label_1989a4:
    // 0x1989a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1989a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1989a8:
    // 0x1989a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1989ac:
    if (ctx->pc == 0x1989ACu) {
        ctx->pc = 0x1989ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989A8u;
        // 0x1989ac: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1989B0u;
        goto label_1989b0;
    }
    ctx->pc = 0x1989A8u;
    {
        const bool branch_taken_0x1989a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989A8u;
        // 0x1989ac: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989a8) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x1989B0u;
label_1989b0:
    // 0x1989b0: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_1989b4:
    // 0x1989b4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1989b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1989b8:
    // 0x1989b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1989bc:
    // 0x1989bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1989c0:
    // 0x1989c0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1989c4:
    // 0x1989c4: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1989c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1989c8:
    // 0x1989c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1989cc:
    if (ctx->pc == 0x1989CCu) {
        ctx->pc = 0x1989D0u;
        goto label_1989d0;
    }
    ctx->pc = 0x1989C8u;
    {
        const bool branch_taken_0x1989c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989c8) {
            ctx->pc = 0x1989D4u;
            goto label_1989d4;
        }
    }
    ctx->pc = 0x1989D0u;
label_1989d0:
    // 0x1989d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1989d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1989d4:
    // 0x1989d4: 0x0  nop
    ctx->pc = 0x1989d4u;
    // NOP
label_1989d8:
    // 0x1989d8: 0x1260004f  beqz        $s3, . + 4 + (0x4F << 2)
label_1989dc:
    if (ctx->pc == 0x1989DCu) {
        ctx->pc = 0x1989E0u;
        goto label_1989e0;
    }
    ctx->pc = 0x1989D8u;
    {
        const bool branch_taken_0x1989d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989d8) {
            ctx->pc = 0x198B18u;
            goto label_198b18;
        }
    }
    ctx->pc = 0x1989E0u;
label_1989e0:
    // 0x1989e0: 0x8e230510  lw          $v1, 0x510($s1)
    ctx->pc = 0x1989e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
label_1989e4:
    // 0x1989e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1989e8:
    // 0x1989e8: 0xae230510  sw          $v1, 0x510($s1)
    ctx->pc = 0x1989e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1296), GPR_U32(ctx, 3));
label_1989ec:
    // 0x1989ec: 0x8e230510  lw          $v1, 0x510($s1)
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
label_1989f0:
    // 0x1989f0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1989f4:
    if (ctx->pc == 0x1989F4u) {
        ctx->pc = 0x1989F8u;
        goto label_1989f8;
    }
    ctx->pc = 0x1989F0u;
    {
        const bool branch_taken_0x1989f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989f0) {
            ctx->pc = 0x198A1Cu;
            goto label_198a1c;
        }
    }
    ctx->pc = 0x1989F8u;
label_1989f8:
    // 0x1989f8: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_1989fc:
    // 0x1989fc: 0xc04bf44  jal         func_12FD10
label_198a00:
    if (ctx->pc == 0x198A00u) {
        ctx->pc = 0x198A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989FCu;
        // 0x198a00: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A04u;
        goto label_198a04;
    }
    ctx->pc = 0x1989FCu;
    SET_GPR_U32(ctx, 31, 0x198A04u);
    ctx->pc = 0x198A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989FCu;
    // 0x198a00: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1989FCu, 0x198A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A04u;
label_198a04:
    // 0x198a04: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198a08:
    // 0x198a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x198a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198a0c:
    // 0x198a0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198a10:
    // 0x198a10: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_198a14:
    // 0x198a14: 0x320f809  jalr        $t9
label_198a18:
    if (ctx->pc == 0x198A18u) {
        ctx->pc = 0x198A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A14u;
        // 0x198a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A1Cu;
        goto label_198a1c;
    }
    ctx->pc = 0x198A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198A1Cu);
        ctx->pc = 0x198A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A14u;
        // 0x198a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198A14u, 0x198A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198A1Cu;
label_198a1c:
    // 0x198a1c: 0x0  nop
    ctx->pc = 0x198a1cu;
    // NOP
label_198a20:
    // 0x198a20: 0x8ea30674  lw          $v1, 0x674($s5)
    ctx->pc = 0x198a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
label_198a24:
    // 0x198a24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_198a28:
    // 0x198a28: 0xaea30674  sw          $v1, 0x674($s5)
    ctx->pc = 0x198a28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 3));
label_198a2c:
    // 0x198a2c: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x198a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_198a30:
    // 0x198a30: 0x8ea40674  lw          $a0, 0x674($s5)
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
label_198a34:
    // 0x198a34: 0x14640027  bne         $v1, $a0, . + 4 + (0x27 << 2)
label_198a38:
    if (ctx->pc == 0x198A38u) {
        ctx->pc = 0x198A3Cu;
        goto label_198a3c;
    }
    ctx->pc = 0x198A34u;
    {
        const bool branch_taken_0x198a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x198a34) {
            ctx->pc = 0x198AD4u;
            goto label_198ad4;
        }
    }
    ctx->pc = 0x198A3Cu;
label_198a3c:
    // 0x198a3c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x198a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_198a40:
    // 0x198a40: 0x28810015  slti        $at, $a0, 0x15
    ctx->pc = 0x198a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
label_198a44:
    // 0x198a44: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_198a48:
    if (ctx->pc == 0x198A48u) {
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x24510080  addiu       $s1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A4Cu;
        goto label_198a4c;
    }
    ctx->pc = 0x198A44u;
    {
        const bool branch_taken_0x198a44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x24510080  addiu       $s1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a44) {
            ctx->pc = 0x198A68u;
            goto label_198a68;
        }
    }
    ctx->pc = 0x198A4Cu;
label_198a4c:
    // 0x198a4c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x198a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_198a50:
    // 0x198a50: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_198a54:
    // 0x198a54: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198a58:
    // 0x198a58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_198a5c:
    // 0x198a5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x198a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198a60:
    // 0x198a60: 0x10000009  b           . + 4 + (0x9 << 2)
label_198a64:
    if (ctx->pc == 0x198A64u) {
        ctx->pc = 0x198A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A60u;
        // 0x198a64: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A68u;
        goto label_198a68;
    }
    ctx->pc = 0x198A60u;
    {
        const bool branch_taken_0x198a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A60u;
        // 0x198a64: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a60) {
            ctx->pc = 0x198A88u;
            goto label_198a88;
        }
    }
    ctx->pc = 0x198A68u;
label_198a68:
    // 0x198a68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_198a6c:
    // 0x198a6c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x198a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_198a70:
    // 0x198a70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_198a74:
    if (ctx->pc == 0x198A74u) {
        ctx->pc = 0x198A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A70u;
        // 0x198a74: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A78u;
        goto label_198a78;
    }
    ctx->pc = 0x198A70u;
    {
        const bool branch_taken_0x198a70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x198A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A70u;
        // 0x198a74: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a70) {
            ctx->pc = 0x198A80u;
            goto label_198a80;
        }
    }
    ctx->pc = 0x198A78u;
label_198a78:
    // 0x198a78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_198a7c:
    // 0x198a7c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x198a7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_198a80:
    // 0x198a80: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_198a84:
    // 0x198a84: 0x439818  mult        $s3, $v0, $v1
    ctx->pc = 0x198a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_198a88:
    // 0x198a88: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x198a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_198a8c:
    // 0x198a8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198a90:
    // 0x198a90: 0x10a7000b  beq         $a1, $a3, . + 4 + (0xB << 2)
label_198a94:
    if (ctx->pc == 0x198A94u) {
        ctx->pc = 0x198A98u;
        goto label_198a98;
    }
    ctx->pc = 0x198A90u;
    {
        const bool branch_taken_0x198a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x198a90) {
            ctx->pc = 0x198AC0u;
            goto label_198ac0;
        }
    }
    ctx->pc = 0x198A98u;
label_198a98:
    // 0x198a98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198a9c:
    // 0x198a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198aa0:
    // 0x198aa0: 0xc064f7c  jal         func_193DF0
label_198aa4:
    if (ctx->pc == 0x198AA4u) {
        ctx->pc = 0x198AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AA0u;
        // 0x198aa4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AA8u;
        goto label_198aa8;
    }
    ctx->pc = 0x198AA0u;
    SET_GPR_U32(ctx, 31, 0x198AA8u);
    ctx->pc = 0x198AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AA0u;
    // 0x198aa4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x198AA0u, 0x198AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AA8u;
label_198aa8:
    // 0x198aa8: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x198aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_198aac:
    // 0x198aac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198ab0:
    // 0x198ab0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_198ab4:
    // 0x198ab4: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x198ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_198ab8:
    // 0x198ab8: 0xc064b08  jal         func_192C20
label_198abc:
    if (ctx->pc == 0x198ABCu) {
        ctx->pc = 0x198ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AB8u;
        // 0x198abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AC0u;
        goto label_198ac0;
    }
    ctx->pc = 0x198AB8u;
    SET_GPR_U32(ctx, 31, 0x198AC0u);
    ctx->pc = 0x198ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AB8u;
    // 0x198abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x198AB8u, 0x198AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AC0u;
label_198ac0:
    // 0x198ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198ac4:
    // 0x198ac4: 0xc063e08  jal         func_18F820
label_198ac8:
    if (ctx->pc == 0x198AC8u) {
        ctx->pc = 0x198AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AC4u;
        // 0x198ac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198ACCu;
        goto label_198acc;
    }
    ctx->pc = 0x198AC4u;
    SET_GPR_U32(ctx, 31, 0x198ACCu);
    ctx->pc = 0x198AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AC4u;
    // 0x198ac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198AC4u, 0x198ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ACCu;
label_198acc:
    // 0x198acc: 0x1000000b  b           . + 4 + (0xB << 2)
label_198ad0:
    if (ctx->pc == 0x198AD0u) {
        ctx->pc = 0x198AD4u;
        goto label_198ad4;
    }
    ctx->pc = 0x198ACCu;
    {
        const bool branch_taken_0x198acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198acc) {
            ctx->pc = 0x198AFCu;
            goto label_198afc;
        }
    }
    ctx->pc = 0x198AD4u;
label_198ad4:
    // 0x198ad4: 0x0  nop
    ctx->pc = 0x198ad4u;
    // NOP
label_198ad8:
    // 0x198ad8: 0x8ea40664  lw          $a0, 0x664($s5)
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_198adc:
    // 0x198adc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198ae0:
    // 0x198ae0: 0x8c860064  lw          $a2, 0x64($a0)
    ctx->pc = 0x198ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_198ae4:
    // 0x198ae4: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x198ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_198ae8:
    // 0x198ae8: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
label_198aec:
    if (ctx->pc == 0x198AECu) {
        ctx->pc = 0x198AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE8u;
        // 0x198aec: 0x24910040  addiu       $s1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AF0u;
        goto label_198af0;
    }
    ctx->pc = 0x198AE8u;
    {
        const bool branch_taken_0x198ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x198AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE8u;
        // 0x198aec: 0x24910040  addiu       $s1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ae8) {
            ctx->pc = 0x198AFCu;
            goto label_198afc;
        }
    }
    ctx->pc = 0x198AF0u;
label_198af0:
    // 0x198af0: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_198af4:
    // 0x198af4: 0xc064b08  jal         func_192C20
label_198af8:
    if (ctx->pc == 0x198AF8u) {
        ctx->pc = 0x198AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AF4u;
        // 0x198af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AFCu;
        goto label_198afc;
    }
    ctx->pc = 0x198AF4u;
    SET_GPR_U32(ctx, 31, 0x198AFCu);
    ctx->pc = 0x198AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AF4u;
    // 0x198af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x198AF4u, 0x198AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AFCu;
label_198afc:
    // 0x198afc: 0x0  nop
    ctx->pc = 0x198afcu;
    // NOP
label_198b00:
    // 0x198b00: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x198b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_198b04:
    // 0x198b04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198b08:
    // 0x198b08: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_198b0c:
    if (ctx->pc == 0x198B0Cu) {
        ctx->pc = 0x198B10u;
        goto label_198b10;
    }
    ctx->pc = 0x198B08u;
    {
        const bool branch_taken_0x198b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x198b08) {
            ctx->pc = 0x198B18u;
            goto label_198b18;
        }
    }
    ctx->pc = 0x198B10u;
label_198b10:
    // 0x198b10: 0xc064ee0  jal         func_193B80
label_198b14:
    if (ctx->pc == 0x198B14u) {
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B18u;
        goto label_198b18;
    }
    ctx->pc = 0x198B10u;
    SET_GPR_U32(ctx, 31, 0x198B18u);
    ctx->pc = 0x198B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B10u;
    // 0x198b14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x198B10u, 0x198B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B18u;
label_198b18:
    // 0x198b18: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_198b1c:
    // 0x198b1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_198b20:
    // 0x198b20: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x198b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_198b24:
    // 0x198b24: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x198b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_198b28:
    // 0x198b28: 0x1460ff6b  bnez        $v1, . + 4 + (-0x95 << 2)
label_198b2c:
    if (ctx->pc == 0x198B2Cu) {
        ctx->pc = 0x198B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B28u;
        // 0x198b2c: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B30u;
        goto label_198b30;
    }
    ctx->pc = 0x198B28u;
    {
        const bool branch_taken_0x198b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B28u;
        // 0x198b2c: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b28) {
            ctx->pc = 0x1988D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1988d8;
        }
    }
    ctx->pc = 0x198B30u;
label_198b30:
    // 0x198b30: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
label_198b34:
    // 0x198b34: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_198b38:
    if (ctx->pc == 0x198B38u) {
        ctx->pc = 0x198B3Cu;
        goto label_198b3c;
    }
    ctx->pc = 0x198B34u;
    {
        const bool branch_taken_0x198b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198b34) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198B3Cu;
label_198b3c:
    // 0x198b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198b40:
    // 0x198b40: 0xc063e08  jal         func_18F820
label_198b44:
    if (ctx->pc == 0x198B44u) {
        ctx->pc = 0x198B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B40u;
        // 0x198b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B48u;
        goto label_198b48;
    }
    ctx->pc = 0x198B40u;
    SET_GPR_U32(ctx, 31, 0x198B48u);
    ctx->pc = 0x198B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B40u;
    // 0x198b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198B40u, 0x198B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x1000003a  b           . + 4 + (0x3A << 2)
label_198b4c:
    if (ctx->pc == 0x198B4Cu) {
        ctx->pc = 0x198B50u;
        goto label_198b50;
    }
    ctx->pc = 0x198B48u;
    {
        const bool branch_taken_0x198b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198b48) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198B50u;
label_198b50:
    // 0x198b50: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x198b50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198b54:
    // 0x198b54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198b58:
    // 0x198b58: 0x10000023  b           . + 4 + (0x23 << 2)
label_198b5c:
    if (ctx->pc == 0x198B5Cu) {
        ctx->pc = 0x198B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B58u;
        // 0x198b5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B60u;
        goto label_198b60;
    }
    ctx->pc = 0x198B58u;
    {
        const bool branch_taken_0x198b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B58u;
        // 0x198b5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b58) {
            ctx->pc = 0x198BE8u;
            goto label_198be8;
        }
    }
    ctx->pc = 0x198B60u;
label_198b60:
    // 0x198b60: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_198b64:
    // 0x198b64: 0xc04bf44  jal         func_12FD10
label_198b68:
    if (ctx->pc == 0x198B68u) {
        ctx->pc = 0x198B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B64u;
        // 0x198b68: 0x26240490  addiu       $a0, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B6Cu;
        goto label_198b6c;
    }
    ctx->pc = 0x198B64u;
    SET_GPR_U32(ctx, 31, 0x198B6Cu);
    ctx->pc = 0x198B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B64u;
    // 0x198b68: 0x26240490  addiu       $a0, $s1, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x198B64u, 0x198B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B6Cu;
label_198b6c:
    // 0x198b6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198b70:
    // 0x198b70: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
label_198b74:
    if (ctx->pc == 0x198B74u) {
        ctx->pc = 0x198B78u;
        goto label_198b78;
    }
    ctx->pc = 0x198B70u;
    {
        const bool branch_taken_0x198b70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x198b70) {
            ctx->pc = 0x198BDCu;
            goto label_198bdc;
        }
    }
    ctx->pc = 0x198B78u;
label_198b78:
    // 0x198b78: 0x8e2204d0  lw          $v0, 0x4D0($s1)
    ctx->pc = 0x198b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1232)));
label_198b7c:
    // 0x198b7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_198b80:
    if (ctx->pc == 0x198B80u) {
        ctx->pc = 0x198B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B7Cu;
        // 0x198b80: 0x263204d0  addiu       $s2, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B84u;
        goto label_198b84;
    }
    ctx->pc = 0x198B7Cu;
    {
        const bool branch_taken_0x198b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B7Cu;
        // 0x198b80: 0x263204d0  addiu       $s2, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b7c) {
            ctx->pc = 0x198BA8u;
            goto label_198ba8;
        }
    }
    ctx->pc = 0x198B84u;
label_198b84:
    // 0x198b84: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_198b88:
    // 0x198b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x198b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198b8c:
    // 0x198b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198b90:
    // 0x198b90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_198b94:
    // 0x198b94: 0x320f809  jalr        $t9
label_198b98:
    if (ctx->pc == 0x198B98u) {
        ctx->pc = 0x198B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B94u;
        // 0x198b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B9Cu;
        goto label_198b9c;
    }
    ctx->pc = 0x198B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198B9Cu);
        ctx->pc = 0x198B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B94u;
        // 0x198b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B94u, 0x198B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198B9Cu;
label_198b9c:
    // 0x198b9c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x198b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_198ba0:
    // 0x198ba0: 0x1000000e  b           . + 4 + (0xE << 2)
label_198ba4:
    if (ctx->pc == 0x198BA4u) {
        ctx->pc = 0x198BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BA0u;
        // 0x198ba4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BA8u;
        goto label_198ba8;
    }
    ctx->pc = 0x198BA0u;
    {
        const bool branch_taken_0x198ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BA0u;
        // 0x198ba4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ba0) {
            ctx->pc = 0x198BDCu;
            goto label_198bdc;
        }
    }
    ctx->pc = 0x198BA8u;
label_198ba8:
    // 0x198ba8: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_198bac:
    // 0x198bac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_198bb0:
    // 0x198bb0: 0x320f809  jalr        $t9
label_198bb4:
    if (ctx->pc == 0x198BB4u) {
        ctx->pc = 0x198BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BB0u;
        // 0x198bb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BB8u;
        goto label_198bb8;
    }
    ctx->pc = 0x198BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198BB8u);
        ctx->pc = 0x198BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BB0u;
        // 0x198bb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198BB0u, 0x198BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198BB8u;
label_198bb8:
    // 0x198bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198bbc:
    // 0x198bbc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_198bc0:
    if (ctx->pc == 0x198BC0u) {
        ctx->pc = 0x198BC4u;
        goto label_198bc4;
    }
    ctx->pc = 0x198BBCu;
    {
        const bool branch_taken_0x198bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198bbc) {
            ctx->pc = 0x198BD4u;
            goto label_198bd4;
        }
    }
    ctx->pc = 0x198BC4u;
label_198bc4:
    // 0x198bc4: 0xc04be08  jal         func_12F820
label_198bc8:
    if (ctx->pc == 0x198BC8u) {
        ctx->pc = 0x198BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BC4u;
        // 0x198bc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BCCu;
        goto label_198bcc;
    }
    ctx->pc = 0x198BC4u;
    SET_GPR_U32(ctx, 31, 0x198BCCu);
    ctx->pc = 0x198BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BC4u;
    // 0x198bc8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x198BC4u, 0x198BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BCCu;
label_198bcc:
    // 0x198bcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_198bd0:
    if (ctx->pc == 0x198BD0u) {
        ctx->pc = 0x198BD4u;
        goto label_198bd4;
    }
    ctx->pc = 0x198BCCu;
    {
        const bool branch_taken_0x198bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198bcc) {
            ctx->pc = 0x198BDCu;
            goto label_198bdc;
        }
    }
    ctx->pc = 0x198BD4u;
label_198bd4:
    // 0x198bd4: 0x0  nop
    ctx->pc = 0x198bd4u;
    // NOP
label_198bd8:
    // 0x198bd8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198bdc:
    // 0x198bdc: 0x0  nop
    ctx->pc = 0x198bdcu;
    // NOP
label_198be0:
    // 0x198be0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_198be4:
    // 0x198be4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198be8:
    // 0x198be8: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x198be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_198bec:
    // 0x198bec: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_198bf0:
    // 0x198bf0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_198bf4:
    if (ctx->pc == 0x198BF4u) {
        ctx->pc = 0x198BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BF0u;
        // 0x198bf4: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BF8u;
        goto label_198bf8;
    }
    ctx->pc = 0x198BF0u;
    {
        const bool branch_taken_0x198bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BF0u;
        // 0x198bf4: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198bf0) {
            ctx->pc = 0x198B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198b64;
        }
    }
    ctx->pc = 0x198BF8u;
label_198bf8:
    // 0x198bf8: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
label_198bfc:
    if (ctx->pc == 0x198BFCu) {
        ctx->pc = 0x198C00u;
        goto label_198c00;
    }
    ctx->pc = 0x198BF8u;
    {
        const bool branch_taken_0x198bf8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x198bf8) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198C00u;
label_198c00:
    // 0x198c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198c04:
    // 0x198c04: 0xc063e08  jal         func_18F820
label_198c08:
    if (ctx->pc == 0x198C08u) {
        ctx->pc = 0x198C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C04u;
        // 0x198c08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C0Cu;
        goto label_198c0c;
    }
    ctx->pc = 0x198C04u;
    SET_GPR_U32(ctx, 31, 0x198C0Cu);
    ctx->pc = 0x198C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C04u;
    // 0x198c08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198C04u, 0x198C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C0Cu;
label_198c0c:
    // 0x198c0c: 0x10000009  b           . + 4 + (0x9 << 2)
label_198c10:
    if (ctx->pc == 0x198C10u) {
        ctx->pc = 0x198C14u;
        goto label_198c14;
    }
    ctx->pc = 0x198C0Cu;
    {
        const bool branch_taken_0x198c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198c0c) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198C14u;
label_198c14:
    // 0x198c14: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_198c18:
    // 0x198c18: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_198c1c:
    if (ctx->pc == 0x198C1Cu) {
        ctx->pc = 0x198C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C18u;
        // 0x198c1c: 0xa06028f4  sb          $zero, 0x28F4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10484), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C20u;
        goto label_198c20;
    }
    ctx->pc = 0x198C18u;
    {
        const bool branch_taken_0x198c18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C18u;
        // 0x198c1c: 0xa06028f4  sb          $zero, 0x28F4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10484), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c18) {
            ctx->pc = 0x198C34u;
            goto label_198c34;
        }
    }
    ctx->pc = 0x198C20u;
label_198c20:
    // 0x198c20: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_198c24:
    // 0x198c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198c28:
    // 0x198c28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_198c2c:
    // 0x198c2c: 0x320f809  jalr        $t9
label_198c30:
    if (ctx->pc == 0x198C30u) {
        ctx->pc = 0x198C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C2Cu;
        // 0x198c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C34u;
        goto label_198c34;
    }
    ctx->pc = 0x198C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198C34u);
        ctx->pc = 0x198C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C2Cu;
        // 0x198c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C2Cu, 0x198C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198C34u;
label_198c34:
    // 0x198c34: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x198c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_198c38:
    // 0x198c38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x198c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_198c3c:
    // 0x198c3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x198c3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_198c40:
    // 0x198c40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x198c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_198c44:
    // 0x198c44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x198c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_198c48:
    // 0x198c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x198c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198c4c:
    // 0x198c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_198c50:
    // 0x198c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198c54:
    // 0x198c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_198c58:
    // 0x198c58: 0x3e00008  jr          $ra
label_198c5c:
    if (ctx->pc == 0x198C5Cu) {
        ctx->pc = 0x198C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C58u;
        // 0x198c5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C60u;
        goto label_fallthrough_0x198c58;
    }
    ctx->pc = 0x198C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C58u;
        // 0x198c5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198c58:
    ctx->pc = 0x198C60u;
}
