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

// Function: result_screen
// Address: 0x1a5e60 - 0x1a6650
void result_screen_0x1a5e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("result_screen_0x1a5e60");
#endif

    switch (ctx->pc) {
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e68u: goto label_1a5e68;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e70u: goto label_1a5e70;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e78u: goto label_1a5e78;
        case 0x1a5e7cu: goto label_1a5e7c;
        case 0x1a5e80u: goto label_1a5e80;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e88u: goto label_1a5e88;
        case 0x1a5e8cu: goto label_1a5e8c;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5e98u: goto label_1a5e98;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5ea0u: goto label_1a5ea0;
        case 0x1a5ea4u: goto label_1a5ea4;
        case 0x1a5ea8u: goto label_1a5ea8;
        case 0x1a5eacu: goto label_1a5eac;
        case 0x1a5eb0u: goto label_1a5eb0;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eb8u: goto label_1a5eb8;
        case 0x1a5ebcu: goto label_1a5ebc;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5ec4u: goto label_1a5ec4;
        case 0x1a5ec8u: goto label_1a5ec8;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ed0u: goto label_1a5ed0;
        case 0x1a5ed4u: goto label_1a5ed4;
        case 0x1a5ed8u: goto label_1a5ed8;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5ee0u: goto label_1a5ee0;
        case 0x1a5ee4u: goto label_1a5ee4;
        case 0x1a5ee8u: goto label_1a5ee8;
        case 0x1a5eecu: goto label_1a5eec;
        case 0x1a5ef0u: goto label_1a5ef0;
        case 0x1a5ef4u: goto label_1a5ef4;
        case 0x1a5ef8u: goto label_1a5ef8;
        case 0x1a5efcu: goto label_1a5efc;
        case 0x1a5f00u: goto label_1a5f00;
        case 0x1a5f04u: goto label_1a5f04;
        case 0x1a5f08u: goto label_1a5f08;
        case 0x1a5f0cu: goto label_1a5f0c;
        case 0x1a5f10u: goto label_1a5f10;
        case 0x1a5f14u: goto label_1a5f14;
        case 0x1a5f18u: goto label_1a5f18;
        case 0x1a5f1cu: goto label_1a5f1c;
        case 0x1a5f20u: goto label_1a5f20;
        case 0x1a5f24u: goto label_1a5f24;
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f2cu: goto label_1a5f2c;
        case 0x1a5f30u: goto label_1a5f30;
        case 0x1a5f34u: goto label_1a5f34;
        case 0x1a5f38u: goto label_1a5f38;
        case 0x1a5f3cu: goto label_1a5f3c;
        case 0x1a5f40u: goto label_1a5f40;
        case 0x1a5f44u: goto label_1a5f44;
        case 0x1a5f48u: goto label_1a5f48;
        case 0x1a5f4cu: goto label_1a5f4c;
        case 0x1a5f50u: goto label_1a5f50;
        case 0x1a5f54u: goto label_1a5f54;
        case 0x1a5f58u: goto label_1a5f58;
        case 0x1a5f5cu: goto label_1a5f5c;
        case 0x1a5f60u: goto label_1a5f60;
        case 0x1a5f64u: goto label_1a5f64;
        case 0x1a5f68u: goto label_1a5f68;
        case 0x1a5f6cu: goto label_1a5f6c;
        case 0x1a5f70u: goto label_1a5f70;
        case 0x1a5f74u: goto label_1a5f74;
        case 0x1a5f78u: goto label_1a5f78;
        case 0x1a5f7cu: goto label_1a5f7c;
        case 0x1a5f80u: goto label_1a5f80;
        case 0x1a5f84u: goto label_1a5f84;
        case 0x1a5f88u: goto label_1a5f88;
        case 0x1a5f8cu: goto label_1a5f8c;
        case 0x1a5f90u: goto label_1a5f90;
        case 0x1a5f94u: goto label_1a5f94;
        case 0x1a5f98u: goto label_1a5f98;
        case 0x1a5f9cu: goto label_1a5f9c;
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a5fa4u: goto label_1a5fa4;
        case 0x1a5fa8u: goto label_1a5fa8;
        case 0x1a5facu: goto label_1a5fac;
        case 0x1a5fb0u: goto label_1a5fb0;
        case 0x1a5fb4u: goto label_1a5fb4;
        case 0x1a5fb8u: goto label_1a5fb8;
        case 0x1a5fbcu: goto label_1a5fbc;
        case 0x1a5fc0u: goto label_1a5fc0;
        case 0x1a5fc4u: goto label_1a5fc4;
        case 0x1a5fc8u: goto label_1a5fc8;
        case 0x1a5fccu: goto label_1a5fcc;
        case 0x1a5fd0u: goto label_1a5fd0;
        case 0x1a5fd4u: goto label_1a5fd4;
        case 0x1a5fd8u: goto label_1a5fd8;
        case 0x1a5fdcu: goto label_1a5fdc;
        case 0x1a5fe0u: goto label_1a5fe0;
        case 0x1a5fe4u: goto label_1a5fe4;
        case 0x1a5fe8u: goto label_1a5fe8;
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a5ff0u: goto label_1a5ff0;
        case 0x1a5ff4u: goto label_1a5ff4;
        case 0x1a5ff8u: goto label_1a5ff8;
        case 0x1a5ffcu: goto label_1a5ffc;
        case 0x1a6000u: goto label_1a6000;
        case 0x1a6004u: goto label_1a6004;
        case 0x1a6008u: goto label_1a6008;
        case 0x1a600cu: goto label_1a600c;
        case 0x1a6010u: goto label_1a6010;
        case 0x1a6014u: goto label_1a6014;
        case 0x1a6018u: goto label_1a6018;
        case 0x1a601cu: goto label_1a601c;
        case 0x1a6020u: goto label_1a6020;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a6028u: goto label_1a6028;
        case 0x1a602cu: goto label_1a602c;
        case 0x1a6030u: goto label_1a6030;
        case 0x1a6034u: goto label_1a6034;
        case 0x1a6038u: goto label_1a6038;
        case 0x1a603cu: goto label_1a603c;
        case 0x1a6040u: goto label_1a6040;
        case 0x1a6044u: goto label_1a6044;
        case 0x1a6048u: goto label_1a6048;
        case 0x1a604cu: goto label_1a604c;
        case 0x1a6050u: goto label_1a6050;
        case 0x1a6054u: goto label_1a6054;
        case 0x1a6058u: goto label_1a6058;
        case 0x1a605cu: goto label_1a605c;
        case 0x1a6060u: goto label_1a6060;
        case 0x1a6064u: goto label_1a6064;
        case 0x1a6068u: goto label_1a6068;
        case 0x1a606cu: goto label_1a606c;
        case 0x1a6070u: goto label_1a6070;
        case 0x1a6074u: goto label_1a6074;
        case 0x1a6078u: goto label_1a6078;
        case 0x1a607cu: goto label_1a607c;
        case 0x1a6080u: goto label_1a6080;
        case 0x1a6084u: goto label_1a6084;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a608cu: goto label_1a608c;
        case 0x1a6090u: goto label_1a6090;
        case 0x1a6094u: goto label_1a6094;
        case 0x1a6098u: goto label_1a6098;
        case 0x1a609cu: goto label_1a609c;
        case 0x1a60a0u: goto label_1a60a0;
        case 0x1a60a4u: goto label_1a60a4;
        case 0x1a60a8u: goto label_1a60a8;
        case 0x1a60acu: goto label_1a60ac;
        case 0x1a60b0u: goto label_1a60b0;
        case 0x1a60b4u: goto label_1a60b4;
        case 0x1a60b8u: goto label_1a60b8;
        case 0x1a60bcu: goto label_1a60bc;
        case 0x1a60c0u: goto label_1a60c0;
        case 0x1a60c4u: goto label_1a60c4;
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a60d0u: goto label_1a60d0;
        case 0x1a60d4u: goto label_1a60d4;
        case 0x1a60d8u: goto label_1a60d8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a60e0u: goto label_1a60e0;
        case 0x1a60e4u: goto label_1a60e4;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60ecu: goto label_1a60ec;
        case 0x1a60f0u: goto label_1a60f0;
        case 0x1a60f4u: goto label_1a60f4;
        case 0x1a60f8u: goto label_1a60f8;
        case 0x1a60fcu: goto label_1a60fc;
        case 0x1a6100u: goto label_1a6100;
        case 0x1a6104u: goto label_1a6104;
        case 0x1a6108u: goto label_1a6108;
        case 0x1a610cu: goto label_1a610c;
        case 0x1a6110u: goto label_1a6110;
        case 0x1a6114u: goto label_1a6114;
        case 0x1a6118u: goto label_1a6118;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6124u: goto label_1a6124;
        case 0x1a6128u: goto label_1a6128;
        case 0x1a612cu: goto label_1a612c;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6134u: goto label_1a6134;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a613cu: goto label_1a613c;
        case 0x1a6140u: goto label_1a6140;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6148u: goto label_1a6148;
        case 0x1a614cu: goto label_1a614c;
        case 0x1a6150u: goto label_1a6150;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6158u: goto label_1a6158;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a6164u: goto label_1a6164;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a616cu: goto label_1a616c;
        case 0x1a6170u: goto label_1a6170;
        case 0x1a6174u: goto label_1a6174;
        case 0x1a6178u: goto label_1a6178;
        case 0x1a617cu: goto label_1a617c;
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        case 0x1a62b8u: goto label_1a62b8;
        case 0x1a62bcu: goto label_1a62bc;
        case 0x1a62c0u: goto label_1a62c0;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62c8u: goto label_1a62c8;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d0u: goto label_1a62d0;
        case 0x1a62d4u: goto label_1a62d4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62dcu: goto label_1a62dc;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a62e8u: goto label_1a62e8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a62f0u: goto label_1a62f0;
        case 0x1a62f4u: goto label_1a62f4;
        case 0x1a62f8u: goto label_1a62f8;
        case 0x1a62fcu: goto label_1a62fc;
        case 0x1a6300u: goto label_1a6300;
        case 0x1a6304u: goto label_1a6304;
        case 0x1a6308u: goto label_1a6308;
        case 0x1a630cu: goto label_1a630c;
        case 0x1a6310u: goto label_1a6310;
        case 0x1a6314u: goto label_1a6314;
        case 0x1a6318u: goto label_1a6318;
        case 0x1a631cu: goto label_1a631c;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a6324u: goto label_1a6324;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a632cu: goto label_1a632c;
        case 0x1a6330u: goto label_1a6330;
        case 0x1a6334u: goto label_1a6334;
        case 0x1a6338u: goto label_1a6338;
        case 0x1a633cu: goto label_1a633c;
        case 0x1a6340u: goto label_1a6340;
        case 0x1a6344u: goto label_1a6344;
        case 0x1a6348u: goto label_1a6348;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6350u: goto label_1a6350;
        case 0x1a6354u: goto label_1a6354;
        case 0x1a6358u: goto label_1a6358;
        case 0x1a635cu: goto label_1a635c;
        case 0x1a6360u: goto label_1a6360;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6368u: goto label_1a6368;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a6370u: goto label_1a6370;
        case 0x1a6374u: goto label_1a6374;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a637cu: goto label_1a637c;
        case 0x1a6380u: goto label_1a6380;
        case 0x1a6384u: goto label_1a6384;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a638cu: goto label_1a638c;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a6394u: goto label_1a6394;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a63a4u: goto label_1a63a4;
        case 0x1a63a8u: goto label_1a63a8;
        case 0x1a63acu: goto label_1a63ac;
        case 0x1a63b0u: goto label_1a63b0;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63b8u: goto label_1a63b8;
        case 0x1a63bcu: goto label_1a63bc;
        case 0x1a63c0u: goto label_1a63c0;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63c8u: goto label_1a63c8;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63d0u: goto label_1a63d0;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63d8u: goto label_1a63d8;
        case 0x1a63dcu: goto label_1a63dc;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a63e4u: goto label_1a63e4;
        case 0x1a63e8u: goto label_1a63e8;
        case 0x1a63ecu: goto label_1a63ec;
        case 0x1a63f0u: goto label_1a63f0;
        case 0x1a63f4u: goto label_1a63f4;
        case 0x1a63f8u: goto label_1a63f8;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6400u: goto label_1a6400;
        case 0x1a6404u: goto label_1a6404;
        case 0x1a6408u: goto label_1a6408;
        case 0x1a640cu: goto label_1a640c;
        case 0x1a6410u: goto label_1a6410;
        case 0x1a6414u: goto label_1a6414;
        case 0x1a6418u: goto label_1a6418;
        case 0x1a641cu: goto label_1a641c;
        case 0x1a6420u: goto label_1a6420;
        case 0x1a6424u: goto label_1a6424;
        case 0x1a6428u: goto label_1a6428;
        case 0x1a642cu: goto label_1a642c;
        case 0x1a6430u: goto label_1a6430;
        case 0x1a6434u: goto label_1a6434;
        case 0x1a6438u: goto label_1a6438;
        case 0x1a643cu: goto label_1a643c;
        case 0x1a6440u: goto label_1a6440;
        case 0x1a6444u: goto label_1a6444;
        case 0x1a6448u: goto label_1a6448;
        case 0x1a644cu: goto label_1a644c;
        case 0x1a6450u: goto label_1a6450;
        case 0x1a6454u: goto label_1a6454;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a645cu: goto label_1a645c;
        case 0x1a6460u: goto label_1a6460;
        case 0x1a6464u: goto label_1a6464;
        case 0x1a6468u: goto label_1a6468;
        case 0x1a646cu: goto label_1a646c;
        case 0x1a6470u: goto label_1a6470;
        case 0x1a6474u: goto label_1a6474;
        case 0x1a6478u: goto label_1a6478;
        case 0x1a647cu: goto label_1a647c;
        case 0x1a6480u: goto label_1a6480;
        case 0x1a6484u: goto label_1a6484;
        case 0x1a6488u: goto label_1a6488;
        case 0x1a648cu: goto label_1a648c;
        case 0x1a6490u: goto label_1a6490;
        case 0x1a6494u: goto label_1a6494;
        case 0x1a6498u: goto label_1a6498;
        case 0x1a649cu: goto label_1a649c;
        case 0x1a64a0u: goto label_1a64a0;
        case 0x1a64a4u: goto label_1a64a4;
        case 0x1a64a8u: goto label_1a64a8;
        case 0x1a64acu: goto label_1a64ac;
        case 0x1a64b0u: goto label_1a64b0;
        case 0x1a64b4u: goto label_1a64b4;
        case 0x1a64b8u: goto label_1a64b8;
        case 0x1a64bcu: goto label_1a64bc;
        case 0x1a64c0u: goto label_1a64c0;
        case 0x1a64c4u: goto label_1a64c4;
        case 0x1a64c8u: goto label_1a64c8;
        case 0x1a64ccu: goto label_1a64cc;
        case 0x1a64d0u: goto label_1a64d0;
        case 0x1a64d4u: goto label_1a64d4;
        case 0x1a64d8u: goto label_1a64d8;
        case 0x1a64dcu: goto label_1a64dc;
        case 0x1a64e0u: goto label_1a64e0;
        case 0x1a64e4u: goto label_1a64e4;
        case 0x1a64e8u: goto label_1a64e8;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a64f0u: goto label_1a64f0;
        case 0x1a64f4u: goto label_1a64f4;
        case 0x1a64f8u: goto label_1a64f8;
        case 0x1a64fcu: goto label_1a64fc;
        case 0x1a6500u: goto label_1a6500;
        case 0x1a6504u: goto label_1a6504;
        case 0x1a6508u: goto label_1a6508;
        case 0x1a650cu: goto label_1a650c;
        case 0x1a6510u: goto label_1a6510;
        case 0x1a6514u: goto label_1a6514;
        case 0x1a6518u: goto label_1a6518;
        case 0x1a651cu: goto label_1a651c;
        case 0x1a6520u: goto label_1a6520;
        case 0x1a6524u: goto label_1a6524;
        case 0x1a6528u: goto label_1a6528;
        case 0x1a652cu: goto label_1a652c;
        case 0x1a6530u: goto label_1a6530;
        case 0x1a6534u: goto label_1a6534;
        case 0x1a6538u: goto label_1a6538;
        case 0x1a653cu: goto label_1a653c;
        case 0x1a6540u: goto label_1a6540;
        case 0x1a6544u: goto label_1a6544;
        case 0x1a6548u: goto label_1a6548;
        case 0x1a654cu: goto label_1a654c;
        case 0x1a6550u: goto label_1a6550;
        case 0x1a6554u: goto label_1a6554;
        case 0x1a6558u: goto label_1a6558;
        case 0x1a655cu: goto label_1a655c;
        case 0x1a6560u: goto label_1a6560;
        case 0x1a6564u: goto label_1a6564;
        case 0x1a6568u: goto label_1a6568;
        case 0x1a656cu: goto label_1a656c;
        case 0x1a6570u: goto label_1a6570;
        case 0x1a6574u: goto label_1a6574;
        case 0x1a6578u: goto label_1a6578;
        case 0x1a657cu: goto label_1a657c;
        case 0x1a6580u: goto label_1a6580;
        case 0x1a6584u: goto label_1a6584;
        case 0x1a6588u: goto label_1a6588;
        case 0x1a658cu: goto label_1a658c;
        case 0x1a6590u: goto label_1a6590;
        case 0x1a6594u: goto label_1a6594;
        case 0x1a6598u: goto label_1a6598;
        case 0x1a659cu: goto label_1a659c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65a4u: goto label_1a65a4;
        case 0x1a65a8u: goto label_1a65a8;
        case 0x1a65acu: goto label_1a65ac;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65b4u: goto label_1a65b4;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a65bcu: goto label_1a65bc;
        case 0x1a65c0u: goto label_1a65c0;
        case 0x1a65c4u: goto label_1a65c4;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65d4u: goto label_1a65d4;
        case 0x1a65d8u: goto label_1a65d8;
        case 0x1a65dcu: goto label_1a65dc;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65e4u: goto label_1a65e4;
        case 0x1a65e8u: goto label_1a65e8;
        case 0x1a65ecu: goto label_1a65ec;
        case 0x1a65f0u: goto label_1a65f0;
        case 0x1a65f4u: goto label_1a65f4;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a65fcu: goto label_1a65fc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6604u: goto label_1a6604;
        case 0x1a6608u: goto label_1a6608;
        case 0x1a660cu: goto label_1a660c;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        default: break;
    }

    ctx->pc = 0x1a5e60u;

label_1a5e60:
    // 0x1a5e60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1a5e64:
    // 0x1a5e64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a5e68:
    // 0x1a5e68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a5e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a5e6c:
    // 0x1a5e6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a5e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5e70:
    // 0x1a5e70: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1a5e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1a5e74:
    // 0x1a5e74: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a5e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1a5e78:
    // 0x1a5e78: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1a5e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1a5e7c:
    // 0x1a5e7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a5e7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a5e80:
    // 0x1a5e80: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1a5e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1a5e84:
    // 0x1a5e84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a5e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e88:
    // 0x1a5e88: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a5e8c:
    // 0x1a5e8c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a5e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a5e90:
    // 0x1a5e90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a5e94:
    // 0x1a5e94: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a5e94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1a5e98:
    // 0x1a5e98: 0xc053c2c  jal         func_14F0B0
label_1a5e9c:
    if (ctx->pc == 0x1A5E9Cu) {
        ctx->pc = 0x1A5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E98u;
        // 0x1a5e9c: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EA0u;
        goto label_1a5ea0;
    }
    ctx->pc = 0x1A5E98u;
    SET_GPR_U32(ctx, 31, 0x1A5EA0u);
    ctx->pc = 0x1A5E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E98u;
    // 0x1a5e9c: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1A5E98u, 0x1A5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EA0u;
label_1a5ea0:
    // 0x1a5ea0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a5ea4:
    // 0x1a5ea4: 0xc0628f0  jal         func_18A3C0
label_1a5ea8:
    if (ctx->pc == 0x1A5EA8u) {
        ctx->pc = 0x1A5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EA4u;
        // 0x1a5ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EACu;
        goto label_1a5eac;
    }
    ctx->pc = 0x1A5EA4u;
    SET_GPR_U32(ctx, 31, 0x1A5EACu);
    ctx->pc = 0x1A5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EA4u;
    // 0x1a5ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A5EA4u, 0x1A5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EACu;
label_1a5eac:
    // 0x1a5eac: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1a5eb0:
    // 0x1a5eb0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a5eb4:
    // 0x1a5eb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5eb8:
    // 0x1a5eb8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a5eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a5ebc:
    // 0x1a5ebc: 0xc06282c  jal         func_18A0B0
label_1a5ec0:
    if (ctx->pc == 0x1A5EC0u) {
        ctx->pc = 0x1A5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EBCu;
        // 0x1a5ec0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EC4u;
        goto label_1a5ec4;
    }
    ctx->pc = 0x1A5EBCu;
    SET_GPR_U32(ctx, 31, 0x1A5EC4u);
    ctx->pc = 0x1A5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EBCu;
    // 0x1a5ec0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1A5EBCu, 0x1A5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EC4u;
label_1a5ec4:
    // 0x1a5ec4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a5ec8:
    // 0x1a5ec8: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a5ecc:
    // 0x1a5ecc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5ed0:
    // 0x1a5ed0: 0x0  nop
    ctx->pc = 0x1a5ed0u;
    // NOP
label_1a5ed4:
    // 0x1a5ed4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a5ed4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a5ed8:
    // 0x1a5ed8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a5ed8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1a5edc:
    // 0x1a5edc: 0xc062860  jal         func_18A180
label_1a5ee0:
    if (ctx->pc == 0x1A5EE0u) {
        ctx->pc = 0x1A5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EDCu;
        // 0x1a5ee0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EE4u;
        goto label_1a5ee4;
    }
    ctx->pc = 0x1A5EDCu;
    SET_GPR_U32(ctx, 31, 0x1A5EE4u);
    ctx->pc = 0x1A5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EDCu;
    // 0x1a5ee0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A5EDCu, 0x1A5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EE4u;
label_1a5ee4:
    // 0x1a5ee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a5ee8:
    // 0x1a5ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5eec:
    // 0x1a5eec: 0xc062858  jal         func_18A160
label_1a5ef0:
    if (ctx->pc == 0x1A5EF0u) {
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EF4u;
        goto label_1a5ef4;
    }
    ctx->pc = 0x1A5EECu;
    SET_GPR_U32(ctx, 31, 0x1A5EF4u);
    ctx->pc = 0x1A5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EECu;
    // 0x1a5ef0: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A5EECu, 0x1A5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EF4u;
label_1a5ef4:
    // 0x1a5ef4: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_1a5ef8:
    // 0x1a5ef8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a5efc:
    // 0x1a5efc: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1a5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1a5f00:
    // 0x1a5f00: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x1a5f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_1a5f04:
    // 0x1a5f04: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1a5f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1a5f08:
    // 0x1a5f08: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a5f0c:
    // 0x1a5f0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1a5f10:
    // 0x1a5f10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5f14:
    if (ctx->pc == 0x1A5F14u) {
        ctx->pc = 0x1A5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F10u;
        // 0x1a5f14: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F18u;
        goto label_1a5f18;
    }
    ctx->pc = 0x1A5F10u;
    {
        const bool branch_taken_0x1a5f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F10u;
        // 0x1a5f14: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f10) {
            ctx->pc = 0x1A5F24u;
            goto label_1a5f24;
        }
    }
    ctx->pc = 0x1A5F18u;
label_1a5f18:
    // 0x1a5f18: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1a5f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_1a5f1c:
    // 0x1a5f1c: 0x90262eb5  lbu         $a2, 0x2EB5($at)
    ctx->pc = 0x1a5f1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11957)));
label_1a5f20:
    // 0x1a5f20: 0x0  nop
    ctx->pc = 0x1a5f20u;
    // NOP
label_1a5f24:
    // 0x1a5f24: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1a5f28:
    if (ctx->pc == 0x1A5F28u) {
        ctx->pc = 0x1A5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F24u;
        // 0x1a5f28: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F2Cu;
        goto label_1a5f2c;
    }
    ctx->pc = 0x1A5F24u;
    {
        const bool branch_taken_0x1a5f24 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F24u;
        // 0x1a5f28: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f24) {
            ctx->pc = 0x1A5F34u;
            goto label_1a5f34;
        }
    }
    ctx->pc = 0x1A5F2Cu;
label_1a5f2c:
    // 0x1a5f2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a5f30:
    if (ctx->pc == 0x1A5F30u) {
        ctx->pc = 0x1A5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F2Cu;
        // 0x1a5f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F34u;
        goto label_1a5f34;
    }
    ctx->pc = 0x1A5F2Cu;
    {
        const bool branch_taken_0x1a5f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F2Cu;
        // 0x1a5f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f2c) {
            ctx->pc = 0x1A5F54u;
            goto label_1a5f54;
        }
    }
    ctx->pc = 0x1A5F34u;
label_1a5f34:
    // 0x1a5f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a5f38:
    // 0x1a5f38: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1a5f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5f3c:
    // 0x1a5f3c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a5f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a5f40:
    // 0x1a5f40: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1a5f44:
    if (ctx->pc == 0x1A5F44u) {
        ctx->pc = 0x1A5F48u;
        goto label_1a5f48;
    }
    ctx->pc = 0x1A5F40u;
    {
        const bool branch_taken_0x1a5f40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f40) {
            ctx->pc = 0x1A5F50u;
            goto label_1a5f50;
        }
    }
    ctx->pc = 0x1A5F48u;
label_1a5f48:
    // 0x1a5f48: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5f4c:
    if (ctx->pc == 0x1A5F4Cu) {
        ctx->pc = 0x1A5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F48u;
        // 0x1a5f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F50u;
        goto label_1a5f50;
    }
    ctx->pc = 0x1A5F48u;
    {
        const bool branch_taken_0x1a5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F48u;
        // 0x1a5f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f48) {
            ctx->pc = 0x1A5F54u;
            goto label_1a5f54;
        }
    }
    ctx->pc = 0x1A5F50u;
label_1a5f50:
    // 0x1a5f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5f54:
    // 0x1a5f54: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1a5f54u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a5f58:
    // 0x1a5f58: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_1a5f5c:
    // 0x1a5f5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a5f60:
    if (ctx->pc == 0x1A5F60u) {
        ctx->pc = 0x1A5F64u;
        goto label_1a5f64;
    }
    ctx->pc = 0x1A5F5Cu;
    {
        const bool branch_taken_0x1a5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f5c) {
            ctx->pc = 0x1A5F90u;
            goto label_1a5f90;
        }
    }
    ctx->pc = 0x1A5F64u;
label_1a5f64:
    // 0x1a5f64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5f68:
    // 0x1a5f68: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_1a5f6c:
    if (ctx->pc == 0x1A5F6Cu) {
        ctx->pc = 0x1A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F68u;
        // 0x1a5f6c: 0xae820104  sw          $v0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F70u;
        goto label_1a5f70;
    }
    ctx->pc = 0x1A5F68u;
    {
        const bool branch_taken_0x1a5f68 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F68u;
        // 0x1a5f6c: 0xae820104  sw          $v0, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f68) {
            ctx->pc = 0x1A5F90u;
            goto label_1a5f90;
        }
    }
    ctx->pc = 0x1A5F70u;
label_1a5f70:
    // 0x1a5f70: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_1a5f74:
    // 0x1a5f74: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a5f78:
    if (ctx->pc == 0x1A5F78u) {
        ctx->pc = 0x1A5F7Cu;
        goto label_1a5f7c;
    }
    ctx->pc = 0x1A5F74u;
    {
        const bool branch_taken_0x1a5f74 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a5f74) {
            ctx->pc = 0x1A5F90u;
            goto label_1a5f90;
        }
    }
    ctx->pc = 0x1A5F7Cu;
label_1a5f7c:
    // 0x1a5f7c: 0x8e8400fc  lw          $a0, 0xFC($s4)
    ctx->pc = 0x1a5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 252)));
label_1a5f80:
    // 0x1a5f80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a5f84:
    if (ctx->pc == 0x1A5F84u) {
        ctx->pc = 0x1A5F88u;
        goto label_1a5f88;
    }
    ctx->pc = 0x1A5F80u;
    {
        const bool branch_taken_0x1a5f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f80) {
            ctx->pc = 0x1A5F90u;
            goto label_1a5f90;
        }
    }
    ctx->pc = 0x1A5F88u;
label_1a5f88:
    // 0x1a5f88: 0xc064fb8  jal         func_193EE0
label_1a5f8c:
    if (ctx->pc == 0x1A5F8Cu) {
        ctx->pc = 0x1A5F90u;
        goto label_1a5f90;
    }
    ctx->pc = 0x1A5F88u;
    SET_GPR_U32(ctx, 31, 0x1A5F90u);
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A5F88u, 0x1A5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F90u;
label_1a5f90:
    // 0x1a5f90: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x1a5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1a5f94:
    // 0x1a5f94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5f98:
    // 0x1a5f98: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
label_1a5f9c:
    if (ctx->pc == 0x1A5F9Cu) {
        ctx->pc = 0x1A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F98u;
        // 0x1a5f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FA0u;
        goto label_1a5fa0;
    }
    ctx->pc = 0x1A5F98u;
    {
        const bool branch_taken_0x1a5f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F98u;
        // 0x1a5f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f98) {
            ctx->pc = 0x1A611Cu;
            goto label_1a611c;
        }
    }
    ctx->pc = 0x1A5FA0u;
label_1a5fa0:
    // 0x1a5fa0: 0x10650034  beq         $v1, $a1, . + 4 + (0x34 << 2)
label_1a5fa4:
    if (ctx->pc == 0x1A5FA4u) {
        ctx->pc = 0x1A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FA0u;
        // 0x1a5fa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FA8u;
        goto label_1a5fa8;
    }
    ctx->pc = 0x1A5FA0u;
    {
        const bool branch_taken_0x1a5fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FA0u;
        // 0x1a5fa4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa0) {
            ctx->pc = 0x1A6074u;
            goto label_1a6074;
        }
    }
    ctx->pc = 0x1A5FA8u;
label_1a5fa8:
    // 0x1a5fa8: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_1a5fac:
    if (ctx->pc == 0x1A5FACu) {
        ctx->pc = 0x1A5FB0u;
        goto label_1a5fb0;
    }
    ctx->pc = 0x1A5FA8u;
    {
        const bool branch_taken_0x1a5fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a5fa8) {
            ctx->pc = 0x1A5FF8u;
            goto label_1a5ff8;
        }
    }
    ctx->pc = 0x1A5FB0u;
label_1a5fb0:
    // 0x1a5fb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a5fb4:
    if (ctx->pc == 0x1A5FB4u) {
        ctx->pc = 0x1A5FB8u;
        goto label_1a5fb8;
    }
    ctx->pc = 0x1A5FB0u;
    {
        const bool branch_taken_0x1a5fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb0) {
            ctx->pc = 0x1A5FC0u;
            goto label_1a5fc0;
        }
    }
    ctx->pc = 0x1A5FB8u;
label_1a5fb8:
    // 0x1a5fb8: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1a5fbc:
    if (ctx->pc == 0x1A5FBCu) {
        ctx->pc = 0x1A5FC0u;
        goto label_1a5fc0;
    }
    ctx->pc = 0x1A5FB8u;
    {
        const bool branch_taken_0x1a5fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb8) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A5FC0u;
label_1a5fc0:
    // 0x1a5fc0: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1a5fc4:
    // 0x1a5fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5fc8:
    // 0x1a5fc8: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_1a5fcc:
    if (ctx->pc == 0x1A5FCCu) {
        ctx->pc = 0x1A5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FC8u;
        // 0x1a5fcc: 0xae8200ec  sw          $v0, 0xEC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FD0u;
        goto label_1a5fd0;
    }
    ctx->pc = 0x1A5FC8u;
    {
        const bool branch_taken_0x1a5fc8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FC8u;
        // 0x1a5fcc: 0xae8200ec  sw          $v0, 0xEC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fc8) {
            ctx->pc = 0x1A5FECu;
            goto label_1a5fec;
        }
    }
    ctx->pc = 0x1A5FD0u;
label_1a5fd0:
    // 0x1a5fd0: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1a5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a5fd4:
    // 0x1a5fd4: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x1a5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_1a5fd8:
    // 0x1a5fd8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1a5fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a5fdc:
    // 0x1a5fdc: 0xae8200ec  sw          $v0, 0xEC($s4)
    ctx->pc = 0x1a5fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
label_1a5fe0:
    // 0x1a5fe0: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x1a5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a5fe4:
    // 0x1a5fe4: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x1a5fe4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_1a5fe8:
    // 0x1a5fe8: 0xae8400e4  sw          $a0, 0xE4($s4)
    ctx->pc = 0x1a5fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 4));
label_1a5fec:
    // 0x1a5fec: 0x0  nop
    ctx->pc = 0x1a5fecu;
    // NOP
label_1a5ff0:
    // 0x1a5ff0: 0x10000093  b           . + 4 + (0x93 << 2)
label_1a5ff4:
    if (ctx->pc == 0x1A5FF4u) {
        ctx->pc = 0x1A5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF0u;
        // 0x1a5ff4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FF8u;
        goto label_1a5ff8;
    }
    ctx->pc = 0x1A5FF0u;
    {
        const bool branch_taken_0x1a5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF0u;
        // 0x1a5ff4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff0) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A5FF8u;
label_1a5ff8:
    // 0x1a5ff8: 0x8e8300ec  lw          $v1, 0xEC($s4)
    ctx->pc = 0x1a5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1a5ffc:
    // 0x1a5ffc: 0x8e8200f0  lw          $v0, 0xF0($s4)
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_1a6000:
    // 0x1a6000: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a6000u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a6004:
    // 0x1a6004: 0x0  nop
    ctx->pc = 0x1a6004u;
    // NOP
label_1a6008:
    // 0x1a6008: 0x0  nop
    ctx->pc = 0x1a6008u;
    // NOP
label_1a600c:
    // 0x1a600c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a600cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a6010:
    // 0x1a6010: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1a6014:
    if (ctx->pc == 0x1A6014u) {
        ctx->pc = 0x1A6018u;
        goto label_1a6018;
    }
    ctx->pc = 0x1A6010u;
    {
        const bool branch_taken_0x1a6010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6010) {
            ctx->pc = 0x1A6054u;
            goto label_1a6054;
        }
    }
    ctx->pc = 0x1A6018u;
label_1a6018:
    // 0x1a6018: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a601c:
    // 0x1a601c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1a6020:
    // 0x1a6020: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a6020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a6024:
    // 0x1a6024: 0xae8300e8  sw          $v1, 0xE8($s4)
    ctx->pc = 0x1a6024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 3));
label_1a6028:
    // 0x1a6028: 0xde8400c0  ld          $a0, 0xC0($s4)
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 192)));
label_1a602c:
    // 0x1a602c: 0xde8300c8  ld          $v1, 0xC8($s4)
    ctx->pc = 0x1a602cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a6030:
    // 0x1a6030: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_1a6034:
    // 0x1a6034: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a6038:
    if (ctx->pc == 0x1A6038u) {
        ctx->pc = 0x1A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6034u;
        // 0x1a6038: 0xfe8300c0  sd          $v1, 0xC0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A603Cu;
        goto label_1a603c;
    }
    ctx->pc = 0x1A6034u;
    {
        const bool branch_taken_0x1a6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6034u;
        // 0x1a6038: 0xfe8300c0  sd          $v1, 0xC0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6034) {
            ctx->pc = 0x1A6054u;
            goto label_1a6054;
        }
    }
    ctx->pc = 0x1A603Cu;
label_1a603c:
    // 0x1a603c: 0xc062d50  jal         func_18B540
label_1a6040:
    if (ctx->pc == 0x1A6040u) {
        ctx->pc = 0x1A6044u;
        goto label_1a6044;
    }
    ctx->pc = 0x1A603Cu;
    SET_GPR_U32(ctx, 31, 0x1A6044u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A603Cu, 0x1A6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6044u;
label_1a6044:
    // 0x1a6044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6048:
    // 0x1a6048: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a604c:
    // 0x1a604c: 0xc062b5c  jal         func_18AD70
label_1a6050:
    if (ctx->pc == 0x1A6050u) {
        ctx->pc = 0x1A6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A604Cu;
        // 0x1a6050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6054u;
        goto label_1a6054;
    }
    ctx->pc = 0x1A604Cu;
    SET_GPR_U32(ctx, 31, 0x1A6054u);
    ctx->pc = 0x1A6050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A604Cu;
    // 0x1a6050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A604Cu, 0x1A6054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6054u;
label_1a6054:
    // 0x1a6054: 0x0  nop
    ctx->pc = 0x1a6054u;
    // NOP
label_1a6058:
    // 0x1a6058: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1a605c:
    // 0x1a605c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a6060:
    // 0x1a6060: 0x1c400077  bgtz        $v0, . + 4 + (0x77 << 2)
label_1a6064:
    if (ctx->pc == 0x1A6064u) {
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0xae8200ec  sw          $v0, 0xEC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6068u;
        goto label_1a6068;
    }
    ctx->pc = 0x1A6060u;
    {
        const bool branch_taken_0x1a6060 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0xae8200ec  sw          $v0, 0xEC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6060) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A6068u;
label_1a6068:
    // 0x1a6068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a606c:
    // 0x1a606c: 0x10000074  b           . + 4 + (0x74 << 2)
label_1a6070:
    if (ctx->pc == 0x1A6070u) {
        ctx->pc = 0x1A6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A606Cu;
        // 0x1a6070: 0xae8200e4  sw          $v0, 0xE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6074u;
        goto label_1a6074;
    }
    ctx->pc = 0x1A606Cu;
    {
        const bool branch_taken_0x1a606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A606Cu;
        // 0x1a6070: 0xae8200e4  sw          $v0, 0xE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a606c) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A6074u;
label_1a6074:
    // 0x1a6074: 0x0  nop
    ctx->pc = 0x1a6074u;
    // NOP
label_1a6078:
    // 0x1a6078: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a607c:
    // 0x1a607c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_1a6080:
    if (ctx->pc == 0x1A6080u) {
        ctx->pc = 0x1A6084u;
        goto label_1a6084;
    }
    ctx->pc = 0x1A607Cu;
    {
        const bool branch_taken_0x1a607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a607c) {
            ctx->pc = 0x1A60E0u;
            goto label_1a60e0;
        }
    }
    ctx->pc = 0x1A6084u;
label_1a6084:
    // 0x1a6084: 0xde8200d8  ld          $v0, 0xD8($s4)
    ctx->pc = 0x1a6084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 216)));
label_1a6088:
    // 0x1a6088: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x1a6088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_1a608c:
    // 0x1a608c: 0xfe8200d0  sd          $v0, 0xD0($s4)
    ctx->pc = 0x1a608cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 2));
label_1a6090:
    // 0x1a6090: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a6094:
    // 0x1a6094: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
label_1a6098:
    if (ctx->pc == 0x1A6098u) {
        ctx->pc = 0x1A609Cu;
        goto label_1a609c;
    }
    ctx->pc = 0x1A6094u;
    {
        const bool branch_taken_0x1a6094 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a6094) {
            ctx->pc = 0x1A60ACu;
            goto label_1a60ac;
        }
    }
    ctx->pc = 0x1A609Cu;
label_1a609c:
    // 0x1a609c: 0xde8200d8  ld          $v0, 0xD8($s4)
    ctx->pc = 0x1a609cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 216)));
label_1a60a0:
    // 0x1a60a0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a60a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1a60a4:
    // 0x1a60a4: 0xfe8200d8  sd          $v0, 0xD8($s4)
    ctx->pc = 0x1a60a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 216), GPR_U64(ctx, 2));
label_1a60a8:
    // 0x1a60a8: 0xfe8000d0  sd          $zero, 0xD0($s4)
    ctx->pc = 0x1a60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 208), GPR_U64(ctx, 0));
label_1a60ac:
    // 0x1a60ac: 0x0  nop
    ctx->pc = 0x1a60acu;
    // NOP
label_1a60b0:
    // 0x1a60b0: 0xde8400c0  ld          $a0, 0xC0($s4)
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 192)));
label_1a60b4:
    // 0x1a60b4: 0xde8300d8  ld          $v1, 0xD8($s4)
    ctx->pc = 0x1a60b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 216)));
label_1a60b8:
    // 0x1a60b8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1a60b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1a60bc:
    // 0x1a60bc: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1a60bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_1a60c0:
    // 0x1a60c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a60c4:
    if (ctx->pc == 0x1A60C4u) {
        ctx->pc = 0x1A60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C0u;
        // 0x1a60c4: 0xfe8300c0  sd          $v1, 0xC0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60C8u;
        goto label_1a60c8;
    }
    ctx->pc = 0x1A60C0u;
    {
        const bool branch_taken_0x1a60c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C0u;
        // 0x1a60c4: 0xfe8300c0  sd          $v1, 0xC0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c0) {
            ctx->pc = 0x1A60E0u;
            goto label_1a60e0;
        }
    }
    ctx->pc = 0x1A60C8u;
label_1a60c8:
    // 0x1a60c8: 0xc062d50  jal         func_18B540
label_1a60cc:
    if (ctx->pc == 0x1A60CCu) {
        ctx->pc = 0x1A60D0u;
        goto label_1a60d0;
    }
    ctx->pc = 0x1A60C8u;
    SET_GPR_U32(ctx, 31, 0x1A60D0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A60C8u, 0x1A60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60D0u;
label_1a60d0:
    // 0x1a60d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a60d4:
    // 0x1a60d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a60d8:
    // 0x1a60d8: 0xc062b5c  jal         func_18AD70
label_1a60dc:
    if (ctx->pc == 0x1A60DCu) {
        ctx->pc = 0x1A60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60D8u;
        // 0x1a60dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60E0u;
        goto label_1a60e0;
    }
    ctx->pc = 0x1A60D8u;
    SET_GPR_U32(ctx, 31, 0x1A60E0u);
    ctx->pc = 0x1A60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60D8u;
    // 0x1a60dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A60D8u, 0x1A60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60E0u;
label_1a60e0:
    // 0x1a60e0: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a60e4:
    // 0x1a60e4: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_1a60e8:
    if (ctx->pc == 0x1A60E8u) {
        ctx->pc = 0x1A60ECu;
        goto label_1a60ec;
    }
    ctx->pc = 0x1A60E4u;
    {
        const bool branch_taken_0x1a60e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a60e4) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A60ECu;
label_1a60ec:
    // 0x1a60ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a60f0:
    // 0x1a60f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a60f4:
    // 0x1a60f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a60f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a60f8:
    // 0x1a60f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a60fc:
    // 0x1a60fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a60fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a6100:
    // 0x1a6100: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a6104:
    // 0x1a6104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a6104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a6108:
    // 0x1a6108: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a6108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a610c:
    // 0x1a610c: 0x0  nop
    ctx->pc = 0x1a610cu;
    // NOP
label_1a6110:
    // 0x1a6110: 0xae8300ec  sw          $v1, 0xEC($s4)
    ctx->pc = 0x1a6110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 3));
label_1a6114:
    // 0x1a6114: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1a6118:
    if (ctx->pc == 0x1A6118u) {
        ctx->pc = 0x1A6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6114u;
        // 0x1a6118: 0xae8200e4  sw          $v0, 0xE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A611Cu;
        goto label_1a611c;
    }
    ctx->pc = 0x1A6114u;
    {
        const bool branch_taken_0x1a6114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6114u;
        // 0x1a6118: 0xae8200e4  sw          $v0, 0xE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6114) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A611Cu;
label_1a611c:
    // 0x1a611c: 0x0  nop
    ctx->pc = 0x1a611cu;
    // NOP
label_1a6120:
    // 0x1a6120: 0x8e8300ec  lw          $v1, 0xEC($s4)
    ctx->pc = 0x1a6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1a6124:
    // 0x1a6124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6128:
    // 0x1a6128: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a6128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a612c:
    // 0x1a612c: 0xae8300ec  sw          $v1, 0xEC($s4)
    ctx->pc = 0x1a612cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 3));
label_1a6130:
    // 0x1a6130: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a6134:
    // 0x1a6134: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a6138:
    if (ctx->pc == 0x1A6138u) {
        ctx->pc = 0x1A613Cu;
        goto label_1a613c;
    }
    ctx->pc = 0x1A6134u;
    {
        const bool branch_taken_0x1a6134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6134) {
            ctx->pc = 0x1A619Cu;
            goto label_1a619c;
        }
    }
    ctx->pc = 0x1A613Cu;
label_1a613c:
    // 0x1a613c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6140:
    // 0x1a6140: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a6144:
    // 0x1a6144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6148:
    // 0x1a6148: 0x8e8400ec  lw          $a0, 0xEC($s4)
    ctx->pc = 0x1a6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1a614c:
    // 0x1a614c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a614cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a6150:
    // 0x1a6150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a6154:
    // 0x1a6154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a6154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a6158:
    // 0x1a6158: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a6158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a615c:
    // 0x1a615c: 0x0  nop
    ctx->pc = 0x1a615cu;
    // NOP
label_1a6160:
    // 0x1a6160: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a6160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a6164:
    // 0x1a6164: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1a6168:
    if (ctx->pc == 0x1A6168u) {
        ctx->pc = 0x1A6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6164u;
        // 0x1a6168: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A616Cu;
        goto label_1a616c;
    }
    ctx->pc = 0x1A6164u;
    {
        const bool branch_taken_0x1a6164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6164u;
        // 0x1a6168: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6164) {
            ctx->pc = 0x1A619Cu;
            goto label_1a619c;
        }
    }
    ctx->pc = 0x1A616Cu;
label_1a616c:
    // 0x1a616c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6170:
    // 0x1a6170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6174:
    // 0x1a6174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6178:
    // 0x1a6178: 0x0  nop
    ctx->pc = 0x1a6178u;
    // NOP
label_1a617c:
    // 0x1a617c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a617cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a6180:
    // 0x1a6180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a6180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a6184:
    // 0x1a6184: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x1a6184u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a6188:
    // 0x1a6188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a618c:
    // 0x1a618c: 0x0  nop
    ctx->pc = 0x1a618cu;
    // NOP
label_1a6190:
    // 0x1a6190: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a6194:
    // 0x1a6194: 0xc053c2c  jal         func_14F0B0
label_1a6198:
    if (ctx->pc == 0x1A6198u) {
        ctx->pc = 0x1A6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6194u;
        // 0x1a6198: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A619Cu;
        goto label_1a619c;
    }
    ctx->pc = 0x1A6194u;
    SET_GPR_U32(ctx, 31, 0x1A619Cu);
    ctx->pc = 0x1A6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6194u;
    // 0x1a6198: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1A6194u, 0x1A619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
label_1a61a0:
    // 0x1a61a0: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x1a61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_1a61a4:
    // 0x1a61a4: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
label_1a61a8:
    if (ctx->pc == 0x1A61A8u) {
        ctx->pc = 0x1A61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A4u;
        // 0x1a61a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61ACu;
        goto label_1a61ac;
    }
    ctx->pc = 0x1A61A4u;
    {
        const bool branch_taken_0x1a61a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A4u;
        // 0x1a61a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61a4) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A61ACu;
label_1a61ac:
    // 0x1a61ac: 0xae8000ec  sw          $zero, 0xEC($s4)
    ctx->pc = 0x1a61acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 0));
label_1a61b0:
    // 0x1a61b0: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_1a61b4:
    // 0x1a61b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a61b8:
    if (ctx->pc == 0x1A61B8u) {
        ctx->pc = 0x1A61BCu;
        goto label_1a61bc;
    }
    ctx->pc = 0x1A61B4u;
    {
        const bool branch_taken_0x1a61b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a61b4) {
            ctx->pc = 0x1A61D0u;
            goto label_1a61d0;
        }
    }
    ctx->pc = 0x1A61BCu;
label_1a61bc:
    // 0x1a61bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a61bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a61c0:
    // 0x1a61c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a61c4:
    // 0x1a61c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a61c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a61c8:
    // 0x1a61c8: 0xc069994  jal         func_1A6650
label_1a61cc:
    if (ctx->pc == 0x1A61CCu) {
        ctx->pc = 0x1A61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C8u;
        // 0x1a61cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61D0u;
        goto label_1a61d0;
    }
    ctx->pc = 0x1A61C8u;
    SET_GPR_U32(ctx, 31, 0x1A61D0u);
    ctx->pc = 0x1A61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61C8u;
    // 0x1a61cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A61C8u, 0x1A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61D0u;
label_1a61d0:
    // 0x1a61d0: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x1a61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1a61d4:
    // 0x1a61d4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a61d8:
    // 0x1a61d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a61dc:
    // 0x1a61dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a61e0:
    // 0x1a61e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a61e4:
    // 0x1a61e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a61e8:
    // 0x1a61e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a61e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a61ec:
    // 0x1a61ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a61f0:
    // 0x1a61f0: 0x320f809  jalr        $t9
label_1a61f4:
    if (ctx->pc == 0x1A61F4u) {
        ctx->pc = 0x1A61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F0u;
        // 0x1a61f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61F8u;
        goto label_1a61f8;
    }
    ctx->pc = 0x1A61F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A61F8u);
        ctx->pc = 0x1A61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F0u;
        // 0x1a61f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61F0u, 0x1A61F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A61F8u;
label_1a61f8:
    // 0x1a61f8: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a61fc:
    // 0x1a61fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6200:
    // 0x1a6200: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
label_1a6204:
    if (ctx->pc == 0x1A6204u) {
        ctx->pc = 0x1A6208u;
        goto label_1a6208;
    }
    ctx->pc = 0x1A6200u;
    {
        const bool branch_taken_0x1a6200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a6200) {
            ctx->pc = 0x1A6220u;
            goto label_1a6220;
        }
    }
    ctx->pc = 0x1A6208u;
label_1a6208:
    // 0x1a6208: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a620c:
    // 0x1a620c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a6210:
    // 0x1a6210: 0xac4002dc  sw          $zero, 0x2DC($v0)
    ctx->pc = 0x1a6210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 0));
label_1a6214:
    // 0x1a6214: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a6218:
    // 0x1a6218: 0xc06bd80  jal         func_1AF600
label_1a621c:
    if (ctx->pc == 0x1A621Cu) {
        ctx->pc = 0x1A621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6218u;
        // 0x1a621c: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6220u;
        goto label_1a6220;
    }
    ctx->pc = 0x1A6218u;
    SET_GPR_U32(ctx, 31, 0x1A6220u);
    ctx->pc = 0x1A621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6218u;
    // 0x1a621c: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1A6218u, 0x1A6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6220u;
label_1a6220:
    // 0x1a6220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6224:
    // 0x1a6224: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a6228:
    // 0x1a6228: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6228u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a622c:
    // 0x1a622c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a622cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1a6230:
    // 0x1a6230: 0xc053c2c  jal         func_14F0B0
label_1a6234:
    if (ctx->pc == 0x1A6234u) {
        ctx->pc = 0x1A6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6230u;
        // 0x1a6234: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6238u;
        goto label_1a6238;
    }
    ctx->pc = 0x1A6230u;
    SET_GPR_U32(ctx, 31, 0x1A6238u);
    ctx->pc = 0x1A6234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6230u;
    // 0x1a6234: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1A6230u, 0x1A6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6238u;
label_1a6238:
    // 0x1a6238: 0x100000fc  b           . + 4 + (0xFC << 2)
label_1a623c:
    if (ctx->pc == 0x1A623Cu) {
        ctx->pc = 0x1A623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6238u;
        // 0x1a623c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6240u;
        goto label_1a6240;
    }
    ctx->pc = 0x1A6238u;
    {
        const bool branch_taken_0x1a6238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6238u;
        // 0x1a623c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6238) {
            ctx->pc = 0x1A662Cu;
            goto label_1a662c;
        }
    }
    ctx->pc = 0x1A6240u;
label_1a6240:
    // 0x1a6240: 0x1600ff53  bnez        $s0, . + 4 + (-0xAD << 2)
label_1a6244:
    if (ctx->pc == 0x1A6244u) {
        ctx->pc = 0x1A6248u;
        goto label_1a6248;
    }
    ctx->pc = 0x1A6240u;
    {
        const bool branch_taken_0x1a6240 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6240) {
            ctx->pc = 0x1A5F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5f90;
        }
    }
    ctx->pc = 0x1A6248u;
label_1a6248:
    // 0x1a6248: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1a624c:
    if (ctx->pc == 0x1A624Cu) {
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6250u;
        goto label_1a6250;
    }
    ctx->pc = 0x1A6248u;
    {
        const bool branch_taken_0x1a6248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6248) {
            ctx->pc = 0x1A626Cu;
            goto label_1a626c;
        }
    }
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0xc062d50  jal         func_18B540
label_1a6254:
    if (ctx->pc == 0x1A6254u) {
        ctx->pc = 0x1A6258u;
        goto label_1a6258;
    }
    ctx->pc = 0x1A6250u;
    SET_GPR_U32(ctx, 31, 0x1A6258u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A6250u, 0x1A6258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a625c:
    // 0x1a625c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a6260:
    // 0x1a6260: 0xc062b5c  jal         func_18AD70
label_1a6264:
    if (ctx->pc == 0x1A6264u) {
        ctx->pc = 0x1A6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6260u;
        // 0x1a6264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6268u;
        goto label_1a6268;
    }
    ctx->pc = 0x1A6260u;
    SET_GPR_U32(ctx, 31, 0x1A6268u);
    ctx->pc = 0x1A6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6260u;
    // 0x1a6264: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A6260u, 0x1A6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a6268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a626c:
    // 0x1a626c: 0xc062114  jal         func_188450
label_1a6270:
    if (ctx->pc == 0x1A6270u) {
        ctx->pc = 0x1A6274u;
        goto label_1a6274;
    }
    ctx->pc = 0x1A626Cu;
    SET_GPR_U32(ctx, 31, 0x1A6274u);
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A626Cu, 0x1A6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6274u;
label_1a6274:
    // 0x1a6274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6278:
    // 0x1a6278: 0xc062114  jal         func_188450
label_1a627c:
    if (ctx->pc == 0x1A627Cu) {
        ctx->pc = 0x1A627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6278u;
        // 0x1a627c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6280u;
        goto label_1a6280;
    }
    ctx->pc = 0x1A6278u;
    SET_GPR_U32(ctx, 31, 0x1A6280u);
    ctx->pc = 0x1A627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6278u;
    // 0x1a627c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6278u, 0x1A6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6280u;
label_1a6280:
    // 0x1a6280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6284:
    // 0x1a6284: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1a6284u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_1a6288:
    // 0x1a6288: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1a6288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a628c:
    // 0x1a628c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a6290:
    // 0x1a6290: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x267306a8  addiu       $s3, $s3, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6298u;
        goto label_1a6298;
    }
    ctx->pc = 0x1A6290u;
    {
        const bool branch_taken_0x1a6290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x267306a8  addiu       $s3, $s3, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6290) {
            ctx->pc = 0x1A64B0u;
            goto label_1a64b0;
        }
    }
    ctx->pc = 0x1A6298u;
label_1a6298:
    // 0x1a6298: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1a629c:
    // 0x1a629c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a62a0:
    // 0x1a62a0: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1a62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
label_1a62a4:
    // 0x1a62a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a62a8:
    // 0x1a62a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a62ac:
    // 0x1a62ac: 0x400008  jr          $v0
label_1a62b0:
    if (ctx->pc == 0x1A62B0u) {
        ctx->pc = 0x1A62B4u;
        goto label_1a62b4;
    }
    ctx->pc = 0x1A62ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A62B4u: goto label_1a62b4;
            case 0x1A6344u: goto label_1a6344;
            case 0x1A63C4u: goto label_1a63c4;
            case 0x1A6404u: goto label_1a6404;
            case 0x1A6444u: goto label_1a6444;
            case 0x1A64B0u: goto label_1a64b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A62ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A62B4u;
label_1a62b4:
    // 0x1a62b4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a62b8:
    // 0x1a62b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a62bc:
    // 0x1a62bc: 0xc06bd80  jal         func_1AF600
label_1a62c0:
    if (ctx->pc == 0x1A62C0u) {
        ctx->pc = 0x1A62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62BCu;
        // 0x1a62c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62C4u;
        goto label_1a62c4;
    }
    ctx->pc = 0x1A62BCu;
    SET_GPR_U32(ctx, 31, 0x1A62C4u);
    ctx->pc = 0x1A62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62BCu;
    // 0x1a62c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1A62BCu, 0x1A62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62C4u;
label_1a62c4:
    // 0x1a62c4: 0xc062114  jal         func_188450
label_1a62c8:
    if (ctx->pc == 0x1A62C8u) {
        ctx->pc = 0x1A62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62C4u;
        // 0x1a62c8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62CCu;
        goto label_1a62cc;
    }
    ctx->pc = 0x1A62C4u;
    SET_GPR_U32(ctx, 31, 0x1A62CCu);
    ctx->pc = 0x1A62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62C4u;
    // 0x1a62c8: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A62C4u, 0x1A62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62CCu;
label_1a62cc:
    // 0x1a62cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a62ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a62d0:
    // 0x1a62d0: 0xc062114  jal         func_188450
label_1a62d4:
    if (ctx->pc == 0x1A62D4u) {
        ctx->pc = 0x1A62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62D0u;
        // 0x1a62d4: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62D8u;
        goto label_1a62d8;
    }
    ctx->pc = 0x1A62D0u;
    SET_GPR_U32(ctx, 31, 0x1A62D8u);
    ctx->pc = 0x1A62D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62D0u;
    // 0x1a62d4: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A62D0u, 0x1A62D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62D8u;
label_1a62d8:
    // 0x1a62d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a62d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a62dc:
    // 0x1a62dc: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x1a62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a62e0:
    // 0x1a62e0: 0xde8500c8  ld          $a1, 0xC8($s4)
    ctx->pc = 0x1a62e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a62e4:
    // 0x1a62e4: 0xc081c20  jal         func_207080
label_1a62e8:
    if (ctx->pc == 0x1A62E8u) {
        ctx->pc = 0x1A62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E4u;
        // 0x1a62e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62ECu;
        goto label_1a62ec;
    }
    ctx->pc = 0x1A62E4u;
    SET_GPR_U32(ctx, 31, 0x1A62ECu);
    ctx->pc = 0x1A62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62E4u;
    // 0x1a62e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A62E4u, 0x1A62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62ECu;
label_1a62ec:
    // 0x1a62ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a62ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1a62f0:
    // 0x1a62f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a62f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a62f4:
    // 0x1a62f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a62f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a62f8:
    // 0x1a62f8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a62fc:
    // 0x1a62fc: 0xffb00018  sd          $s0, 0x18($sp)
    ctx->pc = 0x1a62fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
label_1a6300:
    // 0x1a6300: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_1a6304:
    // 0x1a6304: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a6308:
    // 0x1a6308: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a630c:
    // 0x1a630c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a630cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6310:
    // 0x1a6310: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1a6310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6314:
    // 0x1a6314: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1a6314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1a6318:
    // 0x1a6318: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x1a6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
label_1a631c:
    // 0x1a631c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a6320:
    // 0x1a6320: 0x8e8800e8  lw          $t0, 0xE8($s4)
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a6324:
    // 0x1a6324: 0xde8a00c8  ld          $t2, 0xC8($s4)
    ctx->pc = 0x1a6324u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a6328:
    // 0x1a6328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a632c:
    // 0x1a632c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6330:
    // 0x1a6330: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6334:
    // 0x1a6334: 0xc0627bc  jal         func_189EF0
label_1a6338:
    if (ctx->pc == 0x1A6338u) {
        ctx->pc = 0x1A6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6334u;
        // 0x1a6338: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A633Cu;
        goto label_1a633c;
    }
    ctx->pc = 0x1A6334u;
    SET_GPR_U32(ctx, 31, 0x1A633Cu);
    ctx->pc = 0x1A6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6334u;
    // 0x1a6338: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A6334u, 0x1A633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A633Cu;
label_1a633c:
    // 0x1a633c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1a6340:
    if (ctx->pc == 0x1A6340u) {
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x8e8300f8  lw          $v1, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6344u;
        goto label_1a6344;
    }
    ctx->pc = 0x1A633Cu;
    {
        const bool branch_taken_0x1a633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x8e8300f8  lw          $v1, 0xF8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a633c) {
            ctx->pc = 0x1A64B4u;
            goto label_1a64b4;
        }
    }
    ctx->pc = 0x1A6344u;
label_1a6344:
    // 0x1a6344: 0xc062114  jal         func_188450
label_1a6348:
    if (ctx->pc == 0x1A6348u) {
        ctx->pc = 0x1A6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6344u;
        // 0x1a6348: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A634Cu;
        goto label_1a634c;
    }
    ctx->pc = 0x1A6344u;
    SET_GPR_U32(ctx, 31, 0x1A634Cu);
    ctx->pc = 0x1A6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6344u;
    // 0x1a6348: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6344u, 0x1A634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A634Cu;
label_1a634c:
    // 0x1a634c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a634cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6350:
    // 0x1a6350: 0xc062114  jal         func_188450
label_1a6354:
    if (ctx->pc == 0x1A6354u) {
        ctx->pc = 0x1A6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6350u;
        // 0x1a6354: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6358u;
        goto label_1a6358;
    }
    ctx->pc = 0x1A6350u;
    SET_GPR_U32(ctx, 31, 0x1A6358u);
    ctx->pc = 0x1A6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6350u;
    // 0x1a6354: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6350u, 0x1A6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6358u;
label_1a6358:
    // 0x1a6358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a635c:
    // 0x1a635c: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a6360:
    // 0x1a6360: 0xde8500c8  ld          $a1, 0xC8($s4)
    ctx->pc = 0x1a6360u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a6364:
    // 0x1a6364: 0xc081c20  jal         func_207080
label_1a6368:
    if (ctx->pc == 0x1A6368u) {
        ctx->pc = 0x1A6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6364u;
        // 0x1a6368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A636Cu;
        goto label_1a636c;
    }
    ctx->pc = 0x1A6364u;
    SET_GPR_U32(ctx, 31, 0x1A636Cu);
    ctx->pc = 0x1A6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6364u;
    // 0x1a6368: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A6364u, 0x1A636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A636Cu;
label_1a636c:
    // 0x1a636c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1a6370:
    // 0x1a6370: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6374:
    // 0x1a6374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a6378:
    // 0x1a6378: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a637c:
    // 0x1a637c: 0xffb00018  sd          $s0, 0x18($sp)
    ctx->pc = 0x1a637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
label_1a6380:
    // 0x1a6380: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_1a6384:
    // 0x1a6384: 0xde8300d0  ld          $v1, 0xD0($s4)
    ctx->pc = 0x1a6384u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a6388:
    // 0x1a6388: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a638c:
    // 0x1a638c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6390:
    // 0x1a6390: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1a6390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6394:
    // 0x1a6394: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1a6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1a6398:
    // 0x1a6398: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x1a6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
label_1a639c:
    // 0x1a639c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a63a0:
    // 0x1a63a0: 0x8e8800e8  lw          $t0, 0xE8($s4)
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a63a4:
    // 0x1a63a4: 0xde8a00c8  ld          $t2, 0xC8($s4)
    ctx->pc = 0x1a63a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a63a8:
    // 0x1a63a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a63ac:
    // 0x1a63ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a63b0:
    // 0x1a63b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a63b4:
    // 0x1a63b4: 0xc0627bc  jal         func_189EF0
label_1a63b8:
    if (ctx->pc == 0x1A63B8u) {
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63BCu;
        goto label_1a63bc;
    }
    ctx->pc = 0x1A63B4u;
    SET_GPR_U32(ctx, 31, 0x1A63BCu);
    ctx->pc = 0x1A63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63B4u;
    // 0x1a63b8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A63B4u, 0x1A63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63BCu;
label_1a63bc:
    // 0x1a63bc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1a63c0:
    if (ctx->pc == 0x1A63C0u) {
        ctx->pc = 0x1A63C4u;
        goto label_1a63c4;
    }
    ctx->pc = 0x1A63BCu;
    {
        const bool branch_taken_0x1a63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63bc) {
            ctx->pc = 0x1A64B0u;
            goto label_1a64b0;
        }
    }
    ctx->pc = 0x1A63C4u;
label_1a63c4:
    // 0x1a63c4: 0xc062114  jal         func_188450
label_1a63c8:
    if (ctx->pc == 0x1A63C8u) {
        ctx->pc = 0x1A63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63C4u;
        // 0x1a63c8: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63CCu;
        goto label_1a63cc;
    }
    ctx->pc = 0x1A63C4u;
    SET_GPR_U32(ctx, 31, 0x1A63CCu);
    ctx->pc = 0x1A63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63C4u;
    // 0x1a63c8: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A63C4u, 0x1A63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63CCu;
label_1a63cc:
    // 0x1a63cc: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a63d0:
    // 0x1a63d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a63d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a63d4:
    // 0x1a63d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a63d8:
    // 0x1a63d8: 0xde8800d0  ld          $t0, 0xD0($s4)
    ctx->pc = 0x1a63d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a63dc:
    // 0x1a63dc: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_1a63e0:
    // 0x1a63e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a63e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a63e4:
    // 0x1a63e4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a63e8:
    // 0x1a63e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a63ec:
    // 0x1a63ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a63f0:
    // 0x1a63f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a63f4:
    // 0x1a63f4: 0xc0627bc  jal         func_189EF0
label_1a63f8:
    if (ctx->pc == 0x1A63F8u) {
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63FCu;
        goto label_1a63fc;
    }
    ctx->pc = 0x1A63F4u;
    SET_GPR_U32(ctx, 31, 0x1A63FCu);
    ctx->pc = 0x1A63F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63F4u;
    // 0x1a63f8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A63F4u, 0x1A63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63FCu;
label_1a63fc:
    // 0x1a63fc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1a6400:
    if (ctx->pc == 0x1A6400u) {
        ctx->pc = 0x1A6404u;
        goto label_1a6404;
    }
    ctx->pc = 0x1A63FCu;
    {
        const bool branch_taken_0x1a63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63fc) {
            ctx->pc = 0x1A64B0u;
            goto label_1a64b0;
        }
    }
    ctx->pc = 0x1A6404u;
label_1a6404:
    // 0x1a6404: 0xc062114  jal         func_188450
label_1a6408:
    if (ctx->pc == 0x1A6408u) {
        ctx->pc = 0x1A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6404u;
        // 0x1a6408: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A640Cu;
        goto label_1a640c;
    }
    ctx->pc = 0x1A6404u;
    SET_GPR_U32(ctx, 31, 0x1A640Cu);
    ctx->pc = 0x1A6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6404u;
    // 0x1a6408: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6404u, 0x1A640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A640Cu;
label_1a640c:
    // 0x1a640c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a6410:
    // 0x1a6410: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6414:
    // 0x1a6414: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a6414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1a6418:
    // 0x1a6418: 0xde8800d0  ld          $t0, 0xD0($s4)
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a641c:
    // 0x1a641c: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
label_1a6420:
    // 0x1a6420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6424:
    // 0x1a6424: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a6428:
    // 0x1a6428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a642c:
    // 0x1a642c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6430:
    // 0x1a6430: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6434:
    // 0x1a6434: 0xc0627bc  jal         func_189EF0
label_1a6438:
    if (ctx->pc == 0x1A6438u) {
        ctx->pc = 0x1A6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6434u;
        // 0x1a6438: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A643Cu;
        goto label_1a643c;
    }
    ctx->pc = 0x1A6434u;
    SET_GPR_U32(ctx, 31, 0x1A643Cu);
    ctx->pc = 0x1A6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6434u;
    // 0x1a6438: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A6434u, 0x1A643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A643Cu;
label_1a643c:
    // 0x1a643c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1a6440:
    if (ctx->pc == 0x1A6440u) {
        ctx->pc = 0x1A6444u;
        goto label_1a6444;
    }
    ctx->pc = 0x1A643Cu;
    {
        const bool branch_taken_0x1a643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a643c) {
            ctx->pc = 0x1A64B0u;
            goto label_1a64b0;
        }
    }
    ctx->pc = 0x1A6444u;
label_1a6444:
    // 0x1a6444: 0xc062114  jal         func_188450
label_1a6448:
    if (ctx->pc == 0x1A6448u) {
        ctx->pc = 0x1A6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6444u;
        // 0x1a6448: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A644Cu;
        goto label_1a644c;
    }
    ctx->pc = 0x1A6444u;
    SET_GPR_U32(ctx, 31, 0x1A644Cu);
    ctx->pc = 0x1A6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6444u;
    // 0x1a6448: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6444u, 0x1A644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A644Cu;
label_1a644c:
    // 0x1a644c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a644cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6450:
    // 0x1a6450: 0xc062114  jal         func_188450
label_1a6454:
    if (ctx->pc == 0x1A6454u) {
        ctx->pc = 0x1A6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6450u;
        // 0x1a6454: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6458u;
        goto label_1a6458;
    }
    ctx->pc = 0x1A6450u;
    SET_GPR_U32(ctx, 31, 0x1A6458u);
    ctx->pc = 0x1A6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6450u;
    // 0x1a6454: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6450u, 0x1A6458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6458u;
label_1a6458:
    // 0x1a6458: 0xffb20000  sd          $s2, 0x0($sp)
    ctx->pc = 0x1a6458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
label_1a645c:
    // 0x1a645c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_1a6460:
    // 0x1a6460: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a6460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1a6464:
    // 0x1a6464: 0x24632bf0  addiu       $v1, $v1, 0x2BF0
    ctx->pc = 0x1a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11248));
label_1a6468:
    // 0x1a6468: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x1a6468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
label_1a646c:
    // 0x1a646c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1a646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1a6470:
    // 0x1a6470: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x1a6470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
label_1a6474:
    // 0x1a6474: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a6478:
    // 0x1a6478: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a647c:
    // 0x1a647c: 0xde8500c8  ld          $a1, 0xC8($s4)
    ctx->pc = 0x1a647cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a6480:
    // 0x1a6480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a6484:
    // 0x1a6484: 0xc081c20  jal         func_207080
label_1a6488:
    if (ctx->pc == 0x1A6488u) {
        ctx->pc = 0x1A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6484u;
        // 0x1a6488: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A648Cu;
        goto label_1a648c;
    }
    ctx->pc = 0x1A6484u;
    SET_GPR_U32(ctx, 31, 0x1A648Cu);
    ctx->pc = 0x1A6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6484u;
    // 0x1a6488: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A6484u, 0x1A648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A648Cu;
label_1a648c:
    // 0x1a648c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1a648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a6490:
    // 0x1a6490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6494:
    // 0x1a6494: 0xde8800c8  ld          $t0, 0xC8($s4)
    ctx->pc = 0x1a6494u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 200)));
label_1a6498:
    // 0x1a6498: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a6498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a649c:
    // 0x1a649c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1a649cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a64a0:
    // 0x1a64a0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a64a4:
    // 0x1a64a4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a64a8:
    // 0x1a64a8: 0xc0627bc  jal         func_189EF0
label_1a64ac:
    if (ctx->pc == 0x1A64ACu) {
        ctx->pc = 0x1A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64A8u;
        // 0x1a64ac: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64B0u;
        goto label_1a64b0;
    }
    ctx->pc = 0x1A64A8u;
    SET_GPR_U32(ctx, 31, 0x1A64B0u);
    ctx->pc = 0x1A64ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64A8u;
    // 0x1a64ac: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A64A8u, 0x1A64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64B0u;
label_1a64b0:
    // 0x1a64b0: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x1a64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1a64b4:
    // 0x1a64b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a64b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a64b8:
    // 0x1a64b8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a64bc:
    // 0x1a64bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a64c0:
    // 0x1a64c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a64c4:
    // 0x1a64c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a64c8:
    // 0x1a64c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a64c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a64cc:
    // 0x1a64cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a64ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a64d0:
    // 0x1a64d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a64d4:
    // 0x1a64d4: 0x320f809  jalr        $t9
label_1a64d8:
    if (ctx->pc == 0x1A64D8u) {
        ctx->pc = 0x1A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D4u;
        // 0x1a64d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64DCu;
        goto label_1a64dc;
    }
    ctx->pc = 0x1A64D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A64DCu);
        ctx->pc = 0x1A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D4u;
        // 0x1a64d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64D4u, 0x1A64DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A64DCu;
label_1a64dc:
    // 0x1a64dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a64dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a64e0:
    // 0x1a64e0: 0xc04c6d8  jal         func_131B60
label_1a64e4:
    if (ctx->pc == 0x1A64E4u) {
        ctx->pc = 0x1A64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64E0u;
        // 0x1a64e4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A64E8u;
        goto label_1a64e8;
    }
    ctx->pc = 0x1A64E0u;
    SET_GPR_U32(ctx, 31, 0x1A64E8u);
    ctx->pc = 0x1A64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64E0u;
    // 0x1a64e4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x1A64E0u, 0x1A64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64E8u;
label_1a64e8:
    // 0x1a64e8: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x1a64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
label_1a64ec:
    // 0x1a64ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a64ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a64f0:
    // 0x1a64f0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1a64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1a64f4:
    // 0x1a64f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a64f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a64f8:
    // 0x1a64f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a64fc:
    // 0x1a64fc: 0x320f809  jalr        $t9
label_1a6500:
    if (ctx->pc == 0x1A6500u) {
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64FCu;
        // 0x1a6500: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6504u;
        goto label_1a6504;
    }
    ctx->pc = 0x1A64FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6504u);
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64FCu;
        // 0x1a6500: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A64FCu, 0x1A6504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6504u;
label_1a6504:
    // 0x1a6504: 0xc062114  jal         func_188450
label_1a6508:
    if (ctx->pc == 0x1A6508u) {
        ctx->pc = 0x1A6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6504u;
        // 0x1a6508: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A650Cu;
        goto label_1a650c;
    }
    ctx->pc = 0x1A6504u;
    SET_GPR_U32(ctx, 31, 0x1A650Cu);
    ctx->pc = 0x1A6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6504u;
    // 0x1a6508: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6504u, 0x1A650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A650Cu;
label_1a650c:
    // 0x1a650c: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1a6510:
    // 0x1a6510: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a6510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1a6514:
    // 0x1a6514: 0xde8800c0  ld          $t0, 0xC0($s4)
    ctx->pc = 0x1a6514u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 192)));
label_1a6518:
    // 0x1a6518: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a651c:
    // 0x1a651c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a651cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6520:
    // 0x1a6520: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1a6524:
    // 0x1a6524: 0xc0627bc  jal         func_189EF0
label_1a6528:
    if (ctx->pc == 0x1A6528u) {
        ctx->pc = 0x1A6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6524u;
        // 0x1a6528: 0x24c606b0  addiu       $a2, $a2, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A652Cu;
        goto label_1a652c;
    }
    ctx->pc = 0x1A6524u;
    SET_GPR_U32(ctx, 31, 0x1A652Cu);
    ctx->pc = 0x1A6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6524u;
    // 0x1a6528: 0x24c606b0  addiu       $a2, $a2, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A6524u, 0x1A652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A652Cu;
label_1a652c:
    // 0x1a652c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a6530:
    // 0x1a6530: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6534:
    // 0x1a6534: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1a6538:
    if (ctx->pc == 0x1A6538u) {
        ctx->pc = 0x1A6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6534u;
        // 0x1a6538: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A653Cu;
        goto label_1a653c;
    }
    ctx->pc = 0x1A6534u;
    {
        const bool branch_taken_0x1a6534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6534u;
        // 0x1a6538: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6534) {
            ctx->pc = 0x1A659Cu;
            goto label_1a659c;
        }
    }
    ctx->pc = 0x1A653Cu;
label_1a653c:
    // 0x1a653c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6540:
    // 0x1a6540: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1a6544:
    if (ctx->pc == 0x1A6544u) {
        ctx->pc = 0x1A6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6540u;
        // 0x1a6544: 0x3c02c0b0  lui         $v0, 0xC0B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49328 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6548u;
        goto label_1a6548;
    }
    ctx->pc = 0x1A6540u;
    {
        const bool branch_taken_0x1a6540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6540u;
        // 0x1a6544: 0x3c02c0b0  lui         $v0, 0xC0B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49328 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6540) {
            ctx->pc = 0x1A6578u;
            goto label_1a6578;
        }
    }
    ctx->pc = 0x1A6548u;
label_1a6548:
    // 0x1a6548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a654c:
    // 0x1a654c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_1a6550:
    if (ctx->pc == 0x1A6550u) {
        ctx->pc = 0x1A6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A654Cu;
        // 0x1a6550: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6554u;
        goto label_1a6554;
    }
    ctx->pc = 0x1A654Cu;
    {
        const bool branch_taken_0x1a654c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A654Cu;
        // 0x1a6550: 0x3c02c100  lui         $v0, 0xC100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a654c) {
            ctx->pc = 0x1A655Cu;
            goto label_1a655c;
        }
    }
    ctx->pc = 0x1A6554u;
label_1a6554:
    // 0x1a6554: 0x10000033  b           . + 4 + (0x33 << 2)
label_1a6558:
    if (ctx->pc == 0x1A6558u) {
        ctx->pc = 0x1A655Cu;
        goto label_1a655c;
    }
    ctx->pc = 0x1A6554u;
    {
        const bool branch_taken_0x1a6554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6554) {
            ctx->pc = 0x1A6624u;
            goto label_1a6624;
        }
    }
    ctx->pc = 0x1A655Cu;
label_1a655c:
    // 0x1a655c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a655cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6560:
    // 0x1a6560: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a6564:
    // 0x1a6564: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a6568:
    // 0x1a6568: 0xc069994  jal         func_1A6650
label_1a656c:
    if (ctx->pc == 0x1A656Cu) {
        ctx->pc = 0x1A656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6568u;
        // 0x1a656c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6570u;
        goto label_1a6570;
    }
    ctx->pc = 0x1A6568u;
    SET_GPR_U32(ctx, 31, 0x1A6570u);
    ctx->pc = 0x1A656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6568u;
    // 0x1a656c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A6568u, 0x1A6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6570u;
label_1a6570:
    // 0x1a6570: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1a6574:
    if (ctx->pc == 0x1A6574u) {
        ctx->pc = 0x1A6578u;
        goto label_1a6578;
    }
    ctx->pc = 0x1A6570u;
    {
        const bool branch_taken_0x1a6570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6570) {
            ctx->pc = 0x1A6624u;
            goto label_1a6624;
        }
    }
    ctx->pc = 0x1A6578u;
label_1a6578:
    // 0x1a6578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a6578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a657c:
    // 0x1a657c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6580:
    // 0x1a6580: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1a6580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1a6584:
    // 0x1a6584: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a6584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1a6588:
    // 0x1a6588: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a6588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a658c:
    // 0x1a658c: 0xc069994  jal         func_1A6650
label_1a6590:
    if (ctx->pc == 0x1A6590u) {
        ctx->pc = 0x1A6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A658Cu;
        // 0x1a6590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6594u;
        goto label_1a6594;
    }
    ctx->pc = 0x1A658Cu;
    SET_GPR_U32(ctx, 31, 0x1A6594u);
    ctx->pc = 0x1A6590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A658Cu;
    // 0x1a6590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A658Cu, 0x1A6594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6594u;
label_1a6594:
    // 0x1a6594: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a6598:
    if (ctx->pc == 0x1A6598u) {
        ctx->pc = 0x1A659Cu;
        goto label_1a659c;
    }
    ctx->pc = 0x1A6594u;
    {
        const bool branch_taken_0x1a6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6594) {
            ctx->pc = 0x1A6624u;
            goto label_1a6624;
        }
    }
    ctx->pc = 0x1A659Cu;
label_1a659c:
    // 0x1a659c: 0x3c03c0b0  lui         $v1, 0xC0B0
    ctx->pc = 0x1a659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49328 << 16));
label_1a65a0:
    // 0x1a65a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1a65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1a65a4:
    // 0x1a65a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a65a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a65a8:
    // 0x1a65a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a65a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a65ac:
    // 0x1a65ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a65acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a65b0:
    // 0x1a65b0: 0xc069994  jal         func_1A6650
label_1a65b4:
    if (ctx->pc == 0x1A65B4u) {
        ctx->pc = 0x1A65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65B0u;
        // 0x1a65b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65B8u;
        goto label_1a65b8;
    }
    ctx->pc = 0x1A65B0u;
    SET_GPR_U32(ctx, 31, 0x1A65B8u);
    ctx->pc = 0x1A65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65B0u;
    // 0x1a65b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A65B0u, 0x1A65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65B8u;
label_1a65b8:
    // 0x1a65b8: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_1a65bc:
    // 0x1a65bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a65bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a65c0:
    // 0x1a65c0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a65c4:
    // 0x1a65c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a65c8:
    // 0x1a65c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a65cc:
    // 0x1a65cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a65d0:
    // 0x1a65d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1a65d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a65d4:
    // 0x1a65d4: 0x0  nop
    ctx->pc = 0x1a65d4u;
    // NOP
label_1a65d8:
    // 0x1a65d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a65d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a65dc:
    // 0x1a65dc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a65e0:
    // 0x1a65e0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1a65e4:
    // 0x1a65e4: 0x320f809  jalr        $t9
label_1a65e8:
    if (ctx->pc == 0x1A65E8u) {
        ctx->pc = 0x1A65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E4u;
        // 0x1a65e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65ECu;
        goto label_1a65ec;
    }
    ctx->pc = 0x1A65E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A65ECu);
        ctx->pc = 0x1A65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E4u;
        // 0x1a65e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A65E4u, 0x1A65ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A65ECu;
label_1a65ec:
    // 0x1a65ec: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_1a65f0:
    // 0x1a65f0: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1a65f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a65f4:
    // 0x1a65f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1a65f8:
    if (ctx->pc == 0x1A65F8u) {
        ctx->pc = 0x1A65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F4u;
        // 0x1a65f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65FCu;
        goto label_1a65fc;
    }
    ctx->pc = 0x1A65F4u;
    {
        const bool branch_taken_0x1a65f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F4u;
        // 0x1a65f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65f4) {
            ctx->pc = 0x1A6600u;
            goto label_1a6600;
        }
    }
    ctx->pc = 0x1A65FCu;
label_1a65fc:
    // 0x1a65fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a65fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6600:
    // 0x1a6600: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6604:
    // 0x1a6604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6608:
    // 0x1a6608: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a660c:
    // 0x1a660c: 0x320f809  jalr        $t9
label_1a6610:
    if (ctx->pc == 0x1A6610u) {
        ctx->pc = 0x1A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A660Cu;
        // 0x1a6610: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6614u;
        goto label_1a6614;
    }
    ctx->pc = 0x1A660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6614u);
        ctx->pc = 0x1A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A660Cu;
        // 0x1a6610: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A660Cu, 0x1A6614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6614u;
label_1a6614:
    // 0x1a6614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a6618:
    // 0x1a6618: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1a6618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a661c:
    // 0x1a661c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1a6620:
    if (ctx->pc == 0x1A6620u) {
        ctx->pc = 0x1A6624u;
        goto label_1a6624;
    }
    ctx->pc = 0x1A661Cu;
    {
        const bool branch_taken_0x1a661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a661c) {
            ctx->pc = 0x1A65D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a65d8;
        }
    }
    ctx->pc = 0x1A6624u;
label_1a6624:
    // 0x1a6624: 0x0  nop
    ctx->pc = 0x1a6624u;
    // NOP
label_1a6628:
    // 0x1a6628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a662c:
    // 0x1a662c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a662cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a6630:
    // 0x1a6630: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1a6630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6634:
    // 0x1a6634: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1a6634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6638:
    // 0x1a6638: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1a6638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a663c:
    // 0x1a663c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a663cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6640:
    // 0x1a6640: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6644:
    // 0x1a6644: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a6644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6648:
    // 0x1a6648: 0x3e00008  jr          $ra
label_1a664c:
    if (ctx->pc == 0x1A664Cu) {
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6650u;
        goto label_fallthrough_0x1a6648;
    }
    ctx->pc = 0x1A6648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6648u;
        // 0x1a664c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6648:
    ctx->pc = 0x1A6650u;
}
