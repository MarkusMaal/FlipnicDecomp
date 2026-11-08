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

// Function: FUN_00146fd0
// Address: 0x146fd0 - 0x147a9c
void FUN_00146fd0_0x146fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00146fd0_0x146fd0");
#endif

    switch (ctx->pc) {
        case 0x146fd0u: goto label_146fd0;
        case 0x146fd4u: goto label_146fd4;
        case 0x146fd8u: goto label_146fd8;
        case 0x146fdcu: goto label_146fdc;
        case 0x146fe0u: goto label_146fe0;
        case 0x146fe4u: goto label_146fe4;
        case 0x146fe8u: goto label_146fe8;
        case 0x146fecu: goto label_146fec;
        case 0x146ff0u: goto label_146ff0;
        case 0x146ff4u: goto label_146ff4;
        case 0x146ff8u: goto label_146ff8;
        case 0x146ffcu: goto label_146ffc;
        case 0x147000u: goto label_147000;
        case 0x147004u: goto label_147004;
        case 0x147008u: goto label_147008;
        case 0x14700cu: goto label_14700c;
        case 0x147010u: goto label_147010;
        case 0x147014u: goto label_147014;
        case 0x147018u: goto label_147018;
        case 0x14701cu: goto label_14701c;
        case 0x147020u: goto label_147020;
        case 0x147024u: goto label_147024;
        case 0x147028u: goto label_147028;
        case 0x14702cu: goto label_14702c;
        case 0x147030u: goto label_147030;
        case 0x147034u: goto label_147034;
        case 0x147038u: goto label_147038;
        case 0x14703cu: goto label_14703c;
        case 0x147040u: goto label_147040;
        case 0x147044u: goto label_147044;
        case 0x147048u: goto label_147048;
        case 0x14704cu: goto label_14704c;
        case 0x147050u: goto label_147050;
        case 0x147054u: goto label_147054;
        case 0x147058u: goto label_147058;
        case 0x14705cu: goto label_14705c;
        case 0x147060u: goto label_147060;
        case 0x147064u: goto label_147064;
        case 0x147068u: goto label_147068;
        case 0x14706cu: goto label_14706c;
        case 0x147070u: goto label_147070;
        case 0x147074u: goto label_147074;
        case 0x147078u: goto label_147078;
        case 0x14707cu: goto label_14707c;
        case 0x147080u: goto label_147080;
        case 0x147084u: goto label_147084;
        case 0x147088u: goto label_147088;
        case 0x14708cu: goto label_14708c;
        case 0x147090u: goto label_147090;
        case 0x147094u: goto label_147094;
        case 0x147098u: goto label_147098;
        case 0x14709cu: goto label_14709c;
        case 0x1470a0u: goto label_1470a0;
        case 0x1470a4u: goto label_1470a4;
        case 0x1470a8u: goto label_1470a8;
        case 0x1470acu: goto label_1470ac;
        case 0x1470b0u: goto label_1470b0;
        case 0x1470b4u: goto label_1470b4;
        case 0x1470b8u: goto label_1470b8;
        case 0x1470bcu: goto label_1470bc;
        case 0x1470c0u: goto label_1470c0;
        case 0x1470c4u: goto label_1470c4;
        case 0x1470c8u: goto label_1470c8;
        case 0x1470ccu: goto label_1470cc;
        case 0x1470d0u: goto label_1470d0;
        case 0x1470d4u: goto label_1470d4;
        case 0x1470d8u: goto label_1470d8;
        case 0x1470dcu: goto label_1470dc;
        case 0x1470e0u: goto label_1470e0;
        case 0x1470e4u: goto label_1470e4;
        case 0x1470e8u: goto label_1470e8;
        case 0x1470ecu: goto label_1470ec;
        case 0x1470f0u: goto label_1470f0;
        case 0x1470f4u: goto label_1470f4;
        case 0x1470f8u: goto label_1470f8;
        case 0x1470fcu: goto label_1470fc;
        case 0x147100u: goto label_147100;
        case 0x147104u: goto label_147104;
        case 0x147108u: goto label_147108;
        case 0x14710cu: goto label_14710c;
        case 0x147110u: goto label_147110;
        case 0x147114u: goto label_147114;
        case 0x147118u: goto label_147118;
        case 0x14711cu: goto label_14711c;
        case 0x147120u: goto label_147120;
        case 0x147124u: goto label_147124;
        case 0x147128u: goto label_147128;
        case 0x14712cu: goto label_14712c;
        case 0x147130u: goto label_147130;
        case 0x147134u: goto label_147134;
        case 0x147138u: goto label_147138;
        case 0x14713cu: goto label_14713c;
        case 0x147140u: goto label_147140;
        case 0x147144u: goto label_147144;
        case 0x147148u: goto label_147148;
        case 0x14714cu: goto label_14714c;
        case 0x147150u: goto label_147150;
        case 0x147154u: goto label_147154;
        case 0x147158u: goto label_147158;
        case 0x14715cu: goto label_14715c;
        case 0x147160u: goto label_147160;
        case 0x147164u: goto label_147164;
        case 0x147168u: goto label_147168;
        case 0x14716cu: goto label_14716c;
        case 0x147170u: goto label_147170;
        case 0x147174u: goto label_147174;
        case 0x147178u: goto label_147178;
        case 0x14717cu: goto label_14717c;
        case 0x147180u: goto label_147180;
        case 0x147184u: goto label_147184;
        case 0x147188u: goto label_147188;
        case 0x14718cu: goto label_14718c;
        case 0x147190u: goto label_147190;
        case 0x147194u: goto label_147194;
        case 0x147198u: goto label_147198;
        case 0x14719cu: goto label_14719c;
        case 0x1471a0u: goto label_1471a0;
        case 0x1471a4u: goto label_1471a4;
        case 0x1471a8u: goto label_1471a8;
        case 0x1471acu: goto label_1471ac;
        case 0x1471b0u: goto label_1471b0;
        case 0x1471b4u: goto label_1471b4;
        case 0x1471b8u: goto label_1471b8;
        case 0x1471bcu: goto label_1471bc;
        case 0x1471c0u: goto label_1471c0;
        case 0x1471c4u: goto label_1471c4;
        case 0x1471c8u: goto label_1471c8;
        case 0x1471ccu: goto label_1471cc;
        case 0x1471d0u: goto label_1471d0;
        case 0x1471d4u: goto label_1471d4;
        case 0x1471d8u: goto label_1471d8;
        case 0x1471dcu: goto label_1471dc;
        case 0x1471e0u: goto label_1471e0;
        case 0x1471e4u: goto label_1471e4;
        case 0x1471e8u: goto label_1471e8;
        case 0x1471ecu: goto label_1471ec;
        case 0x1471f0u: goto label_1471f0;
        case 0x1471f4u: goto label_1471f4;
        case 0x1471f8u: goto label_1471f8;
        case 0x1471fcu: goto label_1471fc;
        case 0x147200u: goto label_147200;
        case 0x147204u: goto label_147204;
        case 0x147208u: goto label_147208;
        case 0x14720cu: goto label_14720c;
        case 0x147210u: goto label_147210;
        case 0x147214u: goto label_147214;
        case 0x147218u: goto label_147218;
        case 0x14721cu: goto label_14721c;
        case 0x147220u: goto label_147220;
        case 0x147224u: goto label_147224;
        case 0x147228u: goto label_147228;
        case 0x14722cu: goto label_14722c;
        case 0x147230u: goto label_147230;
        case 0x147234u: goto label_147234;
        case 0x147238u: goto label_147238;
        case 0x14723cu: goto label_14723c;
        case 0x147240u: goto label_147240;
        case 0x147244u: goto label_147244;
        case 0x147248u: goto label_147248;
        case 0x14724cu: goto label_14724c;
        case 0x147250u: goto label_147250;
        case 0x147254u: goto label_147254;
        case 0x147258u: goto label_147258;
        case 0x14725cu: goto label_14725c;
        case 0x147260u: goto label_147260;
        case 0x147264u: goto label_147264;
        case 0x147268u: goto label_147268;
        case 0x14726cu: goto label_14726c;
        case 0x147270u: goto label_147270;
        case 0x147274u: goto label_147274;
        case 0x147278u: goto label_147278;
        case 0x14727cu: goto label_14727c;
        case 0x147280u: goto label_147280;
        case 0x147284u: goto label_147284;
        case 0x147288u: goto label_147288;
        case 0x14728cu: goto label_14728c;
        case 0x147290u: goto label_147290;
        case 0x147294u: goto label_147294;
        case 0x147298u: goto label_147298;
        case 0x14729cu: goto label_14729c;
        case 0x1472a0u: goto label_1472a0;
        case 0x1472a4u: goto label_1472a4;
        case 0x1472a8u: goto label_1472a8;
        case 0x1472acu: goto label_1472ac;
        case 0x1472b0u: goto label_1472b0;
        case 0x1472b4u: goto label_1472b4;
        case 0x1472b8u: goto label_1472b8;
        case 0x1472bcu: goto label_1472bc;
        case 0x1472c0u: goto label_1472c0;
        case 0x1472c4u: goto label_1472c4;
        case 0x1472c8u: goto label_1472c8;
        case 0x1472ccu: goto label_1472cc;
        case 0x1472d0u: goto label_1472d0;
        case 0x1472d4u: goto label_1472d4;
        case 0x1472d8u: goto label_1472d8;
        case 0x1472dcu: goto label_1472dc;
        case 0x1472e0u: goto label_1472e0;
        case 0x1472e4u: goto label_1472e4;
        case 0x1472e8u: goto label_1472e8;
        case 0x1472ecu: goto label_1472ec;
        case 0x1472f0u: goto label_1472f0;
        case 0x1472f4u: goto label_1472f4;
        case 0x1472f8u: goto label_1472f8;
        case 0x1472fcu: goto label_1472fc;
        case 0x147300u: goto label_147300;
        case 0x147304u: goto label_147304;
        case 0x147308u: goto label_147308;
        case 0x14730cu: goto label_14730c;
        case 0x147310u: goto label_147310;
        case 0x147314u: goto label_147314;
        case 0x147318u: goto label_147318;
        case 0x14731cu: goto label_14731c;
        case 0x147320u: goto label_147320;
        case 0x147324u: goto label_147324;
        case 0x147328u: goto label_147328;
        case 0x14732cu: goto label_14732c;
        case 0x147330u: goto label_147330;
        case 0x147334u: goto label_147334;
        case 0x147338u: goto label_147338;
        case 0x14733cu: goto label_14733c;
        case 0x147340u: goto label_147340;
        case 0x147344u: goto label_147344;
        case 0x147348u: goto label_147348;
        case 0x14734cu: goto label_14734c;
        case 0x147350u: goto label_147350;
        case 0x147354u: goto label_147354;
        case 0x147358u: goto label_147358;
        case 0x14735cu: goto label_14735c;
        case 0x147360u: goto label_147360;
        case 0x147364u: goto label_147364;
        case 0x147368u: goto label_147368;
        case 0x14736cu: goto label_14736c;
        case 0x147370u: goto label_147370;
        case 0x147374u: goto label_147374;
        case 0x147378u: goto label_147378;
        case 0x14737cu: goto label_14737c;
        case 0x147380u: goto label_147380;
        case 0x147384u: goto label_147384;
        case 0x147388u: goto label_147388;
        case 0x14738cu: goto label_14738c;
        case 0x147390u: goto label_147390;
        case 0x147394u: goto label_147394;
        case 0x147398u: goto label_147398;
        case 0x14739cu: goto label_14739c;
        case 0x1473a0u: goto label_1473a0;
        case 0x1473a4u: goto label_1473a4;
        case 0x1473a8u: goto label_1473a8;
        case 0x1473acu: goto label_1473ac;
        case 0x1473b0u: goto label_1473b0;
        case 0x1473b4u: goto label_1473b4;
        case 0x1473b8u: goto label_1473b8;
        case 0x1473bcu: goto label_1473bc;
        case 0x1473c0u: goto label_1473c0;
        case 0x1473c4u: goto label_1473c4;
        case 0x1473c8u: goto label_1473c8;
        case 0x1473ccu: goto label_1473cc;
        case 0x1473d0u: goto label_1473d0;
        case 0x1473d4u: goto label_1473d4;
        case 0x1473d8u: goto label_1473d8;
        case 0x1473dcu: goto label_1473dc;
        case 0x1473e0u: goto label_1473e0;
        case 0x1473e4u: goto label_1473e4;
        case 0x1473e8u: goto label_1473e8;
        case 0x1473ecu: goto label_1473ec;
        case 0x1473f0u: goto label_1473f0;
        case 0x1473f4u: goto label_1473f4;
        case 0x1473f8u: goto label_1473f8;
        case 0x1473fcu: goto label_1473fc;
        case 0x147400u: goto label_147400;
        case 0x147404u: goto label_147404;
        case 0x147408u: goto label_147408;
        case 0x14740cu: goto label_14740c;
        case 0x147410u: goto label_147410;
        case 0x147414u: goto label_147414;
        case 0x147418u: goto label_147418;
        case 0x14741cu: goto label_14741c;
        case 0x147420u: goto label_147420;
        case 0x147424u: goto label_147424;
        case 0x147428u: goto label_147428;
        case 0x14742cu: goto label_14742c;
        case 0x147430u: goto label_147430;
        case 0x147434u: goto label_147434;
        case 0x147438u: goto label_147438;
        case 0x14743cu: goto label_14743c;
        case 0x147440u: goto label_147440;
        case 0x147444u: goto label_147444;
        case 0x147448u: goto label_147448;
        case 0x14744cu: goto label_14744c;
        case 0x147450u: goto label_147450;
        case 0x147454u: goto label_147454;
        case 0x147458u: goto label_147458;
        case 0x14745cu: goto label_14745c;
        case 0x147460u: goto label_147460;
        case 0x147464u: goto label_147464;
        case 0x147468u: goto label_147468;
        case 0x14746cu: goto label_14746c;
        case 0x147470u: goto label_147470;
        case 0x147474u: goto label_147474;
        case 0x147478u: goto label_147478;
        case 0x14747cu: goto label_14747c;
        case 0x147480u: goto label_147480;
        case 0x147484u: goto label_147484;
        case 0x147488u: goto label_147488;
        case 0x14748cu: goto label_14748c;
        case 0x147490u: goto label_147490;
        case 0x147494u: goto label_147494;
        case 0x147498u: goto label_147498;
        case 0x14749cu: goto label_14749c;
        case 0x1474a0u: goto label_1474a0;
        case 0x1474a4u: goto label_1474a4;
        case 0x1474a8u: goto label_1474a8;
        case 0x1474acu: goto label_1474ac;
        case 0x1474b0u: goto label_1474b0;
        case 0x1474b4u: goto label_1474b4;
        case 0x1474b8u: goto label_1474b8;
        case 0x1474bcu: goto label_1474bc;
        case 0x1474c0u: goto label_1474c0;
        case 0x1474c4u: goto label_1474c4;
        case 0x1474c8u: goto label_1474c8;
        case 0x1474ccu: goto label_1474cc;
        case 0x1474d0u: goto label_1474d0;
        case 0x1474d4u: goto label_1474d4;
        case 0x1474d8u: goto label_1474d8;
        case 0x1474dcu: goto label_1474dc;
        case 0x1474e0u: goto label_1474e0;
        case 0x1474e4u: goto label_1474e4;
        case 0x1474e8u: goto label_1474e8;
        case 0x1474ecu: goto label_1474ec;
        case 0x1474f0u: goto label_1474f0;
        case 0x1474f4u: goto label_1474f4;
        case 0x1474f8u: goto label_1474f8;
        case 0x1474fcu: goto label_1474fc;
        case 0x147500u: goto label_147500;
        case 0x147504u: goto label_147504;
        case 0x147508u: goto label_147508;
        case 0x14750cu: goto label_14750c;
        case 0x147510u: goto label_147510;
        case 0x147514u: goto label_147514;
        case 0x147518u: goto label_147518;
        case 0x14751cu: goto label_14751c;
        case 0x147520u: goto label_147520;
        case 0x147524u: goto label_147524;
        case 0x147528u: goto label_147528;
        case 0x14752cu: goto label_14752c;
        case 0x147530u: goto label_147530;
        case 0x147534u: goto label_147534;
        case 0x147538u: goto label_147538;
        case 0x14753cu: goto label_14753c;
        case 0x147540u: goto label_147540;
        case 0x147544u: goto label_147544;
        case 0x147548u: goto label_147548;
        case 0x14754cu: goto label_14754c;
        case 0x147550u: goto label_147550;
        case 0x147554u: goto label_147554;
        case 0x147558u: goto label_147558;
        case 0x14755cu: goto label_14755c;
        case 0x147560u: goto label_147560;
        case 0x147564u: goto label_147564;
        case 0x147568u: goto label_147568;
        case 0x14756cu: goto label_14756c;
        case 0x147570u: goto label_147570;
        case 0x147574u: goto label_147574;
        case 0x147578u: goto label_147578;
        case 0x14757cu: goto label_14757c;
        case 0x147580u: goto label_147580;
        case 0x147584u: goto label_147584;
        case 0x147588u: goto label_147588;
        case 0x14758cu: goto label_14758c;
        case 0x147590u: goto label_147590;
        case 0x147594u: goto label_147594;
        case 0x147598u: goto label_147598;
        case 0x14759cu: goto label_14759c;
        case 0x1475a0u: goto label_1475a0;
        case 0x1475a4u: goto label_1475a4;
        case 0x1475a8u: goto label_1475a8;
        case 0x1475acu: goto label_1475ac;
        case 0x1475b0u: goto label_1475b0;
        case 0x1475b4u: goto label_1475b4;
        case 0x1475b8u: goto label_1475b8;
        case 0x1475bcu: goto label_1475bc;
        case 0x1475c0u: goto label_1475c0;
        case 0x1475c4u: goto label_1475c4;
        case 0x1475c8u: goto label_1475c8;
        case 0x1475ccu: goto label_1475cc;
        case 0x1475d0u: goto label_1475d0;
        case 0x1475d4u: goto label_1475d4;
        case 0x1475d8u: goto label_1475d8;
        case 0x1475dcu: goto label_1475dc;
        case 0x1475e0u: goto label_1475e0;
        case 0x1475e4u: goto label_1475e4;
        case 0x1475e8u: goto label_1475e8;
        case 0x1475ecu: goto label_1475ec;
        case 0x1475f0u: goto label_1475f0;
        case 0x1475f4u: goto label_1475f4;
        case 0x1475f8u: goto label_1475f8;
        case 0x1475fcu: goto label_1475fc;
        case 0x147600u: goto label_147600;
        case 0x147604u: goto label_147604;
        case 0x147608u: goto label_147608;
        case 0x14760cu: goto label_14760c;
        case 0x147610u: goto label_147610;
        case 0x147614u: goto label_147614;
        case 0x147618u: goto label_147618;
        case 0x14761cu: goto label_14761c;
        case 0x147620u: goto label_147620;
        case 0x147624u: goto label_147624;
        case 0x147628u: goto label_147628;
        case 0x14762cu: goto label_14762c;
        case 0x147630u: goto label_147630;
        case 0x147634u: goto label_147634;
        case 0x147638u: goto label_147638;
        case 0x14763cu: goto label_14763c;
        case 0x147640u: goto label_147640;
        case 0x147644u: goto label_147644;
        case 0x147648u: goto label_147648;
        case 0x14764cu: goto label_14764c;
        case 0x147650u: goto label_147650;
        case 0x147654u: goto label_147654;
        case 0x147658u: goto label_147658;
        case 0x14765cu: goto label_14765c;
        case 0x147660u: goto label_147660;
        case 0x147664u: goto label_147664;
        case 0x147668u: goto label_147668;
        case 0x14766cu: goto label_14766c;
        case 0x147670u: goto label_147670;
        case 0x147674u: goto label_147674;
        case 0x147678u: goto label_147678;
        case 0x14767cu: goto label_14767c;
        case 0x147680u: goto label_147680;
        case 0x147684u: goto label_147684;
        case 0x147688u: goto label_147688;
        case 0x14768cu: goto label_14768c;
        case 0x147690u: goto label_147690;
        case 0x147694u: goto label_147694;
        case 0x147698u: goto label_147698;
        case 0x14769cu: goto label_14769c;
        case 0x1476a0u: goto label_1476a0;
        case 0x1476a4u: goto label_1476a4;
        case 0x1476a8u: goto label_1476a8;
        case 0x1476acu: goto label_1476ac;
        case 0x1476b0u: goto label_1476b0;
        case 0x1476b4u: goto label_1476b4;
        case 0x1476b8u: goto label_1476b8;
        case 0x1476bcu: goto label_1476bc;
        case 0x1476c0u: goto label_1476c0;
        case 0x1476c4u: goto label_1476c4;
        case 0x1476c8u: goto label_1476c8;
        case 0x1476ccu: goto label_1476cc;
        case 0x1476d0u: goto label_1476d0;
        case 0x1476d4u: goto label_1476d4;
        case 0x1476d8u: goto label_1476d8;
        case 0x1476dcu: goto label_1476dc;
        case 0x1476e0u: goto label_1476e0;
        case 0x1476e4u: goto label_1476e4;
        case 0x1476e8u: goto label_1476e8;
        case 0x1476ecu: goto label_1476ec;
        case 0x1476f0u: goto label_1476f0;
        case 0x1476f4u: goto label_1476f4;
        case 0x1476f8u: goto label_1476f8;
        case 0x1476fcu: goto label_1476fc;
        case 0x147700u: goto label_147700;
        case 0x147704u: goto label_147704;
        case 0x147708u: goto label_147708;
        case 0x14770cu: goto label_14770c;
        case 0x147710u: goto label_147710;
        case 0x147714u: goto label_147714;
        case 0x147718u: goto label_147718;
        case 0x14771cu: goto label_14771c;
        case 0x147720u: goto label_147720;
        case 0x147724u: goto label_147724;
        case 0x147728u: goto label_147728;
        case 0x14772cu: goto label_14772c;
        case 0x147730u: goto label_147730;
        case 0x147734u: goto label_147734;
        case 0x147738u: goto label_147738;
        case 0x14773cu: goto label_14773c;
        case 0x147740u: goto label_147740;
        case 0x147744u: goto label_147744;
        case 0x147748u: goto label_147748;
        case 0x14774cu: goto label_14774c;
        case 0x147750u: goto label_147750;
        case 0x147754u: goto label_147754;
        case 0x147758u: goto label_147758;
        case 0x14775cu: goto label_14775c;
        case 0x147760u: goto label_147760;
        case 0x147764u: goto label_147764;
        case 0x147768u: goto label_147768;
        case 0x14776cu: goto label_14776c;
        case 0x147770u: goto label_147770;
        case 0x147774u: goto label_147774;
        case 0x147778u: goto label_147778;
        case 0x14777cu: goto label_14777c;
        case 0x147780u: goto label_147780;
        case 0x147784u: goto label_147784;
        case 0x147788u: goto label_147788;
        case 0x14778cu: goto label_14778c;
        case 0x147790u: goto label_147790;
        case 0x147794u: goto label_147794;
        case 0x147798u: goto label_147798;
        case 0x14779cu: goto label_14779c;
        case 0x1477a0u: goto label_1477a0;
        case 0x1477a4u: goto label_1477a4;
        case 0x1477a8u: goto label_1477a8;
        case 0x1477acu: goto label_1477ac;
        case 0x1477b0u: goto label_1477b0;
        case 0x1477b4u: goto label_1477b4;
        case 0x1477b8u: goto label_1477b8;
        case 0x1477bcu: goto label_1477bc;
        case 0x1477c0u: goto label_1477c0;
        case 0x1477c4u: goto label_1477c4;
        case 0x1477c8u: goto label_1477c8;
        case 0x1477ccu: goto label_1477cc;
        case 0x1477d0u: goto label_1477d0;
        case 0x1477d4u: goto label_1477d4;
        case 0x1477d8u: goto label_1477d8;
        case 0x1477dcu: goto label_1477dc;
        case 0x1477e0u: goto label_1477e0;
        case 0x1477e4u: goto label_1477e4;
        case 0x1477e8u: goto label_1477e8;
        case 0x1477ecu: goto label_1477ec;
        case 0x1477f0u: goto label_1477f0;
        case 0x1477f4u: goto label_1477f4;
        case 0x1477f8u: goto label_1477f8;
        case 0x1477fcu: goto label_1477fc;
        case 0x147800u: goto label_147800;
        case 0x147804u: goto label_147804;
        case 0x147808u: goto label_147808;
        case 0x14780cu: goto label_14780c;
        case 0x147810u: goto label_147810;
        case 0x147814u: goto label_147814;
        case 0x147818u: goto label_147818;
        case 0x14781cu: goto label_14781c;
        case 0x147820u: goto label_147820;
        case 0x147824u: goto label_147824;
        case 0x147828u: goto label_147828;
        case 0x14782cu: goto label_14782c;
        case 0x147830u: goto label_147830;
        case 0x147834u: goto label_147834;
        case 0x147838u: goto label_147838;
        case 0x14783cu: goto label_14783c;
        case 0x147840u: goto label_147840;
        case 0x147844u: goto label_147844;
        case 0x147848u: goto label_147848;
        case 0x14784cu: goto label_14784c;
        case 0x147850u: goto label_147850;
        case 0x147854u: goto label_147854;
        case 0x147858u: goto label_147858;
        case 0x14785cu: goto label_14785c;
        case 0x147860u: goto label_147860;
        case 0x147864u: goto label_147864;
        case 0x147868u: goto label_147868;
        case 0x14786cu: goto label_14786c;
        case 0x147870u: goto label_147870;
        case 0x147874u: goto label_147874;
        case 0x147878u: goto label_147878;
        case 0x14787cu: goto label_14787c;
        case 0x147880u: goto label_147880;
        case 0x147884u: goto label_147884;
        case 0x147888u: goto label_147888;
        case 0x14788cu: goto label_14788c;
        case 0x147890u: goto label_147890;
        case 0x147894u: goto label_147894;
        case 0x147898u: goto label_147898;
        case 0x14789cu: goto label_14789c;
        case 0x1478a0u: goto label_1478a0;
        case 0x1478a4u: goto label_1478a4;
        case 0x1478a8u: goto label_1478a8;
        case 0x1478acu: goto label_1478ac;
        case 0x1478b0u: goto label_1478b0;
        case 0x1478b4u: goto label_1478b4;
        case 0x1478b8u: goto label_1478b8;
        case 0x1478bcu: goto label_1478bc;
        case 0x1478c0u: goto label_1478c0;
        case 0x1478c4u: goto label_1478c4;
        case 0x1478c8u: goto label_1478c8;
        case 0x1478ccu: goto label_1478cc;
        case 0x1478d0u: goto label_1478d0;
        case 0x1478d4u: goto label_1478d4;
        case 0x1478d8u: goto label_1478d8;
        case 0x1478dcu: goto label_1478dc;
        case 0x1478e0u: goto label_1478e0;
        case 0x1478e4u: goto label_1478e4;
        case 0x1478e8u: goto label_1478e8;
        case 0x1478ecu: goto label_1478ec;
        case 0x1478f0u: goto label_1478f0;
        case 0x1478f4u: goto label_1478f4;
        case 0x1478f8u: goto label_1478f8;
        case 0x1478fcu: goto label_1478fc;
        case 0x147900u: goto label_147900;
        case 0x147904u: goto label_147904;
        case 0x147908u: goto label_147908;
        case 0x14790cu: goto label_14790c;
        case 0x147910u: goto label_147910;
        case 0x147914u: goto label_147914;
        case 0x147918u: goto label_147918;
        case 0x14791cu: goto label_14791c;
        case 0x147920u: goto label_147920;
        case 0x147924u: goto label_147924;
        case 0x147928u: goto label_147928;
        case 0x14792cu: goto label_14792c;
        case 0x147930u: goto label_147930;
        case 0x147934u: goto label_147934;
        case 0x147938u: goto label_147938;
        case 0x14793cu: goto label_14793c;
        case 0x147940u: goto label_147940;
        case 0x147944u: goto label_147944;
        case 0x147948u: goto label_147948;
        case 0x14794cu: goto label_14794c;
        case 0x147950u: goto label_147950;
        case 0x147954u: goto label_147954;
        case 0x147958u: goto label_147958;
        case 0x14795cu: goto label_14795c;
        case 0x147960u: goto label_147960;
        case 0x147964u: goto label_147964;
        case 0x147968u: goto label_147968;
        case 0x14796cu: goto label_14796c;
        case 0x147970u: goto label_147970;
        case 0x147974u: goto label_147974;
        case 0x147978u: goto label_147978;
        case 0x14797cu: goto label_14797c;
        case 0x147980u: goto label_147980;
        case 0x147984u: goto label_147984;
        case 0x147988u: goto label_147988;
        case 0x14798cu: goto label_14798c;
        case 0x147990u: goto label_147990;
        case 0x147994u: goto label_147994;
        case 0x147998u: goto label_147998;
        case 0x14799cu: goto label_14799c;
        case 0x1479a0u: goto label_1479a0;
        case 0x1479a4u: goto label_1479a4;
        case 0x1479a8u: goto label_1479a8;
        case 0x1479acu: goto label_1479ac;
        case 0x1479b0u: goto label_1479b0;
        case 0x1479b4u: goto label_1479b4;
        case 0x1479b8u: goto label_1479b8;
        case 0x1479bcu: goto label_1479bc;
        case 0x1479c0u: goto label_1479c0;
        case 0x1479c4u: goto label_1479c4;
        case 0x1479c8u: goto label_1479c8;
        case 0x1479ccu: goto label_1479cc;
        case 0x1479d0u: goto label_1479d0;
        case 0x1479d4u: goto label_1479d4;
        case 0x1479d8u: goto label_1479d8;
        case 0x1479dcu: goto label_1479dc;
        case 0x1479e0u: goto label_1479e0;
        case 0x1479e4u: goto label_1479e4;
        case 0x1479e8u: goto label_1479e8;
        case 0x1479ecu: goto label_1479ec;
        case 0x1479f0u: goto label_1479f0;
        case 0x1479f4u: goto label_1479f4;
        case 0x1479f8u: goto label_1479f8;
        case 0x1479fcu: goto label_1479fc;
        case 0x147a00u: goto label_147a00;
        case 0x147a04u: goto label_147a04;
        case 0x147a08u: goto label_147a08;
        case 0x147a0cu: goto label_147a0c;
        case 0x147a10u: goto label_147a10;
        case 0x147a14u: goto label_147a14;
        case 0x147a18u: goto label_147a18;
        case 0x147a1cu: goto label_147a1c;
        case 0x147a20u: goto label_147a20;
        case 0x147a24u: goto label_147a24;
        case 0x147a28u: goto label_147a28;
        case 0x147a2cu: goto label_147a2c;
        case 0x147a30u: goto label_147a30;
        case 0x147a34u: goto label_147a34;
        case 0x147a38u: goto label_147a38;
        case 0x147a3cu: goto label_147a3c;
        case 0x147a40u: goto label_147a40;
        case 0x147a44u: goto label_147a44;
        case 0x147a48u: goto label_147a48;
        case 0x147a4cu: goto label_147a4c;
        case 0x147a50u: goto label_147a50;
        case 0x147a54u: goto label_147a54;
        case 0x147a58u: goto label_147a58;
        case 0x147a5cu: goto label_147a5c;
        case 0x147a60u: goto label_147a60;
        case 0x147a64u: goto label_147a64;
        case 0x147a68u: goto label_147a68;
        case 0x147a6cu: goto label_147a6c;
        case 0x147a70u: goto label_147a70;
        case 0x147a74u: goto label_147a74;
        case 0x147a78u: goto label_147a78;
        case 0x147a7cu: goto label_147a7c;
        case 0x147a80u: goto label_147a80;
        case 0x147a84u: goto label_147a84;
        case 0x147a88u: goto label_147a88;
        case 0x147a8cu: goto label_147a8c;
        case 0x147a90u: goto label_147a90;
        case 0x147a94u: goto label_147a94;
        case 0x147a98u: goto label_147a98;
        default: break;
    }

    ctx->pc = 0x146fd0u;

label_146fd0:
    // 0x146fd0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x146fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_146fd4:
    // 0x146fd4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x146fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_146fd8:
    // 0x146fd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x146fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_146fdc:
    // 0x146fdc: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x146fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_146fe0:
    // 0x146fe0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x146fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_146fe4:
    // 0x146fe4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x146fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_146fe8:
    // 0x146fe8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x146fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_146fec:
    // 0x146fec: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x146fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_146ff0:
    // 0x146ff0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x146ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_146ff4:
    // 0x146ff4: 0x3c026c41  lui         $v0, 0x6C41
    ctx->pc = 0x146ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27713 << 16));
label_146ff8:
    // 0x146ff8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x146ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_146ffc:
    // 0x146ffc: 0x346b0404  ori         $t3, $v1, 0x404
    ctx->pc = 0x146ffcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_147000:
    // 0x147000: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x147000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_147004:
    // 0x147004: 0x344380bf  ori         $v1, $v0, 0x80BF
    ctx->pc = 0x147004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32959);
label_147008:
    // 0x147008: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x147008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14700c:
    // 0x14700c: 0x344282bf  ori         $v0, $v0, 0x82BF
    ctx->pc = 0x14700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33471);
label_147010:
    // 0x147010: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x147010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_147014:
    // 0x147014: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x147014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147018:
    // 0x147018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14701c:
    // 0x14701c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_147020:
    // 0x147020: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x147020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_147024:
    // 0x147024: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x147024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_147028:
    // 0x147028: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x147028u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_14702c:
    // 0x14702c: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x14702cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147030:
    // 0x147030: 0x8d290088  lw          $t1, 0x88($t1)
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 136)));
label_147034:
    // 0x147034: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x147034u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
label_147038:
    // 0x147038: 0xa1480003  sb          $t0, 0x3($t2)
    ctx->pc = 0x147038u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 8));
label_14703c:
    // 0x14703c: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x14703cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
label_147040:
    // 0x147040: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x147040u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
label_147044:
    // 0x147044: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x147044u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_147048:
    // 0x147048: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x147048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_14704c:
    // 0x14704c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x14704cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147050:
    // 0x147050: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_147054:
    // 0x147054: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x147054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_147058:
    // 0x147058: 0x8f8885b0  lw          $t0, -0x7A50($gp)
    ctx->pc = 0x147058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
label_14705c:
    // 0x14705c: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x14705cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147060:
    // 0x147060: 0xa1270003  sb          $a3, 0x3($t1)
    ctx->pc = 0x147060u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 7));
label_147064:
    // 0x147064: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x147064u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
label_147068:
    // 0x147068: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x147068u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
label_14706c:
    // 0x14706c: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x14706cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
label_147070:
    // 0x147070: 0xad2b0008  sw          $t3, 0x8($t1)
    ctx->pc = 0x147070u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 11));
label_147074:
    // 0x147074: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x147074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_147078:
    // 0x147078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14707c:
    // 0x14707c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_147080:
    // 0x147080: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x147080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_147084:
    // 0x147084: 0x8f8385b0  lw          $v1, -0x7A50($gp)
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
label_147088:
    // 0x147088: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x147088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14708c:
    // 0x14708c: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x14708cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
label_147090:
    // 0x147090: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x147090u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_147094:
    // 0x147094: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x147094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_147098:
    // 0x147098: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x147098u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
label_14709c:
    // 0x14709c: 0xad0b0008  sw          $t3, 0x8($t0)
    ctx->pc = 0x14709cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 11));
label_1470a0:
    // 0x1470a0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1470a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_1470a4:
    // 0x1470a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1470a8:
    // 0x1470a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1470ac:
    // 0x1470ac: 0xc052120  jal         func_148480
label_1470b0:
    if (ctx->pc == 0x1470B0u) {
        ctx->pc = 0x1470B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470ACu;
        // 0x1470b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1470B4u;
        goto label_1470b4;
    }
    ctx->pc = 0x1470ACu;
    SET_GPR_U32(ctx, 31, 0x1470B4u);
    ctx->pc = 0x1470B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470ACu;
    // 0x1470b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148480u, 0x1470ACu, 0x1470B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470B4u;
label_1470b4:
    // 0x1470b4: 0xc051ff4  jal         func_147FD0
label_1470b8:
    if (ctx->pc == 0x1470B8u) {
        ctx->pc = 0x1470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470B4u;
        // 0x1470b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1470BCu;
        goto label_1470bc;
    }
    ctx->pc = 0x1470B4u;
    SET_GPR_U32(ctx, 31, 0x1470BCu);
    ctx->pc = 0x1470B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470B4u;
    // 0x1470b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147FD0u, 0x1470B4u, 0x1470BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470BCu;
label_1470bc:
    // 0x1470bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1470bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1470c0:
    // 0x1470c0: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_1470c4:
    if (ctx->pc == 0x1470C4u) {
        ctx->pc = 0x1470C8u;
        goto label_1470c8;
    }
    ctx->pc = 0x1470C0u;
    {
        const bool branch_taken_0x1470c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1470c0) {
            ctx->pc = 0x14714Cu;
            goto label_14714c;
        }
    }
    ctx->pc = 0x1470C8u;
label_1470c8:
    // 0x1470c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1470c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1470cc:
    // 0x1470cc: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_1470d0:
    if (ctx->pc == 0x1470D0u) {
        ctx->pc = 0x1470D4u;
        goto label_1470d4;
    }
    ctx->pc = 0x1470CCu;
    {
        const bool branch_taken_0x1470cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1470cc) {
            ctx->pc = 0x147118u;
            goto label_147118;
        }
    }
    ctx->pc = 0x1470D4u;
label_1470d4:
    // 0x1470d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1470d8:
    if (ctx->pc == 0x1470D8u) {
        ctx->pc = 0x1470DCu;
        goto label_1470dc;
    }
    ctx->pc = 0x1470D4u;
    {
        const bool branch_taken_0x1470d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470d4) {
            ctx->pc = 0x1470E4u;
            goto label_1470e4;
        }
    }
    ctx->pc = 0x1470DCu;
label_1470dc:
    // 0x1470dc: 0x100001d4  b           . + 4 + (0x1D4 << 2)
label_1470e0:
    if (ctx->pc == 0x1470E0u) {
        ctx->pc = 0x1470E4u;
        goto label_1470e4;
    }
    ctx->pc = 0x1470DCu;
    {
        const bool branch_taken_0x1470dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470dc) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x1470E4u;
label_1470e4:
    // 0x1470e4: 0x8e8202b4  lw          $v0, 0x2B4($s4)
    ctx->pc = 0x1470e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 692)));
label_1470e8:
    // 0x1470e8: 0x104001d1  beqz        $v0, . + 4 + (0x1D1 << 2)
label_1470ec:
    if (ctx->pc == 0x1470ECu) {
        ctx->pc = 0x1470F0u;
        goto label_1470f0;
    }
    ctx->pc = 0x1470E8u;
    {
        const bool branch_taken_0x1470e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470e8) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x1470F0u;
label_1470f0:
    // 0x1470f0: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1470f4:
    // 0x1470f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1470f8:
    // 0x1470f8: 0x34463880  ori         $a2, $v0, 0x3880
    ctx->pc = 0x1470f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
label_1470fc:
    // 0x1470fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1470fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_147100:
    // 0x147100: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x147100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_147104:
    // 0x147104: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_147108:
    // 0x147108: 0xc07fdfe  jal         func_1FF7F8
label_14710c:
    if (ctx->pc == 0x14710Cu) {
        ctx->pc = 0x14710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147108u;
        // 0x14710c: 0x8e8503c4  lw          $a1, 0x3C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147110u;
        goto label_147110;
    }
    ctx->pc = 0x147108u;
    SET_GPR_U32(ctx, 31, 0x147110u);
    ctx->pc = 0x14710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147108u;
    // 0x14710c: 0x8e8503c4  lw          $a1, 0x3C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x147108u, 0x147110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147110u;
label_147110:
    // 0x147110: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_147114:
    if (ctx->pc == 0x147114u) {
        ctx->pc = 0x147118u;
        goto label_147118;
    }
    ctx->pc = 0x147110u;
    {
        const bool branch_taken_0x147110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147110) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x147118u;
label_147118:
    // 0x147118: 0x8e8202b8  lw          $v0, 0x2B8($s4)
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_14711c:
    // 0x14711c: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
label_147120:
    if (ctx->pc == 0x147120u) {
        ctx->pc = 0x147124u;
        goto label_147124;
    }
    ctx->pc = 0x14711Cu;
    {
        const bool branch_taken_0x14711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14711c) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x147124u;
label_147124:
    // 0x147124: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x147124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147128:
    // 0x147128: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x147128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_14712c:
    // 0x14712c: 0x34463880  ori         $a2, $v0, 0x3880
    ctx->pc = 0x14712cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
label_147130:
    // 0x147130: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_147134:
    // 0x147134: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x147134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_147138:
    // 0x147138: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x147138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_14713c:
    // 0x14713c: 0xc07fdfe  jal         func_1FF7F8
label_147140:
    if (ctx->pc == 0x147140u) {
        ctx->pc = 0x147140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14713Cu;
        // 0x147140: 0x8e8503c8  lw          $a1, 0x3C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147144u;
        goto label_147144;
    }
    ctx->pc = 0x14713Cu;
    SET_GPR_U32(ctx, 31, 0x147144u);
    ctx->pc = 0x147140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14713Cu;
    // 0x147140: 0x8e8503c8  lw          $a1, 0x3C8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x14713Cu, 0x147144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147144u;
label_147144:
    // 0x147144: 0x100001ba  b           . + 4 + (0x1BA << 2)
label_147148:
    if (ctx->pc == 0x147148u) {
        ctx->pc = 0x14714Cu;
        goto label_14714c;
    }
    ctx->pc = 0x147144u;
    {
        const bool branch_taken_0x147144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147144) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x14714Cu;
label_14714c:
    // 0x14714c: 0x8e8502b4  lw          $a1, 0x2B4($s4)
    ctx->pc = 0x14714cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 692)));
label_147150:
    // 0x147150: 0x10a001b7  beqz        $a1, . + 4 + (0x1B7 << 2)
label_147154:
    if (ctx->pc == 0x147154u) {
        ctx->pc = 0x147158u;
        goto label_147158;
    }
    ctx->pc = 0x147150u;
    {
        const bool branch_taken_0x147150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x147150) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x147158u;
label_147158:
    // 0x147158: 0x8e8202b8  lw          $v0, 0x2B8($s4)
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_14715c:
    // 0x14715c: 0x104001b4  beqz        $v0, . + 4 + (0x1B4 << 2)
label_147160:
    if (ctx->pc == 0x147160u) {
        ctx->pc = 0x147164u;
        goto label_147164;
    }
    ctx->pc = 0x14715Cu;
    {
        const bool branch_taken_0x14715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14715c) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x147164u;
label_147164:
    // 0x147164: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147168:
    // 0x147168: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x147168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_14716c:
    // 0x14716c: 0x320f809  jalr        $t9
label_147170:
    if (ctx->pc == 0x147170u) {
        ctx->pc = 0x147170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14716Cu;
        // 0x147170: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147174u;
        goto label_147174;
    }
    ctx->pc = 0x14716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147174u);
        ctx->pc = 0x147170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14716Cu;
        // 0x147170: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14716Cu, 0x147174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x147174u;
label_147174:
    // 0x147174: 0x8e8502b8  lw          $a1, 0x2B8($s4)
    ctx->pc = 0x147174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 696)));
label_147178:
    // 0x147178: 0x8fb3013c  lw          $s3, 0x13C($sp)
    ctx->pc = 0x147178u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_14717c:
    // 0x14717c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x14717cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_147180:
    // 0x147180: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_147184:
    // 0x147184: 0x320f809  jalr        $t9
label_147188:
    if (ctx->pc == 0x147188u) {
        ctx->pc = 0x147188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147184u;
        // 0x147188: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14718Cu;
        goto label_14718c;
    }
    ctx->pc = 0x147184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14718Cu);
        ctx->pc = 0x147188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147184u;
        // 0x147188: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147184u, 0x14718Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14718Cu;
label_14718c:
    // 0x14718c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_147190:
    // 0x147190: 0x8fbe014c  lw          $fp, 0x14C($sp)
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_147194:
    // 0x147194: 0x8e9703c4  lw          $s7, 0x3C4($s4)
    ctx->pc = 0x147194u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
label_147198:
    // 0x147198: 0x8e9603c8  lw          $s6, 0x3C8($s4)
    ctx->pc = 0x147198u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 968)));
label_14719c:
    // 0x14719c: 0xc04c6f4  jal         func_131BD0
label_1471a0:
    if (ctx->pc == 0x1471A0u) {
        ctx->pc = 0x1471A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14719Cu;
        // 0x1471a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471A4u;
        goto label_1471a4;
    }
    ctx->pc = 0x14719Cu;
    SET_GPR_U32(ctx, 31, 0x1471A4u);
    ctx->pc = 0x1471A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14719Cu;
    // 0x1471a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x14719Cu, 0x1471A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471A4u;
label_1471a4:
    // 0x1471a4: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x1471a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1471a8:
    // 0x1471a8: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1471ac:
    if (ctx->pc == 0x1471ACu) {
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471B0u;
        goto label_1471b0;
    }
    ctx->pc = 0x1471A8u;
    {
        const bool branch_taken_0x1471a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471A8u;
        // 0x1471ac: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471a8) {
            ctx->pc = 0x14722Cu;
            goto label_14722c;
        }
    }
    ctx->pc = 0x1471B0u;
label_1471b0:
    // 0x1471b0: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x1471b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1471b4:
    // 0x1471b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1471b8:
    if (ctx->pc == 0x1471B8u) {
        ctx->pc = 0x1471B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471B4u;
        // 0x1471b8: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471BCu;
        goto label_1471bc;
    }
    ctx->pc = 0x1471B4u;
    {
        const bool branch_taken_0x1471b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471B4u;
        // 0x1471b8: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471b4) {
            ctx->pc = 0x1471C8u;
            goto label_1471c8;
        }
    }
    ctx->pc = 0x1471BCu;
label_1471bc:
    // 0x1471bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1471c0:
    if (ctx->pc == 0x1471C0u) {
        ctx->pc = 0x1471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471BCu;
        // 0x1471c0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471C4u;
        goto label_1471c4;
    }
    ctx->pc = 0x1471BCu;
    {
        const bool branch_taken_0x1471bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471BCu;
        // 0x1471c0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471bc) {
            ctx->pc = 0x1471C8u;
            goto label_1471c8;
        }
    }
    ctx->pc = 0x1471C4u;
label_1471c4:
    // 0x1471c4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1471c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1471c8:
    // 0x1471c8: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x1471c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1471cc:
    // 0x1471cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1471d0:
    if (ctx->pc == 0x1471D0u) {
        ctx->pc = 0x1471D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471CCu;
        // 0x1471d0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471D4u;
        goto label_1471d4;
    }
    ctx->pc = 0x1471CCu;
    {
        const bool branch_taken_0x1471cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471CCu;
        // 0x1471d0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471cc) {
            ctx->pc = 0x1471E0u;
            goto label_1471e0;
        }
    }
    ctx->pc = 0x1471D4u;
label_1471d4:
    // 0x1471d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1471d8:
    if (ctx->pc == 0x1471D8u) {
        ctx->pc = 0x1471D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471D4u;
        // 0x1471d8: 0x3c0a82d  daddu       $s5, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471DCu;
        goto label_1471dc;
    }
    ctx->pc = 0x1471D4u;
    {
        const bool branch_taken_0x1471d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471D4u;
        // 0x1471d8: 0x3c0a82d  daddu       $s5, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471d4) {
            ctx->pc = 0x1471E0u;
            goto label_1471e0;
        }
    }
    ctx->pc = 0x1471DCu;
label_1471dc:
    // 0x1471dc: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1471dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1471e0:
    // 0x1471e0: 0x2b01023  subu        $v0, $s5, $s0
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1471e4:
    // 0x1471e4: 0x215082b  sltu        $at, $s0, $s5
    ctx->pc = 0x1471e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1471e8:
    // 0x1471e8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_1471ec:
    if (ctx->pc == 0x1471ECu) {
        ctx->pc = 0x1471ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E8u;
        // 0x1471ec: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1471F0u;
        goto label_1471f0;
    }
    ctx->pc = 0x1471E8u;
    {
        const bool branch_taken_0x1471e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E8u;
        // 0x1471ec: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e8) {
            ctx->pc = 0x1472A0u;
            goto label_1472a0;
        }
    }
    ctx->pc = 0x1471F0u;
label_1471f0:
    // 0x1471f0: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x1471f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1471f4:
    // 0x1471f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1471f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1471f8:
    // 0x1471f8: 0x2f19021  addu        $s2, $s7, $s1
    ctx->pc = 0x1471f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_1471fc:
    // 0x1471fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1471fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147200:
    // 0x147200: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x147200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_147204:
    // 0x147204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_147208:
    // 0x147208: 0xc07d38e  jal         func_1F4E38
label_14720c:
    if (ctx->pc == 0x14720Cu) {
        ctx->pc = 0x14720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147208u;
        // 0x14720c: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147210u;
        goto label_147210;
    }
    ctx->pc = 0x147208u;
    SET_GPR_U32(ctx, 31, 0x147210u);
    ctx->pc = 0x14720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147208u;
    // 0x14720c: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x147208u, 0x147210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147210u;
label_147210:
    // 0x147210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_147214:
    // 0x147214: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x147214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_147218:
    // 0x147218: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x147218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_14721c:
    // 0x14721c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_147220:
    if (ctx->pc == 0x147220u) {
        ctx->pc = 0x147220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14721Cu;
        // 0x147220: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147224u;
        goto label_147224;
    }
    ctx->pc = 0x14721Cu;
    {
        const bool branch_taken_0x14721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14721Cu;
        // 0x147220: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14721c) {
            ctx->pc = 0x1471F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1471f4;
        }
    }
    ctx->pc = 0x147224u;
label_147224:
    // 0x147224: 0x1000001e  b           . + 4 + (0x1E << 2)
label_147228:
    if (ctx->pc == 0x147228u) {
        ctx->pc = 0x14722Cu;
        goto label_14722c;
    }
    ctx->pc = 0x147224u;
    {
        const bool branch_taken_0x147224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147224) {
            ctx->pc = 0x1472A0u;
            goto label_1472a0;
        }
    }
    ctx->pc = 0x14722Cu;
label_14722c:
    // 0x14722c: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x14722cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_147230:
    // 0x147230: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_147234:
    if (ctx->pc == 0x147234u) {
        ctx->pc = 0x147234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147230u;
        // 0x147234: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147238u;
        goto label_147238;
    }
    ctx->pc = 0x147230u;
    {
        const bool branch_taken_0x147230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147230u;
        // 0x147234: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147230) {
            ctx->pc = 0x147244u;
            goto label_147244;
        }
    }
    ctx->pc = 0x147238u;
label_147238:
    // 0x147238: 0x10000002  b           . + 4 + (0x2 << 2)
label_14723c:
    if (ctx->pc == 0x14723Cu) {
        ctx->pc = 0x14723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147238u;
        // 0x14723c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147240u;
        goto label_147240;
    }
    ctx->pc = 0x147238u;
    {
        const bool branch_taken_0x147238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147238u;
        // 0x14723c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147238) {
            ctx->pc = 0x147244u;
            goto label_147244;
        }
    }
    ctx->pc = 0x147240u;
label_147240:
    // 0x147240: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x147240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_147244:
    // 0x147244: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x147244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_147248:
    // 0x147248: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_14724c:
    if (ctx->pc == 0x14724Cu) {
        ctx->pc = 0x14724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147248u;
        // 0x14724c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147250u;
        goto label_147250;
    }
    ctx->pc = 0x147248u;
    {
        const bool branch_taken_0x147248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147248u;
        // 0x14724c: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147248) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x147250u;
label_147250:
    // 0x147250: 0x10000002  b           . + 4 + (0x2 << 2)
label_147254:
    if (ctx->pc == 0x147254u) {
        ctx->pc = 0x147254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147250u;
        // 0x147254: 0x3c0a82d  daddu       $s5, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147258u;
        goto label_147258;
    }
    ctx->pc = 0x147250u;
    {
        const bool branch_taken_0x147250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147250u;
        // 0x147254: 0x3c0a82d  daddu       $s5, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147250) {
            ctx->pc = 0x14725Cu;
            goto label_14725c;
        }
    }
    ctx->pc = 0x147258u;
label_147258:
    // 0x147258: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x147258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14725c:
    // 0x14725c: 0x2b21023  subu        $v0, $s5, $s2
    ctx->pc = 0x14725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_147260:
    // 0x147260: 0x255082b  sltu        $at, $s2, $s5
    ctx->pc = 0x147260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_147264:
    // 0x147264: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_147268:
    if (ctx->pc == 0x147268u) {
        ctx->pc = 0x147268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147264u;
        // 0x147268: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14726Cu;
        goto label_14726c;
    }
    ctx->pc = 0x147264u;
    {
        const bool branch_taken_0x147264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147264u;
        // 0x147268: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147264) {
            ctx->pc = 0x1472A0u;
            goto label_1472a0;
        }
    }
    ctx->pc = 0x14726Cu;
label_14726c:
    // 0x14726c: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x14726cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_147270:
    // 0x147270: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_147274:
    // 0x147274: 0x2d08821  addu        $s1, $s6, $s0
    ctx->pc = 0x147274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_147278:
    // 0x147278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14727c:
    // 0x14727c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x14727cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_147280:
    // 0x147280: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x147280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_147284:
    // 0x147284: 0xc07d38e  jal         func_1F4E38
label_147288:
    if (ctx->pc == 0x147288u) {
        ctx->pc = 0x147288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147284u;
        // 0x147288: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14728Cu;
        goto label_14728c;
    }
    ctx->pc = 0x147284u;
    SET_GPR_U32(ctx, 31, 0x14728Cu);
    ctx->pc = 0x147288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147284u;
    // 0x147288: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x147284u, 0x14728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14728Cu;
label_14728c:
    // 0x14728c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14728cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_147290:
    // 0x147290: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x147290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_147294:
    // 0x147294: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x147294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_147298:
    // 0x147298: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_14729c:
    if (ctx->pc == 0x14729Cu) {
        ctx->pc = 0x14729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147298u;
        // 0x14729c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1472A0u;
        goto label_1472a0;
    }
    ctx->pc = 0x147298u;
    {
        const bool branch_taken_0x147298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147298u;
        // 0x14729c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147298) {
            ctx->pc = 0x147270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147270;
        }
    }
    ctx->pc = 0x1472A0u;
label_1472a0:
    // 0x1472a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1472a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1472a4:
    // 0x1472a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1472a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1472a8:
    // 0x1472a8: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1472ac:
    // 0x1472ac: 0x26920018  addiu       $s2, $s4, 0x18
    ctx->pc = 0x1472acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_1472b0:
    // 0x1472b0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1472b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1472b4:
    // 0x1472b4: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x1472b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1472b8:
    // 0x1472b8: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x1472b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_1472bc:
    // 0x1472bc: 0x0  nop
    ctx->pc = 0x1472bcu;
    // NOP
label_1472c0:
    // 0x1472c0: 0x0  nop
    ctx->pc = 0x1472c0u;
    // NOP
label_1472c4:
    // 0x1472c4: 0x2812  mflo        $a1
    ctx->pc = 0x1472c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1472c8:
    // 0x1472c8: 0xc04fc44  jal         func_13F110
label_1472cc:
    if (ctx->pc == 0x1472CCu) {
        ctx->pc = 0x1472CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472C8u;
        // 0x1472cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1472D0u;
        goto label_1472d0;
    }
    ctx->pc = 0x1472C8u;
    SET_GPR_U32(ctx, 31, 0x1472D0u);
    ctx->pc = 0x1472CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472C8u;
    // 0x1472cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1472C8u, 0x1472D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D0u;
label_1472d0:
    // 0x1472d0: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1472d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1472d4:
    // 0x1472d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1472d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1472d8:
    // 0x1472d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1472d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1472dc:
    // 0x1472dc: 0x2a5001b  divu        $zero, $s5, $a1
    ctx->pc = 0x1472dcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_1472e0:
    // 0x1472e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1472e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1472e4:
    // 0x1472e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1472e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1472e8:
    // 0x1472e8: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_1472ec:
    // 0x1472ec: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1472f0:
    // 0x1472f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1472f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1472f4:
    // 0x1472f4: 0x245001b  divu        $zero, $s2, $a1
    ctx->pc = 0x1472f4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_1472f8:
    // 0x1472f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1472fc:
    // 0x1472fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1472fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_147300:
    // 0x147300: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x147300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147304:
    // 0x147304: 0x2812  mflo        $a1
    ctx->pc = 0x147304u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_147308:
    // 0x147308: 0xc04fc44  jal         func_13F110
label_14730c:
    if (ctx->pc == 0x14730Cu) {
        ctx->pc = 0x14730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147308u;
        // 0x14730c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x147310u;
        goto label_147310;
    }
    ctx->pc = 0x147308u;
    SET_GPR_U32(ctx, 31, 0x147310u);
    ctx->pc = 0x14730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147308u;
    // 0x14730c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x147308u, 0x147310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147310u;
label_147310:
    // 0x147310: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x147310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_147314:
    // 0x147314: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x147314u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_147318:
    // 0x147318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14731c:
    // 0x14731c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14731cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_147320:
    // 0x147320: 0x2e83021  addu        $a2, $s7, $t0
    ctx->pc = 0x147320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_147324:
    // 0x147324: 0x2c83821  addu        $a3, $s6, $t0
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
label_147328:
    // 0x147328: 0x245001b  divu        $zero, $s2, $a1
    ctx->pc = 0x147328u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_14732c:
    // 0x14732c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x14732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147330:
    // 0x147330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_147334:
    // 0x147334: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x147334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_147338:
    // 0x147338: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x147338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_14733c:
    // 0x14733c: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x14733cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_147340:
    // 0x147340: 0x1010  mfhi        $v0
    ctx->pc = 0x147340u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_147344:
    // 0x147344: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_147348:
    // 0x147348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x147348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14734c:
    // 0x14734c: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x14734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_147350:
    // 0x147350: 0xc061b3c  jal         func_186CF0
label_147354:
    if (ctx->pc == 0x147354u) {
        ctx->pc = 0x147354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147350u;
        // 0x147354: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147358u;
        goto label_147358;
    }
    ctx->pc = 0x147350u;
    SET_GPR_U32(ctx, 31, 0x147358u);
    ctx->pc = 0x147354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147350u;
    // 0x147354: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186CF0u, 0x147350u, 0x147358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147358u;
label_147358:
    // 0x147358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14735c:
    // 0x14735c: 0x2e020032  sltiu       $v0, $s0, 0x32
    ctx->pc = 0x14735cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_147360:
    // 0x147360: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_147364:
    if (ctx->pc == 0x147364u) {
        ctx->pc = 0x147364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147360u;
        // 0x147364: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147368u;
        goto label_147368;
    }
    ctx->pc = 0x147360u;
    {
        const bool branch_taken_0x147360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147360u;
        // 0x147364: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147360) {
            ctx->pc = 0x1472A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472a8;
        }
    }
    ctx->pc = 0x147368u;
label_147368:
    // 0x147368: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x147368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_14736c:
    // 0x14736c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_147370:
    if (ctx->pc == 0x147370u) {
        ctx->pc = 0x147370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14736Cu;
        // 0x147370: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147374u;
        goto label_147374;
    }
    ctx->pc = 0x14736Cu;
    {
        const bool branch_taken_0x14736c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14736Cu;
        // 0x147370: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14736c) {
            ctx->pc = 0x147380u;
            goto label_147380;
        }
    }
    ctx->pc = 0x147374u;
label_147374:
    // 0x147374: 0x10000002  b           . + 4 + (0x2 << 2)
label_147378:
    if (ctx->pc == 0x147378u) {
        ctx->pc = 0x147378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147374u;
        // 0x147378: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14737Cu;
        goto label_14737c;
    }
    ctx->pc = 0x147374u;
    {
        const bool branch_taken_0x147374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147374u;
        // 0x147378: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147374) {
            ctx->pc = 0x147380u;
            goto label_147380;
        }
    }
    ctx->pc = 0x14737Cu;
label_14737c:
    // 0x14737c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_147380:
    // 0x147380: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x147380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_147384:
    // 0x147384: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_147388:
    if (ctx->pc == 0x147388u) {
        ctx->pc = 0x147388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147384u;
        // 0x147388: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14738Cu;
        goto label_14738c;
    }
    ctx->pc = 0x147384u;
    {
        const bool branch_taken_0x147384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147384u;
        // 0x147388: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147384) {
            ctx->pc = 0x147398u;
            goto label_147398;
        }
    }
    ctx->pc = 0x14738Cu;
label_14738c:
    // 0x14738c: 0x10000002  b           . + 4 + (0x2 << 2)
label_147390:
    if (ctx->pc == 0x147390u) {
        ctx->pc = 0x147390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14738Cu;
        // 0x147390: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147394u;
        goto label_147394;
    }
    ctx->pc = 0x14738Cu;
    {
        const bool branch_taken_0x14738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14738Cu;
        // 0x147390: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14738c) {
            ctx->pc = 0x147398u;
            goto label_147398;
        }
    }
    ctx->pc = 0x147394u;
label_147394:
    // 0x147394: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x147394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_147398:
    // 0x147398: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x147398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14739c:
    // 0x14739c: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_1473a0:
    if (ctx->pc == 0x1473A0u) {
        ctx->pc = 0x1473A4u;
        goto label_1473a4;
    }
    ctx->pc = 0x14739Cu;
    {
        const bool branch_taken_0x14739c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14739c) {
            ctx->pc = 0x14745Cu;
            goto label_14745c;
        }
    }
    ctx->pc = 0x1473A4u;
label_1473a4:
    // 0x1473a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1473a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1473a8:
    // 0x1473a8: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x1473a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
label_1473ac:
    // 0x1473ac: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x1473acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
label_1473b0:
    // 0x1473b0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1473b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1473b4:
    // 0x1473b4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1473b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1473b8:
    // 0x1473b8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1473b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1473bc:
    // 0x1473bc: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1473bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1473c0:
    // 0x1473c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1473c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1473c4:
    // 0x1473c4: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x1473c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1473c8:
    // 0x1473c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1473c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1473cc:
    // 0x1473cc: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1473ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_1473d0:
    // 0x1473d0: 0x8cc80034  lw          $t0, 0x34($a2)
    ctx->pc = 0x1473d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1473d4:
    // 0x1473d4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1473d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1473d8:
    // 0x1473d8: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x1473d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
label_1473dc:
    // 0x1473dc: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1473dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1473e0:
    // 0x1473e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1473e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1473e4:
    // 0x1473e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1473e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1473e8:
    // 0x1473e8: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1473e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1473ec:
    // 0x1473ec: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x1473ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1473f0:
    // 0x1473f0: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1473f4:
    // 0x1473f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1473f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1473f8:
    // 0x1473f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1473f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1473fc:
    // 0x1473fc: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x1473fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_147400:
    // 0x147400: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x147400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
label_147404:
    // 0x147404: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x147404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_147408:
    // 0x147408: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x147408u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_14740c:
    // 0x14740c: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147410:
    // 0x147410: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x147410u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_147414:
    // 0x147414: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_147418:
    // 0x147418: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x147418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
label_14741c:
    // 0x14741c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14741cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_147420:
    // 0x147420: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x147420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_147424:
    // 0x147424: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x147424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147428:
    // 0x147428: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x147428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_14742c:
    // 0x14742c: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x14742cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_147430:
    // 0x147430: 0x8cc603cc  lw          $a2, 0x3CC($a2)
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 972)));
label_147434:
    // 0x147434: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_147438:
    // 0x147438: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x147438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_14743c:
    // 0x14743c: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x14743cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147440:
    // 0x147440: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x147440u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_147444:
    // 0x147444: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x147444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_147448:
    // 0x147448: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x147448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_14744c:
    // 0x14744c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_147450:
    // 0x147450: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x147450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_147454:
    // 0x147454: 0x14a0ffd9  bnez        $a1, . + 4 + (-0x27 << 2)
label_147458:
    if (ctx->pc == 0x147458u) {
        ctx->pc = 0x147458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147454u;
        // 0x147458: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14745Cu;
        goto label_14745c;
    }
    ctx->pc = 0x147454u;
    {
        const bool branch_taken_0x147454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x147458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147454u;
        // 0x147458: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147454) {
            ctx->pc = 0x1473BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1473bc;
        }
    }
    ctx->pc = 0x14745Cu;
label_14745c:
    // 0x14745c: 0x0  nop
    ctx->pc = 0x14745cu;
    // NOP
label_147460:
    // 0x147460: 0x3d3082b  sltu        $at, $fp, $s3
    ctx->pc = 0x147460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_147464:
    // 0x147464: 0x3c1980a  movz        $s3, $fp, $at
    ctx->pc = 0x147464u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 30));
label_147468:
    // 0x147468: 0x2e611388  sltiu       $at, $s3, 0x1388
    ctx->pc = 0x147468u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
label_14746c:
    // 0x14746c: 0x102000f0  beqz        $at, . + 4 + (0xF0 << 2)
label_147470:
    if (ctx->pc == 0x147470u) {
        ctx->pc = 0x147474u;
        goto label_147474;
    }
    ctx->pc = 0x14746Cu;
    {
        const bool branch_taken_0x14746c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14746c) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x147474u;
label_147474:
    // 0x147474: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_147478:
    // 0x147478: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x147478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_14747c:
    // 0x14747c: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x14747cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_147480:
    // 0x147480: 0x142000c8  bnez        $at, . + 4 + (0xC8 << 2)
label_147484:
    if (ctx->pc == 0x147484u) {
        ctx->pc = 0x147488u;
        goto label_147488;
    }
    ctx->pc = 0x147480u;
    {
        const bool branch_taken_0x147480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x147480) {
            ctx->pc = 0x1477A4u;
            goto label_1477a4;
        }
    }
    ctx->pc = 0x147488u;
label_147488:
    // 0x147488: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x147488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_14748c:
    // 0x14748c: 0x3c024b18  lui         $v0, 0x4B18
    ctx->pc = 0x14748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19224 << 16));
label_147490:
    // 0x147490: 0x34429680  ori         $v0, $v0, 0x9680
    ctx->pc = 0x147490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38528);
label_147494:
    // 0x147494: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147498:
    // 0x147498: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x147498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_14749c:
    // 0x14749c: 0x2e641380  sltiu       $a0, $s3, 0x1380
    ctx->pc = 0x14749cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4992) ? 1 : 0);
label_1474a0:
    // 0x1474a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1474a4:
    // 0x1474a4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1474a8:
    // 0x1474a8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1474ac:
    // 0x1474ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1474b0:
    // 0x1474b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1474b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1474b4:
    // 0x1474b4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1474b8:
    // 0x1474b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1474bc:
    // 0x1474bc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1474c0:
    // 0x1474c0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1474c4:
    // 0x1474c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1474c8:
    // 0x1474c8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1474c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1474cc:
    // 0x1474cc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1474d0:
    // 0x1474d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1474d4:
    // 0x1474d4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1474d8:
    // 0x1474d8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1474dc:
    // 0x1474dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1474e0:
    // 0x1474e0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1474e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_1474e4:
    // 0x1474e4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1474e8:
    // 0x1474e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1474e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1474ec:
    // 0x1474ec: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1474ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1474f0:
    // 0x1474f0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1474f4:
    // 0x1474f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1474f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1474f8:
    // 0x1474f8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1474f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1474fc:
    // 0x1474fc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147500:
    // 0x147500: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147504:
    // 0x147504: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147508:
    // 0x147508: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14750c:
    // 0x14750c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147510:
    // 0x147510: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x147510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_147514:
    // 0x147514: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147518:
    // 0x147518: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14751c:
    // 0x14751c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147520:
    // 0x147520: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147524:
    // 0x147524: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147528:
    // 0x147528: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x147528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_14752c:
    // 0x14752c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147530:
    // 0x147530: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147534:
    // 0x147534: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147538:
    // 0x147538: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14753c:
    // 0x14753c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147540:
    // 0x147540: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x147540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_147544:
    // 0x147544: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147548:
    // 0x147548: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14754c:
    // 0x14754c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147550:
    // 0x147550: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147554:
    // 0x147554: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147558:
    // 0x147558: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x147558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_14755c:
    // 0x14755c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14755cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147560:
    // 0x147560: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147564:
    // 0x147564: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147568:
    // 0x147568: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14756c:
    // 0x14756c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147570:
    // 0x147570: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x147570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_147574:
    // 0x147574: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147578:
    // 0x147578: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14757c:
    // 0x14757c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147580:
    // 0x147580: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147584:
    // 0x147584: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147588:
    // 0x147588: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x147588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_14758c:
    // 0x14758c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147590:
    // 0x147590: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147594:
    // 0x147594: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147598:
    // 0x147598: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14759c:
    // 0x14759c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1475a0:
    // 0x1475a0: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1475a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_1475a4:
    // 0x1475a4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1475a8:
    // 0x1475a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1475ac:
    // 0x1475ac: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1475b0:
    // 0x1475b0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1475b4:
    // 0x1475b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1475b8:
    // 0x1475b8: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1475b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
label_1475bc:
    // 0x1475bc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1475c0:
    // 0x1475c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1475c4:
    // 0x1475c4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1475c8:
    // 0x1475c8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1475cc:
    // 0x1475cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1475d0:
    // 0x1475d0: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x1475d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
label_1475d4:
    // 0x1475d4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1475d8:
    // 0x1475d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1475dc:
    // 0x1475dc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1475e0:
    // 0x1475e0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1475e4:
    // 0x1475e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1475e8:
    // 0x1475e8: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x1475e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
label_1475ec:
    // 0x1475ec: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1475ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1475f0:
    // 0x1475f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1475f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1475f4:
    // 0x1475f4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1475f8:
    // 0x1475f8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1475fc:
    // 0x1475fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1475fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147600:
    // 0x147600: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x147600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
label_147604:
    // 0x147604: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147608:
    // 0x147608: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14760c:
    // 0x14760c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147610:
    // 0x147610: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147614:
    // 0x147614: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147618:
    // 0x147618: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x147618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
label_14761c:
    // 0x14761c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14761cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147620:
    // 0x147620: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147624:
    // 0x147624: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147628:
    // 0x147628: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14762c:
    // 0x14762c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147630:
    // 0x147630: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x147630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
label_147634:
    // 0x147634: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147638:
    // 0x147638: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14763c:
    // 0x14763c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147640:
    // 0x147640: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147644:
    // 0x147644: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147648:
    // 0x147648: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x147648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_14764c:
    // 0x14764c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147650:
    // 0x147650: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147654:
    // 0x147654: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147658:
    // 0x147658: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14765c:
    // 0x14765c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147660:
    // 0x147660: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x147660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
label_147664:
    // 0x147664: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147668:
    // 0x147668: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14766c:
    // 0x14766c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147670:
    // 0x147670: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147674:
    // 0x147674: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147678:
    // 0x147678: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x147678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
label_14767c:
    // 0x14767c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147680:
    // 0x147680: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147684:
    // 0x147684: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147688:
    // 0x147688: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14768c:
    // 0x14768c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147690:
    // 0x147690: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x147690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
label_147694:
    // 0x147694: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147698:
    // 0x147698: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14769c:
    // 0x14769c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1476a0:
    // 0x1476a0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1476a4:
    // 0x1476a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1476a8:
    // 0x1476a8: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x1476a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_1476ac:
    // 0x1476ac: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1476b0:
    // 0x1476b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1476b4:
    // 0x1476b4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1476b8:
    // 0x1476b8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1476bc:
    // 0x1476bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1476c0:
    // 0x1476c0: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x1476c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
label_1476c4:
    // 0x1476c4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1476c8:
    // 0x1476c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1476cc:
    // 0x1476cc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1476d0:
    // 0x1476d0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1476d4:
    // 0x1476d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1476d8:
    // 0x1476d8: 0xaca2005c  sw          $v0, 0x5C($a1)
    ctx->pc = 0x1476d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 2));
label_1476dc:
    // 0x1476dc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1476e0:
    // 0x1476e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1476e4:
    // 0x1476e4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1476e8:
    // 0x1476e8: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x1476e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1476ec:
    // 0x1476ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1476ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1476f0:
    // 0x1476f0: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x1476f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_1476f4:
    // 0x1476f4: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1476f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1476f8:
    // 0x1476f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1476fc:
    // 0x1476fc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147700:
    // 0x147700: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147704:
    // 0x147704: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147708:
    // 0x147708: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x147708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
label_14770c:
    // 0x14770c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14770cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147710:
    // 0x147710: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147714:
    // 0x147714: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147718:
    // 0x147718: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14771c:
    // 0x14771c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147720:
    // 0x147720: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x147720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_147724:
    // 0x147724: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147728:
    // 0x147728: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14772c:
    // 0x14772c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147730:
    // 0x147730: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147734:
    // 0x147734: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147738:
    // 0x147738: 0xaca2006c  sw          $v0, 0x6C($a1)
    ctx->pc = 0x147738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 2));
label_14773c:
    // 0x14773c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147740:
    // 0x147740: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147744:
    // 0x147744: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147748:
    // 0x147748: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14774c:
    // 0x14774c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147750:
    // 0x147750: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x147750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
label_147754:
    // 0x147754: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147758:
    // 0x147758: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14775c:
    // 0x14775c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147760:
    // 0x147760: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147764:
    // 0x147764: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147768:
    // 0x147768: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x147768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
label_14776c:
    // 0x14776c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147770:
    // 0x147770: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147774:
    // 0x147774: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x147774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147778:
    // 0x147778: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_14777c:
    // 0x14777c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x14777cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147780:
    // 0x147780: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x147780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
label_147784:
    // 0x147784: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x147784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147788:
    // 0x147788: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x147788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14778c:
    // 0x14778c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_147790:
    // 0x147790: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x147790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_147794:
    // 0x147794: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_147798:
    // 0x147798: 0xaca2007c  sw          $v0, 0x7C($a1)
    ctx->pc = 0x147798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
label_14779c:
    // 0x14779c: 0x1480ff3d  bnez        $a0, . + 4 + (-0xC3 << 2)
label_1477a0:
    if (ctx->pc == 0x1477A0u) {
        ctx->pc = 0x1477A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14779Cu;
        // 0x1477a0: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1477A4u;
        goto label_1477a4;
    }
    ctx->pc = 0x14779Cu;
    {
        const bool branch_taken_0x14779c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1477A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14779Cu;
        // 0x1477a0: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14779c) {
            ctx->pc = 0x147494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147494;
        }
    }
    ctx->pc = 0x1477A4u;
label_1477a4:
    // 0x1477a4: 0x0  nop
    ctx->pc = 0x1477a4u;
    // NOP
label_1477a8:
    // 0x1477a8: 0x2e611388  sltiu       $at, $s3, 0x1388
    ctx->pc = 0x1477a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
label_1477ac:
    // 0x1477ac: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1477b0:
    if (ctx->pc == 0x1477B0u) {
        ctx->pc = 0x1477B4u;
        goto label_1477b4;
    }
    ctx->pc = 0x1477ACu;
    {
        const bool branch_taken_0x1477ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477ac) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x1477B4u;
label_1477b4:
    // 0x1477b4: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1477b8:
    // 0x1477b8: 0x3c034b18  lui         $v1, 0x4B18
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19224 << 16));
label_1477bc:
    // 0x1477bc: 0x34659680  ori         $a1, $v1, 0x9680
    ctx->pc = 0x1477bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38528);
label_1477c0:
    // 0x1477c0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1477c4:
    // 0x1477c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1477c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1477c8:
    // 0x1477c8: 0x2e631388  sltiu       $v1, $s3, 0x1388
    ctx->pc = 0x1477c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
label_1477cc:
    // 0x1477cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1477ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1477d0:
    // 0x1477d0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1477d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1477d4:
    // 0x1477d4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1477d8:
    // 0x1477d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1477dc:
    // 0x1477dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1477dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1477e0:
    // 0x1477e0: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1477e4:
    // 0x1477e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1477e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1477e8:
    // 0x1477e8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1477e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1477ec:
    // 0x1477ec: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1477f0:
    // 0x1477f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1477f4:
    // 0x1477f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1477f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1477f8:
    // 0x1477f8: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1477fc:
    // 0x1477fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1477fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_147800:
    // 0x147800: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x147800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_147804:
    // 0x147804: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x147804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_147808:
    // 0x147808: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x147808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14780c:
    // 0x14780c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_147810:
    // 0x147810: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x147810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147814:
    // 0x147814: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x147814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_147818:
    // 0x147818: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x147818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_14781c:
    // 0x14781c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_147820:
    // 0x147820: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x147820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_147824:
    // 0x147824: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x147824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_147828:
    // 0x147828: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_14782c:
    if (ctx->pc == 0x14782Cu) {
        ctx->pc = 0x14782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147828u;
        // 0x14782c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147830u;
        goto label_147830;
    }
    ctx->pc = 0x147828u;
    {
        const bool branch_taken_0x147828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147828u;
        // 0x14782c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147828) {
            ctx->pc = 0x1477C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1477c0;
        }
    }
    ctx->pc = 0x147830u;
label_147830:
    // 0x147830: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x147830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147834:
    // 0x147834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_147838:
    // 0x147838: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14783c:
    // 0x14783c: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x14783cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
label_147840:
    // 0x147840: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_147844:
    // 0x147844: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_147848:
    if (ctx->pc == 0x147848u) {
        ctx->pc = 0x147848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147844u;
        // 0x147848: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14784Cu;
        goto label_14784c;
    }
    ctx->pc = 0x147844u;
    {
        const bool branch_taken_0x147844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147844u;
        // 0x147848: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147844) {
            ctx->pc = 0x147854u;
            goto label_147854;
        }
    }
    ctx->pc = 0x14784Cu;
label_14784c:
    // 0x14784c: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x14784cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_147850:
    // 0x147850: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x147850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_147854:
    // 0x147854: 0xc07d3ac  jal         func_1F4EB0
label_147858:
    if (ctx->pc == 0x147858u) {
        ctx->pc = 0x14785Cu;
        goto label_14785c;
    }
    ctx->pc = 0x147854u;
    SET_GPR_U32(ctx, 31, 0x14785Cu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x147854u, 0x14785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14785Cu;
label_14785c:
    // 0x14785c: 0xc061c54  jal         func_187150
label_147860:
    if (ctx->pc == 0x147860u) {
        ctx->pc = 0x147860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14785Cu;
        // 0x147860: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147864u;
        goto label_147864;
    }
    ctx->pc = 0x14785Cu;
    SET_GPR_U32(ctx, 31, 0x147864u);
    ctx->pc = 0x147860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14785Cu;
    // 0x147860: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187150u, 0x14785Cu, 0x147864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147864u;
label_147864:
    // 0x147864: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x147864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_147868:
    // 0x147868: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x147868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_14786c:
    // 0x14786c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x14786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_147870:
    // 0x147870: 0xc061bd0  jal         func_186F40
label_147874:
    if (ctx->pc == 0x147874u) {
        ctx->pc = 0x147874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147870u;
        // 0x147874: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147878u;
        goto label_147878;
    }
    ctx->pc = 0x147870u;
    SET_GPR_U32(ctx, 31, 0x147878u);
    ctx->pc = 0x147874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147870u;
    // 0x147874: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x147870u, 0x147878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147878u;
label_147878:
    // 0x147878: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_14787c:
    // 0x14787c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x14787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_147880:
    // 0x147880: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x147880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_147884:
    // 0x147884: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x147884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_147888:
    // 0x147888: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x147888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_14788c:
    // 0x14788c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14788cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_147890:
    // 0x147890: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x147890u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
label_147894:
    // 0x147894: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x147894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_147898:
    // 0x147898: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x147898u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_14789c:
    // 0x14789c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14789cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1478a0:
    // 0x1478a0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1478a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1478a4:
    // 0x1478a4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1478a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478a8:
    // 0x1478a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1478ac:
    // 0x1478ac: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1478b0:
    // 0x1478b0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1478b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478b4:
    // 0x1478b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1478b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1478b8:
    // 0x1478b8: 0x8f8385d4  lw          $v1, -0x7A2C($gp)
    ctx->pc = 0x1478b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_1478bc:
    // 0x1478bc: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_1478c0:
    if (ctx->pc == 0x1478C0u) {
        ctx->pc = 0x1478C4u;
        goto label_1478c4;
    }
    ctx->pc = 0x1478BCu;
    {
        const bool branch_taken_0x1478bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1478bc) {
            ctx->pc = 0x147988u;
            goto label_147988;
        }
    }
    ctx->pc = 0x1478C4u;
label_1478c4:
    // 0x1478c4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478c8:
    // 0x1478c8: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x1478c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
label_1478cc:
    // 0x1478cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1478ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1478d0:
    // 0x1478d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1478d4:
    // 0x1478d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1478d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1478d8:
    // 0x1478d8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1478d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
label_1478dc:
    // 0x1478dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1478dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1478e0:
    // 0x1478e0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1478e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_1478e4:
    // 0x1478e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1478e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1478e8:
    // 0x1478e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1478e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1478ec:
    // 0x1478ec: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1478ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478f0:
    // 0x1478f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1478f4:
    // 0x1478f4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1478f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1478f8:
    // 0x1478f8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1478f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1478fc:
    // 0x1478fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1478fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_147900:
    // 0x147900: 0xc0485c0  jal         func_121700
label_147904:
    if (ctx->pc == 0x147904u) {
        ctx->pc = 0x147904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147900u;
        // 0x147904: 0x8e8502c0  lw          $a1, 0x2C0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147908u;
        goto label_147908;
    }
    ctx->pc = 0x147900u;
    SET_GPR_U32(ctx, 31, 0x147908u);
    ctx->pc = 0x147904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147900u;
    // 0x147904: 0x8e8502c0  lw          $a1, 0x2C0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x147900u, 0x147908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147908u;
label_147908:
    // 0x147908: 0x8e8402c0  lw          $a0, 0x2C0($s4)
    ctx->pc = 0x147908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_14790c:
    // 0x14790c: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x14790cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147910:
    // 0x147910: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_147914:
    // 0x147914: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x147914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_147918:
    // 0x147918: 0x320f809  jalr        $t9
label_14791c:
    if (ctx->pc == 0x14791Cu) {
        ctx->pc = 0x14791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147918u;
        // 0x14791c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147920u;
        goto label_147920;
    }
    ctx->pc = 0x147918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147920u);
        ctx->pc = 0x14791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147918u;
        // 0x14791c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147918u, 0x147920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x147920u;
label_147920:
    // 0x147920: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147924:
    // 0x147924: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x147924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_147928:
    // 0x147928: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x147928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_14792c:
    // 0x14792c: 0x8f858594  lw          $a1, -0x7A6C($gp)
    ctx->pc = 0x14792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
label_147930:
    // 0x147930: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_147934:
    // 0x147934: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_147938:
    // 0x147938: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_14793c:
    // 0x14793c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_147940:
    // 0x147940: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x147940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_147944:
    // 0x147944: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x147944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_147948:
    // 0x147948: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_14794c:
    // 0x14794c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_147950:
    // 0x147950: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x147950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_147954:
    // 0x147954: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_147958:
    // 0x147958: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x147958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_14795c:
    // 0x14795c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x14795cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_147960:
    // 0x147960: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x147960u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
label_147964:
    // 0x147964: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x147964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_147968:
    // 0x147968: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x147968u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
label_14796c:
    // 0x14796c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x14796cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_147970:
    // 0x147970: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x147970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_147974:
    // 0x147974: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147978:
    // 0x147978: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14797c:
    // 0x14797c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x14797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_147980:
    // 0x147980: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147984:
    // 0x147984: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x147984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_147988:
    // 0x147988: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_14798c:
    // 0x14798c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_147990:
    if (ctx->pc == 0x147990u) {
        ctx->pc = 0x147994u;
        goto label_147994;
    }
    ctx->pc = 0x14798Cu;
    {
        const bool branch_taken_0x14798c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14798c) {
            ctx->pc = 0x147A68u;
            goto label_147a68;
        }
    }
    ctx->pc = 0x147994u;
label_147994:
    // 0x147994: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x147994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147998:
    // 0x147998: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x147998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_14799c:
    // 0x14799c: 0x8e850280  lw          $a1, 0x280($s4)
    ctx->pc = 0x14799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 640)));
label_1479a0:
    // 0x1479a0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x1479a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479a4:
    // 0x1479a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1479a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1479a8:
    // 0x1479a8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1479a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_1479ac:
    // 0x1479ac: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1479acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_1479b0:
    // 0x1479b0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1479b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1479b4:
    // 0x1479b4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1479b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_1479b8:
    // 0x1479b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1479b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1479bc:
    // 0x1479bc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1479bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1479c0:
    // 0x1479c0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1479c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479c4:
    // 0x1479c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1479c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1479c8:
    // 0x1479c8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1479cc:
    // 0x1479cc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479d0:
    // 0x1479d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1479d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1479d4:
    // 0x1479d4: 0xc0485c0  jal         func_121700
label_1479d8:
    if (ctx->pc == 0x1479D8u) {
        ctx->pc = 0x1479D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479D4u;
        // 0x1479d8: 0x8e8502bc  lw          $a1, 0x2BC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1479DCu;
        goto label_1479dc;
    }
    ctx->pc = 0x1479D4u;
    SET_GPR_U32(ctx, 31, 0x1479DCu);
    ctx->pc = 0x1479D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1479D4u;
    // 0x1479d8: 0x8e8502bc  lw          $a1, 0x2BC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x1479D4u, 0x1479DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479DCu;
label_1479dc:
    // 0x1479dc: 0x8e8402bc  lw          $a0, 0x2BC($s4)
    ctx->pc = 0x1479dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
label_1479e0:
    // 0x1479e0: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x1479e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1479e4:
    // 0x1479e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1479e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1479e8:
    // 0x1479e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1479ec:
    // 0x1479ec: 0x320f809  jalr        $t9
label_1479f0:
    if (ctx->pc == 0x1479F0u) {
        ctx->pc = 0x1479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479ECu;
        // 0x1479f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1479F4u;
        goto label_1479f4;
    }
    ctx->pc = 0x1479ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1479F4u);
        ctx->pc = 0x1479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479ECu;
        // 0x1479f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1479ECu, 0x1479F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1479F4u;
label_1479f4:
    // 0x1479f4: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1479f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1479f8:
    // 0x1479f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1479f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1479fc:
    // 0x1479fc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_147a00:
    if (ctx->pc == 0x147A00u) {
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479FCu;
        // 0x147a00: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x147A04u;
        goto label_147a04;
    }
    ctx->pc = 0x1479FCu;
    {
        const bool branch_taken_0x1479fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479FCu;
        // 0x147a00: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479fc) {
            ctx->pc = 0x147A10u;
            goto label_147a10;
        }
    }
    ctx->pc = 0x147A04u;
label_147a04:
    // 0x147a04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_147a08:
    if (ctx->pc == 0x147A08u) {
        ctx->pc = 0x147A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A04u;
        // 0x147a08: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147A0Cu;
        goto label_147a0c;
    }
    ctx->pc = 0x147A04u;
    {
        const bool branch_taken_0x147a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A04u;
        // 0x147a08: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a04) {
            ctx->pc = 0x147A14u;
            goto label_147a14;
        }
    }
    ctx->pc = 0x147A0Cu;
label_147a0c:
    // 0x147a0c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_147a10:
    // 0x147a10: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x147a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_147a14:
    // 0x147a14: 0x8f848594  lw          $a0, -0x7A6C($gp)
    ctx->pc = 0x147a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
label_147a18:
    // 0x147a18: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_147a1c:
    // 0x147a1c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147a20:
    // 0x147a20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_147a24:
    // 0x147a24: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x147a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_147a28:
    // 0x147a28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x147a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_147a2c:
    // 0x147a2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x147a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_147a30:
    // 0x147a30: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x147a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_147a34:
    // 0x147a34: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x147a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_147a38:
    // 0x147a38: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x147a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_147a3c:
    // 0x147a3c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x147a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_147a40:
    // 0x147a40: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x147a40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
label_147a44:
    // 0x147a44: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x147a44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_147a48:
    // 0x147a48: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x147a48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_147a4c:
    // 0x147a4c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x147a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_147a50:
    // 0x147a50: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x147a50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_147a54:
    // 0x147a54: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147a58:
    // 0x147a58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_147a5c:
    // 0x147a5c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x147a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_147a60:
    // 0x147a60: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x147a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_147a64:
    // 0x147a64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x147a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_147a68:
    // 0x147a68: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x147a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_147a6c:
    // 0x147a6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x147a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_147a70:
    // 0x147a70: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x147a70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_147a74:
    // 0x147a74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x147a74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_147a78:
    // 0x147a78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x147a78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_147a7c:
    // 0x147a7c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x147a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_147a80:
    // 0x147a80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x147a80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_147a84:
    // 0x147a84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x147a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_147a88:
    // 0x147a88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x147a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_147a8c:
    // 0x147a8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_147a90:
    // 0x147a90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x147a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147a94:
    // 0x147a94: 0x3e00008  jr          $ra
label_147a98:
    if (ctx->pc == 0x147A98u) {
        ctx->pc = 0x147A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A94u;
        // 0x147a98: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x147A9Cu;
        goto label_fallthrough_0x147a94;
    }
    ctx->pc = 0x147A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A94u;
        // 0x147a98: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x147a94:
    ctx->pc = 0x147A9Cu;
}
