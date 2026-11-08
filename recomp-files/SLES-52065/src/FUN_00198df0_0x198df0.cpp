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

// Function: FUN_00198df0
// Address: 0x198df0 - 0x199bec
void FUN_00198df0_0x198df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198df0_0x198df0");
#endif

    switch (ctx->pc) {
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        case 0x198eb8u: goto label_198eb8;
        case 0x198ebcu: goto label_198ebc;
        case 0x198ec0u: goto label_198ec0;
        case 0x198ec4u: goto label_198ec4;
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        case 0x198f00u: goto label_198f00;
        case 0x198f04u: goto label_198f04;
        case 0x198f08u: goto label_198f08;
        case 0x198f0cu: goto label_198f0c;
        case 0x198f10u: goto label_198f10;
        case 0x198f14u: goto label_198f14;
        case 0x198f18u: goto label_198f18;
        case 0x198f1cu: goto label_198f1c;
        case 0x198f20u: goto label_198f20;
        case 0x198f24u: goto label_198f24;
        case 0x198f28u: goto label_198f28;
        case 0x198f2cu: goto label_198f2c;
        case 0x198f30u: goto label_198f30;
        case 0x198f34u: goto label_198f34;
        case 0x198f38u: goto label_198f38;
        case 0x198f3cu: goto label_198f3c;
        case 0x198f40u: goto label_198f40;
        case 0x198f44u: goto label_198f44;
        case 0x198f48u: goto label_198f48;
        case 0x198f4cu: goto label_198f4c;
        case 0x198f50u: goto label_198f50;
        case 0x198f54u: goto label_198f54;
        case 0x198f58u: goto label_198f58;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f60u: goto label_198f60;
        case 0x198f64u: goto label_198f64;
        case 0x198f68u: goto label_198f68;
        case 0x198f6cu: goto label_198f6c;
        case 0x198f70u: goto label_198f70;
        case 0x198f74u: goto label_198f74;
        case 0x198f78u: goto label_198f78;
        case 0x198f7cu: goto label_198f7c;
        case 0x198f80u: goto label_198f80;
        case 0x198f84u: goto label_198f84;
        case 0x198f88u: goto label_198f88;
        case 0x198f8cu: goto label_198f8c;
        case 0x198f90u: goto label_198f90;
        case 0x198f94u: goto label_198f94;
        case 0x198f98u: goto label_198f98;
        case 0x198f9cu: goto label_198f9c;
        case 0x198fa0u: goto label_198fa0;
        case 0x198fa4u: goto label_198fa4;
        case 0x198fa8u: goto label_198fa8;
        case 0x198facu: goto label_198fac;
        case 0x198fb0u: goto label_198fb0;
        case 0x198fb4u: goto label_198fb4;
        case 0x198fb8u: goto label_198fb8;
        case 0x198fbcu: goto label_198fbc;
        case 0x198fc0u: goto label_198fc0;
        case 0x198fc4u: goto label_198fc4;
        case 0x198fc8u: goto label_198fc8;
        case 0x198fccu: goto label_198fcc;
        case 0x198fd0u: goto label_198fd0;
        case 0x198fd4u: goto label_198fd4;
        case 0x198fd8u: goto label_198fd8;
        case 0x198fdcu: goto label_198fdc;
        case 0x198fe0u: goto label_198fe0;
        case 0x198fe4u: goto label_198fe4;
        case 0x198fe8u: goto label_198fe8;
        case 0x198fecu: goto label_198fec;
        case 0x198ff0u: goto label_198ff0;
        case 0x198ff4u: goto label_198ff4;
        case 0x198ff8u: goto label_198ff8;
        case 0x198ffcu: goto label_198ffc;
        case 0x199000u: goto label_199000;
        case 0x199004u: goto label_199004;
        case 0x199008u: goto label_199008;
        case 0x19900cu: goto label_19900c;
        case 0x199010u: goto label_199010;
        case 0x199014u: goto label_199014;
        case 0x199018u: goto label_199018;
        case 0x19901cu: goto label_19901c;
        case 0x199020u: goto label_199020;
        case 0x199024u: goto label_199024;
        case 0x199028u: goto label_199028;
        case 0x19902cu: goto label_19902c;
        case 0x199030u: goto label_199030;
        case 0x199034u: goto label_199034;
        case 0x199038u: goto label_199038;
        case 0x19903cu: goto label_19903c;
        case 0x199040u: goto label_199040;
        case 0x199044u: goto label_199044;
        case 0x199048u: goto label_199048;
        case 0x19904cu: goto label_19904c;
        case 0x199050u: goto label_199050;
        case 0x199054u: goto label_199054;
        case 0x199058u: goto label_199058;
        case 0x19905cu: goto label_19905c;
        case 0x199060u: goto label_199060;
        case 0x199064u: goto label_199064;
        case 0x199068u: goto label_199068;
        case 0x19906cu: goto label_19906c;
        case 0x199070u: goto label_199070;
        case 0x199074u: goto label_199074;
        case 0x199078u: goto label_199078;
        case 0x19907cu: goto label_19907c;
        case 0x199080u: goto label_199080;
        case 0x199084u: goto label_199084;
        case 0x199088u: goto label_199088;
        case 0x19908cu: goto label_19908c;
        case 0x199090u: goto label_199090;
        case 0x199094u: goto label_199094;
        case 0x199098u: goto label_199098;
        case 0x19909cu: goto label_19909c;
        case 0x1990a0u: goto label_1990a0;
        case 0x1990a4u: goto label_1990a4;
        case 0x1990a8u: goto label_1990a8;
        case 0x1990acu: goto label_1990ac;
        case 0x1990b0u: goto label_1990b0;
        case 0x1990b4u: goto label_1990b4;
        case 0x1990b8u: goto label_1990b8;
        case 0x1990bcu: goto label_1990bc;
        case 0x1990c0u: goto label_1990c0;
        case 0x1990c4u: goto label_1990c4;
        case 0x1990c8u: goto label_1990c8;
        case 0x1990ccu: goto label_1990cc;
        case 0x1990d0u: goto label_1990d0;
        case 0x1990d4u: goto label_1990d4;
        case 0x1990d8u: goto label_1990d8;
        case 0x1990dcu: goto label_1990dc;
        case 0x1990e0u: goto label_1990e0;
        case 0x1990e4u: goto label_1990e4;
        case 0x1990e8u: goto label_1990e8;
        case 0x1990ecu: goto label_1990ec;
        case 0x1990f0u: goto label_1990f0;
        case 0x1990f4u: goto label_1990f4;
        case 0x1990f8u: goto label_1990f8;
        case 0x1990fcu: goto label_1990fc;
        case 0x199100u: goto label_199100;
        case 0x199104u: goto label_199104;
        case 0x199108u: goto label_199108;
        case 0x19910cu: goto label_19910c;
        case 0x199110u: goto label_199110;
        case 0x199114u: goto label_199114;
        case 0x199118u: goto label_199118;
        case 0x19911cu: goto label_19911c;
        case 0x199120u: goto label_199120;
        case 0x199124u: goto label_199124;
        case 0x199128u: goto label_199128;
        case 0x19912cu: goto label_19912c;
        case 0x199130u: goto label_199130;
        case 0x199134u: goto label_199134;
        case 0x199138u: goto label_199138;
        case 0x19913cu: goto label_19913c;
        case 0x199140u: goto label_199140;
        case 0x199144u: goto label_199144;
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        case 0x199160u: goto label_199160;
        case 0x199164u: goto label_199164;
        case 0x199168u: goto label_199168;
        case 0x19916cu: goto label_19916c;
        case 0x199170u: goto label_199170;
        case 0x199174u: goto label_199174;
        case 0x199178u: goto label_199178;
        case 0x19917cu: goto label_19917c;
        case 0x199180u: goto label_199180;
        case 0x199184u: goto label_199184;
        case 0x199188u: goto label_199188;
        case 0x19918cu: goto label_19918c;
        case 0x199190u: goto label_199190;
        case 0x199194u: goto label_199194;
        case 0x199198u: goto label_199198;
        case 0x19919cu: goto label_19919c;
        case 0x1991a0u: goto label_1991a0;
        case 0x1991a4u: goto label_1991a4;
        case 0x1991a8u: goto label_1991a8;
        case 0x1991acu: goto label_1991ac;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991b4u: goto label_1991b4;
        case 0x1991b8u: goto label_1991b8;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c0u: goto label_1991c0;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991ccu: goto label_1991cc;
        case 0x1991d0u: goto label_1991d0;
        case 0x1991d4u: goto label_1991d4;
        case 0x1991d8u: goto label_1991d8;
        case 0x1991dcu: goto label_1991dc;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991e8u: goto label_1991e8;
        case 0x1991ecu: goto label_1991ec;
        case 0x1991f0u: goto label_1991f0;
        case 0x1991f4u: goto label_1991f4;
        case 0x1991f8u: goto label_1991f8;
        case 0x1991fcu: goto label_1991fc;
        case 0x199200u: goto label_199200;
        case 0x199204u: goto label_199204;
        case 0x199208u: goto label_199208;
        case 0x19920cu: goto label_19920c;
        case 0x199210u: goto label_199210;
        case 0x199214u: goto label_199214;
        case 0x199218u: goto label_199218;
        case 0x19921cu: goto label_19921c;
        case 0x199220u: goto label_199220;
        case 0x199224u: goto label_199224;
        case 0x199228u: goto label_199228;
        case 0x19922cu: goto label_19922c;
        case 0x199230u: goto label_199230;
        case 0x199234u: goto label_199234;
        case 0x199238u: goto label_199238;
        case 0x19923cu: goto label_19923c;
        case 0x199240u: goto label_199240;
        case 0x199244u: goto label_199244;
        case 0x199248u: goto label_199248;
        case 0x19924cu: goto label_19924c;
        case 0x199250u: goto label_199250;
        case 0x199254u: goto label_199254;
        case 0x199258u: goto label_199258;
        case 0x19925cu: goto label_19925c;
        case 0x199260u: goto label_199260;
        case 0x199264u: goto label_199264;
        case 0x199268u: goto label_199268;
        case 0x19926cu: goto label_19926c;
        case 0x199270u: goto label_199270;
        case 0x199274u: goto label_199274;
        case 0x199278u: goto label_199278;
        case 0x19927cu: goto label_19927c;
        case 0x199280u: goto label_199280;
        case 0x199284u: goto label_199284;
        case 0x199288u: goto label_199288;
        case 0x19928cu: goto label_19928c;
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        case 0x1992f8u: goto label_1992f8;
        case 0x1992fcu: goto label_1992fc;
        case 0x199300u: goto label_199300;
        case 0x199304u: goto label_199304;
        case 0x199308u: goto label_199308;
        case 0x19930cu: goto label_19930c;
        case 0x199310u: goto label_199310;
        case 0x199314u: goto label_199314;
        case 0x199318u: goto label_199318;
        case 0x19931cu: goto label_19931c;
        case 0x199320u: goto label_199320;
        case 0x199324u: goto label_199324;
        case 0x199328u: goto label_199328;
        case 0x19932cu: goto label_19932c;
        case 0x199330u: goto label_199330;
        case 0x199334u: goto label_199334;
        case 0x199338u: goto label_199338;
        case 0x19933cu: goto label_19933c;
        case 0x199340u: goto label_199340;
        case 0x199344u: goto label_199344;
        case 0x199348u: goto label_199348;
        case 0x19934cu: goto label_19934c;
        case 0x199350u: goto label_199350;
        case 0x199354u: goto label_199354;
        case 0x199358u: goto label_199358;
        case 0x19935cu: goto label_19935c;
        case 0x199360u: goto label_199360;
        case 0x199364u: goto label_199364;
        case 0x199368u: goto label_199368;
        case 0x19936cu: goto label_19936c;
        case 0x199370u: goto label_199370;
        case 0x199374u: goto label_199374;
        case 0x199378u: goto label_199378;
        case 0x19937cu: goto label_19937c;
        case 0x199380u: goto label_199380;
        case 0x199384u: goto label_199384;
        case 0x199388u: goto label_199388;
        case 0x19938cu: goto label_19938c;
        case 0x199390u: goto label_199390;
        case 0x199394u: goto label_199394;
        case 0x199398u: goto label_199398;
        case 0x19939cu: goto label_19939c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993a4u: goto label_1993a4;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993acu: goto label_1993ac;
        case 0x1993b0u: goto label_1993b0;
        case 0x1993b4u: goto label_1993b4;
        case 0x1993b8u: goto label_1993b8;
        case 0x1993bcu: goto label_1993bc;
        case 0x1993c0u: goto label_1993c0;
        case 0x1993c4u: goto label_1993c4;
        case 0x1993c8u: goto label_1993c8;
        case 0x1993ccu: goto label_1993cc;
        case 0x1993d0u: goto label_1993d0;
        case 0x1993d4u: goto label_1993d4;
        case 0x1993d8u: goto label_1993d8;
        case 0x1993dcu: goto label_1993dc;
        case 0x1993e0u: goto label_1993e0;
        case 0x1993e4u: goto label_1993e4;
        case 0x1993e8u: goto label_1993e8;
        case 0x1993ecu: goto label_1993ec;
        case 0x1993f0u: goto label_1993f0;
        case 0x1993f4u: goto label_1993f4;
        case 0x1993f8u: goto label_1993f8;
        case 0x1993fcu: goto label_1993fc;
        case 0x199400u: goto label_199400;
        case 0x199404u: goto label_199404;
        case 0x199408u: goto label_199408;
        case 0x19940cu: goto label_19940c;
        case 0x199410u: goto label_199410;
        case 0x199414u: goto label_199414;
        case 0x199418u: goto label_199418;
        case 0x19941cu: goto label_19941c;
        case 0x199420u: goto label_199420;
        case 0x199424u: goto label_199424;
        case 0x199428u: goto label_199428;
        case 0x19942cu: goto label_19942c;
        case 0x199430u: goto label_199430;
        case 0x199434u: goto label_199434;
        case 0x199438u: goto label_199438;
        case 0x19943cu: goto label_19943c;
        case 0x199440u: goto label_199440;
        case 0x199444u: goto label_199444;
        case 0x199448u: goto label_199448;
        case 0x19944cu: goto label_19944c;
        case 0x199450u: goto label_199450;
        case 0x199454u: goto label_199454;
        case 0x199458u: goto label_199458;
        case 0x19945cu: goto label_19945c;
        case 0x199460u: goto label_199460;
        case 0x199464u: goto label_199464;
        case 0x199468u: goto label_199468;
        case 0x19946cu: goto label_19946c;
        case 0x199470u: goto label_199470;
        case 0x199474u: goto label_199474;
        case 0x199478u: goto label_199478;
        case 0x19947cu: goto label_19947c;
        case 0x199480u: goto label_199480;
        case 0x199484u: goto label_199484;
        case 0x199488u: goto label_199488;
        case 0x19948cu: goto label_19948c;
        case 0x199490u: goto label_199490;
        case 0x199494u: goto label_199494;
        case 0x199498u: goto label_199498;
        case 0x19949cu: goto label_19949c;
        case 0x1994a0u: goto label_1994a0;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b0u: goto label_1994b0;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994b8u: goto label_1994b8;
        case 0x1994bcu: goto label_1994bc;
        case 0x1994c0u: goto label_1994c0;
        case 0x1994c4u: goto label_1994c4;
        case 0x1994c8u: goto label_1994c8;
        case 0x1994ccu: goto label_1994cc;
        case 0x1994d0u: goto label_1994d0;
        case 0x1994d4u: goto label_1994d4;
        case 0x1994d8u: goto label_1994d8;
        case 0x1994dcu: goto label_1994dc;
        case 0x1994e0u: goto label_1994e0;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994e8u: goto label_1994e8;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f0u: goto label_1994f0;
        case 0x1994f4u: goto label_1994f4;
        case 0x1994f8u: goto label_1994f8;
        case 0x1994fcu: goto label_1994fc;
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        case 0x199510u: goto label_199510;
        case 0x199514u: goto label_199514;
        case 0x199518u: goto label_199518;
        case 0x19951cu: goto label_19951c;
        case 0x199520u: goto label_199520;
        case 0x199524u: goto label_199524;
        case 0x199528u: goto label_199528;
        case 0x19952cu: goto label_19952c;
        case 0x199530u: goto label_199530;
        case 0x199534u: goto label_199534;
        case 0x199538u: goto label_199538;
        case 0x19953cu: goto label_19953c;
        case 0x199540u: goto label_199540;
        case 0x199544u: goto label_199544;
        case 0x199548u: goto label_199548;
        case 0x19954cu: goto label_19954c;
        case 0x199550u: goto label_199550;
        case 0x199554u: goto label_199554;
        case 0x199558u: goto label_199558;
        case 0x19955cu: goto label_19955c;
        case 0x199560u: goto label_199560;
        case 0x199564u: goto label_199564;
        case 0x199568u: goto label_199568;
        case 0x19956cu: goto label_19956c;
        case 0x199570u: goto label_199570;
        case 0x199574u: goto label_199574;
        case 0x199578u: goto label_199578;
        case 0x19957cu: goto label_19957c;
        case 0x199580u: goto label_199580;
        case 0x199584u: goto label_199584;
        case 0x199588u: goto label_199588;
        case 0x19958cu: goto label_19958c;
        case 0x199590u: goto label_199590;
        case 0x199594u: goto label_199594;
        case 0x199598u: goto label_199598;
        case 0x19959cu: goto label_19959c;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995a4u: goto label_1995a4;
        case 0x1995a8u: goto label_1995a8;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b0u: goto label_1995b0;
        case 0x1995b4u: goto label_1995b4;
        case 0x1995b8u: goto label_1995b8;
        case 0x1995bcu: goto label_1995bc;
        case 0x1995c0u: goto label_1995c0;
        case 0x1995c4u: goto label_1995c4;
        case 0x1995c8u: goto label_1995c8;
        case 0x1995ccu: goto label_1995cc;
        case 0x1995d0u: goto label_1995d0;
        case 0x1995d4u: goto label_1995d4;
        case 0x1995d8u: goto label_1995d8;
        case 0x1995dcu: goto label_1995dc;
        case 0x1995e0u: goto label_1995e0;
        case 0x1995e4u: goto label_1995e4;
        case 0x1995e8u: goto label_1995e8;
        case 0x1995ecu: goto label_1995ec;
        case 0x1995f0u: goto label_1995f0;
        case 0x1995f4u: goto label_1995f4;
        case 0x1995f8u: goto label_1995f8;
        case 0x1995fcu: goto label_1995fc;
        case 0x199600u: goto label_199600;
        case 0x199604u: goto label_199604;
        case 0x199608u: goto label_199608;
        case 0x19960cu: goto label_19960c;
        case 0x199610u: goto label_199610;
        case 0x199614u: goto label_199614;
        case 0x199618u: goto label_199618;
        case 0x19961cu: goto label_19961c;
        case 0x199620u: goto label_199620;
        case 0x199624u: goto label_199624;
        case 0x199628u: goto label_199628;
        case 0x19962cu: goto label_19962c;
        case 0x199630u: goto label_199630;
        case 0x199634u: goto label_199634;
        case 0x199638u: goto label_199638;
        case 0x19963cu: goto label_19963c;
        case 0x199640u: goto label_199640;
        case 0x199644u: goto label_199644;
        case 0x199648u: goto label_199648;
        case 0x19964cu: goto label_19964c;
        case 0x199650u: goto label_199650;
        case 0x199654u: goto label_199654;
        case 0x199658u: goto label_199658;
        case 0x19965cu: goto label_19965c;
        case 0x199660u: goto label_199660;
        case 0x199664u: goto label_199664;
        case 0x199668u: goto label_199668;
        case 0x19966cu: goto label_19966c;
        case 0x199670u: goto label_199670;
        case 0x199674u: goto label_199674;
        case 0x199678u: goto label_199678;
        case 0x19967cu: goto label_19967c;
        case 0x199680u: goto label_199680;
        case 0x199684u: goto label_199684;
        case 0x199688u: goto label_199688;
        case 0x19968cu: goto label_19968c;
        case 0x199690u: goto label_199690;
        case 0x199694u: goto label_199694;
        case 0x199698u: goto label_199698;
        case 0x19969cu: goto label_19969c;
        case 0x1996a0u: goto label_1996a0;
        case 0x1996a4u: goto label_1996a4;
        case 0x1996a8u: goto label_1996a8;
        case 0x1996acu: goto label_1996ac;
        case 0x1996b0u: goto label_1996b0;
        case 0x1996b4u: goto label_1996b4;
        case 0x1996b8u: goto label_1996b8;
        case 0x1996bcu: goto label_1996bc;
        case 0x1996c0u: goto label_1996c0;
        case 0x1996c4u: goto label_1996c4;
        case 0x1996c8u: goto label_1996c8;
        case 0x1996ccu: goto label_1996cc;
        case 0x1996d0u: goto label_1996d0;
        case 0x1996d4u: goto label_1996d4;
        case 0x1996d8u: goto label_1996d8;
        case 0x1996dcu: goto label_1996dc;
        case 0x1996e0u: goto label_1996e0;
        case 0x1996e4u: goto label_1996e4;
        case 0x1996e8u: goto label_1996e8;
        case 0x1996ecu: goto label_1996ec;
        case 0x1996f0u: goto label_1996f0;
        case 0x1996f4u: goto label_1996f4;
        case 0x1996f8u: goto label_1996f8;
        case 0x1996fcu: goto label_1996fc;
        case 0x199700u: goto label_199700;
        case 0x199704u: goto label_199704;
        case 0x199708u: goto label_199708;
        case 0x19970cu: goto label_19970c;
        case 0x199710u: goto label_199710;
        case 0x199714u: goto label_199714;
        case 0x199718u: goto label_199718;
        case 0x19971cu: goto label_19971c;
        case 0x199720u: goto label_199720;
        case 0x199724u: goto label_199724;
        case 0x199728u: goto label_199728;
        case 0x19972cu: goto label_19972c;
        case 0x199730u: goto label_199730;
        case 0x199734u: goto label_199734;
        case 0x199738u: goto label_199738;
        case 0x19973cu: goto label_19973c;
        case 0x199740u: goto label_199740;
        case 0x199744u: goto label_199744;
        case 0x199748u: goto label_199748;
        case 0x19974cu: goto label_19974c;
        case 0x199750u: goto label_199750;
        case 0x199754u: goto label_199754;
        case 0x199758u: goto label_199758;
        case 0x19975cu: goto label_19975c;
        case 0x199760u: goto label_199760;
        case 0x199764u: goto label_199764;
        case 0x199768u: goto label_199768;
        case 0x19976cu: goto label_19976c;
        case 0x199770u: goto label_199770;
        case 0x199774u: goto label_199774;
        case 0x199778u: goto label_199778;
        case 0x19977cu: goto label_19977c;
        case 0x199780u: goto label_199780;
        case 0x199784u: goto label_199784;
        case 0x199788u: goto label_199788;
        case 0x19978cu: goto label_19978c;
        case 0x199790u: goto label_199790;
        case 0x199794u: goto label_199794;
        case 0x199798u: goto label_199798;
        case 0x19979cu: goto label_19979c;
        case 0x1997a0u: goto label_1997a0;
        case 0x1997a4u: goto label_1997a4;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997acu: goto label_1997ac;
        case 0x1997b0u: goto label_1997b0;
        case 0x1997b4u: goto label_1997b4;
        case 0x1997b8u: goto label_1997b8;
        case 0x1997bcu: goto label_1997bc;
        case 0x1997c0u: goto label_1997c0;
        case 0x1997c4u: goto label_1997c4;
        case 0x1997c8u: goto label_1997c8;
        case 0x1997ccu: goto label_1997cc;
        case 0x1997d0u: goto label_1997d0;
        case 0x1997d4u: goto label_1997d4;
        case 0x1997d8u: goto label_1997d8;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e0u: goto label_1997e0;
        case 0x1997e4u: goto label_1997e4;
        case 0x1997e8u: goto label_1997e8;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f0u: goto label_1997f0;
        case 0x1997f4u: goto label_1997f4;
        case 0x1997f8u: goto label_1997f8;
        case 0x1997fcu: goto label_1997fc;
        case 0x199800u: goto label_199800;
        case 0x199804u: goto label_199804;
        case 0x199808u: goto label_199808;
        case 0x19980cu: goto label_19980c;
        case 0x199810u: goto label_199810;
        case 0x199814u: goto label_199814;
        case 0x199818u: goto label_199818;
        case 0x19981cu: goto label_19981c;
        case 0x199820u: goto label_199820;
        case 0x199824u: goto label_199824;
        case 0x199828u: goto label_199828;
        case 0x19982cu: goto label_19982c;
        case 0x199830u: goto label_199830;
        case 0x199834u: goto label_199834;
        case 0x199838u: goto label_199838;
        case 0x19983cu: goto label_19983c;
        case 0x199840u: goto label_199840;
        case 0x199844u: goto label_199844;
        case 0x199848u: goto label_199848;
        case 0x19984cu: goto label_19984c;
        case 0x199850u: goto label_199850;
        case 0x199854u: goto label_199854;
        case 0x199858u: goto label_199858;
        case 0x19985cu: goto label_19985c;
        case 0x199860u: goto label_199860;
        case 0x199864u: goto label_199864;
        case 0x199868u: goto label_199868;
        case 0x19986cu: goto label_19986c;
        case 0x199870u: goto label_199870;
        case 0x199874u: goto label_199874;
        case 0x199878u: goto label_199878;
        case 0x19987cu: goto label_19987c;
        case 0x199880u: goto label_199880;
        case 0x199884u: goto label_199884;
        case 0x199888u: goto label_199888;
        case 0x19988cu: goto label_19988c;
        case 0x199890u: goto label_199890;
        case 0x199894u: goto label_199894;
        case 0x199898u: goto label_199898;
        case 0x19989cu: goto label_19989c;
        case 0x1998a0u: goto label_1998a0;
        case 0x1998a4u: goto label_1998a4;
        case 0x1998a8u: goto label_1998a8;
        case 0x1998acu: goto label_1998ac;
        case 0x1998b0u: goto label_1998b0;
        case 0x1998b4u: goto label_1998b4;
        case 0x1998b8u: goto label_1998b8;
        case 0x1998bcu: goto label_1998bc;
        case 0x1998c0u: goto label_1998c0;
        case 0x1998c4u: goto label_1998c4;
        case 0x1998c8u: goto label_1998c8;
        case 0x1998ccu: goto label_1998cc;
        case 0x1998d0u: goto label_1998d0;
        case 0x1998d4u: goto label_1998d4;
        case 0x1998d8u: goto label_1998d8;
        case 0x1998dcu: goto label_1998dc;
        case 0x1998e0u: goto label_1998e0;
        case 0x1998e4u: goto label_1998e4;
        case 0x1998e8u: goto label_1998e8;
        case 0x1998ecu: goto label_1998ec;
        case 0x1998f0u: goto label_1998f0;
        case 0x1998f4u: goto label_1998f4;
        case 0x1998f8u: goto label_1998f8;
        case 0x1998fcu: goto label_1998fc;
        case 0x199900u: goto label_199900;
        case 0x199904u: goto label_199904;
        case 0x199908u: goto label_199908;
        case 0x19990cu: goto label_19990c;
        case 0x199910u: goto label_199910;
        case 0x199914u: goto label_199914;
        case 0x199918u: goto label_199918;
        case 0x19991cu: goto label_19991c;
        case 0x199920u: goto label_199920;
        case 0x199924u: goto label_199924;
        case 0x199928u: goto label_199928;
        case 0x19992cu: goto label_19992c;
        case 0x199930u: goto label_199930;
        case 0x199934u: goto label_199934;
        case 0x199938u: goto label_199938;
        case 0x19993cu: goto label_19993c;
        case 0x199940u: goto label_199940;
        case 0x199944u: goto label_199944;
        case 0x199948u: goto label_199948;
        case 0x19994cu: goto label_19994c;
        case 0x199950u: goto label_199950;
        case 0x199954u: goto label_199954;
        case 0x199958u: goto label_199958;
        case 0x19995cu: goto label_19995c;
        case 0x199960u: goto label_199960;
        case 0x199964u: goto label_199964;
        case 0x199968u: goto label_199968;
        case 0x19996cu: goto label_19996c;
        case 0x199970u: goto label_199970;
        case 0x199974u: goto label_199974;
        case 0x199978u: goto label_199978;
        case 0x19997cu: goto label_19997c;
        case 0x199980u: goto label_199980;
        case 0x199984u: goto label_199984;
        case 0x199988u: goto label_199988;
        case 0x19998cu: goto label_19998c;
        case 0x199990u: goto label_199990;
        case 0x199994u: goto label_199994;
        case 0x199998u: goto label_199998;
        case 0x19999cu: goto label_19999c;
        case 0x1999a0u: goto label_1999a0;
        case 0x1999a4u: goto label_1999a4;
        case 0x1999a8u: goto label_1999a8;
        case 0x1999acu: goto label_1999ac;
        case 0x1999b0u: goto label_1999b0;
        case 0x1999b4u: goto label_1999b4;
        case 0x1999b8u: goto label_1999b8;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999c0u: goto label_1999c0;
        case 0x1999c4u: goto label_1999c4;
        case 0x1999c8u: goto label_1999c8;
        case 0x1999ccu: goto label_1999cc;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999d4u: goto label_1999d4;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999dcu: goto label_1999dc;
        case 0x1999e0u: goto label_1999e0;
        case 0x1999e4u: goto label_1999e4;
        case 0x1999e8u: goto label_1999e8;
        case 0x1999ecu: goto label_1999ec;
        case 0x1999f0u: goto label_1999f0;
        case 0x1999f4u: goto label_1999f4;
        case 0x1999f8u: goto label_1999f8;
        case 0x1999fcu: goto label_1999fc;
        case 0x199a00u: goto label_199a00;
        case 0x199a04u: goto label_199a04;
        case 0x199a08u: goto label_199a08;
        case 0x199a0cu: goto label_199a0c;
        case 0x199a10u: goto label_199a10;
        case 0x199a14u: goto label_199a14;
        case 0x199a18u: goto label_199a18;
        case 0x199a1cu: goto label_199a1c;
        case 0x199a20u: goto label_199a20;
        case 0x199a24u: goto label_199a24;
        case 0x199a28u: goto label_199a28;
        case 0x199a2cu: goto label_199a2c;
        case 0x199a30u: goto label_199a30;
        case 0x199a34u: goto label_199a34;
        case 0x199a38u: goto label_199a38;
        case 0x199a3cu: goto label_199a3c;
        case 0x199a40u: goto label_199a40;
        case 0x199a44u: goto label_199a44;
        case 0x199a48u: goto label_199a48;
        case 0x199a4cu: goto label_199a4c;
        case 0x199a50u: goto label_199a50;
        case 0x199a54u: goto label_199a54;
        case 0x199a58u: goto label_199a58;
        case 0x199a5cu: goto label_199a5c;
        case 0x199a60u: goto label_199a60;
        case 0x199a64u: goto label_199a64;
        case 0x199a68u: goto label_199a68;
        case 0x199a6cu: goto label_199a6c;
        case 0x199a70u: goto label_199a70;
        case 0x199a74u: goto label_199a74;
        case 0x199a78u: goto label_199a78;
        case 0x199a7cu: goto label_199a7c;
        case 0x199a80u: goto label_199a80;
        case 0x199a84u: goto label_199a84;
        case 0x199a88u: goto label_199a88;
        case 0x199a8cu: goto label_199a8c;
        case 0x199a90u: goto label_199a90;
        case 0x199a94u: goto label_199a94;
        case 0x199a98u: goto label_199a98;
        case 0x199a9cu: goto label_199a9c;
        case 0x199aa0u: goto label_199aa0;
        case 0x199aa4u: goto label_199aa4;
        case 0x199aa8u: goto label_199aa8;
        case 0x199aacu: goto label_199aac;
        case 0x199ab0u: goto label_199ab0;
        case 0x199ab4u: goto label_199ab4;
        case 0x199ab8u: goto label_199ab8;
        case 0x199abcu: goto label_199abc;
        case 0x199ac0u: goto label_199ac0;
        case 0x199ac4u: goto label_199ac4;
        case 0x199ac8u: goto label_199ac8;
        case 0x199accu: goto label_199acc;
        case 0x199ad0u: goto label_199ad0;
        case 0x199ad4u: goto label_199ad4;
        case 0x199ad8u: goto label_199ad8;
        case 0x199adcu: goto label_199adc;
        case 0x199ae0u: goto label_199ae0;
        case 0x199ae4u: goto label_199ae4;
        case 0x199ae8u: goto label_199ae8;
        case 0x199aecu: goto label_199aec;
        case 0x199af0u: goto label_199af0;
        case 0x199af4u: goto label_199af4;
        case 0x199af8u: goto label_199af8;
        case 0x199afcu: goto label_199afc;
        case 0x199b00u: goto label_199b00;
        case 0x199b04u: goto label_199b04;
        case 0x199b08u: goto label_199b08;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b10u: goto label_199b10;
        case 0x199b14u: goto label_199b14;
        case 0x199b18u: goto label_199b18;
        case 0x199b1cu: goto label_199b1c;
        case 0x199b20u: goto label_199b20;
        case 0x199b24u: goto label_199b24;
        case 0x199b28u: goto label_199b28;
        case 0x199b2cu: goto label_199b2c;
        case 0x199b30u: goto label_199b30;
        case 0x199b34u: goto label_199b34;
        case 0x199b38u: goto label_199b38;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b40u: goto label_199b40;
        case 0x199b44u: goto label_199b44;
        case 0x199b48u: goto label_199b48;
        case 0x199b4cu: goto label_199b4c;
        case 0x199b50u: goto label_199b50;
        case 0x199b54u: goto label_199b54;
        case 0x199b58u: goto label_199b58;
        case 0x199b5cu: goto label_199b5c;
        case 0x199b60u: goto label_199b60;
        case 0x199b64u: goto label_199b64;
        case 0x199b68u: goto label_199b68;
        case 0x199b6cu: goto label_199b6c;
        case 0x199b70u: goto label_199b70;
        case 0x199b74u: goto label_199b74;
        case 0x199b78u: goto label_199b78;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b80u: goto label_199b80;
        case 0x199b84u: goto label_199b84;
        case 0x199b88u: goto label_199b88;
        case 0x199b8cu: goto label_199b8c;
        case 0x199b90u: goto label_199b90;
        case 0x199b94u: goto label_199b94;
        case 0x199b98u: goto label_199b98;
        case 0x199b9cu: goto label_199b9c;
        case 0x199ba0u: goto label_199ba0;
        case 0x199ba4u: goto label_199ba4;
        case 0x199ba8u: goto label_199ba8;
        case 0x199bacu: goto label_199bac;
        case 0x199bb0u: goto label_199bb0;
        case 0x199bb4u: goto label_199bb4;
        case 0x199bb8u: goto label_199bb8;
        case 0x199bbcu: goto label_199bbc;
        case 0x199bc0u: goto label_199bc0;
        case 0x199bc4u: goto label_199bc4;
        case 0x199bc8u: goto label_199bc8;
        case 0x199bccu: goto label_199bcc;
        case 0x199bd0u: goto label_199bd0;
        case 0x199bd4u: goto label_199bd4;
        case 0x199bd8u: goto label_199bd8;
        case 0x199bdcu: goto label_199bdc;
        case 0x199be0u: goto label_199be0;
        case 0x199be4u: goto label_199be4;
        case 0x199be8u: goto label_199be8;
        default: break;
    }

    ctx->pc = 0x198df0u;

label_198df0:
    // 0x198df0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x198df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_198df4:
    // 0x198df4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x198df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_198df8:
    // 0x198df8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x198df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_198dfc:
    // 0x198dfc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x198dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_198e00:
    // 0x198e00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x198e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_198e04:
    // 0x198e04: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x198e04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198e08:
    // 0x198e08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x198e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_198e0c:
    // 0x198e0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x198e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198e10:
    // 0x198e10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x198e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_198e14:
    // 0x198e14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e18:
    // 0x198e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_198e1c:
    // 0x198e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_198e20:
    // 0x198e20: 0xc063dd4  jal         func_18F750
label_198e24:
    if (ctx->pc == 0x198E24u) {
        ctx->pc = 0x198E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E20u;
        // 0x198e24: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E28u;
        goto label_198e28;
    }
    ctx->pc = 0x198E20u;
    SET_GPR_U32(ctx, 31, 0x198E28u);
    ctx->pc = 0x198E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E20u;
    // 0x198e24: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x198E20u, 0x198E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E28u;
label_198e28:
    // 0x198e28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x198e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_198e2c:
    // 0x198e2c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x198e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_198e30:
    // 0x198e30: 0x104402c3  beq         $v0, $a0, . + 4 + (0x2C3 << 2)
label_198e34:
    if (ctx->pc == 0x198E34u) {
        ctx->pc = 0x198E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E30u;
        // 0x198e34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E38u;
        goto label_198e38;
    }
    ctx->pc = 0x198E30u;
    {
        const bool branch_taken_0x198e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x198E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E30u;
        // 0x198e34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e30) {
            ctx->pc = 0x199940u;
            goto label_199940;
        }
    }
    ctx->pc = 0x198E38u;
label_198e38:
    // 0x198e38: 0x104302c0  beq         $v0, $v1, . + 4 + (0x2C0 << 2)
label_198e3c:
    if (ctx->pc == 0x198E3Cu) {
        ctx->pc = 0x198E40u;
        goto label_198e40;
    }
    ctx->pc = 0x198E38u;
    {
        const bool branch_taken_0x198e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198e38) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x198E40u;
label_198e40:
    // 0x198e40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x198e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_198e44:
    // 0x198e44: 0x1043029a  beq         $v0, $v1, . + 4 + (0x29A << 2)
label_198e48:
    if (ctx->pc == 0x198E48u) {
        ctx->pc = 0x198E4Cu;
        goto label_198e4c;
    }
    ctx->pc = 0x198E44u;
    {
        const bool branch_taken_0x198e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198e44) {
            ctx->pc = 0x1998B0u;
            goto label_1998b0;
        }
    }
    ctx->pc = 0x198E4Cu;
label_198e4c:
    // 0x198e4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x198e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_198e50:
    // 0x198e50: 0x10430273  beq         $v0, $v1, . + 4 + (0x273 << 2)
label_198e54:
    if (ctx->pc == 0x198E54u) {
        ctx->pc = 0x198E58u;
        goto label_198e58;
    }
    ctx->pc = 0x198E50u;
    {
        const bool branch_taken_0x198e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198e50) {
            ctx->pc = 0x199820u;
            goto label_199820;
        }
    }
    ctx->pc = 0x198E58u;
label_198e58:
    // 0x198e58: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x198e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198e5c:
    // 0x198e5c: 0x10430228  beq         $v0, $v1, . + 4 + (0x228 << 2)
label_198e60:
    if (ctx->pc == 0x198E60u) {
        ctx->pc = 0x198E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E5Cu;
        // 0x198e60: 0x26840820  addiu       $a0, $s4, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E64u;
        goto label_198e64;
    }
    ctx->pc = 0x198E5Cu;
    {
        const bool branch_taken_0x198e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x198E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E5Cu;
        // 0x198e60: 0x26840820  addiu       $a0, $s4, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e5c) {
            ctx->pc = 0x199700u;
            goto label_199700;
        }
    }
    ctx->pc = 0x198E64u;
label_198e64:
    // 0x198e64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_198e68:
    // 0x198e68: 0x10450219  beq         $v0, $a1, . + 4 + (0x219 << 2)
label_198e6c:
    if (ctx->pc == 0x198E6Cu) {
        ctx->pc = 0x198E70u;
        goto label_198e70;
    }
    ctx->pc = 0x198E68u;
    {
        const bool branch_taken_0x198e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x198e68) {
            ctx->pc = 0x1996D0u;
            goto label_1996d0;
        }
    }
    ctx->pc = 0x198E70u;
label_198e70:
    // 0x198e70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x198e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198e74:
    // 0x198e74: 0x104301f9  beq         $v0, $v1, . + 4 + (0x1F9 << 2)
label_198e78:
    if (ctx->pc == 0x198E78u) {
        ctx->pc = 0x198E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E74u;
        // 0x198e78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E7Cu;
        goto label_198e7c;
    }
    ctx->pc = 0x198E74u;
    {
        const bool branch_taken_0x198e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x198E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E74u;
        // 0x198e78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e74) {
            ctx->pc = 0x19965Cu;
            goto label_19965c;
        }
    }
    ctx->pc = 0x198E7Cu;
label_198e7c:
    // 0x198e7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x198e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_198e80:
    // 0x198e80: 0x104301d9  beq         $v0, $v1, . + 4 + (0x1D9 << 2)
label_198e84:
    if (ctx->pc == 0x198E84u) {
        ctx->pc = 0x198E88u;
        goto label_198e88;
    }
    ctx->pc = 0x198E80u;
    {
        const bool branch_taken_0x198e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198e80) {
            ctx->pc = 0x1995E8u;
            goto label_1995e8;
        }
    }
    ctx->pc = 0x198E88u;
label_198e88:
    // 0x198e88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_198e8c:
    // 0x198e8c: 0x10450154  beq         $v0, $a1, . + 4 + (0x154 << 2)
label_198e90:
    if (ctx->pc == 0x198E90u) {
        ctx->pc = 0x198E94u;
        goto label_198e94;
    }
    ctx->pc = 0x198E8Cu;
    {
        const bool branch_taken_0x198e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x198e8c) {
            ctx->pc = 0x1993E0u;
            goto label_1993e0;
        }
    }
    ctx->pc = 0x198E94u;
label_198e94:
    // 0x198e94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x198e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_198e98:
    // 0x198e98: 0x10430148  beq         $v0, $v1, . + 4 + (0x148 << 2)
label_198e9c:
    if (ctx->pc == 0x198E9Cu) {
        ctx->pc = 0x198EA0u;
        goto label_198ea0;
    }
    ctx->pc = 0x198E98u;
    {
        const bool branch_taken_0x198e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198e98) {
            ctx->pc = 0x1993BCu;
            goto label_1993bc;
        }
    }
    ctx->pc = 0x198EA0u;
label_198ea0:
    // 0x198ea0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x198ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198ea4:
    // 0x198ea4: 0x1046007d  beq         $v0, $a2, . + 4 + (0x7D << 2)
label_198ea8:
    if (ctx->pc == 0x198EA8u) {
        ctx->pc = 0x198EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EA4u;
        // 0x198ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EACu;
        goto label_198eac;
    }
    ctx->pc = 0x198EA4u;
    {
        const bool branch_taken_0x198ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x198EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EA4u;
        // 0x198ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ea4) {
            ctx->pc = 0x19909Cu;
            goto label_19909c;
        }
    }
    ctx->pc = 0x198EACu;
label_198eac:
    // 0x198eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198eb0:
    // 0x198eb0: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
label_198eb4:
    if (ctx->pc == 0x198EB4u) {
        ctx->pc = 0x198EB8u;
        goto label_198eb8;
    }
    ctx->pc = 0x198EB0u;
    {
        const bool branch_taken_0x198eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198eb0) {
            ctx->pc = 0x19904Cu;
            goto label_19904c;
        }
    }
    ctx->pc = 0x198EB8u;
label_198eb8:
    // 0x198eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_198ebc:
    if (ctx->pc == 0x198EBCu) {
        ctx->pc = 0x198EC0u;
        goto label_198ec0;
    }
    ctx->pc = 0x198EB8u;
    {
        const bool branch_taken_0x198eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198eb8) {
            ctx->pc = 0x198EC8u;
            goto label_198ec8;
        }
    }
    ctx->pc = 0x198EC0u;
label_198ec0:
    // 0x198ec0: 0x1000029e  b           . + 4 + (0x29E << 2)
label_198ec4:
    if (ctx->pc == 0x198EC4u) {
        ctx->pc = 0x198EC8u;
        goto label_198ec8;
    }
    ctx->pc = 0x198EC0u;
    {
        const bool branch_taken_0x198ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ec0) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x198EC8u;
label_198ec8:
    // 0x198ec8: 0xc067f08  jal         func_19FC20
label_198ecc:
    if (ctx->pc == 0x198ECCu) {
        ctx->pc = 0x198ED0u;
        goto label_198ed0;
    }
    ctx->pc = 0x198EC8u;
    SET_GPR_U32(ctx, 31, 0x198ED0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x198EC8u, 0x198ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ED0u;
label_198ed0:
    // 0x198ed0: 0xae820810  sw          $v0, 0x810($s4)
    ctx->pc = 0x198ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2064), GPR_U32(ctx, 2));
label_198ed4:
    // 0x198ed4: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x198ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_198ed8:
    // 0x198ed8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_198edc:
    if (ctx->pc == 0x198EDCu) {
        ctx->pc = 0x198EE0u;
        goto label_198ee0;
    }
    ctx->pc = 0x198ED8u;
    {
        const bool branch_taken_0x198ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ed8) {
            ctx->pc = 0x198EECu;
            goto label_198eec;
        }
    }
    ctx->pc = 0x198EE0u;
label_198ee0:
    // 0x198ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198ee4:
    // 0x198ee4: 0xc067f68  jal         func_19FDA0
label_198ee8:
    if (ctx->pc == 0x198EE8u) {
        ctx->pc = 0x198EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EE4u;
        // 0x198ee8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EECu;
        goto label_198eec;
    }
    ctx->pc = 0x198EE4u;
    SET_GPR_U32(ctx, 31, 0x198EECu);
    ctx->pc = 0x198EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EE4u;
    // 0x198ee8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x198EE4u, 0x198EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EECu;
label_198eec:
    // 0x198eec: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x198eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_198ef0:
    // 0x198ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198ef4:
    // 0x198ef4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x198ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_198ef8:
    // 0x198ef8: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x198ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
label_198efc:
    // 0x198efc: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x198efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_198f00:
    // 0x198f00: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_198f04:
    // 0x198f04: 0xac4428e8  sw          $a0, 0x28E8($v0)
    ctx->pc = 0x198f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10472), GPR_U32(ctx, 4));
label_198f08:
    // 0x198f08: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_198f0c:
    // 0x198f0c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x198f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_198f10:
    // 0x198f10: 0xac4302dc  sw          $v1, 0x2DC($v0)
    ctx->pc = 0x198f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 3));
label_198f14:
    // 0x198f14: 0xae800678  sw          $zero, 0x678($s4)
    ctx->pc = 0x198f14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 0));
label_198f18:
    // 0x198f18: 0xae800688  sw          $zero, 0x688($s4)
    ctx->pc = 0x198f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 0));
label_198f1c:
    // 0x198f1c: 0xae800684  sw          $zero, 0x684($s4)
    ctx->pc = 0x198f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 0));
label_198f20:
    // 0x198f20: 0xae800680  sw          $zero, 0x680($s4)
    ctx->pc = 0x198f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 0));
label_198f24:
    // 0x198f24: 0xae80067c  sw          $zero, 0x67C($s4)
    ctx->pc = 0x198f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 0));
label_198f28:
    // 0x198f28: 0xae800934  sw          $zero, 0x934($s4)
    ctx->pc = 0x198f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2356), GPR_U32(ctx, 0));
label_198f2c:
    // 0x198f2c: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x198f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_198f30:
    // 0x198f30: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x198f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_198f34:
    // 0x198f34: 0xae800930  sw          $zero, 0x930($s4)
    ctx->pc = 0x198f34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2352), GPR_U32(ctx, 0));
label_198f38:
    // 0x198f38: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x198f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_198f3c:
    // 0x198f3c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_198f40:
    if (ctx->pc == 0x198F40u) {
        ctx->pc = 0x198F44u;
        goto label_198f44;
    }
    ctx->pc = 0x198F3Cu;
    {
        const bool branch_taken_0x198f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f3c) {
            ctx->pc = 0x19901Cu;
            goto label_19901c;
        }
    }
    ctx->pc = 0x198F44u;
label_198f44:
    // 0x198f44: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x198f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_198f48:
    // 0x198f48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_198f4c:
    if (ctx->pc == 0x198F4Cu) {
        ctx->pc = 0x198F50u;
        goto label_198f50;
    }
    ctx->pc = 0x198F48u;
    {
        const bool branch_taken_0x198f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x198f48) {
            ctx->pc = 0x198F58u;
            goto label_198f58;
        }
    }
    ctx->pc = 0x198F50u;
label_198f50:
    // 0x198f50: 0x10000032  b           . + 4 + (0x32 << 2)
label_198f54:
    if (ctx->pc == 0x198F54u) {
        ctx->pc = 0x198F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F50u;
        // 0x198f54: 0xae910930  sw          $s1, 0x930($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2352), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F58u;
        goto label_198f58;
    }
    ctx->pc = 0x198F50u;
    {
        const bool branch_taken_0x198f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F50u;
        // 0x198f54: 0xae910930  sw          $s1, 0x930($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2352), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f50) {
            ctx->pc = 0x19901Cu;
            goto label_19901c;
        }
    }
    ctx->pc = 0x198F58u;
label_198f58:
    // 0x198f58: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x198f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_198f5c:
    // 0x198f5c: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x198f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_198f60:
    // 0x198f60: 0xc057040  jal         func_15C100
label_198f64:
    if (ctx->pc == 0x198F64u) {
        ctx->pc = 0x198F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F60u;
        // 0x198f64: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F68u;
        goto label_198f68;
    }
    ctx->pc = 0x198F60u;
    SET_GPR_U32(ctx, 31, 0x198F68u);
    ctx->pc = 0x198F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F60u;
    // 0x198f64: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x198F60u, 0x198F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F68u;
label_198f68:
    // 0x198f68: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x198f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_198f6c:
    // 0x198f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198f70:
    // 0x198f70: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_198f74:
    // 0x198f74: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_198f78:
    if (ctx->pc == 0x198F78u) {
        ctx->pc = 0x198F7Cu;
        goto label_198f7c;
    }
    ctx->pc = 0x198F74u;
    {
        const bool branch_taken_0x198f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198f74) {
            ctx->pc = 0x198FD0u;
            goto label_198fd0;
        }
    }
    ctx->pc = 0x198F7Cu;
label_198f7c:
    // 0x198f7c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_198f80:
    // 0x198f80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_198f84:
    if (ctx->pc == 0x198F84u) {
        ctx->pc = 0x198F88u;
        goto label_198f88;
    }
    ctx->pc = 0x198F80u;
    {
        const bool branch_taken_0x198f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198f80) {
            ctx->pc = 0x198F90u;
            goto label_198f90;
        }
    }
    ctx->pc = 0x198F88u;
label_198f88:
    // 0x198f88: 0x10000015  b           . + 4 + (0x15 << 2)
label_198f8c:
    if (ctx->pc == 0x198F8Cu) {
        ctx->pc = 0x198F90u;
        goto label_198f90;
    }
    ctx->pc = 0x198F88u;
    {
        const bool branch_taken_0x198f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f88) {
            ctx->pc = 0x198FE0u;
            goto label_198fe0;
        }
    }
    ctx->pc = 0x198F90u;
label_198f90:
    // 0x198f90: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_198f94:
    // 0x198f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_198f98:
    // 0x198f98: 0xae820684  sw          $v0, 0x684($s4)
    ctx->pc = 0x198f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 2));
label_198f9c:
    // 0x198f9c: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x198f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_198fa0:
    // 0x198fa0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_198fa4:
    if (ctx->pc == 0x198FA4u) {
        ctx->pc = 0x198FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FA0u;
        // 0x198fa4: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FA8u;
        goto label_198fa8;
    }
    ctx->pc = 0x198FA0u;
    {
        const bool branch_taken_0x198fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FA0u;
        // 0x198fa4: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fa0) {
            ctx->pc = 0x198FD0u;
            goto label_198fd0;
        }
    }
    ctx->pc = 0x198FA8u;
label_198fa8:
    // 0x198fa8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_198fac:
    // 0x198fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198fb0:
    // 0x198fb0: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_198fb4:
    // 0x198fb4: 0xc064c78  jal         func_1931E0
label_198fb8:
    if (ctx->pc == 0x198FB8u) {
        ctx->pc = 0x198FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FB4u;
        // 0x198fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FBCu;
        goto label_198fbc;
    }
    ctx->pc = 0x198FB4u;
    SET_GPR_U32(ctx, 31, 0x198FBCu);
    ctx->pc = 0x198FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FB4u;
    // 0x198fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1931E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1931E0u, 0x198FB4u, 0x198FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FBCu;
label_198fbc:
    // 0x198fbc: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x198fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_198fc0:
    // 0x198fc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198fc4:
    // 0x198fc4: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_198fc8:
    // 0x198fc8: 0xc064c78  jal         func_1931E0
label_198fcc:
    if (ctx->pc == 0x198FCCu) {
        ctx->pc = 0x198FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FC8u;
        // 0x198fcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FD0u;
        goto label_198fd0;
    }
    ctx->pc = 0x198FC8u;
    SET_GPR_U32(ctx, 31, 0x198FD0u);
    ctx->pc = 0x198FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FC8u;
    // 0x198fcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1931E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1931E0u, 0x198FC8u, 0x198FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FD0u;
label_198fd0:
    // 0x198fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198fd4:
    // 0x198fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198fd8:
    // 0x198fd8: 0xc064c20  jal         func_193080
label_198fdc:
    if (ctx->pc == 0x198FDCu) {
        ctx->pc = 0x198FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FD8u;
        // 0x198fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FE0u;
        goto label_198fe0;
    }
    ctx->pc = 0x198FD8u;
    SET_GPR_U32(ctx, 31, 0x198FE0u);
    ctx->pc = 0x198FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FD8u;
    // 0x198fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x198FD8u, 0x198FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FE0u;
label_198fe0:
    // 0x198fe0: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_198fe4:
    // 0x198fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_198fe8:
    // 0x198fe8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_198fec:
    // 0x198fec: 0xac500690  sw          $s0, 0x690($v0)
    ctx->pc = 0x198fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1680), GPR_U32(ctx, 16));
label_198ff0:
    // 0x198ff0: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x198ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_198ff4:
    // 0x198ff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_198ff8:
    // 0x198ff8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x198ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_198ffc:
    // 0x198ffc: 0xac510790  sw          $s1, 0x790($v0)
    ctx->pc = 0x198ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1936), GPR_U32(ctx, 17));
label_199000:
    // 0x199000: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_199004:
    // 0x199004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_199008:
    // 0x199008: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_19900c:
    // 0x19900c: 0xac400710  sw          $zero, 0x710($v0)
    ctx->pc = 0x19900cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 0));
label_199010:
    // 0x199010: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x199010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_199014:
    // 0x199014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_199018:
    // 0x199018: 0xae820688  sw          $v0, 0x688($s4)
    ctx->pc = 0x199018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 2));
label_19901c:
    // 0x19901c: 0x0  nop
    ctx->pc = 0x19901cu;
    // NOP
label_199020:
    // 0x199020: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x199020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_199024:
    // 0x199024: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x199024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_199028:
    // 0x199028: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x199028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19902c:
    // 0x19902c: 0x1062ffc2  beq         $v1, $v0, . + 4 + (-0x3E << 2)
label_199030:
    if (ctx->pc == 0x199030u) {
        ctx->pc = 0x199034u;
        goto label_199034;
    }
    ctx->pc = 0x19902Cu;
    {
        const bool branch_taken_0x19902c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19902c) {
            ctx->pc = 0x198F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198f38;
        }
    }
    ctx->pc = 0x199034u;
label_199034:
    // 0x199034: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x199034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_199038:
    // 0x199038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19903c:
    // 0x19903c: 0xc063e14  jal         func_18F850
label_199040:
    if (ctx->pc == 0x199040u) {
        ctx->pc = 0x199040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19903Cu;
        // 0x199040: 0xae82068c  sw          $v0, 0x68C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199044u;
        goto label_199044;
    }
    ctx->pc = 0x19903Cu;
    SET_GPR_U32(ctx, 31, 0x199044u);
    ctx->pc = 0x199040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19903Cu;
    // 0x199040: 0xae82068c  sw          $v0, 0x68C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19903Cu, 0x199044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199044u;
label_199044:
    // 0x199044: 0x1000023d  b           . + 4 + (0x23D << 2)
label_199048:
    if (ctx->pc == 0x199048u) {
        ctx->pc = 0x19904Cu;
        goto label_19904c;
    }
    ctx->pc = 0x199044u;
    {
        const bool branch_taken_0x199044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199044) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x19904Cu;
label_19904c:
    // 0x19904c: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_199050:
    // 0x199050: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_199054:
    if (ctx->pc == 0x199054u) {
        ctx->pc = 0x199058u;
        goto label_199058;
    }
    ctx->pc = 0x199050u;
    {
        const bool branch_taken_0x199050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199050) {
            ctx->pc = 0x199060u;
            goto label_199060;
        }
    }
    ctx->pc = 0x199058u;
label_199058:
    // 0x199058: 0xc067f68  jal         func_19FDA0
label_19905c:
    if (ctx->pc == 0x19905Cu) {
        ctx->pc = 0x199060u;
        goto label_199060;
    }
    ctx->pc = 0x199058u;
    SET_GPR_U32(ctx, 31, 0x199060u);
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199058u, 0x199060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199060u;
label_199060:
    // 0x199060: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_199064:
    // 0x199064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199068:
    // 0x199068: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x199068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19906c:
    // 0x19906c: 0xac6528e8  sw          $a1, 0x28E8($v1)
    ctx->pc = 0x19906cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10472), GPR_U32(ctx, 5));
label_199070:
    // 0x199070: 0xae820674  sw          $v0, 0x674($s4)
    ctx->pc = 0x199070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
label_199074:
    // 0x199074: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x199074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_199078:
    // 0x199078: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x199078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19907c:
    // 0x19907c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_199080:
    // 0x199080: 0xc064a9c  jal         func_192A70
label_199084:
    if (ctx->pc == 0x199084u) {
        ctx->pc = 0x199084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199080u;
        // 0x199084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199088u;
        goto label_199088;
    }
    ctx->pc = 0x199080u;
    SET_GPR_U32(ctx, 31, 0x199088u);
    ctx->pc = 0x199084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199080u;
    // 0x199084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A70u, 0x199080u, 0x199088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199088u;
label_199088:
    // 0x199088: 0xc063e14  jal         func_18F850
label_19908c:
    if (ctx->pc == 0x19908Cu) {
        ctx->pc = 0x19908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199088u;
        // 0x19908c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199090u;
        goto label_199090;
    }
    ctx->pc = 0x199088u;
    SET_GPR_U32(ctx, 31, 0x199090u);
    ctx->pc = 0x19908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199088u;
    // 0x19908c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x199088u, 0x199090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199090u;
label_199090:
    // 0x199090: 0x1000022a  b           . + 4 + (0x22A << 2)
label_199094:
    if (ctx->pc == 0x199094u) {
        ctx->pc = 0x199098u;
        goto label_199098;
    }
    ctx->pc = 0x199090u;
    {
        const bool branch_taken_0x199090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199090) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x199098u;
label_199098:
    // 0x199098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x199098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19909c:
    // 0x19909c: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1990a0:
    if (ctx->pc == 0x1990A0u) {
        ctx->pc = 0x1990A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19909Cu;
        // 0x1990a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990A4u;
        goto label_1990a4;
    }
    ctx->pc = 0x19909Cu;
    {
        const bool branch_taken_0x19909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19909Cu;
        // 0x1990a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19909c) {
            ctx->pc = 0x199358u;
            goto label_199358;
        }
    }
    ctx->pc = 0x1990A4u;
label_1990a4:
    // 0x1990a4: 0x2933021  addu        $a2, $s4, $s3
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1990a8:
    // 0x1990a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1990a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1990ac:
    // 0x1990ac: 0x8cc30690  lw          $v1, 0x690($a2)
    ctx->pc = 0x1990acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1680)));
label_1990b0:
    // 0x1990b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1990b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1990b4:
    // 0x1990b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1990b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1990b8:
    // 0x1990b8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1990b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1990bc:
    // 0x1990bc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1990bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1990c0:
    // 0x1990c0: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
label_1990c4:
    if (ctx->pc == 0x1990C4u) {
        ctx->pc = 0x1990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990C0u;
        // 0x1990c4: 0x24d20690  addiu       $s2, $a2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990C8u;
        goto label_1990c8;
    }
    ctx->pc = 0x1990C0u;
    {
        const bool branch_taken_0x1990c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990C0u;
        // 0x1990c4: 0x24d20690  addiu       $s2, $a2, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990c0) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x1990C8u;
label_1990c8:
    // 0x1990c8: 0x8cc80790  lw          $t0, 0x790($a2)
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1936)));
label_1990cc:
    // 0x1990cc: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1990ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1990d0:
    // 0x1990d0: 0x91050004  lbu         $a1, 0x4($t0)
    ctx->pc = 0x1990d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_1990d4:
    // 0x1990d4: 0x10a30071  beq         $a1, $v1, . + 4 + (0x71 << 2)
label_1990d8:
    if (ctx->pc == 0x1990D8u) {
        ctx->pc = 0x1990D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990D4u;
        // 0x1990d8: 0x24c70790  addiu       $a3, $a2, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990DCu;
        goto label_1990dc;
    }
    ctx->pc = 0x1990D4u;
    {
        const bool branch_taken_0x1990d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1990D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990D4u;
        // 0x1990d8: 0x24c70790  addiu       $a3, $a2, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990d4) {
            ctx->pc = 0x19929Cu;
            goto label_19929c;
        }
    }
    ctx->pc = 0x1990DCu;
label_1990dc:
    // 0x1990dc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1990e0:
    // 0x1990e0: 0x10a30042  beq         $a1, $v1, . + 4 + (0x42 << 2)
label_1990e4:
    if (ctx->pc == 0x1990E4u) {
        ctx->pc = 0x1990E8u;
        goto label_1990e8;
    }
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1991ECu;
            goto label_1991ec;
        }
    }
    ctx->pc = 0x1990E8u;
label_1990e8:
    // 0x1990e8: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1990ec:
    // 0x1990ec: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
label_1990f0:
    if (ctx->pc == 0x1990F0u) {
        ctx->pc = 0x1990F4u;
        goto label_1990f4;
    }
    ctx->pc = 0x1990ECu;
    {
        const bool branch_taken_0x1990ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990ec) {
            ctx->pc = 0x1991A4u;
            goto label_1991a4;
        }
    }
    ctx->pc = 0x1990F4u;
label_1990f4:
    // 0x1990f4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1990f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1990f8:
    // 0x1990f8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_1990fc:
    if (ctx->pc == 0x1990FCu) {
        ctx->pc = 0x199100u;
        goto label_199100;
    }
    ctx->pc = 0x1990F8u;
    {
        const bool branch_taken_0x1990f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1990f8) {
            ctx->pc = 0x199108u;
            goto label_199108;
        }
    }
    ctx->pc = 0x199100u;
label_199100:
    // 0x199100: 0x10000093  b           . + 4 + (0x93 << 2)
label_199104:
    if (ctx->pc == 0x199104u) {
        ctx->pc = 0x199108u;
        goto label_199108;
    }
    ctx->pc = 0x199100u;
    {
        const bool branch_taken_0x199100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199100) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199108u;
label_199108:
    // 0x199108: 0x8cc30710  lw          $v1, 0x710($a2)
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1808)));
label_19910c:
    // 0x19910c: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
label_199110:
    if (ctx->pc == 0x199110u) {
        ctx->pc = 0x199110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19910Cu;
        // 0x199110: 0x24d00710  addiu       $s0, $a2, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199114u;
        goto label_199114;
    }
    ctx->pc = 0x19910Cu;
    {
        const bool branch_taken_0x19910c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19910Cu;
        // 0x199110: 0x24d00710  addiu       $s0, $a2, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19910c) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199114u;
label_199114:
    // 0x199114: 0xae800674  sw          $zero, 0x674($s4)
    ctx->pc = 0x199114u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 0));
label_199118:
    // 0x199118: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_19911c:
    // 0x19911c: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x19911cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
label_199120:
    // 0x199120: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_199124:
    if (ctx->pc == 0x199124u) {
        ctx->pc = 0x199128u;
        goto label_199128;
    }
    ctx->pc = 0x199120u;
    {
        const bool branch_taken_0x199120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199120) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199128u;
label_199128:
    // 0x199128: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19912c:
    // 0x19912c: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
label_199130:
    if (ctx->pc == 0x199130u) {
        ctx->pc = 0x199134u;
        goto label_199134;
    }
    ctx->pc = 0x19912Cu;
    {
        const bool branch_taken_0x19912c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19912c) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199134u;
label_199134:
    // 0x199134: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x199134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199138:
    // 0x199138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19913c:
    // 0x19913c: 0xc064cac  jal         func_1932B0
label_199140:
    if (ctx->pc == 0x199140u) {
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199144u;
        goto label_199144;
    }
    ctx->pc = 0x19913Cu;
    SET_GPR_U32(ctx, 31, 0x199144u);
    ctx->pc = 0x199140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19913Cu;
    // 0x199140: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19913Cu, 0x199144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199144u;
label_199144:
    // 0x199144: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x199144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_199148:
    // 0x199148: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19914c:
    // 0x19914c: 0xc064c20  jal         func_193080
label_199150:
    if (ctx->pc == 0x199150u) {
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199154u;
        goto label_199154;
    }
    ctx->pc = 0x19914Cu;
    SET_GPR_U32(ctx, 31, 0x199154u);
    ctx->pc = 0x199150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19914Cu;
    // 0x199150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19914Cu, 0x199154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199154u;
label_199154:
    // 0x199154: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199158:
    // 0x199158: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x199158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_19915c:
    // 0x19915c: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_199160:
    // 0x199160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199164:
    // 0x199164: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x199164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
label_199168:
    // 0x199168: 0x8e840680  lw          $a0, 0x680($s4)
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_19916c:
    // 0x19916c: 0x8e830684  lw          $v1, 0x684($s4)
    ctx->pc = 0x19916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_199170:
    // 0x199170: 0x14830077  bne         $a0, $v1, . + 4 + (0x77 << 2)
label_199174:
    if (ctx->pc == 0x199174u) {
        ctx->pc = 0x199178u;
        goto label_199178;
    }
    ctx->pc = 0x199170u;
    {
        const bool branch_taken_0x199170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x199170) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199178u;
label_199178:
    // 0x199178: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x199178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_19917c:
    // 0x19917c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_199180:
    if (ctx->pc == 0x199180u) {
        ctx->pc = 0x199184u;
        goto label_199184;
    }
    ctx->pc = 0x19917Cu;
    {
        const bool branch_taken_0x19917c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19917c) {
            ctx->pc = 0x19918Cu;
            goto label_19918c;
        }
    }
    ctx->pc = 0x199184u;
label_199184:
    // 0x199184: 0xc067f68  jal         func_19FDA0
label_199188:
    if (ctx->pc == 0x199188u) {
        ctx->pc = 0x199188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199184u;
        // 0x199188: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19918Cu;
        goto label_19918c;
    }
    ctx->pc = 0x199184u;
    SET_GPR_U32(ctx, 31, 0x19918Cu);
    ctx->pc = 0x199188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199184u;
    // 0x199188: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199184u, 0x19918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19918Cu;
label_19918c:
    // 0x19918c: 0x0  nop
    ctx->pc = 0x19918cu;
    // NOP
label_199190:
    // 0x199190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199194:
    // 0x199194: 0xc063e08  jal         func_18F820
label_199198:
    if (ctx->pc == 0x199198u) {
        ctx->pc = 0x199198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199194u;
        // 0x199198: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19919Cu;
        goto label_19919c;
    }
    ctx->pc = 0x199194u;
    SET_GPR_U32(ctx, 31, 0x19919Cu);
    ctx->pc = 0x199198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199194u;
    // 0x199198: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199194u, 0x19919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19919Cu;
label_19919c:
    // 0x19919c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1991a0:
    if (ctx->pc == 0x1991A0u) {
        ctx->pc = 0x1991A4u;
        goto label_1991a4;
    }
    ctx->pc = 0x19919Cu;
    {
        const bool branch_taken_0x19919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19919c) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x1991A4u;
label_1991a4:
    // 0x1991a4: 0x0  nop
    ctx->pc = 0x1991a4u;
    // NOP
label_1991a8:
    // 0x1991a8: 0xae800674  sw          $zero, 0x674($s4)
    ctx->pc = 0x1991a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 0));
label_1991ac:
    // 0x1991ac: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x1991acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1991b0:
    // 0x1991b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1991b4:
    // 0x1991b4: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x1991b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
label_1991b8:
    // 0x1991b8: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1991bc:
    // 0x1991bc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1991bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1991c0:
    // 0x1991c0: 0xac4328e8  sw          $v1, 0x28E8($v0)
    ctx->pc = 0x1991c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10472), GPR_U32(ctx, 3));
label_1991c4:
    // 0x1991c4: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1991c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1991c8:
    // 0x1991c8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1991cc:
    if (ctx->pc == 0x1991CCu) {
        ctx->pc = 0x1991D0u;
        goto label_1991d0;
    }
    ctx->pc = 0x1991C8u;
    {
        const bool branch_taken_0x1991c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1991c8) {
            ctx->pc = 0x1991D8u;
            goto label_1991d8;
        }
    }
    ctx->pc = 0x1991D0u;
label_1991d0:
    // 0x1991d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1991d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1991d4:
    // 0x1991d4: 0xae820678  sw          $v0, 0x678($s4)
    ctx->pc = 0x1991d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
label_1991d8:
    // 0x1991d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1991d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1991dc:
    // 0x1991dc: 0xc064c0c  jal         func_193030
label_1991e0:
    if (ctx->pc == 0x1991E0u) {
        ctx->pc = 0x1991E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991DCu;
        // 0x1991e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991E4u;
        goto label_1991e4;
    }
    ctx->pc = 0x1991DCu;
    SET_GPR_U32(ctx, 31, 0x1991E4u);
    ctx->pc = 0x1991E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991DCu;
    // 0x1991e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x1991DCu, 0x1991E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991E4u;
label_1991e4:
    // 0x1991e4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1991e8:
    if (ctx->pc == 0x1991E8u) {
        ctx->pc = 0x1991ECu;
        goto label_1991ec;
    }
    ctx->pc = 0x1991E4u;
    {
        const bool branch_taken_0x1991e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991e4) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x1991ECu;
label_1991ec:
    // 0x1991ec: 0x0  nop
    ctx->pc = 0x1991ecu;
    // NOP
label_1991f0:
    // 0x1991f0: 0xc058018  jal         func_160060
label_1991f4:
    if (ctx->pc == 0x1991F4u) {
        ctx->pc = 0x1991F8u;
        goto label_1991f8;
    }
    ctx->pc = 0x1991F0u;
    SET_GPR_U32(ctx, 31, 0x1991F8u);
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1991F0u, 0x1991F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991F8u;
label_1991f8:
    // 0x1991f8: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x1991f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1991fc:
    // 0x1991fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1991fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_199200:
    // 0x199200: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x199200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
label_199204:
    // 0x199204: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x199204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_199208:
    // 0x199208: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_19920c:
    if (ctx->pc == 0x19920Cu) {
        ctx->pc = 0x199210u;
        goto label_199210;
    }
    ctx->pc = 0x199208u;
    {
        const bool branch_taken_0x199208 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x199208) {
            ctx->pc = 0x19923Cu;
            goto label_19923c;
        }
    }
    ctx->pc = 0x199210u;
label_199210:
    // 0x199210: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_199214:
    // 0x199214: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_199218:
    if (ctx->pc == 0x199218u) {
        ctx->pc = 0x19921Cu;
        goto label_19921c;
    }
    ctx->pc = 0x199214u;
    {
        const bool branch_taken_0x199214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199214) {
            ctx->pc = 0x199228u;
            goto label_199228;
        }
    }
    ctx->pc = 0x19921Cu;
label_19921c:
    // 0x19921c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199220:
    // 0x199220: 0xc067f68  jal         func_19FDA0
label_199224:
    if (ctx->pc == 0x199224u) {
        ctx->pc = 0x199224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199220u;
        // 0x199224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199228u;
        goto label_199228;
    }
    ctx->pc = 0x199220u;
    SET_GPR_U32(ctx, 31, 0x199228u);
    ctx->pc = 0x199224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199220u;
    // 0x199224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199220u, 0x199228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199228u;
label_199228:
    // 0x199228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19922c:
    // 0x19922c: 0xc063e08  jal         func_18F820
label_199230:
    if (ctx->pc == 0x199230u) {
        ctx->pc = 0x199230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19922Cu;
        // 0x199230: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199234u;
        goto label_199234;
    }
    ctx->pc = 0x19922Cu;
    SET_GPR_U32(ctx, 31, 0x199234u);
    ctx->pc = 0x199230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19922Cu;
    // 0x199230: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19922Cu, 0x199234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199234u;
label_199234:
    // 0x199234: 0x10000046  b           . + 4 + (0x46 << 2)
label_199238:
    if (ctx->pc == 0x199238u) {
        ctx->pc = 0x19923Cu;
        goto label_19923c;
    }
    ctx->pc = 0x199234u;
    {
        const bool branch_taken_0x199234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199234) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x19923Cu;
label_19923c:
    // 0x19923c: 0x0  nop
    ctx->pc = 0x19923cu;
    // NOP
label_199240:
    // 0x199240: 0x8e820674  lw          $v0, 0x674($s4)
    ctx->pc = 0x199240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
label_199244:
    // 0x199244: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_199248:
    if (ctx->pc == 0x199248u) {
        ctx->pc = 0x19924Cu;
        goto label_19924c;
    }
    ctx->pc = 0x199244u;
    {
        const bool branch_taken_0x199244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199244) {
            ctx->pc = 0x199284u;
            goto label_199284;
        }
    }
    ctx->pc = 0x19924Cu;
label_19924c:
    // 0x19924c: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_199250:
    // 0x199250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_199254:
    // 0x199254: 0xae820678  sw          $v0, 0x678($s4)
    ctx->pc = 0x199254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1656), GPR_U32(ctx, 2));
label_199258:
    // 0x199258: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_19925c:
    // 0x19925c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_199260:
    if (ctx->pc == 0x199260u) {
        ctx->pc = 0x199264u;
        goto label_199264;
    }
    ctx->pc = 0x19925Cu;
    {
        const bool branch_taken_0x19925c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19925c) {
            ctx->pc = 0x199270u;
            goto label_199270;
        }
    }
    ctx->pc = 0x199264u;
label_199264:
    // 0x199264: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199268:
    // 0x199268: 0xc067f68  jal         func_19FDA0
label_19926c:
    if (ctx->pc == 0x19926Cu) {
        ctx->pc = 0x19926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199268u;
        // 0x19926c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199270u;
        goto label_199270;
    }
    ctx->pc = 0x199268u;
    SET_GPR_U32(ctx, 31, 0x199270u);
    ctx->pc = 0x19926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199268u;
    // 0x19926c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x199268u, 0x199270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199270u;
label_199270:
    // 0x199270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199274:
    // 0x199274: 0xc063e08  jal         func_18F820
label_199278:
    if (ctx->pc == 0x199278u) {
        ctx->pc = 0x199278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199274u;
        // 0x199278: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19927Cu;
        goto label_19927c;
    }
    ctx->pc = 0x199274u;
    SET_GPR_U32(ctx, 31, 0x19927Cu);
    ctx->pc = 0x199278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199274u;
    // 0x199278: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199274u, 0x19927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19927Cu;
label_19927c:
    // 0x19927c: 0x10000034  b           . + 4 + (0x34 << 2)
label_199280:
    if (ctx->pc == 0x199280u) {
        ctx->pc = 0x199284u;
        goto label_199284;
    }
    ctx->pc = 0x19927Cu;
    {
        const bool branch_taken_0x19927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19927c) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x199284u;
label_199284:
    // 0x199284: 0x0  nop
    ctx->pc = 0x199284u;
    // NOP
label_199288:
    // 0x199288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19928c:
    // 0x19928c: 0xc063e08  jal         func_18F820
label_199290:
    if (ctx->pc == 0x199290u) {
        ctx->pc = 0x199290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19928Cu;
        // 0x199290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199294u;
        goto label_199294;
    }
    ctx->pc = 0x19928Cu;
    SET_GPR_U32(ctx, 31, 0x199294u);
    ctx->pc = 0x199290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19928Cu;
    // 0x199290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19928Cu, 0x199294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199294u;
label_199294:
    // 0x199294: 0x1000002e  b           . + 4 + (0x2E << 2)
label_199298:
    if (ctx->pc == 0x199298u) {
        ctx->pc = 0x19929Cu;
        goto label_19929c;
    }
    ctx->pc = 0x199294u;
    {
        const bool branch_taken_0x199294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199294) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x0  nop
    ctx->pc = 0x19929cu;
    // NOP
label_1992a0:
    // 0x1992a0: 0x2516002c  addiu       $s6, $t0, 0x2C
    ctx->pc = 0x1992a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
label_1992a4:
    // 0x1992a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1992a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1992a8:
    // 0x1992a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1992a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1992ac:
    // 0x1992ac: 0x0  nop
    ctx->pc = 0x1992acu;
    // NOP
label_1992b0:
    // 0x1992b0: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_1992b4:
    // 0x1992b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1992b8:
    // 0x1992b8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1992bc:
    if (ctx->pc == 0x1992BCu) {
        ctx->pc = 0x1992C0u;
        goto label_1992c0;
    }
    ctx->pc = 0x1992B8u;
    {
        const bool branch_taken_0x1992b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1992b8) {
            ctx->pc = 0x199350u;
            goto label_199350;
        }
    }
    ctx->pc = 0x1992C0u;
label_1992c0:
    // 0x1992c0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1992c4:
    // 0x1992c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1992c8:
    // 0x1992c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1992cc:
    // 0x1992cc: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1992d0:
    // 0x1992d0: 0x8ca40710  lw          $a0, 0x710($a1)
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1808)));
label_1992d4:
    // 0x1992d4: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_1992d8:
    if (ctx->pc == 0x1992D8u) {
        ctx->pc = 0x1992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992D4u;
        // 0x1992d8: 0x24a60710  addiu       $a2, $a1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992DCu;
        goto label_1992dc;
    }
    ctx->pc = 0x1992D4u;
    {
        const bool branch_taken_0x1992d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1992D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992D4u;
        // 0x1992d8: 0x24a60710  addiu       $a2, $a1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992d4) {
            ctx->pc = 0x199340u;
            goto label_199340;
        }
    }
    ctx->pc = 0x1992DCu;
label_1992dc:
    // 0x1992dc: 0x8ca30790  lw          $v1, 0x790($a1)
    ctx->pc = 0x1992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_1992e0:
    // 0x1992e0: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x1992e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
label_1992e4:
    // 0x1992e4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1992e8:
    if (ctx->pc == 0x1992E8u) {
        ctx->pc = 0x1992ECu;
        goto label_1992ec;
    }
    ctx->pc = 0x1992E4u;
    {
        const bool branch_taken_0x1992e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1992e4) {
            ctx->pc = 0x199340u;
            goto label_199340;
        }
    }
    ctx->pc = 0x1992ECu;
label_1992ec:
    // 0x1992ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1992f0:
    // 0x1992f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1992f4:
    // 0x1992f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1992f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1992f8:
    // 0x1992f8: 0x8ca50690  lw          $a1, 0x690($a1)
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1680)));
label_1992fc:
    // 0x1992fc: 0xc064c20  jal         func_193080
label_199300:
    if (ctx->pc == 0x199300u) {
        ctx->pc = 0x199300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992FCu;
        // 0x199300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199304u;
        goto label_199304;
    }
    ctx->pc = 0x1992FCu;
    SET_GPR_U32(ctx, 31, 0x199304u);
    ctx->pc = 0x199300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992FCu;
    // 0x199300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1992FCu, 0x199304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199304u;
label_199304:
    // 0x199304: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_199308:
    // 0x199308: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19930c:
    // 0x19930c: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x19930cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
label_199310:
    // 0x199310: 0x8e83067c  lw          $v1, 0x67C($s4)
    ctx->pc = 0x199310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
label_199314:
    // 0x199314: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_199318:
    if (ctx->pc == 0x199318u) {
        ctx->pc = 0x19931Cu;
        goto label_19931c;
    }
    ctx->pc = 0x199314u;
    {
        const bool branch_taken_0x199314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199314) {
            ctx->pc = 0x199340u;
            goto label_199340;
        }
    }
    ctx->pc = 0x19931Cu;
label_19931c:
    // 0x19931c: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_199320:
    // 0x199320: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_199324:
    // 0x199324: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_199328:
    if (ctx->pc == 0x199328u) {
        ctx->pc = 0x19932Cu;
        goto label_19932c;
    }
    ctx->pc = 0x199324u;
    {
        const bool branch_taken_0x199324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x199324) {
            ctx->pc = 0x199334u;
            goto label_199334;
        }
    }
    ctx->pc = 0x19932Cu;
label_19932c:
    // 0x19932c: 0xc064fb8  jal         func_193EE0
label_199330:
    if (ctx->pc == 0x199330u) {
        ctx->pc = 0x199330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19932Cu;
        // 0x199330: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199334u;
        goto label_199334;
    }
    ctx->pc = 0x19932Cu;
    SET_GPR_U32(ctx, 31, 0x199334u);
    ctx->pc = 0x199330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19932Cu;
    // 0x199330: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19932Cu, 0x199334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199334u;
label_199334:
    // 0x199334: 0x0  nop
    ctx->pc = 0x199334u;
    // NOP
label_199338:
    // 0x199338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19933c:
    // 0x19933c: 0xae83067c  sw          $v1, 0x67C($s4)
    ctx->pc = 0x19933cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 3));
label_199340:
    // 0x199340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_199344:
    // 0x199344: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x199344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_199348:
    // 0x199348: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_19934c:
    if (ctx->pc == 0x19934Cu) {
        ctx->pc = 0x19934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199348u;
        // 0x19934c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199350u;
        goto label_199350;
    }
    ctx->pc = 0x199348u;
    {
        const bool branch_taken_0x199348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199348u;
        // 0x19934c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199348) {
            ctx->pc = 0x1992ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1992ac;
        }
    }
    ctx->pc = 0x199350u;
label_199350:
    // 0x199350: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_199354:
    // 0x199354: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x199354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_199358:
    // 0x199358: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x199358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_19935c:
    // 0x19935c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x19935cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_199360:
    // 0x199360: 0x1460ff51  bnez        $v1, . + 4 + (-0xAF << 2)
label_199364:
    if (ctx->pc == 0x199364u) {
        ctx->pc = 0x199364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199360u;
        // 0x199364: 0x2933021  addu        $a2, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199368u;
        goto label_199368;
    }
    ctx->pc = 0x199360u;
    {
        const bool branch_taken_0x199360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199360u;
        // 0x199364: 0x2933021  addu        $a2, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199360) {
            ctx->pc = 0x1990A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1990a8;
        }
    }
    ctx->pc = 0x199368u;
label_199368:
    // 0x199368: 0x8e830810  lw          $v1, 0x810($s4)
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_19936c:
    // 0x19936c: 0x10600173  beqz        $v1, . + 4 + (0x173 << 2)
label_199370:
    if (ctx->pc == 0x199370u) {
        ctx->pc = 0x199374u;
        goto label_199374;
    }
    ctx->pc = 0x19936Cu;
    {
        const bool branch_taken_0x19936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19936c) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x199374u;
label_199374:
    // 0x199374: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
label_199378:
    // 0x199378: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19937c:
    // 0x19937c: 0x1483016f  bne         $a0, $v1, . + 4 + (0x16F << 2)
label_199380:
    if (ctx->pc == 0x199380u) {
        ctx->pc = 0x199384u;
        goto label_199384;
    }
    ctx->pc = 0x19937Cu;
    {
        const bool branch_taken_0x19937c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19937c) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x199384u;
label_199384:
    // 0x199384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199388:
    // 0x199388: 0xae820934  sw          $v0, 0x934($s4)
    ctx->pc = 0x199388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2356), GPR_U32(ctx, 2));
label_19938c:
    // 0x19938c: 0xc058018  jal         func_160060
label_199390:
    if (ctx->pc == 0x199390u) {
        ctx->pc = 0x199390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19938Cu;
        // 0x199390: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199394u;
        goto label_199394;
    }
    ctx->pc = 0x19938Cu;
    SET_GPR_U32(ctx, 31, 0x199394u);
    ctx->pc = 0x199390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19938Cu;
    // 0x199390: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19938Cu, 0x199394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199394u;
label_199394:
    // 0x199394: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_199398:
    // 0x199398: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_19939c:
    // 0x19939c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x19939cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1993a0:
    // 0x1993a0: 0xc064bdc  jal         func_192F70
label_1993a4:
    if (ctx->pc == 0x1993A4u) {
        ctx->pc = 0x1993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993A0u;
        // 0x1993a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993A8u;
        goto label_1993a8;
    }
    ctx->pc = 0x1993A0u;
    SET_GPR_U32(ctx, 31, 0x1993A8u);
    ctx->pc = 0x1993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993A0u;
    // 0x1993a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F70u, 0x1993A0u, 0x1993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993A8u;
label_1993a8:
    // 0x1993a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1993a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1993ac:
    // 0x1993ac: 0xc063e08  jal         func_18F820
label_1993b0:
    if (ctx->pc == 0x1993B0u) {
        ctx->pc = 0x1993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993ACu;
        // 0x1993b0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993B4u;
        goto label_1993b4;
    }
    ctx->pc = 0x1993ACu;
    SET_GPR_U32(ctx, 31, 0x1993B4u);
    ctx->pc = 0x1993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993ACu;
    // 0x1993b0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1993ACu, 0x1993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993B4u;
label_1993b4:
    // 0x1993b4: 0x10000161  b           . + 4 + (0x161 << 2)
label_1993b8:
    if (ctx->pc == 0x1993B8u) {
        ctx->pc = 0x1993BCu;
        goto label_1993bc;
    }
    ctx->pc = 0x1993B4u;
    {
        const bool branch_taken_0x1993b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993b4) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1993BCu;
label_1993bc:
    // 0x1993bc: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1993c0:
    // 0x1993c0: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1993c4:
    // 0x1993c4: 0xc064ee0  jal         func_193B80
label_1993c8:
    if (ctx->pc == 0x1993C8u) {
        ctx->pc = 0x1993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993C4u;
        // 0x1993c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993CCu;
        goto label_1993cc;
    }
    ctx->pc = 0x1993C4u;
    SET_GPR_U32(ctx, 31, 0x1993CCu);
    ctx->pc = 0x1993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993C4u;
    // 0x1993c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1993C4u, 0x1993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993CCu;
label_1993cc:
    // 0x1993cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1993ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1993d0:
    // 0x1993d0: 0xc063e08  jal         func_18F820
label_1993d4:
    if (ctx->pc == 0x1993D4u) {
        ctx->pc = 0x1993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993D0u;
        // 0x1993d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1993D8u;
        goto label_1993d8;
    }
    ctx->pc = 0x1993D0u;
    SET_GPR_U32(ctx, 31, 0x1993D8u);
    ctx->pc = 0x1993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993D0u;
    // 0x1993d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1993D0u, 0x1993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993D8u;
label_1993d8:
    // 0x1993d8: 0x10000158  b           . + 4 + (0x158 << 2)
label_1993dc:
    if (ctx->pc == 0x1993DCu) {
        ctx->pc = 0x1993E0u;
        goto label_1993e0;
    }
    ctx->pc = 0x1993D8u;
    {
        const bool branch_taken_0x1993d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993d8) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1993E0u;
label_1993e0:
    // 0x1993e0: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1993e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_1993e4:
    // 0x1993e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1993e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1993e8:
    // 0x1993e8: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1993ec:
    // 0x1993ec: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1993ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1993f0:
    // 0x1993f0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1993f4:
    // 0x1993f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1993f8:
    // 0x1993f8: 0xc0649c8  jal         func_192720
label_1993fc:
    if (ctx->pc == 0x1993FCu) {
        ctx->pc = 0x1993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993F8u;
        // 0x1993fc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199400u;
        goto label_199400;
    }
    ctx->pc = 0x1993F8u;
    SET_GPR_U32(ctx, 31, 0x199400u);
    ctx->pc = 0x1993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993F8u;
    // 0x1993fc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192720u, 0x1993F8u, 0x199400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199400u;
label_199400:
    // 0x199400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199404:
    // 0x199404: 0xc0628f0  jal         func_18A3C0
label_199408:
    if (ctx->pc == 0x199408u) {
        ctx->pc = 0x199408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199404u;
        // 0x199408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19940Cu;
        goto label_19940c;
    }
    ctx->pc = 0x199404u;
    SET_GPR_U32(ctx, 31, 0x19940Cu);
    ctx->pc = 0x199408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199404u;
    // 0x199408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x199404u, 0x19940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19940Cu;
label_19940c:
    // 0x19940c: 0xc0649c8  jal         func_192720
label_199410:
    if (ctx->pc == 0x199410u) {
        ctx->pc = 0x199410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19940Cu;
        // 0x199410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199414u;
        goto label_199414;
    }
    ctx->pc = 0x19940Cu;
    SET_GPR_U32(ctx, 31, 0x199414u);
    ctx->pc = 0x199410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19940Cu;
    // 0x199410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192720u, 0x19940Cu, 0x199414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199414u;
label_199414:
    // 0x199414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199418:
    // 0x199418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19941c:
    // 0x19941c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199420:
    // 0x199420: 0x0  nop
    ctx->pc = 0x199420u;
    // NOP
label_199424:
    // 0x199424: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x199424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_199428:
    // 0x199428: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x199428u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_19942c:
    // 0x19942c: 0xc062860  jal         func_18A180
label_199430:
    if (ctx->pc == 0x199430u) {
        ctx->pc = 0x199430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19942Cu;
        // 0x199430: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199434u;
        goto label_199434;
    }
    ctx->pc = 0x19942Cu;
    SET_GPR_U32(ctx, 31, 0x199434u);
    ctx->pc = 0x199430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19942Cu;
    // 0x199430: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x19942Cu, 0x199434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199434u;
label_199434:
    // 0x199434: 0xc0649c8  jal         func_192720
label_199438:
    if (ctx->pc == 0x199438u) {
        ctx->pc = 0x199438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199434u;
        // 0x199438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19943Cu;
        goto label_19943c;
    }
    ctx->pc = 0x199434u;
    SET_GPR_U32(ctx, 31, 0x19943Cu);
    ctx->pc = 0x199438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199434u;
    // 0x199438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192720u, 0x199434u, 0x19943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19943Cu;
label_19943c:
    // 0x19943c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199440:
    // 0x199440: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_199444:
    // 0x199444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x199444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199448:
    // 0x199448: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19944c:
    // 0x19944c: 0xc06282c  jal         func_18A0B0
label_199450:
    if (ctx->pc == 0x199450u) {
        ctx->pc = 0x199450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19944Cu;
        // 0x199450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199454u;
        goto label_199454;
    }
    ctx->pc = 0x19944Cu;
    SET_GPR_U32(ctx, 31, 0x199454u);
    ctx->pc = 0x199450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19944Cu;
    // 0x199450: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x19944Cu, 0x199454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199454u;
label_199454:
    // 0x199454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199458:
    // 0x199458: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x199458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_19945c:
    // 0x19945c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19945cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199460:
    // 0x199460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199464:
    // 0x199464: 0xc0657e0  jal         func_195F80
label_199468:
    if (ctx->pc == 0x199468u) {
        ctx->pc = 0x199468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199464u;
        // 0x199468: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19946Cu;
        goto label_19946c;
    }
    ctx->pc = 0x199464u;
    SET_GPR_U32(ctx, 31, 0x19946Cu);
    ctx->pc = 0x199468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199464u;
    // 0x199468: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195F80u, 0x199464u, 0x19946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19946Cu;
label_19946c:
    // 0x19946c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19946cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_199470:
    // 0x199470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199474:
    // 0x199474: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_199478:
    // 0x199478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19947c:
    // 0x19947c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19947cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199480:
    // 0x199480: 0xc065834  jal         func_1960D0
label_199484:
    if (ctx->pc == 0x199484u) {
        ctx->pc = 0x199484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199480u;
        // 0x199484: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199488u;
        goto label_199488;
    }
    ctx->pc = 0x199480u;
    SET_GPR_U32(ctx, 31, 0x199488u);
    ctx->pc = 0x199484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199480u;
    // 0x199484: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x199480u, 0x199488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199488u;
label_199488:
    // 0x199488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19948c:
    // 0x19948c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x19948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_199490:
    // 0x199490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199494:
    // 0x199494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199498:
    // 0x199498: 0xc0657e0  jal         func_195F80
label_19949c:
    if (ctx->pc == 0x19949Cu) {
        ctx->pc = 0x19949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199498u;
        // 0x19949c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994A0u;
        goto label_1994a0;
    }
    ctx->pc = 0x199498u;
    SET_GPR_U32(ctx, 31, 0x1994A0u);
    ctx->pc = 0x19949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199498u;
    // 0x19949c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195F80u, 0x199498u, 0x1994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994A0u;
label_1994a0:
    // 0x1994a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1994a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1994a4:
    // 0x1994a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1994a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1994a8:
    // 0x1994a8: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x1994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_1994ac:
    // 0x1994ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1994acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1994b0:
    // 0x1994b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1994b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1994b4:
    // 0x1994b4: 0xc065834  jal         func_1960D0
label_1994b8:
    if (ctx->pc == 0x1994B8u) {
        ctx->pc = 0x1994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994B4u;
        // 0x1994b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994BCu;
        goto label_1994bc;
    }
    ctx->pc = 0x1994B4u;
    SET_GPR_U32(ctx, 31, 0x1994BCu);
    ctx->pc = 0x1994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994B4u;
    // 0x1994b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x1994B4u, 0x1994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994BCu;
label_1994bc:
    // 0x1994bc: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1994c0:
    // 0x1994c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1994c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1994c4:
    // 0x1994c4: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
label_1994c8:
    if (ctx->pc == 0x1994C8u) {
        ctx->pc = 0x1994CCu;
        goto label_1994cc;
    }
    ctx->pc = 0x1994C4u;
    {
        const bool branch_taken_0x1994c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1994c4) {
            ctx->pc = 0x1994E4u;
            goto label_1994e4;
        }
    }
    ctx->pc = 0x1994CCu;
label_1994cc:
    // 0x1994cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1994ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1994d0:
    // 0x1994d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1994d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1994d4:
    // 0x1994d4: 0x24a50108  addiu       $a1, $a1, 0x108
    ctx->pc = 0x1994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
label_1994d8:
    // 0x1994d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1994d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1994dc:
    // 0x1994dc: 0xc065834  jal         func_1960D0
label_1994e0:
    if (ctx->pc == 0x1994E0u) {
        ctx->pc = 0x1994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994DCu;
        // 0x1994e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994E4u;
        goto label_1994e4;
    }
    ctx->pc = 0x1994DCu;
    SET_GPR_U32(ctx, 31, 0x1994E4u);
    ctx->pc = 0x1994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994DCu;
    // 0x1994e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x1994DCu, 0x1994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994E4u;
label_1994e4:
    // 0x1994e4: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1994e8:
    // 0x1994e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1994e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1994ec:
    // 0x1994ec: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1994f0:
    if (ctx->pc == 0x1994F0u) {
        ctx->pc = 0x1994F4u;
        goto label_1994f4;
    }
    ctx->pc = 0x1994ECu;
    {
        const bool branch_taken_0x1994ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1994ec) {
            ctx->pc = 0x199510u;
            goto label_199510;
        }
    }
    ctx->pc = 0x1994F4u;
label_1994f4:
    // 0x1994f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1994f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1994f8:
    // 0x1994f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1994f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1994fc:
    // 0x1994fc: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1994fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
label_199500:
    // 0x199500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x199500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199504:
    // 0x199504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199508:
    // 0x199508: 0xc065834  jal         func_1960D0
label_19950c:
    if (ctx->pc == 0x19950Cu) {
        ctx->pc = 0x19950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199508u;
        // 0x19950c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199510u;
        goto label_199510;
    }
    ctx->pc = 0x199508u;
    SET_GPR_U32(ctx, 31, 0x199510u);
    ctx->pc = 0x19950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199508u;
    // 0x19950c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x199508u, 0x199510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199510u;
label_199510:
    // 0x199510: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x199510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_199514:
    // 0x199514: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_199518:
    // 0x199518: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_19951c:
    if (ctx->pc == 0x19951Cu) {
        ctx->pc = 0x199520u;
        goto label_199520;
    }
    ctx->pc = 0x199518u;
    {
        const bool branch_taken_0x199518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199518) {
            ctx->pc = 0x19953Cu;
            goto label_19953c;
        }
    }
    ctx->pc = 0x199520u;
label_199520:
    // 0x199520: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_199524:
    // 0x199524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199528:
    // 0x199528: 0x24a50118  addiu       $a1, $a1, 0x118
    ctx->pc = 0x199528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
label_19952c:
    // 0x19952c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199530:
    // 0x199530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199534:
    // 0x199534: 0xc065834  jal         func_1960D0
label_199538:
    if (ctx->pc == 0x199538u) {
        ctx->pc = 0x199538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199534u;
        // 0x199538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19953Cu;
        goto label_19953c;
    }
    ctx->pc = 0x199534u;
    SET_GPR_U32(ctx, 31, 0x19953Cu);
    ctx->pc = 0x199538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199534u;
    // 0x199538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1960D0u, 0x199534u, 0x19953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19953Cu;
label_19953c:
    // 0x19953c: 0xc04b220  jal         func_12C880
label_199540:
    if (ctx->pc == 0x199540u) {
        ctx->pc = 0x199544u;
        goto label_199544;
    }
    ctx->pc = 0x19953Cu;
    SET_GPR_U32(ctx, 31, 0x199544u);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x19953Cu, 0x199544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199544u;
label_199544:
    // 0x199544: 0x3c033f28  lui         $v1, 0x3F28
    ctx->pc = 0x199544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16168 << 16));
label_199548:
    // 0x199548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19954c:
    // 0x19954c: 0x3462f5c3  ori         $v0, $v1, 0xF5C3
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
label_199550:
    // 0x199550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x199550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199554:
    // 0x199554: 0xc04b5f0  jal         func_12D7C0
label_199558:
    if (ctx->pc == 0x199558u) {
        ctx->pc = 0x19955Cu;
        goto label_19955c;
    }
    ctx->pc = 0x199554u;
    SET_GPR_U32(ctx, 31, 0x19955Cu);
    ctx->pc = 0x12D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7C0u, 0x199554u, 0x19955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19955Cu;
label_19955c:
    // 0x19955c: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x19955cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_199560:
    // 0x199560: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_199564:
    if (ctx->pc == 0x199564u) {
        ctx->pc = 0x199564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199560u;
        // 0x199564: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199568u;
        goto label_199568;
    }
    ctx->pc = 0x199560u;
    {
        const bool branch_taken_0x199560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199560u;
        // 0x199564: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199560) {
            ctx->pc = 0x199574u;
            goto label_199574;
        }
    }
    ctx->pc = 0x199568u;
label_199568:
    // 0x199568: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x199568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_19956c:
    // 0x19956c: 0x90242eb5  lbu         $a0, 0x2EB5($at)
    ctx->pc = 0x19956cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11957)));
label_199570:
    // 0x199570: 0x0  nop
    ctx->pc = 0x199570u;
    // NOP
label_199574:
    // 0x199574: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_199578:
    if (ctx->pc == 0x199578u) {
        ctx->pc = 0x199578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199574u;
        // 0x199578: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19957Cu;
        goto label_19957c;
    }
    ctx->pc = 0x199574u;
    {
        const bool branch_taken_0x199574 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x199578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199574u;
        // 0x199578: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199574) {
            ctx->pc = 0x199588u;
            goto label_199588;
        }
    }
    ctx->pc = 0x19957Cu;
label_19957c:
    // 0x19957c: 0x1000000a  b           . + 4 + (0xA << 2)
label_199580:
    if (ctx->pc == 0x199580u) {
        ctx->pc = 0x199580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19957Cu;
        // 0x199580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199584u;
        goto label_199584;
    }
    ctx->pc = 0x19957Cu;
    {
        const bool branch_taken_0x19957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19957Cu;
        // 0x199580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19957c) {
            ctx->pc = 0x1995A8u;
            goto label_1995a8;
        }
    }
    ctx->pc = 0x199584u;
label_199584:
    // 0x199584: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x199584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_199588:
    // 0x199588: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_19958c:
    // 0x19958c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199590:
    // 0x199590: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x199590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_199594:
    // 0x199594: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_199598:
    if (ctx->pc == 0x199598u) {
        ctx->pc = 0x19959Cu;
        goto label_19959c;
    }
    ctx->pc = 0x199594u;
    {
        const bool branch_taken_0x199594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x199594) {
            ctx->pc = 0x1995A4u;
            goto label_1995a4;
        }
    }
    ctx->pc = 0x19959Cu;
label_19959c:
    // 0x19959c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1995a0:
    if (ctx->pc == 0x1995A0u) {
        ctx->pc = 0x1995A4u;
        goto label_1995a4;
    }
    ctx->pc = 0x19959Cu;
    {
        const bool branch_taken_0x19959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19959c) {
            ctx->pc = 0x1995A8u;
            goto label_1995a8;
        }
    }
    ctx->pc = 0x1995A4u;
label_1995a4:
    // 0x1995a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1995a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1995a8:
    // 0x1995a8: 0x108000e4  beqz        $a0, . + 4 + (0xE4 << 2)
label_1995ac:
    if (ctx->pc == 0x1995ACu) {
        ctx->pc = 0x1995B0u;
        goto label_1995b0;
    }
    ctx->pc = 0x1995A8u;
    {
        const bool branch_taken_0x1995a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995a8) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1995B0u;
label_1995b0:
    // 0x1995b0: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1995b4:
    // 0x1995b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1995b8:
    // 0x1995b8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1995bc:
    if (ctx->pc == 0x1995BCu) {
        ctx->pc = 0x1995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995B8u;
        // 0x1995bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995C0u;
        goto label_1995c0;
    }
    ctx->pc = 0x1995B8u;
    {
        const bool branch_taken_0x1995b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995B8u;
        // 0x1995bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995b8) {
            ctx->pc = 0x1995D8u;
            goto label_1995d8;
        }
    }
    ctx->pc = 0x1995C0u;
label_1995c0:
    // 0x1995c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1995c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1995c4:
    // 0x1995c4: 0xc063e08  jal         func_18F820
label_1995c8:
    if (ctx->pc == 0x1995C8u) {
        ctx->pc = 0x1995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995C4u;
        // 0x1995c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995CCu;
        goto label_1995cc;
    }
    ctx->pc = 0x1995C4u;
    SET_GPR_U32(ctx, 31, 0x1995CCu);
    ctx->pc = 0x1995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995C4u;
    // 0x1995c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1995C4u, 0x1995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995CCu;
label_1995cc:
    // 0x1995cc: 0x100000db  b           . + 4 + (0xDB << 2)
label_1995d0:
    if (ctx->pc == 0x1995D0u) {
        ctx->pc = 0x1995D4u;
        goto label_1995d4;
    }
    ctx->pc = 0x1995CCu;
    {
        const bool branch_taken_0x1995cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995cc) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1995D4u;
label_1995d4:
    // 0x1995d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1995d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1995d8:
    // 0x1995d8: 0xc063e08  jal         func_18F820
label_1995dc:
    if (ctx->pc == 0x1995DCu) {
        ctx->pc = 0x1995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995D8u;
        // 0x1995dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995E0u;
        goto label_1995e0;
    }
    ctx->pc = 0x1995D8u;
    SET_GPR_U32(ctx, 31, 0x1995E0u);
    ctx->pc = 0x1995DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995D8u;
    // 0x1995dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1995D8u, 0x1995E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995E0u;
label_1995e0:
    // 0x1995e0: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_1995e4:
    if (ctx->pc == 0x1995E4u) {
        ctx->pc = 0x1995E8u;
        goto label_1995e8;
    }
    ctx->pc = 0x1995E0u;
    {
        const bool branch_taken_0x1995e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995e0) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1995E8u;
label_1995e8:
    // 0x1995e8: 0xc058018  jal         func_160060
label_1995ec:
    if (ctx->pc == 0x1995ECu) {
        ctx->pc = 0x1995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995E8u;
        // 0x1995ec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995F0u;
        goto label_1995f0;
    }
    ctx->pc = 0x1995E8u;
    SET_GPR_U32(ctx, 31, 0x1995F0u);
    ctx->pc = 0x1995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995E8u;
    // 0x1995ec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1995E8u, 0x1995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995F0u;
label_1995f0:
    // 0x1995f0: 0x8e880680  lw          $t0, 0x680($s4)
    ctx->pc = 0x1995f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_1995f4:
    // 0x1995f4: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_1995f8:
    // 0x1995f8: 0x1502000c  bne         $t0, $v0, . + 4 + (0xC << 2)
label_1995fc:
    if (ctx->pc == 0x1995FCu) {
        ctx->pc = 0x199600u;
        goto label_199600;
    }
    ctx->pc = 0x1995F8u;
    {
        const bool branch_taken_0x1995f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1995f8) {
            ctx->pc = 0x19962Cu;
            goto label_19962c;
        }
    }
    ctx->pc = 0x199600u;
label_199600:
    // 0x199600: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_199604:
    // 0x199604: 0x26840820  addiu       $a0, $s4, 0x820
    ctx->pc = 0x199604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
label_199608:
    // 0x199608: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x199608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_19960c:
    // 0x19960c: 0xdc452818  ld          $a1, 0x2818($v0)
    ctx->pc = 0x19960cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_199610:
    // 0x199610: 0xc069698  jal         func_1A5A60
label_199614:
    if (ctx->pc == 0x199614u) {
        ctx->pc = 0x199614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199610u;
        // 0x199614: 0x24077530  addiu       $a3, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199618u;
        goto label_199618;
    }
    ctx->pc = 0x199610u;
    SET_GPR_U32(ctx, 31, 0x199618u);
    ctx->pc = 0x199614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199610u;
    // 0x199614: 0x24077530  addiu       $a3, $zero, 0x7530 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A60u, 0x199610u, 0x199618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199618u;
label_199618:
    // 0x199618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19961c:
    // 0x19961c: 0xc063e08  jal         func_18F820
label_199620:
    if (ctx->pc == 0x199620u) {
        ctx->pc = 0x199620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19961Cu;
        // 0x199620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199624u;
        goto label_199624;
    }
    ctx->pc = 0x19961Cu;
    SET_GPR_U32(ctx, 31, 0x199624u);
    ctx->pc = 0x199620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19961Cu;
    // 0x199620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19961Cu, 0x199624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199624u;
label_199624:
    // 0x199624: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_199628:
    if (ctx->pc == 0x199628u) {
        ctx->pc = 0x19962Cu;
        goto label_19962c;
    }
    ctx->pc = 0x199624u;
    {
        const bool branch_taken_0x199624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199624) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x19962Cu;
label_19962c:
    // 0x19962c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_199630:
    // 0x199630: 0x26840820  addiu       $a0, $s4, 0x820
    ctx->pc = 0x199630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
label_199634:
    // 0x199634: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_199638:
    // 0x199638: 0xdc452818  ld          $a1, 0x2818($v0)
    ctx->pc = 0x199638u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
label_19963c:
    // 0x19963c: 0xc069698  jal         func_1A5A60
label_199640:
    if (ctx->pc == 0x199640u) {
        ctx->pc = 0x199640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19963Cu;
        // 0x199640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199644u;
        goto label_199644;
    }
    ctx->pc = 0x19963Cu;
    SET_GPR_U32(ctx, 31, 0x199644u);
    ctx->pc = 0x199640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19963Cu;
    // 0x199640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A60u, 0x19963Cu, 0x199644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199644u;
label_199644:
    // 0x199644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199648:
    // 0x199648: 0xc063e08  jal         func_18F820
label_19964c:
    if (ctx->pc == 0x19964Cu) {
        ctx->pc = 0x19964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199648u;
        // 0x19964c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199650u;
        goto label_199650;
    }
    ctx->pc = 0x199648u;
    SET_GPR_U32(ctx, 31, 0x199650u);
    ctx->pc = 0x19964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199648u;
    // 0x19964c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199648u, 0x199650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199650u;
label_199650:
    // 0x199650: 0x100000ba  b           . + 4 + (0xBA << 2)
label_199654:
    if (ctx->pc == 0x199654u) {
        ctx->pc = 0x199658u;
        goto label_199658;
    }
    ctx->pc = 0x199650u;
    {
        const bool branch_taken_0x199650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199650) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x199658u;
label_199658:
    // 0x199658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19965c:
    // 0x19965c: 0xc063e08  jal         func_18F820
label_199660:
    if (ctx->pc == 0x199660u) {
        ctx->pc = 0x199664u;
        goto label_199664;
    }
    ctx->pc = 0x19965Cu;
    SET_GPR_U32(ctx, 31, 0x199664u);
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19965Cu, 0x199664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199664u;
label_199664:
    // 0x199664: 0x8e820930  lw          $v0, 0x930($s4)
    ctx->pc = 0x199664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2352)));
label_199668:
    // 0x199668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19966c:
    // 0x19966c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19966cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199670:
    // 0x199670: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x199670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_199674:
    // 0x199674: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x199674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_199678:
    // 0x199678: 0xc064f7c  jal         func_193DF0
label_19967c:
    if (ctx->pc == 0x19967Cu) {
        ctx->pc = 0x19967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199678u;
        // 0x19967c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199680u;
        goto label_199680;
    }
    ctx->pc = 0x199678u;
    SET_GPR_U32(ctx, 31, 0x199680u);
    ctx->pc = 0x19967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199678u;
    // 0x19967c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x199678u, 0x199680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199680u;
label_199680:
    // 0x199680: 0x8e820930  lw          $v0, 0x930($s4)
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2352)));
label_199684:
    // 0x199684: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x199684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_199688:
    // 0x199688: 0xc064ee0  jal         func_193B80
label_19968c:
    if (ctx->pc == 0x19968Cu) {
        ctx->pc = 0x19968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199688u;
        // 0x19968c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199690u;
        goto label_199690;
    }
    ctx->pc = 0x199688u;
    SET_GPR_U32(ctx, 31, 0x199690u);
    ctx->pc = 0x19968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199688u;
    // 0x19968c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x199688u, 0x199690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199690u;
label_199690:
    // 0x199690: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x199690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199694:
    // 0x199694: 0x3c02433b  lui         $v0, 0x433B
    ctx->pc = 0x199694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17211 << 16));
label_199698:
    // 0x199698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19969c:
    // 0x19969c: 0x0  nop
    ctx->pc = 0x19969cu;
    // NOP
label_1996a0:
    // 0x1996a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1996a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1996a4:
    // 0x1996a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1996a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1996a8:
    // 0x1996a8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1996a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1996ac:
    // 0x1996ac: 0x0  nop
    ctx->pc = 0x1996acu;
    // NOP
label_1996b0:
    // 0x1996b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_1996b4:
    if (ctx->pc == 0x1996B4u) {
        ctx->pc = 0x1996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996B0u;
        // 0x1996b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996B8u;
        goto label_1996b8;
    }
    ctx->pc = 0x1996B0u;
    {
        const bool branch_taken_0x1996b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996B0u;
        // 0x1996b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996b0) {
            ctx->pc = 0x1996C0u;
            goto label_1996c0;
        }
    }
    ctx->pc = 0x1996B8u;
label_1996b8:
    // 0x1996b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1996b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1996bc:
    // 0x1996bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1996c0:
    // 0x1996c0: 0xc063de0  jal         func_18F780
label_1996c4:
    if (ctx->pc == 0x1996C4u) {
        ctx->pc = 0x1996C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996C0u;
        // 0x1996c4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996C8u;
        goto label_1996c8;
    }
    ctx->pc = 0x1996C0u;
    SET_GPR_U32(ctx, 31, 0x1996C8u);
    ctx->pc = 0x1996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996C0u;
    // 0x1996c4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1996C0u, 0x1996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996C8u;
label_1996c8:
    // 0x1996c8: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1996cc:
    if (ctx->pc == 0x1996CCu) {
        ctx->pc = 0x1996D0u;
        goto label_1996d0;
    }
    ctx->pc = 0x1996C8u;
    {
        const bool branch_taken_0x1996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996c8) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1996D0u;
label_1996d0:
    // 0x1996d0: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x1996d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1996d4:
    // 0x1996d4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1996d8:
    // 0x1996d8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1996dc:
    if (ctx->pc == 0x1996DCu) {
        ctx->pc = 0x1996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996D8u;
        // 0x1996dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996E0u;
        goto label_1996e0;
    }
    ctx->pc = 0x1996D8u;
    {
        const bool branch_taken_0x1996d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996D8u;
        // 0x1996dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996d8) {
            ctx->pc = 0x1996ECu;
            goto label_1996ec;
        }
    }
    ctx->pc = 0x1996E0u;
label_1996e0:
    // 0x1996e0: 0xc064fb8  jal         func_193EE0
label_1996e4:
    if (ctx->pc == 0x1996E4u) {
        ctx->pc = 0x1996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996E0u;
        // 0x1996e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996E8u;
        goto label_1996e8;
    }
    ctx->pc = 0x1996E0u;
    SET_GPR_U32(ctx, 31, 0x1996E8u);
    ctx->pc = 0x1996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996E0u;
    // 0x1996e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1996E0u, 0x1996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996E8u;
label_1996e8:
    // 0x1996e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1996e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1996ec:
    // 0x1996ec: 0xc063e08  jal         func_18F820
label_1996f0:
    if (ctx->pc == 0x1996F0u) {
        ctx->pc = 0x1996F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996ECu;
        // 0x1996f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996F4u;
        goto label_1996f4;
    }
    ctx->pc = 0x1996ECu;
    SET_GPR_U32(ctx, 31, 0x1996F4u);
    ctx->pc = 0x1996F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996ECu;
    // 0x1996f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1996ECu, 0x1996F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996F4u;
label_1996f4:
    // 0x1996f4: 0x10000091  b           . + 4 + (0x91 << 2)
label_1996f8:
    if (ctx->pc == 0x1996F8u) {
        ctx->pc = 0x1996FCu;
        goto label_1996fc;
    }
    ctx->pc = 0x1996F4u;
    {
        const bool branch_taken_0x1996f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996f4) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1996FCu;
label_1996fc:
    // 0x1996fc: 0x26840820  addiu       $a0, $s4, 0x820
    ctx->pc = 0x1996fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
label_199700:
    // 0x199700: 0xc06977c  jal         func_1A5DF0
label_199704:
    if (ctx->pc == 0x199704u) {
        ctx->pc = 0x199708u;
        goto label_199708;
    }
    ctx->pc = 0x199700u;
    SET_GPR_U32(ctx, 31, 0x199708u);
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x199700u, 0x199708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199708u;
label_199708:
    // 0x199708: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_19970c:
    if (ctx->pc == 0x19970Cu) {
        ctx->pc = 0x199710u;
        goto label_199710;
    }
    ctx->pc = 0x199708u;
    {
        const bool branch_taken_0x199708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199708) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x199710u;
label_199710:
    // 0x199710: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_199714:
    // 0x199714: 0x8e850680  lw          $a1, 0x680($s4)
    ctx->pc = 0x199714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_199718:
    // 0x199718: 0x8cc328dc  lw          $v1, 0x28DC($a2)
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
label_19971c:
    // 0x19971c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x19971cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_199720:
    // 0x199720: 0x84c228d8  lh          $v0, 0x28D8($a2)
    ctx->pc = 0x199720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
label_199724:
    // 0x199724: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x199724u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_199728:
    // 0x199728: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x199728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19972c:
    // 0x19972c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_199730:
    // 0x199730: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x199730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_199734:
    // 0x199734: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x199734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_199738:
    // 0x199738: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19973c:
    // 0x19973c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_199740:
    // 0x199740: 0x2812  mflo        $a1
    ctx->pc = 0x199740u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_199744:
    // 0x199744: 0xdc622818  ld          $v0, 0x2818($v1)
    ctx->pc = 0x199744u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10264)));
label_199748:
    // 0x199748: 0x2010  mfhi        $a0
    ctx->pc = 0x199748u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_19974c:
    // 0x19974c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_199750:
    // 0x199750: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x199750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_199754:
    // 0x199754: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_199758:
    // 0x199758: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x199758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_19975c:
    // 0x19975c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x19975cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_199760:
    // 0x199760: 0xfc622818  sd          $v0, 0x2818($v1)
    ctx->pc = 0x199760u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 10264), GPR_U64(ctx, 2));
label_199764:
    // 0x199764: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x199764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_199768:
    // 0x199768: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
label_19976c:
    // 0x19976c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_199770:
    if (ctx->pc == 0x199770u) {
        ctx->pc = 0x199774u;
        goto label_199774;
    }
    ctx->pc = 0x19976Cu;
    {
        const bool branch_taken_0x19976c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19976c) {
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x199774u;
label_199774:
    // 0x199774: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x199774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_199778:
    // 0x199778: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
label_19977c:
    // 0x19977c: 0x84c228d8  lh          $v0, 0x28D8($a2)
    ctx->pc = 0x19977cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
label_199780:
    // 0x199780: 0x51978  dsll        $v1, $a1, 5
    ctx->pc = 0x199780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 5);
label_199784:
    // 0x199784: 0x65202f  dsubu       $a0, $v1, $a1
    ctx->pc = 0x199784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_199788:
    // 0x199788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x199788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_19978c:
    // 0x19978c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_199790:
    // 0x199790: 0x410b8  dsll        $v0, $a0, 2
    ctx->pc = 0x199790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 2);
label_199794:
    // 0x199794: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x199794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_199798:
    // 0x199798: 0xdc622818  ld          $v0, 0x2818($v1)
    ctx->pc = 0x199798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 10264)));
label_19979c:
    // 0x19979c: 0x52138  dsll        $a0, $a1, 4
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 4);
label_1997a0:
    // 0x1997a0: 0x85202f  dsubu       $a0, $a0, $a1
    ctx->pc = 0x1997a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_1997a4:
    // 0x1997a4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x1997a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_1997a8:
    // 0x1997a8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1997ac:
    // 0x1997ac: 0xfc622818  sd          $v0, 0x2818($v1)
    ctx->pc = 0x1997acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 10264), GPR_U64(ctx, 2));
label_1997b0:
    // 0x1997b0: 0x8e860680  lw          $a2, 0x680($s4)
    ctx->pc = 0x1997b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
label_1997b4:
    // 0x1997b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1997b8:
    // 0x1997b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1997bc:
    // 0x1997bc: 0xc064a88  jal         func_192A20
label_1997c0:
    if (ctx->pc == 0x1997C0u) {
        ctx->pc = 0x1997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997BCu;
        // 0x1997c0: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997C4u;
        goto label_1997c4;
    }
    ctx->pc = 0x1997BCu;
    SET_GPR_U32(ctx, 31, 0x1997C4u);
    ctx->pc = 0x1997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997BCu;
    // 0x1997c0: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1997BCu, 0x1997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997C4u;
label_1997c4:
    // 0x1997c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1997c8:
    // 0x1997c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1997c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1997cc:
    // 0x1997cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1997ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1997d0:
    // 0x1997d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1997d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1997d4:
    // 0x1997d4: 0xc064f00  jal         func_193C00
label_1997d8:
    if (ctx->pc == 0x1997D8u) {
        ctx->pc = 0x1997D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997D4u;
        // 0x1997d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997DCu;
        goto label_1997dc;
    }
    ctx->pc = 0x1997D4u;
    SET_GPR_U32(ctx, 31, 0x1997DCu);
    ctx->pc = 0x1997D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997D4u;
    // 0x1997d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x1997D4u, 0x1997DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997DCu;
label_1997dc:
    // 0x1997dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1997dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1997e0:
    // 0x1997e0: 0xc063e08  jal         func_18F820
label_1997e4:
    if (ctx->pc == 0x1997E4u) {
        ctx->pc = 0x1997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997E0u;
        // 0x1997e4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997E8u;
        goto label_1997e8;
    }
    ctx->pc = 0x1997E0u;
    SET_GPR_U32(ctx, 31, 0x1997E8u);
    ctx->pc = 0x1997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997E0u;
    // 0x1997e4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1997E0u, 0x1997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997E8u;
label_1997e8:
    // 0x1997e8: 0x10000054  b           . + 4 + (0x54 << 2)
label_1997ec:
    if (ctx->pc == 0x1997ECu) {
        ctx->pc = 0x1997F0u;
        goto label_1997f0;
    }
    ctx->pc = 0x1997E8u;
    {
        const bool branch_taken_0x1997e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1997e8) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1997F0u;
label_1997f0:
    // 0x1997f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1997f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1997f4:
    // 0x1997f4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1997f8:
    // 0x1997f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1997fc:
    // 0x1997fc: 0x8c830710  lw          $v1, 0x710($a0)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1808)));
label_199800:
    // 0x199800: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_199804:
    if (ctx->pc == 0x199804u) {
        ctx->pc = 0x199808u;
        goto label_199808;
    }
    ctx->pc = 0x199800u;
    {
        const bool branch_taken_0x199800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199800) {
            ctx->pc = 0x199814u;
            goto label_199814;
        }
    }
    ctx->pc = 0x199808u;
label_199808:
    // 0x199808: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19980c:
    // 0x19980c: 0x10000007  b           . + 4 + (0x7 << 2)
label_199810:
    if (ctx->pc == 0x199810u) {
        ctx->pc = 0x199810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19980Cu;
        // 0x199810: 0xac820710  sw          $v0, 0x710($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199814u;
        goto label_199814;
    }
    ctx->pc = 0x19980Cu;
    {
        const bool branch_taken_0x19980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19980Cu;
        // 0x199810: 0xac820710  sw          $v0, 0x710($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19980c) {
            ctx->pc = 0x19982Cu;
            goto label_19982c;
        }
    }
    ctx->pc = 0x199814u;
label_199814:
    // 0x199814: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x199814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_199818:
    // 0x199818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19981c:
    // 0x19981c: 0xae82068c  sw          $v0, 0x68C($s4)
    ctx->pc = 0x19981cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 2));
label_199820:
    // 0x199820: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x199820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_199824:
    // 0x199824: 0x441fff3  bgez        $v0, . + 4 + (-0xD << 2)
label_199828:
    if (ctx->pc == 0x199828u) {
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19982Cu;
        goto label_19982c;
    }
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199824) {
            ctx->pc = 0x1997F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1997f4;
        }
    }
    ctx->pc = 0x19982Cu;
label_19982c:
    // 0x19982c: 0x0  nop
    ctx->pc = 0x19982cu;
    // NOP
label_199830:
    // 0x199830: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_199834:
    // 0x199834: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_199838:
    if (ctx->pc == 0x199838u) {
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19983Cu;
        goto label_19983c;
    }
    ctx->pc = 0x199834u;
    {
        const bool branch_taken_0x199834 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199834) {
            ctx->pc = 0x199878u;
            goto label_199878;
        }
    }
    ctx->pc = 0x19983Cu;
label_19983c:
    // 0x19983c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199840:
    // 0x199840: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_199844:
    // 0x199844: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x199844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_199848:
    // 0x199848: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19984c:
    // 0x19984c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19984cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199850:
    // 0x199850: 0x0  nop
    ctx->pc = 0x199850u;
    // NOP
label_199854:
    // 0x199854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199858:
    // 0x199858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x199858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19985c:
    // 0x19985c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19985cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_199860:
    // 0x199860: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x199860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_199864:
    // 0x199864: 0xc063de0  jal         func_18F780
label_199868:
    if (ctx->pc == 0x199868u) {
        ctx->pc = 0x199868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199864u;
        // 0x199868: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19986Cu;
        goto label_19986c;
    }
    ctx->pc = 0x199864u;
    SET_GPR_U32(ctx, 31, 0x19986Cu);
    ctx->pc = 0x199868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199864u;
    // 0x199868: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x199864u, 0x19986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19986Cu;
label_19986c:
    // 0x19986c: 0x10000033  b           . + 4 + (0x33 << 2)
label_199870:
    if (ctx->pc == 0x199870u) {
        ctx->pc = 0x199874u;
        goto label_199874;
    }
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19986c) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x199874u;
label_199874:
    // 0x199874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199878:
    // 0x199878: 0xc063e08  jal         func_18F820
label_19987c:
    if (ctx->pc == 0x19987Cu) {
        ctx->pc = 0x19987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199878u;
        // 0x19987c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199880u;
        goto label_199880;
    }
    ctx->pc = 0x199878u;
    SET_GPR_U32(ctx, 31, 0x199880u);
    ctx->pc = 0x19987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199878u;
    // 0x19987c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199878u, 0x199880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199880u;
label_199880:
    // 0x199880: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x199880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199884:
    // 0x199884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_199888:
    // 0x199888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19988c:
    // 0x19988c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199890:
    // 0x199890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_199894:
    // 0x199894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x199894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_199898:
    // 0x199898: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x199898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19989c:
    // 0x19989c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19989cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1998a0:
    // 0x1998a0: 0xc063de0  jal         func_18F780
label_1998a4:
    if (ctx->pc == 0x1998A4u) {
        ctx->pc = 0x1998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998A0u;
        // 0x1998a4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998A8u;
        goto label_1998a8;
    }
    ctx->pc = 0x1998A0u;
    SET_GPR_U32(ctx, 31, 0x1998A8u);
    ctx->pc = 0x1998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998A0u;
    // 0x1998a4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1998A0u, 0x1998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998A8u;
label_1998a8:
    // 0x1998a8: 0x10000024  b           . + 4 + (0x24 << 2)
label_1998ac:
    if (ctx->pc == 0x1998ACu) {
        ctx->pc = 0x1998B0u;
        goto label_1998b0;
    }
    ctx->pc = 0x1998A8u;
    {
        const bool branch_taken_0x1998a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998a8) {
            ctx->pc = 0x19993Cu;
            goto label_19993c;
        }
    }
    ctx->pc = 0x1998B0u;
label_1998b0:
    // 0x1998b0: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_1998b4:
    // 0x1998b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1998b8:
    if (ctx->pc == 0x1998B8u) {
        ctx->pc = 0x1998BCu;
        goto label_1998bc;
    }
    ctx->pc = 0x1998B4u;
    {
        const bool branch_taken_0x1998b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998b4) {
            ctx->pc = 0x1998C8u;
            goto label_1998c8;
        }
    }
    ctx->pc = 0x1998BCu;
label_1998bc:
    // 0x1998bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1998bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1998c0:
    // 0x1998c0: 0xc067f68  jal         func_19FDA0
label_1998c4:
    if (ctx->pc == 0x1998C4u) {
        ctx->pc = 0x1998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998C0u;
        // 0x1998c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998C8u;
        goto label_1998c8;
    }
    ctx->pc = 0x1998C0u;
    SET_GPR_U32(ctx, 31, 0x1998C8u);
    ctx->pc = 0x1998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998C0u;
    // 0x1998c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1998C0u, 0x1998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998C8u;
label_1998c8:
    // 0x1998c8: 0x8e840810  lw          $a0, 0x810($s4)
    ctx->pc = 0x1998c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
label_1998cc:
    // 0x1998cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1998d0:
    if (ctx->pc == 0x1998D0u) {
        ctx->pc = 0x1998D4u;
        goto label_1998d4;
    }
    ctx->pc = 0x1998CCu;
    {
        const bool branch_taken_0x1998cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998cc) {
            ctx->pc = 0x1998E0u;
            goto label_1998e0;
        }
    }
    ctx->pc = 0x1998D4u;
label_1998d4:
    // 0x1998d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1998d8:
    // 0x1998d8: 0xc067f68  jal         func_19FDA0
label_1998dc:
    if (ctx->pc == 0x1998DCu) {
        ctx->pc = 0x1998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998D8u;
        // 0x1998dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998E0u;
        goto label_1998e0;
    }
    ctx->pc = 0x1998D8u;
    SET_GPR_U32(ctx, 31, 0x1998E0u);
    ctx->pc = 0x1998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998D8u;
    // 0x1998dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1998D8u, 0x1998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998E0u;
label_1998e0:
    // 0x1998e0: 0x8e830934  lw          $v1, 0x934($s4)
    ctx->pc = 0x1998e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2356)));
label_1998e4:
    // 0x1998e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1998e8:
    if (ctx->pc == 0x1998E8u) {
        ctx->pc = 0x1998ECu;
        goto label_1998ec;
    }
    ctx->pc = 0x1998E4u;
    {
        const bool branch_taken_0x1998e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998e4) {
            ctx->pc = 0x199910u;
            goto label_199910;
        }
    }
    ctx->pc = 0x1998ECu;
label_1998ec:
    // 0x1998ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1998f0:
    // 0x1998f0: 0x8c623ddc  lw          $v0, 0x3DDC($v1)
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15836)));
label_1998f4:
    // 0x1998f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1998f8:
    // 0x1998f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1998fc:
    // 0x1998fc: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_199900:
    // 0x199900: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_199904:
    // 0x199904: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x199904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_199908:
    // 0x199908: 0x320f809  jalr        $t9
label_19990c:
    if (ctx->pc == 0x19990Cu) {
        ctx->pc = 0x199910u;
        goto label_199910;
    }
    ctx->pc = 0x199908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199910u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199908u, 0x199910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199910u;
label_199910:
    // 0x199910: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x199910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_199914:
    // 0x199914: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x199914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_199918:
    // 0x199918: 0x128000a9  beqz        $s4, . + 4 + (0xA9 << 2)
label_19991c:
    if (ctx->pc == 0x19991Cu) {
        ctx->pc = 0x19991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199918u;
        // 0x19991c: 0xac6002dc  sw          $zero, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199920u;
        goto label_199920;
    }
    ctx->pc = 0x199918u;
    {
        const bool branch_taken_0x199918 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199918u;
        // 0x19991c: 0xac6002dc  sw          $zero, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199918) {
            ctx->pc = 0x199BC0u;
            goto label_199bc0;
        }
    }
    ctx->pc = 0x199920u;
label_199920:
    // 0x199920: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x199920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_199924:
    // 0x199924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199928:
    // 0x199928: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x199928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19992c:
    // 0x19992c: 0x320f809  jalr        $t9
label_199930:
    if (ctx->pc == 0x199930u) {
        ctx->pc = 0x199930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19992Cu;
        // 0x199930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199934u;
        goto label_199934;
    }
    ctx->pc = 0x19992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199934u);
        ctx->pc = 0x199930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19992Cu;
        // 0x199930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19992Cu, 0x199934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199934u;
label_199934:
    // 0x199934: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_199938:
    if (ctx->pc == 0x199938u) {
        ctx->pc = 0x199938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199934u;
        // 0x199938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19993Cu;
        goto label_19993c;
    }
    ctx->pc = 0x199934u;
    {
        const bool branch_taken_0x199934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199934u;
        // 0x199938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199934) {
            ctx->pc = 0x199BC4u;
            goto label_199bc4;
        }
    }
    ctx->pc = 0x19993Cu;
label_19993c:
    // 0x19993c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19993cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199940:
    // 0x199940: 0x1000009b  b           . + 4 + (0x9B << 2)
label_199944:
    if (ctx->pc == 0x199944u) {
        ctx->pc = 0x199944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199940u;
        // 0x199944: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199948u;
        goto label_199948;
    }
    ctx->pc = 0x199940u;
    {
        const bool branch_taken_0x199940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199940u;
        // 0x199944: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199940) {
            ctx->pc = 0x199BB0u;
            goto label_199bb0;
        }
    }
    ctx->pc = 0x199948u;
label_199948:
    // 0x199948: 0x296a821  addu        $s5, $s4, $s6
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_19994c:
    // 0x19994c: 0x8ea30790  lw          $v1, 0x790($s5)
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1936)));
label_199950:
    // 0x199950: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_199954:
    // 0x199954: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x199954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
label_199958:
    // 0x199958: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
label_19995c:
    if (ctx->pc == 0x19995Cu) {
        ctx->pc = 0x199960u;
        goto label_199960;
    }
    ctx->pc = 0x199958u;
    {
        const bool branch_taken_0x199958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199958) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199960u;
label_199960:
    // 0x199960: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_199964:
    // 0x199964: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_199968:
    // 0x199968: 0xc057040  jal         func_15C100
label_19996c:
    if (ctx->pc == 0x19996Cu) {
        ctx->pc = 0x19996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199968u;
        // 0x19996c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199970u;
        goto label_199970;
    }
    ctx->pc = 0x199968u;
    SET_GPR_U32(ctx, 31, 0x199970u);
    ctx->pc = 0x19996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199968u;
    // 0x19996c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x199968u, 0x199970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199970u;
label_199970:
    // 0x199970: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x199970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_199974:
    // 0x199974: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x199974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_199978:
    // 0x199978: 0x8ea30710  lw          $v1, 0x710($s5)
    ctx->pc = 0x199978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1808)));
label_19997c:
    // 0x19997c: 0x26b00710  addiu       $s0, $s5, 0x710
    ctx->pc = 0x19997cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1808));
label_199980:
    // 0x199980: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_199984:
    // 0x199984: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x199984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_199988:
    // 0x199988: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x199988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_19998c:
    // 0x19998c: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x19998cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_199990:
    // 0x199990: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
label_199994:
    if (ctx->pc == 0x199994u) {
        ctx->pc = 0x199994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199990u;
        // 0x199994: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199998u;
        goto label_199998;
    }
    ctx->pc = 0x199990u;
    {
        const bool branch_taken_0x199990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199990u;
        // 0x199994: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199990) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199998u;
label_199998:
    // 0x199998: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_19999c:
    // 0x19999c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19999cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1999a0:
    // 0x1999a0: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_1999a4:
    // 0x1999a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1999a8:
    // 0x1999a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1999ac:
    // 0x1999ac: 0x600008  jr          $v1
label_1999b0:
    if (ctx->pc == 0x1999B0u) {
        ctx->pc = 0x1999B4u;
        goto label_1999b4;
    }
    ctx->pc = 0x1999ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1999B4u: goto label_1999b4;
            case 0x1999FCu: goto label_1999fc;
            case 0x199A80u: goto label_199a80;
            case 0x199AACu: goto label_199aac;
            case 0x199AD0u: goto label_199ad0;
            case 0x199B30u: goto label_199b30;
            case 0x199B6Cu: goto label_199b6c;
            case 0x199BA8u: goto label_199ba8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1999B4u;
label_1999b4:
    // 0x1999b4: 0x0  nop
    ctx->pc = 0x1999b4u;
    // NOP
label_1999b8:
    // 0x1999b8: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1999b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1999bc:
    // 0x1999bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1999bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1999c0:
    // 0x1999c0: 0xc064c20  jal         func_193080
label_1999c4:
    if (ctx->pc == 0x1999C4u) {
        ctx->pc = 0x1999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999C0u;
        // 0x1999c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999C8u;
        goto label_1999c8;
    }
    ctx->pc = 0x1999C0u;
    SET_GPR_U32(ctx, 31, 0x1999C8u);
    ctx->pc = 0x1999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999C0u;
    // 0x1999c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1999C0u, 0x1999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999C8u;
label_1999c8:
    // 0x1999c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1999c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1999cc:
    // 0x1999cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1999ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1999d0:
    // 0x1999d0: 0xc064c4c  jal         func_193130
label_1999d4:
    if (ctx->pc == 0x1999D4u) {
        ctx->pc = 0x1999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999D0u;
        // 0x1999d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999D8u;
        goto label_1999d8;
    }
    ctx->pc = 0x1999D0u;
    SET_GPR_U32(ctx, 31, 0x1999D8u);
    ctx->pc = 0x1999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999D0u;
    // 0x1999d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x1999D0u, 0x1999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999D8u;
label_1999d8:
    // 0x1999d8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1999dc:
    // 0x1999dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1999dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1999e0:
    // 0x1999e0: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1999e4:
    // 0x1999e4: 0x320f809  jalr        $t9
label_1999e8:
    if (ctx->pc == 0x1999E8u) {
        ctx->pc = 0x1999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999E4u;
        // 0x1999e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999ECu;
        goto label_1999ec;
    }
    ctx->pc = 0x1999E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1999ECu);
        ctx->pc = 0x1999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999E4u;
        // 0x1999e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999E4u, 0x1999ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1999ECu;
label_1999ec:
    // 0x1999ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1999f0:
    // 0x1999f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1999f4:
    // 0x1999f4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1999f8:
    if (ctx->pc == 0x1999F8u) {
        ctx->pc = 0x1999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F4u;
        // 0x1999f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999FCu;
        goto label_1999fc;
    }
    ctx->pc = 0x1999F4u;
    {
        const bool branch_taken_0x1999f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F4u;
        // 0x1999f8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999f4) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x1999FCu;
label_1999fc:
    // 0x1999fc: 0x0  nop
    ctx->pc = 0x1999fcu;
    // NOP
label_199a00:
    // 0x199a00: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a04:
    // 0x199a04: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x199a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_199a08:
    // 0x199a08: 0x320f809  jalr        $t9
label_199a0c:
    if (ctx->pc == 0x199A0Cu) {
        ctx->pc = 0x199A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A08u;
        // 0x199a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A10u;
        goto label_199a10;
    }
    ctx->pc = 0x199A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A10u);
        ctx->pc = 0x199A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A08u;
        // 0x199a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A08u, 0x199A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A10u;
label_199a10:
    // 0x199a10: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a14:
    // 0x199a14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x199a14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_199a18:
    // 0x199a18: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x199a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_199a1c:
    // 0x199a1c: 0x320f809  jalr        $t9
label_199a20:
    if (ctx->pc == 0x199A20u) {
        ctx->pc = 0x199A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A1Cu;
        // 0x199a20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A24u;
        goto label_199a24;
    }
    ctx->pc = 0x199A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A24u);
        ctx->pc = 0x199A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A1Cu;
        // 0x199a20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A1Cu, 0x199A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A24u;
label_199a24:
    // 0x199a24: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x199a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_199a28:
    // 0x199a28: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
label_199a2c:
    // 0x199a2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199a30:
    // 0x199a30: 0x0  nop
    ctx->pc = 0x199a30u;
    // NOP
label_199a34:
    // 0x199a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199a38:
    // 0x199a38: 0x0  nop
    ctx->pc = 0x199a38u;
    // NOP
label_199a3c:
    // 0x199a3c: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_199a40:
    if (ctx->pc == 0x199A40u) {
        ctx->pc = 0x199A44u;
        goto label_199a44;
    }
    ctx->pc = 0x199A3Cu;
    {
        const bool branch_taken_0x199a3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199a3c) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199A44u;
label_199a44:
    // 0x199a44: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a48:
    // 0x199a48: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199a4c:
    // 0x199a4c: 0x320f809  jalr        $t9
label_199a50:
    if (ctx->pc == 0x199A50u) {
        ctx->pc = 0x199A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A4Cu;
        // 0x199a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A54u;
        goto label_199a54;
    }
    ctx->pc = 0x199A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A54u);
        ctx->pc = 0x199A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A4Cu;
        // 0x199a50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A4Cu, 0x199A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A54u;
label_199a54:
    // 0x199a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199a58:
    // 0x199a58: 0x14430053  bne         $v0, $v1, . + 4 + (0x53 << 2)
label_199a5c:
    if (ctx->pc == 0x199A5Cu) {
        ctx->pc = 0x199A60u;
        goto label_199a60;
    }
    ctx->pc = 0x199A58u;
    {
        const bool branch_taken_0x199a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199a58) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199A60u;
label_199a60:
    // 0x199a60: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_199a64:
    // 0x199a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199a68:
    // 0x199a68: 0xc064c20  jal         func_193080
label_199a6c:
    if (ctx->pc == 0x199A6Cu) {
        ctx->pc = 0x199A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A68u;
        // 0x199a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A70u;
        goto label_199a70;
    }
    ctx->pc = 0x199A68u;
    SET_GPR_U32(ctx, 31, 0x199A70u);
    ctx->pc = 0x199A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A68u;
    // 0x199a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x199A68u, 0x199A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A70u;
label_199a70:
    // 0x199a70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199a74:
    // 0x199a74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199a78:
    // 0x199a78: 0x1000004b  b           . + 4 + (0x4B << 2)
label_199a7c:
    if (ctx->pc == 0x199A7Cu) {
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A80u;
        goto label_199a80;
    }
    ctx->pc = 0x199A78u;
    {
        const bool branch_taken_0x199a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a78) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199A80u;
label_199a80:
    // 0x199a80: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a84:
    // 0x199a84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199a88:
    // 0x199a88: 0x320f809  jalr        $t9
label_199a8c:
    if (ctx->pc == 0x199A8Cu) {
        ctx->pc = 0x199A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A88u;
        // 0x199a8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A90u;
        goto label_199a90;
    }
    ctx->pc = 0x199A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A90u);
        ctx->pc = 0x199A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A88u;
        // 0x199a8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A88u, 0x199A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A90u;
label_199a90:
    // 0x199a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199a94:
    // 0x199a94: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_199a98:
    if (ctx->pc == 0x199A98u) {
        ctx->pc = 0x199A9Cu;
        goto label_199a9c;
    }
    ctx->pc = 0x199A94u;
    {
        const bool branch_taken_0x199a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199a94) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199A9Cu;
label_199a9c:
    // 0x199a9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199aa0:
    // 0x199aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199aa4:
    // 0x199aa4: 0x10000040  b           . + 4 + (0x40 << 2)
label_199aa8:
    if (ctx->pc == 0x199AA8u) {
        ctx->pc = 0x199AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA4u;
        // 0x199aa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AACu;
        goto label_199aac;
    }
    ctx->pc = 0x199AA4u;
    {
        const bool branch_taken_0x199aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA4u;
        // 0x199aa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199aa4) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199AACu;
label_199aac:
    // 0x199aac: 0x0  nop
    ctx->pc = 0x199aacu;
    // NOP
label_199ab0:
    // 0x199ab0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x199ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_199ab4:
    // 0x199ab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199ab8:
    // 0x199ab8: 0xc064c20  jal         func_193080
label_199abc:
    if (ctx->pc == 0x199ABCu) {
        ctx->pc = 0x199ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AB8u;
        // 0x199abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AC0u;
        goto label_199ac0;
    }
    ctx->pc = 0x199AB8u;
    SET_GPR_U32(ctx, 31, 0x199AC0u);
    ctx->pc = 0x199ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199AB8u;
    // 0x199abc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x199AB8u, 0x199AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AC0u;
label_199ac0:
    // 0x199ac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199ac4:
    // 0x199ac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199ac8:
    // 0x199ac8: 0x10000037  b           . + 4 + (0x37 << 2)
label_199acc:
    if (ctx->pc == 0x199ACCu) {
        ctx->pc = 0x199ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AC8u;
        // 0x199acc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AD0u;
        goto label_199ad0;
    }
    ctx->pc = 0x199AC8u;
    {
        const bool branch_taken_0x199ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AC8u;
        // 0x199acc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ac8) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199AD0u;
label_199ad0:
    // 0x199ad0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199ad4:
    // 0x199ad4: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x199ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_199ad8:
    // 0x199ad8: 0x320f809  jalr        $t9
label_199adc:
    if (ctx->pc == 0x199ADCu) {
        ctx->pc = 0x199ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD8u;
        // 0x199adc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AE0u;
        goto label_199ae0;
    }
    ctx->pc = 0x199AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199AE0u);
        ctx->pc = 0x199ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD8u;
        // 0x199adc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AD8u, 0x199AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199AE0u;
label_199ae0:
    // 0x199ae0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x199ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_199ae4:
    // 0x199ae4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x199ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_199ae8:
    // 0x199ae8: 0x0  nop
    ctx->pc = 0x199ae8u;
    // NOP
label_199aec:
    // 0x199aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x199aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199af0:
    // 0x199af0: 0x0  nop
    ctx->pc = 0x199af0u;
    // NOP
label_199af4:
    // 0x199af4: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_199af8:
    if (ctx->pc == 0x199AF8u) {
        ctx->pc = 0x199AFCu;
        goto label_199afc;
    }
    ctx->pc = 0x199AF4u;
    {
        const bool branch_taken_0x199af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199af4) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199AFCu;
label_199afc:
    // 0x199afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199b00:
    // 0x199b00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199b04:
    // 0x199b04: 0xc064c4c  jal         func_193130
label_199b08:
    if (ctx->pc == 0x199B08u) {
        ctx->pc = 0x199B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B04u;
        // 0x199b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B0Cu;
        goto label_199b0c;
    }
    ctx->pc = 0x199B04u;
    SET_GPR_U32(ctx, 31, 0x199B0Cu);
    ctx->pc = 0x199B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B04u;
    // 0x199b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x199B04u, 0x199B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B0Cu;
label_199b0c:
    // 0x199b0c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b10:
    // 0x199b10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199b14:
    // 0x199b14: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x199b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_199b18:
    // 0x199b18: 0x320f809  jalr        $t9
label_199b1c:
    if (ctx->pc == 0x199B1Cu) {
        ctx->pc = 0x199B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B18u;
        // 0x199b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B20u;
        goto label_199b20;
    }
    ctx->pc = 0x199B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B20u);
        ctx->pc = 0x199B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B18u;
        // 0x199b1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B18u, 0x199B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B20u;
label_199b20:
    // 0x199b20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199b24:
    // 0x199b24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199b28:
    // 0x199b28: 0x1000001f  b           . + 4 + (0x1F << 2)
label_199b2c:
    if (ctx->pc == 0x199B2Cu) {
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B30u;
        goto label_199b30;
    }
    ctx->pc = 0x199B28u;
    {
        const bool branch_taken_0x199b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B28u;
        // 0x199b2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b28) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199B30u;
label_199b30:
    // 0x199b30: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b34:
    // 0x199b34: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199b38:
    // 0x199b38: 0x320f809  jalr        $t9
label_199b3c:
    if (ctx->pc == 0x199B3Cu) {
        ctx->pc = 0x199B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B38u;
        // 0x199b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B40u;
        goto label_199b40;
    }
    ctx->pc = 0x199B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B40u);
        ctx->pc = 0x199B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B38u;
        // 0x199b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B38u, 0x199B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B40u;
label_199b40:
    // 0x199b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199b44:
    // 0x199b44: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_199b48:
    if (ctx->pc == 0x199B48u) {
        ctx->pc = 0x199B4Cu;
        goto label_199b4c;
    }
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199B4Cu;
label_199b4c:
    // 0x199b4c: 0x8e460038  lw          $a2, 0x38($s2)
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_199b50:
    // 0x199b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199b54:
    // 0x199b54: 0xc064c20  jal         func_193080
label_199b58:
    if (ctx->pc == 0x199B58u) {
        ctx->pc = 0x199B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B54u;
        // 0x199b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B5Cu;
        goto label_199b5c;
    }
    ctx->pc = 0x199B54u;
    SET_GPR_U32(ctx, 31, 0x199B5Cu);
    ctx->pc = 0x199B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B54u;
    // 0x199b58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x199B54u, 0x199B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B5Cu;
label_199b5c:
    // 0x199b5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199b60:
    // 0x199b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199b64:
    // 0x199b64: 0x10000010  b           . + 4 + (0x10 << 2)
label_199b68:
    if (ctx->pc == 0x199B68u) {
        ctx->pc = 0x199B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B64u;
        // 0x199b68: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B6Cu;
        goto label_199b6c;
    }
    ctx->pc = 0x199B64u;
    {
        const bool branch_taken_0x199b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B64u;
        // 0x199b68: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b64) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199B6Cu;
label_199b6c:
    // 0x199b6c: 0x0  nop
    ctx->pc = 0x199b6cu;
    // NOP
label_199b70:
    // 0x199b70: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b74:
    // 0x199b74: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x199b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_199b78:
    // 0x199b78: 0x320f809  jalr        $t9
label_199b7c:
    if (ctx->pc == 0x199B7Cu) {
        ctx->pc = 0x199B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B78u;
        // 0x199b7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B80u;
        goto label_199b80;
    }
    ctx->pc = 0x199B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B80u);
        ctx->pc = 0x199B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B78u;
        // 0x199b7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B78u, 0x199B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B80u;
label_199b80:
    // 0x199b80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_199b84:
    if (ctx->pc == 0x199B84u) {
        ctx->pc = 0x199B88u;
        goto label_199b88;
    }
    ctx->pc = 0x199B80u;
    {
        const bool branch_taken_0x199b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199b80) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199B88u;
label_199b88:
    // 0x199b88: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199b8c:
    // 0x199b8c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199b90:
    // 0x199b90: 0x320f809  jalr        $t9
label_199b94:
    if (ctx->pc == 0x199B94u) {
        ctx->pc = 0x199B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B90u;
        // 0x199b94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B98u;
        goto label_199b98;
    }
    ctx->pc = 0x199B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199B98u);
        ctx->pc = 0x199B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B90u;
        // 0x199b94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B90u, 0x199B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199B98u;
label_199b98:
    // 0x199b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199b9c:
    // 0x199b9c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_199ba0:
    if (ctx->pc == 0x199BA0u) {
        ctx->pc = 0x199BA4u;
        goto label_199ba4;
    }
    ctx->pc = 0x199B9Cu;
    {
        const bool branch_taken_0x199b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199b9c) {
            ctx->pc = 0x199BA8u;
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199BA4u;
label_199ba4:
    // 0x199ba4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x199ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_199ba8:
    // 0x199ba8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x199ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_199bac:
    // 0x199bac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x199bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199bb0:
    // 0x199bb0: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_199bb4:
    // 0x199bb4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x199bb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_199bb8:
    // 0x199bb8: 0x1460ff64  bnez        $v1, . + 4 + (-0x9C << 2)
label_199bbc:
    if (ctx->pc == 0x199BBCu) {
        ctx->pc = 0x199BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BB8u;
        // 0x199bbc: 0x296a821  addu        $s5, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BC0u;
        goto label_199bc0;
    }
    ctx->pc = 0x199BB8u;
    {
        const bool branch_taken_0x199bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BB8u;
        // 0x199bbc: 0x296a821  addu        $s5, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bb8) {
            ctx->pc = 0x19994Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19994c;
        }
    }
    ctx->pc = 0x199BC0u;
label_199bc0:
    // 0x199bc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x199bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_199bc4:
    // 0x199bc4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x199bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_199bc8:
    // 0x199bc8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x199bc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_199bcc:
    // 0x199bcc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x199bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_199bd0:
    // 0x199bd0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x199bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_199bd4:
    // 0x199bd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x199bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_199bd8:
    // 0x199bd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x199bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_199bdc:
    // 0x199bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_199be0:
    // 0x199be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_199be4:
    // 0x199be4: 0x3e00008  jr          $ra
label_199be8:
    if (ctx->pc == 0x199BE8u) {
        ctx->pc = 0x199BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BE4u;
        // 0x199be8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BECu;
        goto label_fallthrough_0x199be4;
    }
    ctx->pc = 0x199BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BE4u;
        // 0x199be8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199be4:
    ctx->pc = 0x199BECu;
}
