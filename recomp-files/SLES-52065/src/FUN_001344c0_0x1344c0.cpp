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

// Function: FUN_001344c0
// Address: 0x1344c0 - 0x134cb0
void FUN_001344c0_0x1344c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001344c0_0x1344c0");
#endif

    switch (ctx->pc) {
        case 0x1344c0u: goto label_1344c0;
        case 0x1344c4u: goto label_1344c4;
        case 0x1344c8u: goto label_1344c8;
        case 0x1344ccu: goto label_1344cc;
        case 0x1344d0u: goto label_1344d0;
        case 0x1344d4u: goto label_1344d4;
        case 0x1344d8u: goto label_1344d8;
        case 0x1344dcu: goto label_1344dc;
        case 0x1344e0u: goto label_1344e0;
        case 0x1344e4u: goto label_1344e4;
        case 0x1344e8u: goto label_1344e8;
        case 0x1344ecu: goto label_1344ec;
        case 0x1344f0u: goto label_1344f0;
        case 0x1344f4u: goto label_1344f4;
        case 0x1344f8u: goto label_1344f8;
        case 0x1344fcu: goto label_1344fc;
        case 0x134500u: goto label_134500;
        case 0x134504u: goto label_134504;
        case 0x134508u: goto label_134508;
        case 0x13450cu: goto label_13450c;
        case 0x134510u: goto label_134510;
        case 0x134514u: goto label_134514;
        case 0x134518u: goto label_134518;
        case 0x13451cu: goto label_13451c;
        case 0x134520u: goto label_134520;
        case 0x134524u: goto label_134524;
        case 0x134528u: goto label_134528;
        case 0x13452cu: goto label_13452c;
        case 0x134530u: goto label_134530;
        case 0x134534u: goto label_134534;
        case 0x134538u: goto label_134538;
        case 0x13453cu: goto label_13453c;
        case 0x134540u: goto label_134540;
        case 0x134544u: goto label_134544;
        case 0x134548u: goto label_134548;
        case 0x13454cu: goto label_13454c;
        case 0x134550u: goto label_134550;
        case 0x134554u: goto label_134554;
        case 0x134558u: goto label_134558;
        case 0x13455cu: goto label_13455c;
        case 0x134560u: goto label_134560;
        case 0x134564u: goto label_134564;
        case 0x134568u: goto label_134568;
        case 0x13456cu: goto label_13456c;
        case 0x134570u: goto label_134570;
        case 0x134574u: goto label_134574;
        case 0x134578u: goto label_134578;
        case 0x13457cu: goto label_13457c;
        case 0x134580u: goto label_134580;
        case 0x134584u: goto label_134584;
        case 0x134588u: goto label_134588;
        case 0x13458cu: goto label_13458c;
        case 0x134590u: goto label_134590;
        case 0x134594u: goto label_134594;
        case 0x134598u: goto label_134598;
        case 0x13459cu: goto label_13459c;
        case 0x1345a0u: goto label_1345a0;
        case 0x1345a4u: goto label_1345a4;
        case 0x1345a8u: goto label_1345a8;
        case 0x1345acu: goto label_1345ac;
        case 0x1345b0u: goto label_1345b0;
        case 0x1345b4u: goto label_1345b4;
        case 0x1345b8u: goto label_1345b8;
        case 0x1345bcu: goto label_1345bc;
        case 0x1345c0u: goto label_1345c0;
        case 0x1345c4u: goto label_1345c4;
        case 0x1345c8u: goto label_1345c8;
        case 0x1345ccu: goto label_1345cc;
        case 0x1345d0u: goto label_1345d0;
        case 0x1345d4u: goto label_1345d4;
        case 0x1345d8u: goto label_1345d8;
        case 0x1345dcu: goto label_1345dc;
        case 0x1345e0u: goto label_1345e0;
        case 0x1345e4u: goto label_1345e4;
        case 0x1345e8u: goto label_1345e8;
        case 0x1345ecu: goto label_1345ec;
        case 0x1345f0u: goto label_1345f0;
        case 0x1345f4u: goto label_1345f4;
        case 0x1345f8u: goto label_1345f8;
        case 0x1345fcu: goto label_1345fc;
        case 0x134600u: goto label_134600;
        case 0x134604u: goto label_134604;
        case 0x134608u: goto label_134608;
        case 0x13460cu: goto label_13460c;
        case 0x134610u: goto label_134610;
        case 0x134614u: goto label_134614;
        case 0x134618u: goto label_134618;
        case 0x13461cu: goto label_13461c;
        case 0x134620u: goto label_134620;
        case 0x134624u: goto label_134624;
        case 0x134628u: goto label_134628;
        case 0x13462cu: goto label_13462c;
        case 0x134630u: goto label_134630;
        case 0x134634u: goto label_134634;
        case 0x134638u: goto label_134638;
        case 0x13463cu: goto label_13463c;
        case 0x134640u: goto label_134640;
        case 0x134644u: goto label_134644;
        case 0x134648u: goto label_134648;
        case 0x13464cu: goto label_13464c;
        case 0x134650u: goto label_134650;
        case 0x134654u: goto label_134654;
        case 0x134658u: goto label_134658;
        case 0x13465cu: goto label_13465c;
        case 0x134660u: goto label_134660;
        case 0x134664u: goto label_134664;
        case 0x134668u: goto label_134668;
        case 0x13466cu: goto label_13466c;
        case 0x134670u: goto label_134670;
        case 0x134674u: goto label_134674;
        case 0x134678u: goto label_134678;
        case 0x13467cu: goto label_13467c;
        case 0x134680u: goto label_134680;
        case 0x134684u: goto label_134684;
        case 0x134688u: goto label_134688;
        case 0x13468cu: goto label_13468c;
        case 0x134690u: goto label_134690;
        case 0x134694u: goto label_134694;
        case 0x134698u: goto label_134698;
        case 0x13469cu: goto label_13469c;
        case 0x1346a0u: goto label_1346a0;
        case 0x1346a4u: goto label_1346a4;
        case 0x1346a8u: goto label_1346a8;
        case 0x1346acu: goto label_1346ac;
        case 0x1346b0u: goto label_1346b0;
        case 0x1346b4u: goto label_1346b4;
        case 0x1346b8u: goto label_1346b8;
        case 0x1346bcu: goto label_1346bc;
        case 0x1346c0u: goto label_1346c0;
        case 0x1346c4u: goto label_1346c4;
        case 0x1346c8u: goto label_1346c8;
        case 0x1346ccu: goto label_1346cc;
        case 0x1346d0u: goto label_1346d0;
        case 0x1346d4u: goto label_1346d4;
        case 0x1346d8u: goto label_1346d8;
        case 0x1346dcu: goto label_1346dc;
        case 0x1346e0u: goto label_1346e0;
        case 0x1346e4u: goto label_1346e4;
        case 0x1346e8u: goto label_1346e8;
        case 0x1346ecu: goto label_1346ec;
        case 0x1346f0u: goto label_1346f0;
        case 0x1346f4u: goto label_1346f4;
        case 0x1346f8u: goto label_1346f8;
        case 0x1346fcu: goto label_1346fc;
        case 0x134700u: goto label_134700;
        case 0x134704u: goto label_134704;
        case 0x134708u: goto label_134708;
        case 0x13470cu: goto label_13470c;
        case 0x134710u: goto label_134710;
        case 0x134714u: goto label_134714;
        case 0x134718u: goto label_134718;
        case 0x13471cu: goto label_13471c;
        case 0x134720u: goto label_134720;
        case 0x134724u: goto label_134724;
        case 0x134728u: goto label_134728;
        case 0x13472cu: goto label_13472c;
        case 0x134730u: goto label_134730;
        case 0x134734u: goto label_134734;
        case 0x134738u: goto label_134738;
        case 0x13473cu: goto label_13473c;
        case 0x134740u: goto label_134740;
        case 0x134744u: goto label_134744;
        case 0x134748u: goto label_134748;
        case 0x13474cu: goto label_13474c;
        case 0x134750u: goto label_134750;
        case 0x134754u: goto label_134754;
        case 0x134758u: goto label_134758;
        case 0x13475cu: goto label_13475c;
        case 0x134760u: goto label_134760;
        case 0x134764u: goto label_134764;
        case 0x134768u: goto label_134768;
        case 0x13476cu: goto label_13476c;
        case 0x134770u: goto label_134770;
        case 0x134774u: goto label_134774;
        case 0x134778u: goto label_134778;
        case 0x13477cu: goto label_13477c;
        case 0x134780u: goto label_134780;
        case 0x134784u: goto label_134784;
        case 0x134788u: goto label_134788;
        case 0x13478cu: goto label_13478c;
        case 0x134790u: goto label_134790;
        case 0x134794u: goto label_134794;
        case 0x134798u: goto label_134798;
        case 0x13479cu: goto label_13479c;
        case 0x1347a0u: goto label_1347a0;
        case 0x1347a4u: goto label_1347a4;
        case 0x1347a8u: goto label_1347a8;
        case 0x1347acu: goto label_1347ac;
        case 0x1347b0u: goto label_1347b0;
        case 0x1347b4u: goto label_1347b4;
        case 0x1347b8u: goto label_1347b8;
        case 0x1347bcu: goto label_1347bc;
        case 0x1347c0u: goto label_1347c0;
        case 0x1347c4u: goto label_1347c4;
        case 0x1347c8u: goto label_1347c8;
        case 0x1347ccu: goto label_1347cc;
        case 0x1347d0u: goto label_1347d0;
        case 0x1347d4u: goto label_1347d4;
        case 0x1347d8u: goto label_1347d8;
        case 0x1347dcu: goto label_1347dc;
        case 0x1347e0u: goto label_1347e0;
        case 0x1347e4u: goto label_1347e4;
        case 0x1347e8u: goto label_1347e8;
        case 0x1347ecu: goto label_1347ec;
        case 0x1347f0u: goto label_1347f0;
        case 0x1347f4u: goto label_1347f4;
        case 0x1347f8u: goto label_1347f8;
        case 0x1347fcu: goto label_1347fc;
        case 0x134800u: goto label_134800;
        case 0x134804u: goto label_134804;
        case 0x134808u: goto label_134808;
        case 0x13480cu: goto label_13480c;
        case 0x134810u: goto label_134810;
        case 0x134814u: goto label_134814;
        case 0x134818u: goto label_134818;
        case 0x13481cu: goto label_13481c;
        case 0x134820u: goto label_134820;
        case 0x134824u: goto label_134824;
        case 0x134828u: goto label_134828;
        case 0x13482cu: goto label_13482c;
        case 0x134830u: goto label_134830;
        case 0x134834u: goto label_134834;
        case 0x134838u: goto label_134838;
        case 0x13483cu: goto label_13483c;
        case 0x134840u: goto label_134840;
        case 0x134844u: goto label_134844;
        case 0x134848u: goto label_134848;
        case 0x13484cu: goto label_13484c;
        case 0x134850u: goto label_134850;
        case 0x134854u: goto label_134854;
        case 0x134858u: goto label_134858;
        case 0x13485cu: goto label_13485c;
        case 0x134860u: goto label_134860;
        case 0x134864u: goto label_134864;
        case 0x134868u: goto label_134868;
        case 0x13486cu: goto label_13486c;
        case 0x134870u: goto label_134870;
        case 0x134874u: goto label_134874;
        case 0x134878u: goto label_134878;
        case 0x13487cu: goto label_13487c;
        case 0x134880u: goto label_134880;
        case 0x134884u: goto label_134884;
        case 0x134888u: goto label_134888;
        case 0x13488cu: goto label_13488c;
        case 0x134890u: goto label_134890;
        case 0x134894u: goto label_134894;
        case 0x134898u: goto label_134898;
        case 0x13489cu: goto label_13489c;
        case 0x1348a0u: goto label_1348a0;
        case 0x1348a4u: goto label_1348a4;
        case 0x1348a8u: goto label_1348a8;
        case 0x1348acu: goto label_1348ac;
        case 0x1348b0u: goto label_1348b0;
        case 0x1348b4u: goto label_1348b4;
        case 0x1348b8u: goto label_1348b8;
        case 0x1348bcu: goto label_1348bc;
        case 0x1348c0u: goto label_1348c0;
        case 0x1348c4u: goto label_1348c4;
        case 0x1348c8u: goto label_1348c8;
        case 0x1348ccu: goto label_1348cc;
        case 0x1348d0u: goto label_1348d0;
        case 0x1348d4u: goto label_1348d4;
        case 0x1348d8u: goto label_1348d8;
        case 0x1348dcu: goto label_1348dc;
        case 0x1348e0u: goto label_1348e0;
        case 0x1348e4u: goto label_1348e4;
        case 0x1348e8u: goto label_1348e8;
        case 0x1348ecu: goto label_1348ec;
        case 0x1348f0u: goto label_1348f0;
        case 0x1348f4u: goto label_1348f4;
        case 0x1348f8u: goto label_1348f8;
        case 0x1348fcu: goto label_1348fc;
        case 0x134900u: goto label_134900;
        case 0x134904u: goto label_134904;
        case 0x134908u: goto label_134908;
        case 0x13490cu: goto label_13490c;
        case 0x134910u: goto label_134910;
        case 0x134914u: goto label_134914;
        case 0x134918u: goto label_134918;
        case 0x13491cu: goto label_13491c;
        case 0x134920u: goto label_134920;
        case 0x134924u: goto label_134924;
        case 0x134928u: goto label_134928;
        case 0x13492cu: goto label_13492c;
        case 0x134930u: goto label_134930;
        case 0x134934u: goto label_134934;
        case 0x134938u: goto label_134938;
        case 0x13493cu: goto label_13493c;
        case 0x134940u: goto label_134940;
        case 0x134944u: goto label_134944;
        case 0x134948u: goto label_134948;
        case 0x13494cu: goto label_13494c;
        case 0x134950u: goto label_134950;
        case 0x134954u: goto label_134954;
        case 0x134958u: goto label_134958;
        case 0x13495cu: goto label_13495c;
        case 0x134960u: goto label_134960;
        case 0x134964u: goto label_134964;
        case 0x134968u: goto label_134968;
        case 0x13496cu: goto label_13496c;
        case 0x134970u: goto label_134970;
        case 0x134974u: goto label_134974;
        case 0x134978u: goto label_134978;
        case 0x13497cu: goto label_13497c;
        case 0x134980u: goto label_134980;
        case 0x134984u: goto label_134984;
        case 0x134988u: goto label_134988;
        case 0x13498cu: goto label_13498c;
        case 0x134990u: goto label_134990;
        case 0x134994u: goto label_134994;
        case 0x134998u: goto label_134998;
        case 0x13499cu: goto label_13499c;
        case 0x1349a0u: goto label_1349a0;
        case 0x1349a4u: goto label_1349a4;
        case 0x1349a8u: goto label_1349a8;
        case 0x1349acu: goto label_1349ac;
        case 0x1349b0u: goto label_1349b0;
        case 0x1349b4u: goto label_1349b4;
        case 0x1349b8u: goto label_1349b8;
        case 0x1349bcu: goto label_1349bc;
        case 0x1349c0u: goto label_1349c0;
        case 0x1349c4u: goto label_1349c4;
        case 0x1349c8u: goto label_1349c8;
        case 0x1349ccu: goto label_1349cc;
        case 0x1349d0u: goto label_1349d0;
        case 0x1349d4u: goto label_1349d4;
        case 0x1349d8u: goto label_1349d8;
        case 0x1349dcu: goto label_1349dc;
        case 0x1349e0u: goto label_1349e0;
        case 0x1349e4u: goto label_1349e4;
        case 0x1349e8u: goto label_1349e8;
        case 0x1349ecu: goto label_1349ec;
        case 0x1349f0u: goto label_1349f0;
        case 0x1349f4u: goto label_1349f4;
        case 0x1349f8u: goto label_1349f8;
        case 0x1349fcu: goto label_1349fc;
        case 0x134a00u: goto label_134a00;
        case 0x134a04u: goto label_134a04;
        case 0x134a08u: goto label_134a08;
        case 0x134a0cu: goto label_134a0c;
        case 0x134a10u: goto label_134a10;
        case 0x134a14u: goto label_134a14;
        case 0x134a18u: goto label_134a18;
        case 0x134a1cu: goto label_134a1c;
        case 0x134a20u: goto label_134a20;
        case 0x134a24u: goto label_134a24;
        case 0x134a28u: goto label_134a28;
        case 0x134a2cu: goto label_134a2c;
        case 0x134a30u: goto label_134a30;
        case 0x134a34u: goto label_134a34;
        case 0x134a38u: goto label_134a38;
        case 0x134a3cu: goto label_134a3c;
        case 0x134a40u: goto label_134a40;
        case 0x134a44u: goto label_134a44;
        case 0x134a48u: goto label_134a48;
        case 0x134a4cu: goto label_134a4c;
        case 0x134a50u: goto label_134a50;
        case 0x134a54u: goto label_134a54;
        case 0x134a58u: goto label_134a58;
        case 0x134a5cu: goto label_134a5c;
        case 0x134a60u: goto label_134a60;
        case 0x134a64u: goto label_134a64;
        case 0x134a68u: goto label_134a68;
        case 0x134a6cu: goto label_134a6c;
        case 0x134a70u: goto label_134a70;
        case 0x134a74u: goto label_134a74;
        case 0x134a78u: goto label_134a78;
        case 0x134a7cu: goto label_134a7c;
        case 0x134a80u: goto label_134a80;
        case 0x134a84u: goto label_134a84;
        case 0x134a88u: goto label_134a88;
        case 0x134a8cu: goto label_134a8c;
        case 0x134a90u: goto label_134a90;
        case 0x134a94u: goto label_134a94;
        case 0x134a98u: goto label_134a98;
        case 0x134a9cu: goto label_134a9c;
        case 0x134aa0u: goto label_134aa0;
        case 0x134aa4u: goto label_134aa4;
        case 0x134aa8u: goto label_134aa8;
        case 0x134aacu: goto label_134aac;
        case 0x134ab0u: goto label_134ab0;
        case 0x134ab4u: goto label_134ab4;
        case 0x134ab8u: goto label_134ab8;
        case 0x134abcu: goto label_134abc;
        case 0x134ac0u: goto label_134ac0;
        case 0x134ac4u: goto label_134ac4;
        case 0x134ac8u: goto label_134ac8;
        case 0x134accu: goto label_134acc;
        case 0x134ad0u: goto label_134ad0;
        case 0x134ad4u: goto label_134ad4;
        case 0x134ad8u: goto label_134ad8;
        case 0x134adcu: goto label_134adc;
        case 0x134ae0u: goto label_134ae0;
        case 0x134ae4u: goto label_134ae4;
        case 0x134ae8u: goto label_134ae8;
        case 0x134aecu: goto label_134aec;
        case 0x134af0u: goto label_134af0;
        case 0x134af4u: goto label_134af4;
        case 0x134af8u: goto label_134af8;
        case 0x134afcu: goto label_134afc;
        case 0x134b00u: goto label_134b00;
        case 0x134b04u: goto label_134b04;
        case 0x134b08u: goto label_134b08;
        case 0x134b0cu: goto label_134b0c;
        case 0x134b10u: goto label_134b10;
        case 0x134b14u: goto label_134b14;
        case 0x134b18u: goto label_134b18;
        case 0x134b1cu: goto label_134b1c;
        case 0x134b20u: goto label_134b20;
        case 0x134b24u: goto label_134b24;
        case 0x134b28u: goto label_134b28;
        case 0x134b2cu: goto label_134b2c;
        case 0x134b30u: goto label_134b30;
        case 0x134b34u: goto label_134b34;
        case 0x134b38u: goto label_134b38;
        case 0x134b3cu: goto label_134b3c;
        case 0x134b40u: goto label_134b40;
        case 0x134b44u: goto label_134b44;
        case 0x134b48u: goto label_134b48;
        case 0x134b4cu: goto label_134b4c;
        case 0x134b50u: goto label_134b50;
        case 0x134b54u: goto label_134b54;
        case 0x134b58u: goto label_134b58;
        case 0x134b5cu: goto label_134b5c;
        case 0x134b60u: goto label_134b60;
        case 0x134b64u: goto label_134b64;
        case 0x134b68u: goto label_134b68;
        case 0x134b6cu: goto label_134b6c;
        case 0x134b70u: goto label_134b70;
        case 0x134b74u: goto label_134b74;
        case 0x134b78u: goto label_134b78;
        case 0x134b7cu: goto label_134b7c;
        case 0x134b80u: goto label_134b80;
        case 0x134b84u: goto label_134b84;
        case 0x134b88u: goto label_134b88;
        case 0x134b8cu: goto label_134b8c;
        case 0x134b90u: goto label_134b90;
        case 0x134b94u: goto label_134b94;
        case 0x134b98u: goto label_134b98;
        case 0x134b9cu: goto label_134b9c;
        case 0x134ba0u: goto label_134ba0;
        case 0x134ba4u: goto label_134ba4;
        case 0x134ba8u: goto label_134ba8;
        case 0x134bacu: goto label_134bac;
        case 0x134bb0u: goto label_134bb0;
        case 0x134bb4u: goto label_134bb4;
        case 0x134bb8u: goto label_134bb8;
        case 0x134bbcu: goto label_134bbc;
        case 0x134bc0u: goto label_134bc0;
        case 0x134bc4u: goto label_134bc4;
        case 0x134bc8u: goto label_134bc8;
        case 0x134bccu: goto label_134bcc;
        case 0x134bd0u: goto label_134bd0;
        case 0x134bd4u: goto label_134bd4;
        case 0x134bd8u: goto label_134bd8;
        case 0x134bdcu: goto label_134bdc;
        case 0x134be0u: goto label_134be0;
        case 0x134be4u: goto label_134be4;
        case 0x134be8u: goto label_134be8;
        case 0x134becu: goto label_134bec;
        case 0x134bf0u: goto label_134bf0;
        case 0x134bf4u: goto label_134bf4;
        case 0x134bf8u: goto label_134bf8;
        case 0x134bfcu: goto label_134bfc;
        case 0x134c00u: goto label_134c00;
        case 0x134c04u: goto label_134c04;
        case 0x134c08u: goto label_134c08;
        case 0x134c0cu: goto label_134c0c;
        case 0x134c10u: goto label_134c10;
        case 0x134c14u: goto label_134c14;
        case 0x134c18u: goto label_134c18;
        case 0x134c1cu: goto label_134c1c;
        case 0x134c20u: goto label_134c20;
        case 0x134c24u: goto label_134c24;
        case 0x134c28u: goto label_134c28;
        case 0x134c2cu: goto label_134c2c;
        case 0x134c30u: goto label_134c30;
        case 0x134c34u: goto label_134c34;
        case 0x134c38u: goto label_134c38;
        case 0x134c3cu: goto label_134c3c;
        case 0x134c40u: goto label_134c40;
        case 0x134c44u: goto label_134c44;
        case 0x134c48u: goto label_134c48;
        case 0x134c4cu: goto label_134c4c;
        case 0x134c50u: goto label_134c50;
        case 0x134c54u: goto label_134c54;
        case 0x134c58u: goto label_134c58;
        case 0x134c5cu: goto label_134c5c;
        case 0x134c60u: goto label_134c60;
        case 0x134c64u: goto label_134c64;
        case 0x134c68u: goto label_134c68;
        case 0x134c6cu: goto label_134c6c;
        case 0x134c70u: goto label_134c70;
        case 0x134c74u: goto label_134c74;
        case 0x134c78u: goto label_134c78;
        case 0x134c7cu: goto label_134c7c;
        case 0x134c80u: goto label_134c80;
        case 0x134c84u: goto label_134c84;
        case 0x134c88u: goto label_134c88;
        case 0x134c8cu: goto label_134c8c;
        case 0x134c90u: goto label_134c90;
        case 0x134c94u: goto label_134c94;
        case 0x134c98u: goto label_134c98;
        case 0x134c9cu: goto label_134c9c;
        case 0x134ca0u: goto label_134ca0;
        case 0x134ca4u: goto label_134ca4;
        case 0x134ca8u: goto label_134ca8;
        case 0x134cacu: goto label_134cac;
        default: break;
    }

    ctx->pc = 0x1344c0u;

label_1344c0:
    // 0x1344c0: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_1344c4:
    // 0x1344c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1344c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1344c8:
    // 0x1344c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1344c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1344cc:
    // 0x1344cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1344ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1344d0:
    // 0x1344d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1344d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1344d4:
    // 0x1344d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1344d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1344d8:
    // 0x1344d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1344d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1344dc:
    // 0x1344dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1344dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1344e0:
    // 0x1344e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1344e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1344e4:
    // 0x1344e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1344e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1344e8:
    // 0x1344e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1344e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1344ec:
    // 0x1344ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1344ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1344f0:
    // 0x1344f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1344f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1344f4:
    // 0x1344f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1344f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1344f8:
    // 0x1344f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1344f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1344fc:
    // 0x1344fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1344fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_134500:
    // 0x134500: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_134504:
    // 0x134504: 0x27a403f4  addiu       $a0, $sp, 0x3F4
    ctx->pc = 0x134504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1012));
label_134508:
    // 0x134508: 0xc07fdfe  jal         func_1FF7F8
label_13450c:
    if (ctx->pc == 0x13450Cu) {
        ctx->pc = 0x13450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134508u;
        // 0x13450c: 0xafa003f8  sw          $zero, 0x3F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134510u;
        goto label_134510;
    }
    ctx->pc = 0x134508u;
    SET_GPR_U32(ctx, 31, 0x134510u);
    ctx->pc = 0x13450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134508u;
    // 0x13450c: 0xafa003f8  sw          $zero, 0x3F8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134508u, 0x134510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134510u;
label_134510:
    // 0x134510: 0x27a403ec  addiu       $a0, $sp, 0x3EC
    ctx->pc = 0x134510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1004));
label_134514:
    // 0x134514: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x134514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_134518:
    // 0x134518: 0xc07fdfe  jal         func_1FF7F8
label_13451c:
    if (ctx->pc == 0x13451Cu) {
        ctx->pc = 0x13451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134518u;
        // 0x13451c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134520u;
        goto label_134520;
    }
    ctx->pc = 0x134518u;
    SET_GPR_U32(ctx, 31, 0x134520u);
    ctx->pc = 0x13451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134518u;
    // 0x13451c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134518u, 0x134520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134520u;
label_134520:
    // 0x134520: 0x2644009c  addiu       $a0, $s2, 0x9C
    ctx->pc = 0x134520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
label_134524:
    // 0x134524: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x134524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_134528:
    // 0x134528: 0xc07fdfe  jal         func_1FF7F8
label_13452c:
    if (ctx->pc == 0x13452Cu) {
        ctx->pc = 0x13452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134528u;
        // 0x13452c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134530u;
        goto label_134530;
    }
    ctx->pc = 0x134528u;
    SET_GPR_U32(ctx, 31, 0x134530u);
    ctx->pc = 0x13452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134528u;
    // 0x13452c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134528u, 0x134530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134530u;
label_134530:
    // 0x134530: 0x27a403e8  addiu       $a0, $sp, 0x3E8
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_134534:
    // 0x134534: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x134534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_134538:
    // 0x134538: 0xc07fdfe  jal         func_1FF7F8
label_13453c:
    if (ctx->pc == 0x13453Cu) {
        ctx->pc = 0x13453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134538u;
        // 0x13453c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134540u;
        goto label_134540;
    }
    ctx->pc = 0x134538u;
    SET_GPR_U32(ctx, 31, 0x134540u);
    ctx->pc = 0x13453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134538u;
    // 0x13453c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134538u, 0x134540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134540u;
label_134540:
    // 0x134540: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x134540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_134544:
    // 0x134544: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x134544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_134548:
    // 0x134548: 0xc07fdfe  jal         func_1FF7F8
label_13454c:
    if (ctx->pc == 0x13454Cu) {
        ctx->pc = 0x13454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134548u;
        // 0x13454c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134550u;
        goto label_134550;
    }
    ctx->pc = 0x134548u;
    SET_GPR_U32(ctx, 31, 0x134550u);
    ctx->pc = 0x13454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134548u;
    // 0x13454c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134548u, 0x134550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134550u;
label_134550:
    // 0x134550: 0x2644008c  addiu       $a0, $s2, 0x8C
    ctx->pc = 0x134550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
label_134554:
    // 0x134554: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x134554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_134558:
    // 0x134558: 0xc07fdfe  jal         func_1FF7F8
label_13455c:
    if (ctx->pc == 0x13455Cu) {
        ctx->pc = 0x13455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134558u;
        // 0x13455c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134560u;
        goto label_134560;
    }
    ctx->pc = 0x134558u;
    SET_GPR_U32(ctx, 31, 0x134560u);
    ctx->pc = 0x13455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134558u;
    // 0x13455c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134558u, 0x134560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134560u;
label_134560:
    // 0x134560: 0x27a403f8  addiu       $a0, $sp, 0x3F8
    ctx->pc = 0x134560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
label_134564:
    // 0x134564: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x134564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_134568:
    // 0x134568: 0xc07fdfe  jal         func_1FF7F8
label_13456c:
    if (ctx->pc == 0x13456Cu) {
        ctx->pc = 0x13456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134568u;
        // 0x13456c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134570u;
        goto label_134570;
    }
    ctx->pc = 0x134568u;
    SET_GPR_U32(ctx, 31, 0x134570u);
    ctx->pc = 0x13456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134568u;
    // 0x13456c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x134568u, 0x134570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134570u;
label_134570:
    // 0x134570: 0x8fa303f8  lw          $v1, 0x3F8($sp)
    ctx->pc = 0x134570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
label_134574:
    // 0x134574: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x134574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_134578:
    // 0x134578: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13457c:
    if (ctx->pc == 0x13457Cu) {
        ctx->pc = 0x13457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134578u;
        // 0x13457c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x134580u;
        goto label_134580;
    }
    ctx->pc = 0x134578u;
    {
        const bool branch_taken_0x134578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134578u;
        // 0x13457c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134578) {
            ctx->pc = 0x134584u;
            goto label_134584;
        }
    }
    ctx->pc = 0x134580u;
label_134580:
    // 0x134580: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134584:
    // 0x134584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_134588:
    if (ctx->pc == 0x134588u) {
        ctx->pc = 0x13458Cu;
        goto label_13458c;
    }
    ctx->pc = 0x134584u;
    {
        const bool branch_taken_0x134584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134584) {
            ctx->pc = 0x134594u;
            goto label_134594;
        }
    }
    ctx->pc = 0x13458Cu;
label_13458c:
    // 0x13458c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13458cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134590:
    // 0x134590: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x134590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134594:
    // 0x134594: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x134594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_134598:
    // 0x134598: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_13459c:
    // 0x13459c: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x13459cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_1345a0:
    // 0x1345a0: 0x24a5ee80  addiu       $a1, $a1, -0x1180
    ctx->pc = 0x1345a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
label_1345a4:
    // 0x1345a4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1345a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1345a8:
    // 0x1345a8: 0xc080874  jal         func_2021D0
label_1345ac:
    if (ctx->pc == 0x1345ACu) {
        ctx->pc = 0x1345ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345A8u;
        // 0x1345ac: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1345B0u;
        goto label_1345b0;
    }
    ctx->pc = 0x1345A8u;
    SET_GPR_U32(ctx, 31, 0x1345B0u);
    ctx->pc = 0x1345ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345A8u;
    // 0x1345ac: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1345A8u, 0x1345B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345B0u;
label_1345b0:
    // 0x1345b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1345b4:
    if (ctx->pc == 0x1345B4u) {
        ctx->pc = 0x1345B8u;
        goto label_1345b8;
    }
    ctx->pc = 0x1345B0u;
    {
        const bool branch_taken_0x1345b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345b0) {
            ctx->pc = 0x1345C4u;
            goto label_1345c4;
        }
    }
    ctx->pc = 0x1345B8u;
label_1345b8:
    // 0x1345b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1345bc:
    // 0x1345bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1345c0:
    if (ctx->pc == 0x1345C0u) {
        ctx->pc = 0x1345C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345BCu;
        // 0x1345c0: 0xa2420090  sb          $v0, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1345C4u;
        goto label_1345c4;
    }
    ctx->pc = 0x1345BCu;
    {
        const bool branch_taken_0x1345bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345BCu;
        // 0x1345c0: 0xa2420090  sb          $v0, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345bc) {
            ctx->pc = 0x1345C8u;
            goto label_1345c8;
        }
    }
    ctx->pc = 0x1345C4u;
label_1345c4:
    // 0x1345c4: 0xa2400090  sb          $zero, 0x90($s2)
    ctx->pc = 0x1345c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 0));
label_1345c8:
    // 0x1345c8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1345c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1345cc:
    // 0x1345cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1345ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1345d0:
    // 0x1345d0: 0xc080874  jal         func_2021D0
label_1345d4:
    if (ctx->pc == 0x1345D4u) {
        ctx->pc = 0x1345D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345D0u;
        // 0x1345d4: 0x24a5ee88  addiu       $a1, $a1, -0x1178 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1345D8u;
        goto label_1345d8;
    }
    ctx->pc = 0x1345D0u;
    SET_GPR_U32(ctx, 31, 0x1345D8u);
    ctx->pc = 0x1345D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345D0u;
    // 0x1345d4: 0x24a5ee88  addiu       $a1, $a1, -0x1178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1345D0u, 0x1345D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345D8u;
label_1345d8:
    // 0x1345d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1345dc:
    if (ctx->pc == 0x1345DCu) {
        ctx->pc = 0x1345E0u;
        goto label_1345e0;
    }
    ctx->pc = 0x1345D8u;
    {
        const bool branch_taken_0x1345d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345d8) {
            ctx->pc = 0x1345F0u;
            goto label_1345f0;
        }
    }
    ctx->pc = 0x1345E0u;
label_1345e0:
    // 0x1345e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1345e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1345e4:
    // 0x1345e4: 0xa2420091  sb          $v0, 0x91($s2)
    ctx->pc = 0x1345e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 145), (uint8_t)GPR_U32(ctx, 2));
label_1345e8:
    // 0x1345e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1345ec:
    if (ctx->pc == 0x1345ECu) {
        ctx->pc = 0x1345ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345E8u;
        // 0x1345ec: 0xa2420090  sb          $v0, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1345F0u;
        goto label_1345f0;
    }
    ctx->pc = 0x1345E8u;
    {
        const bool branch_taken_0x1345e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345E8u;
        // 0x1345ec: 0xa2420090  sb          $v0, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345e8) {
            ctx->pc = 0x1345F4u;
            goto label_1345f4;
        }
    }
    ctx->pc = 0x1345F0u;
label_1345f0:
    // 0x1345f0: 0xa2400091  sb          $zero, 0x91($s2)
    ctx->pc = 0x1345f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 145), (uint8_t)GPR_U32(ctx, 0));
label_1345f4:
    // 0x1345f4: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1345f8:
    // 0x1345f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1345f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1345fc:
    // 0x1345fc: 0xc080874  jal         func_2021D0
label_134600:
    if (ctx->pc == 0x134600u) {
        ctx->pc = 0x134600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345FCu;
        // 0x134600: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134604u;
        goto label_134604;
    }
    ctx->pc = 0x1345FCu;
    SET_GPR_U32(ctx, 31, 0x134604u);
    ctx->pc = 0x134600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345FCu;
    // 0x134600: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1345FCu, 0x134604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134604u;
label_134604:
    // 0x134604: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_134608:
    if (ctx->pc == 0x134608u) {
        ctx->pc = 0x13460Cu;
        goto label_13460c;
    }
    ctx->pc = 0x134604u;
    {
        const bool branch_taken_0x134604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134604) {
            ctx->pc = 0x134618u;
            goto label_134618;
        }
    }
    ctx->pc = 0x13460Cu;
label_13460c:
    // 0x13460c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134610:
    // 0x134610: 0x10000002  b           . + 4 + (0x2 << 2)
label_134614:
    if (ctx->pc == 0x134614u) {
        ctx->pc = 0x134614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134610u;
        // 0x134614: 0xa2420092  sb          $v0, 0x92($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 146), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134618u;
        goto label_134618;
    }
    ctx->pc = 0x134610u;
    {
        const bool branch_taken_0x134610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134610u;
        // 0x134614: 0xa2420092  sb          $v0, 0x92($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 146), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134610) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x134618u;
label_134618:
    // 0x134618: 0xa2400092  sb          $zero, 0x92($s2)
    ctx->pc = 0x134618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 146), (uint8_t)GPR_U32(ctx, 0));
label_13461c:
    // 0x13461c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x13461cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134620:
    // 0x134620: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134624:
    // 0x134624: 0xc080874  jal         func_2021D0
label_134628:
    if (ctx->pc == 0x134628u) {
        ctx->pc = 0x134628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134624u;
        // 0x134628: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13462Cu;
        goto label_13462c;
    }
    ctx->pc = 0x134624u;
    SET_GPR_U32(ctx, 31, 0x13462Cu);
    ctx->pc = 0x134628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134624u;
    // 0x134628: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134624u, 0x13462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13462Cu;
label_13462c:
    // 0x13462c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134630:
    // 0x134630: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_134634:
    if (ctx->pc == 0x134634u) {
        ctx->pc = 0x134634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134630u;
        // 0x134634: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134638u;
        goto label_134638;
    }
    ctx->pc = 0x134630u;
    {
        const bool branch_taken_0x134630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134630u;
        // 0x134634: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134630) {
            ctx->pc = 0x13466Cu;
            goto label_13466c;
        }
    }
    ctx->pc = 0x134638u;
label_134638:
    // 0x134638: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x134638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_13463c:
    // 0x13463c: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
label_134640:
    // 0x134640: 0xc0805e6  jal         func_201798
label_134644:
    if (ctx->pc == 0x134644u) {
        ctx->pc = 0x134644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134640u;
        // 0x134644: 0x27a603fc  addiu       $a2, $sp, 0x3FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134648u;
        goto label_134648;
    }
    ctx->pc = 0x134640u;
    SET_GPR_U32(ctx, 31, 0x134648u);
    ctx->pc = 0x134644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134640u;
    // 0x134644: 0x27a603fc  addiu       $a2, $sp, 0x3FC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x134640u, 0x134648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134648u;
label_134648:
    // 0x134648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13464c:
    // 0x13464c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_134650:
    if (ctx->pc == 0x134650u) {
        ctx->pc = 0x134654u;
        goto label_134654;
    }
    ctx->pc = 0x13464Cu;
    {
        const bool branch_taken_0x13464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13464c) {
            ctx->pc = 0x13466Cu;
            goto label_13466c;
        }
    }
    ctx->pc = 0x134654u;
label_134654:
    // 0x134654: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134658:
    // 0x134658: 0x8fa603fc  lw          $a2, 0x3FC($sp)
    ctx->pc = 0x134658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
label_13465c:
    // 0x13465c: 0xc04f858  jal         func_13E160
label_134660:
    if (ctx->pc == 0x134660u) {
        ctx->pc = 0x134660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13465Cu;
        // 0x134660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134664u;
        goto label_134664;
    }
    ctx->pc = 0x13465Cu;
    SET_GPR_U32(ctx, 31, 0x134664u);
    ctx->pc = 0x134660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13465Cu;
    // 0x134660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E160u, 0x13465Cu, 0x134664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134664u;
label_134664:
    // 0x134664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134668:
    // 0x134668: 0xa2420093  sb          $v0, 0x93($s2)
    ctx->pc = 0x134668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 147), (uint8_t)GPR_U32(ctx, 2));
label_13466c:
    // 0x13466c: 0x8fa203ec  lw          $v0, 0x3EC($sp)
    ctx->pc = 0x13466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
label_134670:
    // 0x134670: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_134674:
    if (ctx->pc == 0x134674u) {
        ctx->pc = 0x134674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134670u;
        // 0x134674: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134678u;
        goto label_134678;
    }
    ctx->pc = 0x134670u;
    {
        const bool branch_taken_0x134670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134670u;
        // 0x134674: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134670) {
            ctx->pc = 0x1346BCu;
            goto label_1346bc;
        }
    }
    ctx->pc = 0x134678u;
label_134678:
    // 0x134678: 0xc0401bc  jal         func_1006F0
label_13467c:
    if (ctx->pc == 0x13467Cu) {
        ctx->pc = 0x13467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134678u;
        // 0x13467c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134680u;
        goto label_134680;
    }
    ctx->pc = 0x134678u;
    SET_GPR_U32(ctx, 31, 0x134680u);
    ctx->pc = 0x13467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134678u;
    // 0x13467c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x134678u, 0x134680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134680u;
label_134680:
    // 0x134680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134684:
    // 0x134684: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_134688:
    if (ctx->pc == 0x134688u) {
        ctx->pc = 0x134688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134684u;
        // 0x134688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13468Cu;
        goto label_13468c;
    }
    ctx->pc = 0x134684u;
    {
        const bool branch_taken_0x134684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134684u;
        // 0x134688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134684) {
            ctx->pc = 0x134698u;
            goto label_134698;
        }
    }
    ctx->pc = 0x13468Cu;
label_13468c:
    // 0x13468c: 0xc05063c  jal         func_1418F0
label_134690:
    if (ctx->pc == 0x134690u) {
        ctx->pc = 0x134694u;
        goto label_134694;
    }
    ctx->pc = 0x13468Cu;
    SET_GPR_U32(ctx, 31, 0x134694u);
    ctx->pc = 0x1418F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418F0u, 0x13468Cu, 0x134694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134694u;
label_134694:
    // 0x134694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134698:
    // 0x134698: 0x8fa603ec  lw          $a2, 0x3EC($sp)
    ctx->pc = 0x134698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
label_13469c:
    // 0x13469c: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x13469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1346a0:
    // 0x1346a0: 0xc0507d0  jal         func_141F40
label_1346a4:
    if (ctx->pc == 0x1346A4u) {
        ctx->pc = 0x1346A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346A0u;
        // 0x1346a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1346A8u;
        goto label_1346a8;
    }
    ctx->pc = 0x1346A0u;
    SET_GPR_U32(ctx, 31, 0x1346A8u);
    ctx->pc = 0x1346A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346A0u;
    // 0x1346a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141F40u, 0x1346A0u, 0x1346A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346A8u;
label_1346a8:
    // 0x1346a8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1346a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1346ac:
    // 0x1346ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1346acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1346b0:
    // 0x1346b0: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1346b4:
    // 0x1346b4: 0xc050784  jal         func_141E10
label_1346b8:
    if (ctx->pc == 0x1346B8u) {
        ctx->pc = 0x1346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346B4u;
        // 0x1346b8: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1346BCu;
        goto label_1346bc;
    }
    ctx->pc = 0x1346B4u;
    SET_GPR_U32(ctx, 31, 0x1346BCu);
    ctx->pc = 0x1346B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346B4u;
    // 0x1346b8: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E10u, 0x1346B4u, 0x1346BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346BCu;
label_1346bc:
    // 0x1346bc: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x1346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_1346c0:
    // 0x1346c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1346c4:
    if (ctx->pc == 0x1346C4u) {
        ctx->pc = 0x1346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346C0u;
        // 0x1346c4: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1346C8u;
        goto label_1346c8;
    }
    ctx->pc = 0x1346C0u;
    {
        const bool branch_taken_0x1346c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346C0u;
        // 0x1346c4: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346c0) {
            ctx->pc = 0x134700u;
            goto label_134700;
        }
    }
    ctx->pc = 0x1346C8u;
label_1346c8:
    // 0x1346c8: 0xc0401bc  jal         func_1006F0
label_1346cc:
    if (ctx->pc == 0x1346CCu) {
        ctx->pc = 0x1346D0u;
        goto label_1346d0;
    }
    ctx->pc = 0x1346C8u;
    SET_GPR_U32(ctx, 31, 0x1346D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1346C8u, 0x1346D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346D0u;
label_1346d0:
    // 0x1346d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1346d4:
    if (ctx->pc == 0x1346D4u) {
        ctx->pc = 0x1346D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346D0u;
        // 0x1346d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1346D8u;
        goto label_1346d8;
    }
    ctx->pc = 0x1346D0u;
    {
        const bool branch_taken_0x1346d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346D0u;
        // 0x1346d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346d0) {
            ctx->pc = 0x1346E0u;
            goto label_1346e0;
        }
    }
    ctx->pc = 0x1346D8u;
label_1346d8:
    // 0x1346d8: 0xc05f490  jal         func_17D240
label_1346dc:
    if (ctx->pc == 0x1346DCu) {
        ctx->pc = 0x1346E0u;
        goto label_1346e0;
    }
    ctx->pc = 0x1346D8u;
    SET_GPR_U32(ctx, 31, 0x1346E0u);
    ctx->pc = 0x17D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D240u, 0x1346D8u, 0x1346E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346E0u;
label_1346e0:
    // 0x1346e0: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x1346e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
label_1346e4:
    // 0x1346e4: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x1346e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_1346e8:
    // 0x1346e8: 0xc05f4cc  jal         func_17D330
label_1346ec:
    if (ctx->pc == 0x1346ECu) {
        ctx->pc = 0x1346ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346E8u;
        // 0x1346ec: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1346F0u;
        goto label_1346f0;
    }
    ctx->pc = 0x1346E8u;
    SET_GPR_U32(ctx, 31, 0x1346F0u);
    ctx->pc = 0x1346ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346E8u;
    // 0x1346ec: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x1346E8u, 0x1346F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346F0u;
label_1346f0:
    // 0x1346f0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1346f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1346f4:
    // 0x1346f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1346f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1346f8:
    // 0x1346f8: 0xc04f344  jal         func_13CD10
label_1346fc:
    if (ctx->pc == 0x1346FCu) {
        ctx->pc = 0x1346FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346F8u;
        // 0x1346fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134700u;
        goto label_134700;
    }
    ctx->pc = 0x1346F8u;
    SET_GPR_U32(ctx, 31, 0x134700u);
    ctx->pc = 0x1346FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346F8u;
    // 0x1346fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD10u, 0x1346F8u, 0x134700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134700u;
label_134700:
    // 0x134700: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x134700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_134704:
    // 0x134704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_134708:
    if (ctx->pc == 0x134708u) {
        ctx->pc = 0x134708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134704u;
        // 0x134708: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13470Cu;
        goto label_13470c;
    }
    ctx->pc = 0x134704u;
    {
        const bool branch_taken_0x134704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134704u;
        // 0x134708: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134704) {
            ctx->pc = 0x134718u;
            goto label_134718;
        }
    }
    ctx->pc = 0x13470Cu;
label_13470c:
    // 0x13470c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x13470cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_134710:
    // 0x134710: 0x10000002  b           . + 4 + (0x2 << 2)
label_134714:
    if (ctx->pc == 0x134714u) {
        ctx->pc = 0x134714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134710u;
        // 0x134714: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134718u;
        goto label_134718;
    }
    ctx->pc = 0x134710u;
    {
        const bool branch_taken_0x134710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134710u;
        // 0x134714: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134710) {
            ctx->pc = 0x13471Cu;
            goto label_13471c;
        }
    }
    ctx->pc = 0x134718u;
label_134718:
    // 0x134718: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x134718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_13471c:
    // 0x13471c: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x13471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_134720:
    // 0x134720: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_134724:
    if (ctx->pc == 0x134724u) {
        ctx->pc = 0x134728u;
        goto label_134728;
    }
    ctx->pc = 0x134720u;
    {
        const bool branch_taken_0x134720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134720) {
            ctx->pc = 0x1348A0u;
            goto label_1348a0;
        }
    }
    ctx->pc = 0x134728u;
label_134728:
    // 0x134728: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x134728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_13472c:
    // 0x13472c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13472cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134730:
    // 0x134730: 0x24a5eeb0  addiu       $a1, $a1, -0x1150
    ctx->pc = 0x134730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
label_134734:
    // 0x134734: 0x14f02b  sltu        $fp, $zero, $s4
    ctx->pc = 0x134734u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_134738:
    // 0x134738: 0xc080874  jal         func_2021D0
label_13473c:
    if (ctx->pc == 0x13473Cu) {
        ctx->pc = 0x13473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134738u;
        // 0x13473c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134740u;
        goto label_134740;
    }
    ctx->pc = 0x134738u;
    SET_GPR_U32(ctx, 31, 0x134740u);
    ctx->pc = 0x13473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134738u;
    // 0x13473c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134738u, 0x134740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134740u;
label_134740:
    // 0x134740: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134744:
    // 0x134744: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_134748:
    if (ctx->pc == 0x134748u) {
        ctx->pc = 0x134748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134744u;
        // 0x134748: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13474Cu;
        goto label_13474c;
    }
    ctx->pc = 0x134744u;
    {
        const bool branch_taken_0x134744 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x134748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134744u;
        // 0x134748: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134744) {
            ctx->pc = 0x13475Cu;
            goto label_13475c;
        }
    }
    ctx->pc = 0x13474Cu;
label_13474c:
    // 0x13474c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x13474cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_134750:
    // 0x134750: 0xc080748  jal         func_201D20
label_134754:
    if (ctx->pc == 0x134754u) {
        ctx->pc = 0x134754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134750u;
        // 0x134754: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134758u;
        goto label_134758;
    }
    ctx->pc = 0x134750u;
    SET_GPR_U32(ctx, 31, 0x134758u);
    ctx->pc = 0x134754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134750u;
    // 0x134754: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x134750u, 0x134758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134758u;
label_134758:
    // 0x134758: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_13475c:
    // 0x13475c: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_134760:
    if (ctx->pc == 0x134760u) {
        ctx->pc = 0x134760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13475Cu;
        // 0x134760: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134764u;
        goto label_134764;
    }
    ctx->pc = 0x13475Cu;
    {
        const bool branch_taken_0x13475c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x134760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13475Cu;
        // 0x134760: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13475c) {
            ctx->pc = 0x134788u;
            goto label_134788;
        }
    }
    ctx->pc = 0x134764u;
label_134764:
    // 0x134764: 0xc0401bc  jal         func_1006F0
label_134768:
    if (ctx->pc == 0x134768u) {
        ctx->pc = 0x13476Cu;
        goto label_13476c;
    }
    ctx->pc = 0x134764u;
    SET_GPR_U32(ctx, 31, 0x13476Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x134764u, 0x13476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13476Cu;
label_13476c:
    // 0x13476c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_134770:
    if (ctx->pc == 0x134770u) {
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134774u;
        goto label_134774;
    }
    ctx->pc = 0x13476Cu;
    {
        const bool branch_taken_0x13476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13476c) {
            ctx->pc = 0x134780u;
            goto label_134780;
        }
    }
    ctx->pc = 0x134774u;
label_134774:
    // 0x134774: 0xc0544f0  jal         func_1513C0
label_134778:
    if (ctx->pc == 0x134778u) {
        ctx->pc = 0x134778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134774u;
        // 0x134778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13477Cu;
        goto label_13477c;
    }
    ctx->pc = 0x134774u;
    SET_GPR_U32(ctx, 31, 0x13477Cu);
    ctx->pc = 0x134778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134774u;
    // 0x134778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1513C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1513C0u, 0x134774u, 0x13477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13477Cu;
label_13477c:
    // 0x13477c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13477cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134780:
    // 0x134780: 0x1000002a  b           . + 4 + (0x2A << 2)
label_134784:
    if (ctx->pc == 0x134784u) {
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0xae920008  sw          $s2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134788u;
        goto label_134788;
    }
    ctx->pc = 0x134780u;
    {
        const bool branch_taken_0x134780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0xae920008  sw          $s2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134780) {
            ctx->pc = 0x13482Cu;
            goto label_13482c;
        }
    }
    ctx->pc = 0x134788u;
label_134788:
    // 0x134788: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
label_13478c:
    if (ctx->pc == 0x13478Cu) {
        ctx->pc = 0x13478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134788u;
        // 0x13478c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134790u;
        goto label_134790;
    }
    ctx->pc = 0x134788u;
    {
        const bool branch_taken_0x134788 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134788u;
        // 0x13478c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134788) {
            ctx->pc = 0x13480Cu;
            goto label_13480c;
        }
    }
    ctx->pc = 0x134790u;
label_134790:
    // 0x134790: 0x8f8285e0  lw          $v0, -0x7A20($gp)
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_134794:
    // 0x134794: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_134798:
    if (ctx->pc == 0x134798u) {
        ctx->pc = 0x134798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134794u;
        // 0x134798: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13479Cu;
        goto label_13479c;
    }
    ctx->pc = 0x134794u;
    {
        const bool branch_taken_0x134794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134794u;
        // 0x134798: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134794) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x13479Cu;
label_13479c:
    // 0x13479c: 0xc0401bc  jal         func_1006F0
label_1347a0:
    if (ctx->pc == 0x1347A0u) {
        ctx->pc = 0x1347A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13479Cu;
        // 0x1347a0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347A4u;
        goto label_1347a4;
    }
    ctx->pc = 0x13479Cu;
    SET_GPR_U32(ctx, 31, 0x1347A4u);
    ctx->pc = 0x1347A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13479Cu;
    // 0x1347a0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13479Cu, 0x1347A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347A4u;
label_1347a4:
    // 0x1347a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1347a8:
    if (ctx->pc == 0x1347A8u) {
        ctx->pc = 0x1347A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347A4u;
        // 0x1347a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347ACu;
        goto label_1347ac;
    }
    ctx->pc = 0x1347A4u;
    {
        const bool branch_taken_0x1347a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347A4u;
        // 0x1347a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347a4) {
            ctx->pc = 0x1347B8u;
            goto label_1347b8;
        }
    }
    ctx->pc = 0x1347ACu;
label_1347ac:
    // 0x1347ac: 0xc0541a0  jal         func_150680
label_1347b0:
    if (ctx->pc == 0x1347B0u) {
        ctx->pc = 0x1347B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347ACu;
        // 0x1347b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347B4u;
        goto label_1347b4;
    }
    ctx->pc = 0x1347ACu;
    SET_GPR_U32(ctx, 31, 0x1347B4u);
    ctx->pc = 0x1347B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347ACu;
    // 0x1347b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150680u, 0x1347ACu, 0x1347B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347B4u;
label_1347b4:
    // 0x1347b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1347b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1347b8:
    // 0x1347b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1347bc:
    if (ctx->pc == 0x1347BCu) {
        ctx->pc = 0x1347BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B8u;
        // 0x1347bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347C0u;
        goto label_1347c0;
    }
    ctx->pc = 0x1347B8u;
    {
        const bool branch_taken_0x1347b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B8u;
        // 0x1347bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347b8) {
            ctx->pc = 0x1347E0u;
            goto label_1347e0;
        }
    }
    ctx->pc = 0x1347C0u;
label_1347c0:
    // 0x1347c0: 0xc0401bc  jal         func_1006F0
label_1347c4:
    if (ctx->pc == 0x1347C4u) {
        ctx->pc = 0x1347C8u;
        goto label_1347c8;
    }
    ctx->pc = 0x1347C0u;
    SET_GPR_U32(ctx, 31, 0x1347C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1347C0u, 0x1347C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347C8u;
label_1347c8:
    // 0x1347c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1347cc:
    if (ctx->pc == 0x1347CCu) {
        ctx->pc = 0x1347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C8u;
        // 0x1347cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347D0u;
        goto label_1347d0;
    }
    ctx->pc = 0x1347C8u;
    {
        const bool branch_taken_0x1347c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C8u;
        // 0x1347cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347c8) {
            ctx->pc = 0x1347DCu;
            goto label_1347dc;
        }
    }
    ctx->pc = 0x1347D0u;
label_1347d0:
    // 0x1347d0: 0xc053cd8  jal         func_14F360
label_1347d4:
    if (ctx->pc == 0x1347D4u) {
        ctx->pc = 0x1347D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347D0u;
        // 0x1347d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347D8u;
        goto label_1347d8;
    }
    ctx->pc = 0x1347D0u;
    SET_GPR_U32(ctx, 31, 0x1347D8u);
    ctx->pc = 0x1347D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347D0u;
    // 0x1347d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F360u, 0x1347D0u, 0x1347D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347D8u;
label_1347d8:
    // 0x1347d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1347d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1347dc:
    // 0x1347dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1347dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1347e0:
    // 0x1347e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1347e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1347e4:
    // 0x1347e4: 0xc05404c  jal         func_150130
label_1347e8:
    if (ctx->pc == 0x1347E8u) {
        ctx->pc = 0x1347E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347E4u;
        // 0x1347e8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347ECu;
        goto label_1347ec;
    }
    ctx->pc = 0x1347E4u;
    SET_GPR_U32(ctx, 31, 0x1347ECu);
    ctx->pc = 0x1347E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347E4u;
    // 0x1347e8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150130u, 0x1347E4u, 0x1347ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347ECu;
label_1347ec:
    // 0x1347ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1347ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1347f0:
    // 0x1347f0: 0xc054050  jal         func_150140
label_1347f4:
    if (ctx->pc == 0x1347F4u) {
        ctx->pc = 0x1347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347F0u;
        // 0x1347f4: 0xaeb20008  sw          $s2, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347F8u;
        goto label_1347f8;
    }
    ctx->pc = 0x1347F0u;
    SET_GPR_U32(ctx, 31, 0x1347F8u);
    ctx->pc = 0x1347F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347F0u;
    // 0x1347f4: 0xaeb20008  sw          $s2, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150140u, 0x1347F0u, 0x1347F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347F8u;
label_1347f8:
    // 0x1347f8: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1347f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1347fc:
    // 0x1347fc: 0xc04fb3c  jal         func_13ECF0
label_134800:
    if (ctx->pc == 0x134800u) {
        ctx->pc = 0x134800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347FCu;
        // 0x134800: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134804u;
        goto label_134804;
    }
    ctx->pc = 0x1347FCu;
    SET_GPR_U32(ctx, 31, 0x134804u);
    ctx->pc = 0x134800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347FCu;
    // 0x134800: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECF0u, 0x1347FCu, 0x134804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134804u;
label_134804:
    // 0x134804: 0x10000008  b           . + 4 + (0x8 << 2)
label_134808:
    if (ctx->pc == 0x134808u) {
        ctx->pc = 0x13480Cu;
        goto label_13480c;
    }
    ctx->pc = 0x134804u;
    {
        const bool branch_taken_0x134804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134804) {
            ctx->pc = 0x134828u;
            goto label_134828;
        }
    }
    ctx->pc = 0x13480Cu;
label_13480c:
    // 0x13480c: 0xc0401bc  jal         func_1006F0
label_134810:
    if (ctx->pc == 0x134810u) {
        ctx->pc = 0x134814u;
        goto label_134814;
    }
    ctx->pc = 0x13480Cu;
    SET_GPR_U32(ctx, 31, 0x134814u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13480Cu, 0x134814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134814u;
label_134814:
    // 0x134814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_134818:
    if (ctx->pc == 0x134818u) {
        ctx->pc = 0x134818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134814u;
        // 0x134818: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13481Cu;
        goto label_13481c;
    }
    ctx->pc = 0x134814u;
    {
        const bool branch_taken_0x134814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134814u;
        // 0x134818: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134814) {
            ctx->pc = 0x134828u;
            goto label_134828;
        }
    }
    ctx->pc = 0x13481Cu;
label_13481c:
    // 0x13481c: 0xc04dd0c  jal         func_137430
label_134820:
    if (ctx->pc == 0x134820u) {
        ctx->pc = 0x134820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13481Cu;
        // 0x134820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134824u;
        goto label_134824;
    }
    ctx->pc = 0x13481Cu;
    SET_GPR_U32(ctx, 31, 0x134824u);
    ctx->pc = 0x134820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13481Cu;
    // 0x134820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137430u, 0x13481Cu, 0x134824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134824u;
label_134824:
    // 0x134824: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134828:
    // 0x134828: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x134828u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
label_13482c:
    // 0x13482c: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x13482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_134830:
    // 0x134830: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x134830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_134834:
    // 0x134834: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_134838:
    // 0x134838: 0x320f809  jalr        $t9
label_13483c:
    if (ctx->pc == 0x13483Cu) {
        ctx->pc = 0x13483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134838u;
        // 0x13483c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134840u;
        goto label_134840;
    }
    ctx->pc = 0x134838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x134840u);
        ctx->pc = 0x13483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134838u;
        // 0x13483c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134838u, 0x134840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134840u;
label_134840:
    // 0x134840: 0xae540080  sw          $s4, 0x80($s2)
    ctx->pc = 0x134840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 20));
label_134844:
    // 0x134844: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
label_134848:
    if (ctx->pc == 0x134848u) {
        ctx->pc = 0x134848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134844u;
        // 0x134848: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13484Cu;
        goto label_13484c;
    }
    ctx->pc = 0x134844u;
    {
        const bool branch_taken_0x134844 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x134848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134844u;
        // 0x134848: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134844) {
            ctx->pc = 0x134890u;
            goto label_134890;
        }
    }
    ctx->pc = 0x13484Cu;
label_13484c:
    // 0x13484c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134850:
    // 0x134850: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x134850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_134854:
    // 0x134854: 0xc080702  jal         func_201C08
label_134858:
    if (ctx->pc == 0x134858u) {
        ctx->pc = 0x134858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134854u;
        // 0x134858: 0x24a5eec0  addiu       $a1, $a1, -0x1140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13485Cu;
        goto label_13485c;
    }
    ctx->pc = 0x134854u;
    SET_GPR_U32(ctx, 31, 0x13485Cu);
    ctx->pc = 0x134858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134854u;
    // 0x134858: 0x24a5eec0  addiu       $a1, $a1, -0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134854u, 0x13485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13485Cu;
label_13485c:
    // 0x13485c: 0xc04d32c  jal         func_134CB0
label_134860:
    if (ctx->pc == 0x134860u) {
        ctx->pc = 0x134860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13485Cu;
        // 0x134860: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134864u;
        goto label_134864;
    }
    ctx->pc = 0x13485Cu;
    SET_GPR_U32(ctx, 31, 0x134864u);
    ctx->pc = 0x134860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13485Cu;
    // 0x134860: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CB0u, 0x13485Cu, 0x134864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134864u;
label_134864:
    // 0x134864: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x134864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_134868:
    // 0x134868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x134868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13486c:
    // 0x13486c: 0xc07fdfe  jal         func_1FF7F8
label_134870:
    if (ctx->pc == 0x134870u) {
        ctx->pc = 0x134870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13486Cu;
        // 0x134870: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134874u;
        goto label_134874;
    }
    ctx->pc = 0x13486Cu;
    SET_GPR_U32(ctx, 31, 0x134874u);
    ctx->pc = 0x134870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13486Cu;
    // 0x134870: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13486Cu, 0x134874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134874u;
label_134874:
    // 0x134874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x134874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_134878:
    // 0x134878: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13487c:
    // 0x13487c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13487cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134880:
    // 0x134880: 0xc053fac  jal         func_14FEB0
label_134884:
    if (ctx->pc == 0x134884u) {
        ctx->pc = 0x134884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134880u;
        // 0x134884: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134888u;
        goto label_134888;
    }
    ctx->pc = 0x134880u;
    SET_GPR_U32(ctx, 31, 0x134888u);
    ctx->pc = 0x134884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134880u;
    // 0x134884: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FEB0u, 0x134880u, 0x134888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134888u;
label_134888:
    // 0x134888: 0x10000006  b           . + 4 + (0x6 << 2)
label_13488c:
    if (ctx->pc == 0x13488Cu) {
        ctx->pc = 0x13488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134888u;
        // 0x13488c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134890u;
        goto label_134890;
    }
    ctx->pc = 0x134888u;
    {
        const bool branch_taken_0x134888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134888u;
        // 0x13488c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134888) {
            ctx->pc = 0x1348A4u;
            goto label_1348a4;
        }
    }
    ctx->pc = 0x134890u;
label_134890:
    // 0x134890: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_134894:
    if (ctx->pc == 0x134894u) {
        ctx->pc = 0x134894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134890u;
        // 0x134894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134898u;
        goto label_134898;
    }
    ctx->pc = 0x134890u;
    {
        const bool branch_taken_0x134890 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x134894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134890u;
        // 0x134894: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134890) {
            ctx->pc = 0x1348A0u;
            goto label_1348a0;
        }
    }
    ctx->pc = 0x134898u;
label_134898:
    // 0x134898: 0xc053ed4  jal         func_14FB50
label_13489c:
    if (ctx->pc == 0x13489Cu) {
        ctx->pc = 0x1348A0u;
        goto label_1348a0;
    }
    ctx->pc = 0x134898u;
    SET_GPR_U32(ctx, 31, 0x1348A0u);
    ctx->pc = 0x14FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB50u, 0x134898u, 0x1348A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348A0u;
label_1348a0:
    // 0x1348a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1348a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1348a4:
    // 0x1348a4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1348a8:
    if (ctx->pc == 0x1348A8u) {
        ctx->pc = 0x1348ACu;
        goto label_1348ac;
    }
    ctx->pc = 0x1348A4u;
    {
        const bool branch_taken_0x1348a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348a4) {
            ctx->pc = 0x134920u;
            goto label_134920;
        }
    }
    ctx->pc = 0x1348ACu;
label_1348ac:
    // 0x1348ac: 0xc0401bc  jal         func_1006F0
label_1348b0:
    if (ctx->pc == 0x1348B0u) {
        ctx->pc = 0x1348B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348ACu;
        // 0x1348b0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1348B4u;
        goto label_1348b4;
    }
    ctx->pc = 0x1348ACu;
    SET_GPR_U32(ctx, 31, 0x1348B4u);
    ctx->pc = 0x1348B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348ACu;
    // 0x1348b0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1348ACu, 0x1348B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348B4u;
label_1348b4:
    // 0x1348b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1348b8:
    if (ctx->pc == 0x1348B8u) {
        ctx->pc = 0x1348B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348B4u;
        // 0x1348b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1348BCu;
        goto label_1348bc;
    }
    ctx->pc = 0x1348B4u;
    {
        const bool branch_taken_0x1348b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348B4u;
        // 0x1348b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348b4) {
            ctx->pc = 0x1348F8u;
            goto label_1348f8;
        }
    }
    ctx->pc = 0x1348BCu;
label_1348bc:
    // 0x1348bc: 0xc04c4c0  jal         func_131300
label_1348c0:
    if (ctx->pc == 0x1348C0u) {
        ctx->pc = 0x1348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348BCu;
        // 0x1348c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1348C4u;
        goto label_1348c4;
    }
    ctx->pc = 0x1348BCu;
    SET_GPR_U32(ctx, 31, 0x1348C4u);
    ctx->pc = 0x1348C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348BCu;
    // 0x1348c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x1348BCu, 0x1348C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348C4u;
label_1348c4:
    // 0x1348c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1348c8:
    // 0x1348c8: 0x24428e00  addiu       $v0, $v0, -0x7200
    ctx->pc = 0x1348c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
label_1348cc:
    // 0x1348cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1348ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1348d0:
    // 0x1348d0: 0xa2a00090  sb          $zero, 0x90($s5)
    ctx->pc = 0x1348d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 144), (uint8_t)GPR_U32(ctx, 0));
label_1348d4:
    // 0x1348d4: 0xaea0009c  sw          $zero, 0x9C($s5)
    ctx->pc = 0x1348d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 0));
label_1348d8:
    // 0x1348d8: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x1348d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
label_1348dc:
    // 0x1348dc: 0xaea0008c  sw          $zero, 0x8C($s5)
    ctx->pc = 0x1348dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 0));
label_1348e0:
    // 0x1348e0: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x1348e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
label_1348e4:
    // 0x1348e4: 0xaea000a8  sw          $zero, 0xA8($s5)
    ctx->pc = 0x1348e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 168), GPR_U32(ctx, 0));
label_1348e8:
    // 0x1348e8: 0xaea000a4  sw          $zero, 0xA4($s5)
    ctx->pc = 0x1348e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
label_1348ec:
    // 0x1348ec: 0xa2a00093  sb          $zero, 0x93($s5)
    ctx->pc = 0x1348ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 147), (uint8_t)GPR_U32(ctx, 0));
label_1348f0:
    // 0x1348f0: 0xaea00094  sw          $zero, 0x94($s5)
    ctx->pc = 0x1348f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
label_1348f4:
    // 0x1348f4: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x1348f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
label_1348f8:
    // 0x1348f8: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1348f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1348fc:
    // 0x1348fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1348fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134900:
    // 0x134900: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x134900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_134904:
    // 0x134904: 0xc04c558  jal         func_131560
label_134908:
    if (ctx->pc == 0x134908u) {
        ctx->pc = 0x134908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134904u;
        // 0x134908: 0xaea200a0  sw          $v0, 0xA0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13490Cu;
        goto label_13490c;
    }
    ctx->pc = 0x134904u;
    SET_GPR_U32(ctx, 31, 0x13490Cu);
    ctx->pc = 0x134908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134904u;
    // 0x134908: 0xaea200a0  sw          $v0, 0xA0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x134904u, 0x13490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13490Cu;
label_13490c:
    // 0x13490c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_134910:
    // 0x134910: 0xc04d130  jal         func_1344C0
label_134914:
    if (ctx->pc == 0x134914u) {
        ctx->pc = 0x134914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134910u;
        // 0x134914: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134918u;
        goto label_134918;
    }
    ctx->pc = 0x134910u;
    SET_GPR_U32(ctx, 31, 0x134918u);
    ctx->pc = 0x134914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134910u;
    // 0x134914: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    goto label_1344c0;
    ctx->pc = 0x134918u;
label_134918:
    // 0x134918: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x134918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_13491c:
    // 0x13491c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_134920:
    // 0x134920: 0x8fa203f4  lw          $v0, 0x3F4($sp)
    ctx->pc = 0x134920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1012)));
label_134924:
    // 0x134924: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x134924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_134928:
    // 0x134928: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_13492c:
    if (ctx->pc == 0x13492Cu) {
        ctx->pc = 0x13492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134928u;
        // 0x13492c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134930u;
        goto label_134930;
    }
    ctx->pc = 0x134928u;
    {
        const bool branch_taken_0x134928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134928u;
        // 0x13492c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134928) {
            ctx->pc = 0x1348ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1348ac;
        }
    }
    ctx->pc = 0x134930u;
label_134930:
    // 0x134930: 0xc07d3ac  jal         func_1F4EB0
label_134934:
    if (ctx->pc == 0x134934u) {
        ctx->pc = 0x134938u;
        goto label_134938;
    }
    ctx->pc = 0x134930u;
    SET_GPR_U32(ctx, 31, 0x134938u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x134930u, 0x134938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134938u;
label_134938:
    // 0x134938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13493c:
    // 0x13493c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_134940:
    if (ctx->pc == 0x134940u) {
        ctx->pc = 0x134940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13493Cu;
        // 0x134940: 0xa2420054  sb          $v0, 0x54($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134944u;
        goto label_134944;
    }
    ctx->pc = 0x13493Cu;
    {
        const bool branch_taken_0x13493c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13493Cu;
        // 0x134940: 0xa2420054  sb          $v0, 0x54($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13493c) {
            ctx->pc = 0x134958u;
            goto label_134958;
        }
    }
    ctx->pc = 0x134944u;
label_134944:
    // 0x134944: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x134944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_134948:
    // 0x134948: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13494c:
    // 0x13494c: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x13494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_134950:
    // 0x134950: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x134950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_134954:
    // 0x134954: 0xa2420054  sb          $v0, 0x54($s2)
    ctx->pc = 0x134954u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
label_134958:
    // 0x134958: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x134958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_13495c:
    // 0x13495c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_134960:
    if (ctx->pc == 0x134960u) {
        ctx->pc = 0x134960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13495Cu;
        // 0x134960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134964u;
        goto label_134964;
    }
    ctx->pc = 0x13495Cu;
    {
        const bool branch_taken_0x13495c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13495Cu;
        // 0x134960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13495c) {
            ctx->pc = 0x13496Cu;
            goto label_13496c;
        }
    }
    ctx->pc = 0x134964u;
label_134964:
    // 0x134964: 0xc04d5e8  jal         func_1357A0
label_134968:
    if (ctx->pc == 0x134968u) {
        ctx->pc = 0x13496Cu;
        goto label_13496c;
    }
    ctx->pc = 0x134964u;
    SET_GPR_U32(ctx, 31, 0x13496Cu);
    ctx->pc = 0x1357A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1357A0u, 0x134964u, 0x13496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13496Cu;
label_13496c:
    // 0x13496c: 0x8fa203ec  lw          $v0, 0x3EC($sp)
    ctx->pc = 0x13496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
label_134970:
    // 0x134970: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_134974:
    if (ctx->pc == 0x134974u) {
        ctx->pc = 0x134978u;
        goto label_134978;
    }
    ctx->pc = 0x134970u;
    {
        const bool branch_taken_0x134970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134970) {
            ctx->pc = 0x134A58u;
            goto label_134a58;
        }
    }
    ctx->pc = 0x134978u;
label_134978:
    // 0x134978: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x134978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_13497c:
    // 0x13497c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_134980:
    // 0x134980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_134984:
    // 0x134984: 0x26420054  addiu       $v0, $s2, 0x54
    ctx->pc = 0x134984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_134988:
    // 0x134988: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x134988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_13498c:
    // 0x13498c: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_134990:
    // 0x134990: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_134994:
    if (ctx->pc == 0x134994u) {
        ctx->pc = 0x134998u;
        goto label_134998;
    }
    ctx->pc = 0x134990u;
    {
        const bool branch_taken_0x134990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134990) {
            ctx->pc = 0x1349B0u;
            goto label_1349b0;
        }
    }
    ctx->pc = 0x134998u;
label_134998:
    // 0x134998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13499c:
    // 0x13499c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1349a0:
    // 0x1349a0: 0x320f809  jalr        $t9
label_1349a4:
    if (ctx->pc == 0x1349A4u) {
        ctx->pc = 0x1349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A0u;
        // 0x1349a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349A8u;
        goto label_1349a8;
    }
    ctx->pc = 0x1349A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1349A8u);
        ctx->pc = 0x1349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A0u;
        // 0x1349a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1349A0u, 0x1349A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1349A8u;
label_1349a8:
    // 0x1349a8: 0x10000026  b           . + 4 + (0x26 << 2)
label_1349ac:
    if (ctx->pc == 0x1349ACu) {
        ctx->pc = 0x1349ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A8u;
        // 0x1349ac: 0x92420092  lbu         $v0, 0x92($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349B0u;
        goto label_1349b0;
    }
    ctx->pc = 0x1349A8u;
    {
        const bool branch_taken_0x1349a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A8u;
        // 0x1349ac: 0x92420092  lbu         $v0, 0x92($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a8) {
            ctx->pc = 0x134A44u;
            goto label_134a44;
        }
    }
    ctx->pc = 0x1349B0u;
label_1349b0:
    // 0x1349b0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1349b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1349b4:
    // 0x1349b4: 0xc04d808  jal         func_136020
label_1349b8:
    if (ctx->pc == 0x1349B8u) {
        ctx->pc = 0x1349B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349B4u;
        // 0x1349b8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1349BCu;
        goto label_1349bc;
    }
    ctx->pc = 0x1349B4u;
    SET_GPR_U32(ctx, 31, 0x1349BCu);
    ctx->pc = 0x1349B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349B4u;
    // 0x1349b8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136020u, 0x1349B4u, 0x1349BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349BCu;
label_1349bc:
    // 0x1349bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1349bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1349c0:
    // 0x1349c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1349c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1349c4:
    // 0x1349c4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_1349c8:
    // 0x1349c8: 0x24846370  addiu       $a0, $a0, 0x6370
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25456));
label_1349cc:
    // 0x1349cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1349d0:
    // 0x1349d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1349d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1349d4:
    // 0x1349d4: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1349d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1349d8:
    // 0x1349d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1349dc:
    // 0x1349dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1349dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1349e0:
    // 0x1349e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1349e4:
    // 0x1349e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1349e8:
    // 0x1349e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1349e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1349ec:
    // 0x1349ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1349f0:
    // 0x1349f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1349f4:
    // 0x1349f4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1349f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1349f8:
    // 0x1349f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1349fc:
    // 0x1349fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_134a00:
    // 0x134a00: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x134a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_134a04:
    // 0x134a04: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134a08:
    // 0x134a08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_134a0c:
    // 0x134a0c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x134a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_134a10:
    // 0x134a10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134a14:
    // 0x134a14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_134a18:
    // 0x134a18: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x134a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_134a1c:
    // 0x134a1c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134a20:
    // 0x134a20: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_134a24:
    // 0x134a24: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x134a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_134a28:
    // 0x134a28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134a2c:
    // 0x134a2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_134a30:
    // 0x134a30: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x134a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_134a34:
    // 0x134a34: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_134a38:
    if (ctx->pc == 0x134A38u) {
        ctx->pc = 0x134A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A34u;
        // 0x134a38: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A3Cu;
        goto label_134a3c;
    }
    ctx->pc = 0x134A34u;
    {
        const bool branch_taken_0x134a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A34u;
        // 0x134a38: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a34) {
            ctx->pc = 0x1349CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1349cc;
        }
    }
    ctx->pc = 0x134A3Cu;
label_134a3c:
    // 0x134a3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x134a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_134a40:
    // 0x134a40: 0x92420092  lbu         $v0, 0x92($s2)
    ctx->pc = 0x134a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
label_134a44:
    // 0x134a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_134a48:
    if (ctx->pc == 0x134A48u) {
        ctx->pc = 0x134A4Cu;
        goto label_134a4c;
    }
    ctx->pc = 0x134A44u;
    {
        const bool branch_taken_0x134a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a44) {
            ctx->pc = 0x134A58u;
            goto label_134a58;
        }
    }
    ctx->pc = 0x134A4Cu;
label_134a4c:
    // 0x134a4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x134a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134a50:
    // 0x134a50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134a54:
    // 0x134a54: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x134a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
label_134a58:
    // 0x134a58: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x134a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134a5c:
    // 0x134a5c: 0xc080702  jal         func_201C08
label_134a60:
    if (ctx->pc == 0x134A60u) {
        ctx->pc = 0x134A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A5Cu;
        // 0x134a60: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A64u;
        goto label_134a64;
    }
    ctx->pc = 0x134A5Cu;
    SET_GPR_U32(ctx, 31, 0x134A64u);
    ctx->pc = 0x134A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A5Cu;
    // 0x134a60: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134A5Cu, 0x134A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A64u;
label_134a64:
    // 0x134a64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134a68:
    // 0x134a68: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x134a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_134a6c:
    // 0x134a6c: 0xc080874  jal         func_2021D0
label_134a70:
    if (ctx->pc == 0x134A70u) {
        ctx->pc = 0x134A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A6Cu;
        // 0x134a70: 0x24a5eec8  addiu       $a1, $a1, -0x1138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A74u;
        goto label_134a74;
    }
    ctx->pc = 0x134A6Cu;
    SET_GPR_U32(ctx, 31, 0x134A74u);
    ctx->pc = 0x134A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A6Cu;
    // 0x134a70: 0x24a5eec8  addiu       $a1, $a1, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134A6Cu, 0x134A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A74u;
label_134a74:
    // 0x134a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134a78:
    // 0x134a78: 0x12000080  beqz        $s0, . + 4 + (0x80 << 2)
label_134a7c:
    if (ctx->pc == 0x134A7Cu) {
        ctx->pc = 0x134A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A78u;
        // 0x134a7c: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A80u;
        goto label_134a80;
    }
    ctx->pc = 0x134A78u;
    {
        const bool branch_taken_0x134a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A78u;
        // 0x134a7c: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a78) {
            ctx->pc = 0x134C7Cu;
            goto label_134c7c;
        }
    }
    ctx->pc = 0x134A80u;
label_134a80:
    // 0x134a80: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x134a80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
label_134a84:
    // 0x134a84: 0x2631eed0  addiu       $s1, $s1, -0x1130
    ctx->pc = 0x134a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962896));
label_134a88:
    // 0x134a88: 0xc04ce58  jal         func_133960
label_134a8c:
    if (ctx->pc == 0x134A8Cu) {
        ctx->pc = 0x134A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A88u;
        // 0x134a8c: 0x2694eed8  addiu       $s4, $s4, -0x1128 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A90u;
        goto label_134a90;
    }
    ctx->pc = 0x134A88u;
    SET_GPR_U32(ctx, 31, 0x134A90u);
    ctx->pc = 0x134A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A88u;
    // 0x134a8c: 0x2694eed8  addiu       $s4, $s4, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133960u, 0x134A88u, 0x134A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A90u;
label_134a90:
    // 0x134a90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_134a94:
    if (ctx->pc == 0x134A94u) {
        ctx->pc = 0x134A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A90u;
        // 0x134a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134A98u;
        goto label_134a98;
    }
    ctx->pc = 0x134A90u;
    {
        const bool branch_taken_0x134a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A90u;
        // 0x134a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a90) {
            ctx->pc = 0x134AACu;
            goto label_134aac;
        }
    }
    ctx->pc = 0x134A98u;
label_134a98:
    // 0x134a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134a9c:
    // 0x134a9c: 0xc080702  jal         func_201C08
label_134aa0:
    if (ctx->pc == 0x134AA0u) {
        ctx->pc = 0x134AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A9Cu;
        // 0x134aa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AA4u;
        goto label_134aa4;
    }
    ctx->pc = 0x134A9Cu;
    SET_GPR_U32(ctx, 31, 0x134AA4u);
    ctx->pc = 0x134AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A9Cu;
    // 0x134aa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134A9Cu, 0x134AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0x10000004  b           . + 4 + (0x4 << 2)
label_134aa8:
    if (ctx->pc == 0x134AA8u) {
        ctx->pc = 0x134AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA4u;
        // 0x134aa8: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AACu;
        goto label_134aac;
    }
    ctx->pc = 0x134AA4u;
    {
        const bool branch_taken_0x134aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA4u;
        // 0x134aa8: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa4) {
            ctx->pc = 0x134AB8u;
            goto label_134ab8;
        }
    }
    ctx->pc = 0x134AACu;
label_134aac:
    // 0x134aac: 0xc080702  jal         func_201C08
label_134ab0:
    if (ctx->pc == 0x134AB0u) {
        ctx->pc = 0x134AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AACu;
        // 0x134ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AB4u;
        goto label_134ab4;
    }
    ctx->pc = 0x134AACu;
    SET_GPR_U32(ctx, 31, 0x134AB4u);
    ctx->pc = 0x134AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AACu;
    // 0x134ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134AACu, 0x134AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AB4u;
label_134ab4:
    // 0x134ab4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_134ab8:
    // 0x134ab8: 0xc080702  jal         func_201C08
label_134abc:
    if (ctx->pc == 0x134ABCu) {
        ctx->pc = 0x134ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AB8u;
        // 0x134abc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AC0u;
        goto label_134ac0;
    }
    ctx->pc = 0x134AB8u;
    SET_GPR_U32(ctx, 31, 0x134AC0u);
    ctx->pc = 0x134ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AB8u;
    // 0x134abc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134AB8u, 0x134AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AC0u;
label_134ac0:
    // 0x134ac0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_134ac4:
    // 0x134ac4: 0xc048920  jal         func_122480
label_134ac8:
    if (ctx->pc == 0x134AC8u) {
        ctx->pc = 0x134AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC4u;
        // 0x134ac8: 0x27a5040c  addiu       $a1, $sp, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134ACCu;
        goto label_134acc;
    }
    ctx->pc = 0x134AC4u;
    SET_GPR_U32(ctx, 31, 0x134ACCu);
    ctx->pc = 0x134AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AC4u;
    // 0x134ac8: 0x27a5040c  addiu       $a1, $sp, 0x40C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x134AC4u, 0x134ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ACCu;
label_134acc:
    // 0x134acc: 0xc04c254  jal         func_130950
label_134ad0:
    if (ctx->pc == 0x134AD0u) {
        ctx->pc = 0x134AD4u;
        goto label_134ad4;
    }
    ctx->pc = 0x134ACCu;
    SET_GPR_U32(ctx, 31, 0x134AD4u);
    ctx->pc = 0x130950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130950u, 0x134ACCu, 0x134AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AD4u;
label_134ad4:
    // 0x134ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134ad8:
    // 0x134ad8: 0xc080748  jal         func_201D20
label_134adc:
    if (ctx->pc == 0x134ADCu) {
        ctx->pc = 0x134ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD8u;
        // 0x134adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AE0u;
        goto label_134ae0;
    }
    ctx->pc = 0x134AD8u;
    SET_GPR_U32(ctx, 31, 0x134AE0u);
    ctx->pc = 0x134ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AD8u;
    // 0x134adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x134AD8u, 0x134AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AE0u;
label_134ae0:
    // 0x134ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134ae4:
    // 0x134ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x134ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134ae8:
    // 0x134ae8: 0xc048884  jal         func_122210
label_134aec:
    if (ctx->pc == 0x134AECu) {
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AE8u;
        // 0x134aec: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AF0u;
        goto label_134af0;
    }
    ctx->pc = 0x134AE8u;
    SET_GPR_U32(ctx, 31, 0x134AF0u);
    ctx->pc = 0x134AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AE8u;
    // 0x134aec: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x134AE8u, 0x134AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0xc080748  jal         func_201D20
label_134af4:
    if (ctx->pc == 0x134AF4u) {
        ctx->pc = 0x134AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AF0u;
        // 0x134af4: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AF8u;
        goto label_134af8;
    }
    ctx->pc = 0x134AF0u;
    SET_GPR_U32(ctx, 31, 0x134AF8u);
    ctx->pc = 0x134AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AF0u;
    // 0x134af4: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x134AF0u, 0x134AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AF8u;
label_134af8:
    // 0x134af8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x134af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134afc:
    // 0x134afc: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x134afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_134b00:
    // 0x134b00: 0xc049c74  jal         func_1271D0
label_134b04:
    if (ctx->pc == 0x134B04u) {
        ctx->pc = 0x134B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B00u;
        // 0x134b04: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B08u;
        goto label_134b08;
    }
    ctx->pc = 0x134B00u;
    SET_GPR_U32(ctx, 31, 0x134B08u);
    ctx->pc = 0x134B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B00u;
    // 0x134b04: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x134B00u, 0x134B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B08u;
label_134b08:
    // 0x134b08: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_134b0c:
    // 0x134b0c: 0xc04619c  jal         func_118670
label_134b10:
    if (ctx->pc == 0x134B10u) {
        ctx->pc = 0x134B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B0Cu;
        // 0x134b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B14u;
        goto label_134b14;
    }
    ctx->pc = 0x134B0Cu;
    SET_GPR_U32(ctx, 31, 0x134B14u);
    ctx->pc = 0x134B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B0Cu;
    // 0x134b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x134B0Cu, 0x134B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B14u;
label_134b14:
    // 0x134b14: 0xc04c0e0  jal         func_130380
label_134b18:
    if (ctx->pc == 0x134B18u) {
        ctx->pc = 0x134B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B14u;
        // 0x134b18: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B1Cu;
        goto label_134b1c;
    }
    ctx->pc = 0x134B14u;
    SET_GPR_U32(ctx, 31, 0x134B1Cu);
    ctx->pc = 0x134B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B14u;
    // 0x134b18: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x134B14u, 0x134B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B1Cu;
label_134b1c:
    // 0x134b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134b20:
    // 0x134b20: 0x12000055  beqz        $s0, . + 4 + (0x55 << 2)
label_134b24:
    if (ctx->pc == 0x134B24u) {
        ctx->pc = 0x134B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B20u;
        // 0x134b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B28u;
        goto label_134b28;
    }
    ctx->pc = 0x134B20u;
    {
        const bool branch_taken_0x134b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B20u;
        // 0x134b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b20) {
            ctx->pc = 0x134C78u;
            goto label_134c78;
        }
    }
    ctx->pc = 0x134B28u;
label_134b28:
    // 0x134b28: 0xc04c558  jal         func_131560
label_134b2c:
    if (ctx->pc == 0x134B2Cu) {
        ctx->pc = 0x134B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B28u;
        // 0x134b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B30u;
        goto label_134b30;
    }
    ctx->pc = 0x134B28u;
    SET_GPR_U32(ctx, 31, 0x134B30u);
    ctx->pc = 0x134B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B28u;
    // 0x134b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x134B28u, 0x134B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B30u;
label_134b30:
    // 0x134b30: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x134b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134b34:
    // 0x134b34: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x134b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_134b38:
    // 0x134b38: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134b3c:
    // 0x134b3c: 0xc080702  jal         func_201C08
label_134b40:
    if (ctx->pc == 0x134B40u) {
        ctx->pc = 0x134B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B3Cu;
        // 0x134b40: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B44u;
        goto label_134b44;
    }
    ctx->pc = 0x134B3Cu;
    SET_GPR_U32(ctx, 31, 0x134B44u);
    ctx->pc = 0x134B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B3Cu;
    // 0x134b40: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134B3Cu, 0x134B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B44u;
label_134b44:
    // 0x134b44: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x134b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_134b48:
    // 0x134b48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134b4c:
    // 0x134b4c: 0x2442eee0  addiu       $v0, $v0, -0x1120
    ctx->pc = 0x134b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962912));
label_134b50:
    // 0x134b50: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134b54:
    // 0x134b54: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x134b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_134b58:
    // 0x134b58: 0x24a5eee8  addiu       $a1, $a1, -0x1118
    ctx->pc = 0x134b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
label_134b5c:
    // 0x134b5c: 0xae5000a4  sw          $s0, 0xA4($s2)
    ctx->pc = 0x134b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 16));
label_134b60:
    // 0x134b60: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134b64:
    // 0x134b64: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134b68:
    // 0x134b68: 0x8c630170  lw          $v1, 0x170($v1)
    ctx->pc = 0x134b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
label_134b6c:
    // 0x134b6c: 0xc080874  jal         func_2021D0
label_134b70:
    if (ctx->pc == 0x134B70u) {
        ctx->pc = 0x134B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B6Cu;
        // 0x134b70: 0xac430170  sw          $v1, 0x170($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B74u;
        goto label_134b74;
    }
    ctx->pc = 0x134B6Cu;
    SET_GPR_U32(ctx, 31, 0x134B74u);
    ctx->pc = 0x134B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B6Cu;
    // 0x134b70: 0xac430170  sw          $v1, 0x170($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134B6Cu, 0x134B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B74u;
label_134b74:
    // 0x134b74: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_134b78:
    if (ctx->pc == 0x134B78u) {
        ctx->pc = 0x134B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B74u;
        // 0x134b78: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B7Cu;
        goto label_134b7c;
    }
    ctx->pc = 0x134B74u;
    {
        const bool branch_taken_0x134b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B74u;
        // 0x134b78: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b74) {
            ctx->pc = 0x134C1Cu;
            goto label_134c1c;
        }
    }
    ctx->pc = 0x134B7Cu;
label_134b7c:
    // 0x134b7c: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134b80:
    // 0x134b80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x134b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134b84:
    // 0x134b84: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x134b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_134b88:
    // 0x134b88: 0x320f809  jalr        $t9
label_134b8c:
    if (ctx->pc == 0x134B8Cu) {
        ctx->pc = 0x134B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B88u;
        // 0x134b8c: 0x8e4500a4  lw          $a1, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B90u;
        goto label_134b90;
    }
    ctx->pc = 0x134B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x134B90u);
        ctx->pc = 0x134B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B88u;
        // 0x134b8c: 0x8e4500a4  lw          $a1, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B88u, 0x134B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134B90u;
label_134b90:
    // 0x134b90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134b94:
    // 0x134b94: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134b98:
    // 0x134b98: 0xc080874  jal         func_2021D0
label_134b9c:
    if (ctx->pc == 0x134B9Cu) {
        ctx->pc = 0x134B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B98u;
        // 0x134b9c: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BA0u;
        goto label_134ba0;
    }
    ctx->pc = 0x134B98u;
    SET_GPR_U32(ctx, 31, 0x134BA0u);
    ctx->pc = 0x134B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B98u;
    // 0x134b9c: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134B98u, 0x134BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BA0u;
label_134ba0:
    // 0x134ba0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_134ba4:
    if (ctx->pc == 0x134BA4u) {
        ctx->pc = 0x134BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BA0u;
        // 0x134ba4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BA8u;
        goto label_134ba8;
    }
    ctx->pc = 0x134BA0u;
    {
        const bool branch_taken_0x134ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BA0u;
        // 0x134ba4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ba0) {
            ctx->pc = 0x134C04u;
            goto label_134c04;
        }
    }
    ctx->pc = 0x134BA8u;
label_134ba8:
    // 0x134ba8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134bac:
    // 0x134bac: 0xc080874  jal         func_2021D0
label_134bb0:
    if (ctx->pc == 0x134BB0u) {
        ctx->pc = 0x134BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BACu;
        // 0x134bb0: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BB4u;
        goto label_134bb4;
    }
    ctx->pc = 0x134BACu;
    SET_GPR_U32(ctx, 31, 0x134BB4u);
    ctx->pc = 0x134BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BACu;
    // 0x134bb0: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134BACu, 0x134BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BB4u;
label_134bb4:
    // 0x134bb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134bb8:
    // 0x134bb8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x134bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_134bbc:
    // 0x134bbc: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x134bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
label_134bc0:
    // 0x134bc0: 0xc0805e6  jal         func_201798
label_134bc4:
    if (ctx->pc == 0x134BC4u) {
        ctx->pc = 0x134BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BC0u;
        // 0x134bc4: 0x27a60404  addiu       $a2, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BC8u;
        goto label_134bc8;
    }
    ctx->pc = 0x134BC0u;
    SET_GPR_U32(ctx, 31, 0x134BC8u);
    ctx->pc = 0x134BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BC0u;
    // 0x134bc4: 0x27a60404  addiu       $a2, $sp, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x134BC0u, 0x134BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BC8u;
label_134bc8:
    // 0x134bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134bcc:
    // 0x134bcc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_134bd0:
    if (ctx->pc == 0x134BD0u) {
        ctx->pc = 0x134BD4u;
        goto label_134bd4;
    }
    ctx->pc = 0x134BCCu;
    {
        const bool branch_taken_0x134bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x134bcc) {
            ctx->pc = 0x134BECu;
            goto label_134bec;
        }
    }
    ctx->pc = 0x134BD4u;
label_134bd4:
    // 0x134bd4: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134bd8:
    // 0x134bd8: 0x8fa60404  lw          $a2, 0x404($sp)
    ctx->pc = 0x134bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_134bdc:
    // 0x134bdc: 0xc04f75c  jal         func_13DD70
label_134be0:
    if (ctx->pc == 0x134BE0u) {
        ctx->pc = 0x134BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BDCu;
        // 0x134be0: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BE4u;
        goto label_134be4;
    }
    ctx->pc = 0x134BDCu;
    SET_GPR_U32(ctx, 31, 0x134BE4u);
    ctx->pc = 0x134BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BDCu;
    // 0x134be0: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134BDCu, 0x134BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BE4u;
label_134be4:
    // 0x134be4: 0x10000026  b           . + 4 + (0x26 << 2)
label_134be8:
    if (ctx->pc == 0x134BE8u) {
        ctx->pc = 0x134BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BE4u;
        // 0x134be8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BECu;
        goto label_134bec;
    }
    ctx->pc = 0x134BE4u;
    {
        const bool branch_taken_0x134be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BE4u;
        // 0x134be8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134be4) {
            ctx->pc = 0x134C80u;
            goto label_134c80;
        }
    }
    ctx->pc = 0x134BECu;
label_134bec:
    // 0x134bec: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134bf0:
    // 0x134bf0: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134bf4:
    // 0x134bf4: 0xc04f75c  jal         func_13DD70
label_134bf8:
    if (ctx->pc == 0x134BF8u) {
        ctx->pc = 0x134BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BF4u;
        // 0x134bf8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BFCu;
        goto label_134bfc;
    }
    ctx->pc = 0x134BF4u;
    SET_GPR_U32(ctx, 31, 0x134BFCu);
    ctx->pc = 0x134BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BF4u;
    // 0x134bf8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134BF4u, 0x134BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BFCu;
label_134bfc:
    // 0x134bfc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_134c00:
    if (ctx->pc == 0x134C00u) {
        ctx->pc = 0x134C04u;
        goto label_134c04;
    }
    ctx->pc = 0x134BFCu;
    {
        const bool branch_taken_0x134bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134bfc) {
            ctx->pc = 0x134C7Cu;
            goto label_134c7c;
        }
    }
    ctx->pc = 0x134C04u;
label_134c04:
    // 0x134c04: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134c08:
    // 0x134c08: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134c0c:
    // 0x134c0c: 0xc04f75c  jal         func_13DD70
label_134c10:
    if (ctx->pc == 0x134C10u) {
        ctx->pc = 0x134C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C0Cu;
        // 0x134c10: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C14u;
        goto label_134c14;
    }
    ctx->pc = 0x134C0Cu;
    SET_GPR_U32(ctx, 31, 0x134C14u);
    ctx->pc = 0x134C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C0Cu;
    // 0x134c10: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134C0Cu, 0x134C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C14u;
label_134c14:
    // 0x134c14: 0x10000019  b           . + 4 + (0x19 << 2)
label_134c18:
    if (ctx->pc == 0x134C18u) {
        ctx->pc = 0x134C1Cu;
        goto label_134c1c;
    }
    ctx->pc = 0x134C14u;
    {
        const bool branch_taken_0x134c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c14) {
            ctx->pc = 0x134C7Cu;
            goto label_134c7c;
        }
    }
    ctx->pc = 0x134C1Cu;
label_134c1c:
    // 0x134c1c: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134c20:
    // 0x134c20: 0xc080874  jal         func_2021D0
label_134c24:
    if (ctx->pc == 0x134C24u) {
        ctx->pc = 0x134C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C20u;
        // 0x134c24: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C28u;
        goto label_134c28;
    }
    ctx->pc = 0x134C20u;
    SET_GPR_U32(ctx, 31, 0x134C28u);
    ctx->pc = 0x134C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C20u;
    // 0x134c24: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134C20u, 0x134C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C28u;
label_134c28:
    // 0x134c28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134c2c:
    // 0x134c2c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x134c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_134c30:
    // 0x134c30: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
label_134c34:
    // 0x134c34: 0xc0805e6  jal         func_201798
label_134c38:
    if (ctx->pc == 0x134C38u) {
        ctx->pc = 0x134C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C34u;
        // 0x134c38: 0x27a60408  addiu       $a2, $sp, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C3Cu;
        goto label_134c3c;
    }
    ctx->pc = 0x134C34u;
    SET_GPR_U32(ctx, 31, 0x134C3Cu);
    ctx->pc = 0x134C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C34u;
    // 0x134c38: 0x27a60408  addiu       $a2, $sp, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x134C34u, 0x134C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C3Cu;
label_134c3c:
    // 0x134c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134c40:
    // 0x134c40: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_134c44:
    if (ctx->pc == 0x134C44u) {
        ctx->pc = 0x134C48u;
        goto label_134c48;
    }
    ctx->pc = 0x134C40u;
    {
        const bool branch_taken_0x134c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x134c40) {
            ctx->pc = 0x134C60u;
            goto label_134c60;
        }
    }
    ctx->pc = 0x134C48u;
label_134c48:
    // 0x134c48: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134c4c:
    // 0x134c4c: 0x8fa60408  lw          $a2, 0x408($sp)
    ctx->pc = 0x134c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_134c50:
    // 0x134c50: 0xc04f75c  jal         func_13DD70
label_134c54:
    if (ctx->pc == 0x134C54u) {
        ctx->pc = 0x134C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C50u;
        // 0x134c54: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C58u;
        goto label_134c58;
    }
    ctx->pc = 0x134C50u;
    SET_GPR_U32(ctx, 31, 0x134C58u);
    ctx->pc = 0x134C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C50u;
    // 0x134c54: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134C50u, 0x134C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C58u;
label_134c58:
    // 0x134c58: 0x10000008  b           . + 4 + (0x8 << 2)
label_134c5c:
    if (ctx->pc == 0x134C5Cu) {
        ctx->pc = 0x134C60u;
        goto label_134c60;
    }
    ctx->pc = 0x134C58u;
    {
        const bool branch_taken_0x134c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c58) {
            ctx->pc = 0x134C7Cu;
            goto label_134c7c;
        }
    }
    ctx->pc = 0x134C60u;
label_134c60:
    // 0x134c60: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134c64:
    // 0x134c64: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134c68:
    // 0x134c68: 0xc04f75c  jal         func_13DD70
label_134c6c:
    if (ctx->pc == 0x134C6Cu) {
        ctx->pc = 0x134C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C68u;
        // 0x134c6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134C70u;
        goto label_134c70;
    }
    ctx->pc = 0x134C68u;
    SET_GPR_U32(ctx, 31, 0x134C70u);
    ctx->pc = 0x134C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C68u;
    // 0x134c6c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134C68u, 0x134C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C70u;
label_134c70:
    // 0x134c70: 0x10000002  b           . + 4 + (0x2 << 2)
label_134c74:
    if (ctx->pc == 0x134C74u) {
        ctx->pc = 0x134C78u;
        goto label_134c78;
    }
    ctx->pc = 0x134C70u;
    {
        const bool branch_taken_0x134c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c70) {
            ctx->pc = 0x134C7Cu;
            goto label_134c7c;
        }
    }
    ctx->pc = 0x134C78u;
label_134c78:
    // 0x134c78: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x134c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_134c7c:
    // 0x134c7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x134c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_134c80:
    // 0x134c80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x134c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_134c84:
    // 0x134c84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x134c84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_134c88:
    // 0x134c88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x134c88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_134c8c:
    // 0x134c8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_134c90:
    // 0x134c90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x134c90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_134c94:
    // 0x134c94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_134c98:
    // 0x134c98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_134c9c:
    // 0x134c9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_134ca0:
    // 0x134ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_134ca4:
    // 0x134ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_134ca8:
    // 0x134ca8: 0x3e00008  jr          $ra
label_134cac:
    if (ctx->pc == 0x134CACu) {
        ctx->pc = 0x134CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CA8u;
        // 0x134cac: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134CB0u;
        goto label_fallthrough_0x134ca8;
    }
    ctx->pc = 0x134CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CA8u;
        // 0x134cac: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x134ca8:
    ctx->pc = 0x134CB0u;
}
