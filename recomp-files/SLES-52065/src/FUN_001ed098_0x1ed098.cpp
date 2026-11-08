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

// Function: FUN_001ed098
// Address: 0x1ed098 - 0x1ed684
void FUN_001ed098_0x1ed098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed098_0x1ed098");
#endif

    switch (ctx->pc) {
        case 0x1ed098u: goto label_1ed098;
        case 0x1ed09cu: goto label_1ed09c;
        case 0x1ed0a0u: goto label_1ed0a0;
        case 0x1ed0a4u: goto label_1ed0a4;
        case 0x1ed0a8u: goto label_1ed0a8;
        case 0x1ed0acu: goto label_1ed0ac;
        case 0x1ed0b0u: goto label_1ed0b0;
        case 0x1ed0b4u: goto label_1ed0b4;
        case 0x1ed0b8u: goto label_1ed0b8;
        case 0x1ed0bcu: goto label_1ed0bc;
        case 0x1ed0c0u: goto label_1ed0c0;
        case 0x1ed0c4u: goto label_1ed0c4;
        case 0x1ed0c8u: goto label_1ed0c8;
        case 0x1ed0ccu: goto label_1ed0cc;
        case 0x1ed0d0u: goto label_1ed0d0;
        case 0x1ed0d4u: goto label_1ed0d4;
        case 0x1ed0d8u: goto label_1ed0d8;
        case 0x1ed0dcu: goto label_1ed0dc;
        case 0x1ed0e0u: goto label_1ed0e0;
        case 0x1ed0e4u: goto label_1ed0e4;
        case 0x1ed0e8u: goto label_1ed0e8;
        case 0x1ed0ecu: goto label_1ed0ec;
        case 0x1ed0f0u: goto label_1ed0f0;
        case 0x1ed0f4u: goto label_1ed0f4;
        case 0x1ed0f8u: goto label_1ed0f8;
        case 0x1ed0fcu: goto label_1ed0fc;
        case 0x1ed100u: goto label_1ed100;
        case 0x1ed104u: goto label_1ed104;
        case 0x1ed108u: goto label_1ed108;
        case 0x1ed10cu: goto label_1ed10c;
        case 0x1ed110u: goto label_1ed110;
        case 0x1ed114u: goto label_1ed114;
        case 0x1ed118u: goto label_1ed118;
        case 0x1ed11cu: goto label_1ed11c;
        case 0x1ed120u: goto label_1ed120;
        case 0x1ed124u: goto label_1ed124;
        case 0x1ed128u: goto label_1ed128;
        case 0x1ed12cu: goto label_1ed12c;
        case 0x1ed130u: goto label_1ed130;
        case 0x1ed134u: goto label_1ed134;
        case 0x1ed138u: goto label_1ed138;
        case 0x1ed13cu: goto label_1ed13c;
        case 0x1ed140u: goto label_1ed140;
        case 0x1ed144u: goto label_1ed144;
        case 0x1ed148u: goto label_1ed148;
        case 0x1ed14cu: goto label_1ed14c;
        case 0x1ed150u: goto label_1ed150;
        case 0x1ed154u: goto label_1ed154;
        case 0x1ed158u: goto label_1ed158;
        case 0x1ed15cu: goto label_1ed15c;
        case 0x1ed160u: goto label_1ed160;
        case 0x1ed164u: goto label_1ed164;
        case 0x1ed168u: goto label_1ed168;
        case 0x1ed16cu: goto label_1ed16c;
        case 0x1ed170u: goto label_1ed170;
        case 0x1ed174u: goto label_1ed174;
        case 0x1ed178u: goto label_1ed178;
        case 0x1ed17cu: goto label_1ed17c;
        case 0x1ed180u: goto label_1ed180;
        case 0x1ed184u: goto label_1ed184;
        case 0x1ed188u: goto label_1ed188;
        case 0x1ed18cu: goto label_1ed18c;
        case 0x1ed190u: goto label_1ed190;
        case 0x1ed194u: goto label_1ed194;
        case 0x1ed198u: goto label_1ed198;
        case 0x1ed19cu: goto label_1ed19c;
        case 0x1ed1a0u: goto label_1ed1a0;
        case 0x1ed1a4u: goto label_1ed1a4;
        case 0x1ed1a8u: goto label_1ed1a8;
        case 0x1ed1acu: goto label_1ed1ac;
        case 0x1ed1b0u: goto label_1ed1b0;
        case 0x1ed1b4u: goto label_1ed1b4;
        case 0x1ed1b8u: goto label_1ed1b8;
        case 0x1ed1bcu: goto label_1ed1bc;
        case 0x1ed1c0u: goto label_1ed1c0;
        case 0x1ed1c4u: goto label_1ed1c4;
        case 0x1ed1c8u: goto label_1ed1c8;
        case 0x1ed1ccu: goto label_1ed1cc;
        case 0x1ed1d0u: goto label_1ed1d0;
        case 0x1ed1d4u: goto label_1ed1d4;
        case 0x1ed1d8u: goto label_1ed1d8;
        case 0x1ed1dcu: goto label_1ed1dc;
        case 0x1ed1e0u: goto label_1ed1e0;
        case 0x1ed1e4u: goto label_1ed1e4;
        case 0x1ed1e8u: goto label_1ed1e8;
        case 0x1ed1ecu: goto label_1ed1ec;
        case 0x1ed1f0u: goto label_1ed1f0;
        case 0x1ed1f4u: goto label_1ed1f4;
        case 0x1ed1f8u: goto label_1ed1f8;
        case 0x1ed1fcu: goto label_1ed1fc;
        case 0x1ed200u: goto label_1ed200;
        case 0x1ed204u: goto label_1ed204;
        case 0x1ed208u: goto label_1ed208;
        case 0x1ed20cu: goto label_1ed20c;
        case 0x1ed210u: goto label_1ed210;
        case 0x1ed214u: goto label_1ed214;
        case 0x1ed218u: goto label_1ed218;
        case 0x1ed21cu: goto label_1ed21c;
        case 0x1ed220u: goto label_1ed220;
        case 0x1ed224u: goto label_1ed224;
        case 0x1ed228u: goto label_1ed228;
        case 0x1ed22cu: goto label_1ed22c;
        case 0x1ed230u: goto label_1ed230;
        case 0x1ed234u: goto label_1ed234;
        case 0x1ed238u: goto label_1ed238;
        case 0x1ed23cu: goto label_1ed23c;
        case 0x1ed240u: goto label_1ed240;
        case 0x1ed244u: goto label_1ed244;
        case 0x1ed248u: goto label_1ed248;
        case 0x1ed24cu: goto label_1ed24c;
        case 0x1ed250u: goto label_1ed250;
        case 0x1ed254u: goto label_1ed254;
        case 0x1ed258u: goto label_1ed258;
        case 0x1ed25cu: goto label_1ed25c;
        case 0x1ed260u: goto label_1ed260;
        case 0x1ed264u: goto label_1ed264;
        case 0x1ed268u: goto label_1ed268;
        case 0x1ed26cu: goto label_1ed26c;
        case 0x1ed270u: goto label_1ed270;
        case 0x1ed274u: goto label_1ed274;
        case 0x1ed278u: goto label_1ed278;
        case 0x1ed27cu: goto label_1ed27c;
        case 0x1ed280u: goto label_1ed280;
        case 0x1ed284u: goto label_1ed284;
        case 0x1ed288u: goto label_1ed288;
        case 0x1ed28cu: goto label_1ed28c;
        case 0x1ed290u: goto label_1ed290;
        case 0x1ed294u: goto label_1ed294;
        case 0x1ed298u: goto label_1ed298;
        case 0x1ed29cu: goto label_1ed29c;
        case 0x1ed2a0u: goto label_1ed2a0;
        case 0x1ed2a4u: goto label_1ed2a4;
        case 0x1ed2a8u: goto label_1ed2a8;
        case 0x1ed2acu: goto label_1ed2ac;
        case 0x1ed2b0u: goto label_1ed2b0;
        case 0x1ed2b4u: goto label_1ed2b4;
        case 0x1ed2b8u: goto label_1ed2b8;
        case 0x1ed2bcu: goto label_1ed2bc;
        case 0x1ed2c0u: goto label_1ed2c0;
        case 0x1ed2c4u: goto label_1ed2c4;
        case 0x1ed2c8u: goto label_1ed2c8;
        case 0x1ed2ccu: goto label_1ed2cc;
        case 0x1ed2d0u: goto label_1ed2d0;
        case 0x1ed2d4u: goto label_1ed2d4;
        case 0x1ed2d8u: goto label_1ed2d8;
        case 0x1ed2dcu: goto label_1ed2dc;
        case 0x1ed2e0u: goto label_1ed2e0;
        case 0x1ed2e4u: goto label_1ed2e4;
        case 0x1ed2e8u: goto label_1ed2e8;
        case 0x1ed2ecu: goto label_1ed2ec;
        case 0x1ed2f0u: goto label_1ed2f0;
        case 0x1ed2f4u: goto label_1ed2f4;
        case 0x1ed2f8u: goto label_1ed2f8;
        case 0x1ed2fcu: goto label_1ed2fc;
        case 0x1ed300u: goto label_1ed300;
        case 0x1ed304u: goto label_1ed304;
        case 0x1ed308u: goto label_1ed308;
        case 0x1ed30cu: goto label_1ed30c;
        case 0x1ed310u: goto label_1ed310;
        case 0x1ed314u: goto label_1ed314;
        case 0x1ed318u: goto label_1ed318;
        case 0x1ed31cu: goto label_1ed31c;
        case 0x1ed320u: goto label_1ed320;
        case 0x1ed324u: goto label_1ed324;
        case 0x1ed328u: goto label_1ed328;
        case 0x1ed32cu: goto label_1ed32c;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed338u: goto label_1ed338;
        case 0x1ed33cu: goto label_1ed33c;
        case 0x1ed340u: goto label_1ed340;
        case 0x1ed344u: goto label_1ed344;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed34cu: goto label_1ed34c;
        case 0x1ed350u: goto label_1ed350;
        case 0x1ed354u: goto label_1ed354;
        case 0x1ed358u: goto label_1ed358;
        case 0x1ed35cu: goto label_1ed35c;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed364u: goto label_1ed364;
        case 0x1ed368u: goto label_1ed368;
        case 0x1ed36cu: goto label_1ed36c;
        case 0x1ed370u: goto label_1ed370;
        case 0x1ed374u: goto label_1ed374;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed37cu: goto label_1ed37c;
        case 0x1ed380u: goto label_1ed380;
        case 0x1ed384u: goto label_1ed384;
        case 0x1ed388u: goto label_1ed388;
        case 0x1ed38cu: goto label_1ed38c;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed394u: goto label_1ed394;
        case 0x1ed398u: goto label_1ed398;
        case 0x1ed39cu: goto label_1ed39c;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3a4u: goto label_1ed3a4;
        case 0x1ed3a8u: goto label_1ed3a8;
        case 0x1ed3acu: goto label_1ed3ac;
        case 0x1ed3b0u: goto label_1ed3b0;
        case 0x1ed3b4u: goto label_1ed3b4;
        case 0x1ed3b8u: goto label_1ed3b8;
        case 0x1ed3bcu: goto label_1ed3bc;
        case 0x1ed3c0u: goto label_1ed3c0;
        case 0x1ed3c4u: goto label_1ed3c4;
        case 0x1ed3c8u: goto label_1ed3c8;
        case 0x1ed3ccu: goto label_1ed3cc;
        case 0x1ed3d0u: goto label_1ed3d0;
        case 0x1ed3d4u: goto label_1ed3d4;
        case 0x1ed3d8u: goto label_1ed3d8;
        case 0x1ed3dcu: goto label_1ed3dc;
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e4u: goto label_1ed3e4;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3ecu: goto label_1ed3ec;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed3fcu: goto label_1ed3fc;
        case 0x1ed400u: goto label_1ed400;
        case 0x1ed404u: goto label_1ed404;
        case 0x1ed408u: goto label_1ed408;
        case 0x1ed40cu: goto label_1ed40c;
        case 0x1ed410u: goto label_1ed410;
        case 0x1ed414u: goto label_1ed414;
        case 0x1ed418u: goto label_1ed418;
        case 0x1ed41cu: goto label_1ed41c;
        case 0x1ed420u: goto label_1ed420;
        case 0x1ed424u: goto label_1ed424;
        case 0x1ed428u: goto label_1ed428;
        case 0x1ed42cu: goto label_1ed42c;
        case 0x1ed430u: goto label_1ed430;
        case 0x1ed434u: goto label_1ed434;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed43cu: goto label_1ed43c;
        case 0x1ed440u: goto label_1ed440;
        case 0x1ed444u: goto label_1ed444;
        case 0x1ed448u: goto label_1ed448;
        case 0x1ed44cu: goto label_1ed44c;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed454u: goto label_1ed454;
        case 0x1ed458u: goto label_1ed458;
        case 0x1ed45cu: goto label_1ed45c;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed464u: goto label_1ed464;
        case 0x1ed468u: goto label_1ed468;
        case 0x1ed46cu: goto label_1ed46c;
        case 0x1ed470u: goto label_1ed470;
        case 0x1ed474u: goto label_1ed474;
        case 0x1ed478u: goto label_1ed478;
        case 0x1ed47cu: goto label_1ed47c;
        case 0x1ed480u: goto label_1ed480;
        case 0x1ed484u: goto label_1ed484;
        case 0x1ed488u: goto label_1ed488;
        case 0x1ed48cu: goto label_1ed48c;
        case 0x1ed490u: goto label_1ed490;
        case 0x1ed494u: goto label_1ed494;
        case 0x1ed498u: goto label_1ed498;
        case 0x1ed49cu: goto label_1ed49c;
        case 0x1ed4a0u: goto label_1ed4a0;
        case 0x1ed4a4u: goto label_1ed4a4;
        case 0x1ed4a8u: goto label_1ed4a8;
        case 0x1ed4acu: goto label_1ed4ac;
        case 0x1ed4b0u: goto label_1ed4b0;
        case 0x1ed4b4u: goto label_1ed4b4;
        case 0x1ed4b8u: goto label_1ed4b8;
        case 0x1ed4bcu: goto label_1ed4bc;
        case 0x1ed4c0u: goto label_1ed4c0;
        case 0x1ed4c4u: goto label_1ed4c4;
        case 0x1ed4c8u: goto label_1ed4c8;
        case 0x1ed4ccu: goto label_1ed4cc;
        case 0x1ed4d0u: goto label_1ed4d0;
        case 0x1ed4d4u: goto label_1ed4d4;
        case 0x1ed4d8u: goto label_1ed4d8;
        case 0x1ed4dcu: goto label_1ed4dc;
        case 0x1ed4e0u: goto label_1ed4e0;
        case 0x1ed4e4u: goto label_1ed4e4;
        case 0x1ed4e8u: goto label_1ed4e8;
        case 0x1ed4ecu: goto label_1ed4ec;
        case 0x1ed4f0u: goto label_1ed4f0;
        case 0x1ed4f4u: goto label_1ed4f4;
        case 0x1ed4f8u: goto label_1ed4f8;
        case 0x1ed4fcu: goto label_1ed4fc;
        case 0x1ed500u: goto label_1ed500;
        case 0x1ed504u: goto label_1ed504;
        case 0x1ed508u: goto label_1ed508;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed510u: goto label_1ed510;
        case 0x1ed514u: goto label_1ed514;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed520u: goto label_1ed520;
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed530u: goto label_1ed530;
        case 0x1ed534u: goto label_1ed534;
        case 0x1ed538u: goto label_1ed538;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed540u: goto label_1ed540;
        case 0x1ed544u: goto label_1ed544;
        case 0x1ed548u: goto label_1ed548;
        case 0x1ed54cu: goto label_1ed54c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed554u: goto label_1ed554;
        case 0x1ed558u: goto label_1ed558;
        case 0x1ed55cu: goto label_1ed55c;
        case 0x1ed560u: goto label_1ed560;
        case 0x1ed564u: goto label_1ed564;
        case 0x1ed568u: goto label_1ed568;
        case 0x1ed56cu: goto label_1ed56c;
        case 0x1ed570u: goto label_1ed570;
        case 0x1ed574u: goto label_1ed574;
        case 0x1ed578u: goto label_1ed578;
        case 0x1ed57cu: goto label_1ed57c;
        case 0x1ed580u: goto label_1ed580;
        case 0x1ed584u: goto label_1ed584;
        case 0x1ed588u: goto label_1ed588;
        case 0x1ed58cu: goto label_1ed58c;
        case 0x1ed590u: goto label_1ed590;
        case 0x1ed594u: goto label_1ed594;
        case 0x1ed598u: goto label_1ed598;
        case 0x1ed59cu: goto label_1ed59c;
        case 0x1ed5a0u: goto label_1ed5a0;
        case 0x1ed5a4u: goto label_1ed5a4;
        case 0x1ed5a8u: goto label_1ed5a8;
        case 0x1ed5acu: goto label_1ed5ac;
        case 0x1ed5b0u: goto label_1ed5b0;
        case 0x1ed5b4u: goto label_1ed5b4;
        case 0x1ed5b8u: goto label_1ed5b8;
        case 0x1ed5bcu: goto label_1ed5bc;
        case 0x1ed5c0u: goto label_1ed5c0;
        case 0x1ed5c4u: goto label_1ed5c4;
        case 0x1ed5c8u: goto label_1ed5c8;
        case 0x1ed5ccu: goto label_1ed5cc;
        case 0x1ed5d0u: goto label_1ed5d0;
        case 0x1ed5d4u: goto label_1ed5d4;
        case 0x1ed5d8u: goto label_1ed5d8;
        case 0x1ed5dcu: goto label_1ed5dc;
        case 0x1ed5e0u: goto label_1ed5e0;
        case 0x1ed5e4u: goto label_1ed5e4;
        case 0x1ed5e8u: goto label_1ed5e8;
        case 0x1ed5ecu: goto label_1ed5ec;
        case 0x1ed5f0u: goto label_1ed5f0;
        case 0x1ed5f4u: goto label_1ed5f4;
        case 0x1ed5f8u: goto label_1ed5f8;
        case 0x1ed5fcu: goto label_1ed5fc;
        case 0x1ed600u: goto label_1ed600;
        case 0x1ed604u: goto label_1ed604;
        case 0x1ed608u: goto label_1ed608;
        case 0x1ed60cu: goto label_1ed60c;
        case 0x1ed610u: goto label_1ed610;
        case 0x1ed614u: goto label_1ed614;
        case 0x1ed618u: goto label_1ed618;
        case 0x1ed61cu: goto label_1ed61c;
        case 0x1ed620u: goto label_1ed620;
        case 0x1ed624u: goto label_1ed624;
        case 0x1ed628u: goto label_1ed628;
        case 0x1ed62cu: goto label_1ed62c;
        case 0x1ed630u: goto label_1ed630;
        case 0x1ed634u: goto label_1ed634;
        case 0x1ed638u: goto label_1ed638;
        case 0x1ed63cu: goto label_1ed63c;
        case 0x1ed640u: goto label_1ed640;
        case 0x1ed644u: goto label_1ed644;
        case 0x1ed648u: goto label_1ed648;
        case 0x1ed64cu: goto label_1ed64c;
        case 0x1ed650u: goto label_1ed650;
        case 0x1ed654u: goto label_1ed654;
        case 0x1ed658u: goto label_1ed658;
        case 0x1ed65cu: goto label_1ed65c;
        case 0x1ed660u: goto label_1ed660;
        case 0x1ed664u: goto label_1ed664;
        case 0x1ed668u: goto label_1ed668;
        case 0x1ed66cu: goto label_1ed66c;
        case 0x1ed670u: goto label_1ed670;
        case 0x1ed674u: goto label_1ed674;
        case 0x1ed678u: goto label_1ed678;
        case 0x1ed67cu: goto label_1ed67c;
        case 0x1ed680u: goto label_1ed680;
        default: break;
    }

    ctx->pc = 0x1ed098u;

label_1ed098:
    // 0x1ed098: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ed098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ed09c:
    // 0x1ed09c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ed09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1ed0a0:
    // 0x1ed0a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ed0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1ed0a4:
    // 0x1ed0a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ed0a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed0a8:
    // 0x1ed0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed0ac:
    // 0x1ed0ac: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1ed0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1ed0b0:
    // 0x1ed0b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ed0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ed0b4:
    // 0x1ed0b4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1ed0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_1ed0b8:
    // 0x1ed0b8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ed0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1ed0bc:
    // 0x1ed0bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ed0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1ed0c0:
    // 0x1ed0c0: 0xc07d0d8  jal         func_1F4360
label_1ed0c4:
    if (ctx->pc == 0x1ED0C4u) {
        ctx->pc = 0x1ED0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0C0u;
        // 0x1ed0c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED0C8u;
        goto label_1ed0c8;
    }
    ctx->pc = 0x1ED0C0u;
    SET_GPR_U32(ctx, 31, 0x1ED0C8u);
    ctx->pc = 0x1ED0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0C0u;
    // 0x1ed0c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1ED0C0u, 0x1ED0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0C8u;
label_1ed0c8:
    // 0x1ed0c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ed0c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed0cc:
    // 0x1ed0cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed0ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed0d0:
    // 0x1ed0d0: 0x1040015e  beqz        $v0, . + 4 + (0x15E << 2)
label_1ed0d4:
    if (ctx->pc == 0x1ED0D4u) {
        ctx->pc = 0x1ED0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0D0u;
        // 0x1ed0d4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED0D8u;
        goto label_1ed0d8;
    }
    ctx->pc = 0x1ED0D0u;
    {
        const bool branch_taken_0x1ed0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0D0u;
        // 0x1ed0d4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0d0) {
            ctx->pc = 0x1ED64Cu;
            goto label_1ed64c;
        }
    }
    ctx->pc = 0x1ED0D8u;
label_1ed0d8:
    // 0x1ed0d8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ed0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ed0dc:
    // 0x1ed0dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ed0dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ed0e0:
    // 0x1ed0e0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1ed0e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1ed0e4:
    // 0x1ed0e4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1ed0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1ed0e8:
    // 0x1ed0e8: 0x1482014b  bne         $a0, $v0, . + 4 + (0x14B << 2)
label_1ed0ec:
    if (ctx->pc == 0x1ED0ECu) {
        ctx->pc = 0x1ED0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0E8u;
        // 0x1ed0ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED0F0u;
        goto label_1ed0f0;
    }
    ctx->pc = 0x1ED0E8u;
    {
        const bool branch_taken_0x1ed0e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0E8u;
        // 0x1ed0ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed0e8) {
            ctx->pc = 0x1ED618u;
            goto label_1ed618;
        }
    }
    ctx->pc = 0x1ED0F0u;
label_1ed0f0:
    // 0x1ed0f0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1ed0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ed0f4:
    // 0x1ed0f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1ed0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ed0f8:
    // 0x1ed0f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ed0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed0fc:
    // 0x1ed0fc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1ed0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1ed100:
    // 0x1ed100: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ed100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ed104:
    // 0x1ed104: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1ed104u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1ed108:
    // 0x1ed108: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x1ed108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
label_1ed10c:
    // 0x1ed10c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_1ed110:
    if (ctx->pc == 0x1ED110u) {
        ctx->pc = 0x1ED110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED10Cu;
        // 0x1ed110: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED114u;
        goto label_1ed114;
    }
    ctx->pc = 0x1ED10Cu;
    {
        const bool branch_taken_0x1ed10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED10Cu;
        // 0x1ed110: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed10c) {
            ctx->pc = 0x1ED630u;
            goto label_1ed630;
        }
    }
    ctx->pc = 0x1ED114u;
label_1ed114:
    // 0x1ed114: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ed118:
    // 0x1ed118: 0x244242a0  addiu       $v0, $v0, 0x42A0
    ctx->pc = 0x1ed118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17056));
label_1ed11c:
    // 0x1ed11c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ed120:
    // 0x1ed120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ed124:
    // 0x1ed124: 0x800008  jr          $a0
label_1ed128:
    if (ctx->pc == 0x1ED128u) {
        ctx->pc = 0x1ED12Cu;
        goto label_1ed12c;
    }
    ctx->pc = 0x1ED124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED12Cu: goto label_1ed12c;
            case 0x1ED1B0u: goto label_1ed1b0;
            case 0x1ED1BCu: goto label_1ed1bc;
            case 0x1ED1C4u: goto label_1ed1c4;
            case 0x1ED280u: goto label_1ed280;
            case 0x1ED340u: goto label_1ed340;
            case 0x1ED430u: goto label_1ed430;
            case 0x1ED500u: goto label_1ed500;
            case 0x1ED54Cu: goto label_1ed54c;
            case 0x1ED5F0u: goto label_1ed5f0;
            case 0x1ED638u: goto label_1ed638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED124u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ED12Cu;
label_1ed12c:
    // 0x1ed12c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1ed130:
    // 0x1ed130: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1ed134:
    // 0x1ed134: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ed134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1ed138:
    // 0x1ed138: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ed138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1ed13c:
    // 0x1ed13c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1ed140:
    if (ctx->pc == 0x1ED140u) {
        ctx->pc = 0x1ED140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED13Cu;
        // 0x1ed140: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED144u;
        goto label_1ed144;
    }
    ctx->pc = 0x1ED13Cu;
    {
        const bool branch_taken_0x1ed13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED13Cu;
        // 0x1ed140: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed13c) {
            ctx->pc = 0x1ED1B4u;
            goto label_1ed1b4;
        }
    }
    ctx->pc = 0x1ED144u;
label_1ed144:
    // 0x1ed144: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_1ed148:
    // 0x1ed148: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1ed148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1ed14c:
    // 0x1ed14c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ed150:
    if (ctx->pc == 0x1ED150u) {
        ctx->pc = 0x1ED150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED14Cu;
        // 0x1ed150: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED154u;
        goto label_1ed154;
    }
    ctx->pc = 0x1ED14Cu;
    {
        const bool branch_taken_0x1ed14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED14Cu;
        // 0x1ed150: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed14c) {
            ctx->pc = 0x1ED174u;
            goto label_1ed174;
        }
    }
    ctx->pc = 0x1ED154u;
label_1ed154:
    // 0x1ed154: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ed158:
    // 0x1ed158: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ed158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ed15c:
    // 0x1ed15c: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1ed160:
    // 0x1ed160: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1ed160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1ed164:
    // 0x1ed164: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ed164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ed168:
    // 0x1ed168: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1ed168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1ed16c:
    // 0x1ed16c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed170:
    if (ctx->pc == 0x1ED170u) {
        ctx->pc = 0x1ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED16Cu;
        // 0x1ed170: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED174u;
        goto label_1ed174;
    }
    ctx->pc = 0x1ED16Cu;
    {
        const bool branch_taken_0x1ed16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED16Cu;
        // 0x1ed170: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed16c) {
            ctx->pc = 0x1ED178u;
            goto label_1ed178;
        }
    }
    ctx->pc = 0x1ED174u;
label_1ed174:
    // 0x1ed174: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed178:
    // 0x1ed178: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1ed17c:
    // 0x1ed17c: 0x18a0ffdc  blez        $a1, . + 4 + (-0x24 << 2)
label_1ed180:
    if (ctx->pc == 0x1ED180u) {
        ctx->pc = 0x1ED180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED17Cu;
        // 0x1ed180: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED184u;
        goto label_1ed184;
    }
    ctx->pc = 0x1ED17Cu;
    {
        const bool branch_taken_0x1ed17c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1ED180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED17Cu;
        // 0x1ed180: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed17c) {
            ctx->pc = 0x1ED0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed0f0;
        }
    }
    ctx->pc = 0x1ED184u;
label_1ed184:
    // 0x1ed184: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ed188:
    // 0x1ed188: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1ed188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ed18c:
    // 0x1ed18c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed190:
    // 0x1ed190: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ed194:
    // 0x1ed194: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1ed194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1ed198:
    // 0x1ed198: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ed198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ed19c:
    // 0x1ed19c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed19cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1ed1a0:
    // 0x1ed1a0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1ed1a4:
    if (ctx->pc == 0x1ED1A4u) {
        ctx->pc = 0x1ED1A8u;
        goto label_1ed1a8;
    }
    ctx->pc = 0x1ED1A0u;
    {
        const bool branch_taken_0x1ed1a0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1ed1a0) {
            ctx->pc = 0x1ED188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed188;
        }
    }
    ctx->pc = 0x1ED1A8u;
label_1ed1a8:
    // 0x1ed1a8: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_1ed1ac:
    if (ctx->pc == 0x1ED1ACu) {
        ctx->pc = 0x1ED1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1A8u;
        // 0x1ed1ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1B0u;
        goto label_1ed1b0;
    }
    ctx->pc = 0x1ED1A8u;
    {
        const bool branch_taken_0x1ed1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1A8u;
        // 0x1ed1ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1a8) {
            ctx->pc = 0x1ED0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed0f8;
        }
    }
    ctx->pc = 0x1ED1B0u;
label_1ed1b0:
    // 0x1ed1b0: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ed1b4:
    // 0x1ed1b4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_1ed1b8:
    if (ctx->pc == 0x1ED1B8u) {
        ctx->pc = 0x1ED1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1B4u;
        // 0x1ed1b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1BCu;
        goto label_1ed1bc;
    }
    ctx->pc = 0x1ED1B4u;
    {
        const bool branch_taken_0x1ed1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1B4u;
        // 0x1ed1b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1b4) {
            ctx->pc = 0x1ED0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed0f4;
        }
    }
    ctx->pc = 0x1ED1BCu;
label_1ed1bc:
    // 0x1ed1bc: 0x1000fffd  b           . + 4 + (-0x3 << 2)
label_1ed1c0:
    if (ctx->pc == 0x1ED1C0u) {
        ctx->pc = 0x1ED1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1BCu;
        // 0x1ed1c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1C4u;
        goto label_1ed1c4;
    }
    ctx->pc = 0x1ED1BCu;
    {
        const bool branch_taken_0x1ed1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1BCu;
        // 0x1ed1c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1bc) {
            ctx->pc = 0x1ED1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed1b4;
        }
    }
    ctx->pc = 0x1ED1C4u;
label_1ed1c4:
    // 0x1ed1c4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ed1c8:
    // 0x1ed1c8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1ed1cc:
    if (ctx->pc == 0x1ED1CCu) {
        ctx->pc = 0x1ED1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1C8u;
        // 0x1ed1cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1D0u;
        goto label_1ed1d0;
    }
    ctx->pc = 0x1ED1C8u;
    {
        const bool branch_taken_0x1ed1c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1C8u;
        // 0x1ed1cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1c8) {
            ctx->pc = 0x1ED1DCu;
            goto label_1ed1dc;
        }
    }
    ctx->pc = 0x1ED1D0u;
label_1ed1d0:
    // 0x1ed1d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed1d4:
    // 0x1ed1d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ed1d8:
    if (ctx->pc == 0x1ED1D8u) {
        ctx->pc = 0x1ED1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1D4u;
        // 0x1ed1d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1DCu;
        goto label_1ed1dc;
    }
    ctx->pc = 0x1ED1D4u;
    {
        const bool branch_taken_0x1ed1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1D4u;
        // 0x1ed1d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1d4) {
            ctx->pc = 0x1ED1F0u;
            goto label_1ed1f0;
        }
    }
    ctx->pc = 0x1ED1DCu;
label_1ed1dc:
    // 0x1ed1dc: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1ed1e0:
    if (ctx->pc == 0x1ED1E0u) {
        ctx->pc = 0x1ED1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1DCu;
        // 0x1ed1e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1E4u;
        goto label_1ed1e4;
    }
    ctx->pc = 0x1ED1DCu;
    {
        const bool branch_taken_0x1ed1dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1DCu;
        // 0x1ed1e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1dc) {
            ctx->pc = 0x1ED1ECu;
            goto label_1ed1ec;
        }
    }
    ctx->pc = 0x1ED1E4u;
label_1ed1e4:
    // 0x1ed1e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed1e8:
    if (ctx->pc == 0x1ED1E8u) {
        ctx->pc = 0x1ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E4u;
        // 0x1ed1e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1ECu;
        goto label_1ed1ec;
    }
    ctx->pc = 0x1ED1E4u;
    {
        const bool branch_taken_0x1ed1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E4u;
        // 0x1ed1e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1e4) {
            ctx->pc = 0x1ED1F0u;
            goto label_1ed1f0;
        }
    }
    ctx->pc = 0x1ED1ECu;
label_1ed1ec:
    // 0x1ed1ec: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1ed1ecu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed1f0:
    // 0x1ed1f0: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1ed1f4:
    // 0x1ed1f4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1ed1f8:
    if (ctx->pc == 0x1ED1F8u) {
        ctx->pc = 0x1ED1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1F4u;
        // 0x1ed1f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED1FCu;
        goto label_1ed1fc;
    }
    ctx->pc = 0x1ED1F4u;
    {
        const bool branch_taken_0x1ed1f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1F4u;
        // 0x1ed1f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1f4) {
            ctx->pc = 0x1ED210u;
            goto label_1ed210;
        }
    }
    ctx->pc = 0x1ED1FCu;
label_1ed1fc:
    // 0x1ed1fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed200:
    // 0x1ed200: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1ed204:
    // 0x1ed204: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1ed204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1ed208:
    // 0x1ed208: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ed20c:
    if (ctx->pc == 0x1ED20Cu) {
        ctx->pc = 0x1ED20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED208u;
        // 0x1ed20c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED210u;
        goto label_1ed210;
    }
    ctx->pc = 0x1ED208u;
    {
        const bool branch_taken_0x1ed208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED208u;
        // 0x1ed20c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed208) {
            ctx->pc = 0x1ED238u;
            goto label_1ed238;
        }
    }
    ctx->pc = 0x1ED210u;
label_1ed210:
    // 0x1ed210: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed214:
    // 0x1ed214: 0x0  nop
    ctx->pc = 0x1ed214u;
    // NOP
label_1ed218:
    // 0x1ed218: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x1ed218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
label_1ed21c:
    // 0x1ed21c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ed220:
    // 0x1ed220: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1ed220u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1ed224:
    // 0x1ed224: 0x1188fa  dsrl        $s1, $s1, 3
    ctx->pc = 0x1ed224u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 3);
label_1ed228:
    // 0x1ed228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ed22c:
    // 0x1ed22c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ed22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ed230:
    // 0x1ed230: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1ed234:
    if (ctx->pc == 0x1ED234u) {
        ctx->pc = 0x1ED238u;
        goto label_1ed238;
    }
    ctx->pc = 0x1ED230u;
    {
        const bool branch_taken_0x1ed230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed230) {
            ctx->pc = 0x1ED218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed218;
        }
    }
    ctx->pc = 0x1ED238u;
label_1ed238:
    // 0x1ed238: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1ed23c:
    if (ctx->pc == 0x1ED23Cu) {
        ctx->pc = 0x1ED23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED238u;
        // 0x1ed23c: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED240u;
        goto label_1ed240;
    }
    ctx->pc = 0x1ED238u;
    {
        const bool branch_taken_0x1ed238 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED238u;
        // 0x1ed23c: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed238) {
            ctx->pc = 0x1ED244u;
            goto label_1ed244;
        }
    }
    ctx->pc = 0x1ED240u;
label_1ed240:
    // 0x1ed240: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1ed240u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1ed244:
    // 0x1ed244: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed248:
    // 0x1ed248: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
label_1ed24c:
    if (ctx->pc == 0x1ED24Cu) {
        ctx->pc = 0x1ED24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED248u;
        // 0x1ed24c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED250u;
        goto label_1ed250;
    }
    ctx->pc = 0x1ED248u;
    {
        const bool branch_taken_0x1ed248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED248u;
        // 0x1ed24c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed248) {
            ctx->pc = 0x1ED63Cu;
            goto label_1ed63c;
        }
    }
    ctx->pc = 0x1ED250u;
label_1ed250:
    // 0x1ed250: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed254:
    // 0x1ed254: 0x0  nop
    ctx->pc = 0x1ed254u;
    // NOP
label_1ed258:
    // 0x1ed258: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed25c:
    // 0x1ed25c: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed260:
    // 0x1ed260: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed264:
    // 0x1ed264: 0x40f809  jalr        $v0
label_1ed268:
    if (ctx->pc == 0x1ED268u) {
        ctx->pc = 0x1ED268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED264u;
        // 0x1ed268: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED26Cu;
        goto label_1ed26c;
    }
    ctx->pc = 0x1ED264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED26Cu);
        ctx->pc = 0x1ED268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED264u;
        // 0x1ed268: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED264u, 0x1ED26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED26Cu;
label_1ed26c:
    // 0x1ed26c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed26cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed270:
    // 0x1ed270: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed274:
    if (ctx->pc == 0x1ED274u) {
        ctx->pc = 0x1ED274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED270u;
        // 0x1ed274: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED278u;
        goto label_1ed278;
    }
    ctx->pc = 0x1ED270u;
    {
        const bool branch_taken_0x1ed270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED270u;
        // 0x1ed274: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed270) {
            ctx->pc = 0x1ED258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed258;
        }
    }
    ctx->pc = 0x1ED278u;
label_1ed278:
    // 0x1ed278: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1ed27c:
    if (ctx->pc == 0x1ED27Cu) {
        ctx->pc = 0x1ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED278u;
        // 0x1ed27c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED280u;
        goto label_1ed280;
    }
    ctx->pc = 0x1ED278u;
    {
        const bool branch_taken_0x1ed278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED278u;
        // 0x1ed27c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed278) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED280u;
label_1ed280:
    // 0x1ed280: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ed284:
    // 0x1ed284: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1ed288:
    if (ctx->pc == 0x1ED288u) {
        ctx->pc = 0x1ED288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED284u;
        // 0x1ed288: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED28Cu;
        goto label_1ed28c;
    }
    ctx->pc = 0x1ED284u;
    {
        const bool branch_taken_0x1ed284 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED284u;
        // 0x1ed288: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed284) {
            ctx->pc = 0x1ED298u;
            goto label_1ed298;
        }
    }
    ctx->pc = 0x1ED28Cu;
label_1ed28c:
    // 0x1ed28c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed290:
    // 0x1ed290: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ed294:
    if (ctx->pc == 0x1ED294u) {
        ctx->pc = 0x1ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED290u;
        // 0x1ed294: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED298u;
        goto label_1ed298;
    }
    ctx->pc = 0x1ED290u;
    {
        const bool branch_taken_0x1ed290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED290u;
        // 0x1ed294: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed290) {
            ctx->pc = 0x1ED2ACu;
            goto label_1ed2ac;
        }
    }
    ctx->pc = 0x1ED298u;
label_1ed298:
    // 0x1ed298: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1ed29c:
    if (ctx->pc == 0x1ED29Cu) {
        ctx->pc = 0x1ED29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED298u;
        // 0x1ed29c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2A0u;
        goto label_1ed2a0;
    }
    ctx->pc = 0x1ED298u;
    {
        const bool branch_taken_0x1ed298 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED298u;
        // 0x1ed29c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed298) {
            ctx->pc = 0x1ED2A8u;
            goto label_1ed2a8;
        }
    }
    ctx->pc = 0x1ED2A0u;
label_1ed2a0:
    // 0x1ed2a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed2a4:
    if (ctx->pc == 0x1ED2A4u) {
        ctx->pc = 0x1ED2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2A0u;
        // 0x1ed2a4: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2A8u;
        goto label_1ed2a8;
    }
    ctx->pc = 0x1ED2A0u;
    {
        const bool branch_taken_0x1ed2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2A0u;
        // 0x1ed2a4: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2a0) {
            ctx->pc = 0x1ED2ACu;
            goto label_1ed2ac;
        }
    }
    ctx->pc = 0x1ED2A8u;
label_1ed2a8:
    // 0x1ed2a8: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1ed2a8u;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed2ac:
    // 0x1ed2ac: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1ed2b0:
    // 0x1ed2b0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1ed2b4:
    if (ctx->pc == 0x1ED2B4u) {
        ctx->pc = 0x1ED2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2B0u;
        // 0x1ed2b4: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2B8u;
        goto label_1ed2b8;
    }
    ctx->pc = 0x1ED2B0u;
    {
        const bool branch_taken_0x1ed2b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2B0u;
        // 0x1ed2b4: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2b0) {
            ctx->pc = 0x1ED2CCu;
            goto label_1ed2cc;
        }
    }
    ctx->pc = 0x1ED2B8u;
label_1ed2b8:
    // 0x1ed2b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed2bc:
    // 0x1ed2bc: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1ed2c0:
    // 0x1ed2c0: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1ed2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1ed2c4:
    // 0x1ed2c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ed2c8:
    if (ctx->pc == 0x1ED2C8u) {
        ctx->pc = 0x1ED2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2C4u;
        // 0x1ed2c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2CCu;
        goto label_1ed2cc;
    }
    ctx->pc = 0x1ED2C4u;
    {
        const bool branch_taken_0x1ed2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2C4u;
        // 0x1ed2c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2c4) {
            ctx->pc = 0x1ED2F8u;
            goto label_1ed2f8;
        }
    }
    ctx->pc = 0x1ED2CCu;
label_1ed2cc:
    // 0x1ed2cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed2d0:
    // 0x1ed2d0: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x1ed2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
label_1ed2d4:
    // 0x1ed2d4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1ed2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1ed2d8:
    // 0x1ed2d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ed2dc:
    if (ctx->pc == 0x1ED2DCu) {
        ctx->pc = 0x1ED2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2D8u;
        // 0x1ed2dc: 0x64620030  daddiu      $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2E0u;
        goto label_1ed2e0;
    }
    ctx->pc = 0x1ED2D8u;
    {
        const bool branch_taken_0x1ed2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2D8u;
        // 0x1ed2dc: 0x64620030  daddiu      $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2d8) {
            ctx->pc = 0x1ED2E4u;
            goto label_1ed2e4;
        }
    }
    ctx->pc = 0x1ED2E0u;
label_1ed2e0:
    // 0x1ed2e0: 0x64620057  daddiu      $v0, $v1, 0x57
    ctx->pc = 0x1ed2e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)87);
label_1ed2e4:
    // 0x1ed2e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ed2e8:
    // 0x1ed2e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ed2ec:
    // 0x1ed2ec: 0x11893a  dsrl        $s1, $s1, 4
    ctx->pc = 0x1ed2ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 4);
label_1ed2f0:
    // 0x1ed2f0: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
label_1ed2f4:
    if (ctx->pc == 0x1ED2F4u) {
        ctx->pc = 0x1ED2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F0u;
        // 0x1ed2f4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED2F8u;
        goto label_1ed2f8;
    }
    ctx->pc = 0x1ED2F0u;
    {
        const bool branch_taken_0x1ed2f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F0u;
        // 0x1ed2f4: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2f0) {
            ctx->pc = 0x1ED2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed2d0;
        }
    }
    ctx->pc = 0x1ED2F8u;
label_1ed2f8:
    // 0x1ed2f8: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1ed2fc:
    if (ctx->pc == 0x1ED2FCu) {
        ctx->pc = 0x1ED2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F8u;
        // 0x1ed2fc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED300u;
        goto label_1ed300;
    }
    ctx->pc = 0x1ED2F8u;
    {
        const bool branch_taken_0x1ed2f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED2F8u;
        // 0x1ed2fc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed2f8) {
            ctx->pc = 0x1ED304u;
            goto label_1ed304;
        }
    }
    ctx->pc = 0x1ED300u;
label_1ed300:
    // 0x1ed300: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1ed300u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1ed304:
    // 0x1ed304: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed308:
    // 0x1ed308: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_1ed30c:
    if (ctx->pc == 0x1ED30Cu) {
        ctx->pc = 0x1ED30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED308u;
        // 0x1ed30c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED310u;
        goto label_1ed310;
    }
    ctx->pc = 0x1ED308u;
    {
        const bool branch_taken_0x1ed308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED308u;
        // 0x1ed30c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed308) {
            ctx->pc = 0x1ED63Cu;
            goto label_1ed63c;
        }
    }
    ctx->pc = 0x1ED310u;
label_1ed310:
    // 0x1ed310: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed310u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed314:
    // 0x1ed314: 0x0  nop
    ctx->pc = 0x1ed314u;
    // NOP
label_1ed318:
    // 0x1ed318: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed31c:
    // 0x1ed31c: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed320:
    // 0x1ed320: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed320u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed324:
    // 0x1ed324: 0x40f809  jalr        $v0
label_1ed328:
    if (ctx->pc == 0x1ED328u) {
        ctx->pc = 0x1ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED324u;
        // 0x1ed328: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED32Cu;
        goto label_1ed32c;
    }
    ctx->pc = 0x1ED324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED32Cu);
        ctx->pc = 0x1ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED324u;
        // 0x1ed328: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED324u, 0x1ED32Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED32Cu;
label_1ed32c:
    // 0x1ed32c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed32cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed330:
    // 0x1ed330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed334:
    if (ctx->pc == 0x1ED334u) {
        ctx->pc = 0x1ED334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED330u;
        // 0x1ed334: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED338u;
        goto label_1ed338;
    }
    ctx->pc = 0x1ED330u;
    {
        const bool branch_taken_0x1ed330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED330u;
        // 0x1ed334: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed330) {
            ctx->pc = 0x1ED318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed318;
        }
    }
    ctx->pc = 0x1ED338u;
label_1ed338:
    // 0x1ed338: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1ed33c:
    if (ctx->pc == 0x1ED33Cu) {
        ctx->pc = 0x1ED33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED338u;
        // 0x1ed33c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED340u;
        goto label_1ed340;
    }
    ctx->pc = 0x1ED338u;
    {
        const bool branch_taken_0x1ed338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED338u;
        // 0x1ed33c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed338) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED340u;
label_1ed340:
    // 0x1ed340: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ed344:
    // 0x1ed344: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1ed348:
    if (ctx->pc == 0x1ED348u) {
        ctx->pc = 0x1ED348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED344u;
        // 0x1ed348: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED34Cu;
        goto label_1ed34c;
    }
    ctx->pc = 0x1ED344u;
    {
        const bool branch_taken_0x1ed344 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED344u;
        // 0x1ed348: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed344) {
            ctx->pc = 0x1ED358u;
            goto label_1ed358;
        }
    }
    ctx->pc = 0x1ED34Cu;
label_1ed34c:
    // 0x1ed34c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed34cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed350:
    // 0x1ed350: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ed354:
    if (ctx->pc == 0x1ED354u) {
        ctx->pc = 0x1ED354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED350u;
        // 0x1ed354: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED358u;
        goto label_1ed358;
    }
    ctx->pc = 0x1ED350u;
    {
        const bool branch_taken_0x1ed350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED350u;
        // 0x1ed354: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed350) {
            ctx->pc = 0x1ED36Cu;
            goto label_1ed36c;
        }
    }
    ctx->pc = 0x1ED358u;
label_1ed358:
    // 0x1ed358: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1ed35c:
    if (ctx->pc == 0x1ED35Cu) {
        ctx->pc = 0x1ED35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED358u;
        // 0x1ed35c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED360u;
        goto label_1ed360;
    }
    ctx->pc = 0x1ED358u;
    {
        const bool branch_taken_0x1ed358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED358u;
        // 0x1ed35c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed358) {
            ctx->pc = 0x1ED368u;
            goto label_1ed368;
        }
    }
    ctx->pc = 0x1ED360u;
label_1ed360:
    // 0x1ed360: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed364:
    if (ctx->pc == 0x1ED364u) {
        ctx->pc = 0x1ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED360u;
        // 0x1ed364: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED368u;
        goto label_1ed368;
    }
    ctx->pc = 0x1ED360u;
    {
        const bool branch_taken_0x1ed360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED360u;
        // 0x1ed364: 0x8671fff8  lh          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed360) {
            ctx->pc = 0x1ED36Cu;
            goto label_1ed36c;
        }
    }
    ctx->pc = 0x1ED368u;
label_1ed368:
    // 0x1ed368: 0x8e71fff8  lw          $s1, -0x8($s3)
    ctx->pc = 0x1ed368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed36c:
    // 0x1ed36c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1ed370:
    // 0x1ed370: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1ed374:
    if (ctx->pc == 0x1ED374u) {
        ctx->pc = 0x1ED374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED370u;
        // 0x1ed374: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED378u;
        goto label_1ed378;
    }
    ctx->pc = 0x1ED370u;
    {
        const bool branch_taken_0x1ed370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED370u;
        // 0x1ed374: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed370) {
            ctx->pc = 0x1ED388u;
            goto label_1ed388;
        }
    }
    ctx->pc = 0x1ED378u;
label_1ed378:
    // 0x1ed378: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed37c:
    // 0x1ed37c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1ed380:
    // 0x1ed380: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ed384:
    if (ctx->pc == 0x1ED384u) {
        ctx->pc = 0x1ED384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED380u;
        // 0x1ed384: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED388u;
        goto label_1ed388;
    }
    ctx->pc = 0x1ED380u;
    {
        const bool branch_taken_0x1ed380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED380u;
        // 0x1ed384: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed380) {
            ctx->pc = 0x1ED3E8u;
            goto label_1ed3e8;
        }
    }
    ctx->pc = 0x1ED388u;
label_1ed388:
    // 0x1ed388: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_1ed38c:
    if (ctx->pc == 0x1ED38Cu) {
        ctx->pc = 0x1ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED388u;
        // 0x1ed38c: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED390u;
        goto label_1ed390;
    }
    ctx->pc = 0x1ED388u;
    {
        const bool branch_taken_0x1ed388 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED388u;
        // 0x1ed38c: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed388) {
            ctx->pc = 0x1ED3A0u;
            goto label_1ed3a0;
        }
    }
    ctx->pc = 0x1ED390u;
label_1ed390:
    // 0x1ed390: 0x11882f  dsubu       $s1, $zero, $s1
    ctx->pc = 0x1ed390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
label_1ed394:
    // 0x1ed394: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed398:
    // 0x1ed398: 0x40f809  jalr        $v0
label_1ed39c:
    if (ctx->pc == 0x1ED39Cu) {
        ctx->pc = 0x1ED39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED398u;
        // 0x1ed39c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3A0u;
        goto label_1ed3a0;
    }
    ctx->pc = 0x1ED398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED3A0u);
        ctx->pc = 0x1ED39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED398u;
        // 0x1ed39c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED398u, 0x1ED3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED3A0u;
label_1ed3a0:
    // 0x1ed3a0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_1ed3a4:
    if (ctx->pc == 0x1ED3A4u) {
        ctx->pc = 0x1ED3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3A0u;
        // 0x1ed3a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3A8u;
        goto label_1ed3a8;
    }
    ctx->pc = 0x1ED3A0u;
    {
        const bool branch_taken_0x1ed3a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3A0u;
        // 0x1ed3a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3a0) {
            ctx->pc = 0x1ED3ECu;
            goto label_1ed3ec;
        }
    }
    ctx->pc = 0x1ED3A8u;
label_1ed3a8:
    // 0x1ed3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3ac:
    // 0x1ed3ac: 0x0  nop
    ctx->pc = 0x1ed3acu;
    // NOP
label_1ed3b0:
    // 0x1ed3b0: 0xc081a86  jal         func_206A18
label_1ed3b4:
    if (ctx->pc == 0x1ED3B4u) {
        ctx->pc = 0x1ED3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3B0u;
        // 0x1ed3b4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3B8u;
        goto label_1ed3b8;
    }
    ctx->pc = 0x1ED3B0u;
    SET_GPR_U32(ctx, 31, 0x1ED3B8u);
    ctx->pc = 0x1ED3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3B0u;
    // 0x1ed3b4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x1ED3B0u, 0x1ED3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3B8u;
label_1ed3b8:
    // 0x1ed3b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ed3bc:
    // 0x1ed3bc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1ed3bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1ed3c0:
    // 0x1ed3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3c4:
    // 0x1ed3c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ed3c8:
    // 0x1ed3c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ed3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ed3cc:
    // 0x1ed3cc: 0xc081850  jal         func_206140
label_1ed3d0:
    if (ctx->pc == 0x1ED3D0u) {
        ctx->pc = 0x1ED3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3CCu;
        // 0x1ed3d0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3D4u;
        goto label_1ed3d4;
    }
    ctx->pc = 0x1ED3CCu;
    SET_GPR_U32(ctx, 31, 0x1ED3D4u);
    ctx->pc = 0x1ED3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3CCu;
    // 0x1ed3d0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206140u, 0x1ED3CCu, 0x1ED3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3D4u;
label_1ed3d4:
    // 0x1ed3d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3d8:
    // 0x1ed3d8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_1ed3dc:
    if (ctx->pc == 0x1ED3DCu) {
        ctx->pc = 0x1ED3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3D8u;
        // 0x1ed3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3E0u;
        goto label_1ed3e0;
    }
    ctx->pc = 0x1ED3D8u;
    {
        const bool branch_taken_0x1ed3d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3D8u;
        // 0x1ed3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3d8) {
            ctx->pc = 0x1ED3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed3b0;
        }
    }
    ctx->pc = 0x1ED3E0u;
label_1ed3e0:
    // 0x1ed3e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed3e4:
    if (ctx->pc == 0x1ED3E4u) {
        ctx->pc = 0x1ED3E8u;
        goto label_1ed3e8;
    }
    ctx->pc = 0x1ED3E0u;
    {
        const bool branch_taken_0x1ed3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3e0) {
            ctx->pc = 0x1ED3ECu;
            goto label_1ed3ec;
        }
    }
    ctx->pc = 0x1ED3E8u;
label_1ed3e8:
    // 0x1ed3e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed3ec:
    // 0x1ed3ec: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1ed3f0:
    if (ctx->pc == 0x1ED3F0u) {
        ctx->pc = 0x1ED3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3ECu;
        // 0x1ed3f0: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3F4u;
        goto label_1ed3f4;
    }
    ctx->pc = 0x1ED3ECu;
    {
        const bool branch_taken_0x1ed3ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3ECu;
        // 0x1ed3f0: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3ec) {
            ctx->pc = 0x1ED3F8u;
            goto label_1ed3f8;
        }
    }
    ctx->pc = 0x1ED3F4u;
label_1ed3f4:
    // 0x1ed3f4: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1ed3f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1ed3f8:
    // 0x1ed3f8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed3f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed3fc:
    // 0x1ed3fc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_1ed400:
    if (ctx->pc == 0x1ED400u) {
        ctx->pc = 0x1ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3FCu;
        // 0x1ed400: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED404u;
        goto label_1ed404;
    }
    ctx->pc = 0x1ED3FCu;
    {
        const bool branch_taken_0x1ed3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3FCu;
        // 0x1ed400: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3fc) {
            ctx->pc = 0x1ED63Cu;
            goto label_1ed63c;
        }
    }
    ctx->pc = 0x1ED404u;
label_1ed404:
    // 0x1ed404: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed408:
    // 0x1ed408: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed40c:
    // 0x1ed40c: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed410:
    // 0x1ed410: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed410u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed414:
    // 0x1ed414: 0x40f809  jalr        $v0
label_1ed418:
    if (ctx->pc == 0x1ED418u) {
        ctx->pc = 0x1ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED414u;
        // 0x1ed418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED41Cu;
        goto label_1ed41c;
    }
    ctx->pc = 0x1ED414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED41Cu);
        ctx->pc = 0x1ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED414u;
        // 0x1ed418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED414u, 0x1ED41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED41Cu;
label_1ed41c:
    // 0x1ed41c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed420:
    // 0x1ed420: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed424:
    if (ctx->pc == 0x1ED424u) {
        ctx->pc = 0x1ED424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED420u;
        // 0x1ed424: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED428u;
        goto label_1ed428;
    }
    ctx->pc = 0x1ED420u;
    {
        const bool branch_taken_0x1ed420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED420u;
        // 0x1ed424: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed420) {
            ctx->pc = 0x1ED408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed408;
        }
    }
    ctx->pc = 0x1ED428u;
label_1ed428:
    // 0x1ed428: 0x10000085  b           . + 4 + (0x85 << 2)
label_1ed42c:
    if (ctx->pc == 0x1ED42Cu) {
        ctx->pc = 0x1ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED428u;
        // 0x1ed42c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED430u;
        goto label_1ed430;
    }
    ctx->pc = 0x1ED428u;
    {
        const bool branch_taken_0x1ed428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED428u;
        // 0x1ed42c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed428) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED430u;
label_1ed430:
    // 0x1ed430: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1ed430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ed434:
    // 0x1ed434: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1ed438:
    if (ctx->pc == 0x1ED438u) {
        ctx->pc = 0x1ED438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED434u;
        // 0x1ed438: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED43Cu;
        goto label_1ed43c;
    }
    ctx->pc = 0x1ED434u;
    {
        const bool branch_taken_0x1ed434 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED434u;
        // 0x1ed438: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed434) {
            ctx->pc = 0x1ED448u;
            goto label_1ed448;
        }
    }
    ctx->pc = 0x1ED43Cu;
label_1ed43c:
    // 0x1ed43c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed43cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed440:
    // 0x1ed440: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ed444:
    if (ctx->pc == 0x1ED444u) {
        ctx->pc = 0x1ED444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED440u;
        // 0x1ed444: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED448u;
        goto label_1ed448;
    }
    ctx->pc = 0x1ED440u;
    {
        const bool branch_taken_0x1ed440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED440u;
        // 0x1ed444: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed440) {
            ctx->pc = 0x1ED45Cu;
            goto label_1ed45c;
        }
    }
    ctx->pc = 0x1ED448u;
label_1ed448:
    // 0x1ed448: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1ed44c:
    if (ctx->pc == 0x1ED44Cu) {
        ctx->pc = 0x1ED44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED448u;
        // 0x1ed44c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED450u;
        goto label_1ed450;
    }
    ctx->pc = 0x1ED448u;
    {
        const bool branch_taken_0x1ed448 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED448u;
        // 0x1ed44c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed448) {
            ctx->pc = 0x1ED458u;
            goto label_1ed458;
        }
    }
    ctx->pc = 0x1ED450u;
label_1ed450:
    // 0x1ed450: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed454:
    if (ctx->pc == 0x1ED454u) {
        ctx->pc = 0x1ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED450u;
        // 0x1ed454: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED458u;
        goto label_1ed458;
    }
    ctx->pc = 0x1ED450u;
    {
        const bool branch_taken_0x1ed450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED450u;
        // 0x1ed454: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed450) {
            ctx->pc = 0x1ED45Cu;
            goto label_1ed45c;
        }
    }
    ctx->pc = 0x1ED458u;
label_1ed458:
    // 0x1ed458: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1ed458u;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed45c:
    // 0x1ed45c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1ed45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1ed460:
    // 0x1ed460: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1ed464:
    if (ctx->pc == 0x1ED464u) {
        ctx->pc = 0x1ED464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED460u;
        // 0x1ed464: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED468u;
        goto label_1ed468;
    }
    ctx->pc = 0x1ED460u;
    {
        const bool branch_taken_0x1ed460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED460u;
        // 0x1ed464: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed460) {
            ctx->pc = 0x1ED47Cu;
            goto label_1ed47c;
        }
    }
    ctx->pc = 0x1ED468u;
label_1ed468:
    // 0x1ed468: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1ed468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed46c:
    // 0x1ed46c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1ed46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1ed470:
    // 0x1ed470: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1ed470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1ed474:
    // 0x1ed474: 0x10000010  b           . + 4 + (0x10 << 2)
label_1ed478:
    if (ctx->pc == 0x1ED478u) {
        ctx->pc = 0x1ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED474u;
        // 0x1ed478: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED47Cu;
        goto label_1ed47c;
    }
    ctx->pc = 0x1ED474u;
    {
        const bool branch_taken_0x1ed474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED474u;
        // 0x1ed478: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed474) {
            ctx->pc = 0x1ED4B8u;
            goto label_1ed4b8;
        }
    }
    ctx->pc = 0x1ED47Cu;
label_1ed47c:
    // 0x1ed47c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed480:
    // 0x1ed480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed484:
    // 0x1ed484: 0x0  nop
    ctx->pc = 0x1ed484u;
    // NOP
label_1ed488:
    // 0x1ed488: 0xc081daa  jal         func_2076A8
label_1ed48c:
    if (ctx->pc == 0x1ED48Cu) {
        ctx->pc = 0x1ED48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED488u;
        // 0x1ed48c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED490u;
        goto label_1ed490;
    }
    ctx->pc = 0x1ED488u;
    SET_GPR_U32(ctx, 31, 0x1ED490u);
    ctx->pc = 0x1ED48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED488u;
    // 0x1ed48c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x1ED488u, 0x1ED490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED490u;
label_1ed490:
    // 0x1ed490: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1ed494:
    // 0x1ed494: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1ed494u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1ed498:
    // 0x1ed498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed49c:
    // 0x1ed49c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ed4a0:
    // 0x1ed4a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ed4a4:
    // 0x1ed4a4: 0xc081c38  jal         func_2070E0
label_1ed4a8:
    if (ctx->pc == 0x1ED4A8u) {
        ctx->pc = 0x1ED4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4A4u;
        // 0x1ed4a8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4ACu;
        goto label_1ed4ac;
    }
    ctx->pc = 0x1ED4A4u;
    SET_GPR_U32(ctx, 31, 0x1ED4ACu);
    ctx->pc = 0x1ED4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4A4u;
    // 0x1ed4a8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1ED4A4u, 0x1ED4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4ACu;
label_1ed4ac:
    // 0x1ed4ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed4b0:
    // 0x1ed4b0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_1ed4b4:
    if (ctx->pc == 0x1ED4B4u) {
        ctx->pc = 0x1ED4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4B0u;
        // 0x1ed4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4B8u;
        goto label_1ed4b8;
    }
    ctx->pc = 0x1ED4B0u;
    {
        const bool branch_taken_0x1ed4b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4B0u;
        // 0x1ed4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4b0) {
            ctx->pc = 0x1ED488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed488;
        }
    }
    ctx->pc = 0x1ED4B8u;
label_1ed4b8:
    // 0x1ed4b8: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_1ed4bc:
    if (ctx->pc == 0x1ED4BCu) {
        ctx->pc = 0x1ED4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4B8u;
        // 0x1ed4bc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4C0u;
        goto label_1ed4c0;
    }
    ctx->pc = 0x1ED4B8u;
    {
        const bool branch_taken_0x1ed4b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4B8u;
        // 0x1ed4bc: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4b8) {
            ctx->pc = 0x1ED4C4u;
            goto label_1ed4c4;
        }
    }
    ctx->pc = 0x1ED4C0u;
label_1ed4c0:
    // 0x1ed4c0: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x1ed4c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_1ed4c4:
    // 0x1ed4c4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed4c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed4c8:
    // 0x1ed4c8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_1ed4cc:
    if (ctx->pc == 0x1ED4CCu) {
        ctx->pc = 0x1ED4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4C8u;
        // 0x1ed4cc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4D0u;
        goto label_1ed4d0;
    }
    ctx->pc = 0x1ED4C8u;
    {
        const bool branch_taken_0x1ed4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4C8u;
        // 0x1ed4cc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4c8) {
            ctx->pc = 0x1ED63Cu;
            goto label_1ed63c;
        }
    }
    ctx->pc = 0x1ED4D0u;
label_1ed4d0:
    // 0x1ed4d0: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed4d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed4d4:
    // 0x1ed4d4: 0x0  nop
    ctx->pc = 0x1ed4d4u;
    // NOP
label_1ed4d8:
    // 0x1ed4d8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed4dc:
    // 0x1ed4dc: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed4e0:
    // 0x1ed4e0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed4e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed4e4:
    // 0x1ed4e4: 0x40f809  jalr        $v0
label_1ed4e8:
    if (ctx->pc == 0x1ED4E8u) {
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4ECu;
        goto label_1ed4ec;
    }
    ctx->pc = 0x1ED4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED4ECu);
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4E4u, 0x1ED4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED4ECu;
label_1ed4ec:
    // 0x1ed4ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed4f0:
    // 0x1ed4f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed4f4:
    if (ctx->pc == 0x1ED4F4u) {
        ctx->pc = 0x1ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F0u;
        // 0x1ed4f4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED4F8u;
        goto label_1ed4f8;
    }
    ctx->pc = 0x1ED4F0u;
    {
        const bool branch_taken_0x1ed4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F0u;
        // 0x1ed4f4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f0) {
            ctx->pc = 0x1ED4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed4d8;
        }
    }
    ctx->pc = 0x1ED4F8u;
label_1ed4f8:
    // 0x1ed4f8: 0x10000051  b           . + 4 + (0x51 << 2)
label_1ed4fc:
    if (ctx->pc == 0x1ED4FCu) {
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F8u;
        // 0x1ed4fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED500u;
        goto label_1ed500;
    }
    ctx->pc = 0x1ED4F8u;
    {
        const bool branch_taken_0x1ed4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F8u;
        // 0x1ed4fc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f8) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED500u;
label_1ed500:
    // 0x1ed500: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed504:
    // 0x1ed504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ed508:
    // 0x1ed508: 0xc66cfff8  lwc1        $f12, -0x8($s3)
    ctx->pc = 0x1ed508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ed50c:
    // 0x1ed50c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1ed50cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed510:
    // 0x1ed510: 0x0  nop
    ctx->pc = 0x1ed510u;
    // NOP
label_1ed514:
    // 0x1ed514: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ed518:
    if (ctx->pc == 0x1ED518u) {
        ctx->pc = 0x1ED518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED514u;
        // 0x1ed518: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED51Cu;
        goto label_1ed51c;
    }
    ctx->pc = 0x1ED514u;
    {
        const bool branch_taken_0x1ed514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED514u;
        // 0x1ed518: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed514) {
            ctx->pc = 0x1ED534u;
            goto label_1ed534;
        }
    }
    ctx->pc = 0x1ED51Cu;
label_1ed51c:
    // 0x1ed51c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ed520:
    // 0x1ed520: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed524:
    // 0x1ed524: 0x40f809  jalr        $v0
label_1ed528:
    if (ctx->pc == 0x1ED528u) {
        ctx->pc = 0x1ED528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED524u;
        // 0x1ed528: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED52Cu;
        goto label_1ed52c;
    }
    ctx->pc = 0x1ED524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED52Cu);
        ctx->pc = 0x1ED528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED524u;
        // 0x1ed528: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED524u, 0x1ED52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED52Cu;
label_1ed52c:
    // 0x1ed52c: 0x10000044  b           . + 4 + (0x44 << 2)
label_1ed530:
    if (ctx->pc == 0x1ED530u) {
        ctx->pc = 0x1ED530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED52Cu;
        // 0x1ed530: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED534u;
        goto label_1ed534;
    }
    ctx->pc = 0x1ED52Cu;
    {
        const bool branch_taken_0x1ed52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED52Cu;
        // 0x1ed530: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed52c) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED534u;
label_1ed534:
    // 0x1ed534: 0xc082520  jal         func_209480
label_1ed538:
    if (ctx->pc == 0x1ED538u) {
        ctx->pc = 0x1ED538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED534u;
        // 0x1ed538: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED53Cu;
        goto label_1ed53c;
    }
    ctx->pc = 0x1ED534u;
    SET_GPR_U32(ctx, 31, 0x1ED53Cu);
    ctx->pc = 0x1ED538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED534u;
    // 0x1ed538: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1ED534u, 0x1ED53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED53Cu;
label_1ed53c:
    // 0x1ed53c: 0xc07b3cc  jal         func_1ECF30
label_1ed540:
    if (ctx->pc == 0x1ED540u) {
        ctx->pc = 0x1ED540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED53Cu;
        // 0x1ed540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED544u;
        goto label_1ed544;
    }
    ctx->pc = 0x1ED53Cu;
    SET_GPR_U32(ctx, 31, 0x1ED544u);
    ctx->pc = 0x1ED540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED53Cu;
    // 0x1ed540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECF30u, 0x1ED53Cu, 0x1ED544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED544u;
label_1ed544:
    // 0x1ed544: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1ed548:
    if (ctx->pc == 0x1ED548u) {
        ctx->pc = 0x1ED548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED544u;
        // 0x1ed548: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED54Cu;
        goto label_1ed54c;
    }
    ctx->pc = 0x1ED544u;
    {
        const bool branch_taken_0x1ed544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED544u;
        // 0x1ed548: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed544) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED54Cu;
label_1ed54c:
    // 0x1ed54c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed550:
    // 0x1ed550: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed554:
    // 0x1ed554: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1ed554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1ed558:
    // 0x1ed558: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1ed55c:
    if (ctx->pc == 0x1ED55Cu) {
        ctx->pc = 0x1ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED558u;
        // 0x1ed55c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED560u;
        goto label_1ed560;
    }
    ctx->pc = 0x1ED558u;
    {
        const bool branch_taken_0x1ed558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED558u;
        // 0x1ed55c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed558) {
            ctx->pc = 0x1ED5B8u;
            goto label_1ed5b8;
        }
    }
    ctx->pc = 0x1ED560u;
label_1ed560:
    // 0x1ed560: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed560u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed564:
    // 0x1ed564: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ed568:
    // 0x1ed568: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed56c:
    // 0x1ed56c: 0x40f809  jalr        $v0
label_1ed570:
    if (ctx->pc == 0x1ED570u) {
        ctx->pc = 0x1ED570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED56Cu;
        // 0x1ed570: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED574u;
        goto label_1ed574;
    }
    ctx->pc = 0x1ED56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED574u);
        ctx->pc = 0x1ED570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED56Cu;
        // 0x1ed570: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED56Cu, 0x1ED574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED574u;
label_1ed574:
    // 0x1ed574: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed578:
    // 0x1ed578: 0x60f809  jalr        $v1
label_1ed57c:
    if (ctx->pc == 0x1ED57Cu) {
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED580u;
        goto label_1ed580;
    }
    ctx->pc = 0x1ED578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED580u);
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED578u, 0x1ED580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED580u;
label_1ed580:
    // 0x1ed580: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed584:
    // 0x1ed584: 0x40f809  jalr        $v0
label_1ed588:
    if (ctx->pc == 0x1ED588u) {
        ctx->pc = 0x1ED588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED584u;
        // 0x1ed588: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED58Cu;
        goto label_1ed58c;
    }
    ctx->pc = 0x1ED584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED58Cu);
        ctx->pc = 0x1ED588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED584u;
        // 0x1ed588: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED584u, 0x1ED58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED58Cu;
label_1ed58c:
    // 0x1ed58c: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed590:
    // 0x1ed590: 0x60f809  jalr        $v1
label_1ed594:
    if (ctx->pc == 0x1ED594u) {
        ctx->pc = 0x1ED594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED590u;
        // 0x1ed594: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED598u;
        goto label_1ed598;
    }
    ctx->pc = 0x1ED590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED598u);
        ctx->pc = 0x1ED594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED590u;
        // 0x1ed594: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED590u, 0x1ED598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED598u;
label_1ed598:
    // 0x1ed598: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed59c:
    // 0x1ed59c: 0x40f809  jalr        $v0
label_1ed5a0:
    if (ctx->pc == 0x1ED5A0u) {
        ctx->pc = 0x1ED5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED59Cu;
        // 0x1ed5a0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5A4u;
        goto label_1ed5a4;
    }
    ctx->pc = 0x1ED59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED5A4u);
        ctx->pc = 0x1ED5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED59Cu;
        // 0x1ed5a0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED59Cu, 0x1ED5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED5A4u;
label_1ed5a4:
    // 0x1ed5a4: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed5a8:
    // 0x1ed5a8: 0x60f809  jalr        $v1
label_1ed5ac:
    if (ctx->pc == 0x1ED5ACu) {
        ctx->pc = 0x1ED5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5A8u;
        // 0x1ed5ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5B0u;
        goto label_1ed5b0;
    }
    ctx->pc = 0x1ED5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED5B0u);
        ctx->pc = 0x1ED5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5A8u;
        // 0x1ed5ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED5A8u, 0x1ED5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED5B0u;
label_1ed5b0:
    // 0x1ed5b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ed5b4:
    if (ctx->pc == 0x1ED5B4u) {
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5B8u;
        goto label_1ed5b8;
    }
    ctx->pc = 0x1ED5B0u;
    {
        const bool branch_taken_0x1ed5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5b0) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED5B8u;
label_1ed5b8:
    // 0x1ed5b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ed5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ed5bc:
    // 0x1ed5bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed5c0:
    // 0x1ed5c0: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed5c4:
    // 0x1ed5c4: 0x0  nop
    ctx->pc = 0x1ed5c4u;
    // NOP
label_1ed5c8:
    // 0x1ed5c8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed5cc:
    // 0x1ed5cc: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed5d0:
    // 0x1ed5d0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed5d4:
    // 0x1ed5d4: 0x60f809  jalr        $v1
label_1ed5d8:
    if (ctx->pc == 0x1ED5D8u) {
        ctx->pc = 0x1ED5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5D4u;
        // 0x1ed5d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5DCu;
        goto label_1ed5dc;
    }
    ctx->pc = 0x1ED5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED5DCu);
        ctx->pc = 0x1ED5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5D4u;
        // 0x1ed5d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED5D4u, 0x1ED5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED5DCu;
label_1ed5dc:
    // 0x1ed5dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ed5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed5e0:
    // 0x1ed5e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed5e4:
    if (ctx->pc == 0x1ED5E4u) {
        ctx->pc = 0x1ED5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E0u;
        // 0x1ed5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5E8u;
        goto label_1ed5e8;
    }
    ctx->pc = 0x1ED5E0u;
    {
        const bool branch_taken_0x1ed5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E0u;
        // 0x1ed5e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5e0) {
            ctx->pc = 0x1ED5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed5c8;
        }
    }
    ctx->pc = 0x1ED5E8u;
label_1ed5e8:
    // 0x1ed5e8: 0x10000015  b           . + 4 + (0x15 << 2)
label_1ed5ec:
    if (ctx->pc == 0x1ED5ECu) {
        ctx->pc = 0x1ED5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E8u;
        // 0x1ed5ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5F0u;
        goto label_1ed5f0;
    }
    ctx->pc = 0x1ED5E8u;
    {
        const bool branch_taken_0x1ed5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5E8u;
        // 0x1ed5ec: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5e8) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED5F0u;
label_1ed5f0:
    // 0x1ed5f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed5f4:
    // 0x1ed5f4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed5f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed5f8:
    // 0x1ed5f8: 0x8271fff8  lb          $s1, -0x8($s3)
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed5fc:
    // 0x1ed5fc: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed600:
    // 0x1ed600: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1ed600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_1ed604:
    // 0x1ed604: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ed604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1ed608:
    // 0x1ed608: 0x40f809  jalr        $v0
label_1ed60c:
    if (ctx->pc == 0x1ED60Cu) {
        ctx->pc = 0x1ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED608u;
        // 0x1ed60c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED610u;
        goto label_1ed610;
    }
    ctx->pc = 0x1ED608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED610u);
        ctx->pc = 0x1ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED608u;
        // 0x1ed60c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED608u, 0x1ED610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED610u;
label_1ed610:
    // 0x1ed610: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ed614:
    if (ctx->pc == 0x1ED614u) {
        ctx->pc = 0x1ED614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED610u;
        // 0x1ed614: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED618u;
        goto label_1ed618;
    }
    ctx->pc = 0x1ED610u;
    {
        const bool branch_taken_0x1ed610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED610u;
        // 0x1ed614: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed610) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED618u;
label_1ed618:
    // 0x1ed618: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ed618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1ed61c:
    // 0x1ed61c: 0x8c43a3c4  lw          $v1, -0x5C3C($v0)
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943684)));
label_1ed620:
    // 0x1ed620: 0x60f809  jalr        $v1
label_1ed624:
    if (ctx->pc == 0x1ED624u) {
        ctx->pc = 0x1ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED620u;
        // 0x1ed624: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED628u;
        goto label_1ed628;
    }
    ctx->pc = 0x1ED620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED628u);
        ctx->pc = 0x1ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED620u;
        // 0x1ed624: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED620u, 0x1ED628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED628u;
label_1ed628:
    // 0x1ed628: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ed62c:
    if (ctx->pc == 0x1ED62Cu) {
        ctx->pc = 0x1ED62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED628u;
        // 0x1ed62c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED630u;
        goto label_1ed630;
    }
    ctx->pc = 0x1ED628u;
    {
        const bool branch_taken_0x1ed628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED628u;
        // 0x1ed62c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed628) {
            ctx->pc = 0x1ED640u;
            goto label_1ed640;
        }
    }
    ctx->pc = 0x1ED630u;
label_1ed630:
    // 0x1ed630: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ed634:
    if (ctx->pc == 0x1ED634u) {
        ctx->pc = 0x1ED634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED630u;
        // 0x1ed634: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED638u;
        goto label_1ed638;
    }
    ctx->pc = 0x1ED630u;
    {
        const bool branch_taken_0x1ed630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED630u;
        // 0x1ed634: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed630) {
            ctx->pc = 0x1ED63Cu;
            goto label_1ed63c;
        }
    }
    ctx->pc = 0x1ED638u;
label_1ed638:
    // 0x1ed638: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ed63c:
    // 0x1ed63c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1ed63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ed640:
    // 0x1ed640: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed644:
    // 0x1ed644: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
label_1ed648:
    if (ctx->pc == 0x1ED648u) {
        ctx->pc = 0x1ED648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED644u;
        // 0x1ed648: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED64Cu;
        goto label_1ed64c;
    }
    ctx->pc = 0x1ED644u;
    {
        const bool branch_taken_0x1ed644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED644u;
        // 0x1ed648: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed644) {
            ctx->pc = 0x1ED0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed0d8;
        }
    }
    ctx->pc = 0x1ED64Cu;
label_1ed64c:
    // 0x1ed64c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1ed650:
    if (ctx->pc == 0x1ED650u) {
        ctx->pc = 0x1ED650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED64Cu;
        // 0x1ed650: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED654u;
        goto label_1ed654;
    }
    ctx->pc = 0x1ED64Cu;
    {
        const bool branch_taken_0x1ed64c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED64Cu;
        // 0x1ed650: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed64c) {
            ctx->pc = 0x1ED660u;
            goto label_1ed660;
        }
    }
    ctx->pc = 0x1ED654u;
label_1ed654:
    // 0x1ed654: 0xc07d0ea  jal         func_1F43A8
label_1ed658:
    if (ctx->pc == 0x1ED658u) {
        ctx->pc = 0x1ED65Cu;
        goto label_1ed65c;
    }
    ctx->pc = 0x1ED654u;
    SET_GPR_U32(ctx, 31, 0x1ED65Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ED654u, 0x1ED65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED65Cu;
label_1ed65c:
    // 0x1ed65c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ed65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ed660:
    // 0x1ed660: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1ed660u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ed664:
    // 0x1ed664: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1ed664u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ed668:
    // 0x1ed668: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ed668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ed66c:
    // 0x1ed66c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ed66cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ed670:
    // 0x1ed670: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ed670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ed674:
    // 0x1ed674: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ed674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ed678:
    // 0x1ed678: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ed678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed67c:
    // 0x1ed67c: 0x3e00008  jr          $ra
label_1ed680:
    if (ctx->pc == 0x1ED680u) {
        ctx->pc = 0x1ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED67Cu;
        // 0x1ed680: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED684u;
        goto label_fallthrough_0x1ed67c;
    }
    ctx->pc = 0x1ED67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED67Cu;
        // 0x1ed680: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ed67c:
    ctx->pc = 0x1ED684u;
}
