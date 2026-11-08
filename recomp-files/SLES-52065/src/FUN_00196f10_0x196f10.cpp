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

// Function: FUN_00196f10
// Address: 0x196f10 - 0x197e68
void FUN_00196f10_0x196f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196f10_0x196f10");
#endif

    switch (ctx->pc) {
        case 0x196f10u: goto label_196f10;
        case 0x196f14u: goto label_196f14;
        case 0x196f18u: goto label_196f18;
        case 0x196f1cu: goto label_196f1c;
        case 0x196f20u: goto label_196f20;
        case 0x196f24u: goto label_196f24;
        case 0x196f28u: goto label_196f28;
        case 0x196f2cu: goto label_196f2c;
        case 0x196f30u: goto label_196f30;
        case 0x196f34u: goto label_196f34;
        case 0x196f38u: goto label_196f38;
        case 0x196f3cu: goto label_196f3c;
        case 0x196f40u: goto label_196f40;
        case 0x196f44u: goto label_196f44;
        case 0x196f48u: goto label_196f48;
        case 0x196f4cu: goto label_196f4c;
        case 0x196f50u: goto label_196f50;
        case 0x196f54u: goto label_196f54;
        case 0x196f58u: goto label_196f58;
        case 0x196f5cu: goto label_196f5c;
        case 0x196f60u: goto label_196f60;
        case 0x196f64u: goto label_196f64;
        case 0x196f68u: goto label_196f68;
        case 0x196f6cu: goto label_196f6c;
        case 0x196f70u: goto label_196f70;
        case 0x196f74u: goto label_196f74;
        case 0x196f78u: goto label_196f78;
        case 0x196f7cu: goto label_196f7c;
        case 0x196f80u: goto label_196f80;
        case 0x196f84u: goto label_196f84;
        case 0x196f88u: goto label_196f88;
        case 0x196f8cu: goto label_196f8c;
        case 0x196f90u: goto label_196f90;
        case 0x196f94u: goto label_196f94;
        case 0x196f98u: goto label_196f98;
        case 0x196f9cu: goto label_196f9c;
        case 0x196fa0u: goto label_196fa0;
        case 0x196fa4u: goto label_196fa4;
        case 0x196fa8u: goto label_196fa8;
        case 0x196facu: goto label_196fac;
        case 0x196fb0u: goto label_196fb0;
        case 0x196fb4u: goto label_196fb4;
        case 0x196fb8u: goto label_196fb8;
        case 0x196fbcu: goto label_196fbc;
        case 0x196fc0u: goto label_196fc0;
        case 0x196fc4u: goto label_196fc4;
        case 0x196fc8u: goto label_196fc8;
        case 0x196fccu: goto label_196fcc;
        case 0x196fd0u: goto label_196fd0;
        case 0x196fd4u: goto label_196fd4;
        case 0x196fd8u: goto label_196fd8;
        case 0x196fdcu: goto label_196fdc;
        case 0x196fe0u: goto label_196fe0;
        case 0x196fe4u: goto label_196fe4;
        case 0x196fe8u: goto label_196fe8;
        case 0x196fecu: goto label_196fec;
        case 0x196ff0u: goto label_196ff0;
        case 0x196ff4u: goto label_196ff4;
        case 0x196ff8u: goto label_196ff8;
        case 0x196ffcu: goto label_196ffc;
        case 0x197000u: goto label_197000;
        case 0x197004u: goto label_197004;
        case 0x197008u: goto label_197008;
        case 0x19700cu: goto label_19700c;
        case 0x197010u: goto label_197010;
        case 0x197014u: goto label_197014;
        case 0x197018u: goto label_197018;
        case 0x19701cu: goto label_19701c;
        case 0x197020u: goto label_197020;
        case 0x197024u: goto label_197024;
        case 0x197028u: goto label_197028;
        case 0x19702cu: goto label_19702c;
        case 0x197030u: goto label_197030;
        case 0x197034u: goto label_197034;
        case 0x197038u: goto label_197038;
        case 0x19703cu: goto label_19703c;
        case 0x197040u: goto label_197040;
        case 0x197044u: goto label_197044;
        case 0x197048u: goto label_197048;
        case 0x19704cu: goto label_19704c;
        case 0x197050u: goto label_197050;
        case 0x197054u: goto label_197054;
        case 0x197058u: goto label_197058;
        case 0x19705cu: goto label_19705c;
        case 0x197060u: goto label_197060;
        case 0x197064u: goto label_197064;
        case 0x197068u: goto label_197068;
        case 0x19706cu: goto label_19706c;
        case 0x197070u: goto label_197070;
        case 0x197074u: goto label_197074;
        case 0x197078u: goto label_197078;
        case 0x19707cu: goto label_19707c;
        case 0x197080u: goto label_197080;
        case 0x197084u: goto label_197084;
        case 0x197088u: goto label_197088;
        case 0x19708cu: goto label_19708c;
        case 0x197090u: goto label_197090;
        case 0x197094u: goto label_197094;
        case 0x197098u: goto label_197098;
        case 0x19709cu: goto label_19709c;
        case 0x1970a0u: goto label_1970a0;
        case 0x1970a4u: goto label_1970a4;
        case 0x1970a8u: goto label_1970a8;
        case 0x1970acu: goto label_1970ac;
        case 0x1970b0u: goto label_1970b0;
        case 0x1970b4u: goto label_1970b4;
        case 0x1970b8u: goto label_1970b8;
        case 0x1970bcu: goto label_1970bc;
        case 0x1970c0u: goto label_1970c0;
        case 0x1970c4u: goto label_1970c4;
        case 0x1970c8u: goto label_1970c8;
        case 0x1970ccu: goto label_1970cc;
        case 0x1970d0u: goto label_1970d0;
        case 0x1970d4u: goto label_1970d4;
        case 0x1970d8u: goto label_1970d8;
        case 0x1970dcu: goto label_1970dc;
        case 0x1970e0u: goto label_1970e0;
        case 0x1970e4u: goto label_1970e4;
        case 0x1970e8u: goto label_1970e8;
        case 0x1970ecu: goto label_1970ec;
        case 0x1970f0u: goto label_1970f0;
        case 0x1970f4u: goto label_1970f4;
        case 0x1970f8u: goto label_1970f8;
        case 0x1970fcu: goto label_1970fc;
        case 0x197100u: goto label_197100;
        case 0x197104u: goto label_197104;
        case 0x197108u: goto label_197108;
        case 0x19710cu: goto label_19710c;
        case 0x197110u: goto label_197110;
        case 0x197114u: goto label_197114;
        case 0x197118u: goto label_197118;
        case 0x19711cu: goto label_19711c;
        case 0x197120u: goto label_197120;
        case 0x197124u: goto label_197124;
        case 0x197128u: goto label_197128;
        case 0x19712cu: goto label_19712c;
        case 0x197130u: goto label_197130;
        case 0x197134u: goto label_197134;
        case 0x197138u: goto label_197138;
        case 0x19713cu: goto label_19713c;
        case 0x197140u: goto label_197140;
        case 0x197144u: goto label_197144;
        case 0x197148u: goto label_197148;
        case 0x19714cu: goto label_19714c;
        case 0x197150u: goto label_197150;
        case 0x197154u: goto label_197154;
        case 0x197158u: goto label_197158;
        case 0x19715cu: goto label_19715c;
        case 0x197160u: goto label_197160;
        case 0x197164u: goto label_197164;
        case 0x197168u: goto label_197168;
        case 0x19716cu: goto label_19716c;
        case 0x197170u: goto label_197170;
        case 0x197174u: goto label_197174;
        case 0x197178u: goto label_197178;
        case 0x19717cu: goto label_19717c;
        case 0x197180u: goto label_197180;
        case 0x197184u: goto label_197184;
        case 0x197188u: goto label_197188;
        case 0x19718cu: goto label_19718c;
        case 0x197190u: goto label_197190;
        case 0x197194u: goto label_197194;
        case 0x197198u: goto label_197198;
        case 0x19719cu: goto label_19719c;
        case 0x1971a0u: goto label_1971a0;
        case 0x1971a4u: goto label_1971a4;
        case 0x1971a8u: goto label_1971a8;
        case 0x1971acu: goto label_1971ac;
        case 0x1971b0u: goto label_1971b0;
        case 0x1971b4u: goto label_1971b4;
        case 0x1971b8u: goto label_1971b8;
        case 0x1971bcu: goto label_1971bc;
        case 0x1971c0u: goto label_1971c0;
        case 0x1971c4u: goto label_1971c4;
        case 0x1971c8u: goto label_1971c8;
        case 0x1971ccu: goto label_1971cc;
        case 0x1971d0u: goto label_1971d0;
        case 0x1971d4u: goto label_1971d4;
        case 0x1971d8u: goto label_1971d8;
        case 0x1971dcu: goto label_1971dc;
        case 0x1971e0u: goto label_1971e0;
        case 0x1971e4u: goto label_1971e4;
        case 0x1971e8u: goto label_1971e8;
        case 0x1971ecu: goto label_1971ec;
        case 0x1971f0u: goto label_1971f0;
        case 0x1971f4u: goto label_1971f4;
        case 0x1971f8u: goto label_1971f8;
        case 0x1971fcu: goto label_1971fc;
        case 0x197200u: goto label_197200;
        case 0x197204u: goto label_197204;
        case 0x197208u: goto label_197208;
        case 0x19720cu: goto label_19720c;
        case 0x197210u: goto label_197210;
        case 0x197214u: goto label_197214;
        case 0x197218u: goto label_197218;
        case 0x19721cu: goto label_19721c;
        case 0x197220u: goto label_197220;
        case 0x197224u: goto label_197224;
        case 0x197228u: goto label_197228;
        case 0x19722cu: goto label_19722c;
        case 0x197230u: goto label_197230;
        case 0x197234u: goto label_197234;
        case 0x197238u: goto label_197238;
        case 0x19723cu: goto label_19723c;
        case 0x197240u: goto label_197240;
        case 0x197244u: goto label_197244;
        case 0x197248u: goto label_197248;
        case 0x19724cu: goto label_19724c;
        case 0x197250u: goto label_197250;
        case 0x197254u: goto label_197254;
        case 0x197258u: goto label_197258;
        case 0x19725cu: goto label_19725c;
        case 0x197260u: goto label_197260;
        case 0x197264u: goto label_197264;
        case 0x197268u: goto label_197268;
        case 0x19726cu: goto label_19726c;
        case 0x197270u: goto label_197270;
        case 0x197274u: goto label_197274;
        case 0x197278u: goto label_197278;
        case 0x19727cu: goto label_19727c;
        case 0x197280u: goto label_197280;
        case 0x197284u: goto label_197284;
        case 0x197288u: goto label_197288;
        case 0x19728cu: goto label_19728c;
        case 0x197290u: goto label_197290;
        case 0x197294u: goto label_197294;
        case 0x197298u: goto label_197298;
        case 0x19729cu: goto label_19729c;
        case 0x1972a0u: goto label_1972a0;
        case 0x1972a4u: goto label_1972a4;
        case 0x1972a8u: goto label_1972a8;
        case 0x1972acu: goto label_1972ac;
        case 0x1972b0u: goto label_1972b0;
        case 0x1972b4u: goto label_1972b4;
        case 0x1972b8u: goto label_1972b8;
        case 0x1972bcu: goto label_1972bc;
        case 0x1972c0u: goto label_1972c0;
        case 0x1972c4u: goto label_1972c4;
        case 0x1972c8u: goto label_1972c8;
        case 0x1972ccu: goto label_1972cc;
        case 0x1972d0u: goto label_1972d0;
        case 0x1972d4u: goto label_1972d4;
        case 0x1972d8u: goto label_1972d8;
        case 0x1972dcu: goto label_1972dc;
        case 0x1972e0u: goto label_1972e0;
        case 0x1972e4u: goto label_1972e4;
        case 0x1972e8u: goto label_1972e8;
        case 0x1972ecu: goto label_1972ec;
        case 0x1972f0u: goto label_1972f0;
        case 0x1972f4u: goto label_1972f4;
        case 0x1972f8u: goto label_1972f8;
        case 0x1972fcu: goto label_1972fc;
        case 0x197300u: goto label_197300;
        case 0x197304u: goto label_197304;
        case 0x197308u: goto label_197308;
        case 0x19730cu: goto label_19730c;
        case 0x197310u: goto label_197310;
        case 0x197314u: goto label_197314;
        case 0x197318u: goto label_197318;
        case 0x19731cu: goto label_19731c;
        case 0x197320u: goto label_197320;
        case 0x197324u: goto label_197324;
        case 0x197328u: goto label_197328;
        case 0x19732cu: goto label_19732c;
        case 0x197330u: goto label_197330;
        case 0x197334u: goto label_197334;
        case 0x197338u: goto label_197338;
        case 0x19733cu: goto label_19733c;
        case 0x197340u: goto label_197340;
        case 0x197344u: goto label_197344;
        case 0x197348u: goto label_197348;
        case 0x19734cu: goto label_19734c;
        case 0x197350u: goto label_197350;
        case 0x197354u: goto label_197354;
        case 0x197358u: goto label_197358;
        case 0x19735cu: goto label_19735c;
        case 0x197360u: goto label_197360;
        case 0x197364u: goto label_197364;
        case 0x197368u: goto label_197368;
        case 0x19736cu: goto label_19736c;
        case 0x197370u: goto label_197370;
        case 0x197374u: goto label_197374;
        case 0x197378u: goto label_197378;
        case 0x19737cu: goto label_19737c;
        case 0x197380u: goto label_197380;
        case 0x197384u: goto label_197384;
        case 0x197388u: goto label_197388;
        case 0x19738cu: goto label_19738c;
        case 0x197390u: goto label_197390;
        case 0x197394u: goto label_197394;
        case 0x197398u: goto label_197398;
        case 0x19739cu: goto label_19739c;
        case 0x1973a0u: goto label_1973a0;
        case 0x1973a4u: goto label_1973a4;
        case 0x1973a8u: goto label_1973a8;
        case 0x1973acu: goto label_1973ac;
        case 0x1973b0u: goto label_1973b0;
        case 0x1973b4u: goto label_1973b4;
        case 0x1973b8u: goto label_1973b8;
        case 0x1973bcu: goto label_1973bc;
        case 0x1973c0u: goto label_1973c0;
        case 0x1973c4u: goto label_1973c4;
        case 0x1973c8u: goto label_1973c8;
        case 0x1973ccu: goto label_1973cc;
        case 0x1973d0u: goto label_1973d0;
        case 0x1973d4u: goto label_1973d4;
        case 0x1973d8u: goto label_1973d8;
        case 0x1973dcu: goto label_1973dc;
        case 0x1973e0u: goto label_1973e0;
        case 0x1973e4u: goto label_1973e4;
        case 0x1973e8u: goto label_1973e8;
        case 0x1973ecu: goto label_1973ec;
        case 0x1973f0u: goto label_1973f0;
        case 0x1973f4u: goto label_1973f4;
        case 0x1973f8u: goto label_1973f8;
        case 0x1973fcu: goto label_1973fc;
        case 0x197400u: goto label_197400;
        case 0x197404u: goto label_197404;
        case 0x197408u: goto label_197408;
        case 0x19740cu: goto label_19740c;
        case 0x197410u: goto label_197410;
        case 0x197414u: goto label_197414;
        case 0x197418u: goto label_197418;
        case 0x19741cu: goto label_19741c;
        case 0x197420u: goto label_197420;
        case 0x197424u: goto label_197424;
        case 0x197428u: goto label_197428;
        case 0x19742cu: goto label_19742c;
        case 0x197430u: goto label_197430;
        case 0x197434u: goto label_197434;
        case 0x197438u: goto label_197438;
        case 0x19743cu: goto label_19743c;
        case 0x197440u: goto label_197440;
        case 0x197444u: goto label_197444;
        case 0x197448u: goto label_197448;
        case 0x19744cu: goto label_19744c;
        case 0x197450u: goto label_197450;
        case 0x197454u: goto label_197454;
        case 0x197458u: goto label_197458;
        case 0x19745cu: goto label_19745c;
        case 0x197460u: goto label_197460;
        case 0x197464u: goto label_197464;
        case 0x197468u: goto label_197468;
        case 0x19746cu: goto label_19746c;
        case 0x197470u: goto label_197470;
        case 0x197474u: goto label_197474;
        case 0x197478u: goto label_197478;
        case 0x19747cu: goto label_19747c;
        case 0x197480u: goto label_197480;
        case 0x197484u: goto label_197484;
        case 0x197488u: goto label_197488;
        case 0x19748cu: goto label_19748c;
        case 0x197490u: goto label_197490;
        case 0x197494u: goto label_197494;
        case 0x197498u: goto label_197498;
        case 0x19749cu: goto label_19749c;
        case 0x1974a0u: goto label_1974a0;
        case 0x1974a4u: goto label_1974a4;
        case 0x1974a8u: goto label_1974a8;
        case 0x1974acu: goto label_1974ac;
        case 0x1974b0u: goto label_1974b0;
        case 0x1974b4u: goto label_1974b4;
        case 0x1974b8u: goto label_1974b8;
        case 0x1974bcu: goto label_1974bc;
        case 0x1974c0u: goto label_1974c0;
        case 0x1974c4u: goto label_1974c4;
        case 0x1974c8u: goto label_1974c8;
        case 0x1974ccu: goto label_1974cc;
        case 0x1974d0u: goto label_1974d0;
        case 0x1974d4u: goto label_1974d4;
        case 0x1974d8u: goto label_1974d8;
        case 0x1974dcu: goto label_1974dc;
        case 0x1974e0u: goto label_1974e0;
        case 0x1974e4u: goto label_1974e4;
        case 0x1974e8u: goto label_1974e8;
        case 0x1974ecu: goto label_1974ec;
        case 0x1974f0u: goto label_1974f0;
        case 0x1974f4u: goto label_1974f4;
        case 0x1974f8u: goto label_1974f8;
        case 0x1974fcu: goto label_1974fc;
        case 0x197500u: goto label_197500;
        case 0x197504u: goto label_197504;
        case 0x197508u: goto label_197508;
        case 0x19750cu: goto label_19750c;
        case 0x197510u: goto label_197510;
        case 0x197514u: goto label_197514;
        case 0x197518u: goto label_197518;
        case 0x19751cu: goto label_19751c;
        case 0x197520u: goto label_197520;
        case 0x197524u: goto label_197524;
        case 0x197528u: goto label_197528;
        case 0x19752cu: goto label_19752c;
        case 0x197530u: goto label_197530;
        case 0x197534u: goto label_197534;
        case 0x197538u: goto label_197538;
        case 0x19753cu: goto label_19753c;
        case 0x197540u: goto label_197540;
        case 0x197544u: goto label_197544;
        case 0x197548u: goto label_197548;
        case 0x19754cu: goto label_19754c;
        case 0x197550u: goto label_197550;
        case 0x197554u: goto label_197554;
        case 0x197558u: goto label_197558;
        case 0x19755cu: goto label_19755c;
        case 0x197560u: goto label_197560;
        case 0x197564u: goto label_197564;
        case 0x197568u: goto label_197568;
        case 0x19756cu: goto label_19756c;
        case 0x197570u: goto label_197570;
        case 0x197574u: goto label_197574;
        case 0x197578u: goto label_197578;
        case 0x19757cu: goto label_19757c;
        case 0x197580u: goto label_197580;
        case 0x197584u: goto label_197584;
        case 0x197588u: goto label_197588;
        case 0x19758cu: goto label_19758c;
        case 0x197590u: goto label_197590;
        case 0x197594u: goto label_197594;
        case 0x197598u: goto label_197598;
        case 0x19759cu: goto label_19759c;
        case 0x1975a0u: goto label_1975a0;
        case 0x1975a4u: goto label_1975a4;
        case 0x1975a8u: goto label_1975a8;
        case 0x1975acu: goto label_1975ac;
        case 0x1975b0u: goto label_1975b0;
        case 0x1975b4u: goto label_1975b4;
        case 0x1975b8u: goto label_1975b8;
        case 0x1975bcu: goto label_1975bc;
        case 0x1975c0u: goto label_1975c0;
        case 0x1975c4u: goto label_1975c4;
        case 0x1975c8u: goto label_1975c8;
        case 0x1975ccu: goto label_1975cc;
        case 0x1975d0u: goto label_1975d0;
        case 0x1975d4u: goto label_1975d4;
        case 0x1975d8u: goto label_1975d8;
        case 0x1975dcu: goto label_1975dc;
        case 0x1975e0u: goto label_1975e0;
        case 0x1975e4u: goto label_1975e4;
        case 0x1975e8u: goto label_1975e8;
        case 0x1975ecu: goto label_1975ec;
        case 0x1975f0u: goto label_1975f0;
        case 0x1975f4u: goto label_1975f4;
        case 0x1975f8u: goto label_1975f8;
        case 0x1975fcu: goto label_1975fc;
        case 0x197600u: goto label_197600;
        case 0x197604u: goto label_197604;
        case 0x197608u: goto label_197608;
        case 0x19760cu: goto label_19760c;
        case 0x197610u: goto label_197610;
        case 0x197614u: goto label_197614;
        case 0x197618u: goto label_197618;
        case 0x19761cu: goto label_19761c;
        case 0x197620u: goto label_197620;
        case 0x197624u: goto label_197624;
        case 0x197628u: goto label_197628;
        case 0x19762cu: goto label_19762c;
        case 0x197630u: goto label_197630;
        case 0x197634u: goto label_197634;
        case 0x197638u: goto label_197638;
        case 0x19763cu: goto label_19763c;
        case 0x197640u: goto label_197640;
        case 0x197644u: goto label_197644;
        case 0x197648u: goto label_197648;
        case 0x19764cu: goto label_19764c;
        case 0x197650u: goto label_197650;
        case 0x197654u: goto label_197654;
        case 0x197658u: goto label_197658;
        case 0x19765cu: goto label_19765c;
        case 0x197660u: goto label_197660;
        case 0x197664u: goto label_197664;
        case 0x197668u: goto label_197668;
        case 0x19766cu: goto label_19766c;
        case 0x197670u: goto label_197670;
        case 0x197674u: goto label_197674;
        case 0x197678u: goto label_197678;
        case 0x19767cu: goto label_19767c;
        case 0x197680u: goto label_197680;
        case 0x197684u: goto label_197684;
        case 0x197688u: goto label_197688;
        case 0x19768cu: goto label_19768c;
        case 0x197690u: goto label_197690;
        case 0x197694u: goto label_197694;
        case 0x197698u: goto label_197698;
        case 0x19769cu: goto label_19769c;
        case 0x1976a0u: goto label_1976a0;
        case 0x1976a4u: goto label_1976a4;
        case 0x1976a8u: goto label_1976a8;
        case 0x1976acu: goto label_1976ac;
        case 0x1976b0u: goto label_1976b0;
        case 0x1976b4u: goto label_1976b4;
        case 0x1976b8u: goto label_1976b8;
        case 0x1976bcu: goto label_1976bc;
        case 0x1976c0u: goto label_1976c0;
        case 0x1976c4u: goto label_1976c4;
        case 0x1976c8u: goto label_1976c8;
        case 0x1976ccu: goto label_1976cc;
        case 0x1976d0u: goto label_1976d0;
        case 0x1976d4u: goto label_1976d4;
        case 0x1976d8u: goto label_1976d8;
        case 0x1976dcu: goto label_1976dc;
        case 0x1976e0u: goto label_1976e0;
        case 0x1976e4u: goto label_1976e4;
        case 0x1976e8u: goto label_1976e8;
        case 0x1976ecu: goto label_1976ec;
        case 0x1976f0u: goto label_1976f0;
        case 0x1976f4u: goto label_1976f4;
        case 0x1976f8u: goto label_1976f8;
        case 0x1976fcu: goto label_1976fc;
        case 0x197700u: goto label_197700;
        case 0x197704u: goto label_197704;
        case 0x197708u: goto label_197708;
        case 0x19770cu: goto label_19770c;
        case 0x197710u: goto label_197710;
        case 0x197714u: goto label_197714;
        case 0x197718u: goto label_197718;
        case 0x19771cu: goto label_19771c;
        case 0x197720u: goto label_197720;
        case 0x197724u: goto label_197724;
        case 0x197728u: goto label_197728;
        case 0x19772cu: goto label_19772c;
        case 0x197730u: goto label_197730;
        case 0x197734u: goto label_197734;
        case 0x197738u: goto label_197738;
        case 0x19773cu: goto label_19773c;
        case 0x197740u: goto label_197740;
        case 0x197744u: goto label_197744;
        case 0x197748u: goto label_197748;
        case 0x19774cu: goto label_19774c;
        case 0x197750u: goto label_197750;
        case 0x197754u: goto label_197754;
        case 0x197758u: goto label_197758;
        case 0x19775cu: goto label_19775c;
        case 0x197760u: goto label_197760;
        case 0x197764u: goto label_197764;
        case 0x197768u: goto label_197768;
        case 0x19776cu: goto label_19776c;
        case 0x197770u: goto label_197770;
        case 0x197774u: goto label_197774;
        case 0x197778u: goto label_197778;
        case 0x19777cu: goto label_19777c;
        case 0x197780u: goto label_197780;
        case 0x197784u: goto label_197784;
        case 0x197788u: goto label_197788;
        case 0x19778cu: goto label_19778c;
        case 0x197790u: goto label_197790;
        case 0x197794u: goto label_197794;
        case 0x197798u: goto label_197798;
        case 0x19779cu: goto label_19779c;
        case 0x1977a0u: goto label_1977a0;
        case 0x1977a4u: goto label_1977a4;
        case 0x1977a8u: goto label_1977a8;
        case 0x1977acu: goto label_1977ac;
        case 0x1977b0u: goto label_1977b0;
        case 0x1977b4u: goto label_1977b4;
        case 0x1977b8u: goto label_1977b8;
        case 0x1977bcu: goto label_1977bc;
        case 0x1977c0u: goto label_1977c0;
        case 0x1977c4u: goto label_1977c4;
        case 0x1977c8u: goto label_1977c8;
        case 0x1977ccu: goto label_1977cc;
        case 0x1977d0u: goto label_1977d0;
        case 0x1977d4u: goto label_1977d4;
        case 0x1977d8u: goto label_1977d8;
        case 0x1977dcu: goto label_1977dc;
        case 0x1977e0u: goto label_1977e0;
        case 0x1977e4u: goto label_1977e4;
        case 0x1977e8u: goto label_1977e8;
        case 0x1977ecu: goto label_1977ec;
        case 0x1977f0u: goto label_1977f0;
        case 0x1977f4u: goto label_1977f4;
        case 0x1977f8u: goto label_1977f8;
        case 0x1977fcu: goto label_1977fc;
        case 0x197800u: goto label_197800;
        case 0x197804u: goto label_197804;
        case 0x197808u: goto label_197808;
        case 0x19780cu: goto label_19780c;
        case 0x197810u: goto label_197810;
        case 0x197814u: goto label_197814;
        case 0x197818u: goto label_197818;
        case 0x19781cu: goto label_19781c;
        case 0x197820u: goto label_197820;
        case 0x197824u: goto label_197824;
        case 0x197828u: goto label_197828;
        case 0x19782cu: goto label_19782c;
        case 0x197830u: goto label_197830;
        case 0x197834u: goto label_197834;
        case 0x197838u: goto label_197838;
        case 0x19783cu: goto label_19783c;
        case 0x197840u: goto label_197840;
        case 0x197844u: goto label_197844;
        case 0x197848u: goto label_197848;
        case 0x19784cu: goto label_19784c;
        case 0x197850u: goto label_197850;
        case 0x197854u: goto label_197854;
        case 0x197858u: goto label_197858;
        case 0x19785cu: goto label_19785c;
        case 0x197860u: goto label_197860;
        case 0x197864u: goto label_197864;
        case 0x197868u: goto label_197868;
        case 0x19786cu: goto label_19786c;
        case 0x197870u: goto label_197870;
        case 0x197874u: goto label_197874;
        case 0x197878u: goto label_197878;
        case 0x19787cu: goto label_19787c;
        case 0x197880u: goto label_197880;
        case 0x197884u: goto label_197884;
        case 0x197888u: goto label_197888;
        case 0x19788cu: goto label_19788c;
        case 0x197890u: goto label_197890;
        case 0x197894u: goto label_197894;
        case 0x197898u: goto label_197898;
        case 0x19789cu: goto label_19789c;
        case 0x1978a0u: goto label_1978a0;
        case 0x1978a4u: goto label_1978a4;
        case 0x1978a8u: goto label_1978a8;
        case 0x1978acu: goto label_1978ac;
        case 0x1978b0u: goto label_1978b0;
        case 0x1978b4u: goto label_1978b4;
        case 0x1978b8u: goto label_1978b8;
        case 0x1978bcu: goto label_1978bc;
        case 0x1978c0u: goto label_1978c0;
        case 0x1978c4u: goto label_1978c4;
        case 0x1978c8u: goto label_1978c8;
        case 0x1978ccu: goto label_1978cc;
        case 0x1978d0u: goto label_1978d0;
        case 0x1978d4u: goto label_1978d4;
        case 0x1978d8u: goto label_1978d8;
        case 0x1978dcu: goto label_1978dc;
        case 0x1978e0u: goto label_1978e0;
        case 0x1978e4u: goto label_1978e4;
        case 0x1978e8u: goto label_1978e8;
        case 0x1978ecu: goto label_1978ec;
        case 0x1978f0u: goto label_1978f0;
        case 0x1978f4u: goto label_1978f4;
        case 0x1978f8u: goto label_1978f8;
        case 0x1978fcu: goto label_1978fc;
        case 0x197900u: goto label_197900;
        case 0x197904u: goto label_197904;
        case 0x197908u: goto label_197908;
        case 0x19790cu: goto label_19790c;
        case 0x197910u: goto label_197910;
        case 0x197914u: goto label_197914;
        case 0x197918u: goto label_197918;
        case 0x19791cu: goto label_19791c;
        case 0x197920u: goto label_197920;
        case 0x197924u: goto label_197924;
        case 0x197928u: goto label_197928;
        case 0x19792cu: goto label_19792c;
        case 0x197930u: goto label_197930;
        case 0x197934u: goto label_197934;
        case 0x197938u: goto label_197938;
        case 0x19793cu: goto label_19793c;
        case 0x197940u: goto label_197940;
        case 0x197944u: goto label_197944;
        case 0x197948u: goto label_197948;
        case 0x19794cu: goto label_19794c;
        case 0x197950u: goto label_197950;
        case 0x197954u: goto label_197954;
        case 0x197958u: goto label_197958;
        case 0x19795cu: goto label_19795c;
        case 0x197960u: goto label_197960;
        case 0x197964u: goto label_197964;
        case 0x197968u: goto label_197968;
        case 0x19796cu: goto label_19796c;
        case 0x197970u: goto label_197970;
        case 0x197974u: goto label_197974;
        case 0x197978u: goto label_197978;
        case 0x19797cu: goto label_19797c;
        case 0x197980u: goto label_197980;
        case 0x197984u: goto label_197984;
        case 0x197988u: goto label_197988;
        case 0x19798cu: goto label_19798c;
        case 0x197990u: goto label_197990;
        case 0x197994u: goto label_197994;
        case 0x197998u: goto label_197998;
        case 0x19799cu: goto label_19799c;
        case 0x1979a0u: goto label_1979a0;
        case 0x1979a4u: goto label_1979a4;
        case 0x1979a8u: goto label_1979a8;
        case 0x1979acu: goto label_1979ac;
        case 0x1979b0u: goto label_1979b0;
        case 0x1979b4u: goto label_1979b4;
        case 0x1979b8u: goto label_1979b8;
        case 0x1979bcu: goto label_1979bc;
        case 0x1979c0u: goto label_1979c0;
        case 0x1979c4u: goto label_1979c4;
        case 0x1979c8u: goto label_1979c8;
        case 0x1979ccu: goto label_1979cc;
        case 0x1979d0u: goto label_1979d0;
        case 0x1979d4u: goto label_1979d4;
        case 0x1979d8u: goto label_1979d8;
        case 0x1979dcu: goto label_1979dc;
        case 0x1979e0u: goto label_1979e0;
        case 0x1979e4u: goto label_1979e4;
        case 0x1979e8u: goto label_1979e8;
        case 0x1979ecu: goto label_1979ec;
        case 0x1979f0u: goto label_1979f0;
        case 0x1979f4u: goto label_1979f4;
        case 0x1979f8u: goto label_1979f8;
        case 0x1979fcu: goto label_1979fc;
        case 0x197a00u: goto label_197a00;
        case 0x197a04u: goto label_197a04;
        case 0x197a08u: goto label_197a08;
        case 0x197a0cu: goto label_197a0c;
        case 0x197a10u: goto label_197a10;
        case 0x197a14u: goto label_197a14;
        case 0x197a18u: goto label_197a18;
        case 0x197a1cu: goto label_197a1c;
        case 0x197a20u: goto label_197a20;
        case 0x197a24u: goto label_197a24;
        case 0x197a28u: goto label_197a28;
        case 0x197a2cu: goto label_197a2c;
        case 0x197a30u: goto label_197a30;
        case 0x197a34u: goto label_197a34;
        case 0x197a38u: goto label_197a38;
        case 0x197a3cu: goto label_197a3c;
        case 0x197a40u: goto label_197a40;
        case 0x197a44u: goto label_197a44;
        case 0x197a48u: goto label_197a48;
        case 0x197a4cu: goto label_197a4c;
        case 0x197a50u: goto label_197a50;
        case 0x197a54u: goto label_197a54;
        case 0x197a58u: goto label_197a58;
        case 0x197a5cu: goto label_197a5c;
        case 0x197a60u: goto label_197a60;
        case 0x197a64u: goto label_197a64;
        case 0x197a68u: goto label_197a68;
        case 0x197a6cu: goto label_197a6c;
        case 0x197a70u: goto label_197a70;
        case 0x197a74u: goto label_197a74;
        case 0x197a78u: goto label_197a78;
        case 0x197a7cu: goto label_197a7c;
        case 0x197a80u: goto label_197a80;
        case 0x197a84u: goto label_197a84;
        case 0x197a88u: goto label_197a88;
        case 0x197a8cu: goto label_197a8c;
        case 0x197a90u: goto label_197a90;
        case 0x197a94u: goto label_197a94;
        case 0x197a98u: goto label_197a98;
        case 0x197a9cu: goto label_197a9c;
        case 0x197aa0u: goto label_197aa0;
        case 0x197aa4u: goto label_197aa4;
        case 0x197aa8u: goto label_197aa8;
        case 0x197aacu: goto label_197aac;
        case 0x197ab0u: goto label_197ab0;
        case 0x197ab4u: goto label_197ab4;
        case 0x197ab8u: goto label_197ab8;
        case 0x197abcu: goto label_197abc;
        case 0x197ac0u: goto label_197ac0;
        case 0x197ac4u: goto label_197ac4;
        case 0x197ac8u: goto label_197ac8;
        case 0x197accu: goto label_197acc;
        case 0x197ad0u: goto label_197ad0;
        case 0x197ad4u: goto label_197ad4;
        case 0x197ad8u: goto label_197ad8;
        case 0x197adcu: goto label_197adc;
        case 0x197ae0u: goto label_197ae0;
        case 0x197ae4u: goto label_197ae4;
        case 0x197ae8u: goto label_197ae8;
        case 0x197aecu: goto label_197aec;
        case 0x197af0u: goto label_197af0;
        case 0x197af4u: goto label_197af4;
        case 0x197af8u: goto label_197af8;
        case 0x197afcu: goto label_197afc;
        case 0x197b00u: goto label_197b00;
        case 0x197b04u: goto label_197b04;
        case 0x197b08u: goto label_197b08;
        case 0x197b0cu: goto label_197b0c;
        case 0x197b10u: goto label_197b10;
        case 0x197b14u: goto label_197b14;
        case 0x197b18u: goto label_197b18;
        case 0x197b1cu: goto label_197b1c;
        case 0x197b20u: goto label_197b20;
        case 0x197b24u: goto label_197b24;
        case 0x197b28u: goto label_197b28;
        case 0x197b2cu: goto label_197b2c;
        case 0x197b30u: goto label_197b30;
        case 0x197b34u: goto label_197b34;
        case 0x197b38u: goto label_197b38;
        case 0x197b3cu: goto label_197b3c;
        case 0x197b40u: goto label_197b40;
        case 0x197b44u: goto label_197b44;
        case 0x197b48u: goto label_197b48;
        case 0x197b4cu: goto label_197b4c;
        case 0x197b50u: goto label_197b50;
        case 0x197b54u: goto label_197b54;
        case 0x197b58u: goto label_197b58;
        case 0x197b5cu: goto label_197b5c;
        case 0x197b60u: goto label_197b60;
        case 0x197b64u: goto label_197b64;
        case 0x197b68u: goto label_197b68;
        case 0x197b6cu: goto label_197b6c;
        case 0x197b70u: goto label_197b70;
        case 0x197b74u: goto label_197b74;
        case 0x197b78u: goto label_197b78;
        case 0x197b7cu: goto label_197b7c;
        case 0x197b80u: goto label_197b80;
        case 0x197b84u: goto label_197b84;
        case 0x197b88u: goto label_197b88;
        case 0x197b8cu: goto label_197b8c;
        case 0x197b90u: goto label_197b90;
        case 0x197b94u: goto label_197b94;
        case 0x197b98u: goto label_197b98;
        case 0x197b9cu: goto label_197b9c;
        case 0x197ba0u: goto label_197ba0;
        case 0x197ba4u: goto label_197ba4;
        case 0x197ba8u: goto label_197ba8;
        case 0x197bacu: goto label_197bac;
        case 0x197bb0u: goto label_197bb0;
        case 0x197bb4u: goto label_197bb4;
        case 0x197bb8u: goto label_197bb8;
        case 0x197bbcu: goto label_197bbc;
        case 0x197bc0u: goto label_197bc0;
        case 0x197bc4u: goto label_197bc4;
        case 0x197bc8u: goto label_197bc8;
        case 0x197bccu: goto label_197bcc;
        case 0x197bd0u: goto label_197bd0;
        case 0x197bd4u: goto label_197bd4;
        case 0x197bd8u: goto label_197bd8;
        case 0x197bdcu: goto label_197bdc;
        case 0x197be0u: goto label_197be0;
        case 0x197be4u: goto label_197be4;
        case 0x197be8u: goto label_197be8;
        case 0x197becu: goto label_197bec;
        case 0x197bf0u: goto label_197bf0;
        case 0x197bf4u: goto label_197bf4;
        case 0x197bf8u: goto label_197bf8;
        case 0x197bfcu: goto label_197bfc;
        case 0x197c00u: goto label_197c00;
        case 0x197c04u: goto label_197c04;
        case 0x197c08u: goto label_197c08;
        case 0x197c0cu: goto label_197c0c;
        case 0x197c10u: goto label_197c10;
        case 0x197c14u: goto label_197c14;
        case 0x197c18u: goto label_197c18;
        case 0x197c1cu: goto label_197c1c;
        case 0x197c20u: goto label_197c20;
        case 0x197c24u: goto label_197c24;
        case 0x197c28u: goto label_197c28;
        case 0x197c2cu: goto label_197c2c;
        case 0x197c30u: goto label_197c30;
        case 0x197c34u: goto label_197c34;
        case 0x197c38u: goto label_197c38;
        case 0x197c3cu: goto label_197c3c;
        case 0x197c40u: goto label_197c40;
        case 0x197c44u: goto label_197c44;
        case 0x197c48u: goto label_197c48;
        case 0x197c4cu: goto label_197c4c;
        case 0x197c50u: goto label_197c50;
        case 0x197c54u: goto label_197c54;
        case 0x197c58u: goto label_197c58;
        case 0x197c5cu: goto label_197c5c;
        case 0x197c60u: goto label_197c60;
        case 0x197c64u: goto label_197c64;
        case 0x197c68u: goto label_197c68;
        case 0x197c6cu: goto label_197c6c;
        case 0x197c70u: goto label_197c70;
        case 0x197c74u: goto label_197c74;
        case 0x197c78u: goto label_197c78;
        case 0x197c7cu: goto label_197c7c;
        case 0x197c80u: goto label_197c80;
        case 0x197c84u: goto label_197c84;
        case 0x197c88u: goto label_197c88;
        case 0x197c8cu: goto label_197c8c;
        case 0x197c90u: goto label_197c90;
        case 0x197c94u: goto label_197c94;
        case 0x197c98u: goto label_197c98;
        case 0x197c9cu: goto label_197c9c;
        case 0x197ca0u: goto label_197ca0;
        case 0x197ca4u: goto label_197ca4;
        case 0x197ca8u: goto label_197ca8;
        case 0x197cacu: goto label_197cac;
        case 0x197cb0u: goto label_197cb0;
        case 0x197cb4u: goto label_197cb4;
        case 0x197cb8u: goto label_197cb8;
        case 0x197cbcu: goto label_197cbc;
        case 0x197cc0u: goto label_197cc0;
        case 0x197cc4u: goto label_197cc4;
        case 0x197cc8u: goto label_197cc8;
        case 0x197cccu: goto label_197ccc;
        case 0x197cd0u: goto label_197cd0;
        case 0x197cd4u: goto label_197cd4;
        case 0x197cd8u: goto label_197cd8;
        case 0x197cdcu: goto label_197cdc;
        case 0x197ce0u: goto label_197ce0;
        case 0x197ce4u: goto label_197ce4;
        case 0x197ce8u: goto label_197ce8;
        case 0x197cecu: goto label_197cec;
        case 0x197cf0u: goto label_197cf0;
        case 0x197cf4u: goto label_197cf4;
        case 0x197cf8u: goto label_197cf8;
        case 0x197cfcu: goto label_197cfc;
        case 0x197d00u: goto label_197d00;
        case 0x197d04u: goto label_197d04;
        case 0x197d08u: goto label_197d08;
        case 0x197d0cu: goto label_197d0c;
        case 0x197d10u: goto label_197d10;
        case 0x197d14u: goto label_197d14;
        case 0x197d18u: goto label_197d18;
        case 0x197d1cu: goto label_197d1c;
        case 0x197d20u: goto label_197d20;
        case 0x197d24u: goto label_197d24;
        case 0x197d28u: goto label_197d28;
        case 0x197d2cu: goto label_197d2c;
        case 0x197d30u: goto label_197d30;
        case 0x197d34u: goto label_197d34;
        case 0x197d38u: goto label_197d38;
        case 0x197d3cu: goto label_197d3c;
        case 0x197d40u: goto label_197d40;
        case 0x197d44u: goto label_197d44;
        case 0x197d48u: goto label_197d48;
        case 0x197d4cu: goto label_197d4c;
        case 0x197d50u: goto label_197d50;
        case 0x197d54u: goto label_197d54;
        case 0x197d58u: goto label_197d58;
        case 0x197d5cu: goto label_197d5c;
        case 0x197d60u: goto label_197d60;
        case 0x197d64u: goto label_197d64;
        case 0x197d68u: goto label_197d68;
        case 0x197d6cu: goto label_197d6c;
        case 0x197d70u: goto label_197d70;
        case 0x197d74u: goto label_197d74;
        case 0x197d78u: goto label_197d78;
        case 0x197d7cu: goto label_197d7c;
        case 0x197d80u: goto label_197d80;
        case 0x197d84u: goto label_197d84;
        case 0x197d88u: goto label_197d88;
        case 0x197d8cu: goto label_197d8c;
        case 0x197d90u: goto label_197d90;
        case 0x197d94u: goto label_197d94;
        case 0x197d98u: goto label_197d98;
        case 0x197d9cu: goto label_197d9c;
        case 0x197da0u: goto label_197da0;
        case 0x197da4u: goto label_197da4;
        case 0x197da8u: goto label_197da8;
        case 0x197dacu: goto label_197dac;
        case 0x197db0u: goto label_197db0;
        case 0x197db4u: goto label_197db4;
        case 0x197db8u: goto label_197db8;
        case 0x197dbcu: goto label_197dbc;
        case 0x197dc0u: goto label_197dc0;
        case 0x197dc4u: goto label_197dc4;
        case 0x197dc8u: goto label_197dc8;
        case 0x197dccu: goto label_197dcc;
        case 0x197dd0u: goto label_197dd0;
        case 0x197dd4u: goto label_197dd4;
        case 0x197dd8u: goto label_197dd8;
        case 0x197ddcu: goto label_197ddc;
        case 0x197de0u: goto label_197de0;
        case 0x197de4u: goto label_197de4;
        case 0x197de8u: goto label_197de8;
        case 0x197decu: goto label_197dec;
        case 0x197df0u: goto label_197df0;
        case 0x197df4u: goto label_197df4;
        case 0x197df8u: goto label_197df8;
        case 0x197dfcu: goto label_197dfc;
        case 0x197e00u: goto label_197e00;
        case 0x197e04u: goto label_197e04;
        case 0x197e08u: goto label_197e08;
        case 0x197e0cu: goto label_197e0c;
        case 0x197e10u: goto label_197e10;
        case 0x197e14u: goto label_197e14;
        case 0x197e18u: goto label_197e18;
        case 0x197e1cu: goto label_197e1c;
        case 0x197e20u: goto label_197e20;
        case 0x197e24u: goto label_197e24;
        case 0x197e28u: goto label_197e28;
        case 0x197e2cu: goto label_197e2c;
        case 0x197e30u: goto label_197e30;
        case 0x197e34u: goto label_197e34;
        case 0x197e38u: goto label_197e38;
        case 0x197e3cu: goto label_197e3c;
        case 0x197e40u: goto label_197e40;
        case 0x197e44u: goto label_197e44;
        case 0x197e48u: goto label_197e48;
        case 0x197e4cu: goto label_197e4c;
        case 0x197e50u: goto label_197e50;
        case 0x197e54u: goto label_197e54;
        case 0x197e58u: goto label_197e58;
        case 0x197e5cu: goto label_197e5c;
        case 0x197e60u: goto label_197e60;
        case 0x197e64u: goto label_197e64;
        default: break;
    }

    ctx->pc = 0x196f10u;

label_196f10:
    // 0x196f10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_196f14:
    // 0x196f14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x196f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_196f18:
    // 0x196f18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x196f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_196f1c:
    // 0x196f1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_196f20:
    // 0x196f20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x196f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196f24:
    // 0x196f24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196f28:
    // 0x196f28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x196f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_196f2c:
    // 0x196f2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x196f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196f30:
    // 0x196f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196f34:
    // 0x196f34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x196f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196f38:
    // 0x196f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196f3c:
    // 0x196f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196f40:
    // 0x196f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196f44:
    // 0x196f44: 0xc063dd4  jal         func_18F750
label_196f48:
    if (ctx->pc == 0x196F48u) {
        ctx->pc = 0x196F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F44u;
        // 0x196f48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F4Cu;
        goto label_196f4c;
    }
    ctx->pc = 0x196F44u;
    SET_GPR_U32(ctx, 31, 0x196F4Cu);
    ctx->pc = 0x196F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F44u;
    // 0x196f48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x196F44u, 0x196F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F4Cu;
label_196f4c:
    // 0x196f4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x196f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_196f50:
    // 0x196f50: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x196f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_196f54:
    // 0x196f54: 0x104401c3  beq         $v0, $a0, . + 4 + (0x1C3 << 2)
label_196f58:
    if (ctx->pc == 0x196F58u) {
        ctx->pc = 0x196F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F54u;
        // 0x196f58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F5Cu;
        goto label_196f5c;
    }
    ctx->pc = 0x196F54u;
    {
        const bool branch_taken_0x196f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x196F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F54u;
        // 0x196f58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f54) {
            ctx->pc = 0x197664u;
            goto label_197664;
        }
    }
    ctx->pc = 0x196F5Cu;
label_196f5c:
    // 0x196f5c: 0x104301c0  beq         $v0, $v1, . + 4 + (0x1C0 << 2)
label_196f60:
    if (ctx->pc == 0x196F60u) {
        ctx->pc = 0x196F64u;
        goto label_196f64;
    }
    ctx->pc = 0x196F5Cu;
    {
        const bool branch_taken_0x196f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196f5c) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x196F64u;
label_196f64:
    // 0x196f64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x196f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_196f68:
    // 0x196f68: 0x104301ae  beq         $v0, $v1, . + 4 + (0x1AE << 2)
label_196f6c:
    if (ctx->pc == 0x196F6Cu) {
        ctx->pc = 0x196F70u;
        goto label_196f70;
    }
    ctx->pc = 0x196F68u;
    {
        const bool branch_taken_0x196f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196f68) {
            ctx->pc = 0x197624u;
            goto label_197624;
        }
    }
    ctx->pc = 0x196F70u;
label_196f70:
    // 0x196f70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x196f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_196f74:
    // 0x196f74: 0x1043016c  beq         $v0, $v1, . + 4 + (0x16C << 2)
label_196f78:
    if (ctx->pc == 0x196F78u) {
        ctx->pc = 0x196F7Cu;
        goto label_196f7c;
    }
    ctx->pc = 0x196F74u;
    {
        const bool branch_taken_0x196f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196f74) {
            ctx->pc = 0x197528u;
            goto label_197528;
        }
    }
    ctx->pc = 0x196F7Cu;
label_196f7c:
    // 0x196f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196f80:
    // 0x196f80: 0x10430101  beq         $v0, $v1, . + 4 + (0x101 << 2)
label_196f84:
    if (ctx->pc == 0x196F84u) {
        ctx->pc = 0x196F88u;
        goto label_196f88;
    }
    ctx->pc = 0x196F80u;
    {
        const bool branch_taken_0x196f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196f80) {
            ctx->pc = 0x197388u;
            goto label_197388;
        }
    }
    ctx->pc = 0x196F88u;
label_196f88:
    // 0x196f88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196f8c:
    if (ctx->pc == 0x196F8Cu) {
        ctx->pc = 0x196F90u;
        goto label_196f90;
    }
    ctx->pc = 0x196F88u;
    {
        const bool branch_taken_0x196f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f88) {
            ctx->pc = 0x196F98u;
            goto label_196f98;
        }
    }
    ctx->pc = 0x196F90u;
label_196f90:
    // 0x196f90: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_196f94:
    if (ctx->pc == 0x196F94u) {
        ctx->pc = 0x196F98u;
        goto label_196f98;
    }
    ctx->pc = 0x196F90u;
    {
        const bool branch_taken_0x196f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f90) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x196F98u;
label_196f98:
    // 0x196f98: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_196f9c:
    // 0x196f9c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_196fa0:
    // 0x196fa0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x196fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_196fa4:
    // 0x196fa4: 0xaea206d4  sw          $v0, 0x6D4($s5)
    ctx->pc = 0x196fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1748), GPR_U32(ctx, 2));
label_196fa8:
    // 0x196fa8: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_196fac:
    // 0x196fac: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x196facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196fb0:
    // 0x196fb0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x196fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_196fb4:
    // 0x196fb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_196fb8:
    // 0x196fb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_196fbc:
    // 0x196fbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_196fc0:
    // 0x196fc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x196fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_196fc4:
    // 0x196fc4: 0x0  nop
    ctx->pc = 0x196fc4u;
    // NOP
label_196fc8:
    // 0x196fc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_196fcc:
    if (ctx->pc == 0x196FCCu) {
        ctx->pc = 0x196FD0u;
        goto label_196fd0;
    }
    ctx->pc = 0x196FC8u;
    {
        const bool branch_taken_0x196fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196fc8) {
            ctx->pc = 0x196FD4u;
            goto label_196fd4;
        }
    }
    ctx->pc = 0x196FD0u;
label_196fd0:
    // 0x196fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_196fd4:
    // 0x196fd4: 0xaea20328  sw          $v0, 0x328($s5)
    ctx->pc = 0x196fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 2));
label_196fd8:
    // 0x196fd8: 0xaea00670  sw          $zero, 0x670($s5)
    ctx->pc = 0x196fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 0));
label_196fdc:
    // 0x196fdc: 0xaea006a4  sw          $zero, 0x6A4($s5)
    ctx->pc = 0x196fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1700), GPR_U32(ctx, 0));
label_196fe0:
    // 0x196fe0: 0xaea006ac  sw          $zero, 0x6AC($s5)
    ctx->pc = 0x196fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 0));
label_196fe4:
    // 0x196fe4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_196fe8:
    // 0x196fe8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_196fec:
    // 0x196fec: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
label_196ff0:
    if (ctx->pc == 0x196FF0u) {
        ctx->pc = 0x196FF4u;
        goto label_196ff4;
    }
    ctx->pc = 0x196FECu;
    {
        const bool branch_taken_0x196fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196fec) {
            ctx->pc = 0x197148u;
            goto label_197148;
        }
    }
    ctx->pc = 0x196FF4u;
label_196ff4:
    // 0x196ff4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x196ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_196ff8:
    // 0x196ff8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x196ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_196ffc:
    // 0x196ffc: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
label_197000:
    if (ctx->pc == 0x197000u) {
        ctx->pc = 0x197004u;
        goto label_197004;
    }
    ctx->pc = 0x196FFCu;
    {
        const bool branch_taken_0x196ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x196ffc) {
            ctx->pc = 0x197138u;
            goto label_197138;
        }
    }
    ctx->pc = 0x197004u;
label_197004:
    // 0x197004: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x197004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_197008:
    // 0x197008: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_19700c:
    if (ctx->pc == 0x19700Cu) {
        ctx->pc = 0x197010u;
        goto label_197010;
    }
    ctx->pc = 0x197008u;
    {
        const bool branch_taken_0x197008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197008) {
            ctx->pc = 0x1970B0u;
            goto label_1970b0;
        }
    }
    ctx->pc = 0x197010u;
label_197010:
    // 0x197010: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_197014:
    // 0x197014: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_197018:
    if (ctx->pc == 0x197018u) {
        ctx->pc = 0x19701Cu;
        goto label_19701c;
    }
    ctx->pc = 0x197014u;
    {
        const bool branch_taken_0x197014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197014) {
            ctx->pc = 0x197070u;
            goto label_197070;
        }
    }
    ctx->pc = 0x19701Cu;
label_19701c:
    // 0x19701c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_197020:
    // 0x197020: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_197024:
    if (ctx->pc == 0x197024u) {
        ctx->pc = 0x197028u;
        goto label_197028;
    }
    ctx->pc = 0x197020u;
    {
        const bool branch_taken_0x197020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197020) {
            ctx->pc = 0x197030u;
            goto label_197030;
        }
    }
    ctx->pc = 0x197028u;
label_197028:
    // 0x197028: 0x10000044  b           . + 4 + (0x44 << 2)
label_19702c:
    if (ctx->pc == 0x19702Cu) {
        ctx->pc = 0x197030u;
        goto label_197030;
    }
    ctx->pc = 0x197028u;
    {
        const bool branch_taken_0x197028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197028) {
            ctx->pc = 0x19713Cu;
            goto label_19713c;
        }
    }
    ctx->pc = 0x197030u;
label_197030:
    // 0x197030: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_197034:
    // 0x197034: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x197034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_197038:
    // 0x197038: 0xc057040  jal         func_15C100
label_19703c:
    if (ctx->pc == 0x19703Cu) {
        ctx->pc = 0x19703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197038u;
        // 0x19703c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197040u;
        goto label_197040;
    }
    ctx->pc = 0x197038u;
    SET_GPR_U32(ctx, 31, 0x197040u);
    ctx->pc = 0x19703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197038u;
    // 0x19703c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x197038u, 0x197040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197040u;
label_197040:
    // 0x197040: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x197040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_197044:
    // 0x197044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197048:
    // 0x197048: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x197048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19704c:
    // 0x19704c: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x19704cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
label_197050:
    // 0x197050: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_197054:
    // 0x197054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197058:
    // 0x197058: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x197058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19705c:
    // 0x19705c: 0xac500698  sw          $s0, 0x698($v0)
    ctx->pc = 0x19705cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1688), GPR_U32(ctx, 16));
label_197060:
    // 0x197060: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x197060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_197064:
    // 0x197064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_197068:
    // 0x197068: 0x10000034  b           . + 4 + (0x34 << 2)
label_19706c:
    if (ctx->pc == 0x19706Cu) {
        ctx->pc = 0x19706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197068u;
        // 0x19706c: 0xaea20670  sw          $v0, 0x670($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197070u;
        goto label_197070;
    }
    ctx->pc = 0x197068u;
    {
        const bool branch_taken_0x197068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197068u;
        // 0x19706c: 0xaea20670  sw          $v0, 0x670($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197068) {
            ctx->pc = 0x19713Cu;
            goto label_19713c;
        }
    }
    ctx->pc = 0x197070u;
label_197070:
    // 0x197070: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_197074:
    // 0x197074: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x197074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_197078:
    // 0x197078: 0xc057040  jal         func_15C100
label_19707c:
    if (ctx->pc == 0x19707Cu) {
        ctx->pc = 0x19707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197078u;
        // 0x19707c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197080u;
        goto label_197080;
    }
    ctx->pc = 0x197078u;
    SET_GPR_U32(ctx, 31, 0x197080u);
    ctx->pc = 0x19707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197078u;
    // 0x19707c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x197078u, 0x197080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197080u;
label_197080:
    // 0x197080: 0x8ea306a4  lw          $v1, 0x6A4($s5)
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
label_197084:
    // 0x197084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197088:
    // 0x197088: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19708c:
    // 0x19708c: 0xac6206b0  sw          $v0, 0x6B0($v1)
    ctx->pc = 0x19708cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 2));
label_197090:
    // 0x197090: 0x8ea206a4  lw          $v0, 0x6A4($s5)
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
label_197094:
    // 0x197094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197098:
    // 0x197098: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19709c:
    // 0x19709c: 0xac5006c0  sw          $s0, 0x6C0($v0)
    ctx->pc = 0x19709cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1728), GPR_U32(ctx, 16));
label_1970a0:
    // 0x1970a0: 0x8ea206a4  lw          $v0, 0x6A4($s5)
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
label_1970a4:
    // 0x1970a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1970a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1970a8:
    // 0x1970a8: 0x10000024  b           . + 4 + (0x24 << 2)
label_1970ac:
    if (ctx->pc == 0x1970ACu) {
        ctx->pc = 0x1970ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970A8u;
        // 0x1970ac: 0xaea206a4  sw          $v0, 0x6A4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970B0u;
        goto label_1970b0;
    }
    ctx->pc = 0x1970A8u;
    {
        const bool branch_taken_0x1970a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1970ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970A8u;
        // 0x1970ac: 0xaea206a4  sw          $v0, 0x6A4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970a8) {
            ctx->pc = 0x19713Cu;
            goto label_19713c;
        }
    }
    ctx->pc = 0x1970B0u;
label_1970b0:
    // 0x1970b0: 0xaeb006e0  sw          $s0, 0x6E0($s5)
    ctx->pc = 0x1970b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1760), GPR_U32(ctx, 16));
label_1970b4:
    // 0x1970b4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1970b8:
    // 0x1970b8: 0x26b106e0  addiu       $s1, $s5, 0x6E0
    ctx->pc = 0x1970b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1760));
label_1970bc:
    // 0x1970bc: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1970c0:
    // 0x1970c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1970c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1970c4:
    // 0x1970c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1970c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1970c8:
    // 0x1970c8: 0xc064f7c  jal         func_193DF0
label_1970cc:
    if (ctx->pc == 0x1970CCu) {
        ctx->pc = 0x1970CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970C8u;
        // 0x1970cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970D0u;
        goto label_1970d0;
    }
    ctx->pc = 0x1970C8u;
    SET_GPR_U32(ctx, 31, 0x1970D0u);
    ctx->pc = 0x1970CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970C8u;
    // 0x1970cc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1970C8u, 0x1970D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970D0u;
label_1970d0:
    // 0x1970d0: 0xc04bf44  jal         func_12FD10
label_1970d4:
    if (ctx->pc == 0x1970D4u) {
        ctx->pc = 0x1970D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970D0u;
        // 0x1970d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970D8u;
        goto label_1970d8;
    }
    ctx->pc = 0x1970D0u;
    SET_GPR_U32(ctx, 31, 0x1970D8u);
    ctx->pc = 0x1970D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970D0u;
    // 0x1970d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1970D0u, 0x1970D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970D8u;
label_1970d8:
    // 0x1970d8: 0xaea206e4  sw          $v0, 0x6E4($s5)
    ctx->pc = 0x1970d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1764), GPR_U32(ctx, 2));
label_1970dc:
    // 0x1970dc: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x1970dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_1970e0:
    // 0x1970e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1970e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1970e4:
    // 0x1970e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1970e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1970e8:
    // 0x1970e8: 0x320f809  jalr        $t9
label_1970ec:
    if (ctx->pc == 0x1970ECu) {
        ctx->pc = 0x1970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970E8u;
        // 0x1970ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1970F0u;
        goto label_1970f0;
    }
    ctx->pc = 0x1970E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1970F0u);
        ctx->pc = 0x1970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970E8u;
        // 0x1970ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1970E8u, 0x1970F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1970F0u;
label_1970f0:
    // 0x1970f0: 0xaea006dc  sw          $zero, 0x6DC($s5)
    ctx->pc = 0x1970f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 0));
label_1970f4:
    // 0x1970f4: 0x8ea206dc  lw          $v0, 0x6DC($s5)
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1756)));
label_1970f8:
    // 0x1970f8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1970fc:
    if (ctx->pc == 0x1970FCu) {
        ctx->pc = 0x197100u;
        goto label_197100;
    }
    ctx->pc = 0x1970F8u;
    {
        const bool branch_taken_0x1970f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1970f8) {
            ctx->pc = 0x19713Cu;
            goto label_19713c;
        }
    }
    ctx->pc = 0x197100u;
label_197100:
    // 0x197100: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197104:
    // 0x197104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197108:
    // 0x197108: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x197108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19710c:
    // 0x19710c: 0x320f809  jalr        $t9
label_197110:
    if (ctx->pc == 0x197110u) {
        ctx->pc = 0x197110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19710Cu;
        // 0x197110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197114u;
        goto label_197114;
    }
    ctx->pc = 0x19710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197114u);
        ctx->pc = 0x197110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19710Cu;
        // 0x197110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19710Cu, 0x197114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197114u;
label_197114:
    // 0x197114: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197118:
    // 0x197118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19711c:
    // 0x19711c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197120:
    // 0x197120: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197124:
    // 0x197124: 0x320f809  jalr        $t9
label_197128:
    if (ctx->pc == 0x197128u) {
        ctx->pc = 0x197128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197124u;
        // 0x197128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19712Cu;
        goto label_19712c;
    }
    ctx->pc = 0x197124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19712Cu);
        ctx->pc = 0x197128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197124u;
        // 0x197128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197124u, 0x19712Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19712Cu;
label_19712c:
    // 0x19712c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197130:
    // 0x197130: 0x10000002  b           . + 4 + (0x2 << 2)
label_197134:
    if (ctx->pc == 0x197134u) {
        ctx->pc = 0x197134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197130u;
        // 0x197134: 0xaea206dc  sw          $v0, 0x6DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197138u;
        goto label_197138;
    }
    ctx->pc = 0x197130u;
    {
        const bool branch_taken_0x197130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197130u;
        // 0x197134: 0xaea206dc  sw          $v0, 0x6DC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197130) {
            ctx->pc = 0x19713Cu;
            goto label_19713c;
        }
    }
    ctx->pc = 0x197138u;
label_197138:
    // 0x197138: 0xaeb006d0  sw          $s0, 0x6D0($s5)
    ctx->pc = 0x197138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1744), GPR_U32(ctx, 16));
label_19713c:
    // 0x19713c: 0x0  nop
    ctx->pc = 0x19713cu;
    // NOP
label_197140:
    // 0x197140: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
label_197144:
    if (ctx->pc == 0x197144u) {
        ctx->pc = 0x197144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197140u;
        // 0x197144: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197148u;
        goto label_197148;
    }
    ctx->pc = 0x197140u;
    {
        const bool branch_taken_0x197140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197140u;
        // 0x197144: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197140) {
            ctx->pc = 0x196FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196fe4;
        }
    }
    ctx->pc = 0x197148u;
label_197148:
    // 0x197148: 0x8ea306d4  lw          $v1, 0x6D4($s5)
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1748)));
label_19714c:
    // 0x19714c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_197150:
    // 0x197150: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
label_197154:
    if (ctx->pc == 0x197154u) {
        ctx->pc = 0x197154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197150u;
        // 0x197154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197158u;
        goto label_197158;
    }
    ctx->pc = 0x197150u;
    {
        const bool branch_taken_0x197150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197150u;
        // 0x197154: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197150) {
            ctx->pc = 0x197278u;
            goto label_197278;
        }
    }
    ctx->pc = 0x197158u;
label_197158:
    // 0x197158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19715c:
    // 0x19715c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_197160:
    if (ctx->pc == 0x197160u) {
        ctx->pc = 0x197160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19715Cu;
        // 0x197160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197164u;
        goto label_197164;
    }
    ctx->pc = 0x19715Cu;
    {
        const bool branch_taken_0x19715c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19715Cu;
        // 0x197160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19715c) {
            ctx->pc = 0x1971E4u;
            goto label_1971e4;
        }
    }
    ctx->pc = 0x197164u;
label_197164:
    // 0x197164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_197168:
    if (ctx->pc == 0x197168u) {
        ctx->pc = 0x197168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197164u;
        // 0x197168: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19716Cu;
        goto label_19716c;
    }
    ctx->pc = 0x197164u;
    {
        const bool branch_taken_0x197164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197164u;
        // 0x197168: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197164) {
            ctx->pc = 0x197178u;
            goto label_197178;
        }
    }
    ctx->pc = 0x19716Cu;
label_19716c:
    // 0x19716c: 0x10000064  b           . + 4 + (0x64 << 2)
label_197170:
    if (ctx->pc == 0x197170u) {
        ctx->pc = 0x197174u;
        goto label_197174;
    }
    ctx->pc = 0x19716Cu;
    {
        const bool branch_taken_0x19716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19716c) {
            ctx->pc = 0x197300u;
            goto label_197300;
        }
    }
    ctx->pc = 0x197174u;
label_197174:
    // 0x197174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197178:
    // 0x197178: 0x10000013  b           . + 4 + (0x13 << 2)
label_19717c:
    if (ctx->pc == 0x19717Cu) {
        ctx->pc = 0x19717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197178u;
        // 0x19717c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197180u;
        goto label_197180;
    }
    ctx->pc = 0x197178u;
    {
        const bool branch_taken_0x197178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197178u;
        // 0x19717c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197178) {
            ctx->pc = 0x1971C8u;
            goto label_1971c8;
        }
    }
    ctx->pc = 0x197180u;
label_197180:
    // 0x197180: 0x2b29821  addu        $s3, $s5, $s2
    ctx->pc = 0x197180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_197184:
    // 0x197184: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197188:
    // 0x197188: 0x8e630674  lw          $v1, 0x674($s3)
    ctx->pc = 0x197188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
label_19718c:
    // 0x19718c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197190:
    // 0x197190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197194:
    // 0x197194: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197198:
    // 0x197198: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19719c:
    // 0x19719c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1971a0:
    // 0x1971a0: 0x320f809  jalr        $t9
label_1971a4:
    if (ctx->pc == 0x1971A4u) {
        ctx->pc = 0x1971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A0u;
        // 0x1971a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971A8u;
        goto label_1971a8;
    }
    ctx->pc = 0x1971A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1971A8u);
        ctx->pc = 0x1971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A0u;
        // 0x1971a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971A0u, 0x1971A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1971A8u;
label_1971a8:
    // 0x1971a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1971a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1971ac:
    // 0x1971ac: 0xc05ee1c  jal         func_17B870
label_1971b0:
    if (ctx->pc == 0x1971B0u) {
        ctx->pc = 0x1971B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ACu;
        // 0x1971b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971B4u;
        goto label_1971b4;
    }
    ctx->pc = 0x1971ACu;
    SET_GPR_U32(ctx, 31, 0x1971B4u);
    ctx->pc = 0x1971B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1971ACu;
    // 0x1971b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1971ACu, 0x1971B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971B4u;
label_1971b4:
    // 0x1971b4: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1971b8:
    // 0x1971b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1971b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1971bc:
    // 0x1971bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1971bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1971c0:
    // 0x1971c0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1971c4:
    // 0x1971c4: 0xae620680  sw          $v0, 0x680($s3)
    ctx->pc = 0x1971c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
label_1971c8:
    // 0x1971c8: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_1971cc:
    // 0x1971cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1971ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1971d0:
    // 0x1971d0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1971d4:
    if (ctx->pc == 0x1971D4u) {
        ctx->pc = 0x1971D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971D0u;
        // 0x1971d4: 0x2b29821  addu        $s3, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971D8u;
        goto label_1971d8;
    }
    ctx->pc = 0x1971D0u;
    {
        const bool branch_taken_0x1971d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1971D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971D0u;
        // 0x1971d4: 0x2b29821  addu        $s3, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971d0) {
            ctx->pc = 0x197184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197184;
        }
    }
    ctx->pc = 0x1971D8u;
label_1971d8:
    // 0x1971d8: 0x10000049  b           . + 4 + (0x49 << 2)
label_1971dc:
    if (ctx->pc == 0x1971DCu) {
        ctx->pc = 0x1971E0u;
        goto label_1971e0;
    }
    ctx->pc = 0x1971D8u;
    {
        const bool branch_taken_0x1971d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971d8) {
            ctx->pc = 0x197300u;
            goto label_197300;
        }
    }
    ctx->pc = 0x1971E0u;
label_1971e0:
    // 0x1971e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1971e4:
    // 0x1971e4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1971e8:
    if (ctx->pc == 0x1971E8u) {
        ctx->pc = 0x1971E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971E4u;
        // 0x1971e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971ECu;
        goto label_1971ec;
    }
    ctx->pc = 0x1971E4u;
    {
        const bool branch_taken_0x1971e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971E4u;
        // 0x1971e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971e4) {
            ctx->pc = 0x197254u;
            goto label_197254;
        }
    }
    ctx->pc = 0x1971ECu;
label_1971ec:
    // 0x1971ec: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1971ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1971f0:
    // 0x1971f0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1971f4:
    // 0x1971f4: 0x8c630674  lw          $v1, 0x674($v1)
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_1971f8:
    // 0x1971f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1971fc:
    // 0x1971fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197200:
    // 0x197200: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x197200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197204:
    // 0x197204: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_197208:
    // 0x197208: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x197208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_19720c:
    // 0x19720c: 0x320f809  jalr        $t9
label_197210:
    if (ctx->pc == 0x197210u) {
        ctx->pc = 0x197210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19720Cu;
        // 0x197210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197214u;
        goto label_197214;
    }
    ctx->pc = 0x19720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197214u);
        ctx->pc = 0x197210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19720Cu;
        // 0x197210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19720Cu, 0x197214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197214u;
label_197214:
    // 0x197214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197218:
    // 0x197218: 0xc05ee1c  jal         func_17B870
label_19721c:
    if (ctx->pc == 0x19721Cu) {
        ctx->pc = 0x19721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197218u;
        // 0x19721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197220u;
        goto label_197220;
    }
    ctx->pc = 0x197218u;
    SET_GPR_U32(ctx, 31, 0x197220u);
    ctx->pc = 0x19721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197218u;
    // 0x19721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x197218u, 0x197220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197220u;
label_197220:
    // 0x197220: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x197220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_197224:
    // 0x197224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197228:
    // 0x197228: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19722c:
    // 0x19722c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197230:
    // 0x197230: 0x320f809  jalr        $t9
label_197234:
    if (ctx->pc == 0x197234u) {
        ctx->pc = 0x197234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197230u;
        // 0x197234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197238u;
        goto label_197238;
    }
    ctx->pc = 0x197230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197238u);
        ctx->pc = 0x197234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197230u;
        // 0x197234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197230u, 0x197238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197238u;
label_197238:
    // 0x197238: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19723c:
    // 0x19723c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197240:
    // 0x197240: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_197244:
    // 0x197244: 0x320f809  jalr        $t9
label_197248:
    if (ctx->pc == 0x197248u) {
        ctx->pc = 0x197248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197244u;
        // 0x197248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19724Cu;
        goto label_19724c;
    }
    ctx->pc = 0x197244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19724Cu);
        ctx->pc = 0x197248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197244u;
        // 0x197248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197244u, 0x19724Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19724Cu;
label_19724c:
    // 0x19724c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19724cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_197250:
    // 0x197250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_197254:
    // 0x197254: 0x0  nop
    ctx->pc = 0x197254u;
    // NOP
label_197258:
    // 0x197258: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x197258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19725c:
    // 0x19725c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x19725cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_197260:
    // 0x197260: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_197264:
    if (ctx->pc == 0x197264u) {
        ctx->pc = 0x197264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197260u;
        // 0x197264: 0x2b01821  addu        $v1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197268u;
        goto label_197268;
    }
    ctx->pc = 0x197260u;
    {
        const bool branch_taken_0x197260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197260u;
        // 0x197264: 0x2b01821  addu        $v1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197260) {
            ctx->pc = 0x1971F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1971f0;
        }
    }
    ctx->pc = 0x197268u;
label_197268:
    // 0x197268: 0xaea0068c  sw          $zero, 0x68C($s5)
    ctx->pc = 0x197268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1676), GPR_U32(ctx, 0));
label_19726c:
    // 0x19726c: 0x10000024  b           . + 4 + (0x24 << 2)
label_197270:
    if (ctx->pc == 0x197270u) {
        ctx->pc = 0x197270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19726Cu;
        // 0x197270: 0xaea00680  sw          $zero, 0x680($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197274u;
        goto label_197274;
    }
    ctx->pc = 0x19726Cu;
    {
        const bool branch_taken_0x19726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19726Cu;
        // 0x197270: 0xaea00680  sw          $zero, 0x680($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19726c) {
            ctx->pc = 0x197300u;
            goto label_197300;
        }
    }
    ctx->pc = 0x197274u;
label_197274:
    // 0x197274: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197278:
    // 0x197278: 0x10000019  b           . + 4 + (0x19 << 2)
label_19727c:
    if (ctx->pc == 0x19727Cu) {
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197280u;
        goto label_197280;
    }
    ctx->pc = 0x197278u;
    {
        const bool branch_taken_0x197278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197278) {
            ctx->pc = 0x1972E0u;
            goto label_1972e0;
        }
    }
    ctx->pc = 0x197280u;
label_197280:
    // 0x197280: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_197284:
    // 0x197284: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197288:
    // 0x197288: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x197288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19728c:
    // 0x19728c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19728cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197290:
    // 0x197290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197294:
    // 0x197294: 0x8c532cd8  lw          $s3, 0x2CD8($v0)
    ctx->pc = 0x197294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197298:
    // 0x197298: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19729c:
    // 0x19729c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1972a0:
    // 0x1972a0: 0x320f809  jalr        $t9
label_1972a4:
    if (ctx->pc == 0x1972A4u) {
        ctx->pc = 0x1972A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A0u;
        // 0x1972a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972A8u;
        goto label_1972a8;
    }
    ctx->pc = 0x1972A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1972A8u);
        ctx->pc = 0x1972A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A0u;
        // 0x1972a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972A0u, 0x1972A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1972A8u;
label_1972a8:
    // 0x1972a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1972a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1972ac:
    // 0x1972ac: 0xc05ee1c  jal         func_17B870
label_1972b0:
    if (ctx->pc == 0x1972B0u) {
        ctx->pc = 0x1972B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ACu;
        // 0x1972b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972B4u;
        goto label_1972b4;
    }
    ctx->pc = 0x1972ACu;
    SET_GPR_U32(ctx, 31, 0x1972B4u);
    ctx->pc = 0x1972B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972ACu;
    // 0x1972b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1972ACu, 0x1972B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972B4u;
label_1972b4:
    // 0x1972b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1972b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1972b8:
    // 0x1972b8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1972bc:
    // 0x1972bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1972bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1972c0:
    // 0x1972c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1972c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1972c4:
    // 0x1972c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1972c8:
    // 0x1972c8: 0x320f809  jalr        $t9
label_1972cc:
    if (ctx->pc == 0x1972CCu) {
        ctx->pc = 0x1972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C8u;
        // 0x1972cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972D0u;
        goto label_1972d0;
    }
    ctx->pc = 0x1972C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1972D0u);
        ctx->pc = 0x1972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C8u;
        // 0x1972cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972C8u, 0x1972D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1972D0u;
label_1972d0:
    // 0x1972d0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1972d4:
    // 0x1972d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1972d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1972d8:
    // 0x1972d8: 0xae22068c  sw          $v0, 0x68C($s1)
    ctx->pc = 0x1972d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
label_1972dc:
    // 0x1972dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1972dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1972e0:
    // 0x1972e0: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_1972e4:
    // 0x1972e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1972e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1972e8:
    // 0x1972e8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1972ec:
    if (ctx->pc == 0x1972ECu) {
        ctx->pc = 0x1972ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972E8u;
        // 0x1972ec: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972F0u;
        goto label_1972f0;
    }
    ctx->pc = 0x1972E8u;
    {
        const bool branch_taken_0x1972e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972E8u;
        // 0x1972ec: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972e8) {
            ctx->pc = 0x197284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197284;
        }
    }
    ctx->pc = 0x1972F0u;
label_1972f0:
    // 0x1972f0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1972f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1972f4:
    // 0x1972f4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1972f8:
    // 0x1972f8: 0xaea20680  sw          $v0, 0x680($s5)
    ctx->pc = 0x1972f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 2));
label_1972fc:
    // 0x1972fc: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x1972fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
label_197300:
    // 0x197300: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_197304:
    // 0x197304: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197308:
    // 0x197308: 0xc064918  jal         func_192460
label_19730c:
    if (ctx->pc == 0x19730Cu) {
        ctx->pc = 0x19730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197308u;
        // 0x19730c: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197310u;
        goto label_197310;
    }
    ctx->pc = 0x197308u;
    SET_GPR_U32(ctx, 31, 0x197310u);
    ctx->pc = 0x19730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197308u;
    // 0x19730c: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x197308u, 0x197310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197310u;
label_197310:
    // 0x197310: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_197314:
    // 0x197314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197318:
    // 0x197318: 0xaea206d8  sw          $v0, 0x6D8($s5)
    ctx->pc = 0x197318u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1752), GPR_U32(ctx, 2));
label_19731c:
    // 0x19731c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197320:
    // 0x197320: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_197324:
    // 0x197324: 0xc064a64  jal         func_192990
label_197328:
    if (ctx->pc == 0x197328u) {
        ctx->pc = 0x197328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197324u;
        // 0x197328: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19732Cu;
        goto label_19732c;
    }
    ctx->pc = 0x197324u;
    SET_GPR_U32(ctx, 31, 0x19732Cu);
    ctx->pc = 0x197328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197324u;
    // 0x197328: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x197324u, 0x19732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19732Cu;
label_19732c:
    // 0x19732c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197330:
    // 0x197330: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x197330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_197334:
    // 0x197334: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_197338:
    if (ctx->pc == 0x197338u) {
        ctx->pc = 0x197338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197334u;
        // 0x197338: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19733Cu;
        goto label_19733c;
    }
    ctx->pc = 0x197334u;
    {
        const bool branch_taken_0x197334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x197338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197334u;
        // 0x197338: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197334) {
            ctx->pc = 0x197348u;
            goto label_197348;
        }
    }
    ctx->pc = 0x19733Cu;
label_19733c:
    // 0x19733c: 0x10000008  b           . + 4 + (0x8 << 2)
label_197340:
    if (ctx->pc == 0x197340u) {
        ctx->pc = 0x197340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19733Cu;
        // 0x197340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197344u;
        goto label_197344;
    }
    ctx->pc = 0x19733Cu;
    {
        const bool branch_taken_0x19733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19733Cu;
        // 0x197340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19733c) {
            ctx->pc = 0x197360u;
            goto label_197360;
        }
    }
    ctx->pc = 0x197344u;
label_197344:
    // 0x197344: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x197344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_197348:
    // 0x197348: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19734c:
    // 0x19734c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197350:
    // 0x197350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197354:
    // 0x197354: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_197358:
    // 0x197358: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19735c:
    // 0x19735c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x19735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_197360:
    // 0x197360: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x197360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_197364:
    // 0x197364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197368:
    // 0x197368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19736c:
    // 0x19736c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197370:
    // 0x197370: 0x320f809  jalr        $t9
label_197374:
    if (ctx->pc == 0x197374u) {
        ctx->pc = 0x197374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197370u;
        // 0x197374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197378u;
        goto label_197378;
    }
    ctx->pc = 0x197370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197378u);
        ctx->pc = 0x197374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197370u;
        // 0x197374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197370u, 0x197378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197378u;
label_197378:
    // 0x197378: 0xc063e14  jal         func_18F850
label_19737c:
    if (ctx->pc == 0x19737Cu) {
        ctx->pc = 0x19737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197378u;
        // 0x19737c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197380u;
        goto label_197380;
    }
    ctx->pc = 0x197378u;
    SET_GPR_U32(ctx, 31, 0x197380u);
    ctx->pc = 0x19737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197378u;
    // 0x19737c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x197378u, 0x197380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197380u;
label_197380:
    // 0x197380: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_197384:
    if (ctx->pc == 0x197384u) {
        ctx->pc = 0x197388u;
        goto label_197388;
    }
    ctx->pc = 0x197380u;
    {
        const bool branch_taken_0x197380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197380) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x197388u;
label_197388:
    // 0x197388: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19738c:
    // 0x19738c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_197390:
    // 0x197390: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_197394:
    // 0x197394: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x197394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_197398:
    // 0x197398: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x197398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19739c:
    // 0x19739c: 0x102000b0  beqz        $at, . + 4 + (0xB0 << 2)
label_1973a0:
    if (ctx->pc == 0x1973A0u) {
        ctx->pc = 0x1973A4u;
        goto label_1973a4;
    }
    ctx->pc = 0x19739Cu;
    {
        const bool branch_taken_0x19739c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19739c) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x1973A4u;
label_1973a4:
    // 0x1973a4: 0x8c9e2c10  lw          $fp, 0x2C10($a0)
    ctx->pc = 0x1973a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
label_1973a8:
    // 0x1973a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1973a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1973ac:
    // 0x1973ac: 0x10000058  b           . + 4 + (0x58 << 2)
label_1973b0:
    if (ctx->pc == 0x1973B0u) {
        ctx->pc = 0x1973B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973ACu;
        // 0x1973b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973B4u;
        goto label_1973b4;
    }
    ctx->pc = 0x1973ACu;
    {
        const bool branch_taken_0x1973ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973ACu;
        // 0x1973b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973ac) {
            ctx->pc = 0x197510u;
            goto label_197510;
        }
    }
    ctx->pc = 0x1973B4u;
label_1973b4:
    // 0x1973b4: 0x2b09021  addu        $s2, $s5, $s0
    ctx->pc = 0x1973b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1973b8:
    // 0x1973b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1973b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1973bc:
    // 0x1973bc: 0x8e4206c0  lw          $v0, 0x6C0($s2)
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1728)));
label_1973c0:
    // 0x1973c0: 0x265106c0  addiu       $s1, $s2, 0x6C0
    ctx->pc = 0x1973c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1728));
label_1973c4:
    // 0x1973c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1973c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1973c8:
    // 0x1973c8: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_1973cc:
    // 0x1973cc: 0x0  nop
    ctx->pc = 0x1973ccu;
    // NOP
label_1973d0:
    // 0x1973d0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1973d4:
    // 0x1973d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1973d8:
    // 0x1973d8: 0x13c20009  beq         $fp, $v0, . + 4 + (0x9 << 2)
label_1973dc:
    if (ctx->pc == 0x1973DCu) {
        ctx->pc = 0x1973E0u;
        goto label_1973e0;
    }
    ctx->pc = 0x1973D8u;
    {
        const bool branch_taken_0x1973d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1973d8) {
            ctx->pc = 0x197400u;
            goto label_197400;
        }
    }
    ctx->pc = 0x1973E0u;
label_1973e0:
    // 0x1973e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1973e4:
    // 0x1973e4: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1973e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_1973e8:
    // 0x1973e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1973ec:
    if (ctx->pc == 0x1973ECu) {
        ctx->pc = 0x1973ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973E8u;
        // 0x1973ec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1973F0u;
        goto label_1973f0;
    }
    ctx->pc = 0x1973E8u;
    {
        const bool branch_taken_0x1973e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973E8u;
        // 0x1973ec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973e8) {
            ctx->pc = 0x197400u;
            goto label_197400;
        }
    }
    ctx->pc = 0x1973F0u;
label_1973f0:
    // 0x1973f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1973f4:
    // 0x1973f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1973f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1973f8:
    // 0x1973f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1973fc:
    if (ctx->pc == 0x1973FCu) {
        ctx->pc = 0x197400u;
        goto label_197400;
    }
    ctx->pc = 0x1973F8u;
    {
        const bool branch_taken_0x1973f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973f8) {
            ctx->pc = 0x1973CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1973cc;
        }
    }
    ctx->pc = 0x197400u;
label_197400:
    // 0x197400: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x197400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_197404:
    // 0x197404: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_197408:
    if (ctx->pc == 0x197408u) {
        ctx->pc = 0x19740Cu;
        goto label_19740c;
    }
    ctx->pc = 0x197404u;
    {
        const bool branch_taken_0x197404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197404) {
            ctx->pc = 0x197508u;
            goto label_197508;
        }
    }
    ctx->pc = 0x19740Cu;
label_19740c:
    // 0x19740c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19740cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197410:
    // 0x197410: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_197414:
    // 0x197414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197418:
    // 0x197418: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_19741c:
    if (ctx->pc == 0x19741Cu) {
        ctx->pc = 0x197420u;
        goto label_197420;
    }
    ctx->pc = 0x197418u;
    {
        const bool branch_taken_0x197418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197418) {
            ctx->pc = 0x197508u;
            goto label_197508;
        }
    }
    ctx->pc = 0x197420u;
label_197420:
    // 0x197420: 0xc057f74  jal         func_15FDD0
label_197424:
    if (ctx->pc == 0x197424u) {
        ctx->pc = 0x197424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197420u;
        // 0x197424: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197428u;
        goto label_197428;
    }
    ctx->pc = 0x197420u;
    SET_GPR_U32(ctx, 31, 0x197428u);
    ctx->pc = 0x197424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197420u;
    // 0x197424: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x197420u, 0x197428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197428u;
label_197428:
    // 0x197428: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
label_19742c:
    if (ctx->pc == 0x19742Cu) {
        ctx->pc = 0x197430u;
        goto label_197430;
    }
    ctx->pc = 0x197428u;
    {
        const bool branch_taken_0x197428 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x197428) {
            ctx->pc = 0x197480u;
            goto label_197480;
        }
    }
    ctx->pc = 0x197430u;
label_197430:
    // 0x197430: 0xc057f04  jal         func_15FC10
label_197434:
    if (ctx->pc == 0x197434u) {
        ctx->pc = 0x197434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197430u;
        // 0x197434: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197438u;
        goto label_197438;
    }
    ctx->pc = 0x197430u;
    SET_GPR_U32(ctx, 31, 0x197438u);
    ctx->pc = 0x197434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197430u;
    // 0x197434: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x197430u, 0x197438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197438u;
label_197438:
    // 0x197438: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x197438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19743c:
    // 0x19743c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_197440:
    // 0x197440: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197444:
    // 0x197444: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x197444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_197448:
    // 0x197448: 0xc0422e0  jal         func_108B80
label_19744c:
    if (ctx->pc == 0x19744Cu) {
        ctx->pc = 0x19744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197448u;
        // 0x19744c: 0x8e4506b0  lw          $a1, 0x6B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197450u;
        goto label_197450;
    }
    ctx->pc = 0x197448u;
    SET_GPR_U32(ctx, 31, 0x197450u);
    ctx->pc = 0x19744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197448u;
    // 0x19744c: 0x8e4506b0  lw          $a1, 0x6B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x197448u, 0x197450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197450u;
label_197450:
    // 0x197450: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197454:
    // 0x197454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_197458:
    // 0x197458: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19745c:
    // 0x19745c: 0xc057ef0  jal         func_15FBC0
label_197460:
    if (ctx->pc == 0x197460u) {
        ctx->pc = 0x197460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19745Cu;
        // 0x197460: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197464u;
        goto label_197464;
    }
    ctx->pc = 0x19745Cu;
    SET_GPR_U32(ctx, 31, 0x197464u);
    ctx->pc = 0x197460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19745Cu;
    // 0x197460: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBC0u, 0x19745Cu, 0x197464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197464u;
label_197464:
    // 0x197464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197468:
    // 0x197468: 0xc063e08  jal         func_18F820
label_19746c:
    if (ctx->pc == 0x19746Cu) {
        ctx->pc = 0x19746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197468u;
        // 0x19746c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197470u;
        goto label_197470;
    }
    ctx->pc = 0x197468u;
    SET_GPR_U32(ctx, 31, 0x197470u);
    ctx->pc = 0x19746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197468u;
    // 0x19746c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x197468u, 0x197470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197470u;
label_197470:
    // 0x197470: 0xaeb306ac  sw          $s3, 0x6AC($s5)
    ctx->pc = 0x197470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 19));
label_197474:
    // 0x197474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197478:
    // 0x197478: 0x10000023  b           . + 4 + (0x23 << 2)
label_19747c:
    if (ctx->pc == 0x19747Cu) {
        ctx->pc = 0x19747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197478u;
        // 0x19747c: 0xaea206a8  sw          $v0, 0x6A8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197480u;
        goto label_197480;
    }
    ctx->pc = 0x197478u;
    {
        const bool branch_taken_0x197478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197478u;
        // 0x19747c: 0xaea206a8  sw          $v0, 0x6A8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197478) {
            ctx->pc = 0x197508u;
            goto label_197508;
        }
    }
    ctx->pc = 0x197480u;
label_197480:
    // 0x197480: 0xc042688  jal         func_109A20
label_197484:
    if (ctx->pc == 0x197484u) {
        ctx->pc = 0x197484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197480u;
        // 0x197484: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197488u;
        goto label_197488;
    }
    ctx->pc = 0x197480u;
    SET_GPR_U32(ctx, 31, 0x197488u);
    ctx->pc = 0x197484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197480u;
    // 0x197484: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A20u, 0x197480u, 0x197488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197488u;
label_197488:
    // 0x197488: 0xc057f04  jal         func_15FC10
label_19748c:
    if (ctx->pc == 0x19748Cu) {
        ctx->pc = 0x19748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197488u;
        // 0x19748c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197490u;
        goto label_197490;
    }
    ctx->pc = 0x197488u;
    SET_GPR_U32(ctx, 31, 0x197490u);
    ctx->pc = 0x19748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197488u;
    // 0x19748c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x197488u, 0x197490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197490u;
label_197490:
    // 0x197490: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_197494:
    // 0x197494: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197498:
    // 0x197498: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19749c:
    // 0x19749c: 0xc0422e0  jal         func_108B80
label_1974a0:
    if (ctx->pc == 0x1974A0u) {
        ctx->pc = 0x1974A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19749Cu;
        // 0x1974a0: 0x8e4506b0  lw          $a1, 0x6B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974A4u;
        goto label_1974a4;
    }
    ctx->pc = 0x19749Cu;
    SET_GPR_U32(ctx, 31, 0x1974A4u);
    ctx->pc = 0x1974A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19749Cu;
    // 0x1974a0: 0x8e4506b0  lw          $a1, 0x6B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x19749Cu, 0x1974A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974A4u;
label_1974a4:
    // 0x1974a4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1974a8:
    // 0x1974a8: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1974a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1974ac:
    // 0x1974ac: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1974b0:
    if (ctx->pc == 0x1974B0u) {
        ctx->pc = 0x1974B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974ACu;
        // 0x1974b0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974B4u;
        goto label_1974b4;
    }
    ctx->pc = 0x1974ACu;
    {
        const bool branch_taken_0x1974ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1974B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974ACu;
        // 0x1974b0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974ac) {
            ctx->pc = 0x1974C0u;
            goto label_1974c0;
        }
    }
    ctx->pc = 0x1974B4u;
label_1974b4:
    // 0x1974b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1974b8:
    if (ctx->pc == 0x1974B8u) {
        ctx->pc = 0x1974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974B4u;
        // 0x1974b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974BCu;
        goto label_1974bc;
    }
    ctx->pc = 0x1974B4u;
    {
        const bool branch_taken_0x1974b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974B4u;
        // 0x1974b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974b4) {
            ctx->pc = 0x1974D8u;
            goto label_1974d8;
        }
    }
    ctx->pc = 0x1974BCu;
label_1974bc:
    // 0x1974bc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1974bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1974c0:
    // 0x1974c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1974c4:
    // 0x1974c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1974c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1974c8:
    // 0x1974c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1974c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1974cc:
    // 0x1974cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1974ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1974d0:
    // 0x1974d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1974d4:
    // 0x1974d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1974d8:
    // 0x1974d8: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1974dc:
    // 0x1974dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1974e0:
    // 0x1974e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1974e4:
    // 0x1974e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1974e8:
    // 0x1974e8: 0x320f809  jalr        $t9
label_1974ec:
    if (ctx->pc == 0x1974ECu) {
        ctx->pc = 0x1974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974E8u;
        // 0x1974ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974F0u;
        goto label_1974f0;
    }
    ctx->pc = 0x1974E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1974F0u);
        ctx->pc = 0x1974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974E8u;
        // 0x1974ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1974E8u, 0x1974F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1974F0u;
label_1974f0:
    // 0x1974f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1974f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1974f4:
    // 0x1974f4: 0xc063e08  jal         func_18F820
label_1974f8:
    if (ctx->pc == 0x1974F8u) {
        ctx->pc = 0x1974F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974F4u;
        // 0x1974f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974FCu;
        goto label_1974fc;
    }
    ctx->pc = 0x1974F4u;
    SET_GPR_U32(ctx, 31, 0x1974FCu);
    ctx->pc = 0x1974F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974F4u;
    // 0x1974f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1974F4u, 0x1974FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974FCu;
label_1974fc:
    // 0x1974fc: 0xaeb306ac  sw          $s3, 0x6AC($s5)
    ctx->pc = 0x1974fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 19));
label_197500:
    // 0x197500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197504:
    // 0x197504: 0xaea206a8  sw          $v0, 0x6A8($s5)
    ctx->pc = 0x197504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 2));
label_197508:
    // 0x197508: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19750c:
    // 0x19750c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19750cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_197510:
    // 0x197510: 0x8ea206a4  lw          $v0, 0x6A4($s5)
    ctx->pc = 0x197510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
label_197514:
    // 0x197514: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x197514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_197518:
    // 0x197518: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_19751c:
    if (ctx->pc == 0x19751Cu) {
        ctx->pc = 0x19751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197518u;
        // 0x19751c: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197520u;
        goto label_197520;
    }
    ctx->pc = 0x197518u;
    {
        const bool branch_taken_0x197518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197518u;
        // 0x19751c: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197518) {
            ctx->pc = 0x1973B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1973b8;
        }
    }
    ctx->pc = 0x197520u;
label_197520:
    // 0x197520: 0x1000004f  b           . + 4 + (0x4F << 2)
label_197524:
    if (ctx->pc == 0x197524u) {
        ctx->pc = 0x197528u;
        goto label_197528;
    }
    ctx->pc = 0x197520u;
    {
        const bool branch_taken_0x197520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197520) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x197528u;
label_197528:
    // 0x197528: 0x8ea206ac  lw          $v0, 0x6AC($s5)
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
label_19752c:
    // 0x19752c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197530:
    // 0x197530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197534:
    // 0x197534: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_197538:
    // 0x197538: 0x8c4206b0  lw          $v0, 0x6B0($v0)
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_19753c:
    // 0x19753c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197540:
    // 0x197540: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_197544:
    // 0x197544: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197548:
    // 0x197548: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x197548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_19754c:
    // 0x19754c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_197550:
    if (ctx->pc == 0x197550u) {
        ctx->pc = 0x197554u;
        goto label_197554;
    }
    ctx->pc = 0x19754Cu;
    {
        const bool branch_taken_0x19754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19754c) {
            ctx->pc = 0x197594u;
            goto label_197594;
        }
    }
    ctx->pc = 0x197554u;
label_197554:
    // 0x197554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197558:
    // 0x197558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19755c:
    // 0x19755c: 0xc063e08  jal         func_18F820
label_197560:
    if (ctx->pc == 0x197560u) {
        ctx->pc = 0x197560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19755Cu;
        // 0x197560: 0xaea006a8  sw          $zero, 0x6A8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197564u;
        goto label_197564;
    }
    ctx->pc = 0x19755Cu;
    SET_GPR_U32(ctx, 31, 0x197564u);
    ctx->pc = 0x197560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19755Cu;
    // 0x197560: 0xaea006a8  sw          $zero, 0x6A8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19755Cu, 0x197564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197564u;
label_197564:
    // 0x197564: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x197564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197568:
    // 0x197568: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19756c:
    // 0x19756c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197570:
    // 0x197570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197574:
    // 0x197574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_197578:
    // 0x197578: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x197578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19757c:
    // 0x19757c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19757cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_197580:
    // 0x197580: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x197580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_197584:
    // 0x197584: 0xc063de0  jal         func_18F780
label_197588:
    if (ctx->pc == 0x197588u) {
        ctx->pc = 0x197588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197584u;
        // 0x197588: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19758Cu;
        goto label_19758c;
    }
    ctx->pc = 0x197584u;
    SET_GPR_U32(ctx, 31, 0x19758Cu);
    ctx->pc = 0x197588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197584u;
    // 0x197588: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x197584u, 0x19758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19758Cu;
label_19758c:
    // 0x19758c: 0x10000034  b           . + 4 + (0x34 << 2)
label_197590:
    if (ctx->pc == 0x197590u) {
        ctx->pc = 0x197594u;
        goto label_197594;
    }
    ctx->pc = 0x19758Cu;
    {
        const bool branch_taken_0x19758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19758c) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x197594u;
label_197594:
    // 0x197594: 0xc057f74  jal         func_15FDD0
label_197598:
    if (ctx->pc == 0x197598u) {
        ctx->pc = 0x19759Cu;
        goto label_19759c;
    }
    ctx->pc = 0x197594u;
    SET_GPR_U32(ctx, 31, 0x19759Cu);
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x197594u, 0x19759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19759Cu;
label_19759c:
    // 0x19759c: 0x4410030  bgez        $v0, . + 4 + (0x30 << 2)
label_1975a0:
    if (ctx->pc == 0x1975A0u) {
        ctx->pc = 0x1975A4u;
        goto label_1975a4;
    }
    ctx->pc = 0x19759Cu;
    {
        const bool branch_taken_0x19759c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19759c) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x1975A4u;
label_1975a4:
    // 0x1975a4: 0x8ea306ac  lw          $v1, 0x6AC($s5)
    ctx->pc = 0x1975a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
label_1975a8:
    // 0x1975a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1975a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1975ac:
    // 0x1975ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1975acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1975b0:
    // 0x1975b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1975b4:
    // 0x1975b4: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x1975b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_1975b8:
    // 0x1975b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1975b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1975bc:
    // 0x1975bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1975bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1975c0:
    // 0x1975c0: 0xc05a1b0  jal         func_1686C0
label_1975c4:
    if (ctx->pc == 0x1975C4u) {
        ctx->pc = 0x1975C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975C0u;
        // 0x1975c4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975C8u;
        goto label_1975c8;
    }
    ctx->pc = 0x1975C0u;
    SET_GPR_U32(ctx, 31, 0x1975C8u);
    ctx->pc = 0x1975C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975C0u;
    // 0x1975c4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1686C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1686C0u, 0x1975C0u, 0x1975C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975C8u;
label_1975c8:
    // 0x1975c8: 0xc042688  jal         func_109A20
label_1975cc:
    if (ctx->pc == 0x1975CCu) {
        ctx->pc = 0x1975CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975C8u;
        // 0x1975cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975D0u;
        goto label_1975d0;
    }
    ctx->pc = 0x1975C8u;
    SET_GPR_U32(ctx, 31, 0x1975D0u);
    ctx->pc = 0x1975CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975C8u;
    // 0x1975cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A20u, 0x1975C8u, 0x1975D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975D0u;
label_1975d0:
    // 0x1975d0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1975d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1975d4:
    // 0x1975d4: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1975d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1975d8:
    // 0x1975d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1975dc:
    if (ctx->pc == 0x1975DCu) {
        ctx->pc = 0x1975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975D8u;
        // 0x1975dc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975E0u;
        goto label_1975e0;
    }
    ctx->pc = 0x1975D8u;
    {
        const bool branch_taken_0x1975d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975D8u;
        // 0x1975dc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975d8) {
            ctx->pc = 0x1975ECu;
            goto label_1975ec;
        }
    }
    ctx->pc = 0x1975E0u;
label_1975e0:
    // 0x1975e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1975e4:
    if (ctx->pc == 0x1975E4u) {
        ctx->pc = 0x1975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E0u;
        // 0x1975e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1975E8u;
        goto label_1975e8;
    }
    ctx->pc = 0x1975E0u;
    {
        const bool branch_taken_0x1975e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975E0u;
        // 0x1975e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975e0) {
            ctx->pc = 0x197604u;
            goto label_197604;
        }
    }
    ctx->pc = 0x1975E8u;
label_1975e8:
    // 0x1975e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1975ec:
    // 0x1975ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1975ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1975f0:
    // 0x1975f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1975f4:
    // 0x1975f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1975f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1975f8:
    // 0x1975f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1975f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1975fc:
    // 0x1975fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1975fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_197600:
    // 0x197600: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x197600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_197604:
    // 0x197604: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x197604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_197608:
    // 0x197608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19760c:
    // 0x19760c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19760cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197610:
    // 0x197610: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197614:
    // 0x197614: 0x320f809  jalr        $t9
label_197618:
    if (ctx->pc == 0x197618u) {
        ctx->pc = 0x197618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197614u;
        // 0x197618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19761Cu;
        goto label_19761c;
    }
    ctx->pc = 0x197614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19761Cu);
        ctx->pc = 0x197618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197614u;
        // 0x197618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197614u, 0x19761Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19761Cu;
label_19761c:
    // 0x19761c: 0x10000010  b           . + 4 + (0x10 << 2)
label_197620:
    if (ctx->pc == 0x197620u) {
        ctx->pc = 0x197624u;
        goto label_197624;
    }
    ctx->pc = 0x19761Cu;
    {
        const bool branch_taken_0x19761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19761c) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x197624u;
label_197624:
    // 0x197624: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_197628:
    // 0x197628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19762c:
    // 0x19762c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_197630:
    // 0x197630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197634:
    // 0x197634: 0xc064a64  jal         func_192990
label_197638:
    if (ctx->pc == 0x197638u) {
        ctx->pc = 0x197638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197634u;
        // 0x197638: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19763Cu;
        goto label_19763c;
    }
    ctx->pc = 0x197634u;
    SET_GPR_U32(ctx, 31, 0x19763Cu);
    ctx->pc = 0x197638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197634u;
    // 0x197638: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x197634u, 0x19763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19763Cu;
label_19763c:
    // 0x19763c: 0x12a001fe  beqz        $s5, . + 4 + (0x1FE << 2)
label_197640:
    if (ctx->pc == 0x197640u) {
        ctx->pc = 0x197644u;
        goto label_197644;
    }
    ctx->pc = 0x19763Cu;
    {
        const bool branch_taken_0x19763c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19763c) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197644u;
label_197644:
    // 0x197644: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x197644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_197648:
    // 0x197648: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19764c:
    // 0x19764c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19764cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_197650:
    // 0x197650: 0x320f809  jalr        $t9
label_197654:
    if (ctx->pc == 0x197654u) {
        ctx->pc = 0x197654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197650u;
        // 0x197654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197658u;
        goto label_197658;
    }
    ctx->pc = 0x197650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197658u);
        ctx->pc = 0x197654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197650u;
        // 0x197654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197650u, 0x197658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197658u;
label_197658:
    // 0x197658: 0x100001f8  b           . + 4 + (0x1F8 << 2)
label_19765c:
    if (ctx->pc == 0x19765Cu) {
        ctx->pc = 0x19765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197658u;
        // 0x19765c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197660u;
        goto label_197660;
    }
    ctx->pc = 0x197658u;
    {
        const bool branch_taken_0x197658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197658u;
        // 0x19765c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197658) {
            ctx->pc = 0x197E3Cu;
            goto label_197e3c;
        }
    }
    ctx->pc = 0x197660u;
label_197660:
    // 0x197660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197664:
    // 0x197664: 0xc063dd4  jal         func_18F750
label_197668:
    if (ctx->pc == 0x197668u) {
        ctx->pc = 0x19766Cu;
        goto label_19766c;
    }
    ctx->pc = 0x197664u;
    SET_GPR_U32(ctx, 31, 0x19766Cu);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x197664u, 0x19766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19766Cu;
label_19766c:
    // 0x19766c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_197670:
    // 0x197670: 0x104301f1  beq         $v0, $v1, . + 4 + (0x1F1 << 2)
label_197674:
    if (ctx->pc == 0x197674u) {
        ctx->pc = 0x197678u;
        goto label_197678;
    }
    ctx->pc = 0x197670u;
    {
        const bool branch_taken_0x197670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x197670) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197678u;
label_197678:
    // 0x197678: 0x8ea406d4  lw          $a0, 0x6D4($s5)
    ctx->pc = 0x197678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1748)));
label_19767c:
    // 0x19767c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_197680:
    // 0x197680: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
label_197684:
    if (ctx->pc == 0x197684u) {
        ctx->pc = 0x197688u;
        goto label_197688;
    }
    ctx->pc = 0x197680u;
    {
        const bool branch_taken_0x197680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197680) {
            ctx->pc = 0x197948u;
            goto label_197948;
        }
    }
    ctx->pc = 0x197688u;
label_197688:
    // 0x197688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19768c:
    // 0x19768c: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_197690:
    if (ctx->pc == 0x197690u) {
        ctx->pc = 0x197690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19768Cu;
        // 0x197690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197694u;
        goto label_197694;
    }
    ctx->pc = 0x19768Cu;
    {
        const bool branch_taken_0x19768c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19768Cu;
        // 0x197690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19768c) {
            ctx->pc = 0x19779Cu;
            goto label_19779c;
        }
    }
    ctx->pc = 0x197694u;
label_197694:
    // 0x197694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_197698:
    if (ctx->pc == 0x197698u) {
        ctx->pc = 0x19769Cu;
        goto label_19769c;
    }
    ctx->pc = 0x197694u;
    {
        const bool branch_taken_0x197694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197694) {
            ctx->pc = 0x1976A4u;
            goto label_1976a4;
        }
    }
    ctx->pc = 0x19769Cu;
label_19769c:
    // 0x19769c: 0x1000011f  b           . + 4 + (0x11F << 2)
label_1976a0:
    if (ctx->pc == 0x1976A0u) {
        ctx->pc = 0x1976A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19769Cu;
        // 0x1976a0: 0x8ea30328  lw          $v1, 0x328($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976A4u;
        goto label_1976a4;
    }
    ctx->pc = 0x19769Cu;
    {
        const bool branch_taken_0x19769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19769Cu;
        // 0x1976a0: 0x8ea30328  lw          $v1, 0x328($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19769c) {
            ctx->pc = 0x197B1Cu;
            goto label_197b1c;
        }
    }
    ctx->pc = 0x1976A4u;
label_1976a4:
    // 0x1976a4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1976a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1976a8:
    // 0x1976a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1976a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1976ac:
    // 0x1976ac: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1976b0:
    if (ctx->pc == 0x1976B0u) {
        ctx->pc = 0x1976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976ACu;
        // 0x1976b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976B4u;
        goto label_1976b4;
    }
    ctx->pc = 0x1976ACu;
    {
        const bool branch_taken_0x1976ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976ACu;
        // 0x1976b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976ac) {
            ctx->pc = 0x197760u;
            goto label_197760;
        }
    }
    ctx->pc = 0x1976B4u;
label_1976b4:
    // 0x1976b4: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1976b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1976b8:
    // 0x1976b8: 0x8c650680  lw          $a1, 0x680($v1)
    ctx->pc = 0x1976b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1664)));
label_1976bc:
    // 0x1976bc: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
label_1976c0:
    if (ctx->pc == 0x1976C0u) {
        ctx->pc = 0x1976C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976BCu;
        // 0x1976c0: 0x24660680  addiu       $a2, $v1, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976C4u;
        goto label_1976c4;
    }
    ctx->pc = 0x1976BCu;
    {
        const bool branch_taken_0x1976bc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1976C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976BCu;
        // 0x1976c0: 0x24660680  addiu       $a2, $v1, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976bc) {
            ctx->pc = 0x197758u;
            goto label_197758;
        }
    }
    ctx->pc = 0x1976C4u;
label_1976c4:
    // 0x1976c4: 0x8c640674  lw          $a0, 0x674($v1)
    ctx->pc = 0x1976c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_1976c8:
    // 0x1976c8: 0x24670674  addiu       $a3, $v1, 0x674
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1652));
label_1976cc:
    // 0x1976cc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1976ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1976d0:
    // 0x1976d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1976d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1976d4:
    // 0x1976d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1976d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1976d8:
    // 0x1976d8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1976d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1976dc:
    // 0x1976dc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1976dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1976e0:
    // 0x1976e0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1976e4:
    if (ctx->pc == 0x1976E4u) {
        ctx->pc = 0x1976E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976E0u;
        // 0x1976e4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1976E8u;
        goto label_1976e8;
    }
    ctx->pc = 0x1976E0u;
    {
        const bool branch_taken_0x1976e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976E0u;
        // 0x1976e4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976e0) {
            ctx->pc = 0x197758u;
            goto label_197758;
        }
    }
    ctx->pc = 0x1976E8u;
label_1976e8:
    // 0x1976e8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1976e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1976ec:
    // 0x1976ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1976ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1976f0:
    // 0x1976f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1976f4:
    // 0x1976f4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1976f8:
    if (ctx->pc == 0x1976F8u) {
        ctx->pc = 0x1976FCu;
        goto label_1976fc;
    }
    ctx->pc = 0x1976F4u;
    {
        const bool branch_taken_0x1976f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1976f4) {
            ctx->pc = 0x197730u;
            goto label_197730;
        }
    }
    ctx->pc = 0x1976FCu;
label_1976fc:
    // 0x1976fc: 0x8ea306d0  lw          $v1, 0x6D0($s5)
    ctx->pc = 0x1976fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_197700:
    // 0x197700: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x197700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_197704:
    // 0x197704: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_197708:
    // 0x197708: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x197708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_19770c:
    // 0x19770c: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_197710:
    // 0x197710: 0xc064b08  jal         func_192C20
label_197714:
    if (ctx->pc == 0x197714u) {
        ctx->pc = 0x197714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197710u;
        // 0x197714: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197718u;
        goto label_197718;
    }
    ctx->pc = 0x197710u;
    SET_GPR_U32(ctx, 31, 0x197718u);
    ctx->pc = 0x197714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197710u;
    // 0x197714: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x197710u, 0x197718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197718u;
label_197718:
    // 0x197718: 0x8ea206d0  lw          $v0, 0x6D0($s5)
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_19771c:
    // 0x19771c: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_197720:
    // 0x197720: 0xc064ee0  jal         func_193B80
label_197724:
    if (ctx->pc == 0x197724u) {
        ctx->pc = 0x197724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197720u;
        // 0x197724: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197728u;
        goto label_197728;
    }
    ctx->pc = 0x197720u;
    SET_GPR_U32(ctx, 31, 0x197728u);
    ctx->pc = 0x197724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197720u;
    // 0x197724: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x197720u, 0x197728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197728u;
label_197728:
    // 0x197728: 0x1000000b  b           . + 4 + (0xB << 2)
label_19772c:
    if (ctx->pc == 0x19772Cu) {
        ctx->pc = 0x197730u;
        goto label_197730;
    }
    ctx->pc = 0x197728u;
    {
        const bool branch_taken_0x197728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197728) {
            ctx->pc = 0x197758u;
            goto label_197758;
        }
    }
    ctx->pc = 0x197730u;
label_197730:
    // 0x197730: 0x8ea606d0  lw          $a2, 0x6D0($s5)
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_197734:
    // 0x197734: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x197734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_197738:
    // 0x197738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19773c:
    // 0x19773c: 0x3408f600  ori         $t0, $zero, 0xF600
    ctx->pc = 0x19773cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
label_197740:
    // 0x197740: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x197740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_197744:
    // 0x197744: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x197744u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197748:
    // 0x197748: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_19774c:
    // 0x19774c: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x19774cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_197750:
    // 0x197750: 0xc064cb4  jal         func_1932D0
label_197754:
    if (ctx->pc == 0x197754u) {
        ctx->pc = 0x197754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197750u;
        // 0x197754: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197758u;
        goto label_197758;
    }
    ctx->pc = 0x197750u;
    SET_GPR_U32(ctx, 31, 0x197758u);
    ctx->pc = 0x197754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197750u;
    // 0x197754: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932D0u, 0x197750u, 0x197758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197758u;
label_197758:
    // 0x197758: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x197758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19775c:
    // 0x19775c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19775cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_197760:
    // 0x197760: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x197760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_197764:
    // 0x197764: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x197764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_197768:
    // 0x197768: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_19776c:
    if (ctx->pc == 0x19776Cu) {
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197768u;
        // 0x19776c: 0x2b01821  addu        $v1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197770u;
        goto label_197770;
    }
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197768u;
        // 0x19776c: 0x2b01821  addu        $v1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197768) {
            ctx->pc = 0x1976B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1976b8;
        }
    }
    ctx->pc = 0x197770u;
label_197770:
    // 0x197770: 0x12e000e9  beqz        $s7, . + 4 + (0xE9 << 2)
label_197774:
    if (ctx->pc == 0x197774u) {
        ctx->pc = 0x197778u;
        goto label_197778;
    }
    ctx->pc = 0x197770u;
    {
        const bool branch_taken_0x197770 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x197770) {
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197778u;
label_197778:
    // 0x197778: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x197778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19777c:
    // 0x19777c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19777cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_197780:
    // 0x197780: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197784:
    // 0x197784: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x197784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_197788:
    // 0x197788: 0xc064a88  jal         func_192A20
label_19778c:
    if (ctx->pc == 0x19778Cu) {
        ctx->pc = 0x19778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197788u;
        // 0x19778c: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197790u;
        goto label_197790;
    }
    ctx->pc = 0x197788u;
    SET_GPR_U32(ctx, 31, 0x197790u);
    ctx->pc = 0x19778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197788u;
    // 0x19778c: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x197788u, 0x197790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197790u;
label_197790:
    // 0x197790: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_197794:
    if (ctx->pc == 0x197794u) {
        ctx->pc = 0x197798u;
        goto label_197798;
    }
    ctx->pc = 0x197790u;
    {
        const bool branch_taken_0x197790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197790) {
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197798u;
label_197798:
    // 0x197798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19779c:
    // 0x19779c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19779cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1977a0:
    // 0x1977a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1977a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1977a4:
    // 0x1977a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1977a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1977a8:
    // 0x1977a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1977ac:
    // 0x1977ac: 0x0  nop
    ctx->pc = 0x1977acu;
    // NOP
label_1977b0:
    // 0x1977b0: 0x2a61821  addu        $v1, $s5, $a2
    ctx->pc = 0x1977b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_1977b4:
    // 0x1977b4: 0x8c630674  lw          $v1, 0x674($v1)
    ctx->pc = 0x1977b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_1977b8:
    // 0x1977b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1977b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1977bc:
    // 0x1977bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1977bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1977c0:
    // 0x1977c0: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1977c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1977c4:
    // 0x1977c4: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1977c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_1977c8:
    // 0x1977c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1977cc:
    if (ctx->pc == 0x1977CCu) {
        ctx->pc = 0x1977D0u;
        goto label_1977d0;
    }
    ctx->pc = 0x1977C8u;
    {
        const bool branch_taken_0x1977c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977c8) {
            ctx->pc = 0x1977D8u;
            goto label_1977d8;
        }
    }
    ctx->pc = 0x1977D0u;
label_1977d0:
    // 0x1977d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1977d4:
    if (ctx->pc == 0x1977D4u) {
        ctx->pc = 0x1977D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977D0u;
        // 0x1977d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1977D8u;
        goto label_1977d8;
    }
    ctx->pc = 0x1977D0u;
    {
        const bool branch_taken_0x1977d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977D0u;
        // 0x1977d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977d0) {
            ctx->pc = 0x1977E8u;
            goto label_1977e8;
        }
    }
    ctx->pc = 0x1977D8u;
label_1977d8:
    // 0x1977d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1977dc:
    // 0x1977dc: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x1977dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1977e0:
    // 0x1977e0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1977e4:
    if (ctx->pc == 0x1977E4u) {
        ctx->pc = 0x1977E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977E0u;
        // 0x1977e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1977E8u;
        goto label_1977e8;
    }
    ctx->pc = 0x1977E0u;
    {
        const bool branch_taken_0x1977e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1977E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977E0u;
        // 0x1977e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977e0) {
            ctx->pc = 0x1977B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1977b0;
        }
    }
    ctx->pc = 0x1977E8u;
label_1977e8:
    // 0x1977e8: 0x10a00049  beqz        $a1, . + 4 + (0x49 << 2)
label_1977ec:
    if (ctx->pc == 0x1977ECu) {
        ctx->pc = 0x1977F0u;
        goto label_1977f0;
    }
    ctx->pc = 0x1977E8u;
    {
        const bool branch_taken_0x1977e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977e8) {
            ctx->pc = 0x197910u;
            goto label_197910;
        }
    }
    ctx->pc = 0x1977F0u;
label_1977f0:
    // 0x1977f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1977f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1977f4:
    // 0x1977f4: 0x8ea30674  lw          $v1, 0x674($s5)
    ctx->pc = 0x1977f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
label_1977f8:
    // 0x1977f8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1977f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1977fc:
    // 0x1977fc: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197800:
    // 0x197800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197804:
    // 0x197804: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197808:
    // 0x197808: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19780c:
    // 0x19780c: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_197810:
    // 0x197810: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
label_197814:
    if (ctx->pc == 0x197814u) {
        ctx->pc = 0x197818u;
        goto label_197818;
    }
    ctx->pc = 0x197810u;
    {
        const bool branch_taken_0x197810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197810) {
            ctx->pc = 0x1978F8u;
            goto label_1978f8;
        }
    }
    ctx->pc = 0x197818u;
label_197818:
    // 0x197818: 0x8ea30678  lw          $v1, 0x678($s5)
    ctx->pc = 0x197818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_19781c:
    // 0x19781c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19781cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197820:
    // 0x197820: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197824:
    // 0x197824: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x197824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_197828:
    // 0x197828: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x197828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_19782c:
    // 0x19782c: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
label_197830:
    if (ctx->pc == 0x197830u) {
        ctx->pc = 0x197834u;
        goto label_197834;
    }
    ctx->pc = 0x19782Cu;
    {
        const bool branch_taken_0x19782c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19782c) {
            ctx->pc = 0x1978F8u;
            goto label_1978f8;
        }
    }
    ctx->pc = 0x197834u;
label_197834:
    // 0x197834: 0x8ea3067c  lw          $v1, 0x67C($s5)
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1660)));
label_197838:
    // 0x197838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19783c:
    // 0x19783c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197840:
    // 0x197840: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x197840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_197844:
    // 0x197844: 0x8c6301d4  lw          $v1, 0x1D4($v1)
    ctx->pc = 0x197844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_197848:
    // 0x197848: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_19784c:
    if (ctx->pc == 0x19784Cu) {
        ctx->pc = 0x197850u;
        goto label_197850;
    }
    ctx->pc = 0x197848u;
    {
        const bool branch_taken_0x197848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197848) {
            ctx->pc = 0x1978F8u;
            goto label_1978f8;
        }
    }
    ctx->pc = 0x197850u;
label_197850:
    // 0x197850: 0x8ea3068c  lw          $v1, 0x68C($s5)
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
label_197854:
    // 0x197854: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
label_197858:
    if (ctx->pc == 0x197858u) {
        ctx->pc = 0x19785Cu;
        goto label_19785c;
    }
    ctx->pc = 0x197854u;
    {
        const bool branch_taken_0x197854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x197854) {
            ctx->pc = 0x197900u;
            goto label_197900;
        }
    }
    ctx->pc = 0x19785Cu;
label_19785c:
    // 0x19785c: 0x8ea306d0  lw          $v1, 0x6D0($s5)
    ctx->pc = 0x19785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_197860:
    // 0x197860: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x197860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_197864:
    // 0x197864: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_197868:
    // 0x197868: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19786c:
    // 0x19786c: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_197870:
    // 0x197870: 0xc064b08  jal         func_192C20
label_197874:
    if (ctx->pc == 0x197874u) {
        ctx->pc = 0x197874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197870u;
        // 0x197874: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197878u;
        goto label_197878;
    }
    ctx->pc = 0x197870u;
    SET_GPR_U32(ctx, 31, 0x197878u);
    ctx->pc = 0x197874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197870u;
    // 0x197874: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x197870u, 0x197878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197878u;
label_197878:
    // 0x197878: 0x8ea206d0  lw          $v0, 0x6D0($s5)
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_19787c:
    // 0x19787c: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_197880:
    // 0x197880: 0xc064ee0  jal         func_193B80
label_197884:
    if (ctx->pc == 0x197884u) {
        ctx->pc = 0x197884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197880u;
        // 0x197884: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197888u;
        goto label_197888;
    }
    ctx->pc = 0x197880u;
    SET_GPR_U32(ctx, 31, 0x197888u);
    ctx->pc = 0x197884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197880u;
    // 0x197884: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x197880u, 0x197888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197888u;
label_197888:
    // 0x197888: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19788c:
    // 0x19788c: 0xaea2068c  sw          $v0, 0x68C($s5)
    ctx->pc = 0x19788cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1676), GPR_U32(ctx, 2));
label_197890:
    // 0x197890: 0x8ea20680  lw          $v0, 0x680($s5)
    ctx->pc = 0x197890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
label_197894:
    // 0x197894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_197898:
    // 0x197898: 0xaea20680  sw          $v0, 0x680($s5)
    ctx->pc = 0x197898u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 2));
label_19789c:
    // 0x19789c: 0x8ea30674  lw          $v1, 0x674($s5)
    ctx->pc = 0x19789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
label_1978a0:
    // 0x1978a0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1978a4:
    // 0x1978a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1978a8:
    // 0x1978a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1978ac:
    // 0x1978ac: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1978acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1978b0:
    // 0x1978b0: 0xc05ee80  jal         func_17BA00
label_1978b4:
    if (ctx->pc == 0x1978B4u) {
        ctx->pc = 0x1978B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978B0u;
        // 0x1978b4: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978B8u;
        goto label_1978b8;
    }
    ctx->pc = 0x1978B0u;
    SET_GPR_U32(ctx, 31, 0x1978B8u);
    ctx->pc = 0x1978B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978B0u;
    // 0x1978b4: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1978B0u, 0x1978B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978B8u;
label_1978b8:
    // 0x1978b8: 0x8ea30678  lw          $v1, 0x678($s5)
    ctx->pc = 0x1978b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_1978bc:
    // 0x1978bc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1978bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1978c0:
    // 0x1978c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1978c4:
    // 0x1978c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1978c8:
    // 0x1978c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1978c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1978cc:
    // 0x1978cc: 0xc05ee80  jal         func_17BA00
label_1978d0:
    if (ctx->pc == 0x1978D0u) {
        ctx->pc = 0x1978D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978CCu;
        // 0x1978d0: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978D4u;
        goto label_1978d4;
    }
    ctx->pc = 0x1978CCu;
    SET_GPR_U32(ctx, 31, 0x1978D4u);
    ctx->pc = 0x1978D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978CCu;
    // 0x1978d0: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1978CCu, 0x1978D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978D4u;
label_1978d4:
    // 0x1978d4: 0x8ea3067c  lw          $v1, 0x67C($s5)
    ctx->pc = 0x1978d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1660)));
label_1978d8:
    // 0x1978d8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1978dc:
    // 0x1978dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1978dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1978e0:
    // 0x1978e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1978e4:
    // 0x1978e4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1978e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1978e8:
    // 0x1978e8: 0xc05ee80  jal         func_17BA00
label_1978ec:
    if (ctx->pc == 0x1978ECu) {
        ctx->pc = 0x1978ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978E8u;
        // 0x1978ec: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1978F0u;
        goto label_1978f0;
    }
    ctx->pc = 0x1978E8u;
    SET_GPR_U32(ctx, 31, 0x1978F0u);
    ctx->pc = 0x1978ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978E8u;
    // 0x1978ec: 0x8ea5068c  lw          $a1, 0x68C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1978E8u, 0x1978F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978F0u;
label_1978f0:
    // 0x1978f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1978f4:
    if (ctx->pc == 0x1978F4u) {
        ctx->pc = 0x1978F8u;
        goto label_1978f8;
    }
    ctx->pc = 0x1978F0u;
    {
        const bool branch_taken_0x1978f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978f0) {
            ctx->pc = 0x197900u;
            goto label_197900;
        }
    }
    ctx->pc = 0x1978F8u;
label_1978f8:
    // 0x1978f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1978fc:
    // 0x1978fc: 0xaea3068c  sw          $v1, 0x68C($s5)
    ctx->pc = 0x1978fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1676), GPR_U32(ctx, 3));
label_197900:
    // 0x197900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_197904:
    // 0x197904: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x197904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_197908:
    // 0x197908: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_19790c:
    if (ctx->pc == 0x19790Cu) {
        ctx->pc = 0x197910u;
        goto label_197910;
    }
    ctx->pc = 0x197908u;
    {
        const bool branch_taken_0x197908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197908) {
            ctx->pc = 0x1977F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1977f4;
        }
    }
    ctx->pc = 0x197910u;
label_197910:
    // 0x197910: 0x8ea40328  lw          $a0, 0x328($s5)
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_197914:
    // 0x197914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197918:
    // 0x197918: 0x1483007f  bne         $a0, $v1, . + 4 + (0x7F << 2)
label_19791c:
    if (ctx->pc == 0x19791Cu) {
        ctx->pc = 0x197920u;
        goto label_197920;
    }
    ctx->pc = 0x197918u;
    {
        const bool branch_taken_0x197918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197918) {
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197920u;
label_197920:
    // 0x197920: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_197924:
    // 0x197924: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_197928:
    // 0x197928: 0x8ea20680  lw          $v0, 0x680($s5)
    ctx->pc = 0x197928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
label_19792c:
    // 0x19792c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197930:
    // 0x197930: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x197930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_197934:
    // 0x197934: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_197938:
    // 0x197938: 0xc064a88  jal         func_192A20
label_19793c:
    if (ctx->pc == 0x19793Cu) {
        ctx->pc = 0x19793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197938u;
        // 0x19793c: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197940u;
        goto label_197940;
    }
    ctx->pc = 0x197938u;
    SET_GPR_U32(ctx, 31, 0x197940u);
    ctx->pc = 0x19793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197938u;
    // 0x19793c: 0x623018  mult        $a2, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x197938u, 0x197940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197940u;
label_197940:
    // 0x197940: 0x10000075  b           . + 4 + (0x75 << 2)
label_197944:
    if (ctx->pc == 0x197944u) {
        ctx->pc = 0x197944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197940u;
        // 0x197944: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197948u;
        goto label_197948;
    }
    ctx->pc = 0x197940u;
    {
        const bool branch_taken_0x197940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197940u;
        // 0x197944: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197940) {
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197948u;
label_197948:
    // 0x197948: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x197948u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19794c:
    // 0x19794c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19794cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197950:
    // 0x197950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197954:
    // 0x197954: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x197954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_197958:
    // 0x197958: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x197958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19795c:
    // 0x19795c: 0x8ca40674  lw          $a0, 0x674($a1)
    ctx->pc = 0x19795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1652)));
label_197960:
    // 0x197960: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_197964:
    // 0x197964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197968:
    // 0x197968: 0x8c732cd8  lw          $s3, 0x2CD8($v1)
    ctx->pc = 0x197968u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19796c:
    // 0x19796c: 0x8e6301fc  lw          $v1, 0x1FC($s3)
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 508)));
label_197970:
    // 0x197970: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_197974:
    if (ctx->pc == 0x197974u) {
        ctx->pc = 0x197974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197970u;
        // 0x197974: 0x24b10674  addiu       $s1, $a1, 0x674 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1652));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197978u;
        goto label_197978;
    }
    ctx->pc = 0x197970u;
    {
        const bool branch_taken_0x197970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197970u;
        // 0x197974: 0x24b10674  addiu       $s1, $a1, 0x674 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197970) {
            ctx->pc = 0x197A5Cu;
            goto label_197a5c;
        }
    }
    ctx->pc = 0x197978u;
label_197978:
    // 0x197978: 0x8ca3068c  lw          $v1, 0x68C($a1)
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1676)));
label_19797c:
    // 0x19797c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197980:
    // 0x197980: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_197984:
    if (ctx->pc == 0x197984u) {
        ctx->pc = 0x197984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197980u;
        // 0x197984: 0x24b6068c  addiu       $s6, $a1, 0x68C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197988u;
        goto label_197988;
    }
    ctx->pc = 0x197980u;
    {
        const bool branch_taken_0x197980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197980u;
        // 0x197984: 0x24b6068c  addiu       $s6, $a1, 0x68C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197980) {
            ctx->pc = 0x197A40u;
            goto label_197a40;
        }
    }
    ctx->pc = 0x197988u;
label_197988:
    // 0x197988: 0x8ea306d0  lw          $v1, 0x6D0($s5)
    ctx->pc = 0x197988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_19798c:
    // 0x19798c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_197990:
    // 0x197990: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_197994:
    // 0x197994: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_197998:
    // 0x197998: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x197998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19799c:
    // 0x19799c: 0xc064b08  jal         func_192C20
label_1979a0:
    if (ctx->pc == 0x1979A0u) {
        ctx->pc = 0x1979A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19799Cu;
        // 0x1979a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979A4u;
        goto label_1979a4;
    }
    ctx->pc = 0x19799Cu;
    SET_GPR_U32(ctx, 31, 0x1979A4u);
    ctx->pc = 0x1979A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19799Cu;
    // 0x1979a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x19799Cu, 0x1979A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979A4u;
label_1979a4:
    // 0x1979a4: 0x8ea206d0  lw          $v0, 0x6D0($s5)
    ctx->pc = 0x1979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_1979a8:
    // 0x1979a8: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1979ac:
    // 0x1979ac: 0xc064ee0  jal         func_193B80
label_1979b0:
    if (ctx->pc == 0x1979B0u) {
        ctx->pc = 0x1979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979ACu;
        // 0x1979b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979B4u;
        goto label_1979b4;
    }
    ctx->pc = 0x1979ACu;
    SET_GPR_U32(ctx, 31, 0x1979B4u);
    ctx->pc = 0x1979B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979ACu;
    // 0x1979b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1979ACu, 0x1979B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979B4u;
label_1979b4:
    // 0x1979b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1979b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1979b8:
    // 0x1979b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1979b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1979bc:
    // 0x1979bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1979bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1979c0:
    // 0x1979c0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1979c4:
    // 0x1979c4: 0x320f809  jalr        $t9
label_1979c8:
    if (ctx->pc == 0x1979C8u) {
        ctx->pc = 0x1979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979C4u;
        // 0x1979c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979CCu;
        goto label_1979cc;
    }
    ctx->pc = 0x1979C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1979CCu);
        ctx->pc = 0x1979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979C4u;
        // 0x1979c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1979C4u, 0x1979CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1979CCu;
label_1979cc:
    // 0x1979cc: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1979ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1979d0:
    // 0x1979d0: 0xc05ee80  jal         func_17BA00
label_1979d4:
    if (ctx->pc == 0x1979D4u) {
        ctx->pc = 0x1979D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979D0u;
        // 0x1979d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1979D8u;
        goto label_1979d8;
    }
    ctx->pc = 0x1979D0u;
    SET_GPR_U32(ctx, 31, 0x1979D8u);
    ctx->pc = 0x1979D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1979D0u;
    // 0x1979d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1979D0u, 0x1979D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979D8u;
label_1979d8:
    // 0x1979d8: 0x8ea20680  lw          $v0, 0x680($s5)
    ctx->pc = 0x1979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
label_1979dc:
    // 0x1979dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1979dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1979e0:
    // 0x1979e0: 0xaea20680  sw          $v0, 0x680($s5)
    ctx->pc = 0x1979e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1664), GPR_U32(ctx, 2));
label_1979e4:
    // 0x1979e4: 0x8ea30680  lw          $v1, 0x680($s5)
    ctx->pc = 0x1979e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1664)));
label_1979e8:
    // 0x1979e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1979ec:
    if (ctx->pc == 0x1979ECu) {
        ctx->pc = 0x1979F0u;
        goto label_1979f0;
    }
    ctx->pc = 0x1979E8u;
    {
        const bool branch_taken_0x1979e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1979e8) {
            ctx->pc = 0x197A10u;
            goto label_197a10;
        }
    }
    ctx->pc = 0x1979F0u;
label_1979f0:
    // 0x1979f0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1979f4:
    // 0x1979f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1979f8:
    // 0x1979f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1979f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1979fc:
    // 0x1979fc: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x1979fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_197a00:
    // 0x197a00: 0xc064a88  jal         func_192A20
label_197a04:
    if (ctx->pc == 0x197A04u) {
        ctx->pc = 0x197A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A00u;
        // 0x197a04: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A08u;
        goto label_197a08;
    }
    ctx->pc = 0x197A00u;
    SET_GPR_U32(ctx, 31, 0x197A08u);
    ctx->pc = 0x197A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A00u;
    // 0x197a04: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x197A00u, 0x197A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A08u;
label_197a08:
    // 0x197a08: 0x10000014  b           . + 4 + (0x14 << 2)
label_197a0c:
    if (ctx->pc == 0x197A0Cu) {
        ctx->pc = 0x197A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A08u;
        // 0x197a0c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A10u;
        goto label_197a10;
    }
    ctx->pc = 0x197A08u;
    {
        const bool branch_taken_0x197a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A08u;
        // 0x197a0c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a08) {
            ctx->pc = 0x197A5Cu;
            goto label_197a5c;
        }
    }
    ctx->pc = 0x197A10u;
label_197a10:
    // 0x197a10: 0x8ea606d0  lw          $a2, 0x6D0($s5)
    ctx->pc = 0x197a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
label_197a14:
    // 0x197a14: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_197a18:
    // 0x197a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197a1c:
    // 0x197a1c: 0x3408f600  ori         $t0, $zero, 0xF600
    ctx->pc = 0x197a1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
label_197a20:
    // 0x197a20: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_197a24:
    // 0x197a24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x197a24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a28:
    // 0x197a28: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_197a2c:
    // 0x197a2c: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_197a30:
    // 0x197a30: 0xc064cb4  jal         func_1932D0
label_197a34:
    if (ctx->pc == 0x197A34u) {
        ctx->pc = 0x197A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A30u;
        // 0x197a34: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A38u;
        goto label_197a38;
    }
    ctx->pc = 0x197A30u;
    SET_GPR_U32(ctx, 31, 0x197A38u);
    ctx->pc = 0x197A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A30u;
    // 0x197a34: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932D0u, 0x197A30u, 0x197A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A38u;
label_197a38:
    // 0x197a38: 0x10000008  b           . + 4 + (0x8 << 2)
label_197a3c:
    if (ctx->pc == 0x197A3Cu) {
        ctx->pc = 0x197A40u;
        goto label_197a40;
    }
    ctx->pc = 0x197A38u;
    {
        const bool branch_taken_0x197a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a38) {
            ctx->pc = 0x197A5Cu;
            goto label_197a5c;
        }
    }
    ctx->pc = 0x197A40u;
label_197a40:
    // 0x197a40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197a44:
    // 0x197a44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_197a48:
    // 0x197a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a4c:
    // 0x197a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197a50:
    // 0x197a50: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197a54:
    // 0x197a54: 0x320f809  jalr        $t9
label_197a58:
    if (ctx->pc == 0x197A58u) {
        ctx->pc = 0x197A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A54u;
        // 0x197a58: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A5Cu;
        goto label_197a5c;
    }
    ctx->pc = 0x197A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197A5Cu);
        ctx->pc = 0x197A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A54u;
        // 0x197a58: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A54u, 0x197A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197A5Cu;
label_197a5c:
    // 0x197a5c: 0x0  nop
    ctx->pc = 0x197a5cu;
    // NOP
label_197a60:
    // 0x197a60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_197a64:
    // 0x197a64: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x197a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_197a68:
    // 0x197a68: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_197a6c:
    if (ctx->pc == 0x197A6Cu) {
        ctx->pc = 0x197A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A68u;
        // 0x197a6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A70u;
        goto label_197a70;
    }
    ctx->pc = 0x197A68u;
    {
        const bool branch_taken_0x197a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A68u;
        // 0x197a6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a68) {
            ctx->pc = 0x197954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197954;
        }
    }
    ctx->pc = 0x197A70u;
label_197a70:
    // 0x197a70: 0x8ea40324  lw          $a0, 0x324($s5)
    ctx->pc = 0x197a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_197a74:
    // 0x197a74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_197a78:
    // 0x197a78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197a7c:
    // 0x197a7c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_197a80:
    // 0x197a80: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x197a80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
label_197a84:
    // 0x197a84: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x197a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197a88:
    // 0x197a88: 0x8ea40324  lw          $a0, 0x324($s5)
    ctx->pc = 0x197a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_197a8c:
    // 0x197a8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_197a90:
    // 0x197a90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x197a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_197a94:
    // 0x197a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_197a98:
    // 0x197a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x197a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_197a9c:
    // 0x197a9c: 0x0  nop
    ctx->pc = 0x197a9cu;
    // NOP
label_197aa0:
    // 0x197aa0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x197aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_197aa4:
    // 0x197aa4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_197aa8:
    if (ctx->pc == 0x197AA8u) {
        ctx->pc = 0x197AACu;
        goto label_197aac;
    }
    ctx->pc = 0x197AA4u;
    {
        const bool branch_taken_0x197aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197aa4) {
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197AACu;
label_197aac:
    // 0x197aac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197ab0:
    // 0x197ab0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197ab4:
    // 0x197ab4: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x197ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_197ab8:
    // 0x197ab8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x197ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197abc:
    // 0x197abc: 0x8c440674  lw          $a0, 0x674($v0)
    ctx->pc = 0x197abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_197ac0:
    // 0x197ac0: 0x2445068c  addiu       $a1, $v0, 0x68C
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1676));
label_197ac4:
    // 0x197ac4: 0x8c42068c  lw          $v0, 0x68C($v0)
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1676)));
label_197ac8:
    // 0x197ac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x197ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_197acc:
    // 0x197acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197ad0:
    // 0x197ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_197ad4:
    // 0x197ad4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x197ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_197ad8:
    // 0x197ad8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_197adc:
    if (ctx->pc == 0x197ADCu) {
        ctx->pc = 0x197ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD8u;
        // 0x197adc: 0x8c632cd8  lw          $v1, 0x2CD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197AE0u;
        goto label_197ae0;
    }
    ctx->pc = 0x197AD8u;
    {
        const bool branch_taken_0x197ad8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD8u;
        // 0x197adc: 0x8c632cd8  lw          $v1, 0x2CD8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ad8) {
            ctx->pc = 0x197AE4u;
            goto label_197ae4;
        }
    }
    ctx->pc = 0x197AE0u;
label_197ae0:
    // 0x197ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197ae4:
    // 0x197ae4: 0x0  nop
    ctx->pc = 0x197ae4u;
    // NOP
label_197ae8:
    // 0x197ae8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x197ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_197aec:
    // 0x197aec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x197aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_197af0:
    // 0x197af0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x197af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_197af4:
    // 0x197af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197af8:
    // 0x197af8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197afc:
    // 0x197afc: 0x320f809  jalr        $t9
label_197b00:
    if (ctx->pc == 0x197B00u) {
        ctx->pc = 0x197B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AFCu;
        // 0x197b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B04u;
        goto label_197b04;
    }
    ctx->pc = 0x197AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197B04u);
        ctx->pc = 0x197B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AFCu;
        // 0x197b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197AFCu, 0x197B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197B04u;
label_197b04:
    // 0x197b04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_197b08:
    // 0x197b08: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x197b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_197b0c:
    // 0x197b0c: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_197b10:
    if (ctx->pc == 0x197B10u) {
        ctx->pc = 0x197B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B0Cu;
        // 0x197b10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B14u;
        goto label_197b14;
    }
    ctx->pc = 0x197B0Cu;
    {
        const bool branch_taken_0x197b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B0Cu;
        // 0x197b10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b0c) {
            ctx->pc = 0x197AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197ab4;
        }
    }
    ctx->pc = 0x197B14u;
label_197b14:
    // 0x197b14: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x197b14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
label_197b18:
    // 0x197b18: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_197b1c:
    // 0x197b1c: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
label_197b20:
    if (ctx->pc == 0x197B20u) {
        ctx->pc = 0x197B24u;
        goto label_197b24;
    }
    ctx->pc = 0x197B1Cu;
    {
        const bool branch_taken_0x197b1c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x197b1c) {
            ctx->pc = 0x197BBCu;
            goto label_197bbc;
        }
    }
    ctx->pc = 0x197B24u;
label_197b24:
    // 0x197b24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_197b28:
    // 0x197b28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_197b2c:
    // 0x197b2c: 0xaea30328  sw          $v1, 0x328($s5)
    ctx->pc = 0x197b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 808), GPR_U32(ctx, 3));
label_197b30:
    // 0x197b30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x197b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197b34:
    // 0x197b34: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x197b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197b38:
    // 0x197b38: 0x8ea306e0  lw          $v1, 0x6E0($s5)
    ctx->pc = 0x197b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1760)));
label_197b3c:
    // 0x197b3c: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x197b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_197b40:
    // 0x197b40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_197b44:
    // 0x197b44: 0x8ea20328  lw          $v0, 0x328($s5)
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_197b48:
    // 0x197b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_197b4c:
    // 0x197b4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_197b50:
    // 0x197b50: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_197b54:
    // 0x197b54: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x197b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_197b58:
    // 0x197b58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x197b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_197b5c:
    // 0x197b5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_197b60:
    // 0x197b60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x197b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197b64:
    // 0x197b64: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x197b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_197b68:
    // 0x197b68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_197b6c:
    // 0x197b6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_197b70:
    // 0x197b70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x197b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_197b74:
    // 0x197b74: 0x0  nop
    ctx->pc = 0x197b74u;
    // NOP
label_197b78:
    // 0x197b78: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x197b78u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_197b7c:
    // 0x197b7c: 0x0  nop
    ctx->pc = 0x197b7cu;
    // NOP
label_197b80:
    // 0x197b80: 0x0  nop
    ctx->pc = 0x197b80u;
    // NOP
label_197b84:
    // 0x197b84: 0x3012  mflo        $a2
    ctx->pc = 0x197b84u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_197b88:
    // 0x197b88: 0xc04bf38  jal         func_12FCE0
label_197b8c:
    if (ctx->pc == 0x197B8Cu) {
        ctx->pc = 0x197B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B88u;
        // 0x197b8c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B90u;
        goto label_197b90;
    }
    ctx->pc = 0x197B88u;
    SET_GPR_U32(ctx, 31, 0x197B90u);
    ctx->pc = 0x197B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B88u;
    // 0x197b8c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x197B88u, 0x197B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B90u;
label_197b90:
    // 0x197b90: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197b94:
    // 0x197b94: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x197b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_197b98:
    // 0x197b98: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_197b9c:
    // 0x197b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197ba0:
    // 0x197ba0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_197ba4:
    // 0x197ba4: 0x320f809  jalr        $t9
label_197ba8:
    if (ctx->pc == 0x197BA8u) {
        ctx->pc = 0x197BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BA4u;
        // 0x197ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BACu;
        goto label_197bac;
    }
    ctx->pc = 0x197BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197BACu);
        ctx->pc = 0x197BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BA4u;
        // 0x197ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197BA4u, 0x197BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197BACu;
label_197bac:
    // 0x197bac: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x197bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
label_197bb0:
    // 0x197bb0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_197bb4:
    if (ctx->pc == 0x197BB4u) {
        ctx->pc = 0x197BB8u;
        goto label_197bb8;
    }
    ctx->pc = 0x197BB0u;
    {
        const bool branch_taken_0x197bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197bb0) {
            ctx->pc = 0x197BBCu;
            goto label_197bbc;
        }
    }
    ctx->pc = 0x197BB8u;
label_197bb8:
    // 0x197bb8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x197bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197bbc:
    // 0x197bbc: 0x8ea306d8  lw          $v1, 0x6D8($s5)
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1752)));
label_197bc0:
    // 0x197bc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_197bc4:
    if (ctx->pc == 0x197BC4u) {
        ctx->pc = 0x197BC8u;
        goto label_197bc8;
    }
    ctx->pc = 0x197BC0u;
    {
        const bool branch_taken_0x197bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197bc0) {
            ctx->pc = 0x197BE8u;
            goto label_197be8;
        }
    }
    ctx->pc = 0x197BC8u;
label_197bc8:
    // 0x197bc8: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
label_197bcc:
    // 0x197bcc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x197bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_197bd0:
    // 0x197bd0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_197bd4:
    if (ctx->pc == 0x197BD4u) {
        ctx->pc = 0x197BD8u;
        goto label_197bd8;
    }
    ctx->pc = 0x197BD0u;
    {
        const bool branch_taken_0x197bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197bd0) {
            ctx->pc = 0x197BE4u;
            goto label_197be4;
        }
    }
    ctx->pc = 0x197BD8u;
label_197bd8:
    // 0x197bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197bdc:
    // 0x197bdc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_197be0:
    if (ctx->pc == 0x197BE0u) {
        ctx->pc = 0x197BE4u;
        goto label_197be4;
    }
    ctx->pc = 0x197BDCu;
    {
        const bool branch_taken_0x197bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197bdc) {
            ctx->pc = 0x197BE8u;
            goto label_197be8;
        }
    }
    ctx->pc = 0x197BE4u;
label_197be4:
    // 0x197be4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197be8:
    // 0x197be8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197bec:
    // 0x197bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197bf0:
    // 0x197bf0: 0x8c852c00  lw          $a1, 0x2C00($a0)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11264)));
label_197bf4:
    // 0x197bf4: 0x14a30058  bne         $a1, $v1, . + 4 + (0x58 << 2)
label_197bf8:
    if (ctx->pc == 0x197BF8u) {
        ctx->pc = 0x197BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF4u;
        // 0x197bf8: 0x24862c00  addiu       $a2, $a0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BFCu;
        goto label_197bfc;
    }
    ctx->pc = 0x197BF4u;
    {
        const bool branch_taken_0x197bf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x197BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BF4u;
        // 0x197bf8: 0x24862c00  addiu       $a2, $a0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf4) {
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197BFCu;
label_197bfc:
    // 0x197bfc: 0x8ea506ac  lw          $a1, 0x6AC($s5)
    ctx->pc = 0x197bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
label_197c00:
    // 0x197c00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x197c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c04:
    // 0x197c04: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_197c08:
    // 0x197c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c0c:
    // 0x197c0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_197c10:
    // 0x197c10: 0xb53021  addu        $a2, $a1, $s5
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_197c14:
    // 0x197c14: 0x8cc606c0  lw          $a2, 0x6C0($a2)
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1728)));
label_197c18:
    // 0x197c18: 0x24c8002c  addiu       $t0, $a2, 0x2C
    ctx->pc = 0x197c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_197c1c:
    // 0x197c1c: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x197c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_197c20:
    // 0x197c20: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197c24:
    // 0x197c24: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
label_197c28:
    if (ctx->pc == 0x197C28u) {
        ctx->pc = 0x197C2Cu;
        goto label_197c2c;
    }
    ctx->pc = 0x197C24u;
    {
        const bool branch_taken_0x197c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x197c24) {
            ctx->pc = 0x197C4Cu;
            goto label_197c4c;
        }
    }
    ctx->pc = 0x197C2Cu;
label_197c2c:
    // 0x197c2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x197c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_197c30:
    // 0x197c30: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x197c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_197c34:
    // 0x197c34: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_197c38:
    if (ctx->pc == 0x197C38u) {
        ctx->pc = 0x197C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C34u;
        // 0x197c38: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C3Cu;
        goto label_197c3c;
    }
    ctx->pc = 0x197C34u;
    {
        const bool branch_taken_0x197c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C34u;
        // 0x197c38: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c34) {
            ctx->pc = 0x197C4Cu;
            goto label_197c4c;
        }
    }
    ctx->pc = 0x197C3Cu;
label_197c3c:
    // 0x197c3c: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_197c40:
    // 0x197c40: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197c44:
    // 0x197c44: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_197c48:
    if (ctx->pc == 0x197C48u) {
        ctx->pc = 0x197C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C44u;
        // 0x197c48: 0x1073021  addu        $a2, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C4Cu;
        goto label_197c4c;
    }
    ctx->pc = 0x197C44u;
    {
        const bool branch_taken_0x197c44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C44u;
        // 0x197c48: 0x1073021  addu        $a2, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c44) {
            ctx->pc = 0x197C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c20;
        }
    }
    ctx->pc = 0x197C4Cu;
label_197c4c:
    // 0x197c4c: 0x0  nop
    ctx->pc = 0x197c4cu;
    // NOP
label_197c50:
    // 0x197c50: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_197c54:
    // 0x197c54: 0x11260006  beq         $t1, $a2, . + 4 + (0x6 << 2)
label_197c58:
    if (ctx->pc == 0x197C58u) {
        ctx->pc = 0x197C5Cu;
        goto label_197c5c;
    }
    ctx->pc = 0x197C54u;
    {
        const bool branch_taken_0x197c54 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x197c54) {
            ctx->pc = 0x197C70u;
            goto label_197c70;
        }
    }
    ctx->pc = 0x197C5Cu;
label_197c5c:
    // 0x197c5c: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x197c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_197c60:
    // 0x197c60: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x197c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_197c64:
    // 0x197c64: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197c68:
    // 0x197c68: 0x14c0003b  bnez        $a2, . + 4 + (0x3B << 2)
label_197c6c:
    if (ctx->pc == 0x197C6Cu) {
        ctx->pc = 0x197C70u;
        goto label_197c70;
    }
    ctx->pc = 0x197C68u;
    {
        const bool branch_taken_0x197c68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c68) {
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197C70u;
label_197c70:
    // 0x197c70: 0x8ea706a4  lw          $a3, 0x6A4($s5)
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
label_197c74:
    // 0x197c74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c78:
    // 0x197c78: 0x1000002f  b           . + 4 + (0x2F << 2)
label_197c7c:
    if (ctx->pc == 0x197C7Cu) {
        ctx->pc = 0x197C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C78u;
        // 0x197c7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C80u;
        goto label_197c80;
    }
    ctx->pc = 0x197C78u;
    {
        const bool branch_taken_0x197c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C78u;
        // 0x197c7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c78) {
            ctx->pc = 0x197D38u;
            goto label_197d38;
        }
    }
    ctx->pc = 0x197C80u;
label_197c80:
    // 0x197c80: 0x2a93021  addu        $a2, $s5, $t1
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_197c84:
    // 0x197c84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x197c84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c88:
    // 0x197c88: 0x8cc606c0  lw          $a2, 0x6C0($a2)
    ctx->pc = 0x197c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1728)));
label_197c8c:
    // 0x197c8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c90:
    // 0x197c90: 0x24ca002c  addiu       $t2, $a2, 0x2C
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_197c94:
    // 0x197c94: 0x0  nop
    ctx->pc = 0x197c94u;
    // NOP
label_197c98:
    // 0x197c98: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_197c9c:
    // 0x197c9c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197ca0:
    // 0x197ca0: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
label_197ca4:
    if (ctx->pc == 0x197CA4u) {
        ctx->pc = 0x197CA8u;
        goto label_197ca8;
    }
    ctx->pc = 0x197CA0u;
    {
        const bool branch_taken_0x197ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x197ca0) {
            ctx->pc = 0x197CC8u;
            goto label_197cc8;
        }
    }
    ctx->pc = 0x197CA8u;
label_197ca8:
    // 0x197ca8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x197ca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_197cac:
    // 0x197cac: 0x29610005  slti        $at, $t3, 0x5
    ctx->pc = 0x197cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
label_197cb0:
    // 0x197cb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_197cb4:
    if (ctx->pc == 0x197CB4u) {
        ctx->pc = 0x197CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB0u;
        // 0x197cb4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CB8u;
        goto label_197cb8;
    }
    ctx->pc = 0x197CB0u;
    {
        const bool branch_taken_0x197cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB0u;
        // 0x197cb4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cb0) {
            ctx->pc = 0x197CC8u;
            goto label_197cc8;
        }
    }
    ctx->pc = 0x197CB8u;
label_197cb8:
    // 0x197cb8: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x197cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_197cbc:
    // 0x197cbc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197cc0:
    // 0x197cc0: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
label_197cc4:
    if (ctx->pc == 0x197CC4u) {
        ctx->pc = 0x197CC8u;
        goto label_197cc8;
    }
    ctx->pc = 0x197CC0u;
    {
        const bool branch_taken_0x197cc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cc0) {
            ctx->pc = 0x197C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c94;
        }
    }
    ctx->pc = 0x197CC8u;
label_197cc8:
    // 0x197cc8: 0x29610005  slti        $at, $t3, 0x5
    ctx->pc = 0x197cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)5) ? 1 : 0);
label_197ccc:
    // 0x197ccc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_197cd0:
    if (ctx->pc == 0x197CD0u) {
        ctx->pc = 0x197CD4u;
        goto label_197cd4;
    }
    ctx->pc = 0x197CCCu;
    {
        const bool branch_taken_0x197ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ccc) {
            ctx->pc = 0x197D30u;
            goto label_197d30;
        }
    }
    ctx->pc = 0x197CD4u;
label_197cd4:
    // 0x197cd4: 0xb3080  sll         $a2, $t3, 2
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_197cd8:
    // 0x197cd8: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_197cdc:
    // 0x197cdc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x197cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_197ce0:
    // 0x197ce0: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_197ce4:
    if (ctx->pc == 0x197CE4u) {
        ctx->pc = 0x197CE8u;
        goto label_197ce8;
    }
    ctx->pc = 0x197CE0u;
    {
        const bool branch_taken_0x197ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ce0) {
            ctx->pc = 0x197D30u;
            goto label_197d30;
        }
    }
    ctx->pc = 0x197CE8u;
label_197ce8:
    // 0x197ce8: 0x8ea306a8  lw          $v1, 0x6A8($s5)
    ctx->pc = 0x197ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1704)));
label_197cec:
    // 0x197cec: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_197cf0:
    if (ctx->pc == 0x197CF0u) {
        ctx->pc = 0x197CF4u;
        goto label_197cf4;
    }
    ctx->pc = 0x197CECu;
    {
        const bool branch_taken_0x197cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197cec) {
            ctx->pc = 0x197D44u;
            goto label_197d44;
        }
    }
    ctx->pc = 0x197CF4u;
label_197cf4:
    // 0x197cf4: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_197cf8:
    // 0x197cf8: 0x24862cd8  addiu       $a2, $a0, 0x2CD8
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 11480));
label_197cfc:
    // 0x197cfc: 0x8c4306b0  lw          $v1, 0x6B0($v0)
    ctx->pc = 0x197cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_197d00:
    // 0x197d00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_197d04:
    // 0x197d04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197d08:
    // 0x197d08: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_197d0c:
    // 0x197d0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_197d10:
    // 0x197d10: 0x8c4206b0  lw          $v0, 0x6B0($v0)
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_197d14:
    // 0x197d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197d18:
    // 0x197d18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_197d1c:
    // 0x197d1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_197d20:
    // 0x197d20: 0xc05a1c8  jal         func_168720
label_197d24:
    if (ctx->pc == 0x197D24u) {
        ctx->pc = 0x197D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D20u;
        // 0x197d24: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D28u;
        goto label_197d28;
    }
    ctx->pc = 0x197D20u;
    SET_GPR_U32(ctx, 31, 0x197D28u);
    ctx->pc = 0x197D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D20u;
    // 0x197d24: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168720u, 0x197D20u, 0x197D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D28u;
label_197d28:
    // 0x197d28: 0x10000006  b           . + 4 + (0x6 << 2)
label_197d2c:
    if (ctx->pc == 0x197D2Cu) {
        ctx->pc = 0x197D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D28u;
        // 0x197d2c: 0xaeb006ac  sw          $s0, 0x6AC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D30u;
        goto label_197d30;
    }
    ctx->pc = 0x197D28u;
    {
        const bool branch_taken_0x197d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D28u;
        // 0x197d2c: 0xaeb006ac  sw          $s0, 0x6AC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d28) {
            ctx->pc = 0x197D44u;
            goto label_197d44;
        }
    }
    ctx->pc = 0x197D30u;
label_197d30:
    // 0x197d30: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_197d34:
    // 0x197d34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_197d38:
    // 0x197d38: 0x207302a  slt         $a2, $s0, $a3
    ctx->pc = 0x197d38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_197d3c:
    // 0x197d3c: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
label_197d40:
    if (ctx->pc == 0x197D40u) {
        ctx->pc = 0x197D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D3Cu;
        // 0x197d40: 0x2a93021  addu        $a2, $s5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D44u;
        goto label_197d44;
    }
    ctx->pc = 0x197D3Cu;
    {
        const bool branch_taken_0x197d3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D3Cu;
        // 0x197d40: 0x2a93021  addu        $a2, $s5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d3c) {
            ctx->pc = 0x197C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197c84;
        }
    }
    ctx->pc = 0x197D44u;
label_197d44:
    // 0x197d44: 0x0  nop
    ctx->pc = 0x197d44u;
    // NOP
label_197d48:
    // 0x197d48: 0x8ea306a4  lw          $v1, 0x6A4($s5)
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
label_197d4c:
    // 0x197d4c: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
label_197d50:
    if (ctx->pc == 0x197D50u) {
        ctx->pc = 0x197D54u;
        goto label_197d54;
    }
    ctx->pc = 0x197D4Cu;
    {
        const bool branch_taken_0x197d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x197d4c) {
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197D54u;
label_197d54:
    // 0x197d54: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197d58:
    // 0x197d58: 0x12e00037  beqz        $s7, . + 4 + (0x37 << 2)
label_197d5c:
    if (ctx->pc == 0x197D5Cu) {
        ctx->pc = 0x197D60u;
        goto label_197d60;
    }
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0x8ea206a8  lw          $v0, 0x6A8($s5)
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1704)));
label_197d64:
    // 0x197d64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_197d68:
    if (ctx->pc == 0x197D68u) {
        ctx->pc = 0x197D6Cu;
        goto label_197d6c;
    }
    ctx->pc = 0x197D64u;
    {
        const bool branch_taken_0x197d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d64) {
            ctx->pc = 0x197D9Cu;
            goto label_197d9c;
        }
    }
    ctx->pc = 0x197D6Cu;
label_197d6c:
    // 0x197d6c: 0x8ea306ac  lw          $v1, 0x6AC($s5)
    ctx->pc = 0x197d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
label_197d70:
    // 0x197d70: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x197d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197d74:
    // 0x197d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197d78:
    // 0x197d78: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x197d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_197d7c:
    // 0x197d7c: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x197d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_197d80:
    // 0x197d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197d84:
    // 0x197d84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197d88:
    // 0x197d88: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197d8c:
    // 0x197d8c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_197d90:
    // 0x197d90: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_197d94:
    // 0x197d94: 0x320f809  jalr        $t9
label_197d98:
    if (ctx->pc == 0x197D98u) {
        ctx->pc = 0x197D9Cu;
        goto label_197d9c;
    }
    ctx->pc = 0x197D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197D9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D94u, 0x197D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197D9Cu;
label_197d9c:
    // 0x197d9c: 0x8ea206dc  lw          $v0, 0x6DC($s5)
    ctx->pc = 0x197d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1756)));
label_197da0:
    // 0x197da0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_197da4:
    if (ctx->pc == 0x197DA4u) {
        ctx->pc = 0x197DA8u;
        goto label_197da8;
    }
    ctx->pc = 0x197DA0u;
    {
        const bool branch_taken_0x197da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197da0) {
            ctx->pc = 0x197DD8u;
            goto label_197dd8;
        }
    }
    ctx->pc = 0x197DA8u;
label_197da8:
    // 0x197da8: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197dac:
    // 0x197dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197db0:
    // 0x197db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197db4:
    // 0x197db4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197db8:
    // 0x197db8: 0x320f809  jalr        $t9
label_197dbc:
    if (ctx->pc == 0x197DBCu) {
        ctx->pc = 0x197DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB8u;
        // 0x197dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DC0u;
        goto label_197dc0;
    }
    ctx->pc = 0x197DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197DC0u);
        ctx->pc = 0x197DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB8u;
        // 0x197dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DB8u, 0x197DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197DC0u;
label_197dc0:
    // 0x197dc0: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197dc4:
    // 0x197dc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197dc8:
    // 0x197dc8: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_197dcc:
    // 0x197dcc: 0x320f809  jalr        $t9
label_197dd0:
    if (ctx->pc == 0x197DD0u) {
        ctx->pc = 0x197DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DCCu;
        // 0x197dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DD4u;
        goto label_197dd4;
    }
    ctx->pc = 0x197DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197DD4u);
        ctx->pc = 0x197DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DCCu;
        // 0x197dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DCCu, 0x197DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197DD4u;
label_197dd4:
    // 0x197dd4: 0xaea006dc  sw          $zero, 0x6DC($s5)
    ctx->pc = 0x197dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 0));
label_197dd8:
    // 0x197dd8: 0xc057ff8  jal         func_15FFE0
label_197ddc:
    if (ctx->pc == 0x197DDCu) {
        ctx->pc = 0x197DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DD8u;
        // 0x197ddc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DE0u;
        goto label_197de0;
    }
    ctx->pc = 0x197DD8u;
    SET_GPR_U32(ctx, 31, 0x197DE0u);
    ctx->pc = 0x197DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DD8u;
    // 0x197ddc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FFE0u, 0x197DD8u, 0x197DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DE0u;
label_197de0:
    // 0x197de0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197de4:
    // 0x197de4: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_197de8:
    // 0x197de8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_197dec:
    if (ctx->pc == 0x197DECu) {
        ctx->pc = 0x197DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE8u;
        // 0x197dec: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DF0u;
        goto label_197df0;
    }
    ctx->pc = 0x197DE8u;
    {
        const bool branch_taken_0x197de8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x197DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE8u;
        // 0x197dec: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197de8) {
            ctx->pc = 0x197DFCu;
            goto label_197dfc;
        }
    }
    ctx->pc = 0x197DF0u;
label_197df0:
    // 0x197df0: 0x10000008  b           . + 4 + (0x8 << 2)
label_197df4:
    if (ctx->pc == 0x197DF4u) {
        ctx->pc = 0x197DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF0u;
        // 0x197df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DF8u;
        goto label_197df8;
    }
    ctx->pc = 0x197DF0u;
    {
        const bool branch_taken_0x197df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF0u;
        // 0x197df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197df0) {
            ctx->pc = 0x197E14u;
            goto label_197e14;
        }
    }
    ctx->pc = 0x197DF8u;
label_197df8:
    // 0x197df8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_197dfc:
    // 0x197dfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x197dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197e00:
    // 0x197e00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_197e04:
    // 0x197e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197e08:
    // 0x197e08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_197e0c:
    // 0x197e0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_197e10:
    // 0x197e10: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_197e14:
    // 0x197e14: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x197e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_197e18:
    // 0x197e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197e1c:
    // 0x197e1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197e20:
    // 0x197e20: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197e24:
    // 0x197e24: 0x320f809  jalr        $t9
label_197e28:
    if (ctx->pc == 0x197E28u) {
        ctx->pc = 0x197E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E24u;
        // 0x197e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E2Cu;
        goto label_197e2c;
    }
    ctx->pc = 0x197E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197E2Cu);
        ctx->pc = 0x197E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E24u;
        // 0x197e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E24u, 0x197E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197E2Cu;
label_197e2c:
    // 0x197e2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197e30:
    // 0x197e30: 0xc063e08  jal         func_18F820
label_197e34:
    if (ctx->pc == 0x197E34u) {
        ctx->pc = 0x197E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E30u;
        // 0x197e34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E38u;
        goto label_197e38;
    }
    ctx->pc = 0x197E30u;
    SET_GPR_U32(ctx, 31, 0x197E38u);
    ctx->pc = 0x197E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E30u;
    // 0x197e34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x197E30u, 0x197E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E38u;
label_197e38:
    // 0x197e38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x197e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_197e3c:
    // 0x197e3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x197e3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_197e40:
    // 0x197e40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x197e40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_197e44:
    // 0x197e44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x197e44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_197e48:
    // 0x197e48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x197e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_197e4c:
    // 0x197e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_197e50:
    // 0x197e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197e54:
    // 0x197e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_197e58:
    // 0x197e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197e5c:
    // 0x197e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_197e60:
    // 0x197e60: 0x3e00008  jr          $ra
label_197e64:
    if (ctx->pc == 0x197E64u) {
        ctx->pc = 0x197E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E60u;
        // 0x197e64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197E68u;
        goto label_fallthrough_0x197e60;
    }
    ctx->pc = 0x197E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E60u;
        // 0x197e64: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197e60:
    ctx->pc = 0x197E68u;
}
