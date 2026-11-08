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

// Function: FUN_001a8080
// Address: 0x1a8080 - 0x1a857c
void FUN_001a8080_0x1a8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8080_0x1a8080");
#endif

    switch (ctx->pc) {
        case 0x1a8080u: goto label_1a8080;
        case 0x1a8084u: goto label_1a8084;
        case 0x1a8088u: goto label_1a8088;
        case 0x1a808cu: goto label_1a808c;
        case 0x1a8090u: goto label_1a8090;
        case 0x1a8094u: goto label_1a8094;
        case 0x1a8098u: goto label_1a8098;
        case 0x1a809cu: goto label_1a809c;
        case 0x1a80a0u: goto label_1a80a0;
        case 0x1a80a4u: goto label_1a80a4;
        case 0x1a80a8u: goto label_1a80a8;
        case 0x1a80acu: goto label_1a80ac;
        case 0x1a80b0u: goto label_1a80b0;
        case 0x1a80b4u: goto label_1a80b4;
        case 0x1a80b8u: goto label_1a80b8;
        case 0x1a80bcu: goto label_1a80bc;
        case 0x1a80c0u: goto label_1a80c0;
        case 0x1a80c4u: goto label_1a80c4;
        case 0x1a80c8u: goto label_1a80c8;
        case 0x1a80ccu: goto label_1a80cc;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80d4u: goto label_1a80d4;
        case 0x1a80d8u: goto label_1a80d8;
        case 0x1a80dcu: goto label_1a80dc;
        case 0x1a80e0u: goto label_1a80e0;
        case 0x1a80e4u: goto label_1a80e4;
        case 0x1a80e8u: goto label_1a80e8;
        case 0x1a80ecu: goto label_1a80ec;
        case 0x1a80f0u: goto label_1a80f0;
        case 0x1a80f4u: goto label_1a80f4;
        case 0x1a80f8u: goto label_1a80f8;
        case 0x1a80fcu: goto label_1a80fc;
        case 0x1a8100u: goto label_1a8100;
        case 0x1a8104u: goto label_1a8104;
        case 0x1a8108u: goto label_1a8108;
        case 0x1a810cu: goto label_1a810c;
        case 0x1a8110u: goto label_1a8110;
        case 0x1a8114u: goto label_1a8114;
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        case 0x1a8140u: goto label_1a8140;
        case 0x1a8144u: goto label_1a8144;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a814cu: goto label_1a814c;
        case 0x1a8150u: goto label_1a8150;
        case 0x1a8154u: goto label_1a8154;
        case 0x1a8158u: goto label_1a8158;
        case 0x1a815cu: goto label_1a815c;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8164u: goto label_1a8164;
        case 0x1a8168u: goto label_1a8168;
        case 0x1a816cu: goto label_1a816c;
        case 0x1a8170u: goto label_1a8170;
        case 0x1a8174u: goto label_1a8174;
        case 0x1a8178u: goto label_1a8178;
        case 0x1a817cu: goto label_1a817c;
        case 0x1a8180u: goto label_1a8180;
        case 0x1a8184u: goto label_1a8184;
        case 0x1a8188u: goto label_1a8188;
        case 0x1a818cu: goto label_1a818c;
        case 0x1a8190u: goto label_1a8190;
        case 0x1a8194u: goto label_1a8194;
        case 0x1a8198u: goto label_1a8198;
        case 0x1a819cu: goto label_1a819c;
        case 0x1a81a0u: goto label_1a81a0;
        case 0x1a81a4u: goto label_1a81a4;
        case 0x1a81a8u: goto label_1a81a8;
        case 0x1a81acu: goto label_1a81ac;
        case 0x1a81b0u: goto label_1a81b0;
        case 0x1a81b4u: goto label_1a81b4;
        case 0x1a81b8u: goto label_1a81b8;
        case 0x1a81bcu: goto label_1a81bc;
        case 0x1a81c0u: goto label_1a81c0;
        case 0x1a81c4u: goto label_1a81c4;
        case 0x1a81c8u: goto label_1a81c8;
        case 0x1a81ccu: goto label_1a81cc;
        case 0x1a81d0u: goto label_1a81d0;
        case 0x1a81d4u: goto label_1a81d4;
        case 0x1a81d8u: goto label_1a81d8;
        case 0x1a81dcu: goto label_1a81dc;
        case 0x1a81e0u: goto label_1a81e0;
        case 0x1a81e4u: goto label_1a81e4;
        case 0x1a81e8u: goto label_1a81e8;
        case 0x1a81ecu: goto label_1a81ec;
        case 0x1a81f0u: goto label_1a81f0;
        case 0x1a81f4u: goto label_1a81f4;
        case 0x1a81f8u: goto label_1a81f8;
        case 0x1a81fcu: goto label_1a81fc;
        case 0x1a8200u: goto label_1a8200;
        case 0x1a8204u: goto label_1a8204;
        case 0x1a8208u: goto label_1a8208;
        case 0x1a820cu: goto label_1a820c;
        case 0x1a8210u: goto label_1a8210;
        case 0x1a8214u: goto label_1a8214;
        case 0x1a8218u: goto label_1a8218;
        case 0x1a821cu: goto label_1a821c;
        case 0x1a8220u: goto label_1a8220;
        case 0x1a8224u: goto label_1a8224;
        case 0x1a8228u: goto label_1a8228;
        case 0x1a822cu: goto label_1a822c;
        case 0x1a8230u: goto label_1a8230;
        case 0x1a8234u: goto label_1a8234;
        case 0x1a8238u: goto label_1a8238;
        case 0x1a823cu: goto label_1a823c;
        case 0x1a8240u: goto label_1a8240;
        case 0x1a8244u: goto label_1a8244;
        case 0x1a8248u: goto label_1a8248;
        case 0x1a824cu: goto label_1a824c;
        case 0x1a8250u: goto label_1a8250;
        case 0x1a8254u: goto label_1a8254;
        case 0x1a8258u: goto label_1a8258;
        case 0x1a825cu: goto label_1a825c;
        case 0x1a8260u: goto label_1a8260;
        case 0x1a8264u: goto label_1a8264;
        case 0x1a8268u: goto label_1a8268;
        case 0x1a826cu: goto label_1a826c;
        case 0x1a8270u: goto label_1a8270;
        case 0x1a8274u: goto label_1a8274;
        case 0x1a8278u: goto label_1a8278;
        case 0x1a827cu: goto label_1a827c;
        case 0x1a8280u: goto label_1a8280;
        case 0x1a8284u: goto label_1a8284;
        case 0x1a8288u: goto label_1a8288;
        case 0x1a828cu: goto label_1a828c;
        case 0x1a8290u: goto label_1a8290;
        case 0x1a8294u: goto label_1a8294;
        case 0x1a8298u: goto label_1a8298;
        case 0x1a829cu: goto label_1a829c;
        case 0x1a82a0u: goto label_1a82a0;
        case 0x1a82a4u: goto label_1a82a4;
        case 0x1a82a8u: goto label_1a82a8;
        case 0x1a82acu: goto label_1a82ac;
        case 0x1a82b0u: goto label_1a82b0;
        case 0x1a82b4u: goto label_1a82b4;
        case 0x1a82b8u: goto label_1a82b8;
        case 0x1a82bcu: goto label_1a82bc;
        case 0x1a82c0u: goto label_1a82c0;
        case 0x1a82c4u: goto label_1a82c4;
        case 0x1a82c8u: goto label_1a82c8;
        case 0x1a82ccu: goto label_1a82cc;
        case 0x1a82d0u: goto label_1a82d0;
        case 0x1a82d4u: goto label_1a82d4;
        case 0x1a82d8u: goto label_1a82d8;
        case 0x1a82dcu: goto label_1a82dc;
        case 0x1a82e0u: goto label_1a82e0;
        case 0x1a82e4u: goto label_1a82e4;
        case 0x1a82e8u: goto label_1a82e8;
        case 0x1a82ecu: goto label_1a82ec;
        case 0x1a82f0u: goto label_1a82f0;
        case 0x1a82f4u: goto label_1a82f4;
        case 0x1a82f8u: goto label_1a82f8;
        case 0x1a82fcu: goto label_1a82fc;
        case 0x1a8300u: goto label_1a8300;
        case 0x1a8304u: goto label_1a8304;
        case 0x1a8308u: goto label_1a8308;
        case 0x1a830cu: goto label_1a830c;
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8314u: goto label_1a8314;
        case 0x1a8318u: goto label_1a8318;
        case 0x1a831cu: goto label_1a831c;
        case 0x1a8320u: goto label_1a8320;
        case 0x1a8324u: goto label_1a8324;
        case 0x1a8328u: goto label_1a8328;
        case 0x1a832cu: goto label_1a832c;
        case 0x1a8330u: goto label_1a8330;
        case 0x1a8334u: goto label_1a8334;
        case 0x1a8338u: goto label_1a8338;
        case 0x1a833cu: goto label_1a833c;
        case 0x1a8340u: goto label_1a8340;
        case 0x1a8344u: goto label_1a8344;
        case 0x1a8348u: goto label_1a8348;
        case 0x1a834cu: goto label_1a834c;
        case 0x1a8350u: goto label_1a8350;
        case 0x1a8354u: goto label_1a8354;
        case 0x1a8358u: goto label_1a8358;
        case 0x1a835cu: goto label_1a835c;
        case 0x1a8360u: goto label_1a8360;
        case 0x1a8364u: goto label_1a8364;
        case 0x1a8368u: goto label_1a8368;
        case 0x1a836cu: goto label_1a836c;
        case 0x1a8370u: goto label_1a8370;
        case 0x1a8374u: goto label_1a8374;
        case 0x1a8378u: goto label_1a8378;
        case 0x1a837cu: goto label_1a837c;
        case 0x1a8380u: goto label_1a8380;
        case 0x1a8384u: goto label_1a8384;
        case 0x1a8388u: goto label_1a8388;
        case 0x1a838cu: goto label_1a838c;
        case 0x1a8390u: goto label_1a8390;
        case 0x1a8394u: goto label_1a8394;
        case 0x1a8398u: goto label_1a8398;
        case 0x1a839cu: goto label_1a839c;
        case 0x1a83a0u: goto label_1a83a0;
        case 0x1a83a4u: goto label_1a83a4;
        case 0x1a83a8u: goto label_1a83a8;
        case 0x1a83acu: goto label_1a83ac;
        case 0x1a83b0u: goto label_1a83b0;
        case 0x1a83b4u: goto label_1a83b4;
        case 0x1a83b8u: goto label_1a83b8;
        case 0x1a83bcu: goto label_1a83bc;
        case 0x1a83c0u: goto label_1a83c0;
        case 0x1a83c4u: goto label_1a83c4;
        case 0x1a83c8u: goto label_1a83c8;
        case 0x1a83ccu: goto label_1a83cc;
        case 0x1a83d0u: goto label_1a83d0;
        case 0x1a83d4u: goto label_1a83d4;
        case 0x1a83d8u: goto label_1a83d8;
        case 0x1a83dcu: goto label_1a83dc;
        case 0x1a83e0u: goto label_1a83e0;
        case 0x1a83e4u: goto label_1a83e4;
        case 0x1a83e8u: goto label_1a83e8;
        case 0x1a83ecu: goto label_1a83ec;
        case 0x1a83f0u: goto label_1a83f0;
        case 0x1a83f4u: goto label_1a83f4;
        case 0x1a83f8u: goto label_1a83f8;
        case 0x1a83fcu: goto label_1a83fc;
        case 0x1a8400u: goto label_1a8400;
        case 0x1a8404u: goto label_1a8404;
        case 0x1a8408u: goto label_1a8408;
        case 0x1a840cu: goto label_1a840c;
        case 0x1a8410u: goto label_1a8410;
        case 0x1a8414u: goto label_1a8414;
        case 0x1a8418u: goto label_1a8418;
        case 0x1a841cu: goto label_1a841c;
        case 0x1a8420u: goto label_1a8420;
        case 0x1a8424u: goto label_1a8424;
        case 0x1a8428u: goto label_1a8428;
        case 0x1a842cu: goto label_1a842c;
        case 0x1a8430u: goto label_1a8430;
        case 0x1a8434u: goto label_1a8434;
        case 0x1a8438u: goto label_1a8438;
        case 0x1a843cu: goto label_1a843c;
        case 0x1a8440u: goto label_1a8440;
        case 0x1a8444u: goto label_1a8444;
        case 0x1a8448u: goto label_1a8448;
        case 0x1a844cu: goto label_1a844c;
        case 0x1a8450u: goto label_1a8450;
        case 0x1a8454u: goto label_1a8454;
        case 0x1a8458u: goto label_1a8458;
        case 0x1a845cu: goto label_1a845c;
        case 0x1a8460u: goto label_1a8460;
        case 0x1a8464u: goto label_1a8464;
        case 0x1a8468u: goto label_1a8468;
        case 0x1a846cu: goto label_1a846c;
        case 0x1a8470u: goto label_1a8470;
        case 0x1a8474u: goto label_1a8474;
        case 0x1a8478u: goto label_1a8478;
        case 0x1a847cu: goto label_1a847c;
        case 0x1a8480u: goto label_1a8480;
        case 0x1a8484u: goto label_1a8484;
        case 0x1a8488u: goto label_1a8488;
        case 0x1a848cu: goto label_1a848c;
        case 0x1a8490u: goto label_1a8490;
        case 0x1a8494u: goto label_1a8494;
        case 0x1a8498u: goto label_1a8498;
        case 0x1a849cu: goto label_1a849c;
        case 0x1a84a0u: goto label_1a84a0;
        case 0x1a84a4u: goto label_1a84a4;
        case 0x1a84a8u: goto label_1a84a8;
        case 0x1a84acu: goto label_1a84ac;
        case 0x1a84b0u: goto label_1a84b0;
        case 0x1a84b4u: goto label_1a84b4;
        case 0x1a84b8u: goto label_1a84b8;
        case 0x1a84bcu: goto label_1a84bc;
        case 0x1a84c0u: goto label_1a84c0;
        case 0x1a84c4u: goto label_1a84c4;
        case 0x1a84c8u: goto label_1a84c8;
        case 0x1a84ccu: goto label_1a84cc;
        case 0x1a84d0u: goto label_1a84d0;
        case 0x1a84d4u: goto label_1a84d4;
        case 0x1a84d8u: goto label_1a84d8;
        case 0x1a84dcu: goto label_1a84dc;
        case 0x1a84e0u: goto label_1a84e0;
        case 0x1a84e4u: goto label_1a84e4;
        case 0x1a84e8u: goto label_1a84e8;
        case 0x1a84ecu: goto label_1a84ec;
        case 0x1a84f0u: goto label_1a84f0;
        case 0x1a84f4u: goto label_1a84f4;
        case 0x1a84f8u: goto label_1a84f8;
        case 0x1a84fcu: goto label_1a84fc;
        case 0x1a8500u: goto label_1a8500;
        case 0x1a8504u: goto label_1a8504;
        case 0x1a8508u: goto label_1a8508;
        case 0x1a850cu: goto label_1a850c;
        case 0x1a8510u: goto label_1a8510;
        case 0x1a8514u: goto label_1a8514;
        case 0x1a8518u: goto label_1a8518;
        case 0x1a851cu: goto label_1a851c;
        case 0x1a8520u: goto label_1a8520;
        case 0x1a8524u: goto label_1a8524;
        case 0x1a8528u: goto label_1a8528;
        case 0x1a852cu: goto label_1a852c;
        case 0x1a8530u: goto label_1a8530;
        case 0x1a8534u: goto label_1a8534;
        case 0x1a8538u: goto label_1a8538;
        case 0x1a853cu: goto label_1a853c;
        case 0x1a8540u: goto label_1a8540;
        case 0x1a8544u: goto label_1a8544;
        case 0x1a8548u: goto label_1a8548;
        case 0x1a854cu: goto label_1a854c;
        case 0x1a8550u: goto label_1a8550;
        case 0x1a8554u: goto label_1a8554;
        case 0x1a8558u: goto label_1a8558;
        case 0x1a855cu: goto label_1a855c;
        case 0x1a8560u: goto label_1a8560;
        case 0x1a8564u: goto label_1a8564;
        case 0x1a8568u: goto label_1a8568;
        case 0x1a856cu: goto label_1a856c;
        case 0x1a8570u: goto label_1a8570;
        case 0x1a8574u: goto label_1a8574;
        case 0x1a8578u: goto label_1a8578;
        default: break;
    }

    ctx->pc = 0x1a8080u;

label_1a8080:
    // 0x1a8080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a8084:
    // 0x1a8084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a8088:
    // 0x1a8088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a808c:
    // 0x1a808c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a8090:
    // 0x1a8090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a8090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8094:
    // 0x1a8094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a8098:
    // 0x1a8098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a8098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a809c:
    // 0x1a809c: 0x8c830664  lw          $v1, 0x664($a0)
    ctx->pc = 0x1a809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
label_1a80a0:
    // 0x1a80a0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1a80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a80a4:
    // 0x1a80a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1a80a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1a80a8:
    // 0x1a80a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1a80ac:
    if (ctx->pc == 0x1A80ACu) {
        ctx->pc = 0x1A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A8u;
        // 0x1a80ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80B0u;
        goto label_1a80b0;
    }
    ctx->pc = 0x1A80A8u;
    {
        const bool branch_taken_0x1a80a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A8u;
        // 0x1a80ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80a8) {
            ctx->pc = 0x1A80E8u;
            goto label_1a80e8;
        }
    }
    ctx->pc = 0x1A80B0u;
label_1a80b0:
    // 0x1a80b0: 0xc064918  jal         func_192460
label_1a80b4:
    if (ctx->pc == 0x1A80B4u) {
        ctx->pc = 0x1A80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80B0u;
        // 0x1a80b4: 0x8f8580f4  lw          $a1, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80B8u;
        goto label_1a80b8;
    }
    ctx->pc = 0x1A80B0u;
    SET_GPR_U32(ctx, 31, 0x1A80B8u);
    ctx->pc = 0x1A80B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80B0u;
    // 0x1a80b4: 0x8f8580f4  lw          $a1, -0x7F0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A80B0u, 0x1A80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80B8u;
label_1a80b8:
    // 0x1a80b8: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1a80bc:
    // 0x1a80bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1a80c0:
    if (ctx->pc == 0x1A80C0u) {
        ctx->pc = 0x1A80C4u;
        goto label_1a80c4;
    }
    ctx->pc = 0x1A80BCu;
    {
        const bool branch_taken_0x1a80bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a80bc) {
            ctx->pc = 0x1A80E8u;
            goto label_1a80e8;
        }
    }
    ctx->pc = 0x1A80C4u;
label_1a80c4:
    // 0x1a80c4: 0x12600126  beqz        $s3, . + 4 + (0x126 << 2)
label_1a80c8:
    if (ctx->pc == 0x1A80C8u) {
        ctx->pc = 0x1A80CCu;
        goto label_1a80cc;
    }
    ctx->pc = 0x1A80C4u;
    {
        const bool branch_taken_0x1a80c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a80c4) {
            ctx->pc = 0x1A8560u;
            goto label_1a8560;
        }
    }
    ctx->pc = 0x1A80CCu;
label_1a80cc:
    // 0x1a80cc: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a80d0:
    // 0x1a80d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a80d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a80d4:
    // 0x1a80d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a80d8:
    // 0x1a80d8: 0x320f809  jalr        $t9
label_1a80dc:
    if (ctx->pc == 0x1A80DCu) {
        ctx->pc = 0x1A80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80D8u;
        // 0x1a80dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80E0u;
        goto label_1a80e0;
    }
    ctx->pc = 0x1A80D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A80E0u);
        ctx->pc = 0x1A80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80D8u;
        // 0x1a80dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A80D8u, 0x1A80E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A80E0u;
label_1a80e0:
    // 0x1a80e0: 0x10000120  b           . + 4 + (0x120 << 2)
label_1a80e4:
    if (ctx->pc == 0x1A80E4u) {
        ctx->pc = 0x1A80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E0u;
        // 0x1a80e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80E8u;
        goto label_1a80e8;
    }
    ctx->pc = 0x1A80E0u;
    {
        const bool branch_taken_0x1a80e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E0u;
        // 0x1a80e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e0) {
            ctx->pc = 0x1A8564u;
            goto label_1a8564;
        }
    }
    ctx->pc = 0x1A80E8u;
label_1a80e8:
    // 0x1a80e8: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a80ec:
    // 0x1a80ec: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x1a80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a80f0:
    // 0x1a80f0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1a80f4:
    if (ctx->pc == 0x1A80F4u) {
        ctx->pc = 0x1A80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80F0u;
        // 0x1a80f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80F8u;
        goto label_1a80f8;
    }
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80F0u;
        // 0x1a80f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A816Cu;
            goto label_1a816c;
        }
    }
    ctx->pc = 0x1A80F8u;
label_1a80f8:
    // 0x1a80f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a80f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a80fc:
    // 0x1a80fc: 0xa020dfb0  sb          $zero, -0x2050($at)
    ctx->pc = 0x1a80fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959024), (uint8_t)GPR_U32(ctx, 0));
label_1a8100:
    // 0x1a8100: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a8100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a8104:
    // 0x1a8104: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8108:
    // 0x1a8108: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1a810c:
    // 0x1a810c: 0xac23dfb4  sw          $v1, -0x204C($at)
    ctx->pc = 0x1a810cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959028), GPR_U32(ctx, 3));
label_1a8110:
    // 0x1a8110: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8114:
    // 0x1a8114: 0xa020dfb8  sb          $zero, -0x2048($at)
    ctx->pc = 0x1a8114u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959032), (uint8_t)GPR_U32(ctx, 0));
label_1a8118:
    // 0x1a8118: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a8118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a811c:
    // 0x1a811c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8120:
    // 0x1a8120: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a8124:
    // 0x1a8124: 0xac23dfbc  sw          $v1, -0x2044($at)
    ctx->pc = 0x1a8124u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959036), GPR_U32(ctx, 3));
label_1a8128:
    // 0x1a8128: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a812c:
    // 0x1a812c: 0xa020dfc0  sb          $zero, -0x2040($at)
    ctx->pc = 0x1a812cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959040), (uint8_t)GPR_U32(ctx, 0));
label_1a8130:
    // 0x1a8130: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a8134:
    // 0x1a8134: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1a8134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1a8138:
    // 0x1a8138: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1a8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1a813c:
    // 0x1a813c: 0xac23dfc4  sw          $v1, -0x203C($at)
    ctx->pc = 0x1a813cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959044), GPR_U32(ctx, 3));
label_1a8140:
    // 0x1a8140: 0xaf80870c  sw          $zero, -0x78F4($gp)
    ctx->pc = 0x1a8140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
label_1a8144:
    // 0x1a8144: 0x12600106  beqz        $s3, . + 4 + (0x106 << 2)
label_1a8148:
    if (ctx->pc == 0x1A8148u) {
        ctx->pc = 0x1A8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8144u;
        // 0x1a8148: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A814Cu;
        goto label_1a814c;
    }
    ctx->pc = 0x1A8144u;
    {
        const bool branch_taken_0x1a8144 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8144u;
        // 0x1a8148: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8144) {
            ctx->pc = 0x1A8560u;
            goto label_1a8560;
        }
    }
    ctx->pc = 0x1A814Cu;
label_1a814c:
    // 0x1a814c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a8150:
    // 0x1a8150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8154:
    // 0x1a8154: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a8158:
    // 0x1a8158: 0x320f809  jalr        $t9
label_1a815c:
    if (ctx->pc == 0x1A815Cu) {
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8158u;
        // 0x1a815c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8160u;
        goto label_1a8160;
    }
    ctx->pc = 0x1A8158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8160u);
        ctx->pc = 0x1A815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8158u;
        // 0x1a815c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8158u, 0x1A8160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8160u;
label_1a8160:
    // 0x1a8160: 0x100000ff  b           . + 4 + (0xFF << 2)
label_1a8164:
    if (ctx->pc == 0x1A8164u) {
        ctx->pc = 0x1A8168u;
        goto label_1a8168;
    }
    ctx->pc = 0x1A8160u;
    {
        const bool branch_taken_0x1a8160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8160) {
            ctx->pc = 0x1A8560u;
            goto label_1a8560;
        }
    }
    ctx->pc = 0x1A8168u;
label_1a8168:
    // 0x1a8168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a816c:
    // 0x1a816c: 0xc063dd4  jal         func_18F750
label_1a8170:
    if (ctx->pc == 0x1A8170u) {
        ctx->pc = 0x1A8174u;
        goto label_1a8174;
    }
    ctx->pc = 0x1A816Cu;
    SET_GPR_U32(ctx, 31, 0x1A8174u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A816Cu, 0x1A8174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8174u;
label_1a8174:
    // 0x1a8174: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a8174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a8178:
    // 0x1a8178: 0x10430094  beq         $v0, $v1, . + 4 + (0x94 << 2)
label_1a817c:
    if (ctx->pc == 0x1A817Cu) {
        ctx->pc = 0x1A8180u;
        goto label_1a8180;
    }
    ctx->pc = 0x1A8178u;
    {
        const bool branch_taken_0x1a8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8178) {
            ctx->pc = 0x1A83CCu;
            goto label_1a83cc;
        }
    }
    ctx->pc = 0x1A8180u;
label_1a8180:
    // 0x1a8180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8184:
    // 0x1a8184: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
label_1a8188:
    if (ctx->pc == 0x1A8188u) {
        ctx->pc = 0x1A818Cu;
        goto label_1a818c;
    }
    ctx->pc = 0x1A8184u;
    {
        const bool branch_taken_0x1a8184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8184) {
            ctx->pc = 0x1A823Cu;
            goto label_1a823c;
        }
    }
    ctx->pc = 0x1A818Cu;
label_1a818c:
    // 0x1a818c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8190:
    if (ctx->pc == 0x1A8190u) {
        ctx->pc = 0x1A8194u;
        goto label_1a8194;
    }
    ctx->pc = 0x1A818Cu;
    {
        const bool branch_taken_0x1a818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a818c) {
            ctx->pc = 0x1A819Cu;
            goto label_1a819c;
        }
    }
    ctx->pc = 0x1A8194u;
label_1a8194:
    // 0x1a8194: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1a8198:
    if (ctx->pc == 0x1A8198u) {
        ctx->pc = 0x1A819Cu;
        goto label_1a819c;
    }
    ctx->pc = 0x1A8194u;
    {
        const bool branch_taken_0x1a8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8194) {
            ctx->pc = 0x1A855Cu;
            goto label_1a855c;
        }
    }
    ctx->pc = 0x1A819Cu;
label_1a819c:
    // 0x1a819c: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a81a0:
    // 0x1a81a0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_1a81a4:
    // 0x1a81a4: 0x8c872840  lw          $a3, 0x2840($a0)
    ctx->pc = 0x1a81a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10304)));
label_1a81a8:
    // 0x1a81a8: 0x1067001c  beq         $v1, $a3, . + 4 + (0x1C << 2)
label_1a81ac:
    if (ctx->pc == 0x1A81ACu) {
        ctx->pc = 0x1A81B0u;
        goto label_1a81b0;
    }
    ctx->pc = 0x1A81A8u;
    {
        const bool branch_taken_0x1a81a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1a81a8) {
            ctx->pc = 0x1A821Cu;
            goto label_1a821c;
        }
    }
    ctx->pc = 0x1A81B0u;
label_1a81b0:
    // 0x1a81b0: 0xaf878710  sw          $a3, -0x78F0($gp)
    ctx->pc = 0x1a81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 7));
label_1a81b4:
    // 0x1a81b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a81b8:
    // 0x1a81b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a81b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a81bc:
    // 0x1a81bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a81c0:
    // 0x1a81c0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a81c4:
    // 0x1a81c4: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
label_1a81c8:
    // 0x1a81c8: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1a81cc:
    // 0x1a81cc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1a81ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1a81d0:
    // 0x1a81d0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1a81d4:
    if (ctx->pc == 0x1A81D4u) {
        ctx->pc = 0x1A81D8u;
        goto label_1a81d8;
    }
    ctx->pc = 0x1A81D0u;
    {
        const bool branch_taken_0x1a81d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a81d0) {
            ctx->pc = 0x1A820Cu;
            goto label_1a820c;
        }
    }
    ctx->pc = 0x1A81D8u;
label_1a81d8:
    // 0x1a81d8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1a81dc:
    // 0x1a81dc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1a81e0:
    // 0x1a81e0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_1a81e4:
    if (ctx->pc == 0x1A81E4u) {
        ctx->pc = 0x1A81E8u;
        goto label_1a81e8;
    }
    ctx->pc = 0x1A81E0u;
    {
        const bool branch_taken_0x1a81e0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a81e0) {
            ctx->pc = 0x1A820Cu;
            goto label_1a820c;
        }
    }
    ctx->pc = 0x1A81E8u;
label_1a81e8:
    // 0x1a81e8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a81e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a81ec:
    // 0x1a81ec: 0x0  nop
    ctx->pc = 0x1a81ecu;
    // NOP
label_1a81f0:
    // 0x1a81f0: 0x0  nop
    ctx->pc = 0x1a81f0u;
    // NOP
label_1a81f4:
    // 0x1a81f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a81f8:
    // 0x1a81f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a81fc:
    if (ctx->pc == 0x1A81FCu) {
        ctx->pc = 0x1A8200u;
        goto label_1a8200;
    }
    ctx->pc = 0x1A81F8u;
    {
        const bool branch_taken_0x1a81f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a81f8) {
            ctx->pc = 0x1A820Cu;
            goto label_1a820c;
        }
    }
    ctx->pc = 0x1A8200u;
label_1a8200:
    // 0x1a8200: 0xaf86870c  sw          $a2, -0x78F4($gp)
    ctx->pc = 0x1a8200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 6));
label_1a8204:
    // 0x1a8204: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a8208:
    if (ctx->pc == 0x1A8208u) {
        ctx->pc = 0x1A8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8204u;
        // 0x1a8208: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A820Cu;
        goto label_1a820c;
    }
    ctx->pc = 0x1A8204u;
    {
        const bool branch_taken_0x1a8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8204u;
        // 0x1a8208: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8204) {
            ctx->pc = 0x1A8224u;
            goto label_1a8224;
        }
    }
    ctx->pc = 0x1A820Cu;
label_1a820c:
    // 0x1a820c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a8210:
    // 0x1a8210: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1a8210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a8214:
    // 0x1a8214: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1a8218:
    if (ctx->pc == 0x1A8218u) {
        ctx->pc = 0x1A8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8214u;
        // 0x1a8218: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A821Cu;
        goto label_1a821c;
    }
    ctx->pc = 0x1A8214u;
    {
        const bool branch_taken_0x1a8214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8214u;
        // 0x1a8218: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8214) {
            ctx->pc = 0x1A81C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a81c8;
        }
    }
    ctx->pc = 0x1A821Cu;
label_1a821c:
    // 0x1a821c: 0x0  nop
    ctx->pc = 0x1a821cu;
    // NOP
label_1a8220:
    // 0x1a8220: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a8220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8224:
    // 0x1a8224: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
label_1a8228:
    if (ctx->pc == 0x1A8228u) {
        ctx->pc = 0x1A822Cu;
        goto label_1a822c;
    }
    ctx->pc = 0x1A8224u;
    {
        const bool branch_taken_0x1a8224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8224) {
            ctx->pc = 0x1A855Cu;
            goto label_1a855c;
        }
    }
    ctx->pc = 0x1A822Cu;
label_1a822c:
    // 0x1a822c: 0xc063e14  jal         func_18F850
label_1a8230:
    if (ctx->pc == 0x1A8230u) {
        ctx->pc = 0x1A8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A822Cu;
        // 0x1a8230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8234u;
        goto label_1a8234;
    }
    ctx->pc = 0x1A822Cu;
    SET_GPR_U32(ctx, 31, 0x1A8234u);
    ctx->pc = 0x1A8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A822Cu;
    // 0x1a8230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A822Cu, 0x1A8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8234u;
label_1a8234:
    // 0x1a8234: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1a8238:
    if (ctx->pc == 0x1A8238u) {
        ctx->pc = 0x1A823Cu;
        goto label_1a823c;
    }
    ctx->pc = 0x1A8234u;
    {
        const bool branch_taken_0x1a8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8234) {
            ctx->pc = 0x1A855Cu;
            goto label_1a855c;
        }
    }
    ctx->pc = 0x1A823Cu;
label_1a823c:
    // 0x1a823c: 0x8f8580f4  lw          $a1, -0x7F0C($gp)
    ctx->pc = 0x1a823cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
label_1a8240:
    // 0x1a8240: 0xc064918  jal         func_192460
label_1a8244:
    if (ctx->pc == 0x1A8244u) {
        ctx->pc = 0x1A8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8240u;
        // 0x1a8244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8248u;
        goto label_1a8248;
    }
    ctx->pc = 0x1A8240u;
    SET_GPR_U32(ctx, 31, 0x1A8248u);
    ctx->pc = 0x1A8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8240u;
    // 0x1a8244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A8240u, 0x1A8248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8248u;
label_1a8248:
    // 0x1a8248: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1a8248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_1a824c:
    // 0x1a824c: 0xae6006c0  sw          $zero, 0x6C0($s3)
    ctx->pc = 0x1a824cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1728), GPR_U32(ctx, 0));
label_1a8250:
    // 0x1a8250: 0xae6006c4  sw          $zero, 0x6C4($s3)
    ctx->pc = 0x1a8250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1732), GPR_U32(ctx, 0));
label_1a8254:
    // 0x1a8254: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a8258:
    // 0x1a8258: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x1a8258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a825c:
    // 0x1a825c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1a825cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8260:
    // 0x1a8260: 0x1040fffe  beqz        $v0, . + 4 + (-0x2 << 2)
label_1a8264:
    if (ctx->pc == 0x1A8264u) {
        ctx->pc = 0x1A8268u;
        goto label_1a8268;
    }
    ctx->pc = 0x1A8260u;
    {
        const bool branch_taken_0x1a8260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8260) {
            ctx->pc = 0x1A825Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a825c;
        }
    }
    ctx->pc = 0x1A8268u;
label_1a8268:
    // 0x1a8268: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a8268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a826c:
    // 0x1a826c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a826cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8270:
    // 0x1a8270: 0xc057040  jal         func_15C100
label_1a8274:
    if (ctx->pc == 0x1A8274u) {
        ctx->pc = 0x1A8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8270u;
        // 0x1a8274: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8278u;
        goto label_1a8278;
    }
    ctx->pc = 0x1A8270u;
    SET_GPR_U32(ctx, 31, 0x1A8278u);
    ctx->pc = 0x1A8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8270u;
    // 0x1a8274: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A8270u, 0x1A8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8278u;
label_1a8278:
    // 0x1a8278: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1a8278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1a827c:
    // 0x1a827c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x1a827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1a8280:
    // 0x1a8280: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1a8284:
    if (ctx->pc == 0x1A8284u) {
        ctx->pc = 0x1A8288u;
        goto label_1a8288;
    }
    ctx->pc = 0x1A8280u;
    {
        const bool branch_taken_0x1a8280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8280) {
            ctx->pc = 0x1A8290u;
            goto label_1a8290;
        }
    }
    ctx->pc = 0x1A8288u;
label_1a8288:
    // 0x1a8288: 0x10000044  b           . + 4 + (0x44 << 2)
label_1a828c:
    if (ctx->pc == 0x1A828Cu) {
        ctx->pc = 0x1A8290u;
        goto label_1a8290;
    }
    ctx->pc = 0x1A8288u;
    {
        const bool branch_taken_0x1a8288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8288) {
            ctx->pc = 0x1A839Cu;
            goto label_1a839c;
        }
    }
    ctx->pc = 0x1A8290u;
label_1a8290:
    // 0x1a8290: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8294:
    // 0x1a8294: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a8294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a8298:
    // 0x1a8298: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a829c:
    // 0x1a829c: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1a829cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
label_1a82a0:
    // 0x1a82a0: 0xac600678  sw          $zero, 0x678($v1)
    ctx->pc = 0x1a82a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 0));
label_1a82a4:
    // 0x1a82a4: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a82a8:
    // 0x1a82a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a82ac:
    // 0x1a82ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a82acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a82b0:
    // 0x1a82b0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a82b4:
    // 0x1a82b4: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a82b8:
    // 0x1a82b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a82bc:
    // 0x1a82bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a82c0:
    // 0x1a82c0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a82c4:
    // 0x1a82c4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a82c8:
    // 0x1a82c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a82cc:
    // 0x1a82cc: 0x320f809  jalr        $t9
label_1a82d0:
    if (ctx->pc == 0x1A82D0u) {
        ctx->pc = 0x1A82D4u;
        goto label_1a82d4;
    }
    ctx->pc = 0x1A82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A82D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A82CCu, 0x1A82D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A82D4u;
label_1a82d4:
    // 0x1a82d4: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a82d8:
    // 0x1a82d8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a82dc:
    // 0x1a82dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a82dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a82e0:
    // 0x1a82e0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a82e4:
    // 0x1a82e4: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a82e8:
    // 0x1a82e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a82e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a82ec:
    // 0x1a82ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a82f0:
    // 0x1a82f0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a82f4:
    // 0x1a82f4: 0xc042570  jal         func_1095C0
label_1a82f8:
    if (ctx->pc == 0x1A82F8u) {
        ctx->pc = 0x1A82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82F4u;
        // 0x1a82f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A82FCu;
        goto label_1a82fc;
    }
    ctx->pc = 0x1A82F4u;
    SET_GPR_U32(ctx, 31, 0x1A82FCu);
    ctx->pc = 0x1A82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82F4u;
    // 0x1a82f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A82F4u, 0x1A82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82FCu;
label_1a82fc:
    // 0x1a82fc: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8300:
    // 0x1a8300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8304:
    // 0x1a8304: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8308:
    // 0x1a8308: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a8308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a830c:
    // 0x1a830c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a8310:
    // 0x1a8310: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8314:
    // 0x1a8314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8318:
    // 0x1a8318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a831c:
    // 0x1a831c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a8320:
    // 0x1a8320: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x1a8320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
label_1a8324:
    // 0x1a8324: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a8324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8328:
    // 0x1a8328: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a832c:
    // 0x1a832c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a8330:
    // 0x1a8330: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a8334:
    // 0x1a8334: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8338:
    // 0x1a8338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a833c:
    // 0x1a833c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8340:
    // 0x1a8340: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a8344:
    // 0x1a8344: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a8344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8348:
    // 0x1a8348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a8348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a834c:
    // 0x1a834c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a834cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a8350:
    // 0x1a8350: 0x320f809  jalr        $t9
label_1a8354:
    if (ctx->pc == 0x1A8354u) {
        ctx->pc = 0x1A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8350u;
        // 0x1a8354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8358u;
        goto label_1a8358;
    }
    ctx->pc = 0x1A8350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8358u);
        ctx->pc = 0x1A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8350u;
        // 0x1a8354: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8350u, 0x1A8358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8358u;
label_1a8358:
    // 0x1a8358: 0x8e6306c4  lw          $v1, 0x6C4($s3)
    ctx->pc = 0x1a8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a835c:
    // 0x1a835c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8360:
    // 0x1a8360: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8364:
    // 0x1a8364: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a8364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a8368:
    // 0x1a8368: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a836c:
    // 0x1a836c: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8370:
    // 0x1a8370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8374:
    // 0x1a8374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8378:
    // 0x1a8378: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a837c:
    // 0x1a837c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8380:
    // 0x1a8380: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8384:
    // 0x1a8384: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1a8388:
    // 0x1a8388: 0x320f809  jalr        $t9
label_1a838c:
    if (ctx->pc == 0x1A838Cu) {
        ctx->pc = 0x1A838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8388u;
        // 0x1a838c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8390u;
        goto label_1a8390;
    }
    ctx->pc = 0x1A8388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8390u);
        ctx->pc = 0x1A838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8388u;
        // 0x1a838c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8388u, 0x1A8390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8390u;
label_1a8390:
    // 0x1a8390: 0x8e6206c4  lw          $v0, 0x6C4($s3)
    ctx->pc = 0x1a8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8394:
    // 0x1a8394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8398:
    // 0x1a8398: 0xae6206c4  sw          $v0, 0x6C4($s3)
    ctx->pc = 0x1a8398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1732), GPR_U32(ctx, 2));
label_1a839c:
    // 0x1a839c: 0x0  nop
    ctx->pc = 0x1a839cu;
    // NOP
label_1a83a0:
    // 0x1a83a0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a83a4:
    // 0x1a83a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a83a8:
    // 0x1a83a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a83ac:
    // 0x1a83ac: 0x1062ffab  beq         $v1, $v0, . + 4 + (-0x55 << 2)
label_1a83b0:
    if (ctx->pc == 0x1A83B0u) {
        ctx->pc = 0x1A83B4u;
        goto label_1a83b4;
    }
    ctx->pc = 0x1A83ACu;
    {
        const bool branch_taken_0x1a83ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a83ac) {
            ctx->pc = 0x1A825Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a825c;
        }
    }
    ctx->pc = 0x1A83B4u;
label_1a83b4:
    // 0x1a83b4: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
label_1a83b8:
    // 0x1a83b8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a83b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a83bc:
    // 0x1a83bc: 0xc064fb8  jal         func_193EE0
label_1a83c0:
    if (ctx->pc == 0x1A83C0u) {
        ctx->pc = 0x1A83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83BCu;
        // 0x1a83c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A83C4u;
        goto label_1a83c4;
    }
    ctx->pc = 0x1A83BCu;
    SET_GPR_U32(ctx, 31, 0x1A83C4u);
    ctx->pc = 0x1A83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83BCu;
    // 0x1a83c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A83BCu, 0x1A83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83C4u;
label_1a83c4:
    // 0x1a83c4: 0xc063e14  jal         func_18F850
label_1a83c8:
    if (ctx->pc == 0x1A83C8u) {
        ctx->pc = 0x1A83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83C4u;
        // 0x1a83c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A83CCu;
        goto label_1a83cc;
    }
    ctx->pc = 0x1A83C4u;
    SET_GPR_U32(ctx, 31, 0x1A83CCu);
    ctx->pc = 0x1A83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83C4u;
    // 0x1a83c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A83C4u, 0x1A83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83CCu;
label_1a83cc:
    // 0x1a83cc: 0x8f8580f4  lw          $a1, -0x7F0C($gp)
    ctx->pc = 0x1a83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
label_1a83d0:
    // 0x1a83d0: 0xc064918  jal         func_192460
label_1a83d4:
    if (ctx->pc == 0x1A83D4u) {
        ctx->pc = 0x1A83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83D0u;
        // 0x1a83d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A83D8u;
        goto label_1a83d8;
    }
    ctx->pc = 0x1A83D0u;
    SET_GPR_U32(ctx, 31, 0x1A83D8u);
    ctx->pc = 0x1A83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83D0u;
    // 0x1a83d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A83D0u, 0x1A83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83D8u;
label_1a83d8:
    // 0x1a83d8: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x1a83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_1a83dc:
    // 0x1a83dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1a83e0:
    if (ctx->pc == 0x1A83E0u) {
        ctx->pc = 0x1A83E4u;
        goto label_1a83e4;
    }
    ctx->pc = 0x1A83DCu;
    {
        const bool branch_taken_0x1a83dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83dc) {
            ctx->pc = 0x1A83F8u;
            goto label_1a83f8;
        }
    }
    ctx->pc = 0x1A83E4u;
label_1a83e4:
    // 0x1a83e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a83e8:
    // 0x1a83e8: 0xc063e08  jal         func_18F820
label_1a83ec:
    if (ctx->pc == 0x1A83ECu) {
        ctx->pc = 0x1A83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A83E8u;
        // 0x1a83ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A83F0u;
        goto label_1a83f0;
    }
    ctx->pc = 0x1A83E8u;
    SET_GPR_U32(ctx, 31, 0x1A83F0u);
    ctx->pc = 0x1A83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83E8u;
    // 0x1a83ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A83E8u, 0x1A83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83F0u;
label_1a83f0:
    // 0x1a83f0: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1a83f4:
    if (ctx->pc == 0x1A83F4u) {
        ctx->pc = 0x1A83F8u;
        goto label_1a83f8;
    }
    ctx->pc = 0x1A83F0u;
    {
        const bool branch_taken_0x1a83f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83f0) {
            ctx->pc = 0x1A855Cu;
            goto label_1a855c;
        }
    }
    ctx->pc = 0x1A83F8u;
label_1a83f8:
    // 0x1a83f8: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1a83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a83fc:
    // 0x1a83fc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x1a83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_1a8400:
    // 0x1a8400: 0x8c872840  lw          $a3, 0x2840($a0)
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10304)));
label_1a8404:
    // 0x1a8404: 0x1067001b  beq         $v1, $a3, . + 4 + (0x1B << 2)
label_1a8408:
    if (ctx->pc == 0x1A8408u) {
        ctx->pc = 0x1A840Cu;
        goto label_1a840c;
    }
    ctx->pc = 0x1A8404u;
    {
        const bool branch_taken_0x1a8404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1a8404) {
            ctx->pc = 0x1A8474u;
            goto label_1a8474;
        }
    }
    ctx->pc = 0x1A840Cu;
label_1a840c:
    // 0x1a840c: 0xaf878710  sw          $a3, -0x78F0($gp)
    ctx->pc = 0x1a840cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 7));
label_1a8410:
    // 0x1a8410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8414:
    // 0x1a8414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a8414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8418:
    // 0x1a8418: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a841c:
    // 0x1a841c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a8420:
    // 0x1a8420: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x1a8420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
label_1a8424:
    // 0x1a8424: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1a8424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1a8428:
    // 0x1a8428: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1a8428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1a842c:
    // 0x1a842c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1a8430:
    if (ctx->pc == 0x1A8430u) {
        ctx->pc = 0x1A8434u;
        goto label_1a8434;
    }
    ctx->pc = 0x1A842Cu;
    {
        const bool branch_taken_0x1a842c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a842c) {
            ctx->pc = 0x1A8464u;
            goto label_1a8464;
        }
    }
    ctx->pc = 0x1A8434u;
label_1a8434:
    // 0x1a8434: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1a8438:
    // 0x1a8438: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1a843c:
    // 0x1a843c: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
label_1a8440:
    if (ctx->pc == 0x1A8440u) {
        ctx->pc = 0x1A8444u;
        goto label_1a8444;
    }
    ctx->pc = 0x1A843Cu;
    {
        const bool branch_taken_0x1a843c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a843c) {
            ctx->pc = 0x1A8464u;
            goto label_1a8464;
        }
    }
    ctx->pc = 0x1A8444u;
label_1a8444:
    // 0x1a8444: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a8444u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a8448:
    // 0x1a8448: 0x0  nop
    ctx->pc = 0x1a8448u;
    // NOP
label_1a844c:
    // 0x1a844c: 0x0  nop
    ctx->pc = 0x1a844cu;
    // NOP
label_1a8450:
    // 0x1a8450: 0x1810  mfhi        $v1
    ctx->pc = 0x1a8450u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a8454:
    // 0x1a8454: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1a8458:
    if (ctx->pc == 0x1A8458u) {
        ctx->pc = 0x1A845Cu;
        goto label_1a845c;
    }
    ctx->pc = 0x1A8454u;
    {
        const bool branch_taken_0x1a8454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8454) {
            ctx->pc = 0x1A8464u;
            goto label_1a8464;
        }
    }
    ctx->pc = 0x1A845Cu;
label_1a845c:
    // 0x1a845c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a8460:
    if (ctx->pc == 0x1A8460u) {
        ctx->pc = 0x1A8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A845Cu;
        // 0x1a8460: 0xaf86870c  sw          $a2, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8464u;
        goto label_1a8464;
    }
    ctx->pc = 0x1A845Cu;
    {
        const bool branch_taken_0x1a845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A845Cu;
        // 0x1a8460: 0xaf86870c  sw          $a2, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a845c) {
            ctx->pc = 0x1A8474u;
            goto label_1a8474;
        }
    }
    ctx->pc = 0x1A8464u;
label_1a8464:
    // 0x1a8464: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a8468:
    // 0x1a8468: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1a8468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a846c:
    // 0x1a846c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1a8470:
    if (ctx->pc == 0x1A8470u) {
        ctx->pc = 0x1A8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A846Cu;
        // 0x1a8470: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8474u;
        goto label_1a8474;
    }
    ctx->pc = 0x1A846Cu;
    {
        const bool branch_taken_0x1a846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A846Cu;
        // 0x1a8470: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a846c) {
            ctx->pc = 0x1A8424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8424;
        }
    }
    ctx->pc = 0x1A8474u;
label_1a8474:
    // 0x1a8474: 0x0  nop
    ctx->pc = 0x1a8474u;
    // NOP
label_1a8478:
    // 0x1a8478: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a8478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a847c:
    // 0x1a847c: 0x8e6406c4  lw          $a0, 0x6C4($s3)
    ctx->pc = 0x1a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8480:
    // 0x1a8480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8484:
    // 0x1a8484: 0x10000032  b           . + 4 + (0x32 << 2)
label_1a8488:
    if (ctx->pc == 0x1A8488u) {
        ctx->pc = 0x1A8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8484u;
        // 0x1a8488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A848Cu;
        goto label_1a848c;
    }
    ctx->pc = 0x1A8484u;
    {
        const bool branch_taken_0x1a8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8484u;
        // 0x1a8488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8484) {
            ctx->pc = 0x1A8550u;
            goto label_1a8550;
        }
    }
    ctx->pc = 0x1A848Cu;
label_1a848c:
    // 0x1a848c: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x1a848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_1a8490:
    // 0x1a8490: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a8494:
    // 0x1a8494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a8498:
    // 0x1a8498: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a8498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a849c:
    // 0x1a849c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a84a0:
    // 0x1a84a0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1a84a4:
    // 0x1a84a4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_1a84a8:
    if (ctx->pc == 0x1A84A8u) {
        ctx->pc = 0x1A84ACu;
        goto label_1a84ac;
    }
    ctx->pc = 0x1A84A4u;
    {
        const bool branch_taken_0x1a84a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a84a4) {
            ctx->pc = 0x1A8548u;
            goto label_1a8548;
        }
    }
    ctx->pc = 0x1A84ACu;
label_1a84ac:
    // 0x1a84ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a84acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a84b0:
    // 0x1a84b0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a84b4:
    if (ctx->pc == 0x1A84B4u) {
        ctx->pc = 0x1A84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84B0u;
        // 0x1a84b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84B8u;
        goto label_1a84b8;
    }
    ctx->pc = 0x1A84B0u;
    {
        const bool branch_taken_0x1a84b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84B0u;
        // 0x1a84b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84b0) {
            ctx->pc = 0x1A8500u;
            goto label_1a8500;
        }
    }
    ctx->pc = 0x1A84B8u;
label_1a84b8:
    // 0x1a84b8: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1a84bc:
    // 0x1a84bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a84c0:
    // 0x1a84c0: 0x24720670  addiu       $s2, $v1, 0x670
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1648));
label_1a84c4:
    // 0x1a84c4: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1a84c8:
    // 0x1a84c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a84cc:
    // 0x1a84cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a84d0:
    // 0x1a84d0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a84d4:
    // 0x1a84d4: 0xc042570  jal         func_1095C0
label_1a84d8:
    if (ctx->pc == 0x1A84D8u) {
        ctx->pc = 0x1A84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84D4u;
        // 0x1a84d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A84DCu;
        goto label_1a84dc;
    }
    ctx->pc = 0x1A84D4u;
    SET_GPR_U32(ctx, 31, 0x1A84DCu);
    ctx->pc = 0x1A84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84D4u;
    // 0x1a84d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A84D4u, 0x1A84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84DCu;
label_1a84dc:
    // 0x1a84dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a84e0:
    // 0x1a84e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a84e4:
    // 0x1a84e4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a84e8:
    // 0x1a84e8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1a84e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a84ec:
    // 0x1a84ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a84f0:
    // 0x1a84f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a84f4:
    // 0x1a84f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a84f8:
    // 0x1a84f8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a84fc:
    // 0x1a84fc: 0xa04401d3  sb          $a0, 0x1D3($v0)
    ctx->pc = 0x1a84fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 4));
label_1a8500:
    // 0x1a8500: 0x8e6206c4  lw          $v0, 0x6C4($s3)
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8504:
    // 0x1a8504: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8508:
    // 0x1a8508: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1a850c:
    if (ctx->pc == 0x1A850Cu) {
        ctx->pc = 0x1A850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8508u;
        // 0x1a850c: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8510u;
        goto label_1a8510;
    }
    ctx->pc = 0x1A8508u;
    {
        const bool branch_taken_0x1a8508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8508u;
        // 0x1a850c: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8508) {
            ctx->pc = 0x1A84BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a84bc;
        }
    }
    ctx->pc = 0x1A8510u;
label_1a8510:
    // 0x1a8510: 0x8f86870c  lw          $a2, -0x78F4($gp)
    ctx->pc = 0x1a8510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
label_1a8514:
    // 0x1a8514: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a8514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a8518:
    // 0x1a8518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a851c:
    // 0x1a851c: 0xc064a88  jal         func_192A20
label_1a8520:
    if (ctx->pc == 0x1A8520u) {
        ctx->pc = 0x1A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A851Cu;
        // 0x1a8520: 0x24a507a8  addiu       $a1, $a1, 0x7A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8524u;
        goto label_1a8524;
    }
    ctx->pc = 0x1A851Cu;
    SET_GPR_U32(ctx, 31, 0x1A8524u);
    ctx->pc = 0x1A8520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A851Cu;
    // 0x1a8520: 0x24a507a8  addiu       $a1, $a1, 0x7A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A851Cu, 0x1A8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8524u;
label_1a8524:
    // 0x1a8524: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_1a8528:
    if (ctx->pc == 0x1A8528u) {
        ctx->pc = 0x1A852Cu;
        goto label_1a852c;
    }
    ctx->pc = 0x1A8524u;
    {
        const bool branch_taken_0x1a8524 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8524) {
            ctx->pc = 0x1A8560u;
            goto label_1a8560;
        }
    }
    ctx->pc = 0x1A852Cu;
label_1a852c:
    // 0x1a852c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a852cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a8530:
    // 0x1a8530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8534:
    // 0x1a8534: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a8534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a8538:
    // 0x1a8538: 0x320f809  jalr        $t9
label_1a853c:
    if (ctx->pc == 0x1A853Cu) {
        ctx->pc = 0x1A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8538u;
        // 0x1a853c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8540u;
        goto label_1a8540;
    }
    ctx->pc = 0x1A8538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8540u);
        ctx->pc = 0x1A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8538u;
        // 0x1a853c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8538u, 0x1A8540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8540u;
label_1a8540:
    // 0x1a8540: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a8544:
    if (ctx->pc == 0x1A8544u) {
        ctx->pc = 0x1A8548u;
        goto label_1a8548;
    }
    ctx->pc = 0x1A8540u;
    {
        const bool branch_taken_0x1a8540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8540) {
            ctx->pc = 0x1A8560u;
            goto label_1a8560;
        }
    }
    ctx->pc = 0x1A8548u;
label_1a8548:
    // 0x1a8548: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1a854c:
    // 0x1a854c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a854cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a8550:
    // 0x1a8550: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1a8550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a8554:
    // 0x1a8554: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_1a8558:
    if (ctx->pc == 0x1A8558u) {
        ctx->pc = 0x1A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8554u;
        // 0x1a8558: 0x2671821  addu        $v1, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A855Cu;
        goto label_1a855c;
    }
    ctx->pc = 0x1A8554u;
    {
        const bool branch_taken_0x1a8554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8554u;
        // 0x1a8558: 0x2671821  addu        $v1, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8554) {
            ctx->pc = 0x1A8490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8490;
        }
    }
    ctx->pc = 0x1A855Cu;
label_1a855c:
    // 0x1a855c: 0x0  nop
    ctx->pc = 0x1a855cu;
    // NOP
label_1a8560:
    // 0x1a8560: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8564:
    // 0x1a8564: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8568:
    // 0x1a8568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a856c:
    // 0x1a856c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a856cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8570:
    // 0x1a8570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a8570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8574:
    // 0x1a8574: 0x3e00008  jr          $ra
label_1a8578:
    if (ctx->pc == 0x1A8578u) {
        ctx->pc = 0x1A8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8574u;
        // 0x1a8578: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A857Cu;
        goto label_fallthrough_0x1a8574;
    }
    ctx->pc = 0x1A8574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8574u;
        // 0x1a8578: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8574:
    ctx->pc = 0x1A857Cu;
}
