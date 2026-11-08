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

// Function: FUN_001893d0
// Address: 0x1893d0 - 0x189eec
void FUN_001893d0_0x1893d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001893d0_0x1893d0");
#endif

    switch (ctx->pc) {
        case 0x1893d0u: goto label_1893d0;
        case 0x1893d4u: goto label_1893d4;
        case 0x1893d8u: goto label_1893d8;
        case 0x1893dcu: goto label_1893dc;
        case 0x1893e0u: goto label_1893e0;
        case 0x1893e4u: goto label_1893e4;
        case 0x1893e8u: goto label_1893e8;
        case 0x1893ecu: goto label_1893ec;
        case 0x1893f0u: goto label_1893f0;
        case 0x1893f4u: goto label_1893f4;
        case 0x1893f8u: goto label_1893f8;
        case 0x1893fcu: goto label_1893fc;
        case 0x189400u: goto label_189400;
        case 0x189404u: goto label_189404;
        case 0x189408u: goto label_189408;
        case 0x18940cu: goto label_18940c;
        case 0x189410u: goto label_189410;
        case 0x189414u: goto label_189414;
        case 0x189418u: goto label_189418;
        case 0x18941cu: goto label_18941c;
        case 0x189420u: goto label_189420;
        case 0x189424u: goto label_189424;
        case 0x189428u: goto label_189428;
        case 0x18942cu: goto label_18942c;
        case 0x189430u: goto label_189430;
        case 0x189434u: goto label_189434;
        case 0x189438u: goto label_189438;
        case 0x18943cu: goto label_18943c;
        case 0x189440u: goto label_189440;
        case 0x189444u: goto label_189444;
        case 0x189448u: goto label_189448;
        case 0x18944cu: goto label_18944c;
        case 0x189450u: goto label_189450;
        case 0x189454u: goto label_189454;
        case 0x189458u: goto label_189458;
        case 0x18945cu: goto label_18945c;
        case 0x189460u: goto label_189460;
        case 0x189464u: goto label_189464;
        case 0x189468u: goto label_189468;
        case 0x18946cu: goto label_18946c;
        case 0x189470u: goto label_189470;
        case 0x189474u: goto label_189474;
        case 0x189478u: goto label_189478;
        case 0x18947cu: goto label_18947c;
        case 0x189480u: goto label_189480;
        case 0x189484u: goto label_189484;
        case 0x189488u: goto label_189488;
        case 0x18948cu: goto label_18948c;
        case 0x189490u: goto label_189490;
        case 0x189494u: goto label_189494;
        case 0x189498u: goto label_189498;
        case 0x18949cu: goto label_18949c;
        case 0x1894a0u: goto label_1894a0;
        case 0x1894a4u: goto label_1894a4;
        case 0x1894a8u: goto label_1894a8;
        case 0x1894acu: goto label_1894ac;
        case 0x1894b0u: goto label_1894b0;
        case 0x1894b4u: goto label_1894b4;
        case 0x1894b8u: goto label_1894b8;
        case 0x1894bcu: goto label_1894bc;
        case 0x1894c0u: goto label_1894c0;
        case 0x1894c4u: goto label_1894c4;
        case 0x1894c8u: goto label_1894c8;
        case 0x1894ccu: goto label_1894cc;
        case 0x1894d0u: goto label_1894d0;
        case 0x1894d4u: goto label_1894d4;
        case 0x1894d8u: goto label_1894d8;
        case 0x1894dcu: goto label_1894dc;
        case 0x1894e0u: goto label_1894e0;
        case 0x1894e4u: goto label_1894e4;
        case 0x1894e8u: goto label_1894e8;
        case 0x1894ecu: goto label_1894ec;
        case 0x1894f0u: goto label_1894f0;
        case 0x1894f4u: goto label_1894f4;
        case 0x1894f8u: goto label_1894f8;
        case 0x1894fcu: goto label_1894fc;
        case 0x189500u: goto label_189500;
        case 0x189504u: goto label_189504;
        case 0x189508u: goto label_189508;
        case 0x18950cu: goto label_18950c;
        case 0x189510u: goto label_189510;
        case 0x189514u: goto label_189514;
        case 0x189518u: goto label_189518;
        case 0x18951cu: goto label_18951c;
        case 0x189520u: goto label_189520;
        case 0x189524u: goto label_189524;
        case 0x189528u: goto label_189528;
        case 0x18952cu: goto label_18952c;
        case 0x189530u: goto label_189530;
        case 0x189534u: goto label_189534;
        case 0x189538u: goto label_189538;
        case 0x18953cu: goto label_18953c;
        case 0x189540u: goto label_189540;
        case 0x189544u: goto label_189544;
        case 0x189548u: goto label_189548;
        case 0x18954cu: goto label_18954c;
        case 0x189550u: goto label_189550;
        case 0x189554u: goto label_189554;
        case 0x189558u: goto label_189558;
        case 0x18955cu: goto label_18955c;
        case 0x189560u: goto label_189560;
        case 0x189564u: goto label_189564;
        case 0x189568u: goto label_189568;
        case 0x18956cu: goto label_18956c;
        case 0x189570u: goto label_189570;
        case 0x189574u: goto label_189574;
        case 0x189578u: goto label_189578;
        case 0x18957cu: goto label_18957c;
        case 0x189580u: goto label_189580;
        case 0x189584u: goto label_189584;
        case 0x189588u: goto label_189588;
        case 0x18958cu: goto label_18958c;
        case 0x189590u: goto label_189590;
        case 0x189594u: goto label_189594;
        case 0x189598u: goto label_189598;
        case 0x18959cu: goto label_18959c;
        case 0x1895a0u: goto label_1895a0;
        case 0x1895a4u: goto label_1895a4;
        case 0x1895a8u: goto label_1895a8;
        case 0x1895acu: goto label_1895ac;
        case 0x1895b0u: goto label_1895b0;
        case 0x1895b4u: goto label_1895b4;
        case 0x1895b8u: goto label_1895b8;
        case 0x1895bcu: goto label_1895bc;
        case 0x1895c0u: goto label_1895c0;
        case 0x1895c4u: goto label_1895c4;
        case 0x1895c8u: goto label_1895c8;
        case 0x1895ccu: goto label_1895cc;
        case 0x1895d0u: goto label_1895d0;
        case 0x1895d4u: goto label_1895d4;
        case 0x1895d8u: goto label_1895d8;
        case 0x1895dcu: goto label_1895dc;
        case 0x1895e0u: goto label_1895e0;
        case 0x1895e4u: goto label_1895e4;
        case 0x1895e8u: goto label_1895e8;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f0u: goto label_1895f0;
        case 0x1895f4u: goto label_1895f4;
        case 0x1895f8u: goto label_1895f8;
        case 0x1895fcu: goto label_1895fc;
        case 0x189600u: goto label_189600;
        case 0x189604u: goto label_189604;
        case 0x189608u: goto label_189608;
        case 0x18960cu: goto label_18960c;
        case 0x189610u: goto label_189610;
        case 0x189614u: goto label_189614;
        case 0x189618u: goto label_189618;
        case 0x18961cu: goto label_18961c;
        case 0x189620u: goto label_189620;
        case 0x189624u: goto label_189624;
        case 0x189628u: goto label_189628;
        case 0x18962cu: goto label_18962c;
        case 0x189630u: goto label_189630;
        case 0x189634u: goto label_189634;
        case 0x189638u: goto label_189638;
        case 0x18963cu: goto label_18963c;
        case 0x189640u: goto label_189640;
        case 0x189644u: goto label_189644;
        case 0x189648u: goto label_189648;
        case 0x18964cu: goto label_18964c;
        case 0x189650u: goto label_189650;
        case 0x189654u: goto label_189654;
        case 0x189658u: goto label_189658;
        case 0x18965cu: goto label_18965c;
        case 0x189660u: goto label_189660;
        case 0x189664u: goto label_189664;
        case 0x189668u: goto label_189668;
        case 0x18966cu: goto label_18966c;
        case 0x189670u: goto label_189670;
        case 0x189674u: goto label_189674;
        case 0x189678u: goto label_189678;
        case 0x18967cu: goto label_18967c;
        case 0x189680u: goto label_189680;
        case 0x189684u: goto label_189684;
        case 0x189688u: goto label_189688;
        case 0x18968cu: goto label_18968c;
        case 0x189690u: goto label_189690;
        case 0x189694u: goto label_189694;
        case 0x189698u: goto label_189698;
        case 0x18969cu: goto label_18969c;
        case 0x1896a0u: goto label_1896a0;
        case 0x1896a4u: goto label_1896a4;
        case 0x1896a8u: goto label_1896a8;
        case 0x1896acu: goto label_1896ac;
        case 0x1896b0u: goto label_1896b0;
        case 0x1896b4u: goto label_1896b4;
        case 0x1896b8u: goto label_1896b8;
        case 0x1896bcu: goto label_1896bc;
        case 0x1896c0u: goto label_1896c0;
        case 0x1896c4u: goto label_1896c4;
        case 0x1896c8u: goto label_1896c8;
        case 0x1896ccu: goto label_1896cc;
        case 0x1896d0u: goto label_1896d0;
        case 0x1896d4u: goto label_1896d4;
        case 0x1896d8u: goto label_1896d8;
        case 0x1896dcu: goto label_1896dc;
        case 0x1896e0u: goto label_1896e0;
        case 0x1896e4u: goto label_1896e4;
        case 0x1896e8u: goto label_1896e8;
        case 0x1896ecu: goto label_1896ec;
        case 0x1896f0u: goto label_1896f0;
        case 0x1896f4u: goto label_1896f4;
        case 0x1896f8u: goto label_1896f8;
        case 0x1896fcu: goto label_1896fc;
        case 0x189700u: goto label_189700;
        case 0x189704u: goto label_189704;
        case 0x189708u: goto label_189708;
        case 0x18970cu: goto label_18970c;
        case 0x189710u: goto label_189710;
        case 0x189714u: goto label_189714;
        case 0x189718u: goto label_189718;
        case 0x18971cu: goto label_18971c;
        case 0x189720u: goto label_189720;
        case 0x189724u: goto label_189724;
        case 0x189728u: goto label_189728;
        case 0x18972cu: goto label_18972c;
        case 0x189730u: goto label_189730;
        case 0x189734u: goto label_189734;
        case 0x189738u: goto label_189738;
        case 0x18973cu: goto label_18973c;
        case 0x189740u: goto label_189740;
        case 0x189744u: goto label_189744;
        case 0x189748u: goto label_189748;
        case 0x18974cu: goto label_18974c;
        case 0x189750u: goto label_189750;
        case 0x189754u: goto label_189754;
        case 0x189758u: goto label_189758;
        case 0x18975cu: goto label_18975c;
        case 0x189760u: goto label_189760;
        case 0x189764u: goto label_189764;
        case 0x189768u: goto label_189768;
        case 0x18976cu: goto label_18976c;
        case 0x189770u: goto label_189770;
        case 0x189774u: goto label_189774;
        case 0x189778u: goto label_189778;
        case 0x18977cu: goto label_18977c;
        case 0x189780u: goto label_189780;
        case 0x189784u: goto label_189784;
        case 0x189788u: goto label_189788;
        case 0x18978cu: goto label_18978c;
        case 0x189790u: goto label_189790;
        case 0x189794u: goto label_189794;
        case 0x189798u: goto label_189798;
        case 0x18979cu: goto label_18979c;
        case 0x1897a0u: goto label_1897a0;
        case 0x1897a4u: goto label_1897a4;
        case 0x1897a8u: goto label_1897a8;
        case 0x1897acu: goto label_1897ac;
        case 0x1897b0u: goto label_1897b0;
        case 0x1897b4u: goto label_1897b4;
        case 0x1897b8u: goto label_1897b8;
        case 0x1897bcu: goto label_1897bc;
        case 0x1897c0u: goto label_1897c0;
        case 0x1897c4u: goto label_1897c4;
        case 0x1897c8u: goto label_1897c8;
        case 0x1897ccu: goto label_1897cc;
        case 0x1897d0u: goto label_1897d0;
        case 0x1897d4u: goto label_1897d4;
        case 0x1897d8u: goto label_1897d8;
        case 0x1897dcu: goto label_1897dc;
        case 0x1897e0u: goto label_1897e0;
        case 0x1897e4u: goto label_1897e4;
        case 0x1897e8u: goto label_1897e8;
        case 0x1897ecu: goto label_1897ec;
        case 0x1897f0u: goto label_1897f0;
        case 0x1897f4u: goto label_1897f4;
        case 0x1897f8u: goto label_1897f8;
        case 0x1897fcu: goto label_1897fc;
        case 0x189800u: goto label_189800;
        case 0x189804u: goto label_189804;
        case 0x189808u: goto label_189808;
        case 0x18980cu: goto label_18980c;
        case 0x189810u: goto label_189810;
        case 0x189814u: goto label_189814;
        case 0x189818u: goto label_189818;
        case 0x18981cu: goto label_18981c;
        case 0x189820u: goto label_189820;
        case 0x189824u: goto label_189824;
        case 0x189828u: goto label_189828;
        case 0x18982cu: goto label_18982c;
        case 0x189830u: goto label_189830;
        case 0x189834u: goto label_189834;
        case 0x189838u: goto label_189838;
        case 0x18983cu: goto label_18983c;
        case 0x189840u: goto label_189840;
        case 0x189844u: goto label_189844;
        case 0x189848u: goto label_189848;
        case 0x18984cu: goto label_18984c;
        case 0x189850u: goto label_189850;
        case 0x189854u: goto label_189854;
        case 0x189858u: goto label_189858;
        case 0x18985cu: goto label_18985c;
        case 0x189860u: goto label_189860;
        case 0x189864u: goto label_189864;
        case 0x189868u: goto label_189868;
        case 0x18986cu: goto label_18986c;
        case 0x189870u: goto label_189870;
        case 0x189874u: goto label_189874;
        case 0x189878u: goto label_189878;
        case 0x18987cu: goto label_18987c;
        case 0x189880u: goto label_189880;
        case 0x189884u: goto label_189884;
        case 0x189888u: goto label_189888;
        case 0x18988cu: goto label_18988c;
        case 0x189890u: goto label_189890;
        case 0x189894u: goto label_189894;
        case 0x189898u: goto label_189898;
        case 0x18989cu: goto label_18989c;
        case 0x1898a0u: goto label_1898a0;
        case 0x1898a4u: goto label_1898a4;
        case 0x1898a8u: goto label_1898a8;
        case 0x1898acu: goto label_1898ac;
        case 0x1898b0u: goto label_1898b0;
        case 0x1898b4u: goto label_1898b4;
        case 0x1898b8u: goto label_1898b8;
        case 0x1898bcu: goto label_1898bc;
        case 0x1898c0u: goto label_1898c0;
        case 0x1898c4u: goto label_1898c4;
        case 0x1898c8u: goto label_1898c8;
        case 0x1898ccu: goto label_1898cc;
        case 0x1898d0u: goto label_1898d0;
        case 0x1898d4u: goto label_1898d4;
        case 0x1898d8u: goto label_1898d8;
        case 0x1898dcu: goto label_1898dc;
        case 0x1898e0u: goto label_1898e0;
        case 0x1898e4u: goto label_1898e4;
        case 0x1898e8u: goto label_1898e8;
        case 0x1898ecu: goto label_1898ec;
        case 0x1898f0u: goto label_1898f0;
        case 0x1898f4u: goto label_1898f4;
        case 0x1898f8u: goto label_1898f8;
        case 0x1898fcu: goto label_1898fc;
        case 0x189900u: goto label_189900;
        case 0x189904u: goto label_189904;
        case 0x189908u: goto label_189908;
        case 0x18990cu: goto label_18990c;
        case 0x189910u: goto label_189910;
        case 0x189914u: goto label_189914;
        case 0x189918u: goto label_189918;
        case 0x18991cu: goto label_18991c;
        case 0x189920u: goto label_189920;
        case 0x189924u: goto label_189924;
        case 0x189928u: goto label_189928;
        case 0x18992cu: goto label_18992c;
        case 0x189930u: goto label_189930;
        case 0x189934u: goto label_189934;
        case 0x189938u: goto label_189938;
        case 0x18993cu: goto label_18993c;
        case 0x189940u: goto label_189940;
        case 0x189944u: goto label_189944;
        case 0x189948u: goto label_189948;
        case 0x18994cu: goto label_18994c;
        case 0x189950u: goto label_189950;
        case 0x189954u: goto label_189954;
        case 0x189958u: goto label_189958;
        case 0x18995cu: goto label_18995c;
        case 0x189960u: goto label_189960;
        case 0x189964u: goto label_189964;
        case 0x189968u: goto label_189968;
        case 0x18996cu: goto label_18996c;
        case 0x189970u: goto label_189970;
        case 0x189974u: goto label_189974;
        case 0x189978u: goto label_189978;
        case 0x18997cu: goto label_18997c;
        case 0x189980u: goto label_189980;
        case 0x189984u: goto label_189984;
        case 0x189988u: goto label_189988;
        case 0x18998cu: goto label_18998c;
        case 0x189990u: goto label_189990;
        case 0x189994u: goto label_189994;
        case 0x189998u: goto label_189998;
        case 0x18999cu: goto label_18999c;
        case 0x1899a0u: goto label_1899a0;
        case 0x1899a4u: goto label_1899a4;
        case 0x1899a8u: goto label_1899a8;
        case 0x1899acu: goto label_1899ac;
        case 0x1899b0u: goto label_1899b0;
        case 0x1899b4u: goto label_1899b4;
        case 0x1899b8u: goto label_1899b8;
        case 0x1899bcu: goto label_1899bc;
        case 0x1899c0u: goto label_1899c0;
        case 0x1899c4u: goto label_1899c4;
        case 0x1899c8u: goto label_1899c8;
        case 0x1899ccu: goto label_1899cc;
        case 0x1899d0u: goto label_1899d0;
        case 0x1899d4u: goto label_1899d4;
        case 0x1899d8u: goto label_1899d8;
        case 0x1899dcu: goto label_1899dc;
        case 0x1899e0u: goto label_1899e0;
        case 0x1899e4u: goto label_1899e4;
        case 0x1899e8u: goto label_1899e8;
        case 0x1899ecu: goto label_1899ec;
        case 0x1899f0u: goto label_1899f0;
        case 0x1899f4u: goto label_1899f4;
        case 0x1899f8u: goto label_1899f8;
        case 0x1899fcu: goto label_1899fc;
        case 0x189a00u: goto label_189a00;
        case 0x189a04u: goto label_189a04;
        case 0x189a08u: goto label_189a08;
        case 0x189a0cu: goto label_189a0c;
        case 0x189a10u: goto label_189a10;
        case 0x189a14u: goto label_189a14;
        case 0x189a18u: goto label_189a18;
        case 0x189a1cu: goto label_189a1c;
        case 0x189a20u: goto label_189a20;
        case 0x189a24u: goto label_189a24;
        case 0x189a28u: goto label_189a28;
        case 0x189a2cu: goto label_189a2c;
        case 0x189a30u: goto label_189a30;
        case 0x189a34u: goto label_189a34;
        case 0x189a38u: goto label_189a38;
        case 0x189a3cu: goto label_189a3c;
        case 0x189a40u: goto label_189a40;
        case 0x189a44u: goto label_189a44;
        case 0x189a48u: goto label_189a48;
        case 0x189a4cu: goto label_189a4c;
        case 0x189a50u: goto label_189a50;
        case 0x189a54u: goto label_189a54;
        case 0x189a58u: goto label_189a58;
        case 0x189a5cu: goto label_189a5c;
        case 0x189a60u: goto label_189a60;
        case 0x189a64u: goto label_189a64;
        case 0x189a68u: goto label_189a68;
        case 0x189a6cu: goto label_189a6c;
        case 0x189a70u: goto label_189a70;
        case 0x189a74u: goto label_189a74;
        case 0x189a78u: goto label_189a78;
        case 0x189a7cu: goto label_189a7c;
        case 0x189a80u: goto label_189a80;
        case 0x189a84u: goto label_189a84;
        case 0x189a88u: goto label_189a88;
        case 0x189a8cu: goto label_189a8c;
        case 0x189a90u: goto label_189a90;
        case 0x189a94u: goto label_189a94;
        case 0x189a98u: goto label_189a98;
        case 0x189a9cu: goto label_189a9c;
        case 0x189aa0u: goto label_189aa0;
        case 0x189aa4u: goto label_189aa4;
        case 0x189aa8u: goto label_189aa8;
        case 0x189aacu: goto label_189aac;
        case 0x189ab0u: goto label_189ab0;
        case 0x189ab4u: goto label_189ab4;
        case 0x189ab8u: goto label_189ab8;
        case 0x189abcu: goto label_189abc;
        case 0x189ac0u: goto label_189ac0;
        case 0x189ac4u: goto label_189ac4;
        case 0x189ac8u: goto label_189ac8;
        case 0x189accu: goto label_189acc;
        case 0x189ad0u: goto label_189ad0;
        case 0x189ad4u: goto label_189ad4;
        case 0x189ad8u: goto label_189ad8;
        case 0x189adcu: goto label_189adc;
        case 0x189ae0u: goto label_189ae0;
        case 0x189ae4u: goto label_189ae4;
        case 0x189ae8u: goto label_189ae8;
        case 0x189aecu: goto label_189aec;
        case 0x189af0u: goto label_189af0;
        case 0x189af4u: goto label_189af4;
        case 0x189af8u: goto label_189af8;
        case 0x189afcu: goto label_189afc;
        case 0x189b00u: goto label_189b00;
        case 0x189b04u: goto label_189b04;
        case 0x189b08u: goto label_189b08;
        case 0x189b0cu: goto label_189b0c;
        case 0x189b10u: goto label_189b10;
        case 0x189b14u: goto label_189b14;
        case 0x189b18u: goto label_189b18;
        case 0x189b1cu: goto label_189b1c;
        case 0x189b20u: goto label_189b20;
        case 0x189b24u: goto label_189b24;
        case 0x189b28u: goto label_189b28;
        case 0x189b2cu: goto label_189b2c;
        case 0x189b30u: goto label_189b30;
        case 0x189b34u: goto label_189b34;
        case 0x189b38u: goto label_189b38;
        case 0x189b3cu: goto label_189b3c;
        case 0x189b40u: goto label_189b40;
        case 0x189b44u: goto label_189b44;
        case 0x189b48u: goto label_189b48;
        case 0x189b4cu: goto label_189b4c;
        case 0x189b50u: goto label_189b50;
        case 0x189b54u: goto label_189b54;
        case 0x189b58u: goto label_189b58;
        case 0x189b5cu: goto label_189b5c;
        case 0x189b60u: goto label_189b60;
        case 0x189b64u: goto label_189b64;
        case 0x189b68u: goto label_189b68;
        case 0x189b6cu: goto label_189b6c;
        case 0x189b70u: goto label_189b70;
        case 0x189b74u: goto label_189b74;
        case 0x189b78u: goto label_189b78;
        case 0x189b7cu: goto label_189b7c;
        case 0x189b80u: goto label_189b80;
        case 0x189b84u: goto label_189b84;
        case 0x189b88u: goto label_189b88;
        case 0x189b8cu: goto label_189b8c;
        case 0x189b90u: goto label_189b90;
        case 0x189b94u: goto label_189b94;
        case 0x189b98u: goto label_189b98;
        case 0x189b9cu: goto label_189b9c;
        case 0x189ba0u: goto label_189ba0;
        case 0x189ba4u: goto label_189ba4;
        case 0x189ba8u: goto label_189ba8;
        case 0x189bacu: goto label_189bac;
        case 0x189bb0u: goto label_189bb0;
        case 0x189bb4u: goto label_189bb4;
        case 0x189bb8u: goto label_189bb8;
        case 0x189bbcu: goto label_189bbc;
        case 0x189bc0u: goto label_189bc0;
        case 0x189bc4u: goto label_189bc4;
        case 0x189bc8u: goto label_189bc8;
        case 0x189bccu: goto label_189bcc;
        case 0x189bd0u: goto label_189bd0;
        case 0x189bd4u: goto label_189bd4;
        case 0x189bd8u: goto label_189bd8;
        case 0x189bdcu: goto label_189bdc;
        case 0x189be0u: goto label_189be0;
        case 0x189be4u: goto label_189be4;
        case 0x189be8u: goto label_189be8;
        case 0x189becu: goto label_189bec;
        case 0x189bf0u: goto label_189bf0;
        case 0x189bf4u: goto label_189bf4;
        case 0x189bf8u: goto label_189bf8;
        case 0x189bfcu: goto label_189bfc;
        case 0x189c00u: goto label_189c00;
        case 0x189c04u: goto label_189c04;
        case 0x189c08u: goto label_189c08;
        case 0x189c0cu: goto label_189c0c;
        case 0x189c10u: goto label_189c10;
        case 0x189c14u: goto label_189c14;
        case 0x189c18u: goto label_189c18;
        case 0x189c1cu: goto label_189c1c;
        case 0x189c20u: goto label_189c20;
        case 0x189c24u: goto label_189c24;
        case 0x189c28u: goto label_189c28;
        case 0x189c2cu: goto label_189c2c;
        case 0x189c30u: goto label_189c30;
        case 0x189c34u: goto label_189c34;
        case 0x189c38u: goto label_189c38;
        case 0x189c3cu: goto label_189c3c;
        case 0x189c40u: goto label_189c40;
        case 0x189c44u: goto label_189c44;
        case 0x189c48u: goto label_189c48;
        case 0x189c4cu: goto label_189c4c;
        case 0x189c50u: goto label_189c50;
        case 0x189c54u: goto label_189c54;
        case 0x189c58u: goto label_189c58;
        case 0x189c5cu: goto label_189c5c;
        case 0x189c60u: goto label_189c60;
        case 0x189c64u: goto label_189c64;
        case 0x189c68u: goto label_189c68;
        case 0x189c6cu: goto label_189c6c;
        case 0x189c70u: goto label_189c70;
        case 0x189c74u: goto label_189c74;
        case 0x189c78u: goto label_189c78;
        case 0x189c7cu: goto label_189c7c;
        case 0x189c80u: goto label_189c80;
        case 0x189c84u: goto label_189c84;
        case 0x189c88u: goto label_189c88;
        case 0x189c8cu: goto label_189c8c;
        case 0x189c90u: goto label_189c90;
        case 0x189c94u: goto label_189c94;
        case 0x189c98u: goto label_189c98;
        case 0x189c9cu: goto label_189c9c;
        case 0x189ca0u: goto label_189ca0;
        case 0x189ca4u: goto label_189ca4;
        case 0x189ca8u: goto label_189ca8;
        case 0x189cacu: goto label_189cac;
        case 0x189cb0u: goto label_189cb0;
        case 0x189cb4u: goto label_189cb4;
        case 0x189cb8u: goto label_189cb8;
        case 0x189cbcu: goto label_189cbc;
        case 0x189cc0u: goto label_189cc0;
        case 0x189cc4u: goto label_189cc4;
        case 0x189cc8u: goto label_189cc8;
        case 0x189cccu: goto label_189ccc;
        case 0x189cd0u: goto label_189cd0;
        case 0x189cd4u: goto label_189cd4;
        case 0x189cd8u: goto label_189cd8;
        case 0x189cdcu: goto label_189cdc;
        case 0x189ce0u: goto label_189ce0;
        case 0x189ce4u: goto label_189ce4;
        case 0x189ce8u: goto label_189ce8;
        case 0x189cecu: goto label_189cec;
        case 0x189cf0u: goto label_189cf0;
        case 0x189cf4u: goto label_189cf4;
        case 0x189cf8u: goto label_189cf8;
        case 0x189cfcu: goto label_189cfc;
        case 0x189d00u: goto label_189d00;
        case 0x189d04u: goto label_189d04;
        case 0x189d08u: goto label_189d08;
        case 0x189d0cu: goto label_189d0c;
        case 0x189d10u: goto label_189d10;
        case 0x189d14u: goto label_189d14;
        case 0x189d18u: goto label_189d18;
        case 0x189d1cu: goto label_189d1c;
        case 0x189d20u: goto label_189d20;
        case 0x189d24u: goto label_189d24;
        case 0x189d28u: goto label_189d28;
        case 0x189d2cu: goto label_189d2c;
        case 0x189d30u: goto label_189d30;
        case 0x189d34u: goto label_189d34;
        case 0x189d38u: goto label_189d38;
        case 0x189d3cu: goto label_189d3c;
        case 0x189d40u: goto label_189d40;
        case 0x189d44u: goto label_189d44;
        case 0x189d48u: goto label_189d48;
        case 0x189d4cu: goto label_189d4c;
        case 0x189d50u: goto label_189d50;
        case 0x189d54u: goto label_189d54;
        case 0x189d58u: goto label_189d58;
        case 0x189d5cu: goto label_189d5c;
        case 0x189d60u: goto label_189d60;
        case 0x189d64u: goto label_189d64;
        case 0x189d68u: goto label_189d68;
        case 0x189d6cu: goto label_189d6c;
        case 0x189d70u: goto label_189d70;
        case 0x189d74u: goto label_189d74;
        case 0x189d78u: goto label_189d78;
        case 0x189d7cu: goto label_189d7c;
        case 0x189d80u: goto label_189d80;
        case 0x189d84u: goto label_189d84;
        case 0x189d88u: goto label_189d88;
        case 0x189d8cu: goto label_189d8c;
        case 0x189d90u: goto label_189d90;
        case 0x189d94u: goto label_189d94;
        case 0x189d98u: goto label_189d98;
        case 0x189d9cu: goto label_189d9c;
        case 0x189da0u: goto label_189da0;
        case 0x189da4u: goto label_189da4;
        case 0x189da8u: goto label_189da8;
        case 0x189dacu: goto label_189dac;
        case 0x189db0u: goto label_189db0;
        case 0x189db4u: goto label_189db4;
        case 0x189db8u: goto label_189db8;
        case 0x189dbcu: goto label_189dbc;
        case 0x189dc0u: goto label_189dc0;
        case 0x189dc4u: goto label_189dc4;
        case 0x189dc8u: goto label_189dc8;
        case 0x189dccu: goto label_189dcc;
        case 0x189dd0u: goto label_189dd0;
        case 0x189dd4u: goto label_189dd4;
        case 0x189dd8u: goto label_189dd8;
        case 0x189ddcu: goto label_189ddc;
        case 0x189de0u: goto label_189de0;
        case 0x189de4u: goto label_189de4;
        case 0x189de8u: goto label_189de8;
        case 0x189decu: goto label_189dec;
        case 0x189df0u: goto label_189df0;
        case 0x189df4u: goto label_189df4;
        case 0x189df8u: goto label_189df8;
        case 0x189dfcu: goto label_189dfc;
        case 0x189e00u: goto label_189e00;
        case 0x189e04u: goto label_189e04;
        case 0x189e08u: goto label_189e08;
        case 0x189e0cu: goto label_189e0c;
        case 0x189e10u: goto label_189e10;
        case 0x189e14u: goto label_189e14;
        case 0x189e18u: goto label_189e18;
        case 0x189e1cu: goto label_189e1c;
        case 0x189e20u: goto label_189e20;
        case 0x189e24u: goto label_189e24;
        case 0x189e28u: goto label_189e28;
        case 0x189e2cu: goto label_189e2c;
        case 0x189e30u: goto label_189e30;
        case 0x189e34u: goto label_189e34;
        case 0x189e38u: goto label_189e38;
        case 0x189e3cu: goto label_189e3c;
        case 0x189e40u: goto label_189e40;
        case 0x189e44u: goto label_189e44;
        case 0x189e48u: goto label_189e48;
        case 0x189e4cu: goto label_189e4c;
        case 0x189e50u: goto label_189e50;
        case 0x189e54u: goto label_189e54;
        case 0x189e58u: goto label_189e58;
        case 0x189e5cu: goto label_189e5c;
        case 0x189e60u: goto label_189e60;
        case 0x189e64u: goto label_189e64;
        case 0x189e68u: goto label_189e68;
        case 0x189e6cu: goto label_189e6c;
        case 0x189e70u: goto label_189e70;
        case 0x189e74u: goto label_189e74;
        case 0x189e78u: goto label_189e78;
        case 0x189e7cu: goto label_189e7c;
        case 0x189e80u: goto label_189e80;
        case 0x189e84u: goto label_189e84;
        case 0x189e88u: goto label_189e88;
        case 0x189e8cu: goto label_189e8c;
        case 0x189e90u: goto label_189e90;
        case 0x189e94u: goto label_189e94;
        case 0x189e98u: goto label_189e98;
        case 0x189e9cu: goto label_189e9c;
        case 0x189ea0u: goto label_189ea0;
        case 0x189ea4u: goto label_189ea4;
        case 0x189ea8u: goto label_189ea8;
        case 0x189eacu: goto label_189eac;
        case 0x189eb0u: goto label_189eb0;
        case 0x189eb4u: goto label_189eb4;
        case 0x189eb8u: goto label_189eb8;
        case 0x189ebcu: goto label_189ebc;
        case 0x189ec0u: goto label_189ec0;
        case 0x189ec4u: goto label_189ec4;
        case 0x189ec8u: goto label_189ec8;
        case 0x189eccu: goto label_189ecc;
        case 0x189ed0u: goto label_189ed0;
        case 0x189ed4u: goto label_189ed4;
        case 0x189ed8u: goto label_189ed8;
        case 0x189edcu: goto label_189edc;
        case 0x189ee0u: goto label_189ee0;
        case 0x189ee4u: goto label_189ee4;
        case 0x189ee8u: goto label_189ee8;
        default: break;
    }

    ctx->pc = 0x1893d0u;

label_1893d0:
    // 0x1893d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1893d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1893d4:
    // 0x1893d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1893d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1893d8:
    // 0x1893d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1893d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1893dc:
    // 0x1893dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1893dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1893e0:
    // 0x1893e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1893e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1893e4:
    // 0x1893e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1893e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1893e8:
    // 0x1893e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1893e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1893ec:
    // 0x1893ec: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x1893ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1893f0:
    // 0x1893f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1893f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1893f4:
    // 0x1893f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1893f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1893f8:
    // 0x1893f8: 0xc040168  jal         func_1005A0
label_1893fc:
    if (ctx->pc == 0x1893FCu) {
        ctx->pc = 0x1893FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893F8u;
        // 0x1893fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189400u;
        goto label_189400;
    }
    ctx->pc = 0x1893F8u;
    SET_GPR_U32(ctx, 31, 0x189400u);
    ctx->pc = 0x1893FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1893F8u;
    // 0x1893fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1893F8u, 0x189400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189400u;
label_189400:
    // 0x189400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189404:
    // 0x189404: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x189404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_189408:
    // 0x189408: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x189408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_18940c:
    // 0x18940c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18940cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189410:
    // 0x189410: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_189414:
    if (ctx->pc == 0x189414u) {
        ctx->pc = 0x189414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189410u;
        // 0x189414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189418u;
        goto label_189418;
    }
    ctx->pc = 0x189410u;
    {
        const bool branch_taken_0x189410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189410u;
        // 0x189414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189410) {
            ctx->pc = 0x1894A0u;
            goto label_1894a0;
        }
    }
    ctx->pc = 0x189418u;
label_189418:
    // 0x189418: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x189418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_18941c:
    // 0x18941c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_189420:
    if (ctx->pc == 0x189420u) {
        ctx->pc = 0x189420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18941Cu;
        // 0x189420: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189424u;
        goto label_189424;
    }
    ctx->pc = 0x18941Cu;
    {
        const bool branch_taken_0x18941c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x189420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18941Cu;
        // 0x189420: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18941c) {
            ctx->pc = 0x189478u;
            goto label_189478;
        }
    }
    ctx->pc = 0x189424u;
label_189424:
    // 0x189424: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_189428:
    // 0x189428: 0x2064021  addu        $t0, $s0, $a2
    ctx->pc = 0x189428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_18942c:
    // 0x18942c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x18942cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_189430:
    // 0x189430: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_189434:
    // 0x189434: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x189434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_189438:
    // 0x189438: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x189438u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_18943c:
    // 0x18943c: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x18943cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_189440:
    // 0x189440: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x189440u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
label_189444:
    // 0x189444: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x189444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_189448:
    // 0x189448: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x189448u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
label_18944c:
    // 0x18944c: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x18944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_189450:
    // 0x189450: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x189450u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
label_189454:
    // 0x189454: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x189454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_189458:
    // 0x189458: 0xa1030004  sb          $v1, 0x4($t0)
    ctx->pc = 0x189458u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 3));
label_18945c:
    // 0x18945c: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x18945cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_189460:
    // 0x189460: 0xa1030005  sb          $v1, 0x5($t0)
    ctx->pc = 0x189460u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 3));
label_189464:
    // 0x189464: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x189464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_189468:
    // 0x189468: 0xa1030006  sb          $v1, 0x6($t0)
    ctx->pc = 0x189468u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 3));
label_18946c:
    // 0x18946c: 0x90e30007  lbu         $v1, 0x7($a3)
    ctx->pc = 0x18946cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_189470:
    // 0x189470: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_189474:
    if (ctx->pc == 0x189474u) {
        ctx->pc = 0x189474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189470u;
        // 0x189474: 0xa1030007  sb          $v1, 0x7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189478u;
        goto label_189478;
    }
    ctx->pc = 0x189470u;
    {
        const bool branch_taken_0x189470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189470u;
        // 0x189474: 0xa1030007  sb          $v1, 0x7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189470) {
            ctx->pc = 0x189424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189424;
        }
    }
    ctx->pc = 0x189478u;
label_189478:
    // 0x189478: 0xd1082a  slt         $at, $a2, $s1
    ctx->pc = 0x189478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_18947c:
    // 0x18947c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_189480:
    if (ctx->pc == 0x189480u) {
        ctx->pc = 0x189484u;
        goto label_189484;
    }
    ctx->pc = 0x18947Cu;
    {
        const bool branch_taken_0x18947c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18947c) {
            ctx->pc = 0x1894A0u;
            goto label_1894a0;
        }
    }
    ctx->pc = 0x189484u;
label_189484:
    // 0x189484: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x189484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_189488:
    // 0x189488: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_18948c:
    // 0x18948c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x18948cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_189490:
    // 0x189490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_189494:
    // 0x189494: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x189494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_189498:
    // 0x189498: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_18949c:
    if (ctx->pc == 0x18949Cu) {
        ctx->pc = 0x18949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189498u;
        // 0x18949c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894A0u;
        goto label_1894a0;
    }
    ctx->pc = 0x189498u;
    {
        const bool branch_taken_0x189498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189498u;
        // 0x18949c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189498) {
            ctx->pc = 0x189484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189484;
        }
    }
    ctx->pc = 0x1894A0u;
label_1894a0:
    // 0x1894a0: 0x92820080  lbu         $v0, 0x80($s4)
    ctx->pc = 0x1894a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 128)));
label_1894a4:
    // 0x1894a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1894a8:
    if (ctx->pc == 0x1894A8u) {
        ctx->pc = 0x1894ACu;
        goto label_1894ac;
    }
    ctx->pc = 0x1894A4u;
    {
        const bool branch_taken_0x1894a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894a4) {
            ctx->pc = 0x1894B8u;
            goto label_1894b8;
        }
    }
    ctx->pc = 0x1894ACu;
label_1894ac:
    // 0x1894ac: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_1894b0:
    // 0x1894b0: 0x10000059  b           . + 4 + (0x59 << 2)
label_1894b4:
    if (ctx->pc == 0x1894B4u) {
        ctx->pc = 0x1894B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B0u;
        // 0x1894b4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894B8u;
        goto label_1894b8;
    }
    ctx->pc = 0x1894B0u;
    {
        const bool branch_taken_0x1894b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B0u;
        // 0x1894b4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b0) {
            ctx->pc = 0x189618u;
            goto label_189618;
        }
    }
    ctx->pc = 0x1894B8u;
label_1894b8:
    // 0x1894b8: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x1894b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1894bc:
    // 0x1894bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1894bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1894c0:
    // 0x1894c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1894c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1894c4:
    // 0x1894c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1894c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1894c8:
    // 0x1894c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1894c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1894cc:
    // 0x1894cc: 0x0  nop
    ctx->pc = 0x1894ccu;
    // NOP
label_1894d0:
    // 0x1894d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1894d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1894d4:
    // 0x1894d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1894d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1894d8:
    // 0x1894d8: 0x0  nop
    ctx->pc = 0x1894d8u;
    // NOP
label_1894dc:
    // 0x1894dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1894e0:
    if (ctx->pc == 0x1894E0u) {
        ctx->pc = 0x1894E4u;
        goto label_1894e4;
    }
    ctx->pc = 0x1894DCu;
    {
        const bool branch_taken_0x1894dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1894dc) {
            ctx->pc = 0x1894F4u;
            goto label_1894f4;
        }
    }
    ctx->pc = 0x1894E4u;
label_1894e4:
    // 0x1894e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1894e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1894e8:
    // 0x1894e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1894e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1894ec:
    // 0x1894ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1894f0:
    if (ctx->pc == 0x1894F0u) {
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0xa3a300d8  sb          $v1, 0xD8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 216), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1894F4u;
        goto label_1894f4;
    }
    ctx->pc = 0x1894ECu;
    {
        const bool branch_taken_0x1894ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894ECu;
        // 0x1894f0: 0xa3a300d8  sb          $v1, 0xD8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 216), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894ec) {
            ctx->pc = 0x189510u;
            goto label_189510;
        }
    }
    ctx->pc = 0x1894F4u;
label_1894f4:
    // 0x1894f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1894f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1894f8:
    // 0x1894f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1894f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1894fc:
    // 0x1894fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1894fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189500:
    // 0x189500: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189504:
    // 0x189504: 0x0  nop
    ctx->pc = 0x189504u;
    // NOP
label_189508:
    // 0x189508: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18950c:
    // 0x18950c: 0xa3a300d8  sb          $v1, 0xD8($sp)
    ctx->pc = 0x18950cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 216), (uint8_t)GPR_U32(ctx, 3));
label_189510:
    // 0x189510: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_189514:
    // 0x189514: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x189514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189518:
    // 0x189518: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18951c:
    // 0x18951c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_189520:
    // 0x189520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189524:
    // 0x189524: 0x0  nop
    ctx->pc = 0x189524u;
    // NOP
label_189528:
    // 0x189528: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18952c:
    // 0x18952c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18952cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189530:
    // 0x189530: 0x0  nop
    ctx->pc = 0x189530u;
    // NOP
label_189534:
    // 0x189534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_189538:
    if (ctx->pc == 0x189538u) {
        ctx->pc = 0x18953Cu;
        goto label_18953c;
    }
    ctx->pc = 0x189534u;
    {
        const bool branch_taken_0x189534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189534) {
            ctx->pc = 0x18954Cu;
            goto label_18954c;
        }
    }
    ctx->pc = 0x18953Cu;
label_18953c:
    // 0x18953c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18953cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189540:
    // 0x189540: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189544:
    // 0x189544: 0x10000008  b           . + 4 + (0x8 << 2)
label_189548:
    if (ctx->pc == 0x189548u) {
        ctx->pc = 0x189548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189544u;
        // 0x189548: 0xa3a300d9  sb          $v1, 0xD9($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 217), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18954Cu;
        goto label_18954c;
    }
    ctx->pc = 0x189544u;
    {
        const bool branch_taken_0x189544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189544u;
        // 0x189548: 0xa3a300d9  sb          $v1, 0xD9($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 217), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189544) {
            ctx->pc = 0x189568u;
            goto label_189568;
        }
    }
    ctx->pc = 0x18954Cu;
label_18954c:
    // 0x18954c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18954cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189550:
    // 0x189550: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_189554:
    // 0x189554: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189558:
    // 0x189558: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18955c:
    // 0x18955c: 0x0  nop
    ctx->pc = 0x18955cu;
    // NOP
label_189560:
    // 0x189560: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_189564:
    // 0x189564: 0xa3a300d9  sb          $v1, 0xD9($sp)
    ctx->pc = 0x189564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 217), (uint8_t)GPR_U32(ctx, 3));
label_189568:
    // 0x189568: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_18956c:
    // 0x18956c: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x18956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189570:
    // 0x189570: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_189574:
    // 0x189574: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x189574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_189578:
    // 0x189578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18957c:
    // 0x18957c: 0x0  nop
    ctx->pc = 0x18957cu;
    // NOP
label_189580:
    // 0x189580: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_189584:
    // 0x189584: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189588:
    // 0x189588: 0x0  nop
    ctx->pc = 0x189588u;
    // NOP
label_18958c:
    // 0x18958c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_189590:
    if (ctx->pc == 0x189590u) {
        ctx->pc = 0x189594u;
        goto label_189594;
    }
    ctx->pc = 0x18958Cu;
    {
        const bool branch_taken_0x18958c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18958c) {
            ctx->pc = 0x1895A4u;
            goto label_1895a4;
        }
    }
    ctx->pc = 0x189594u;
label_189594:
    // 0x189594: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189598:
    // 0x189598: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18959c:
    // 0x18959c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1895a0:
    if (ctx->pc == 0x1895A0u) {
        ctx->pc = 0x1895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18959Cu;
        // 0x1895a0: 0xa3a300da  sb          $v1, 0xDA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 218), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895A4u;
        goto label_1895a4;
    }
    ctx->pc = 0x18959Cu;
    {
        const bool branch_taken_0x18959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18959Cu;
        // 0x1895a0: 0xa3a300da  sb          $v1, 0xDA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 218), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18959c) {
            ctx->pc = 0x1895C0u;
            goto label_1895c0;
        }
    }
    ctx->pc = 0x1895A4u;
label_1895a4:
    // 0x1895a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1895a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1895a8:
    // 0x1895a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1895ac:
    // 0x1895ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1895acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1895b0:
    // 0x1895b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1895b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1895b4:
    // 0x1895b4: 0x0  nop
    ctx->pc = 0x1895b4u;
    // NOP
label_1895b8:
    // 0x1895b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1895b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1895bc:
    // 0x1895bc: 0xa3a300da  sb          $v1, 0xDA($sp)
    ctx->pc = 0x1895bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 218), (uint8_t)GPR_U32(ctx, 3));
label_1895c0:
    // 0x1895c0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1895c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1895c4:
    // 0x1895c4: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x1895c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1895c8:
    // 0x1895c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1895c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1895cc:
    // 0x1895cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1895ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1895d0:
    // 0x1895d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1895d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1895d4:
    // 0x1895d4: 0x0  nop
    ctx->pc = 0x1895d4u;
    // NOP
label_1895d8:
    // 0x1895d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1895d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1895dc:
    // 0x1895dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1895dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1895e0:
    // 0x1895e0: 0x0  nop
    ctx->pc = 0x1895e0u;
    // NOP
label_1895e4:
    // 0x1895e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1895e8:
    if (ctx->pc == 0x1895E8u) {
        ctx->pc = 0x1895ECu;
        goto label_1895ec;
    }
    ctx->pc = 0x1895E4u;
    {
        const bool branch_taken_0x1895e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1895e4) {
            ctx->pc = 0x1895FCu;
            goto label_1895fc;
        }
    }
    ctx->pc = 0x1895ECu;
label_1895ec:
    // 0x1895ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1895ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1895f0:
    // 0x1895f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1895f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1895f4:
    // 0x1895f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1895f8:
    if (ctx->pc == 0x1895F8u) {
        ctx->pc = 0x1895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F4u;
        // 0x1895f8: 0xa3a300db  sb          $v1, 0xDB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 219), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1895FCu;
        goto label_1895fc;
    }
    ctx->pc = 0x1895F4u;
    {
        const bool branch_taken_0x1895f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1895F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1895F4u;
        // 0x1895f8: 0xa3a300db  sb          $v1, 0xDB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 219), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1895f4) {
            ctx->pc = 0x189618u;
            goto label_189618;
        }
    }
    ctx->pc = 0x1895FCu;
label_1895fc:
    // 0x1895fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1895fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189600:
    // 0x189600: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_189604:
    // 0x189604: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189608:
    // 0x189608: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18960c:
    // 0x18960c: 0x0  nop
    ctx->pc = 0x18960cu;
    // NOP
label_189610:
    // 0x189610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_189614:
    // 0x189614: 0xa3a300db  sb          $v1, 0xDB($sp)
    ctx->pc = 0x189614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 219), (uint8_t)GPR_U32(ctx, 3));
label_189618:
    // 0x189618: 0x92820081  lbu         $v0, 0x81($s4)
    ctx->pc = 0x189618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 129)));
label_18961c:
    // 0x18961c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189620:
    if (ctx->pc == 0x189620u) {
        ctx->pc = 0x189624u;
        goto label_189624;
    }
    ctx->pc = 0x18961Cu;
    {
        const bool branch_taken_0x18961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18961c) {
            ctx->pc = 0x189630u;
            goto label_189630;
        }
    }
    ctx->pc = 0x189624u;
label_189624:
    // 0x189624: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
label_189628:
    // 0x189628: 0x10000059  b           . + 4 + (0x59 << 2)
label_18962c:
    if (ctx->pc == 0x18962Cu) {
        ctx->pc = 0x18962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189628u;
        // 0x18962c: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189630u;
        goto label_189630;
    }
    ctx->pc = 0x189628u;
    {
        const bool branch_taken_0x189628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189628u;
        // 0x18962c: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189628) {
            ctx->pc = 0x189790u;
            goto label_189790;
        }
    }
    ctx->pc = 0x189630u;
label_189630:
    // 0x189630: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x189630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189634:
    // 0x189634: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x189634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_189638:
    // 0x189638: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18963c:
    // 0x18963c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_189640:
    // 0x189640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189644:
    // 0x189644: 0x0  nop
    ctx->pc = 0x189644u;
    // NOP
label_189648:
    // 0x189648: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18964c:
    // 0x18964c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18964cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189650:
    // 0x189650: 0x0  nop
    ctx->pc = 0x189650u;
    // NOP
label_189654:
    // 0x189654: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_189658:
    if (ctx->pc == 0x189658u) {
        ctx->pc = 0x18965Cu;
        goto label_18965c;
    }
    ctx->pc = 0x189654u;
    {
        const bool branch_taken_0x189654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189654) {
            ctx->pc = 0x18966Cu;
            goto label_18966c;
        }
    }
    ctx->pc = 0x18965Cu;
label_18965c:
    // 0x18965c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18965cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189660:
    // 0x189660: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189664:
    // 0x189664: 0x10000008  b           . + 4 + (0x8 << 2)
label_189668:
    if (ctx->pc == 0x189668u) {
        ctx->pc = 0x189668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189664u;
        // 0x189668: 0xa3a300dc  sb          $v1, 0xDC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18966Cu;
        goto label_18966c;
    }
    ctx->pc = 0x189664u;
    {
        const bool branch_taken_0x189664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189664u;
        // 0x189668: 0xa3a300dc  sb          $v1, 0xDC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189664) {
            ctx->pc = 0x189688u;
            goto label_189688;
        }
    }
    ctx->pc = 0x18966Cu;
label_18966c:
    // 0x18966c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18966cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189670:
    // 0x189670: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_189674:
    // 0x189674: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189678:
    // 0x189678: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18967c:
    // 0x18967c: 0x0  nop
    ctx->pc = 0x18967cu;
    // NOP
label_189680:
    // 0x189680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_189684:
    // 0x189684: 0xa3a300dc  sb          $v1, 0xDC($sp)
    ctx->pc = 0x189684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 220), (uint8_t)GPR_U32(ctx, 3));
label_189688:
    // 0x189688: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x189688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_18968c:
    // 0x18968c: 0xc6810088  lwc1        $f1, 0x88($s4)
    ctx->pc = 0x18968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189690:
    // 0x189690: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_189694:
    // 0x189694: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x189694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_189698:
    // 0x189698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18969c:
    // 0x18969c: 0x0  nop
    ctx->pc = 0x18969cu;
    // NOP
label_1896a0:
    // 0x1896a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1896a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1896a4:
    // 0x1896a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1896a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1896a8:
    // 0x1896a8: 0x0  nop
    ctx->pc = 0x1896a8u;
    // NOP
label_1896ac:
    // 0x1896ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1896b0:
    if (ctx->pc == 0x1896B0u) {
        ctx->pc = 0x1896B4u;
        goto label_1896b4;
    }
    ctx->pc = 0x1896ACu;
    {
        const bool branch_taken_0x1896ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1896ac) {
            ctx->pc = 0x1896C4u;
            goto label_1896c4;
        }
    }
    ctx->pc = 0x1896B4u;
label_1896b4:
    // 0x1896b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1896b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1896b8:
    // 0x1896b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1896b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1896bc:
    // 0x1896bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1896c0:
    if (ctx->pc == 0x1896C0u) {
        ctx->pc = 0x1896C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896BCu;
        // 0x1896c0: 0xa3a300dd  sb          $v1, 0xDD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1896C4u;
        goto label_1896c4;
    }
    ctx->pc = 0x1896BCu;
    {
        const bool branch_taken_0x1896bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896BCu;
        // 0x1896c0: 0xa3a300dd  sb          $v1, 0xDD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896bc) {
            ctx->pc = 0x1896E0u;
            goto label_1896e0;
        }
    }
    ctx->pc = 0x1896C4u;
label_1896c4:
    // 0x1896c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1896c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1896c8:
    // 0x1896c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1896c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1896cc:
    // 0x1896cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1896ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1896d0:
    // 0x1896d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1896d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1896d4:
    // 0x1896d4: 0x0  nop
    ctx->pc = 0x1896d4u;
    // NOP
label_1896d8:
    // 0x1896d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1896d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1896dc:
    // 0x1896dc: 0xa3a300dd  sb          $v1, 0xDD($sp)
    ctx->pc = 0x1896dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 221), (uint8_t)GPR_U32(ctx, 3));
label_1896e0:
    // 0x1896e0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1896e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1896e4:
    // 0x1896e4: 0xc681008c  lwc1        $f1, 0x8C($s4)
    ctx->pc = 0x1896e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1896e8:
    // 0x1896e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1896e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1896ec:
    // 0x1896ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1896ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1896f0:
    // 0x1896f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1896f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1896f4:
    // 0x1896f4: 0x0  nop
    ctx->pc = 0x1896f4u;
    // NOP
label_1896f8:
    // 0x1896f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1896f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1896fc:
    // 0x1896fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1896fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189700:
    // 0x189700: 0x0  nop
    ctx->pc = 0x189700u;
    // NOP
label_189704:
    // 0x189704: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_189708:
    if (ctx->pc == 0x189708u) {
        ctx->pc = 0x18970Cu;
        goto label_18970c;
    }
    ctx->pc = 0x189704u;
    {
        const bool branch_taken_0x189704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189704) {
            ctx->pc = 0x18971Cu;
            goto label_18971c;
        }
    }
    ctx->pc = 0x18970Cu;
label_18970c:
    // 0x18970c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18970cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189710:
    // 0x189710: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189714:
    // 0x189714: 0x10000008  b           . + 4 + (0x8 << 2)
label_189718:
    if (ctx->pc == 0x189718u) {
        ctx->pc = 0x189718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189714u;
        // 0x189718: 0xa3a300de  sb          $v1, 0xDE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18971Cu;
        goto label_18971c;
    }
    ctx->pc = 0x189714u;
    {
        const bool branch_taken_0x189714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189714u;
        // 0x189718: 0xa3a300de  sb          $v1, 0xDE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189714) {
            ctx->pc = 0x189738u;
            goto label_189738;
        }
    }
    ctx->pc = 0x18971Cu;
label_18971c:
    // 0x18971c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18971cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189720:
    // 0x189720: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_189724:
    // 0x189724: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189728:
    // 0x189728: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18972c:
    // 0x18972c: 0x0  nop
    ctx->pc = 0x18972cu;
    // NOP
label_189730:
    // 0x189730: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_189734:
    // 0x189734: 0xa3a300de  sb          $v1, 0xDE($sp)
    ctx->pc = 0x189734u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 222), (uint8_t)GPR_U32(ctx, 3));
label_189738:
    // 0x189738: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_18973c:
    // 0x18973c: 0xc6810090  lwc1        $f1, 0x90($s4)
    ctx->pc = 0x18973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189740:
    // 0x189740: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_189744:
    // 0x189744: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x189744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_189748:
    // 0x189748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18974c:
    // 0x18974c: 0x0  nop
    ctx->pc = 0x18974cu;
    // NOP
label_189750:
    // 0x189750: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_189754:
    // 0x189754: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189758:
    // 0x189758: 0x0  nop
    ctx->pc = 0x189758u;
    // NOP
label_18975c:
    // 0x18975c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_189760:
    if (ctx->pc == 0x189760u) {
        ctx->pc = 0x189764u;
        goto label_189764;
    }
    ctx->pc = 0x18975Cu;
    {
        const bool branch_taken_0x18975c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18975c) {
            ctx->pc = 0x189774u;
            goto label_189774;
        }
    }
    ctx->pc = 0x189764u;
label_189764:
    // 0x189764: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189768:
    // 0x189768: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18976c:
    // 0x18976c: 0x10000008  b           . + 4 + (0x8 << 2)
label_189770:
    if (ctx->pc == 0x189770u) {
        ctx->pc = 0x189770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18976Cu;
        // 0x189770: 0xa3a300df  sb          $v1, 0xDF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189774u;
        goto label_189774;
    }
    ctx->pc = 0x18976Cu;
    {
        const bool branch_taken_0x18976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18976Cu;
        // 0x189770: 0xa3a300df  sb          $v1, 0xDF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18976c) {
            ctx->pc = 0x189790u;
            goto label_189790;
        }
    }
    ctx->pc = 0x189774u;
label_189774:
    // 0x189774: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189774u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_189778:
    // 0x189778: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_18977c:
    // 0x18977c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18977cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189780:
    // 0x189780: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189784:
    // 0x189784: 0x0  nop
    ctx->pc = 0x189784u;
    // NOP
label_189788:
    // 0x189788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18978c:
    // 0x18978c: 0xa3a300df  sb          $v1, 0xDF($sp)
    ctx->pc = 0x18978cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 3));
label_189790:
    // 0x189790: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_189794:
    // 0x189794: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x189794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_189798:
    // 0x189798: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_18979c:
    if (ctx->pc == 0x18979Cu) {
        ctx->pc = 0x18979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189798u;
        // 0x18979c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897A0u;
        goto label_1897a0;
    }
    ctx->pc = 0x189798u;
    {
        const bool branch_taken_0x189798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189798u;
        // 0x18979c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189798) {
            ctx->pc = 0x1897E0u;
            goto label_1897e0;
        }
    }
    ctx->pc = 0x1897A0u;
label_1897a0:
    // 0x1897a0: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
label_1897a4:
    // 0x1897a4: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1897a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1897a8:
    // 0x1897a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1897ac:
    // 0x1897ac: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1897acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1897b0:
    // 0x1897b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1897b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1897b4:
    // 0x1897b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1897b8:
    if (ctx->pc == 0x1897B8u) {
        ctx->pc = 0x1897B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897B4u;
        // 0x1897b8: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897BCu;
        goto label_1897bc;
    }
    ctx->pc = 0x1897B4u;
    {
        const bool branch_taken_0x1897b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897B4u;
        // 0x1897b8: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897b4) {
            ctx->pc = 0x1897C8u;
            goto label_1897c8;
        }
    }
    ctx->pc = 0x1897BCu;
label_1897bc:
    // 0x1897bc: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1897bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1897c0:
    // 0x1897c0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1897c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1897c4:
    // 0x1897c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1897c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1897c8:
    // 0x1897c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1897cc:
    if (ctx->pc == 0x1897CCu) {
        ctx->pc = 0x1897D0u;
        goto label_1897d0;
    }
    ctx->pc = 0x1897C8u;
    {
        const bool branch_taken_0x1897c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897c8) {
            ctx->pc = 0x1897DCu;
            goto label_1897dc;
        }
    }
    ctx->pc = 0x1897D0u;
label_1897d0:
    // 0x1897d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1897d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1897d4:
    // 0x1897d4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1897d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1897d8:
    // 0x1897d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1897d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1897dc:
    // 0x1897dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1897dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1897e0:
    // 0x1897e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1897e4:
    if (ctx->pc == 0x1897E4u) {
        ctx->pc = 0x1897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E0u;
        // 0x1897e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897E8u;
        goto label_1897e8;
    }
    ctx->pc = 0x1897E0u;
    {
        const bool branch_taken_0x1897e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E0u;
        // 0x1897e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897e0) {
            ctx->pc = 0x189850u;
            goto label_189850;
        }
    }
    ctx->pc = 0x1897E8u;
label_1897e8:
    // 0x1897e8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_1897ec:
    if (ctx->pc == 0x1897ECu) {
        ctx->pc = 0x1897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E8u;
        // 0x1897ec: 0x8e86005c  lw          $a2, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1897F0u;
        goto label_1897f0;
    }
    ctx->pc = 0x1897E8u;
    {
        const bool branch_taken_0x1897e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E8u;
        // 0x1897ec: 0x8e86005c  lw          $a2, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897e8) {
            ctx->pc = 0x18983Cu;
            goto label_18983c;
        }
    }
    ctx->pc = 0x1897F0u;
label_1897f0:
    // 0x1897f0: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1897f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
label_1897f4:
    // 0x1897f4: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1897f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1897f8:
    // 0x1897f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1897fc:
    // 0x1897fc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1897fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189800:
    // 0x189800: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189804:
    // 0x189804: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189808:
    if (ctx->pc == 0x189808u) {
        ctx->pc = 0x189808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189804u;
        // 0x189808: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18980Cu;
        goto label_18980c;
    }
    ctx->pc = 0x189804u;
    {
        const bool branch_taken_0x189804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189804u;
        // 0x189808: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189804) {
            ctx->pc = 0x189818u;
            goto label_189818;
        }
    }
    ctx->pc = 0x18980Cu;
label_18980c:
    // 0x18980c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x18980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_189810:
    // 0x189810: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189814:
    // 0x189814: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189818:
    // 0x189818: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18981c:
    if (ctx->pc == 0x18981Cu) {
        ctx->pc = 0x189820u;
        goto label_189820;
    }
    ctx->pc = 0x189818u;
    {
        const bool branch_taken_0x189818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189818) {
            ctx->pc = 0x18982Cu;
            goto label_18982c;
        }
    }
    ctx->pc = 0x189820u;
label_189820:
    // 0x189820: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189824:
    // 0x189824: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_189828:
    // 0x189828: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18982c:
    // 0x18982c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_189830:
    if (ctx->pc == 0x189830u) {
        ctx->pc = 0x189834u;
        goto label_189834;
    }
    ctx->pc = 0x18982Cu;
    {
        const bool branch_taken_0x18982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18982c) {
            ctx->pc = 0x18983Cu;
            goto label_18983c;
        }
    }
    ctx->pc = 0x189834u;
label_189834:
    // 0x189834: 0x10000003  b           . + 4 + (0x3 << 2)
label_189838:
    if (ctx->pc == 0x189838u) {
        ctx->pc = 0x189838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189834u;
        // 0x189838: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18983Cu;
        goto label_18983c;
    }
    ctx->pc = 0x189834u;
    {
        const bool branch_taken_0x189834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189834u;
        // 0x189838: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189834) {
            ctx->pc = 0x189844u;
            goto label_189844;
        }
    }
    ctx->pc = 0x18983Cu;
label_18983c:
    // 0x18983c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189840:
    // 0x189840: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_189844:
    // 0x189844: 0xc06d100  jal         func_1B4400
label_189848:
    if (ctx->pc == 0x189848u) {
        ctx->pc = 0x18984Cu;
        goto label_18984c;
    }
    ctx->pc = 0x189844u;
    SET_GPR_U32(ctx, 31, 0x18984Cu);
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x189844u, 0x18984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18984Cu;
label_18984c:
    // 0x18984c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_189850:
    // 0x189850: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_189854:
    // 0x189854: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x189854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_189858:
    // 0x189858: 0x346b0004  ori         $t3, $v1, 0x4
    ctx->pc = 0x189858u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_18985c:
    // 0x18985c: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x18985cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
label_189860:
    // 0x189860: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x189860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_189864:
    // 0x189864: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x189864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_189868:
    // 0x189868: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x189868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_18986c:
    // 0x18986c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x18986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_189870:
    // 0x189870: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_189874:
    // 0x189874: 0x346a0004  ori         $t2, $v1, 0x4
    ctx->pc = 0x189874u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_189878:
    // 0x189878: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18987c:
    // 0x18987c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_189880:
    // 0x189880: 0xffa500b0  sd          $a1, 0xB0($sp)
    ctx->pc = 0x189880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 5));
label_189884:
    // 0x189884: 0xffa400b8  sd          $a0, 0xB8($sp)
    ctx->pc = 0x189884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 4));
label_189888:
    // 0x189888: 0x34691001  ori         $t1, $v1, 0x1001
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
label_18988c:
    // 0x18988c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_189890:
    // 0x189890: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x189890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_189894:
    // 0x189894: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x189894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_189898:
    // 0x189898: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x189898u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
label_18989c:
    // 0x18989c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898a0:
    // 0x1898a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1898a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1898a4:
    // 0x1898a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898a8:
    // 0x1898a8: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x1898a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
label_1898ac:
    // 0x1898ac: 0x7baa00b0  lq          $t2, 0xB0($sp)
    ctx->pc = 0x1898acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1898b0:
    // 0x1898b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898b4:
    // 0x1898b4: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x1898b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
label_1898b8:
    // 0x1898b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898bc:
    // 0x1898bc: 0xfc690020  sd          $t1, 0x20($v1)
    ctx->pc = 0x1898bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 9));
label_1898c0:
    // 0x1898c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898c4:
    // 0x1898c4: 0xfc680028  sd          $t0, 0x28($v1)
    ctx->pc = 0x1898c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 8));
label_1898c8:
    // 0x1898c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898cc:
    // 0x1898cc: 0xfc670030  sd          $a3, 0x30($v1)
    ctx->pc = 0x1898ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 7));
label_1898d0:
    // 0x1898d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898d4:
    // 0x1898d4: 0xfc660038  sd          $a2, 0x38($v1)
    ctx->pc = 0x1898d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 6));
label_1898d8:
    // 0x1898d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898dc:
    // 0x1898dc: 0xfc650040  sd          $a1, 0x40($v1)
    ctx->pc = 0x1898dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 5));
label_1898e0:
    // 0x1898e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898e4:
    // 0x1898e4: 0xfc640048  sd          $a0, 0x48($v1)
    ctx->pc = 0x1898e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 4));
label_1898e8:
    // 0x1898e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1898ec:
    // 0x1898ec: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1898ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_1898f0:
    // 0x1898f0: 0xc04b7b4  jal         func_12DED0
label_1898f4:
    if (ctx->pc == 0x1898F4u) {
        ctx->pc = 0x1898F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898F0u;
        // 0x1898f4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1898F8u;
        goto label_1898f8;
    }
    ctx->pc = 0x1898F0u;
    SET_GPR_U32(ctx, 31, 0x1898F8u);
    ctx->pc = 0x1898F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898F0u;
    // 0x1898f4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1898F0u, 0x1898F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898F8u;
label_1898f8:
    // 0x1898f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1898f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1898fc:
    // 0x1898fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_189900:
    // 0x189900: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189904:
    // 0x189904: 0xc04b7dc  jal         func_12DF70
label_189908:
    if (ctx->pc == 0x189908u) {
        ctx->pc = 0x189908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189904u;
        // 0x189908: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18990Cu;
        goto label_18990c;
    }
    ctx->pc = 0x189904u;
    SET_GPR_U32(ctx, 31, 0x18990Cu);
    ctx->pc = 0x189908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189904u;
    // 0x189908: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x189904u, 0x18990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18990Cu;
label_18990c:
    // 0x18990c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_189910:
    // 0x189910: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x189910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_189914:
    // 0x189914: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x189914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_189918:
    // 0x189918: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x189918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18991c:
    // 0x18991c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x18991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189920:
    // 0x189920: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x189920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189924:
    // 0x189924: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x189924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_189928:
    // 0x189928: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x189928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_18992c:
    // 0x18992c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x18992cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_189930:
    // 0x189930: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x189930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_189934:
    // 0x189934: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x189934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_189938:
    // 0x189938: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x189938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18993c:
    // 0x18993c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x18993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189940:
    // 0x189940: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x189940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189944:
    // 0x189944: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x189944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_189948:
    // 0x189948: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x189948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_18994c:
    // 0x18994c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x18994cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_189950:
    // 0x189950: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x189950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_189954:
    // 0x189954: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_189958:
    // 0x189958: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_18995c:
    if (ctx->pc == 0x18995Cu) {
        ctx->pc = 0x18995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189958u;
        // 0x18995c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189960u;
        goto label_189960;
    }
    ctx->pc = 0x189958u;
    {
        const bool branch_taken_0x189958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189958u;
        // 0x18995c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189958) {
            ctx->pc = 0x1899A0u;
            goto label_1899a0;
        }
    }
    ctx->pc = 0x189960u;
label_189960:
    // 0x189960: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
label_189964:
    // 0x189964: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_189968:
    // 0x189968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18996c:
    // 0x18996c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x18996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189970:
    // 0x189970: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189974:
    // 0x189974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189978:
    if (ctx->pc == 0x189978u) {
        ctx->pc = 0x189978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189974u;
        // 0x189978: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18997Cu;
        goto label_18997c;
    }
    ctx->pc = 0x189974u;
    {
        const bool branch_taken_0x189974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189974u;
        // 0x189978: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189974) {
            ctx->pc = 0x189988u;
            goto label_189988;
        }
    }
    ctx->pc = 0x18997Cu;
label_18997c:
    // 0x18997c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x18997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_189980:
    // 0x189980: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189984:
    // 0x189984: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189988:
    // 0x189988: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18998c:
    if (ctx->pc == 0x18998Cu) {
        ctx->pc = 0x189990u;
        goto label_189990;
    }
    ctx->pc = 0x189988u;
    {
        const bool branch_taken_0x189988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189988) {
            ctx->pc = 0x18999Cu;
            goto label_18999c;
        }
    }
    ctx->pc = 0x189990u;
label_189990:
    // 0x189990: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189994:
    // 0x189994: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_189998:
    // 0x189998: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18999c:
    // 0x18999c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1899a0:
    // 0x1899a0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_1899a4:
    if (ctx->pc == 0x1899A4u) {
        ctx->pc = 0x1899A8u;
        goto label_1899a8;
    }
    ctx->pc = 0x1899A0u;
    {
        const bool branch_taken_0x1899a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899a0) {
            ctx->pc = 0x189A84u;
            goto label_189a84;
        }
    }
    ctx->pc = 0x1899A8u;
label_1899a8:
    // 0x1899a8: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1899ac:
    // 0x1899ac: 0xc06d080  jal         func_1B4200
label_1899b0:
    if (ctx->pc == 0x1899B0u) {
        ctx->pc = 0x1899B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899ACu;
        // 0x1899b0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899B4u;
        goto label_1899b4;
    }
    ctx->pc = 0x1899ACu;
    SET_GPR_U32(ctx, 31, 0x1899B4u);
    ctx->pc = 0x1899B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1899ACu;
    // 0x1899b0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4200u, 0x1899ACu, 0x1899B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899B4u;
label_1899b4:
    // 0x1899b4: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_1899b8:
    // 0x1899b8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1899bc:
    if (ctx->pc == 0x1899BCu) {
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899C0u;
        goto label_1899c0;
    }
    ctx->pc = 0x1899B8u;
    {
        const bool branch_taken_0x1899b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899b8) {
            ctx->pc = 0x189A08u;
            goto label_189a08;
        }
    }
    ctx->pc = 0x1899C0u;
label_1899c0:
    // 0x1899c0: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1899c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_1899c4:
    // 0x1899c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1899c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1899c8:
    // 0x1899c8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1899c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1899cc:
    // 0x1899cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1899ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1899d0:
    // 0x1899d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1899d4:
    if (ctx->pc == 0x1899D4u) {
        ctx->pc = 0x1899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899D0u;
        // 0x1899d4: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1899D8u;
        goto label_1899d8;
    }
    ctx->pc = 0x1899D0u;
    {
        const bool branch_taken_0x1899d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899D0u;
        // 0x1899d4: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899d0) {
            ctx->pc = 0x1899E4u;
            goto label_1899e4;
        }
    }
    ctx->pc = 0x1899D8u;
label_1899d8:
    // 0x1899d8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1899d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1899dc:
    // 0x1899dc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1899e0:
    // 0x1899e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1899e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1899e4:
    // 0x1899e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1899e8:
    if (ctx->pc == 0x1899E8u) {
        ctx->pc = 0x1899ECu;
        goto label_1899ec;
    }
    ctx->pc = 0x1899E4u;
    {
        const bool branch_taken_0x1899e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899e4) {
            ctx->pc = 0x1899F8u;
            goto label_1899f8;
        }
    }
    ctx->pc = 0x1899ECu;
label_1899ec:
    // 0x1899ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1899ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1899f0:
    // 0x1899f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1899f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1899f4:
    // 0x1899f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1899f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1899f8:
    // 0x1899f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1899fc:
    if (ctx->pc == 0x1899FCu) {
        ctx->pc = 0x189A00u;
        goto label_189a00;
    }
    ctx->pc = 0x1899F8u;
    {
        const bool branch_taken_0x1899f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1899f8) {
            ctx->pc = 0x189A08u;
            goto label_189a08;
        }
    }
    ctx->pc = 0x189A00u;
label_189a00:
    // 0x189a00: 0x10000003  b           . + 4 + (0x3 << 2)
label_189a04:
    if (ctx->pc == 0x189A04u) {
        ctx->pc = 0x189A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A00u;
        // 0x189a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A08u;
        goto label_189a08;
    }
    ctx->pc = 0x189A00u;
    {
        const bool branch_taken_0x189a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A00u;
        // 0x189a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a00) {
            ctx->pc = 0x189A10u;
            goto label_189a10;
        }
    }
    ctx->pc = 0x189A08u;
label_189a08:
    // 0x189a08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189a0c:
    // 0x189a0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189a10:
    // 0x189a10: 0xc06d130  jal         func_1B44C0
label_189a14:
    if (ctx->pc == 0x189A14u) {
        ctx->pc = 0x189A18u;
        goto label_189a18;
    }
    ctx->pc = 0x189A10u;
    SET_GPR_U32(ctx, 31, 0x189A18u);
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x189A10u, 0x189A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A18u;
label_189a18:
    // 0x189a18: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_189a1c:
    // 0x189a1c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_189a20:
    if (ctx->pc == 0x189A20u) {
        ctx->pc = 0x189A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A1Cu;
        // 0x189a20: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A24u;
        goto label_189a24;
    }
    ctx->pc = 0x189A1Cu;
    {
        const bool branch_taken_0x189a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A1Cu;
        // 0x189a20: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a1c) {
            ctx->pc = 0x189A6Cu;
            goto label_189a6c;
        }
    }
    ctx->pc = 0x189A24u;
label_189a24:
    // 0x189a24: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_189a28:
    // 0x189a28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_189a2c:
    // 0x189a2c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189a30:
    // 0x189a30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189a34:
    // 0x189a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189a38:
    if (ctx->pc == 0x189A38u) {
        ctx->pc = 0x189A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A34u;
        // 0x189a38: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A3Cu;
        goto label_189a3c;
    }
    ctx->pc = 0x189A34u;
    {
        const bool branch_taken_0x189a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A34u;
        // 0x189a38: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a34) {
            ctx->pc = 0x189A48u;
            goto label_189a48;
        }
    }
    ctx->pc = 0x189A3Cu;
label_189a3c:
    // 0x189a3c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_189a40:
    // 0x189a40: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189a44:
    // 0x189a44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189a48:
    // 0x189a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189a4c:
    if (ctx->pc == 0x189A4Cu) {
        ctx->pc = 0x189A50u;
        goto label_189a50;
    }
    ctx->pc = 0x189A48u;
    {
        const bool branch_taken_0x189a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a48) {
            ctx->pc = 0x189A5Cu;
            goto label_189a5c;
        }
    }
    ctx->pc = 0x189A50u;
label_189a50:
    // 0x189a50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189a54:
    // 0x189a54: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_189a58:
    // 0x189a58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189a5c:
    // 0x189a5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_189a60:
    if (ctx->pc == 0x189A60u) {
        ctx->pc = 0x189A64u;
        goto label_189a64;
    }
    ctx->pc = 0x189A5Cu;
    {
        const bool branch_taken_0x189a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a5c) {
            ctx->pc = 0x189A6Cu;
            goto label_189a6c;
        }
    }
    ctx->pc = 0x189A64u;
label_189a64:
    // 0x189a64: 0x10000003  b           . + 4 + (0x3 << 2)
label_189a68:
    if (ctx->pc == 0x189A68u) {
        ctx->pc = 0x189A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A64u;
        // 0x189a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A6Cu;
        goto label_189a6c;
    }
    ctx->pc = 0x189A64u;
    {
        const bool branch_taken_0x189a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A64u;
        // 0x189a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a64) {
            ctx->pc = 0x189A74u;
            goto label_189a74;
        }
    }
    ctx->pc = 0x189A6Cu;
label_189a6c:
    // 0x189a6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189a70:
    // 0x189a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189a74:
    // 0x189a74: 0xc06d14c  jal         func_1B4530
label_189a78:
    if (ctx->pc == 0x189A78u) {
        ctx->pc = 0x189A7Cu;
        goto label_189a7c;
    }
    ctx->pc = 0x189A74u;
    SET_GPR_U32(ctx, 31, 0x189A7Cu);
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x189A74u, 0x189A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A7Cu;
label_189a7c:
    // 0x189a7c: 0x1000000d  b           . + 4 + (0xD << 2)
label_189a80:
    if (ctx->pc == 0x189A80u) {
        ctx->pc = 0x189A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A7Cu;
        // 0x189a80: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A84u;
        goto label_189a84;
    }
    ctx->pc = 0x189A7Cu;
    {
        const bool branch_taken_0x189a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A7Cu;
        // 0x189a80: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a7c) {
            ctx->pc = 0x189AB4u;
            goto label_189ab4;
        }
    }
    ctx->pc = 0x189A84u;
label_189a84:
    // 0x189a84: 0x8e910050  lw          $s1, 0x50($s4)
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_189a88:
    // 0x189a88: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_189a8c:
    // 0x189a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189a90:
    // 0x189a90: 0xc0485c0  jal         func_121700
label_189a94:
    if (ctx->pc == 0x189A94u) {
        ctx->pc = 0x189A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A90u;
        // 0x189a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A98u;
        goto label_189a98;
    }
    ctx->pc = 0x189A90u;
    SET_GPR_U32(ctx, 31, 0x189A98u);
    ctx->pc = 0x189A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A90u;
    // 0x189a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x189A90u, 0x189A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A98u;
label_189a98:
    // 0x189a98: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x189a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_189a9c:
    // 0x189a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189aa0:
    // 0x189aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_189aa4:
    // 0x189aa4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x189aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_189aa8:
    // 0x189aa8: 0x320f809  jalr        $t9
label_189aac:
    if (ctx->pc == 0x189AACu) {
        ctx->pc = 0x189AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA8u;
        // 0x189aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189AB0u;
        goto label_189ab0;
    }
    ctx->pc = 0x189AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x189AB0u);
        ctx->pc = 0x189AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA8u;
        // 0x189aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189AA8u, 0x189AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x189AB0u;
label_189ab0:
    // 0x189ab0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x189ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189ab4:
    // 0x189ab4: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_189ab8:
    if (ctx->pc == 0x189AB8u) {
        ctx->pc = 0x189AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AB4u;
        // 0x189ab8: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ABCu;
        goto label_189abc;
    }
    ctx->pc = 0x189AB4u;
    {
        const bool branch_taken_0x189ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AB4u;
        // 0x189ab8: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ab4) {
            ctx->pc = 0x189DFCu;
            goto label_189dfc;
        }
    }
    ctx->pc = 0x189ABCu;
label_189abc:
    // 0x189abc: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_189ac0:
    if (ctx->pc == 0x189AC0u) {
        ctx->pc = 0x189AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ABCu;
        // 0x189ac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189AC4u;
        goto label_189ac4;
    }
    ctx->pc = 0x189ABCu;
    {
        const bool branch_taken_0x189abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ABCu;
        // 0x189ac0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189abc) {
            ctx->pc = 0x189BACu;
            goto label_189bac;
        }
    }
    ctx->pc = 0x189AC4u;
label_189ac4:
    // 0x189ac4: 0xc0628c0  jal         func_18A300
label_189ac8:
    if (ctx->pc == 0x189AC8u) {
        ctx->pc = 0x189AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AC4u;
        // 0x189ac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ACCu;
        goto label_189acc;
    }
    ctx->pc = 0x189AC4u;
    SET_GPR_U32(ctx, 31, 0x189ACCu);
    ctx->pc = 0x189AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AC4u;
    // 0x189ac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A300u, 0x189AC4u, 0x189ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ACCu;
label_189acc:
    // 0x189acc: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_189ad0:
    // 0x189ad0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189ad4:
    // 0x189ad4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_189ad8:
    if (ctx->pc == 0x189AD8u) {
        ctx->pc = 0x189AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AD4u;
        // 0x189ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ADCu;
        goto label_189adc;
    }
    ctx->pc = 0x189AD4u;
    {
        const bool branch_taken_0x189ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AD4u;
        // 0x189ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ad4) {
            ctx->pc = 0x189B28u;
            goto label_189b28;
        }
    }
    ctx->pc = 0x189ADCu;
label_189adc:
    // 0x189adc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_189ae0:
    if (ctx->pc == 0x189AE0u) {
        ctx->pc = 0x189AE4u;
        goto label_189ae4;
    }
    ctx->pc = 0x189ADCu;
    {
        const bool branch_taken_0x189adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189adc) {
            ctx->pc = 0x189B04u;
            goto label_189b04;
        }
    }
    ctx->pc = 0x189AE4u;
label_189ae4:
    // 0x189ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_189ae8:
    if (ctx->pc == 0x189AE8u) {
        ctx->pc = 0x189AECu;
        goto label_189aec;
    }
    ctx->pc = 0x189AE4u;
    {
        const bool branch_taken_0x189ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ae4) {
            ctx->pc = 0x189AF4u;
            goto label_189af4;
        }
    }
    ctx->pc = 0x189AECu;
label_189aec:
    // 0x189aec: 0x1000000f  b           . + 4 + (0xF << 2)
label_189af0:
    if (ctx->pc == 0x189AF0u) {
        ctx->pc = 0x189AF4u;
        goto label_189af4;
    }
    ctx->pc = 0x189AECu;
    {
        const bool branch_taken_0x189aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189aec) {
            ctx->pc = 0x189B2Cu;
            goto label_189b2c;
        }
    }
    ctx->pc = 0x189AF4u;
label_189af4:
    // 0x189af4: 0x0  nop
    ctx->pc = 0x189af4u;
    // NOP
label_189af8:
    // 0x189af8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x189af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_189afc:
    // 0x189afc: 0x1000000b  b           . + 4 + (0xB << 2)
label_189b00:
    if (ctx->pc == 0x189B00u) {
        ctx->pc = 0x189B04u;
        goto label_189b04;
    }
    ctx->pc = 0x189AFCu;
    {
        const bool branch_taken_0x189afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189afc) {
            ctx->pc = 0x189B2Cu;
            goto label_189b2c;
        }
    }
    ctx->pc = 0x189B04u;
label_189b04:
    // 0x189b04: 0x0  nop
    ctx->pc = 0x189b04u;
    // NOP
label_189b08:
    // 0x189b08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x189b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_189b0c:
    // 0x189b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189b10:
    // 0x189b10: 0x0  nop
    ctx->pc = 0x189b10u;
    // NOP
label_189b14:
    // 0x189b14: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x189b14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_189b18:
    // 0x189b18: 0x0  nop
    ctx->pc = 0x189b18u;
    // NOP
label_189b1c:
    // 0x189b1c: 0x0  nop
    ctx->pc = 0x189b1cu;
    // NOP
label_189b20:
    // 0x189b20: 0x10000002  b           . + 4 + (0x2 << 2)
label_189b24:
    if (ctx->pc == 0x189B24u) {
        ctx->pc = 0x189B28u;
        goto label_189b28;
    }
    ctx->pc = 0x189B20u;
    {
        const bool branch_taken_0x189b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b20) {
            ctx->pc = 0x189B2Cu;
            goto label_189b2c;
        }
    }
    ctx->pc = 0x189B28u;
label_189b28:
    // 0x189b28: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x189b28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_189b2c:
    // 0x189b2c: 0x0  nop
    ctx->pc = 0x189b2cu;
    // NOP
label_189b30:
    // 0x189b30: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x189b30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_189b34:
    // 0x189b34: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x189b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_189b38:
    // 0x189b38: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x189b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_189b3c:
    // 0x189b3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_189b40:
    if (ctx->pc == 0x189B40u) {
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B3Cu;
        // 0x189b40: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189B44u;
        goto label_189b44;
    }
    ctx->pc = 0x189B3Cu;
    {
        const bool branch_taken_0x189b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B3Cu;
        // 0x189b40: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b3c) {
            ctx->pc = 0x189BA8u;
            goto label_189ba8;
        }
    }
    ctx->pc = 0x189B44u;
label_189b44:
    // 0x189b44: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_189b48:
    // 0x189b48: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x189b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_189b4c:
    // 0x189b4c: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x189b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189b50:
    // 0x189b50: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x189b50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_189b54:
    // 0x189b54: 0x3c024390  lui         $v0, 0x4390
    ctx->pc = 0x189b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17296 << 16));
label_189b58:
    // 0x189b58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_189b5c:
    // 0x189b5c: 0xc6840010  lwc1        $f4, 0x10($s4)
    ctx->pc = 0x189b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_189b60:
    // 0x189b60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189b64:
    // 0x189b64: 0x46142081  sub.s       $f2, $f4, $f20
    ctx->pc = 0x189b64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
label_189b68:
    // 0x189b68: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x189b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_189b6c:
    // 0x189b6c: 0xc6830014  lwc1        $f3, 0x14($s4)
    ctx->pc = 0x189b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_189b70:
    // 0x189b70: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x189b70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_189b74:
    // 0x189b74: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x189b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_189b78:
    // 0x189b78: 0x460020e4  .word       0x460020E4                   # cvt.w.s     $f3, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_189b7c:
    // 0x189b7c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x189b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189b80:
    // 0x189b80: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x189b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189b84:
    // 0x189b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189b88:
    // 0x189b88: 0x24657ff8  addiu       $a1, $v1, 0x7FF8
    ctx->pc = 0x189b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32760));
label_189b8c:
    // 0x189b8c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_189b90:
    // 0x189b90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_189b94:
    // 0x189b94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189b94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189b98:
    // 0x189b98: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x189b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_189b9c:
    // 0x189b9c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x189b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_189ba0:
    // 0x189ba0: 0xc06217c  jal         func_1885F0
label_189ba4:
    if (ctx->pc == 0x189BA4u) {
        ctx->pc = 0x189BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BA0u;
        // 0x189ba4: 0x24667ff8  addiu       $a2, $v1, 0x7FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189BA8u;
        goto label_189ba8;
    }
    ctx->pc = 0x189BA0u;
    SET_GPR_U32(ctx, 31, 0x189BA8u);
    ctx->pc = 0x189BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BA0u;
    // 0x189ba4: 0x24667ff8  addiu       $a2, $v1, 0x7FF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1885F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1885F0u, 0x189BA0u, 0x189BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BA8u;
label_189ba8:
    // 0x189ba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x189ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189bac:
    // 0x189bac: 0x0  nop
    ctx->pc = 0x189bacu;
    // NOP
label_189bb0:
    // 0x189bb0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x189bb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_189bb4:
    // 0x189bb4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_189bb8:
    // 0x189bb8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_189bbc:
    if (ctx->pc == 0x189BBCu) {
        ctx->pc = 0x189BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BB8u;
        // 0x189bbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189BC0u;
        goto label_189bc0;
    }
    ctx->pc = 0x189BB8u;
    {
        const bool branch_taken_0x189bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x189BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BB8u;
        // 0x189bbc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bb8) {
            ctx->pc = 0x189BDCu;
            goto label_189bdc;
        }
    }
    ctx->pc = 0x189BC0u;
label_189bc0:
    // 0x189bc0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x189bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_189bc4:
    // 0x189bc4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_189bc8:
    if (ctx->pc == 0x189BC8u) {
        ctx->pc = 0x189BCCu;
        goto label_189bcc;
    }
    ctx->pc = 0x189BC4u;
    {
        const bool branch_taken_0x189bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x189bc4) {
            ctx->pc = 0x189BD4u;
            goto label_189bd4;
        }
    }
    ctx->pc = 0x189BCCu;
label_189bcc:
    // 0x189bcc: 0x1000000f  b           . + 4 + (0xF << 2)
label_189bd0:
    if (ctx->pc == 0x189BD0u) {
        ctx->pc = 0x189BD4u;
        goto label_189bd4;
    }
    ctx->pc = 0x189BCCu;
    {
        const bool branch_taken_0x189bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189bcc) {
            ctx->pc = 0x189C0Cu;
            goto label_189c0c;
        }
    }
    ctx->pc = 0x189BD4u;
label_189bd4:
    // 0x189bd4: 0x0  nop
    ctx->pc = 0x189bd4u;
    // NOP
label_189bd8:
    // 0x189bd8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_189bdc:
    // 0x189bdc: 0x0  nop
    ctx->pc = 0x189bdcu;
    // NOP
label_189be0:
    // 0x189be0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x189be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_189be4:
    // 0x189be4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x189be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189be8:
    // 0x189be8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x189be8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_189bec:
    // 0x189bec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_189bf0:
    // 0x189bf0: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x189bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_189bf4:
    // 0x189bf4: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x189bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189bf8:
    // 0x189bf8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x189bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189bfc:
    // 0x189bfc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_189c00:
    // 0x189c00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x189c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_189c04:
    // 0x189c04: 0x1000007d  b           . + 4 + (0x7D << 2)
label_189c08:
    if (ctx->pc == 0x189C08u) {
        ctx->pc = 0x189C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C04u;
        // 0x189c08: 0xe6800014  swc1        $f0, 0x14($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C0Cu;
        goto label_189c0c;
    }
    ctx->pc = 0x189C04u;
    {
        const bool branch_taken_0x189c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C04u;
        // 0x189c08: 0xe6800014  swc1        $f0, 0x14($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c04) {
            ctx->pc = 0x189DFCu;
            goto label_189dfc;
        }
    }
    ctx->pc = 0x189C0Cu;
label_189c0c:
    // 0x189c0c: 0x0  nop
    ctx->pc = 0x189c0cu;
    // NOP
label_189c10:
    // 0x189c10: 0x2c830081  sltiu       $v1, $a0, 0x81
    ctx->pc = 0x189c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_189c14:
    // 0x189c14: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_189c18:
    if (ctx->pc == 0x189C18u) {
        ctx->pc = 0x189C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C14u;
        // 0x189c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C1Cu;
        goto label_189c1c;
    }
    ctx->pc = 0x189C14u;
    {
        const bool branch_taken_0x189c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C14u;
        // 0x189c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c14) {
            ctx->pc = 0x189C28u;
            goto label_189c28;
        }
    }
    ctx->pc = 0x189C1Cu;
label_189c1c:
    // 0x189c1c: 0x2c8100a0  sltiu       $at, $a0, 0xA0
    ctx->pc = 0x189c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
label_189c20:
    // 0x189c20: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_189c24:
    if (ctx->pc == 0x189C24u) {
        ctx->pc = 0x189C28u;
        goto label_189c28;
    }
    ctx->pc = 0x189C20u;
    {
        const bool branch_taken_0x189c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x189c20) {
            ctx->pc = 0x189C3Cu;
            goto label_189c3c;
        }
    }
    ctx->pc = 0x189C28u;
label_189c28:
    // 0x189c28: 0x2c8300e0  sltiu       $v1, $a0, 0xE0
    ctx->pc = 0x189c28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
label_189c2c:
    // 0x189c2c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_189c30:
    if (ctx->pc == 0x189C30u) {
        ctx->pc = 0x189C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C2Cu;
        // 0x189c30: 0x2c8100fd  sltiu       $at, $a0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)253) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C34u;
        goto label_189c34;
    }
    ctx->pc = 0x189C2Cu;
    {
        const bool branch_taken_0x189c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C2Cu;
        // 0x189c30: 0x2c8100fd  sltiu       $at, $a0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)253) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c2c) {
            ctx->pc = 0x189C70u;
            goto label_189c70;
        }
    }
    ctx->pc = 0x189C34u;
label_189c34:
    // 0x189c34: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_189c38:
    if (ctx->pc == 0x189C38u) {
        ctx->pc = 0x189C3Cu;
        goto label_189c3c;
    }
    ctx->pc = 0x189C34u;
    {
        const bool branch_taken_0x189c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189c34) {
            ctx->pc = 0x189C70u;
            goto label_189c70;
        }
    }
    ctx->pc = 0x189C3Cu;
label_189c3c:
    // 0x189c3c: 0x0  nop
    ctx->pc = 0x189c3cu;
    // NOP
label_189c40:
    // 0x189c40: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x189c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_189c44:
    // 0x189c44: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x189c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_189c48:
    // 0x189c48: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x189c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_189c4c:
    // 0x189c4c: 0xc045c38  jal         func_1170E0
label_189c50:
    if (ctx->pc == 0x189C50u) {
        ctx->pc = 0x189C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C4Cu;
        // 0x189c50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C54u;
        goto label_189c54;
    }
    ctx->pc = 0x189C4Cu;
    SET_GPR_U32(ctx, 31, 0x189C54u);
    ctx->pc = 0x189C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C4Cu;
    // 0x189c50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170E0u, 0x189C4Cu, 0x189C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C54u;
label_189c54:
    // 0x189c54: 0xc045c58  jal         func_117160
label_189c58:
    if (ctx->pc == 0x189C58u) {
        ctx->pc = 0x189C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C54u;
        // 0x189c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C5Cu;
        goto label_189c5c;
    }
    ctx->pc = 0x189C54u;
    SET_GPR_U32(ctx, 31, 0x189C5Cu);
    ctx->pc = 0x189C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C54u;
    // 0x189c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117160u, 0x189C54u, 0x189C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C5Cu;
label_189c5c:
    // 0x189c5c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_189c60:
    if (ctx->pc == 0x189C60u) {
        ctx->pc = 0x189C64u;
        goto label_189c64;
    }
    ctx->pc = 0x189C5Cu;
    {
        const bool branch_taken_0x189c5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189c5c) {
            ctx->pc = 0x189C68u;
            goto label_189c68;
        }
    }
    ctx->pc = 0x189C64u;
label_189c64:
    // 0x189c64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189c68:
    // 0x189c68: 0x1000000e  b           . + 4 + (0xE << 2)
label_189c6c:
    if (ctx->pc == 0x189C6Cu) {
        ctx->pc = 0x189C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C68u;
        // 0x189c6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C70u;
        goto label_189c70;
    }
    ctx->pc = 0x189C68u;
    {
        const bool branch_taken_0x189c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C68u;
        // 0x189c6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c68) {
            ctx->pc = 0x189CA4u;
            goto label_189ca4;
        }
    }
    ctx->pc = 0x189C70u;
label_189c70:
    // 0x189c70: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x189c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_189c74:
    // 0x189c74: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_189c78:
    if (ctx->pc == 0x189C78u) {
        ctx->pc = 0x189C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C74u;
        // 0x189c78: 0x2c81007f  sltiu       $at, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C7Cu;
        goto label_189c7c;
    }
    ctx->pc = 0x189C74u;
    {
        const bool branch_taken_0x189c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C74u;
        // 0x189c78: 0x2c81007f  sltiu       $at, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c74) {
            ctx->pc = 0x189C9Cu;
            goto label_189c9c;
        }
    }
    ctx->pc = 0x189C7Cu;
label_189c7c:
    // 0x189c7c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_189c80:
    if (ctx->pc == 0x189C80u) {
        ctx->pc = 0x189C84u;
        goto label_189c84;
    }
    ctx->pc = 0x189C7Cu;
    {
        const bool branch_taken_0x189c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189c7c) {
            ctx->pc = 0x189C9Cu;
            goto label_189c9c;
        }
    }
    ctx->pc = 0x189C84u;
label_189c84:
    // 0x189c84: 0xc045c30  jal         func_1170C0
label_189c88:
    if (ctx->pc == 0x189C88u) {
        ctx->pc = 0x189C8Cu;
        goto label_189c8c;
    }
    ctx->pc = 0x189C84u;
    SET_GPR_U32(ctx, 31, 0x189C8Cu);
    ctx->pc = 0x1170C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170C0u, 0x189C84u, 0x189C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C8Cu;
label_189c8c:
    // 0x189c8c: 0xc045c38  jal         func_1170E0
label_189c90:
    if (ctx->pc == 0x189C90u) {
        ctx->pc = 0x189C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C8Cu;
        // 0x189c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C94u;
        goto label_189c94;
    }
    ctx->pc = 0x189C8Cu;
    SET_GPR_U32(ctx, 31, 0x189C94u);
    ctx->pc = 0x189C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C8Cu;
    // 0x189c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170E0u, 0x189C8Cu, 0x189C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C94u;
label_189c94:
    // 0x189c94: 0xc045c58  jal         func_117160
label_189c98:
    if (ctx->pc == 0x189C98u) {
        ctx->pc = 0x189C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C94u;
        // 0x189c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189C9Cu;
        goto label_189c9c;
    }
    ctx->pc = 0x189C94u;
    SET_GPR_U32(ctx, 31, 0x189C9Cu);
    ctx->pc = 0x189C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C94u;
    // 0x189c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117160u, 0x189C94u, 0x189C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C9Cu;
label_189c9c:
    // 0x189c9c: 0x0  nop
    ctx->pc = 0x189c9cu;
    // NOP
label_189ca0:
    // 0x189ca0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x189ca0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_189ca4:
    // 0x189ca4: 0x0  nop
    ctx->pc = 0x189ca4u;
    // NOP
label_189ca8:
    // 0x189ca8: 0x8e870050  lw          $a3, 0x50($s4)
    ctx->pc = 0x189ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_189cac:
    // 0x189cac: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x189cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189cb0:
    // 0x189cb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_189cb4:
    // 0x189cb4: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x189cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189cb8:
    // 0x189cb8: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x189cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_189cbc:
    // 0x189cbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x189cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_189cc0:
    // 0x189cc0: 0x34660003  ori         $a2, $v1, 0x3
    ctx->pc = 0x189cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_189cc4:
    // 0x189cc4: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x189cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_189cc8:
    // 0x189cc8: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x189cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_189ccc:
    // 0x189ccc: 0x644825  or          $t1, $v1, $a0
    ctx->pc = 0x189cccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_189cd0:
    // 0x189cd0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x189cd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189cd4:
    // 0x189cd4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x189cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_189cd8:
    // 0x189cd8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x189cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_189cdc:
    // 0x189cdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x189cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_189ce0:
    // 0x189ce0: 0x34850003  ori         $a1, $a0, 0x3
    ctx->pc = 0x189ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_189ce4:
    // 0x189ce4: 0xffa900c0  sd          $t1, 0xC0($sp)
    ctx->pc = 0x189ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 9));
label_189ce8:
    // 0x189ce8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x189ce8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_189cec:
    // 0x189cec: 0xffa800c8  sd          $t0, 0xC8($sp)
    ctx->pc = 0x189cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 8));
label_189cf0:
    // 0x189cf0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x189cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_189cf4:
    // 0x189cf4: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189cf8:
    // 0x189cf8: 0x3c084180  lui         $t0, 0x4180
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16768 << 16));
label_189cfc:
    // 0x189cfc: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x189cfcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_189d00:
    // 0x189d00: 0x132580a  movz        $t3, $t1, $s2
    ctx->pc = 0x189d00u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 9));
label_189d04:
    // 0x189d04: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x189d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_189d08:
    // 0x189d08: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x189d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_189d0c:
    // 0x189d0c: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x189d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
label_189d10:
    // 0x189d10: 0x3c084380  lui         $t0, 0x4380
    ctx->pc = 0x189d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17280 << 16));
label_189d14:
    // 0x189d14: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x189d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_189d18:
    // 0x189d18: 0x240cfff0  addiu       $t4, $zero, -0x10
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_189d1c:
    // 0x189d1c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_189d20:
    // 0x189d20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_189d24:
    // 0x189d24: 0xfda60000  sd          $a2, 0x0($t5)
    ctx->pc = 0x189d24u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 6));
label_189d28:
    // 0x189d28: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x189d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_189d2c:
    // 0x189d2c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d30:
    // 0x189d30: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_189d34:
    // 0x189d34: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x189d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_189d38:
    // 0x189d38: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x189d38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
label_189d3c:
    // 0x189d3c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d40:
    // 0x189d40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189d40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189d44:
    // 0x189d44: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x189d44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
label_189d48:
    // 0x189d48: 0x7bab00c0  lq          $t3, 0xC0($sp)
    ctx->pc = 0x189d48u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_189d4c:
    // 0x189d4c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x189d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d50:
    // 0x189d50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189d50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189d54:
    // 0x189d54: 0x7d2b0010  sq          $t3, 0x10($t1)
    ctx->pc = 0x189d54u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 11));
label_189d58:
    // 0x189d58: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x189d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_189d5c:
    // 0x189d5c: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x189d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d60:
    // 0x189d60: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x189d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_189d64:
    // 0x189d64: 0xac2824  and         $a1, $a1, $t4
    ctx->pc = 0x189d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
label_189d68:
    // 0x189d68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x189d68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189d6c:
    // 0x189d6c: 0x24a57ff8  addiu       $a1, $a1, 0x7FF8
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32760));
label_189d70:
    // 0x189d70: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x189d70u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189d74:
    // 0x189d74: 0x12c3024  and         $a2, $t1, $t4
    ctx->pc = 0x189d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
label_189d78:
    // 0x189d78: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x189d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_189d7c:
    // 0x189d7c: 0xfd640020  sd          $a0, 0x20($t3)
    ctx->pc = 0x189d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 4));
label_189d80:
    // 0x189d80: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d84:
    // 0x189d84: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x189d84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
label_189d88:
    // 0x189d88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x189d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d8c:
    // 0x189d8c: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x189d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
label_189d90:
    // 0x189d90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x189d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d94:
    // 0x189d94: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x189d94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
label_189d98:
    // 0x189d98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x189d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_189d9c:
    // 0x189d9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x189d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_189da0:
    // 0x189da0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x189da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_189da4:
    // 0x189da4: 0xc6820040  lwc1        $f2, 0x40($s4)
    ctx->pc = 0x189da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189da8:
    // 0x189da8: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x189da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_189dac:
    // 0x189dac: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x189dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189db0:
    // 0x189db0: 0x8fa900d8  lw          $t1, 0xD8($sp)
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_189db4:
    // 0x189db4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x189db4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_189db8:
    // 0x189db8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_189dbc:
    // 0x189dbc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_189dc0:
    // 0x189dc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_189dc4:
    // 0x189dc4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x189dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_189dc8:
    // 0x189dc8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x189dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_189dcc:
    // 0x189dcc: 0xc045be0  jal         func_116F80
label_189dd0:
    if (ctx->pc == 0x189DD0u) {
        ctx->pc = 0x189DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DCCu;
        // 0x189dd0: 0x24c67ff8  addiu       $a2, $a2, 0x7FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189DD4u;
        goto label_189dd4;
    }
    ctx->pc = 0x189DCCu;
    SET_GPR_U32(ctx, 31, 0x189DD4u);
    ctx->pc = 0x189DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DCCu;
    // 0x189dd0: 0x24c67ff8  addiu       $a2, $a2, 0x7FF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F80u, 0x189DCCu, 0x189DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DD4u;
label_189dd4:
    // 0x189dd4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x189dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_189dd8:
    // 0x189dd8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x189dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_189ddc:
    // 0x189ddc: 0x52180a  movz        $v1, $v0, $s2
    ctx->pc = 0x189ddcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_189de0:
    // 0x189de0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x189de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_189de4:
    // 0x189de4: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x189de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_189de8:
    // 0x189de8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_189dec:
    // 0x189dec: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x189decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189df0:
    // 0x189df0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x189df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_189df4:
    // 0x189df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x189df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_189df8:
    // 0x189df8: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x189df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_189dfc:
    // 0x189dfc: 0x0  nop
    ctx->pc = 0x189dfcu;
    // NOP
label_189e00:
    // 0x189e00: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x189e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_189e04:
    // 0x189e04: 0x1440ff2d  bnez        $v0, . + 4 + (-0xD3 << 2)
label_189e08:
    if (ctx->pc == 0x189E08u) {
        ctx->pc = 0x189E0Cu;
        goto label_189e0c;
    }
    ctx->pc = 0x189E04u;
    {
        const bool branch_taken_0x189e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189e04) {
            ctx->pc = 0x189ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189abc;
        }
    }
    ctx->pc = 0x189E0Cu;
label_189e0c:
    // 0x189e0c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_189e10:
    // 0x189e10: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_189e14:
    if (ctx->pc == 0x189E14u) {
        ctx->pc = 0x189E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E10u;
        // 0x189e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E18u;
        goto label_189e18;
    }
    ctx->pc = 0x189E10u;
    {
        const bool branch_taken_0x189e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E10u;
        // 0x189e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e10) {
            ctx->pc = 0x189E58u;
            goto label_189e58;
        }
    }
    ctx->pc = 0x189E18u;
label_189e18:
    // 0x189e18: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
label_189e1c:
    // 0x189e1c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_189e20:
    // 0x189e20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_189e24:
    // 0x189e24: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189e28:
    // 0x189e28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189e2c:
    // 0x189e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189e30:
    if (ctx->pc == 0x189E30u) {
        ctx->pc = 0x189E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E2Cu;
        // 0x189e30: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E34u;
        goto label_189e34;
    }
    ctx->pc = 0x189E2Cu;
    {
        const bool branch_taken_0x189e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E2Cu;
        // 0x189e30: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e2c) {
            ctx->pc = 0x189E40u;
            goto label_189e40;
        }
    }
    ctx->pc = 0x189E34u;
label_189e34:
    // 0x189e34: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_189e38:
    // 0x189e38: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189e3c:
    // 0x189e3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189e40:
    // 0x189e40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189e44:
    if (ctx->pc == 0x189E44u) {
        ctx->pc = 0x189E48u;
        goto label_189e48;
    }
    ctx->pc = 0x189E40u;
    {
        const bool branch_taken_0x189e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e40) {
            ctx->pc = 0x189E54u;
            goto label_189e54;
        }
    }
    ctx->pc = 0x189E48u;
label_189e48:
    // 0x189e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189e4c:
    // 0x189e4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_189e50:
    // 0x189e50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189e54:
    // 0x189e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x189e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_189e58:
    // 0x189e58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_189e5c:
    if (ctx->pc == 0x189E5Cu) {
        ctx->pc = 0x189E60u;
        goto label_189e60;
    }
    ctx->pc = 0x189E58u;
    {
        const bool branch_taken_0x189e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e58) {
            ctx->pc = 0x189EC0u;
            goto label_189ec0;
        }
    }
    ctx->pc = 0x189E60u;
label_189e60:
    // 0x189e60: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_189e64:
    if (ctx->pc == 0x189E64u) {
        ctx->pc = 0x189E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E60u;
        // 0x189e64: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E68u;
        goto label_189e68;
    }
    ctx->pc = 0x189E60u;
    {
        const bool branch_taken_0x189e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E60u;
        // 0x189e64: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e60) {
            ctx->pc = 0x189EB0u;
            goto label_189eb0;
        }
    }
    ctx->pc = 0x189E68u;
label_189e68:
    // 0x189e68: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
label_189e6c:
    // 0x189e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_189e70:
    // 0x189e70: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189e74:
    // 0x189e74: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189e78:
    // 0x189e78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189e7c:
    if (ctx->pc == 0x189E7Cu) {
        ctx->pc = 0x189E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E78u;
        // 0x189e7c: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E80u;
        goto label_189e80;
    }
    ctx->pc = 0x189E78u;
    {
        const bool branch_taken_0x189e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E78u;
        // 0x189e7c: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e78) {
            ctx->pc = 0x189E8Cu;
            goto label_189e8c;
        }
    }
    ctx->pc = 0x189E80u;
label_189e80:
    // 0x189e80: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_189e84:
    // 0x189e84: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_189e88:
    // 0x189e88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189e8c:
    // 0x189e8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_189e90:
    if (ctx->pc == 0x189E90u) {
        ctx->pc = 0x189E94u;
        goto label_189e94;
    }
    ctx->pc = 0x189E8Cu;
    {
        const bool branch_taken_0x189e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e8c) {
            ctx->pc = 0x189EA0u;
            goto label_189ea0;
        }
    }
    ctx->pc = 0x189E94u;
label_189e94:
    // 0x189e94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_189e98:
    // 0x189e98: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_189e9c:
    // 0x189e9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_189ea0:
    // 0x189ea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_189ea4:
    if (ctx->pc == 0x189EA4u) {
        ctx->pc = 0x189EA8u;
        goto label_189ea8;
    }
    ctx->pc = 0x189EA0u;
    {
        const bool branch_taken_0x189ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ea0) {
            ctx->pc = 0x189EB0u;
            goto label_189eb0;
        }
    }
    ctx->pc = 0x189EA8u;
label_189ea8:
    // 0x189ea8: 0x10000003  b           . + 4 + (0x3 << 2)
label_189eac:
    if (ctx->pc == 0x189EACu) {
        ctx->pc = 0x189EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA8u;
        // 0x189eac: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EB0u;
        goto label_189eb0;
    }
    ctx->pc = 0x189EA8u;
    {
        const bool branch_taken_0x189ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA8u;
        // 0x189eac: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ea8) {
            ctx->pc = 0x189EB8u;
            goto label_189eb8;
        }
    }
    ctx->pc = 0x189EB0u;
label_189eb0:
    // 0x189eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189eb4:
    // 0x189eb4: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x189eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_189eb8:
    // 0x189eb8: 0xc06d118  jal         func_1B4460
label_189ebc:
    if (ctx->pc == 0x189EBCu) {
        ctx->pc = 0x189EC0u;
        goto label_189ec0;
    }
    ctx->pc = 0x189EB8u;
    SET_GPR_U32(ctx, 31, 0x189EC0u);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x189EB8u, 0x189EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EC0u;
label_189ec0:
    // 0x189ec0: 0xc04018c  jal         func_100630
label_189ec4:
    if (ctx->pc == 0x189EC4u) {
        ctx->pc = 0x189EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EC0u;
        // 0x189ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EC8u;
        goto label_189ec8;
    }
    ctx->pc = 0x189EC0u;
    SET_GPR_U32(ctx, 31, 0x189EC8u);
    ctx->pc = 0x189EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EC0u;
    // 0x189ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x189EC0u, 0x189EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EC8u;
label_189ec8:
    // 0x189ec8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x189ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_189ecc:
    // 0x189ecc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x189eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_189ed0:
    // 0x189ed0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x189ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_189ed4:
    // 0x189ed4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x189ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_189ed8:
    // 0x189ed8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x189ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_189edc:
    // 0x189edc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x189edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_189ee0:
    // 0x189ee0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189ee4:
    // 0x189ee4: 0x3e00008  jr          $ra
label_189ee8:
    if (ctx->pc == 0x189EE8u) {
        ctx->pc = 0x189EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EE4u;
        // 0x189ee8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EECu;
        goto label_fallthrough_0x189ee4;
    }
    ctx->pc = 0x189EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EE4u;
        // 0x189ee8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x189ee4:
    ctx->pc = 0x189EECu;
}
