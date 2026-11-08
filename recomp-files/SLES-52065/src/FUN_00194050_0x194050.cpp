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

// Function: FUN_00194050
// Address: 0x194050 - 0x195dac
void FUN_00194050_0x194050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00194050_0x194050");
#endif

    switch (ctx->pc) {
        case 0x194050u: goto label_194050;
        case 0x194054u: goto label_194054;
        case 0x194058u: goto label_194058;
        case 0x19405cu: goto label_19405c;
        case 0x194060u: goto label_194060;
        case 0x194064u: goto label_194064;
        case 0x194068u: goto label_194068;
        case 0x19406cu: goto label_19406c;
        case 0x194070u: goto label_194070;
        case 0x194074u: goto label_194074;
        case 0x194078u: goto label_194078;
        case 0x19407cu: goto label_19407c;
        case 0x194080u: goto label_194080;
        case 0x194084u: goto label_194084;
        case 0x194088u: goto label_194088;
        case 0x19408cu: goto label_19408c;
        case 0x194090u: goto label_194090;
        case 0x194094u: goto label_194094;
        case 0x194098u: goto label_194098;
        case 0x19409cu: goto label_19409c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940a4u: goto label_1940a4;
        case 0x1940a8u: goto label_1940a8;
        case 0x1940acu: goto label_1940ac;
        case 0x1940b0u: goto label_1940b0;
        case 0x1940b4u: goto label_1940b4;
        case 0x1940b8u: goto label_1940b8;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940c0u: goto label_1940c0;
        case 0x1940c4u: goto label_1940c4;
        case 0x1940c8u: goto label_1940c8;
        case 0x1940ccu: goto label_1940cc;
        case 0x1940d0u: goto label_1940d0;
        case 0x1940d4u: goto label_1940d4;
        case 0x1940d8u: goto label_1940d8;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940e0u: goto label_1940e0;
        case 0x1940e4u: goto label_1940e4;
        case 0x1940e8u: goto label_1940e8;
        case 0x1940ecu: goto label_1940ec;
        case 0x1940f0u: goto label_1940f0;
        case 0x1940f4u: goto label_1940f4;
        case 0x1940f8u: goto label_1940f8;
        case 0x1940fcu: goto label_1940fc;
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        case 0x194120u: goto label_194120;
        case 0x194124u: goto label_194124;
        case 0x194128u: goto label_194128;
        case 0x19412cu: goto label_19412c;
        case 0x194130u: goto label_194130;
        case 0x194134u: goto label_194134;
        case 0x194138u: goto label_194138;
        case 0x19413cu: goto label_19413c;
        case 0x194140u: goto label_194140;
        case 0x194144u: goto label_194144;
        case 0x194148u: goto label_194148;
        case 0x19414cu: goto label_19414c;
        case 0x194150u: goto label_194150;
        case 0x194154u: goto label_194154;
        case 0x194158u: goto label_194158;
        case 0x19415cu: goto label_19415c;
        case 0x194160u: goto label_194160;
        case 0x194164u: goto label_194164;
        case 0x194168u: goto label_194168;
        case 0x19416cu: goto label_19416c;
        case 0x194170u: goto label_194170;
        case 0x194174u: goto label_194174;
        case 0x194178u: goto label_194178;
        case 0x19417cu: goto label_19417c;
        case 0x194180u: goto label_194180;
        case 0x194184u: goto label_194184;
        case 0x194188u: goto label_194188;
        case 0x19418cu: goto label_19418c;
        case 0x194190u: goto label_194190;
        case 0x194194u: goto label_194194;
        case 0x194198u: goto label_194198;
        case 0x19419cu: goto label_19419c;
        case 0x1941a0u: goto label_1941a0;
        case 0x1941a4u: goto label_1941a4;
        case 0x1941a8u: goto label_1941a8;
        case 0x1941acu: goto label_1941ac;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941b4u: goto label_1941b4;
        case 0x1941b8u: goto label_1941b8;
        case 0x1941bcu: goto label_1941bc;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941c4u: goto label_1941c4;
        case 0x1941c8u: goto label_1941c8;
        case 0x1941ccu: goto label_1941cc;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941d4u: goto label_1941d4;
        case 0x1941d8u: goto label_1941d8;
        case 0x1941dcu: goto label_1941dc;
        case 0x1941e0u: goto label_1941e0;
        case 0x1941e4u: goto label_1941e4;
        case 0x1941e8u: goto label_1941e8;
        case 0x1941ecu: goto label_1941ec;
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        case 0x1942c0u: goto label_1942c0;
        case 0x1942c4u: goto label_1942c4;
        case 0x1942c8u: goto label_1942c8;
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        case 0x1943c0u: goto label_1943c0;
        case 0x1943c4u: goto label_1943c4;
        case 0x1943c8u: goto label_1943c8;
        case 0x1943ccu: goto label_1943cc;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d4u: goto label_1943d4;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943dcu: goto label_1943dc;
        case 0x1943e0u: goto label_1943e0;
        case 0x1943e4u: goto label_1943e4;
        case 0x1943e8u: goto label_1943e8;
        case 0x1943ecu: goto label_1943ec;
        case 0x1943f0u: goto label_1943f0;
        case 0x1943f4u: goto label_1943f4;
        case 0x1943f8u: goto label_1943f8;
        case 0x1943fcu: goto label_1943fc;
        case 0x194400u: goto label_194400;
        case 0x194404u: goto label_194404;
        case 0x194408u: goto label_194408;
        case 0x19440cu: goto label_19440c;
        case 0x194410u: goto label_194410;
        case 0x194414u: goto label_194414;
        case 0x194418u: goto label_194418;
        case 0x19441cu: goto label_19441c;
        case 0x194420u: goto label_194420;
        case 0x194424u: goto label_194424;
        case 0x194428u: goto label_194428;
        case 0x19442cu: goto label_19442c;
        case 0x194430u: goto label_194430;
        case 0x194434u: goto label_194434;
        case 0x194438u: goto label_194438;
        case 0x19443cu: goto label_19443c;
        case 0x194440u: goto label_194440;
        case 0x194444u: goto label_194444;
        case 0x194448u: goto label_194448;
        case 0x19444cu: goto label_19444c;
        case 0x194450u: goto label_194450;
        case 0x194454u: goto label_194454;
        case 0x194458u: goto label_194458;
        case 0x19445cu: goto label_19445c;
        case 0x194460u: goto label_194460;
        case 0x194464u: goto label_194464;
        case 0x194468u: goto label_194468;
        case 0x19446cu: goto label_19446c;
        case 0x194470u: goto label_194470;
        case 0x194474u: goto label_194474;
        case 0x194478u: goto label_194478;
        case 0x19447cu: goto label_19447c;
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944e0u: goto label_1944e0;
        case 0x1944e4u: goto label_1944e4;
        case 0x1944e8u: goto label_1944e8;
        case 0x1944ecu: goto label_1944ec;
        case 0x1944f0u: goto label_1944f0;
        case 0x1944f4u: goto label_1944f4;
        case 0x1944f8u: goto label_1944f8;
        case 0x1944fcu: goto label_1944fc;
        case 0x194500u: goto label_194500;
        case 0x194504u: goto label_194504;
        case 0x194508u: goto label_194508;
        case 0x19450cu: goto label_19450c;
        case 0x194510u: goto label_194510;
        case 0x194514u: goto label_194514;
        case 0x194518u: goto label_194518;
        case 0x19451cu: goto label_19451c;
        case 0x194520u: goto label_194520;
        case 0x194524u: goto label_194524;
        case 0x194528u: goto label_194528;
        case 0x19452cu: goto label_19452c;
        case 0x194530u: goto label_194530;
        case 0x194534u: goto label_194534;
        case 0x194538u: goto label_194538;
        case 0x19453cu: goto label_19453c;
        case 0x194540u: goto label_194540;
        case 0x194544u: goto label_194544;
        case 0x194548u: goto label_194548;
        case 0x19454cu: goto label_19454c;
        case 0x194550u: goto label_194550;
        case 0x194554u: goto label_194554;
        case 0x194558u: goto label_194558;
        case 0x19455cu: goto label_19455c;
        case 0x194560u: goto label_194560;
        case 0x194564u: goto label_194564;
        case 0x194568u: goto label_194568;
        case 0x19456cu: goto label_19456c;
        case 0x194570u: goto label_194570;
        case 0x194574u: goto label_194574;
        case 0x194578u: goto label_194578;
        case 0x19457cu: goto label_19457c;
        case 0x194580u: goto label_194580;
        case 0x194584u: goto label_194584;
        case 0x194588u: goto label_194588;
        case 0x19458cu: goto label_19458c;
        case 0x194590u: goto label_194590;
        case 0x194594u: goto label_194594;
        case 0x194598u: goto label_194598;
        case 0x19459cu: goto label_19459c;
        case 0x1945a0u: goto label_1945a0;
        case 0x1945a4u: goto label_1945a4;
        case 0x1945a8u: goto label_1945a8;
        case 0x1945acu: goto label_1945ac;
        case 0x1945b0u: goto label_1945b0;
        case 0x1945b4u: goto label_1945b4;
        case 0x1945b8u: goto label_1945b8;
        case 0x1945bcu: goto label_1945bc;
        case 0x1945c0u: goto label_1945c0;
        case 0x1945c4u: goto label_1945c4;
        case 0x1945c8u: goto label_1945c8;
        case 0x1945ccu: goto label_1945cc;
        case 0x1945d0u: goto label_1945d0;
        case 0x1945d4u: goto label_1945d4;
        case 0x1945d8u: goto label_1945d8;
        case 0x1945dcu: goto label_1945dc;
        case 0x1945e0u: goto label_1945e0;
        case 0x1945e4u: goto label_1945e4;
        case 0x1945e8u: goto label_1945e8;
        case 0x1945ecu: goto label_1945ec;
        case 0x1945f0u: goto label_1945f0;
        case 0x1945f4u: goto label_1945f4;
        case 0x1945f8u: goto label_1945f8;
        case 0x1945fcu: goto label_1945fc;
        case 0x194600u: goto label_194600;
        case 0x194604u: goto label_194604;
        case 0x194608u: goto label_194608;
        case 0x19460cu: goto label_19460c;
        case 0x194610u: goto label_194610;
        case 0x194614u: goto label_194614;
        case 0x194618u: goto label_194618;
        case 0x19461cu: goto label_19461c;
        case 0x194620u: goto label_194620;
        case 0x194624u: goto label_194624;
        case 0x194628u: goto label_194628;
        case 0x19462cu: goto label_19462c;
        case 0x194630u: goto label_194630;
        case 0x194634u: goto label_194634;
        case 0x194638u: goto label_194638;
        case 0x19463cu: goto label_19463c;
        case 0x194640u: goto label_194640;
        case 0x194644u: goto label_194644;
        case 0x194648u: goto label_194648;
        case 0x19464cu: goto label_19464c;
        case 0x194650u: goto label_194650;
        case 0x194654u: goto label_194654;
        case 0x194658u: goto label_194658;
        case 0x19465cu: goto label_19465c;
        case 0x194660u: goto label_194660;
        case 0x194664u: goto label_194664;
        case 0x194668u: goto label_194668;
        case 0x19466cu: goto label_19466c;
        case 0x194670u: goto label_194670;
        case 0x194674u: goto label_194674;
        case 0x194678u: goto label_194678;
        case 0x19467cu: goto label_19467c;
        case 0x194680u: goto label_194680;
        case 0x194684u: goto label_194684;
        case 0x194688u: goto label_194688;
        case 0x19468cu: goto label_19468c;
        case 0x194690u: goto label_194690;
        case 0x194694u: goto label_194694;
        case 0x194698u: goto label_194698;
        case 0x19469cu: goto label_19469c;
        case 0x1946a0u: goto label_1946a0;
        case 0x1946a4u: goto label_1946a4;
        case 0x1946a8u: goto label_1946a8;
        case 0x1946acu: goto label_1946ac;
        case 0x1946b0u: goto label_1946b0;
        case 0x1946b4u: goto label_1946b4;
        case 0x1946b8u: goto label_1946b8;
        case 0x1946bcu: goto label_1946bc;
        case 0x1946c0u: goto label_1946c0;
        case 0x1946c4u: goto label_1946c4;
        case 0x1946c8u: goto label_1946c8;
        case 0x1946ccu: goto label_1946cc;
        case 0x1946d0u: goto label_1946d0;
        case 0x1946d4u: goto label_1946d4;
        case 0x1946d8u: goto label_1946d8;
        case 0x1946dcu: goto label_1946dc;
        case 0x1946e0u: goto label_1946e0;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946e8u: goto label_1946e8;
        case 0x1946ecu: goto label_1946ec;
        case 0x1946f0u: goto label_1946f0;
        case 0x1946f4u: goto label_1946f4;
        case 0x1946f8u: goto label_1946f8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194700u: goto label_194700;
        case 0x194704u: goto label_194704;
        case 0x194708u: goto label_194708;
        case 0x19470cu: goto label_19470c;
        case 0x194710u: goto label_194710;
        case 0x194714u: goto label_194714;
        case 0x194718u: goto label_194718;
        case 0x19471cu: goto label_19471c;
        case 0x194720u: goto label_194720;
        case 0x194724u: goto label_194724;
        case 0x194728u: goto label_194728;
        case 0x19472cu: goto label_19472c;
        case 0x194730u: goto label_194730;
        case 0x194734u: goto label_194734;
        case 0x194738u: goto label_194738;
        case 0x19473cu: goto label_19473c;
        case 0x194740u: goto label_194740;
        case 0x194744u: goto label_194744;
        case 0x194748u: goto label_194748;
        case 0x19474cu: goto label_19474c;
        case 0x194750u: goto label_194750;
        case 0x194754u: goto label_194754;
        case 0x194758u: goto label_194758;
        case 0x19475cu: goto label_19475c;
        case 0x194760u: goto label_194760;
        case 0x194764u: goto label_194764;
        case 0x194768u: goto label_194768;
        case 0x19476cu: goto label_19476c;
        case 0x194770u: goto label_194770;
        case 0x194774u: goto label_194774;
        case 0x194778u: goto label_194778;
        case 0x19477cu: goto label_19477c;
        case 0x194780u: goto label_194780;
        case 0x194784u: goto label_194784;
        case 0x194788u: goto label_194788;
        case 0x19478cu: goto label_19478c;
        case 0x194790u: goto label_194790;
        case 0x194794u: goto label_194794;
        case 0x194798u: goto label_194798;
        case 0x19479cu: goto label_19479c;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947a4u: goto label_1947a4;
        case 0x1947a8u: goto label_1947a8;
        case 0x1947acu: goto label_1947ac;
        case 0x1947b0u: goto label_1947b0;
        case 0x1947b4u: goto label_1947b4;
        case 0x1947b8u: goto label_1947b8;
        case 0x1947bcu: goto label_1947bc;
        case 0x1947c0u: goto label_1947c0;
        case 0x1947c4u: goto label_1947c4;
        case 0x1947c8u: goto label_1947c8;
        case 0x1947ccu: goto label_1947cc;
        case 0x1947d0u: goto label_1947d0;
        case 0x1947d4u: goto label_1947d4;
        case 0x1947d8u: goto label_1947d8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947e0u: goto label_1947e0;
        case 0x1947e4u: goto label_1947e4;
        case 0x1947e8u: goto label_1947e8;
        case 0x1947ecu: goto label_1947ec;
        case 0x1947f0u: goto label_1947f0;
        case 0x1947f4u: goto label_1947f4;
        case 0x1947f8u: goto label_1947f8;
        case 0x1947fcu: goto label_1947fc;
        case 0x194800u: goto label_194800;
        case 0x194804u: goto label_194804;
        case 0x194808u: goto label_194808;
        case 0x19480cu: goto label_19480c;
        case 0x194810u: goto label_194810;
        case 0x194814u: goto label_194814;
        case 0x194818u: goto label_194818;
        case 0x19481cu: goto label_19481c;
        case 0x194820u: goto label_194820;
        case 0x194824u: goto label_194824;
        case 0x194828u: goto label_194828;
        case 0x19482cu: goto label_19482c;
        case 0x194830u: goto label_194830;
        case 0x194834u: goto label_194834;
        case 0x194838u: goto label_194838;
        case 0x19483cu: goto label_19483c;
        case 0x194840u: goto label_194840;
        case 0x194844u: goto label_194844;
        case 0x194848u: goto label_194848;
        case 0x19484cu: goto label_19484c;
        case 0x194850u: goto label_194850;
        case 0x194854u: goto label_194854;
        case 0x194858u: goto label_194858;
        case 0x19485cu: goto label_19485c;
        case 0x194860u: goto label_194860;
        case 0x194864u: goto label_194864;
        case 0x194868u: goto label_194868;
        case 0x19486cu: goto label_19486c;
        case 0x194870u: goto label_194870;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x19487cu: goto label_19487c;
        case 0x194880u: goto label_194880;
        case 0x194884u: goto label_194884;
        case 0x194888u: goto label_194888;
        case 0x19488cu: goto label_19488c;
        case 0x194890u: goto label_194890;
        case 0x194894u: goto label_194894;
        case 0x194898u: goto label_194898;
        case 0x19489cu: goto label_19489c;
        case 0x1948a0u: goto label_1948a0;
        case 0x1948a4u: goto label_1948a4;
        case 0x1948a8u: goto label_1948a8;
        case 0x1948acu: goto label_1948ac;
        case 0x1948b0u: goto label_1948b0;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948b8u: goto label_1948b8;
        case 0x1948bcu: goto label_1948bc;
        case 0x1948c0u: goto label_1948c0;
        case 0x1948c4u: goto label_1948c4;
        case 0x1948c8u: goto label_1948c8;
        case 0x1948ccu: goto label_1948cc;
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        case 0x194c28u: goto label_194c28;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c30u: goto label_194c30;
        case 0x194c34u: goto label_194c34;
        case 0x194c38u: goto label_194c38;
        case 0x194c3cu: goto label_194c3c;
        case 0x194c40u: goto label_194c40;
        case 0x194c44u: goto label_194c44;
        case 0x194c48u: goto label_194c48;
        case 0x194c4cu: goto label_194c4c;
        case 0x194c50u: goto label_194c50;
        case 0x194c54u: goto label_194c54;
        case 0x194c58u: goto label_194c58;
        case 0x194c5cu: goto label_194c5c;
        case 0x194c60u: goto label_194c60;
        case 0x194c64u: goto label_194c64;
        case 0x194c68u: goto label_194c68;
        case 0x194c6cu: goto label_194c6c;
        case 0x194c70u: goto label_194c70;
        case 0x194c74u: goto label_194c74;
        case 0x194c78u: goto label_194c78;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c80u: goto label_194c80;
        case 0x194c84u: goto label_194c84;
        case 0x194c88u: goto label_194c88;
        case 0x194c8cu: goto label_194c8c;
        case 0x194c90u: goto label_194c90;
        case 0x194c94u: goto label_194c94;
        case 0x194c98u: goto label_194c98;
        case 0x194c9cu: goto label_194c9c;
        case 0x194ca0u: goto label_194ca0;
        case 0x194ca4u: goto label_194ca4;
        case 0x194ca8u: goto label_194ca8;
        case 0x194cacu: goto label_194cac;
        case 0x194cb0u: goto label_194cb0;
        case 0x194cb4u: goto label_194cb4;
        case 0x194cb8u: goto label_194cb8;
        case 0x194cbcu: goto label_194cbc;
        case 0x194cc0u: goto label_194cc0;
        case 0x194cc4u: goto label_194cc4;
        case 0x194cc8u: goto label_194cc8;
        case 0x194cccu: goto label_194ccc;
        case 0x194cd0u: goto label_194cd0;
        case 0x194cd4u: goto label_194cd4;
        case 0x194cd8u: goto label_194cd8;
        case 0x194cdcu: goto label_194cdc;
        case 0x194ce0u: goto label_194ce0;
        case 0x194ce4u: goto label_194ce4;
        case 0x194ce8u: goto label_194ce8;
        case 0x194cecu: goto label_194cec;
        case 0x194cf0u: goto label_194cf0;
        case 0x194cf4u: goto label_194cf4;
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        case 0x194d58u: goto label_194d58;
        case 0x194d5cu: goto label_194d5c;
        case 0x194d60u: goto label_194d60;
        case 0x194d64u: goto label_194d64;
        case 0x194d68u: goto label_194d68;
        case 0x194d6cu: goto label_194d6c;
        case 0x194d70u: goto label_194d70;
        case 0x194d74u: goto label_194d74;
        case 0x194d78u: goto label_194d78;
        case 0x194d7cu: goto label_194d7c;
        case 0x194d80u: goto label_194d80;
        case 0x194d84u: goto label_194d84;
        case 0x194d88u: goto label_194d88;
        case 0x194d8cu: goto label_194d8c;
        case 0x194d90u: goto label_194d90;
        case 0x194d94u: goto label_194d94;
        case 0x194d98u: goto label_194d98;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194da4u: goto label_194da4;
        case 0x194da8u: goto label_194da8;
        case 0x194dacu: goto label_194dac;
        case 0x194db0u: goto label_194db0;
        case 0x194db4u: goto label_194db4;
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        case 0x195040u: goto label_195040;
        case 0x195044u: goto label_195044;
        case 0x195048u: goto label_195048;
        case 0x19504cu: goto label_19504c;
        case 0x195050u: goto label_195050;
        case 0x195054u: goto label_195054;
        case 0x195058u: goto label_195058;
        case 0x19505cu: goto label_19505c;
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950b0u: goto label_1950b0;
        case 0x1950b4u: goto label_1950b4;
        case 0x1950b8u: goto label_1950b8;
        case 0x1950bcu: goto label_1950bc;
        case 0x1950c0u: goto label_1950c0;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950c8u: goto label_1950c8;
        case 0x1950ccu: goto label_1950cc;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950d4u: goto label_1950d4;
        case 0x1950d8u: goto label_1950d8;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950e0u: goto label_1950e0;
        case 0x1950e4u: goto label_1950e4;
        case 0x1950e8u: goto label_1950e8;
        case 0x1950ecu: goto label_1950ec;
        case 0x1950f0u: goto label_1950f0;
        case 0x1950f4u: goto label_1950f4;
        case 0x1950f8u: goto label_1950f8;
        case 0x1950fcu: goto label_1950fc;
        case 0x195100u: goto label_195100;
        case 0x195104u: goto label_195104;
        case 0x195108u: goto label_195108;
        case 0x19510cu: goto label_19510c;
        case 0x195110u: goto label_195110;
        case 0x195114u: goto label_195114;
        case 0x195118u: goto label_195118;
        case 0x19511cu: goto label_19511c;
        case 0x195120u: goto label_195120;
        case 0x195124u: goto label_195124;
        case 0x195128u: goto label_195128;
        case 0x19512cu: goto label_19512c;
        case 0x195130u: goto label_195130;
        case 0x195134u: goto label_195134;
        case 0x195138u: goto label_195138;
        case 0x19513cu: goto label_19513c;
        case 0x195140u: goto label_195140;
        case 0x195144u: goto label_195144;
        case 0x195148u: goto label_195148;
        case 0x19514cu: goto label_19514c;
        case 0x195150u: goto label_195150;
        case 0x195154u: goto label_195154;
        case 0x195158u: goto label_195158;
        case 0x19515cu: goto label_19515c;
        case 0x195160u: goto label_195160;
        case 0x195164u: goto label_195164;
        case 0x195168u: goto label_195168;
        case 0x19516cu: goto label_19516c;
        case 0x195170u: goto label_195170;
        case 0x195174u: goto label_195174;
        case 0x195178u: goto label_195178;
        case 0x19517cu: goto label_19517c;
        case 0x195180u: goto label_195180;
        case 0x195184u: goto label_195184;
        case 0x195188u: goto label_195188;
        case 0x19518cu: goto label_19518c;
        case 0x195190u: goto label_195190;
        case 0x195194u: goto label_195194;
        case 0x195198u: goto label_195198;
        case 0x19519cu: goto label_19519c;
        case 0x1951a0u: goto label_1951a0;
        case 0x1951a4u: goto label_1951a4;
        case 0x1951a8u: goto label_1951a8;
        case 0x1951acu: goto label_1951ac;
        case 0x1951b0u: goto label_1951b0;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951b8u: goto label_1951b8;
        case 0x1951bcu: goto label_1951bc;
        case 0x1951c0u: goto label_1951c0;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951c8u: goto label_1951c8;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951d0u: goto label_1951d0;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951d8u: goto label_1951d8;
        case 0x1951dcu: goto label_1951dc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951e4u: goto label_1951e4;
        case 0x1951e8u: goto label_1951e8;
        case 0x1951ecu: goto label_1951ec;
        case 0x1951f0u: goto label_1951f0;
        case 0x1951f4u: goto label_1951f4;
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        case 0x195220u: goto label_195220;
        case 0x195224u: goto label_195224;
        case 0x195228u: goto label_195228;
        case 0x19522cu: goto label_19522c;
        case 0x195230u: goto label_195230;
        case 0x195234u: goto label_195234;
        case 0x195238u: goto label_195238;
        case 0x19523cu: goto label_19523c;
        case 0x195240u: goto label_195240;
        case 0x195244u: goto label_195244;
        case 0x195248u: goto label_195248;
        case 0x19524cu: goto label_19524c;
        case 0x195250u: goto label_195250;
        case 0x195254u: goto label_195254;
        case 0x195258u: goto label_195258;
        case 0x19525cu: goto label_19525c;
        case 0x195260u: goto label_195260;
        case 0x195264u: goto label_195264;
        case 0x195268u: goto label_195268;
        case 0x19526cu: goto label_19526c;
        case 0x195270u: goto label_195270;
        case 0x195274u: goto label_195274;
        case 0x195278u: goto label_195278;
        case 0x19527cu: goto label_19527c;
        case 0x195280u: goto label_195280;
        case 0x195284u: goto label_195284;
        case 0x195288u: goto label_195288;
        case 0x19528cu: goto label_19528c;
        case 0x195290u: goto label_195290;
        case 0x195294u: goto label_195294;
        case 0x195298u: goto label_195298;
        case 0x19529cu: goto label_19529c;
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a4u: goto label_1952a4;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952acu: goto label_1952ac;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952b4u: goto label_1952b4;
        case 0x1952b8u: goto label_1952b8;
        case 0x1952bcu: goto label_1952bc;
        case 0x1952c0u: goto label_1952c0;
        case 0x1952c4u: goto label_1952c4;
        case 0x1952c8u: goto label_1952c8;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952d4u: goto label_1952d4;
        case 0x1952d8u: goto label_1952d8;
        case 0x1952dcu: goto label_1952dc;
        case 0x1952e0u: goto label_1952e0;
        case 0x1952e4u: goto label_1952e4;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952ecu: goto label_1952ec;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f4u: goto label_1952f4;
        case 0x1952f8u: goto label_1952f8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195300u: goto label_195300;
        case 0x195304u: goto label_195304;
        case 0x195308u: goto label_195308;
        case 0x19530cu: goto label_19530c;
        case 0x195310u: goto label_195310;
        case 0x195314u: goto label_195314;
        case 0x195318u: goto label_195318;
        case 0x19531cu: goto label_19531c;
        case 0x195320u: goto label_195320;
        case 0x195324u: goto label_195324;
        case 0x195328u: goto label_195328;
        case 0x19532cu: goto label_19532c;
        case 0x195330u: goto label_195330;
        case 0x195334u: goto label_195334;
        case 0x195338u: goto label_195338;
        case 0x19533cu: goto label_19533c;
        case 0x195340u: goto label_195340;
        case 0x195344u: goto label_195344;
        case 0x195348u: goto label_195348;
        case 0x19534cu: goto label_19534c;
        case 0x195350u: goto label_195350;
        case 0x195354u: goto label_195354;
        case 0x195358u: goto label_195358;
        case 0x19535cu: goto label_19535c;
        case 0x195360u: goto label_195360;
        case 0x195364u: goto label_195364;
        case 0x195368u: goto label_195368;
        case 0x19536cu: goto label_19536c;
        case 0x195370u: goto label_195370;
        case 0x195374u: goto label_195374;
        case 0x195378u: goto label_195378;
        case 0x19537cu: goto label_19537c;
        case 0x195380u: goto label_195380;
        case 0x195384u: goto label_195384;
        case 0x195388u: goto label_195388;
        case 0x19538cu: goto label_19538c;
        case 0x195390u: goto label_195390;
        case 0x195394u: goto label_195394;
        case 0x195398u: goto label_195398;
        case 0x19539cu: goto label_19539c;
        case 0x1953a0u: goto label_1953a0;
        case 0x1953a4u: goto label_1953a4;
        case 0x1953a8u: goto label_1953a8;
        case 0x1953acu: goto label_1953ac;
        case 0x1953b0u: goto label_1953b0;
        case 0x1953b4u: goto label_1953b4;
        case 0x1953b8u: goto label_1953b8;
        case 0x1953bcu: goto label_1953bc;
        case 0x1953c0u: goto label_1953c0;
        case 0x1953c4u: goto label_1953c4;
        case 0x1953c8u: goto label_1953c8;
        case 0x1953ccu: goto label_1953cc;
        case 0x1953d0u: goto label_1953d0;
        case 0x1953d4u: goto label_1953d4;
        case 0x1953d8u: goto label_1953d8;
        case 0x1953dcu: goto label_1953dc;
        case 0x1953e0u: goto label_1953e0;
        case 0x1953e4u: goto label_1953e4;
        case 0x1953e8u: goto label_1953e8;
        case 0x1953ecu: goto label_1953ec;
        case 0x1953f0u: goto label_1953f0;
        case 0x1953f4u: goto label_1953f4;
        case 0x1953f8u: goto label_1953f8;
        case 0x1953fcu: goto label_1953fc;
        case 0x195400u: goto label_195400;
        case 0x195404u: goto label_195404;
        case 0x195408u: goto label_195408;
        case 0x19540cu: goto label_19540c;
        case 0x195410u: goto label_195410;
        case 0x195414u: goto label_195414;
        case 0x195418u: goto label_195418;
        case 0x19541cu: goto label_19541c;
        case 0x195420u: goto label_195420;
        case 0x195424u: goto label_195424;
        case 0x195428u: goto label_195428;
        case 0x19542cu: goto label_19542c;
        case 0x195430u: goto label_195430;
        case 0x195434u: goto label_195434;
        case 0x195438u: goto label_195438;
        case 0x19543cu: goto label_19543c;
        case 0x195440u: goto label_195440;
        case 0x195444u: goto label_195444;
        case 0x195448u: goto label_195448;
        case 0x19544cu: goto label_19544c;
        case 0x195450u: goto label_195450;
        case 0x195454u: goto label_195454;
        case 0x195458u: goto label_195458;
        case 0x19545cu: goto label_19545c;
        case 0x195460u: goto label_195460;
        case 0x195464u: goto label_195464;
        case 0x195468u: goto label_195468;
        case 0x19546cu: goto label_19546c;
        case 0x195470u: goto label_195470;
        case 0x195474u: goto label_195474;
        case 0x195478u: goto label_195478;
        case 0x19547cu: goto label_19547c;
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954ecu: goto label_1954ec;
        case 0x1954f0u: goto label_1954f0;
        case 0x1954f4u: goto label_1954f4;
        case 0x1954f8u: goto label_1954f8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195500u: goto label_195500;
        case 0x195504u: goto label_195504;
        case 0x195508u: goto label_195508;
        case 0x19550cu: goto label_19550c;
        case 0x195510u: goto label_195510;
        case 0x195514u: goto label_195514;
        case 0x195518u: goto label_195518;
        case 0x19551cu: goto label_19551c;
        case 0x195520u: goto label_195520;
        case 0x195524u: goto label_195524;
        case 0x195528u: goto label_195528;
        case 0x19552cu: goto label_19552c;
        case 0x195530u: goto label_195530;
        case 0x195534u: goto label_195534;
        case 0x195538u: goto label_195538;
        case 0x19553cu: goto label_19553c;
        case 0x195540u: goto label_195540;
        case 0x195544u: goto label_195544;
        case 0x195548u: goto label_195548;
        case 0x19554cu: goto label_19554c;
        case 0x195550u: goto label_195550;
        case 0x195554u: goto label_195554;
        case 0x195558u: goto label_195558;
        case 0x19555cu: goto label_19555c;
        case 0x195560u: goto label_195560;
        case 0x195564u: goto label_195564;
        case 0x195568u: goto label_195568;
        case 0x19556cu: goto label_19556c;
        case 0x195570u: goto label_195570;
        case 0x195574u: goto label_195574;
        case 0x195578u: goto label_195578;
        case 0x19557cu: goto label_19557c;
        case 0x195580u: goto label_195580;
        case 0x195584u: goto label_195584;
        case 0x195588u: goto label_195588;
        case 0x19558cu: goto label_19558c;
        case 0x195590u: goto label_195590;
        case 0x195594u: goto label_195594;
        case 0x195598u: goto label_195598;
        case 0x19559cu: goto label_19559c;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955a8u: goto label_1955a8;
        case 0x1955acu: goto label_1955ac;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955b8u: goto label_1955b8;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c0u: goto label_1955c0;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955ccu: goto label_1955cc;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955e0u: goto label_1955e0;
        case 0x1955e4u: goto label_1955e4;
        case 0x1955e8u: goto label_1955e8;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955f0u: goto label_1955f0;
        case 0x1955f4u: goto label_1955f4;
        case 0x1955f8u: goto label_1955f8;
        case 0x1955fcu: goto label_1955fc;
        case 0x195600u: goto label_195600;
        case 0x195604u: goto label_195604;
        case 0x195608u: goto label_195608;
        case 0x19560cu: goto label_19560c;
        case 0x195610u: goto label_195610;
        case 0x195614u: goto label_195614;
        case 0x195618u: goto label_195618;
        case 0x19561cu: goto label_19561c;
        case 0x195620u: goto label_195620;
        case 0x195624u: goto label_195624;
        case 0x195628u: goto label_195628;
        case 0x19562cu: goto label_19562c;
        case 0x195630u: goto label_195630;
        case 0x195634u: goto label_195634;
        case 0x195638u: goto label_195638;
        case 0x19563cu: goto label_19563c;
        case 0x195640u: goto label_195640;
        case 0x195644u: goto label_195644;
        case 0x195648u: goto label_195648;
        case 0x19564cu: goto label_19564c;
        case 0x195650u: goto label_195650;
        case 0x195654u: goto label_195654;
        case 0x195658u: goto label_195658;
        case 0x19565cu: goto label_19565c;
        case 0x195660u: goto label_195660;
        case 0x195664u: goto label_195664;
        case 0x195668u: goto label_195668;
        case 0x19566cu: goto label_19566c;
        case 0x195670u: goto label_195670;
        case 0x195674u: goto label_195674;
        case 0x195678u: goto label_195678;
        case 0x19567cu: goto label_19567c;
        case 0x195680u: goto label_195680;
        case 0x195684u: goto label_195684;
        case 0x195688u: goto label_195688;
        case 0x19568cu: goto label_19568c;
        case 0x195690u: goto label_195690;
        case 0x195694u: goto label_195694;
        case 0x195698u: goto label_195698;
        case 0x19569cu: goto label_19569c;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956a8u: goto label_1956a8;
        case 0x1956acu: goto label_1956ac;
        case 0x1956b0u: goto label_1956b0;
        case 0x1956b4u: goto label_1956b4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956c4u: goto label_1956c4;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956ccu: goto label_1956cc;
        case 0x1956d0u: goto label_1956d0;
        case 0x1956d4u: goto label_1956d4;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956dcu: goto label_1956dc;
        case 0x1956e0u: goto label_1956e0;
        case 0x1956e4u: goto label_1956e4;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956ecu: goto label_1956ec;
        case 0x1956f0u: goto label_1956f0;
        case 0x1956f4u: goto label_1956f4;
        case 0x1956f8u: goto label_1956f8;
        case 0x1956fcu: goto label_1956fc;
        case 0x195700u: goto label_195700;
        case 0x195704u: goto label_195704;
        case 0x195708u: goto label_195708;
        case 0x19570cu: goto label_19570c;
        case 0x195710u: goto label_195710;
        case 0x195714u: goto label_195714;
        case 0x195718u: goto label_195718;
        case 0x19571cu: goto label_19571c;
        case 0x195720u: goto label_195720;
        case 0x195724u: goto label_195724;
        case 0x195728u: goto label_195728;
        case 0x19572cu: goto label_19572c;
        case 0x195730u: goto label_195730;
        case 0x195734u: goto label_195734;
        case 0x195738u: goto label_195738;
        case 0x19573cu: goto label_19573c;
        case 0x195740u: goto label_195740;
        case 0x195744u: goto label_195744;
        case 0x195748u: goto label_195748;
        case 0x19574cu: goto label_19574c;
        case 0x195750u: goto label_195750;
        case 0x195754u: goto label_195754;
        case 0x195758u: goto label_195758;
        case 0x19575cu: goto label_19575c;
        case 0x195760u: goto label_195760;
        case 0x195764u: goto label_195764;
        case 0x195768u: goto label_195768;
        case 0x19576cu: goto label_19576c;
        case 0x195770u: goto label_195770;
        case 0x195774u: goto label_195774;
        case 0x195778u: goto label_195778;
        case 0x19577cu: goto label_19577c;
        case 0x195780u: goto label_195780;
        case 0x195784u: goto label_195784;
        case 0x195788u: goto label_195788;
        case 0x19578cu: goto label_19578c;
        case 0x195790u: goto label_195790;
        case 0x195794u: goto label_195794;
        case 0x195798u: goto label_195798;
        case 0x19579cu: goto label_19579c;
        case 0x1957a0u: goto label_1957a0;
        case 0x1957a4u: goto label_1957a4;
        case 0x1957a8u: goto label_1957a8;
        case 0x1957acu: goto label_1957ac;
        case 0x1957b0u: goto label_1957b0;
        case 0x1957b4u: goto label_1957b4;
        case 0x1957b8u: goto label_1957b8;
        case 0x1957bcu: goto label_1957bc;
        case 0x1957c0u: goto label_1957c0;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957c8u: goto label_1957c8;
        case 0x1957ccu: goto label_1957cc;
        case 0x1957d0u: goto label_1957d0;
        case 0x1957d4u: goto label_1957d4;
        case 0x1957d8u: goto label_1957d8;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e0u: goto label_1957e0;
        case 0x1957e4u: goto label_1957e4;
        case 0x1957e8u: goto label_1957e8;
        case 0x1957ecu: goto label_1957ec;
        case 0x1957f0u: goto label_1957f0;
        case 0x1957f4u: goto label_1957f4;
        case 0x1957f8u: goto label_1957f8;
        case 0x1957fcu: goto label_1957fc;
        case 0x195800u: goto label_195800;
        case 0x195804u: goto label_195804;
        case 0x195808u: goto label_195808;
        case 0x19580cu: goto label_19580c;
        case 0x195810u: goto label_195810;
        case 0x195814u: goto label_195814;
        case 0x195818u: goto label_195818;
        case 0x19581cu: goto label_19581c;
        case 0x195820u: goto label_195820;
        case 0x195824u: goto label_195824;
        case 0x195828u: goto label_195828;
        case 0x19582cu: goto label_19582c;
        case 0x195830u: goto label_195830;
        case 0x195834u: goto label_195834;
        case 0x195838u: goto label_195838;
        case 0x19583cu: goto label_19583c;
        case 0x195840u: goto label_195840;
        case 0x195844u: goto label_195844;
        case 0x195848u: goto label_195848;
        case 0x19584cu: goto label_19584c;
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        case 0x195870u: goto label_195870;
        case 0x195874u: goto label_195874;
        case 0x195878u: goto label_195878;
        case 0x19587cu: goto label_19587c;
        case 0x195880u: goto label_195880;
        case 0x195884u: goto label_195884;
        case 0x195888u: goto label_195888;
        case 0x19588cu: goto label_19588c;
        case 0x195890u: goto label_195890;
        case 0x195894u: goto label_195894;
        case 0x195898u: goto label_195898;
        case 0x19589cu: goto label_19589c;
        case 0x1958a0u: goto label_1958a0;
        case 0x1958a4u: goto label_1958a4;
        case 0x1958a8u: goto label_1958a8;
        case 0x1958acu: goto label_1958ac;
        case 0x1958b0u: goto label_1958b0;
        case 0x1958b4u: goto label_1958b4;
        case 0x1958b8u: goto label_1958b8;
        case 0x1958bcu: goto label_1958bc;
        case 0x1958c0u: goto label_1958c0;
        case 0x1958c4u: goto label_1958c4;
        case 0x1958c8u: goto label_1958c8;
        case 0x1958ccu: goto label_1958cc;
        case 0x1958d0u: goto label_1958d0;
        case 0x1958d4u: goto label_1958d4;
        case 0x1958d8u: goto label_1958d8;
        case 0x1958dcu: goto label_1958dc;
        case 0x1958e0u: goto label_1958e0;
        case 0x1958e4u: goto label_1958e4;
        case 0x1958e8u: goto label_1958e8;
        case 0x1958ecu: goto label_1958ec;
        case 0x1958f0u: goto label_1958f0;
        case 0x1958f4u: goto label_1958f4;
        case 0x1958f8u: goto label_1958f8;
        case 0x1958fcu: goto label_1958fc;
        case 0x195900u: goto label_195900;
        case 0x195904u: goto label_195904;
        case 0x195908u: goto label_195908;
        case 0x19590cu: goto label_19590c;
        case 0x195910u: goto label_195910;
        case 0x195914u: goto label_195914;
        case 0x195918u: goto label_195918;
        case 0x19591cu: goto label_19591c;
        case 0x195920u: goto label_195920;
        case 0x195924u: goto label_195924;
        case 0x195928u: goto label_195928;
        case 0x19592cu: goto label_19592c;
        case 0x195930u: goto label_195930;
        case 0x195934u: goto label_195934;
        case 0x195938u: goto label_195938;
        case 0x19593cu: goto label_19593c;
        case 0x195940u: goto label_195940;
        case 0x195944u: goto label_195944;
        case 0x195948u: goto label_195948;
        case 0x19594cu: goto label_19594c;
        case 0x195950u: goto label_195950;
        case 0x195954u: goto label_195954;
        case 0x195958u: goto label_195958;
        case 0x19595cu: goto label_19595c;
        case 0x195960u: goto label_195960;
        case 0x195964u: goto label_195964;
        case 0x195968u: goto label_195968;
        case 0x19596cu: goto label_19596c;
        case 0x195970u: goto label_195970;
        case 0x195974u: goto label_195974;
        case 0x195978u: goto label_195978;
        case 0x19597cu: goto label_19597c;
        case 0x195980u: goto label_195980;
        case 0x195984u: goto label_195984;
        case 0x195988u: goto label_195988;
        case 0x19598cu: goto label_19598c;
        case 0x195990u: goto label_195990;
        case 0x195994u: goto label_195994;
        case 0x195998u: goto label_195998;
        case 0x19599cu: goto label_19599c;
        case 0x1959a0u: goto label_1959a0;
        case 0x1959a4u: goto label_1959a4;
        case 0x1959a8u: goto label_1959a8;
        case 0x1959acu: goto label_1959ac;
        case 0x1959b0u: goto label_1959b0;
        case 0x1959b4u: goto label_1959b4;
        case 0x1959b8u: goto label_1959b8;
        case 0x1959bcu: goto label_1959bc;
        case 0x1959c0u: goto label_1959c0;
        case 0x1959c4u: goto label_1959c4;
        case 0x1959c8u: goto label_1959c8;
        case 0x1959ccu: goto label_1959cc;
        case 0x1959d0u: goto label_1959d0;
        case 0x1959d4u: goto label_1959d4;
        case 0x1959d8u: goto label_1959d8;
        case 0x1959dcu: goto label_1959dc;
        case 0x1959e0u: goto label_1959e0;
        case 0x1959e4u: goto label_1959e4;
        case 0x1959e8u: goto label_1959e8;
        case 0x1959ecu: goto label_1959ec;
        case 0x1959f0u: goto label_1959f0;
        case 0x1959f4u: goto label_1959f4;
        case 0x1959f8u: goto label_1959f8;
        case 0x1959fcu: goto label_1959fc;
        case 0x195a00u: goto label_195a00;
        case 0x195a04u: goto label_195a04;
        case 0x195a08u: goto label_195a08;
        case 0x195a0cu: goto label_195a0c;
        case 0x195a10u: goto label_195a10;
        case 0x195a14u: goto label_195a14;
        case 0x195a18u: goto label_195a18;
        case 0x195a1cu: goto label_195a1c;
        case 0x195a20u: goto label_195a20;
        case 0x195a24u: goto label_195a24;
        case 0x195a28u: goto label_195a28;
        case 0x195a2cu: goto label_195a2c;
        case 0x195a30u: goto label_195a30;
        case 0x195a34u: goto label_195a34;
        case 0x195a38u: goto label_195a38;
        case 0x195a3cu: goto label_195a3c;
        case 0x195a40u: goto label_195a40;
        case 0x195a44u: goto label_195a44;
        case 0x195a48u: goto label_195a48;
        case 0x195a4cu: goto label_195a4c;
        case 0x195a50u: goto label_195a50;
        case 0x195a54u: goto label_195a54;
        case 0x195a58u: goto label_195a58;
        case 0x195a5cu: goto label_195a5c;
        case 0x195a60u: goto label_195a60;
        case 0x195a64u: goto label_195a64;
        case 0x195a68u: goto label_195a68;
        case 0x195a6cu: goto label_195a6c;
        case 0x195a70u: goto label_195a70;
        case 0x195a74u: goto label_195a74;
        case 0x195a78u: goto label_195a78;
        case 0x195a7cu: goto label_195a7c;
        case 0x195a80u: goto label_195a80;
        case 0x195a84u: goto label_195a84;
        case 0x195a88u: goto label_195a88;
        case 0x195a8cu: goto label_195a8c;
        case 0x195a90u: goto label_195a90;
        case 0x195a94u: goto label_195a94;
        case 0x195a98u: goto label_195a98;
        case 0x195a9cu: goto label_195a9c;
        case 0x195aa0u: goto label_195aa0;
        case 0x195aa4u: goto label_195aa4;
        case 0x195aa8u: goto label_195aa8;
        case 0x195aacu: goto label_195aac;
        case 0x195ab0u: goto label_195ab0;
        case 0x195ab4u: goto label_195ab4;
        case 0x195ab8u: goto label_195ab8;
        case 0x195abcu: goto label_195abc;
        case 0x195ac0u: goto label_195ac0;
        case 0x195ac4u: goto label_195ac4;
        case 0x195ac8u: goto label_195ac8;
        case 0x195accu: goto label_195acc;
        case 0x195ad0u: goto label_195ad0;
        case 0x195ad4u: goto label_195ad4;
        case 0x195ad8u: goto label_195ad8;
        case 0x195adcu: goto label_195adc;
        case 0x195ae0u: goto label_195ae0;
        case 0x195ae4u: goto label_195ae4;
        case 0x195ae8u: goto label_195ae8;
        case 0x195aecu: goto label_195aec;
        case 0x195af0u: goto label_195af0;
        case 0x195af4u: goto label_195af4;
        case 0x195af8u: goto label_195af8;
        case 0x195afcu: goto label_195afc;
        case 0x195b00u: goto label_195b00;
        case 0x195b04u: goto label_195b04;
        case 0x195b08u: goto label_195b08;
        case 0x195b0cu: goto label_195b0c;
        case 0x195b10u: goto label_195b10;
        case 0x195b14u: goto label_195b14;
        case 0x195b18u: goto label_195b18;
        case 0x195b1cu: goto label_195b1c;
        case 0x195b20u: goto label_195b20;
        case 0x195b24u: goto label_195b24;
        case 0x195b28u: goto label_195b28;
        case 0x195b2cu: goto label_195b2c;
        case 0x195b30u: goto label_195b30;
        case 0x195b34u: goto label_195b34;
        case 0x195b38u: goto label_195b38;
        case 0x195b3cu: goto label_195b3c;
        case 0x195b40u: goto label_195b40;
        case 0x195b44u: goto label_195b44;
        case 0x195b48u: goto label_195b48;
        case 0x195b4cu: goto label_195b4c;
        case 0x195b50u: goto label_195b50;
        case 0x195b54u: goto label_195b54;
        case 0x195b58u: goto label_195b58;
        case 0x195b5cu: goto label_195b5c;
        case 0x195b60u: goto label_195b60;
        case 0x195b64u: goto label_195b64;
        case 0x195b68u: goto label_195b68;
        case 0x195b6cu: goto label_195b6c;
        case 0x195b70u: goto label_195b70;
        case 0x195b74u: goto label_195b74;
        case 0x195b78u: goto label_195b78;
        case 0x195b7cu: goto label_195b7c;
        case 0x195b80u: goto label_195b80;
        case 0x195b84u: goto label_195b84;
        case 0x195b88u: goto label_195b88;
        case 0x195b8cu: goto label_195b8c;
        case 0x195b90u: goto label_195b90;
        case 0x195b94u: goto label_195b94;
        case 0x195b98u: goto label_195b98;
        case 0x195b9cu: goto label_195b9c;
        case 0x195ba0u: goto label_195ba0;
        case 0x195ba4u: goto label_195ba4;
        case 0x195ba8u: goto label_195ba8;
        case 0x195bacu: goto label_195bac;
        case 0x195bb0u: goto label_195bb0;
        case 0x195bb4u: goto label_195bb4;
        case 0x195bb8u: goto label_195bb8;
        case 0x195bbcu: goto label_195bbc;
        case 0x195bc0u: goto label_195bc0;
        case 0x195bc4u: goto label_195bc4;
        case 0x195bc8u: goto label_195bc8;
        case 0x195bccu: goto label_195bcc;
        case 0x195bd0u: goto label_195bd0;
        case 0x195bd4u: goto label_195bd4;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bdcu: goto label_195bdc;
        case 0x195be0u: goto label_195be0;
        case 0x195be4u: goto label_195be4;
        case 0x195be8u: goto label_195be8;
        case 0x195becu: goto label_195bec;
        case 0x195bf0u: goto label_195bf0;
        case 0x195bf4u: goto label_195bf4;
        case 0x195bf8u: goto label_195bf8;
        case 0x195bfcu: goto label_195bfc;
        case 0x195c00u: goto label_195c00;
        case 0x195c04u: goto label_195c04;
        case 0x195c08u: goto label_195c08;
        case 0x195c0cu: goto label_195c0c;
        case 0x195c10u: goto label_195c10;
        case 0x195c14u: goto label_195c14;
        case 0x195c18u: goto label_195c18;
        case 0x195c1cu: goto label_195c1c;
        case 0x195c20u: goto label_195c20;
        case 0x195c24u: goto label_195c24;
        case 0x195c28u: goto label_195c28;
        case 0x195c2cu: goto label_195c2c;
        case 0x195c30u: goto label_195c30;
        case 0x195c34u: goto label_195c34;
        case 0x195c38u: goto label_195c38;
        case 0x195c3cu: goto label_195c3c;
        case 0x195c40u: goto label_195c40;
        case 0x195c44u: goto label_195c44;
        case 0x195c48u: goto label_195c48;
        case 0x195c4cu: goto label_195c4c;
        case 0x195c50u: goto label_195c50;
        case 0x195c54u: goto label_195c54;
        case 0x195c58u: goto label_195c58;
        case 0x195c5cu: goto label_195c5c;
        case 0x195c60u: goto label_195c60;
        case 0x195c64u: goto label_195c64;
        case 0x195c68u: goto label_195c68;
        case 0x195c6cu: goto label_195c6c;
        case 0x195c70u: goto label_195c70;
        case 0x195c74u: goto label_195c74;
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        case 0x195c80u: goto label_195c80;
        case 0x195c84u: goto label_195c84;
        case 0x195c88u: goto label_195c88;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c90u: goto label_195c90;
        case 0x195c94u: goto label_195c94;
        case 0x195c98u: goto label_195c98;
        case 0x195c9cu: goto label_195c9c;
        case 0x195ca0u: goto label_195ca0;
        case 0x195ca4u: goto label_195ca4;
        case 0x195ca8u: goto label_195ca8;
        case 0x195cacu: goto label_195cac;
        case 0x195cb0u: goto label_195cb0;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cb8u: goto label_195cb8;
        case 0x195cbcu: goto label_195cbc;
        case 0x195cc0u: goto label_195cc0;
        case 0x195cc4u: goto label_195cc4;
        case 0x195cc8u: goto label_195cc8;
        case 0x195cccu: goto label_195ccc;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cd4u: goto label_195cd4;
        case 0x195cd8u: goto label_195cd8;
        case 0x195cdcu: goto label_195cdc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        case 0x195d10u: goto label_195d10;
        case 0x195d14u: goto label_195d14;
        case 0x195d18u: goto label_195d18;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d20u: goto label_195d20;
        case 0x195d24u: goto label_195d24;
        case 0x195d28u: goto label_195d28;
        case 0x195d2cu: goto label_195d2c;
        case 0x195d30u: goto label_195d30;
        case 0x195d34u: goto label_195d34;
        case 0x195d38u: goto label_195d38;
        case 0x195d3cu: goto label_195d3c;
        case 0x195d40u: goto label_195d40;
        case 0x195d44u: goto label_195d44;
        case 0x195d48u: goto label_195d48;
        case 0x195d4cu: goto label_195d4c;
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        default: break;
    }

    ctx->pc = 0x194050u;

label_194050:
    // 0x194050: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_194054:
    // 0x194054: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x194054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_194058:
    // 0x194058: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x194058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19405c:
    // 0x19405c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_194060:
    // 0x194060: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x194060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_194064:
    // 0x194064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_194068:
    // 0x194068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19406c:
    // 0x19406c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194070:
    // 0x194070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194074:
    // 0x194074: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x194074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
label_194078:
    // 0x194078: 0x8c830668  lw          $v1, 0x668($a0)
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
label_19407c:
    // 0x19407c: 0x2470ffc0  addiu       $s0, $v1, -0x40
    ctx->pc = 0x19407cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_194080:
    // 0x194080: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
label_194084:
    // 0x194084: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x194084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_194088:
    // 0x194088: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_19408c:
    if (ctx->pc == 0x19408Cu) {
        ctx->pc = 0x19408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194088u;
        // 0x19408c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194090u;
        goto label_194090;
    }
    ctx->pc = 0x194088u;
    {
        const bool branch_taken_0x194088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194088u;
        // 0x19408c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194088) {
            ctx->pc = 0x19418Cu;
            goto label_19418c;
        }
    }
    ctx->pc = 0x194090u;
label_194090:
    // 0x194090: 0xc067f08  jal         func_19FC20
label_194094:
    if (ctx->pc == 0x194094u) {
        ctx->pc = 0x194098u;
        goto label_194098;
    }
    ctx->pc = 0x194090u;
    SET_GPR_U32(ctx, 31, 0x194098u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x194090u, 0x194098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194098u;
label_194098:
    // 0x194098: 0x8c440320  lw          $a0, 0x320($v0)
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
label_19409c:
    // 0x19409c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1940a0:
    // 0x1940a0: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
label_1940a4:
    if (ctx->pc == 0x1940A4u) {
        ctx->pc = 0x1940A8u;
        goto label_1940a8;
    }
    ctx->pc = 0x1940A0u;
    {
        const bool branch_taken_0x1940a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1940a0) {
            ctx->pc = 0x19418Cu;
            goto label_19418c;
        }
    }
    ctx->pc = 0x1940A8u;
label_1940a8:
    // 0x1940a8: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x1940a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
label_1940ac:
    // 0x1940ac: 0xae800338  sw          $zero, 0x338($s4)
    ctx->pc = 0x1940acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 0));
label_1940b0:
    // 0x1940b0: 0x8e830668  lw          $v1, 0x668($s4)
    ctx->pc = 0x1940b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
label_1940b4:
    // 0x1940b4: 0xae830664  sw          $v1, 0x664($s4)
    ctx->pc = 0x1940b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 3));
label_1940b8:
    // 0x1940b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1940b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1940bc:
    // 0x1940bc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1940bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1940c0:
    // 0x1940c0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1940c4:
    if (ctx->pc == 0x1940C4u) {
        ctx->pc = 0x1940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940C0u;
        // 0x1940c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940C8u;
        goto label_1940c8;
    }
    ctx->pc = 0x1940C0u;
    {
        const bool branch_taken_0x1940c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940C0u;
        // 0x1940c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940c0) {
            ctx->pc = 0x19412Cu;
            goto label_19412c;
        }
    }
    ctx->pc = 0x1940C8u;
label_1940c8:
    // 0x1940c8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1940cc:
    if (ctx->pc == 0x1940CCu) {
        ctx->pc = 0x1940D0u;
        goto label_1940d0;
    }
    ctx->pc = 0x1940C8u;
    {
        const bool branch_taken_0x1940c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940c8) {
            ctx->pc = 0x19411Cu;
            goto label_19411c;
        }
    }
    ctx->pc = 0x1940D0u;
label_1940d0:
    // 0x1940d0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1940d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1940d4:
    // 0x1940d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1940d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1940d8:
    // 0x1940d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1940d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1940dc:
    // 0x1940dc: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1940dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 4294956800)));
label_1940e0:
    // 0x1940e0: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x1940e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_1940e4:
    // 0x1940e4: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x1940e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
label_1940e8:
    // 0x1940e8: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1940e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1940ec:
    // 0x1940ec: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1940ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_1940f0:
    // 0x1940f0: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x1940f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_1940f4:
    // 0x1940f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1940f8:
    if (ctx->pc == 0x1940F8u) {
        ctx->pc = 0x1940F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940F4u;
        // 0x1940f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940FCu;
        goto label_1940fc;
    }
    ctx->pc = 0x1940F4u;
    {
        const bool branch_taken_0x1940f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940F4u;
        // 0x1940f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940f4) {
            ctx->pc = 0x194118u;
            goto label_194118;
        }
    }
    ctx->pc = 0x1940FCu;
label_1940fc:
    // 0x1940fc: 0xc0648ec  jal         func_1923B0
label_194100:
    if (ctx->pc == 0x194100u) {
        ctx->pc = 0x194104u;
        goto label_194104;
    }
    ctx->pc = 0x1940FCu;
    SET_GPR_U32(ctx, 31, 0x194104u);
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1940FCu, 0x194104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194104u;
label_194104:
    // 0x194104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194108:
    // 0x194108: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_19410c:
    if (ctx->pc == 0x19410Cu) {
        ctx->pc = 0x194110u;
        goto label_194110;
    }
    ctx->pc = 0x194108u;
    {
        const bool branch_taken_0x194108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194108) {
            ctx->pc = 0x194118u;
            goto label_194118;
        }
    }
    ctx->pc = 0x194110u;
label_194110:
    // 0x194110: 0xc064954  jal         func_192550
label_194114:
    if (ctx->pc == 0x194114u) {
        ctx->pc = 0x194118u;
        goto label_194118;
    }
    ctx->pc = 0x194110u;
    SET_GPR_U32(ctx, 31, 0x194118u);
    ctx->pc = 0x192550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192550u, 0x194110u, 0x194118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194118u;
label_194118:
    // 0x194118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19411c:
    // 0x19411c: 0x0  nop
    ctx->pc = 0x19411cu;
    // NOP
label_194120:
    // 0x194120: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_194124:
    // 0x194124: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_194128:
    if (ctx->pc == 0x194128u) {
        ctx->pc = 0x19412Cu;
        goto label_19412c;
    }
    ctx->pc = 0x194124u;
    {
        const bool branch_taken_0x194124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194124) {
            ctx->pc = 0x1940D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1940d0;
        }
    }
    ctx->pc = 0x19412Cu;
label_19412c:
    // 0x19412c: 0x0  nop
    ctx->pc = 0x19412cu;
    // NOP
label_194130:
    // 0x194130: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_194134:
    // 0x194134: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194138:
    // 0x194138: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_19413c:
    // 0x19413c: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x19413cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_194140:
    // 0x194140: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194140u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_194144:
    // 0x194144: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x194144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_194148:
    // 0x194148: 0x1000000d  b           . + 4 + (0xD << 2)
label_19414c:
    if (ctx->pc == 0x19414Cu) {
        ctx->pc = 0x19414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194148u;
        // 0x19414c: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194150u;
        goto label_194150;
    }
    ctx->pc = 0x194148u;
    {
        const bool branch_taken_0x194148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194148u;
        // 0x19414c: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194148) {
            ctx->pc = 0x194180u;
            goto label_194180;
        }
    }
    ctx->pc = 0x194150u;
label_194150:
    // 0x194150: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x194150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_194154:
    // 0x194154: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_194158:
    // 0x194158: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_19415c:
    // 0x19415c: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_194160:
    // 0x194160: 0xc063f7c  jal         func_18FDF0
label_194164:
    if (ctx->pc == 0x194164u) {
        ctx->pc = 0x194164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194160u;
        // 0x194164: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194168u;
        goto label_194168;
    }
    ctx->pc = 0x194160u;
    SET_GPR_U32(ctx, 31, 0x194168u);
    ctx->pc = 0x194164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194160u;
    // 0x194164: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194160u, 0x194168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194168u;
label_194168:
    // 0x194168: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x194168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19416c:
    // 0x19416c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x19416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_194170:
    // 0x194170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194174:
    // 0x194174: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x194174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_194178:
    // 0x194178: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x194178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_19417c:
    // 0x19417c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19417cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_194180:
    // 0x194180: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_194184:
    // 0x194184: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_194188:
    if (ctx->pc == 0x194188u) {
        ctx->pc = 0x19418Cu;
        goto label_19418c;
    }
    ctx->pc = 0x194184u;
    {
        const bool branch_taken_0x194184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194184) {
            ctx->pc = 0x194150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194150;
        }
    }
    ctx->pc = 0x19418Cu;
label_19418c:
    // 0x19418c: 0x0  nop
    ctx->pc = 0x19418cu;
    // NOP
label_194190:
    // 0x194190: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_194194:
    // 0x194194: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x194194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_194198:
    // 0x194198: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
label_19419c:
    if (ctx->pc == 0x19419Cu) {
        ctx->pc = 0x1941A0u;
        goto label_1941a0;
    }
    ctx->pc = 0x194198u;
    {
        const bool branch_taken_0x194198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194198) {
            ctx->pc = 0x1943A0u;
            goto label_1943a0;
        }
    }
    ctx->pc = 0x1941A0u;
label_1941a0:
    // 0x1941a0: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1941a4:
    // 0x1941a4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1941a8:
    // 0x1941a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1941a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1941ac:
    // 0x1941ac: 0x8ca62c10  lw          $a2, 0x2C10($a1)
    ctx->pc = 0x1941acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
label_1941b0:
    // 0x1941b0: 0x8ca72c1c  lw          $a3, 0x2C1C($a1)
    ctx->pc = 0x1941b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
label_1941b4:
    // 0x1941b4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1941b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1941b8:
    // 0x1941b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1941bc:
    // 0x1941bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1941bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1941c0:
    // 0x1941c0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1941c4:
    // 0x1941c4: 0x90a5003f  lbu         $a1, 0x3F($a1)
    ctx->pc = 0x1941c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
label_1941c8:
    // 0x1941c8: 0x0  nop
    ctx->pc = 0x1941c8u;
    // NOP
label_1941cc:
    // 0x1941cc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1941ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1941d0:
    // 0x1941d0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1941d4:
    // 0x1941d4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1941d8:
    // 0x1941d8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x1941d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1941dc:
    // 0x1941dc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1941e0:
    // 0x1941e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1941e4:
    // 0x1941e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1941e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1941e8:
    // 0x1941e8: 0x90c6003f  lbu         $a2, 0x3F($a2)
    ctx->pc = 0x1941e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 63)));
label_1941ec:
    // 0x1941ec: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
label_1941f0:
    if (ctx->pc == 0x1941F0u) {
        ctx->pc = 0x1941F4u;
        goto label_1941f4;
    }
    ctx->pc = 0x1941ECu;
    {
        const bool branch_taken_0x1941ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1941ec) {
            ctx->pc = 0x1941FCu;
            goto label_1941fc;
        }
    }
    ctx->pc = 0x1941F4u;
label_1941f4:
    // 0x1941f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1941f8:
    if (ctx->pc == 0x1941F8u) {
        ctx->pc = 0x1941F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941F4u;
        // 0x1941f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941FCu;
        goto label_1941fc;
    }
    ctx->pc = 0x1941F4u;
    {
        const bool branch_taken_0x1941f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941F4u;
        // 0x1941f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941f4) {
            ctx->pc = 0x194224u;
            goto label_194224;
        }
    }
    ctx->pc = 0x1941FCu;
label_1941fc:
    // 0x1941fc: 0x0  nop
    ctx->pc = 0x1941fcu;
    // NOP
label_194200:
    // 0x194200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_194204:
    // 0x194204: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x194204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_194208:
    // 0x194208: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_19420c:
    if (ctx->pc == 0x19420Cu) {
        ctx->pc = 0x19420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194208u;
        // 0x19420c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194210u;
        goto label_194210;
    }
    ctx->pc = 0x194208u;
    {
        const bool branch_taken_0x194208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194208u;
        // 0x19420c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194208) {
            ctx->pc = 0x194220u;
            goto label_194220;
        }
    }
    ctx->pc = 0x194210u;
label_194210:
    // 0x194210: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x194210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_194214:
    // 0x194214: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x194214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_194218:
    // 0x194218: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
label_19421c:
    if (ctx->pc == 0x19421Cu) {
        ctx->pc = 0x194220u;
        goto label_194220;
    }
    ctx->pc = 0x194218u;
    {
        const bool branch_taken_0x194218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x194218) {
            ctx->pc = 0x1941CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1941cc;
        }
    }
    ctx->pc = 0x194220u;
label_194220:
    // 0x194220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194224:
    // 0x194224: 0x0  nop
    ctx->pc = 0x194224u;
    // NOP
label_194228:
    // 0x194228: 0x8f8785f4  lw          $a3, -0x7A0C($gp)
    ctx->pc = 0x194228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19422c:
    // 0x19422c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194230:
    // 0x194230: 0x8ce82c04  lw          $t0, 0x2C04($a3)
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11268)));
label_194234:
    // 0x194234: 0x15030058  bne         $t0, $v1, . + 4 + (0x58 << 2)
label_194238:
    if (ctx->pc == 0x194238u) {
        ctx->pc = 0x194238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194234u;
        // 0x194238: 0x24e62c00  addiu       $a2, $a3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19423Cu;
        goto label_19423c;
    }
    ctx->pc = 0x194234u;
    {
        const bool branch_taken_0x194234 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x194238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194234u;
        // 0x194238: 0x24e62c00  addiu       $a2, $a3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194234) {
            ctx->pc = 0x194398u;
            goto label_194398;
        }
    }
    ctx->pc = 0x19423Cu;
label_19423c:
    // 0x19423c: 0x14a00058  bnez        $a1, . + 4 + (0x58 << 2)
label_194240:
    if (ctx->pc == 0x194240u) {
        ctx->pc = 0x194244u;
        goto label_194244;
    }
    ctx->pc = 0x19423Cu;
    {
        const bool branch_taken_0x19423c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x19423c) {
            ctx->pc = 0x1943A0u;
            goto label_1943a0;
        }
    }
    ctx->pc = 0x194244u;
label_194244:
    // 0x194244: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x194244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_194248:
    // 0x194248: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19424c:
    // 0x19424c: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
label_194250:
    // 0x194250: 0x0  nop
    ctx->pc = 0x194250u;
    // NOP
label_194254:
    // 0x194254: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x194254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194258:
    // 0x194258: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x194258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_19425c:
    // 0x19425c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x19425cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_194260:
    // 0x194260: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x194260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_194264:
    // 0x194264: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x194264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_194268:
    // 0x194268: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x194268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_19426c:
    // 0x19426c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_194270:
    // 0x194270: 0x90c6003f  lbu         $a2, 0x3F($a2)
    ctx->pc = 0x194270u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 63)));
label_194274:
    // 0x194274: 0x14a6003d  bne         $a1, $a2, . + 4 + (0x3D << 2)
label_194278:
    if (ctx->pc == 0x194278u) {
        ctx->pc = 0x19427Cu;
        goto label_19427c;
    }
    ctx->pc = 0x194274u;
    {
        const bool branch_taken_0x194274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x194274) {
            ctx->pc = 0x19436Cu;
            goto label_19436c;
        }
    }
    ctx->pc = 0x19427Cu;
label_19427c:
    // 0x19427c: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x19427cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
label_194280:
    // 0x194280: 0xae800338  sw          $zero, 0x338($s4)
    ctx->pc = 0x194280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 0));
label_194284:
    // 0x194284: 0x8e830668  lw          $v1, 0x668($s4)
    ctx->pc = 0x194284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
label_194288:
    // 0x194288: 0xae830664  sw          $v1, 0x664($s4)
    ctx->pc = 0x194288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 3));
label_19428c:
    // 0x19428c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_194290:
    // 0x194290: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x194290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_194294:
    // 0x194294: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_194298:
    if (ctx->pc == 0x194298u) {
        ctx->pc = 0x19429Cu;
        goto label_19429c;
    }
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194294) {
            ctx->pc = 0x194304u;
            goto label_194304;
        }
    }
    ctx->pc = 0x19429Cu;
label_19429c:
    // 0x19429c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1942a0:
    if (ctx->pc == 0x1942A0u) {
        ctx->pc = 0x1942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19429Cu;
        // 0x1942a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942A4u;
        goto label_1942a4;
    }
    ctx->pc = 0x19429Cu;
    {
        const bool branch_taken_0x19429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19429Cu;
        // 0x1942a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19429c) {
            ctx->pc = 0x1942F4u;
            goto label_1942f4;
        }
    }
    ctx->pc = 0x1942A4u;
label_1942a4:
    // 0x1942a4: 0x0  nop
    ctx->pc = 0x1942a4u;
    // NOP
label_1942a8:
    // 0x1942a8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1942a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1942ac:
    // 0x1942ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1942b0:
    // 0x1942b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1942b4:
    // 0x1942b4: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_1942b8:
    // 0x1942b8: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1942b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 4294956800)));
label_1942bc:
    // 0x1942bc: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x1942bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
label_1942c0:
    // 0x1942c0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1942c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1942c4:
    // 0x1942c4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1942c4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_1942c8:
    // 0x1942c8: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x1942c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_1942cc:
    // 0x1942cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1942d0:
    if (ctx->pc == 0x1942D0u) {
        ctx->pc = 0x1942D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942CCu;
        // 0x1942d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942D4u;
        goto label_1942d4;
    }
    ctx->pc = 0x1942CCu;
    {
        const bool branch_taken_0x1942cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942CCu;
        // 0x1942d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942cc) {
            ctx->pc = 0x1942F0u;
            goto label_1942f0;
        }
    }
    ctx->pc = 0x1942D4u;
label_1942d4:
    // 0x1942d4: 0xc0648ec  jal         func_1923B0
label_1942d8:
    if (ctx->pc == 0x1942D8u) {
        ctx->pc = 0x1942DCu;
        goto label_1942dc;
    }
    ctx->pc = 0x1942D4u;
    SET_GPR_U32(ctx, 31, 0x1942DCu);
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x1942D4u, 0x1942DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942DCu;
label_1942dc:
    // 0x1942dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1942dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1942e0:
    // 0x1942e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1942e4:
    if (ctx->pc == 0x1942E4u) {
        ctx->pc = 0x1942E8u;
        goto label_1942e8;
    }
    ctx->pc = 0x1942E0u;
    {
        const bool branch_taken_0x1942e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1942e0) {
            ctx->pc = 0x1942F0u;
            goto label_1942f0;
        }
    }
    ctx->pc = 0x1942E8u;
label_1942e8:
    // 0x1942e8: 0xc064954  jal         func_192550
label_1942ec:
    if (ctx->pc == 0x1942ECu) {
        ctx->pc = 0x1942F0u;
        goto label_1942f0;
    }
    ctx->pc = 0x1942E8u;
    SET_GPR_U32(ctx, 31, 0x1942F0u);
    ctx->pc = 0x192550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192550u, 0x1942E8u, 0x1942F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1942F0u;
label_1942f0:
    // 0x1942f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1942f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1942f4:
    // 0x1942f4: 0x0  nop
    ctx->pc = 0x1942f4u;
    // NOP
label_1942f8:
    // 0x1942f8: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1942f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1942fc:
    // 0x1942fc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_194300:
    if (ctx->pc == 0x194300u) {
        ctx->pc = 0x194304u;
        goto label_194304;
    }
    ctx->pc = 0x1942FCu;
    {
        const bool branch_taken_0x1942fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942fc) {
            ctx->pc = 0x1942A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1942a4;
        }
    }
    ctx->pc = 0x194304u;
label_194304:
    // 0x194304: 0x0  nop
    ctx->pc = 0x194304u;
    // NOP
label_194308:
    // 0x194308: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_19430c:
    // 0x19430c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194310:
    // 0x194310: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_194314:
    // 0x194314: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_194318:
    // 0x194318: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_19431c:
    // 0x19431c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x19431cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_194320:
    // 0x194320: 0x1000000d  b           . + 4 + (0xD << 2)
label_194324:
    if (ctx->pc == 0x194324u) {
        ctx->pc = 0x194324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194320u;
        // 0x194324: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194328u;
        goto label_194328;
    }
    ctx->pc = 0x194320u;
    {
        const bool branch_taken_0x194320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194320u;
        // 0x194324: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194320) {
            ctx->pc = 0x194358u;
            goto label_194358;
        }
    }
    ctx->pc = 0x194328u;
label_194328:
    // 0x194328: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_19432c:
    // 0x19432c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_194330:
    // 0x194330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_194334:
    // 0x194334: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x194334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_194338:
    // 0x194338: 0xc063f7c  jal         func_18FDF0
label_19433c:
    if (ctx->pc == 0x19433Cu) {
        ctx->pc = 0x19433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194338u;
        // 0x19433c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194340u;
        goto label_194340;
    }
    ctx->pc = 0x194338u;
    SET_GPR_U32(ctx, 31, 0x194340u);
    ctx->pc = 0x19433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194338u;
    // 0x19433c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194338u, 0x194340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194340u;
label_194340:
    // 0x194340: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_194344:
    // 0x194344: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x194344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_194348:
    // 0x194348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19434c:
    // 0x19434c: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x19434cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_194350:
    // 0x194350: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x194350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_194354:
    // 0x194354: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x194354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_194358:
    // 0x194358: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x194358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_19435c:
    // 0x19435c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_194360:
    if (ctx->pc == 0x194360u) {
        ctx->pc = 0x194364u;
        goto label_194364;
    }
    ctx->pc = 0x19435Cu;
    {
        const bool branch_taken_0x19435c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19435c) {
            ctx->pc = 0x194328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194328;
        }
    }
    ctx->pc = 0x194364u;
label_194364:
    // 0x194364: 0x1000000f  b           . + 4 + (0xF << 2)
label_194368:
    if (ctx->pc == 0x194368u) {
        ctx->pc = 0x194368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194364u;
        // 0x194368: 0x8e900664  lw          $s0, 0x664($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19436Cu;
        goto label_19436c;
    }
    ctx->pc = 0x194364u;
    {
        const bool branch_taken_0x194364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194364u;
        // 0x194368: 0x8e900664  lw          $s0, 0x664($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194364) {
            ctx->pc = 0x1943A4u;
            goto label_1943a4;
        }
    }
    ctx->pc = 0x19436Cu;
label_19436c:
    // 0x19436c: 0x0  nop
    ctx->pc = 0x19436cu;
    // NOP
label_194370:
    // 0x194370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_194374:
    // 0x194374: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x194374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_194378:
    // 0x194378: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_19437c:
    if (ctx->pc == 0x19437Cu) {
        ctx->pc = 0x19437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194378u;
        // 0x19437c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194380u;
        goto label_194380;
    }
    ctx->pc = 0x194378u;
    {
        const bool branch_taken_0x194378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194378u;
        // 0x19437c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194378) {
            ctx->pc = 0x1943A0u;
            goto label_1943a0;
        }
    }
    ctx->pc = 0x194380u;
label_194380:
    // 0x194380: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x194380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_194384:
    // 0x194384: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x194384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_194388:
    // 0x194388: 0x14c0ffb2  bnez        $a2, . + 4 + (-0x4E << 2)
label_19438c:
    if (ctx->pc == 0x19438Cu) {
        ctx->pc = 0x194390u;
        goto label_194390;
    }
    ctx->pc = 0x194388u;
    {
        const bool branch_taken_0x194388 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x194388) {
            ctx->pc = 0x194254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194254;
        }
    }
    ctx->pc = 0x194390u;
label_194390:
    // 0x194390: 0x10000003  b           . + 4 + (0x3 << 2)
label_194394:
    if (ctx->pc == 0x194394u) {
        ctx->pc = 0x194398u;
        goto label_194398;
    }
    ctx->pc = 0x194390u;
    {
        const bool branch_taken_0x194390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194390) {
            ctx->pc = 0x1943A0u;
            goto label_1943a0;
        }
    }
    ctx->pc = 0x194398u;
label_194398:
    // 0x194398: 0x10a0067a  beqz        $a1, . + 4 + (0x67A << 2)
label_19439c:
    if (ctx->pc == 0x19439Cu) {
        ctx->pc = 0x1943A0u;
        goto label_1943a0;
    }
    ctx->pc = 0x194398u;
    {
        const bool branch_taken_0x194398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194398) {
            ctx->pc = 0x195D84u;
            goto label_195d84;
        }
    }
    ctx->pc = 0x1943A0u;
label_1943a0:
    // 0x1943a0: 0x8e900664  lw          $s0, 0x664($s4)
    ctx->pc = 0x1943a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1943a4:
    // 0x1943a4: 0x10000673  b           . + 4 + (0x673 << 2)
label_1943a8:
    if (ctx->pc == 0x1943A8u) {
        ctx->pc = 0x1943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A4u;
        // 0x1943a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943ACu;
        goto label_1943ac;
    }
    ctx->pc = 0x1943A4u;
    {
        const bool branch_taken_0x1943a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A4u;
        // 0x1943a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943a4) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1943ACu;
label_1943ac:
    // 0x1943ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1943b0:
    // 0x1943b0: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x1943b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1943b4:
    // 0x1943b4: 0x1020066f  beqz        $at, . + 4 + (0x66F << 2)
label_1943b8:
    if (ctx->pc == 0x1943B8u) {
        ctx->pc = 0x1943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B4u;
        // 0x1943b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943BCu;
        goto label_1943bc;
    }
    ctx->pc = 0x1943B4u;
    {
        const bool branch_taken_0x1943b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B4u;
        // 0x1943b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943b4) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1943BCu;
label_1943bc:
    // 0x1943bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1943bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1943c0:
    // 0x1943c0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1943c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1943c4:
    // 0x1943c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1943c8:
    // 0x1943c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1943c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1943cc:
    // 0x1943cc: 0x600008  jr          $v1
label_1943d0:
    if (ctx->pc == 0x1943D0u) {
        ctx->pc = 0x1943D4u;
        goto label_1943d4;
    }
    ctx->pc = 0x1943CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1943D4u: goto label_1943d4;
            case 0x1943E0u: goto label_1943e0;
            case 0x1946C8u: goto label_1946c8;
            case 0x194810u: goto label_194810;
            case 0x194A00u: goto label_194a00;
            case 0x194A18u: goto label_194a18;
            case 0x194A4Cu: goto label_194a4c;
            case 0x194A58u: goto label_194a58;
            case 0x194A60u: goto label_194a60;
            case 0x194E68u: goto label_194e68;
            case 0x195038u: goto label_195038;
            case 0x195138u: goto label_195138;
            case 0x19517Cu: goto label_19517c;
            case 0x1951F8u: goto label_1951f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1943D4u;
label_1943d4:
    // 0x1943d4: 0x0  nop
    ctx->pc = 0x1943d4u;
    // NOP
label_1943d8:
    // 0x1943d8: 0x10000666  b           . + 4 + (0x666 << 2)
label_1943dc:
    if (ctx->pc == 0x1943DCu) {
        ctx->pc = 0x1943DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D8u;
        // 0x1943dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943E0u;
        goto label_1943e0;
    }
    ctx->pc = 0x1943D8u;
    {
        const bool branch_taken_0x1943d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D8u;
        // 0x1943dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943d8) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1943E0u;
label_1943e0:
    // 0x1943e0: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1943e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1943e4:
    // 0x1943e4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1943e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1943e8:
    // 0x1943e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1943e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1943ec:
    // 0x1943ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1943ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1943f0:
    // 0x1943f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1943f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1943f4:
    // 0x1943f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1943f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1943f8:
    // 0x1943f8: 0x0  nop
    ctx->pc = 0x1943f8u;
    // NOP
label_1943fc:
    // 0x1943fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_194400:
    if (ctx->pc == 0x194400u) {
        ctx->pc = 0x194404u;
        goto label_194404;
    }
    ctx->pc = 0x1943FCu;
    {
        const bool branch_taken_0x1943fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1943fc) {
            ctx->pc = 0x194408u;
            goto label_194408;
        }
    }
    ctx->pc = 0x194404u;
label_194404:
    // 0x194404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_194408:
    // 0x194408: 0x8e840324  lw          $a0, 0x324($s4)
    ctx->pc = 0x194408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_19440c:
    // 0x19440c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19440cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_194410:
    // 0x194410: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_194414:
    if (ctx->pc == 0x194414u) {
        ctx->pc = 0x194418u;
        goto label_194418;
    }
    ctx->pc = 0x194410u;
    {
        const bool branch_taken_0x194410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194410) {
            ctx->pc = 0x194488u;
            goto label_194488;
        }
    }
    ctx->pc = 0x194418u;
label_194418:
    // 0x194418: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x194418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19441c:
    // 0x19441c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_194420:
    if (ctx->pc == 0x194420u) {
        ctx->pc = 0x194424u;
        goto label_194424;
    }
    ctx->pc = 0x19441Cu;
    {
        const bool branch_taken_0x19441c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19441c) {
            ctx->pc = 0x194488u;
            goto label_194488;
        }
    }
    ctx->pc = 0x194424u;
label_194424:
    // 0x194424: 0xae840330  sw          $a0, 0x330($s4)
    ctx->pc = 0x194424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 4));
label_194428:
    // 0x194428: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19442c:
    // 0x19442c: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x19442cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_194430:
    // 0x194430: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_194434:
    // 0x194434: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x194434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_194438:
    // 0x194438: 0x1000000d  b           . + 4 + (0xD << 2)
label_19443c:
    if (ctx->pc == 0x19443Cu) {
        ctx->pc = 0x19443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194438u;
        // 0x19443c: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194440u;
        goto label_194440;
    }
    ctx->pc = 0x194438u;
    {
        const bool branch_taken_0x194438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194438u;
        // 0x19443c: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194438) {
            ctx->pc = 0x194470u;
            goto label_194470;
        }
    }
    ctx->pc = 0x194440u;
label_194440:
    // 0x194440: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_194444:
    // 0x194444: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_194448:
    // 0x194448: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19444c:
    // 0x19444c: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x19444cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_194450:
    // 0x194450: 0xc063f7c  jal         func_18FDF0
label_194454:
    if (ctx->pc == 0x194454u) {
        ctx->pc = 0x194454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194450u;
        // 0x194454: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194458u;
        goto label_194458;
    }
    ctx->pc = 0x194450u;
    SET_GPR_U32(ctx, 31, 0x194458u);
    ctx->pc = 0x194454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194450u;
    // 0x194454: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194450u, 0x194458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194458u;
label_194458:
    // 0x194458: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19445c:
    // 0x19445c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x19445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_194460:
    // 0x194460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194464:
    // 0x194464: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x194464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_194468:
    // 0x194468: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x194468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_19446c:
    // 0x19446c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19446cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_194470:
    // 0x194470: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_194474:
    // 0x194474: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_194478:
    if (ctx->pc == 0x194478u) {
        ctx->pc = 0x19447Cu;
        goto label_19447c;
    }
    ctx->pc = 0x194474u;
    {
        const bool branch_taken_0x194474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194474) {
            ctx->pc = 0x194440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194440;
        }
    }
    ctx->pc = 0x19447Cu;
label_19447c:
    // 0x19447c: 0xae80032c  sw          $zero, 0x32C($s4)
    ctx->pc = 0x19447cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 0));
label_194480:
    // 0x194480: 0x1000063c  b           . + 4 + (0x63C << 2)
label_194484:
    if (ctx->pc == 0x194484u) {
        ctx->pc = 0x194484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194480u;
        // 0x194484: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194488u;
        goto label_194488;
    }
    ctx->pc = 0x194480u;
    {
        const bool branch_taken_0x194480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194480u;
        // 0x194484: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194480) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194488u;
label_194488:
    // 0x194488: 0x8e840324  lw          $a0, 0x324($s4)
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_19448c:
    // 0x19448c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194490:
    // 0x194490: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x194490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_194494:
    // 0x194494: 0xae840324  sw          $a0, 0x324($s4)
    ctx->pc = 0x194494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 4));
label_194498:
    // 0x194498: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19449c:
    // 0x19449c: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
label_1944a0:
    if (ctx->pc == 0x1944A0u) {
        ctx->pc = 0x1944A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19449Cu;
        // 0x1944a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944A4u;
        goto label_1944a4;
    }
    ctx->pc = 0x19449Cu;
    {
        const bool branch_taken_0x19449c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1944A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19449Cu;
        // 0x1944a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19449c) {
            ctx->pc = 0x1945F0u;
            goto label_1945f0;
        }
    }
    ctx->pc = 0x1944A4u;
label_1944a4:
    // 0x1944a4: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
label_1944a8:
    if (ctx->pc == 0x1944A8u) {
        ctx->pc = 0x1944ACu;
        goto label_1944ac;
    }
    ctx->pc = 0x1944A4u;
    {
        const bool branch_taken_0x1944a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1944a4) {
            ctx->pc = 0x1945E8u;
            goto label_1945e8;
        }
    }
    ctx->pc = 0x1944ACu;
label_1944ac:
    // 0x1944ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1944b0:
    // 0x1944b0: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
label_1944b4:
    if (ctx->pc == 0x1944B4u) {
        ctx->pc = 0x1944B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B0u;
        // 0x1944b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944B8u;
        goto label_1944b8;
    }
    ctx->pc = 0x1944B0u;
    {
        const bool branch_taken_0x1944b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1944B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B0u;
        // 0x1944b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944b0) {
            ctx->pc = 0x1945D8u;
            goto label_1945d8;
        }
    }
    ctx->pc = 0x1944B8u;
label_1944b8:
    // 0x1944b8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
label_1944bc:
    if (ctx->pc == 0x1944BCu) {
        ctx->pc = 0x1944C0u;
        goto label_1944c0;
    }
    ctx->pc = 0x1944B8u;
    {
        const bool branch_taken_0x1944b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1944b8) {
            ctx->pc = 0x194550u;
            goto label_194550;
        }
    }
    ctx->pc = 0x1944C0u;
label_1944c0:
    // 0x1944c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1944c4:
    if (ctx->pc == 0x1944C4u) {
        ctx->pc = 0x1944C8u;
        goto label_1944c8;
    }
    ctx->pc = 0x1944C0u;
    {
        const bool branch_taken_0x1944c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944c0) {
            ctx->pc = 0x1944D0u;
            goto label_1944d0;
        }
    }
    ctx->pc = 0x1944C8u;
label_1944c8:
    // 0x1944c8: 0x1000062a  b           . + 4 + (0x62A << 2)
label_1944cc:
    if (ctx->pc == 0x1944CCu) {
        ctx->pc = 0x1944D0u;
        goto label_1944d0;
    }
    ctx->pc = 0x1944C8u;
    {
        const bool branch_taken_0x1944c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1944c8) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1944D0u;
label_1944d0:
    // 0x1944d0: 0xc0645ac  jal         func_1916B0
label_1944d4:
    if (ctx->pc == 0x1944D4u) {
        ctx->pc = 0x1944D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944D0u;
        // 0x1944d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944D8u;
        goto label_1944d8;
    }
    ctx->pc = 0x1944D0u;
    SET_GPR_U32(ctx, 31, 0x1944D8u);
    ctx->pc = 0x1944D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1944D0u;
    // 0x1944d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x1944D0u, 0x1944D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944D8u;
label_1944d8:
    // 0x1944d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1944dc:
    if (ctx->pc == 0x1944DCu) {
        ctx->pc = 0x1944E0u;
        goto label_1944e0;
    }
    ctx->pc = 0x1944D8u;
    {
        const bool branch_taken_0x1944d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1944d8) {
            ctx->pc = 0x194548u;
            goto label_194548;
        }
    }
    ctx->pc = 0x1944E0u;
label_1944e0:
    // 0x1944e0: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x1944e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_1944e4:
    // 0x1944e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1944e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1944e8:
    // 0x1944e8: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x1944e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_1944ec:
    // 0x1944ec: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x1944ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_1944f0:
    // 0x1944f0: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x1944f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_1944f4:
    // 0x1944f4: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x1944f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_1944f8:
    // 0x1944f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1944fc:
    if (ctx->pc == 0x1944FCu) {
        ctx->pc = 0x1944FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F8u;
        // 0x1944fc: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194500u;
        goto label_194500;
    }
    ctx->pc = 0x1944F8u;
    {
        const bool branch_taken_0x1944f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944F8u;
        // 0x1944fc: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944f8) {
            ctx->pc = 0x194530u;
            goto label_194530;
        }
    }
    ctx->pc = 0x194500u;
label_194500:
    // 0x194500: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_194504:
    // 0x194504: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_194508:
    // 0x194508: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19450c:
    // 0x19450c: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x19450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_194510:
    // 0x194510: 0xc063f7c  jal         func_18FDF0
label_194514:
    if (ctx->pc == 0x194514u) {
        ctx->pc = 0x194514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194510u;
        // 0x194514: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194518u;
        goto label_194518;
    }
    ctx->pc = 0x194510u;
    SET_GPR_U32(ctx, 31, 0x194518u);
    ctx->pc = 0x194514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194510u;
    // 0x194514: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194510u, 0x194518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194518u;
label_194518:
    // 0x194518: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x194518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19451c:
    // 0x19451c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x19451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_194520:
    // 0x194520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_194524:
    // 0x194524: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x194524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_194528:
    // 0x194528: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x194528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_19452c:
    // 0x19452c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_194530:
    // 0x194530: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x194530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_194534:
    // 0x194534: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_194538:
    if (ctx->pc == 0x194538u) {
        ctx->pc = 0x194538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194534u;
        // 0x194538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19453Cu;
        goto label_19453c;
    }
    ctx->pc = 0x194534u;
    {
        const bool branch_taken_0x194534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194534u;
        // 0x194538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194534) {
            ctx->pc = 0x194500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194500;
        }
    }
    ctx->pc = 0x19453Cu;
label_19453c:
    // 0x19453c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19453cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_194540:
    // 0x194540: 0x1000060c  b           . + 4 + (0x60C << 2)
label_194544:
    if (ctx->pc == 0x194544u) {
        ctx->pc = 0x194544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194540u;
        // 0x194544: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194548u;
        goto label_194548;
    }
    ctx->pc = 0x194540u;
    {
        const bool branch_taken_0x194540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194540u;
        // 0x194544: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194540) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194548u;
label_194548:
    // 0x194548: 0x1000060a  b           . + 4 + (0x60A << 2)
label_19454c:
    if (ctx->pc == 0x19454Cu) {
        ctx->pc = 0x19454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194548u;
        // 0x19454c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194550u;
        goto label_194550;
    }
    ctx->pc = 0x194548u;
    {
        const bool branch_taken_0x194548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194548u;
        // 0x19454c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194548) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194550u;
label_194550:
    // 0x194550: 0xc0645ac  jal         func_1916B0
label_194554:
    if (ctx->pc == 0x194554u) {
        ctx->pc = 0x194554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194550u;
        // 0x194554: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194558u;
        goto label_194558;
    }
    ctx->pc = 0x194550u;
    SET_GPR_U32(ctx, 31, 0x194558u);
    ctx->pc = 0x194554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194550u;
    // 0x194554: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x194550u, 0x194558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194558u;
label_194558:
    // 0x194558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19455c:
    if (ctx->pc == 0x19455Cu) {
        ctx->pc = 0x19455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194558u;
        // 0x19455c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194560u;
        goto label_194560;
    }
    ctx->pc = 0x194558u;
    {
        const bool branch_taken_0x194558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194558u;
        // 0x19455c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194558) {
            ctx->pc = 0x194568u;
            goto label_194568;
        }
    }
    ctx->pc = 0x194560u;
label_194560:
    // 0x194560: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_194564:
    if (ctx->pc == 0x194564u) {
        ctx->pc = 0x194568u;
        goto label_194568;
    }
    ctx->pc = 0x194560u;
    {
        const bool branch_taken_0x194560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194560) {
            ctx->pc = 0x1945D0u;
            goto label_1945d0;
        }
    }
    ctx->pc = 0x194568u;
label_194568:
    // 0x194568: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_19456c:
    // 0x19456c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19456cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194570:
    // 0x194570: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194570u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_194574:
    // 0x194574: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_194578:
    // 0x194578: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_19457c:
    // 0x19457c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x19457cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_194580:
    // 0x194580: 0x1000000d  b           . + 4 + (0xD << 2)
label_194584:
    if (ctx->pc == 0x194584u) {
        ctx->pc = 0x194584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194580u;
        // 0x194584: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194588u;
        goto label_194588;
    }
    ctx->pc = 0x194580u;
    {
        const bool branch_taken_0x194580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194580u;
        // 0x194584: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194580) {
            ctx->pc = 0x1945B8u;
            goto label_1945b8;
        }
    }
    ctx->pc = 0x194588u;
label_194588:
    // 0x194588: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x194588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_19458c:
    // 0x19458c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_194590:
    // 0x194590: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_194594:
    // 0x194594: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_194598:
    // 0x194598: 0xc063f7c  jal         func_18FDF0
label_19459c:
    if (ctx->pc == 0x19459Cu) {
        ctx->pc = 0x19459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194598u;
        // 0x19459c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945A0u;
        goto label_1945a0;
    }
    ctx->pc = 0x194598u;
    SET_GPR_U32(ctx, 31, 0x1945A0u);
    ctx->pc = 0x19459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194598u;
    // 0x19459c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194598u, 0x1945A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945A0u;
label_1945a0:
    // 0x1945a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1945a4:
    // 0x1945a4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1945a8:
    // 0x1945a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1945a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1945ac:
    // 0x1945ac: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x1945acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_1945b0:
    // 0x1945b0: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x1945b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_1945b4:
    // 0x1945b4: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x1945b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_1945b8:
    // 0x1945b8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1945b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1945bc:
    // 0x1945bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1945c0:
    if (ctx->pc == 0x1945C0u) {
        ctx->pc = 0x1945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945BCu;
        // 0x1945c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945C4u;
        goto label_1945c4;
    }
    ctx->pc = 0x1945BCu;
    {
        const bool branch_taken_0x1945bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945BCu;
        // 0x1945c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945bc) {
            ctx->pc = 0x194588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194588;
        }
    }
    ctx->pc = 0x1945C4u;
label_1945c4:
    // 0x1945c4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1945c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1945c8:
    // 0x1945c8: 0x100005ea  b           . + 4 + (0x5EA << 2)
label_1945cc:
    if (ctx->pc == 0x1945CCu) {
        ctx->pc = 0x1945CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945C8u;
        // 0x1945cc: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945D0u;
        goto label_1945d0;
    }
    ctx->pc = 0x1945C8u;
    {
        const bool branch_taken_0x1945c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945C8u;
        // 0x1945cc: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945c8) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1945D0u;
label_1945d0:
    // 0x1945d0: 0x100005e8  b           . + 4 + (0x5E8 << 2)
label_1945d4:
    if (ctx->pc == 0x1945D4u) {
        ctx->pc = 0x1945D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D0u;
        // 0x1945d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945D8u;
        goto label_1945d8;
    }
    ctx->pc = 0x1945D0u;
    {
        const bool branch_taken_0x1945d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D0u;
        // 0x1945d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945d0) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1945D8u;
label_1945d8:
    // 0x1945d8: 0xc0645ac  jal         func_1916B0
label_1945dc:
    if (ctx->pc == 0x1945DCu) {
        ctx->pc = 0x1945DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D8u;
        // 0x1945dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945E0u;
        goto label_1945e0;
    }
    ctx->pc = 0x1945D8u;
    SET_GPR_U32(ctx, 31, 0x1945E0u);
    ctx->pc = 0x1945DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D8u;
    // 0x1945dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x1945D8u, 0x1945E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945E0u;
label_1945e0:
    // 0x1945e0: 0x100005e4  b           . + 4 + (0x5E4 << 2)
label_1945e4:
    if (ctx->pc == 0x1945E4u) {
        ctx->pc = 0x1945E8u;
        goto label_1945e8;
    }
    ctx->pc = 0x1945E0u;
    {
        const bool branch_taken_0x1945e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1945e0) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1945E8u;
label_1945e8:
    // 0x1945e8: 0x100005e2  b           . + 4 + (0x5E2 << 2)
label_1945ec:
    if (ctx->pc == 0x1945ECu) {
        ctx->pc = 0x1945ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945E8u;
        // 0x1945ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945F0u;
        goto label_1945f0;
    }
    ctx->pc = 0x1945E8u;
    {
        const bool branch_taken_0x1945e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945E8u;
        // 0x1945ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945e8) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1945F0u;
label_1945f0:
    // 0x1945f0: 0xc0645ac  jal         func_1916B0
label_1945f4:
    if (ctx->pc == 0x1945F4u) {
        ctx->pc = 0x1945F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945F0u;
        // 0x1945f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945F8u;
        goto label_1945f8;
    }
    ctx->pc = 0x1945F0u;
    SET_GPR_U32(ctx, 31, 0x1945F8u);
    ctx->pc = 0x1945F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945F0u;
    // 0x1945f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x1945F0u, 0x1945F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945F8u;
label_1945f8:
    // 0x1945f8: 0x8e84033c  lw          $a0, 0x33C($s4)
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 828)));
label_1945fc:
    // 0x1945fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1945fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194600:
    // 0x194600: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_194604:
    if (ctx->pc == 0x194604u) {
        ctx->pc = 0x194608u;
        goto label_194608;
    }
    ctx->pc = 0x194600u;
    {
        const bool branch_taken_0x194600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194600) {
            ctx->pc = 0x194644u;
            goto label_194644;
        }
    }
    ctx->pc = 0x194608u;
label_194608:
    // 0x194608: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_19460c:
    if (ctx->pc == 0x19460Cu) {
        ctx->pc = 0x194610u;
        goto label_194610;
    }
    ctx->pc = 0x194608u;
    {
        const bool branch_taken_0x194608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194608) {
            ctx->pc = 0x194618u;
            goto label_194618;
        }
    }
    ctx->pc = 0x194610u;
label_194610:
    // 0x194610: 0x100005d8  b           . + 4 + (0x5D8 << 2)
label_194614:
    if (ctx->pc == 0x194614u) {
        ctx->pc = 0x194618u;
        goto label_194618;
    }
    ctx->pc = 0x194610u;
    {
        const bool branch_taken_0x194610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194610) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194618u;
label_194618:
    // 0x194618: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_19461c:
    if (ctx->pc == 0x19461Cu) {
        ctx->pc = 0x194620u;
        goto label_194620;
    }
    ctx->pc = 0x194618u;
    {
        const bool branch_taken_0x194618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x194618) {
            ctx->pc = 0x194628u;
            goto label_194628;
        }
    }
    ctx->pc = 0x194620u;
label_194620:
    // 0x194620: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_194624:
    if (ctx->pc == 0x194624u) {
        ctx->pc = 0x194628u;
        goto label_194628;
    }
    ctx->pc = 0x194620u;
    {
        const bool branch_taken_0x194620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194620) {
            ctx->pc = 0x194634u;
            goto label_194634;
        }
    }
    ctx->pc = 0x194628u;
label_194628:
    // 0x194628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19462c:
    // 0x19462c: 0x100005d1  b           . + 4 + (0x5D1 << 2)
label_194630:
    if (ctx->pc == 0x194630u) {
        ctx->pc = 0x194630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19462Cu;
        // 0x194630: 0xae83033c  sw          $v1, 0x33C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194634u;
        goto label_194634;
    }
    ctx->pc = 0x19462Cu;
    {
        const bool branch_taken_0x19462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19462Cu;
        // 0x194630: 0xae83033c  sw          $v1, 0x33C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19462c) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194634u;
label_194634:
    // 0x194634: 0x0  nop
    ctx->pc = 0x194634u;
    // NOP
label_194638:
    // 0x194638: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_19463c:
    // 0x19463c: 0x100005cd  b           . + 4 + (0x5CD << 2)
label_194640:
    if (ctx->pc == 0x194640u) {
        ctx->pc = 0x194640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19463Cu;
        // 0x194640: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194644u;
        goto label_194644;
    }
    ctx->pc = 0x19463Cu;
    {
        const bool branch_taken_0x19463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19463Cu;
        // 0x194640: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19463c) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194644u;
label_194644:
    // 0x194644: 0x0  nop
    ctx->pc = 0x194644u;
    // NOP
label_194648:
    // 0x194648: 0xc0645ac  jal         func_1916B0
label_19464c:
    if (ctx->pc == 0x19464Cu) {
        ctx->pc = 0x19464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194648u;
        // 0x19464c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194650u;
        goto label_194650;
    }
    ctx->pc = 0x194648u;
    SET_GPR_U32(ctx, 31, 0x194650u);
    ctx->pc = 0x19464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194648u;
    // 0x19464c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x194648u, 0x194650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194650u;
label_194650:
    // 0x194650: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_194654:
    if (ctx->pc == 0x194654u) {
        ctx->pc = 0x194658u;
        goto label_194658;
    }
    ctx->pc = 0x194650u;
    {
        const bool branch_taken_0x194650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194650) {
            ctx->pc = 0x1946C0u;
            goto label_1946c0;
        }
    }
    ctx->pc = 0x194658u;
label_194658:
    // 0x194658: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_19465c:
    // 0x19465c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19465cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194660:
    // 0x194660: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194660u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_194664:
    // 0x194664: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194664u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_194668:
    // 0x194668: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194668u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_19466c:
    // 0x19466c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x19466cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_194670:
    // 0x194670: 0x1000000d  b           . + 4 + (0xD << 2)
label_194674:
    if (ctx->pc == 0x194674u) {
        ctx->pc = 0x194674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194670u;
        // 0x194674: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194678u;
        goto label_194678;
    }
    ctx->pc = 0x194670u;
    {
        const bool branch_taken_0x194670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194670u;
        // 0x194674: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194670) {
            ctx->pc = 0x1946A8u;
            goto label_1946a8;
        }
    }
    ctx->pc = 0x194678u;
label_194678:
    // 0x194678: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x194678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_19467c:
    // 0x19467c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_194680:
    // 0x194680: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_194684:
    // 0x194684: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x194684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_194688:
    // 0x194688: 0xc063f7c  jal         func_18FDF0
label_19468c:
    if (ctx->pc == 0x19468Cu) {
        ctx->pc = 0x19468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194688u;
        // 0x19468c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194690u;
        goto label_194690;
    }
    ctx->pc = 0x194688u;
    SET_GPR_U32(ctx, 31, 0x194690u);
    ctx->pc = 0x19468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194688u;
    // 0x19468c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194688u, 0x194690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194690u;
label_194690:
    // 0x194690: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x194690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_194694:
    // 0x194694: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x194694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_194698:
    // 0x194698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19469c:
    // 0x19469c: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x19469cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_1946a0:
    // 0x1946a0: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x1946a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_1946a4:
    // 0x1946a4: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x1946a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_1946a8:
    // 0x1946a8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1946ac:
    // 0x1946ac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1946b0:
    if (ctx->pc == 0x1946B0u) {
        ctx->pc = 0x1946B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946ACu;
        // 0x1946b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946B4u;
        goto label_1946b4;
    }
    ctx->pc = 0x1946ACu;
    {
        const bool branch_taken_0x1946ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1946B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946ACu;
        // 0x1946b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946ac) {
            ctx->pc = 0x194678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194678;
        }
    }
    ctx->pc = 0x1946B4u;
label_1946b4:
    // 0x1946b4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1946b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1946b8:
    // 0x1946b8: 0x100005ae  b           . + 4 + (0x5AE << 2)
label_1946bc:
    if (ctx->pc == 0x1946BCu) {
        ctx->pc = 0x1946BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946B8u;
        // 0x1946bc: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946C0u;
        goto label_1946c0;
    }
    ctx->pc = 0x1946B8u;
    {
        const bool branch_taken_0x1946b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946B8u;
        // 0x1946bc: 0xae83032c  sw          $v1, 0x32C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946b8) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1946C0u;
label_1946c0:
    // 0x1946c0: 0x100005ac  b           . + 4 + (0x5AC << 2)
label_1946c4:
    if (ctx->pc == 0x1946C4u) {
        ctx->pc = 0x1946C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946C0u;
        // 0x1946c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946C8u;
        goto label_1946c8;
    }
    ctx->pc = 0x1946C0u;
    {
        const bool branch_taken_0x1946c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946C0u;
        // 0x1946c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946c0) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1946C8u;
label_1946c8:
    // 0x1946c8: 0x8e830328  lw          $v1, 0x328($s4)
    ctx->pc = 0x1946c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
label_1946cc:
    // 0x1946cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1946d0:
    // 0x1946d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1946d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1946d4:
    // 0x1946d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1946d8:
    if (ctx->pc == 0x1946D8u) {
        ctx->pc = 0x1946DCu;
        goto label_1946dc;
    }
    ctx->pc = 0x1946D4u;
    {
        const bool branch_taken_0x1946d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1946d4) {
            ctx->pc = 0x1946E4u;
            goto label_1946e4;
        }
    }
    ctx->pc = 0x1946DCu;
label_1946dc:
    // 0x1946dc: 0x14800049  bnez        $a0, . + 4 + (0x49 << 2)
label_1946e0:
    if (ctx->pc == 0x1946E0u) {
        ctx->pc = 0x1946E4u;
        goto label_1946e4;
    }
    ctx->pc = 0x1946DCu;
    {
        const bool branch_taken_0x1946dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1946dc) {
            ctx->pc = 0x194804u;
            goto label_194804;
        }
    }
    ctx->pc = 0x1946E4u;
label_1946e4:
    // 0x1946e4: 0x0  nop
    ctx->pc = 0x1946e4u;
    // NOP
label_1946e8:
    // 0x1946e8: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x1946e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
label_1946ec:
    // 0x1946ec: 0xae800338  sw          $zero, 0x338($s4)
    ctx->pc = 0x1946ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 0));
label_1946f0:
    // 0x1946f0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1946f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1946f4:
    // 0x1946f4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1946f8:
    if (ctx->pc == 0x1946F8u) {
        ctx->pc = 0x1946F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946F4u;
        // 0x1946f8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946FCu;
        goto label_1946fc;
    }
    ctx->pc = 0x1946F4u;
    {
        const bool branch_taken_0x1946f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946F4u;
        // 0x1946f8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946f4) {
            ctx->pc = 0x194780u;
            goto label_194780;
        }
    }
    ctx->pc = 0x1946FCu;
label_1946fc:
    // 0x1946fc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1946fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194700:
    // 0x194700: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x194700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
label_194704:
    // 0x194704: 0xc063f7c  jal         func_18FDF0
label_194708:
    if (ctx->pc == 0x194708u) {
        ctx->pc = 0x194708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194704u;
        // 0x194708: 0x7fa00090  sq          $zero, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19470Cu;
        goto label_19470c;
    }
    ctx->pc = 0x194704u;
    SET_GPR_U32(ctx, 31, 0x19470Cu);
    ctx->pc = 0x194708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194704u;
    // 0x194708: 0x7fa00090  sq          $zero, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194704u, 0x19470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19470Cu;
label_19470c:
    // 0x19470c: 0x8e910668  lw          $s1, 0x668($s4)
    ctx->pc = 0x19470cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
label_194710:
    // 0x194710: 0x0  nop
    ctx->pc = 0x194710u;
    // NOP
label_194714:
    // 0x194714: 0x0  nop
    ctx->pc = 0x194714u;
    // NOP
label_194718:
    // 0x194718: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x194718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19471c:
    // 0x19471c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_194720:
    // 0x194720: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_194724:
    if (ctx->pc == 0x194724u) {
        ctx->pc = 0x194724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194720u;
        // 0x194724: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194728u;
        goto label_194728;
    }
    ctx->pc = 0x194720u;
    {
        const bool branch_taken_0x194720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194720u;
        // 0x194724: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194720) {
            ctx->pc = 0x194758u;
            goto label_194758;
        }
    }
    ctx->pc = 0x194728u;
label_194728:
    // 0x194728: 0xc063f7c  jal         func_18FDF0
label_19472c:
    if (ctx->pc == 0x19472Cu) {
        ctx->pc = 0x19472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194728u;
        // 0x19472c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194730u;
        goto label_194730;
    }
    ctx->pc = 0x194728u;
    SET_GPR_U32(ctx, 31, 0x194730u);
    ctx->pc = 0x19472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194728u;
    // 0x19472c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194728u, 0x194730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194730u;
label_194730:
    // 0x194730: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x194730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_194734:
    // 0x194734: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x194734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_194738:
    // 0x194738: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x194738u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_19473c:
    // 0x19473c: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x19473cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_194740:
    // 0x194740: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x194740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_194744:
    // 0x194744: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x194744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_194748:
    // 0x194748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_19474c:
    if (ctx->pc == 0x19474Cu) {
        ctx->pc = 0x194750u;
        goto label_194750;
    }
    ctx->pc = 0x194748u;
    {
        const bool branch_taken_0x194748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194748) {
            ctx->pc = 0x194758u;
            goto label_194758;
        }
    }
    ctx->pc = 0x194750u;
label_194750:
    // 0x194750: 0x10000009  b           . + 4 + (0x9 << 2)
label_194754:
    if (ctx->pc == 0x194754u) {
        ctx->pc = 0x194758u;
        goto label_194758;
    }
    ctx->pc = 0x194750u;
    {
        const bool branch_taken_0x194750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194750) {
            ctx->pc = 0x194778u;
            goto label_194778;
        }
    }
    ctx->pc = 0x194758u;
label_194758:
    // 0x194758: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x194758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19475c:
    // 0x19475c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194760:
    // 0x194760: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_194764:
    if (ctx->pc == 0x194764u) {
        ctx->pc = 0x194768u;
        goto label_194768;
    }
    ctx->pc = 0x194760u;
    {
        const bool branch_taken_0x194760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194760) {
            ctx->pc = 0x194770u;
            goto label_194770;
        }
    }
    ctx->pc = 0x194768u;
label_194768:
    // 0x194768: 0x10000003  b           . + 4 + (0x3 << 2)
label_19476c:
    if (ctx->pc == 0x19476Cu) {
        ctx->pc = 0x19476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194768u;
        // 0x19476c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194770u;
        goto label_194770;
    }
    ctx->pc = 0x194768u;
    {
        const bool branch_taken_0x194768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194768u;
        // 0x19476c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194768) {
            ctx->pc = 0x194778u;
            goto label_194778;
        }
    }
    ctx->pc = 0x194770u;
label_194770:
    // 0x194770: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_194774:
    if (ctx->pc == 0x194774u) {
        ctx->pc = 0x194774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194770u;
        // 0x194774: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194778u;
        goto label_194778;
    }
    ctx->pc = 0x194770u;
    {
        const bool branch_taken_0x194770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194770u;
        // 0x194774: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194770) {
            ctx->pc = 0x194714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194714;
        }
    }
    ctx->pc = 0x194778u;
label_194778:
    // 0x194778: 0x10000003  b           . + 4 + (0x3 << 2)
label_19477c:
    if (ctx->pc == 0x19477Cu) {
        ctx->pc = 0x19477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194778u;
        // 0x19477c: 0xae910664  sw          $s1, 0x664($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194780u;
        goto label_194780;
    }
    ctx->pc = 0x194778u;
    {
        const bool branch_taken_0x194778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194778u;
        // 0x19477c: 0xae910664  sw          $s1, 0x664($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194778) {
            ctx->pc = 0x194788u;
            goto label_194788;
        }
    }
    ctx->pc = 0x194780u;
label_194780:
    // 0x194780: 0x8e830668  lw          $v1, 0x668($s4)
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
label_194784:
    // 0x194784: 0xae830664  sw          $v1, 0x664($s4)
    ctx->pc = 0x194784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 3));
label_194788:
    // 0x194788: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19478c:
    // 0x19478c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_194790:
    if (ctx->pc == 0x194790u) {
        ctx->pc = 0x194794u;
        goto label_194794;
    }
    ctx->pc = 0x19478Cu;
    {
        const bool branch_taken_0x19478c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19478c) {
            ctx->pc = 0x1947A0u;
            goto label_1947a0;
        }
    }
    ctx->pc = 0x194794u;
label_194794:
    // 0x194794: 0x8e830328  lw          $v1, 0x328($s4)
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
label_194798:
    // 0x194798: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19479c:
    // 0x19479c: 0xae830328  sw          $v1, 0x328($s4)
    ctx->pc = 0x19479cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 808), GPR_U32(ctx, 3));
label_1947a0:
    // 0x1947a0: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
label_1947a4:
    // 0x1947a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1947a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1947a8:
    // 0x1947a8: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x1947a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
label_1947ac:
    // 0x1947ac: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x1947acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
label_1947b0:
    // 0x1947b0: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x1947b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
label_1947b4:
    // 0x1947b4: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x1947b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_1947b8:
    // 0x1947b8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1947bc:
    if (ctx->pc == 0x1947BCu) {
        ctx->pc = 0x1947BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B8u;
        // 0x1947bc: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947C0u;
        goto label_1947c0;
    }
    ctx->pc = 0x1947B8u;
    {
        const bool branch_taken_0x1947b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B8u;
        // 0x1947bc: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947b8) {
            ctx->pc = 0x1947F0u;
            goto label_1947f0;
        }
    }
    ctx->pc = 0x1947C0u;
label_1947c0:
    // 0x1947c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1947c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1947c4:
    // 0x1947c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1947c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1947c8:
    // 0x1947c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1947c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1947cc:
    // 0x1947cc: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
label_1947d0:
    // 0x1947d0: 0xc063f7c  jal         func_18FDF0
label_1947d4:
    if (ctx->pc == 0x1947D4u) {
        ctx->pc = 0x1947D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947D0u;
        // 0x1947d4: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947D8u;
        goto label_1947d8;
    }
    ctx->pc = 0x1947D0u;
    SET_GPR_U32(ctx, 31, 0x1947D8u);
    ctx->pc = 0x1947D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947D0u;
    // 0x1947d4: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x1947D0u, 0x1947D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947D8u;
label_1947d8:
    // 0x1947d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1947d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1947dc:
    // 0x1947dc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1947e0:
    // 0x1947e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1947e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1947e4:
    // 0x1947e4: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x1947e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
label_1947e8:
    // 0x1947e8: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x1947e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_1947ec:
    // 0x1947ec: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x1947ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_1947f0:
    // 0x1947f0: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1947f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1947f4:
    // 0x1947f4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1947f8:
    if (ctx->pc == 0x1947F8u) {
        ctx->pc = 0x1947FCu;
        goto label_1947fc;
    }
    ctx->pc = 0x1947F4u;
    {
        const bool branch_taken_0x1947f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1947f4) {
            ctx->pc = 0x1947C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1947c0;
        }
    }
    ctx->pc = 0x1947FCu;
label_1947fc:
    // 0x1947fc: 0x10000562  b           . + 4 + (0x562 << 2)
label_194800:
    if (ctx->pc == 0x194800u) {
        ctx->pc = 0x194800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947FCu;
        // 0x194800: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194804u;
        goto label_194804;
    }
    ctx->pc = 0x1947FCu;
    {
        const bool branch_taken_0x1947fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947FCu;
        // 0x194800: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947fc) {
            ctx->pc = 0x195D88u;
            goto label_195d88;
        }
    }
    ctx->pc = 0x194804u;
label_194804:
    // 0x194804: 0x0  nop
    ctx->pc = 0x194804u;
    // NOP
label_194808:
    // 0x194808: 0x1000055a  b           . + 4 + (0x55A << 2)
label_19480c:
    if (ctx->pc == 0x19480Cu) {
        ctx->pc = 0x19480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194808u;
        // 0x19480c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194810u;
        goto label_194810;
    }
    ctx->pc = 0x194808u;
    {
        const bool branch_taken_0x194808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194808u;
        // 0x19480c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194808) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194810u;
label_194810:
    // 0x194810: 0x8e830334  lw          $v1, 0x334($s4)
    ctx->pc = 0x194810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
label_194814:
    // 0x194814: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_194818:
    if (ctx->pc == 0x194818u) {
        ctx->pc = 0x194818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194814u;
        // 0x194818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19481Cu;
        goto label_19481c;
    }
    ctx->pc = 0x194814u;
    {
        const bool branch_taken_0x194814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194814u;
        // 0x194818: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194814) {
            ctx->pc = 0x194920u;
            goto label_194920;
        }
    }
    ctx->pc = 0x19481Cu;
label_19481c:
    // 0x19481c: 0xc064364  jal         func_190D90
label_194820:
    if (ctx->pc == 0x194820u) {
        ctx->pc = 0x194820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19481Cu;
        // 0x194820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194824u;
        goto label_194824;
    }
    ctx->pc = 0x19481Cu;
    SET_GPR_U32(ctx, 31, 0x194824u);
    ctx->pc = 0x194820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19481Cu;
    // 0x194820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190D90u, 0x19481Cu, 0x194824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194824u;
label_194824:
    // 0x194824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194828:
    // 0x194828: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_19482c:
    if (ctx->pc == 0x19482Cu) {
        ctx->pc = 0x194830u;
        goto label_194830;
    }
    ctx->pc = 0x194828u;
    {
        const bool branch_taken_0x194828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194828) {
            ctx->pc = 0x19483Cu;
            goto label_19483c;
        }
    }
    ctx->pc = 0x194830u;
label_194830:
    // 0x194830: 0xae830334  sw          $v1, 0x334($s4)
    ctx->pc = 0x194830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 3));
label_194834:
    // 0x194834: 0x1000054f  b           . + 4 + (0x54F << 2)
label_194838:
    if (ctx->pc == 0x194838u) {
        ctx->pc = 0x194838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194834u;
        // 0x194838: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19483Cu;
        goto label_19483c;
    }
    ctx->pc = 0x194834u;
    {
        const bool branch_taken_0x194834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194834u;
        // 0x194838: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194834) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x19483Cu;
label_19483c:
    // 0x19483c: 0x0  nop
    ctx->pc = 0x19483cu;
    // NOP
label_194840:
    // 0x194840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194844:
    // 0x194844: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194848:
    // 0x194848: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x194848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19484c:
    // 0x19484c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194850:
    // 0x194850: 0x1000002e  b           . + 4 + (0x2E << 2)
label_194854:
    if (ctx->pc == 0x194854u) {
        ctx->pc = 0x194854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194850u;
        // 0x194854: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194858u;
        goto label_194858;
    }
    ctx->pc = 0x194850u;
    {
        const bool branch_taken_0x194850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194850u;
        // 0x194854: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194850) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x194858u;
label_194858:
    // 0x194858: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x194858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19485c:
    // 0x19485c: 0x0  nop
    ctx->pc = 0x19485cu;
    // NOP
label_194860:
    // 0x194860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194864:
    // 0x194864: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
label_194868:
    if (ctx->pc == 0x194868u) {
        ctx->pc = 0x19486Cu;
        goto label_19486c;
    }
    ctx->pc = 0x194864u;
    {
        const bool branch_taken_0x194864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x194864) {
            ctx->pc = 0x194884u;
            goto label_194884;
        }
    }
    ctx->pc = 0x19486Cu;
label_19486c:
    // 0x19486c: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_194870:
    if (ctx->pc == 0x194870u) {
        ctx->pc = 0x194874u;
        goto label_194874;
    }
    ctx->pc = 0x19486Cu;
    {
        const bool branch_taken_0x19486c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x19486c) {
            ctx->pc = 0x194884u;
            goto label_194884;
        }
    }
    ctx->pc = 0x194874u;
label_194874:
    // 0x194874: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_194878:
    if (ctx->pc == 0x194878u) {
        ctx->pc = 0x19487Cu;
        goto label_19487c;
    }
    ctx->pc = 0x194874u;
    {
        const bool branch_taken_0x194874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x194874) {
            ctx->pc = 0x194884u;
            goto label_194884;
        }
    }
    ctx->pc = 0x19487Cu;
label_19487c:
    // 0x19487c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_194880:
    if (ctx->pc == 0x194880u) {
        ctx->pc = 0x194884u;
        goto label_194884;
    }
    ctx->pc = 0x19487Cu;
    {
        const bool branch_taken_0x19487c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19487c) {
            ctx->pc = 0x194890u;
            goto label_194890;
        }
    }
    ctx->pc = 0x194884u;
label_194884:
    // 0x194884: 0x0  nop
    ctx->pc = 0x194884u;
    // NOP
label_194888:
    // 0x194888: 0x10000007  b           . + 4 + (0x7 << 2)
label_19488c:
    if (ctx->pc == 0x19488Cu) {
        ctx->pc = 0x194890u;
        goto label_194890;
    }
    ctx->pc = 0x194888u;
    {
        const bool branch_taken_0x194888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194888) {
            ctx->pc = 0x1948A8u;
            goto label_1948a8;
        }
    }
    ctx->pc = 0x194890u;
label_194890:
    // 0x194890: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_194894:
    if (ctx->pc == 0x194894u) {
        ctx->pc = 0x194898u;
        goto label_194898;
    }
    ctx->pc = 0x194890u;
    {
        const bool branch_taken_0x194890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x194890) {
            ctx->pc = 0x1948A0u;
            goto label_1948a0;
        }
    }
    ctx->pc = 0x194898u;
label_194898:
    // 0x194898: 0x10000003  b           . + 4 + (0x3 << 2)
label_19489c:
    if (ctx->pc == 0x19489Cu) {
        ctx->pc = 0x19489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194898u;
        // 0x19489c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948A0u;
        goto label_1948a0;
    }
    ctx->pc = 0x194898u;
    {
        const bool branch_taken_0x194898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194898u;
        // 0x19489c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194898) {
            ctx->pc = 0x1948A8u;
            goto label_1948a8;
        }
    }
    ctx->pc = 0x1948A0u;
label_1948a0:
    // 0x1948a0: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_1948a4:
    if (ctx->pc == 0x1948A4u) {
        ctx->pc = 0x1948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948A0u;
        // 0x1948a4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948A8u;
        goto label_1948a8;
    }
    ctx->pc = 0x1948A0u;
    {
        const bool branch_taken_0x1948a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948A0u;
        // 0x1948a4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948a0) {
            ctx->pc = 0x19485Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19485c;
        }
    }
    ctx->pc = 0x1948A8u;
label_1948a8:
    // 0x1948a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1948ac:
    // 0x1948ac: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
label_1948b0:
    if (ctx->pc == 0x1948B0u) {
        ctx->pc = 0x1948B4u;
        goto label_1948b4;
    }
    ctx->pc = 0x1948ACu;
    {
        const bool branch_taken_0x1948ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1948ac) {
            ctx->pc = 0x194908u;
            goto label_194908;
        }
    }
    ctx->pc = 0x1948B4u;
label_1948b4:
    // 0x1948b4: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
label_1948b8:
    if (ctx->pc == 0x1948B8u) {
        ctx->pc = 0x1948BCu;
        goto label_1948bc;
    }
    ctx->pc = 0x1948B4u;
    {
        const bool branch_taken_0x1948b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1948b4) {
            ctx->pc = 0x1948F0u;
            goto label_1948f0;
        }
    }
    ctx->pc = 0x1948BCu;
label_1948bc:
    // 0x1948bc: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
label_1948c0:
    if (ctx->pc == 0x1948C0u) {
        ctx->pc = 0x1948C4u;
        goto label_1948c4;
    }
    ctx->pc = 0x1948BCu;
    {
        const bool branch_taken_0x1948bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1948bc) {
            ctx->pc = 0x1948E8u;
            goto label_1948e8;
        }
    }
    ctx->pc = 0x1948C4u;
label_1948c4:
    // 0x1948c4: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
label_1948c8:
    if (ctx->pc == 0x1948C8u) {
        ctx->pc = 0x1948CCu;
        goto label_1948cc;
    }
    ctx->pc = 0x1948C4u;
    {
        const bool branch_taken_0x1948c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1948c4) {
            ctx->pc = 0x1948D4u;
            goto label_1948d4;
        }
    }
    ctx->pc = 0x1948CCu;
label_1948cc:
    // 0x1948cc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1948d0:
    if (ctx->pc == 0x1948D0u) {
        ctx->pc = 0x1948D4u;
        goto label_1948d4;
    }
    ctx->pc = 0x1948CCu;
    {
        const bool branch_taken_0x1948cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1948cc) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x1948D4u;
label_1948d4:
    // 0x1948d4: 0x0  nop
    ctx->pc = 0x1948d4u;
    // NOP
label_1948d8:
    // 0x1948d8: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
label_1948dc:
    if (ctx->pc == 0x1948DCu) {
        ctx->pc = 0x1948E0u;
        goto label_1948e0;
    }
    ctx->pc = 0x1948D8u;
    {
        const bool branch_taken_0x1948d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1948d8) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x1948E0u;
label_1948e0:
    // 0x1948e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1948e4:
    if (ctx->pc == 0x1948E4u) {
        ctx->pc = 0x1948E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E0u;
        // 0x1948e4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948E8u;
        goto label_1948e8;
    }
    ctx->pc = 0x1948E0u;
    {
        const bool branch_taken_0x1948e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E0u;
        // 0x1948e4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e0) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x1948E8u;
label_1948e8:
    // 0x1948e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1948ec:
    if (ctx->pc == 0x1948ECu) {
        ctx->pc = 0x1948ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E8u;
        // 0x1948ec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948F0u;
        goto label_1948f0;
    }
    ctx->pc = 0x1948E8u;
    {
        const bool branch_taken_0x1948e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E8u;
        // 0x1948ec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e8) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x1948F0u;
label_1948f0:
    // 0x1948f0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_1948f4:
    if (ctx->pc == 0x1948F4u) {
        ctx->pc = 0x1948F8u;
        goto label_1948f8;
    }
    ctx->pc = 0x1948F0u;
    {
        const bool branch_taken_0x1948f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1948f0) {
            ctx->pc = 0x194900u;
            goto label_194900;
        }
    }
    ctx->pc = 0x1948F8u;
label_1948f8:
    // 0x1948f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1948fc:
    if (ctx->pc == 0x1948FCu) {
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194900u;
        goto label_194900;
    }
    ctx->pc = 0x1948F8u;
    {
        const bool branch_taken_0x1948f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948f8) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x194900u;
label_194900:
    // 0x194900: 0x10000002  b           . + 4 + (0x2 << 2)
label_194904:
    if (ctx->pc == 0x194904u) {
        ctx->pc = 0x194904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194900u;
        // 0x194904: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194908u;
        goto label_194908;
    }
    ctx->pc = 0x194900u;
    {
        const bool branch_taken_0x194900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194900u;
        // 0x194904: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194900) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x194908u;
label_194908:
    // 0x194908: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19490c:
    // 0x19490c: 0x0  nop
    ctx->pc = 0x19490cu;
    // NOP
label_194910:
    // 0x194910: 0x501ffd1  bgez        $t0, . + 4 + (-0x2F << 2)
label_194914:
    if (ctx->pc == 0x194914u) {
        ctx->pc = 0x194918u;
        goto label_194918;
    }
    ctx->pc = 0x194910u;
    {
        const bool branch_taken_0x194910 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x194910) {
            ctx->pc = 0x194858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194858;
        }
    }
    ctx->pc = 0x194918u;
label_194918:
    // 0x194918: 0x10000516  b           . + 4 + (0x516 << 2)
label_19491c:
    if (ctx->pc == 0x19491Cu) {
        ctx->pc = 0x194920u;
        goto label_194920;
    }
    ctx->pc = 0x194918u;
    {
        const bool branch_taken_0x194918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194918) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194920u;
label_194920:
    // 0x194920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194924:
    // 0x194924: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x194924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194928:
    // 0x194928: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19492c:
    // 0x19492c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194930:
    // 0x194930: 0x1000002e  b           . + 4 + (0x2E << 2)
label_194934:
    if (ctx->pc == 0x194934u) {
        ctx->pc = 0x194934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194930u;
        // 0x194934: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194938u;
        goto label_194938;
    }
    ctx->pc = 0x194930u;
    {
        const bool branch_taken_0x194930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194930u;
        // 0x194934: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194930) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x194938u;
label_194938:
    // 0x194938: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x194938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19493c:
    // 0x19493c: 0x0  nop
    ctx->pc = 0x19493cu;
    // NOP
label_194940:
    // 0x194940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_194944:
    // 0x194944: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
label_194948:
    if (ctx->pc == 0x194948u) {
        ctx->pc = 0x19494Cu;
        goto label_19494c;
    }
    ctx->pc = 0x194944u;
    {
        const bool branch_taken_0x194944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x194944) {
            ctx->pc = 0x194964u;
            goto label_194964;
        }
    }
    ctx->pc = 0x19494Cu;
label_19494c:
    // 0x19494c: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_194950:
    if (ctx->pc == 0x194950u) {
        ctx->pc = 0x194954u;
        goto label_194954;
    }
    ctx->pc = 0x19494Cu;
    {
        const bool branch_taken_0x19494c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x19494c) {
            ctx->pc = 0x194964u;
            goto label_194964;
        }
    }
    ctx->pc = 0x194954u;
label_194954:
    // 0x194954: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_194958:
    if (ctx->pc == 0x194958u) {
        ctx->pc = 0x19495Cu;
        goto label_19495c;
    }
    ctx->pc = 0x194954u;
    {
        const bool branch_taken_0x194954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x194954) {
            ctx->pc = 0x194964u;
            goto label_194964;
        }
    }
    ctx->pc = 0x19495Cu;
label_19495c:
    // 0x19495c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_194960:
    if (ctx->pc == 0x194960u) {
        ctx->pc = 0x194964u;
        goto label_194964;
    }
    ctx->pc = 0x19495Cu;
    {
        const bool branch_taken_0x19495c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19495c) {
            ctx->pc = 0x194970u;
            goto label_194970;
        }
    }
    ctx->pc = 0x194964u;
label_194964:
    // 0x194964: 0x0  nop
    ctx->pc = 0x194964u;
    // NOP
label_194968:
    // 0x194968: 0x10000007  b           . + 4 + (0x7 << 2)
label_19496c:
    if (ctx->pc == 0x19496Cu) {
        ctx->pc = 0x194970u;
        goto label_194970;
    }
    ctx->pc = 0x194968u;
    {
        const bool branch_taken_0x194968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194968) {
            ctx->pc = 0x194988u;
            goto label_194988;
        }
    }
    ctx->pc = 0x194970u;
label_194970:
    // 0x194970: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_194974:
    if (ctx->pc == 0x194974u) {
        ctx->pc = 0x194978u;
        goto label_194978;
    }
    ctx->pc = 0x194970u;
    {
        const bool branch_taken_0x194970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x194970) {
            ctx->pc = 0x194980u;
            goto label_194980;
        }
    }
    ctx->pc = 0x194978u;
label_194978:
    // 0x194978: 0x10000003  b           . + 4 + (0x3 << 2)
label_19497c:
    if (ctx->pc == 0x19497Cu) {
        ctx->pc = 0x19497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194978u;
        // 0x19497c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194980u;
        goto label_194980;
    }
    ctx->pc = 0x194978u;
    {
        const bool branch_taken_0x194978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194978u;
        // 0x19497c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194978) {
            ctx->pc = 0x194988u;
            goto label_194988;
        }
    }
    ctx->pc = 0x194980u;
label_194980:
    // 0x194980: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_194984:
    if (ctx->pc == 0x194984u) {
        ctx->pc = 0x194984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194980u;
        // 0x194984: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194988u;
        goto label_194988;
    }
    ctx->pc = 0x194980u;
    {
        const bool branch_taken_0x194980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194980u;
        // 0x194984: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194980) {
            ctx->pc = 0x19493Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19493c;
        }
    }
    ctx->pc = 0x194988u;
label_194988:
    // 0x194988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19498c:
    // 0x19498c: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
label_194990:
    if (ctx->pc == 0x194990u) {
        ctx->pc = 0x194994u;
        goto label_194994;
    }
    ctx->pc = 0x19498Cu;
    {
        const bool branch_taken_0x19498c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x19498c) {
            ctx->pc = 0x1949E8u;
            goto label_1949e8;
        }
    }
    ctx->pc = 0x194994u;
label_194994:
    // 0x194994: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
label_194998:
    if (ctx->pc == 0x194998u) {
        ctx->pc = 0x19499Cu;
        goto label_19499c;
    }
    ctx->pc = 0x194994u;
    {
        const bool branch_taken_0x194994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x194994) {
            ctx->pc = 0x1949D0u;
            goto label_1949d0;
        }
    }
    ctx->pc = 0x19499Cu;
label_19499c:
    // 0x19499c: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
label_1949a0:
    if (ctx->pc == 0x1949A0u) {
        ctx->pc = 0x1949A4u;
        goto label_1949a4;
    }
    ctx->pc = 0x19499Cu;
    {
        const bool branch_taken_0x19499c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x19499c) {
            ctx->pc = 0x1949C8u;
            goto label_1949c8;
        }
    }
    ctx->pc = 0x1949A4u;
label_1949a4:
    // 0x1949a4: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
label_1949a8:
    if (ctx->pc == 0x1949A8u) {
        ctx->pc = 0x1949ACu;
        goto label_1949ac;
    }
    ctx->pc = 0x1949A4u;
    {
        const bool branch_taken_0x1949a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1949a4) {
            ctx->pc = 0x1949B4u;
            goto label_1949b4;
        }
    }
    ctx->pc = 0x1949ACu;
label_1949ac:
    // 0x1949ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1949b0:
    if (ctx->pc == 0x1949B0u) {
        ctx->pc = 0x1949B4u;
        goto label_1949b4;
    }
    ctx->pc = 0x1949ACu;
    {
        const bool branch_taken_0x1949ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1949ac) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x1949B4u;
label_1949b4:
    // 0x1949b4: 0x0  nop
    ctx->pc = 0x1949b4u;
    // NOP
label_1949b8:
    // 0x1949b8: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
label_1949bc:
    if (ctx->pc == 0x1949BCu) {
        ctx->pc = 0x1949C0u;
        goto label_1949c0;
    }
    ctx->pc = 0x1949B8u;
    {
        const bool branch_taken_0x1949b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949b8) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x1949C0u;
label_1949c0:
    // 0x1949c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1949c4:
    if (ctx->pc == 0x1949C4u) {
        ctx->pc = 0x1949C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C0u;
        // 0x1949c4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949C8u;
        goto label_1949c8;
    }
    ctx->pc = 0x1949C0u;
    {
        const bool branch_taken_0x1949c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C0u;
        // 0x1949c4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c0) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x1949C8u;
label_1949c8:
    // 0x1949c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1949cc:
    if (ctx->pc == 0x1949CCu) {
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949D0u;
        goto label_1949d0;
    }
    ctx->pc = 0x1949C8u;
    {
        const bool branch_taken_0x1949c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c8) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x1949D0u;
label_1949d0:
    // 0x1949d0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_1949d4:
    if (ctx->pc == 0x1949D4u) {
        ctx->pc = 0x1949D8u;
        goto label_1949d8;
    }
    ctx->pc = 0x1949D0u;
    {
        const bool branch_taken_0x1949d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949d0) {
            ctx->pc = 0x1949E0u;
            goto label_1949e0;
        }
    }
    ctx->pc = 0x1949D8u;
label_1949d8:
    // 0x1949d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1949dc:
    if (ctx->pc == 0x1949DCu) {
        ctx->pc = 0x1949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949D8u;
        // 0x1949dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949E0u;
        goto label_1949e0;
    }
    ctx->pc = 0x1949D8u;
    {
        const bool branch_taken_0x1949d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949D8u;
        // 0x1949dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949d8) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x1949E0u;
label_1949e0:
    // 0x1949e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1949e4:
    if (ctx->pc == 0x1949E4u) {
        ctx->pc = 0x1949E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949E0u;
        // 0x1949e4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949E8u;
        goto label_1949e8;
    }
    ctx->pc = 0x1949E0u;
    {
        const bool branch_taken_0x1949e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949E0u;
        // 0x1949e4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949e0) {
            ctx->pc = 0x1949ECu;
            goto label_1949ec;
        }
    }
    ctx->pc = 0x1949E8u;
label_1949e8:
    // 0x1949e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1949e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1949ec:
    // 0x1949ec: 0x0  nop
    ctx->pc = 0x1949ecu;
    // NOP
label_1949f0:
    // 0x1949f0: 0x501ffd1  bgez        $t0, . + 4 + (-0x2F << 2)
label_1949f4:
    if (ctx->pc == 0x1949F4u) {
        ctx->pc = 0x1949F8u;
        goto label_1949f8;
    }
    ctx->pc = 0x1949F0u;
    {
        const bool branch_taken_0x1949f0 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1949f0) {
            ctx->pc = 0x194938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194938;
        }
    }
    ctx->pc = 0x1949F8u;
label_1949f8:
    // 0x1949f8: 0x100004de  b           . + 4 + (0x4DE << 2)
label_1949fc:
    if (ctx->pc == 0x1949FCu) {
        ctx->pc = 0x194A00u;
        goto label_194a00;
    }
    ctx->pc = 0x1949F8u;
    {
        const bool branch_taken_0x1949f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1949f8) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194A00u;
label_194a00:
    // 0x194a00: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
label_194a04:
    // 0x194a04: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x194a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_194a08:
    // 0x194a08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_194a0c:
    // 0x194a0c: 0xae830338  sw          $v1, 0x338($s4)
    ctx->pc = 0x194a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 3));
label_194a10:
    // 0x194a10: 0x100004d8  b           . + 4 + (0x4D8 << 2)
label_194a14:
    if (ctx->pc == 0x194A14u) {
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A10u;
        // 0x194a14: 0xae800334  sw          $zero, 0x334($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A18u;
        goto label_194a18;
    }
    ctx->pc = 0x194A10u;
    {
        const bool branch_taken_0x194a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A10u;
        // 0x194a14: 0xae800334  sw          $zero, 0x334($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a10) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194A18u;
label_194a18:
    // 0x194a18: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
label_194a1c:
    // 0x194a1c: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_194a20:
    if (ctx->pc == 0x194A20u) {
        ctx->pc = 0x194A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A1Cu;
        // 0x194a20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A24u;
        goto label_194a24;
    }
    ctx->pc = 0x194A1Cu;
    {
        const bool branch_taken_0x194a1c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x194A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A1Cu;
        // 0x194a20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a1c) {
            ctx->pc = 0x194A3Cu;
            goto label_194a3c;
        }
    }
    ctx->pc = 0x194A24u;
label_194a24:
    // 0x194a24: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_194a28:
    // 0x194a28: 0xae830334  sw          $v1, 0x334($s4)
    ctx->pc = 0x194a28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 3));
label_194a2c:
    // 0x194a2c: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x194a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
label_194a30:
    // 0x194a30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x194a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_194a34:
    // 0x194a34: 0x100004cf  b           . + 4 + (0x4CF << 2)
label_194a38:
    if (ctx->pc == 0x194A38u) {
        ctx->pc = 0x194A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A34u;
        // 0x194a38: 0xae830338  sw          $v1, 0x338($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A3Cu;
        goto label_194a3c;
    }
    ctx->pc = 0x194A34u;
    {
        const bool branch_taken_0x194a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A34u;
        // 0x194a38: 0xae830338  sw          $v1, 0x338($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a34) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194A3Cu;
label_194a3c:
    // 0x194a3c: 0x0  nop
    ctx->pc = 0x194a3cu;
    // NOP
label_194a40:
    // 0x194a40: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x194a40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
label_194a44:
    // 0x194a44: 0x100004cb  b           . + 4 + (0x4CB << 2)
label_194a48:
    if (ctx->pc == 0x194A48u) {
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A4Cu;
        goto label_194a4c;
    }
    ctx->pc = 0x194A44u;
    {
        const bool branch_taken_0x194a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a44) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194A4Cu;
label_194a4c:
    // 0x194a4c: 0x0  nop
    ctx->pc = 0x194a4cu;
    // NOP
label_194a50:
    // 0x194a50: 0x100004c8  b           . + 4 + (0x4C8 << 2)
label_194a54:
    if (ctx->pc == 0x194A54u) {
        ctx->pc = 0x194A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A50u;
        // 0x194a54: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A58u;
        goto label_194a58;
    }
    ctx->pc = 0x194A50u;
    {
        const bool branch_taken_0x194a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A50u;
        // 0x194a54: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a50) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194A58u;
label_194a58:
    // 0x194a58: 0x100004c6  b           . + 4 + (0x4C6 << 2)
label_194a5c:
    if (ctx->pc == 0x194A5Cu) {
        ctx->pc = 0x194A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A58u;
        // 0x194a5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A60u;
        goto label_194a60;
    }
    ctx->pc = 0x194A58u;
    {
        const bool branch_taken_0x194a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A58u;
        // 0x194a5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a58) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194A60u;
label_194a60:
    // 0x194a60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x194a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_194a64:
    // 0x194a64: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x194a64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_194a68:
    // 0x194a68: 0x102000fd  beqz        $at, . + 4 + (0xFD << 2)
label_194a6c:
    if (ctx->pc == 0x194A6Cu) {
        ctx->pc = 0x194A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A68u;
        // 0x194a6c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A70u;
        goto label_194a70;
    }
    ctx->pc = 0x194A68u;
    {
        const bool branch_taken_0x194a68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A68u;
        // 0x194a6c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a68) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194A70u;
label_194a70:
    // 0x194a70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194a74:
    // 0x194a74: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_194a78:
    // 0x194a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194a7c:
    // 0x194a7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_194a80:
    // 0x194a80: 0x600008  jr          $v1
label_194a84:
    if (ctx->pc == 0x194A84u) {
        ctx->pc = 0x194A88u;
        goto label_194a88;
    }
    ctx->pc = 0x194A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194A88u: goto label_194a88;
            case 0x194AA0u: goto label_194aa0;
            case 0x194ADCu: goto label_194adc;
            case 0x194B48u: goto label_194b48;
            case 0x194B78u: goto label_194b78;
            case 0x194BA8u: goto label_194ba8;
            case 0x194BF4u: goto label_194bf4;
            case 0x194C44u: goto label_194c44;
            case 0x194C64u: goto label_194c64;
            case 0x194C90u: goto label_194c90;
            case 0x194D20u: goto label_194d20;
            case 0x194DB0u: goto label_194db0;
            case 0x194DCCu: goto label_194dcc;
            case 0x194E18u: goto label_194e18;
            case 0x194E60u: goto label_194e60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x194A88u;
label_194a88:
    // 0x194a88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194a8c:
    // 0x194a8c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194a90:
    // 0x194a90: 0xc0649cc  jal         func_192730
label_194a94:
    if (ctx->pc == 0x194A94u) {
        ctx->pc = 0x194A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A90u;
        // 0x194a94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A98u;
        goto label_194a98;
    }
    ctx->pc = 0x194A90u;
    SET_GPR_U32(ctx, 31, 0x194A98u);
    ctx->pc = 0x194A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A90u;
    // 0x194a94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192730u, 0x194A90u, 0x194A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A98u;
label_194a98:
    // 0x194a98: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_194a9c:
    if (ctx->pc == 0x194A9Cu) {
        ctx->pc = 0x194AA0u;
        goto label_194aa0;
    }
    ctx->pc = 0x194A98u;
    {
        const bool branch_taken_0x194a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a98) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194AA0u;
label_194aa0:
    // 0x194aa0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_194aa4:
    // 0x194aa4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194aa8:
    // 0x194aa8: 0xc063f7c  jal         func_18FDF0
label_194aac:
    if (ctx->pc == 0x194AACu) {
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x7fa000b0  sq          $zero, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AB0u;
        goto label_194ab0;
    }
    ctx->pc = 0x194AA8u;
    SET_GPR_U32(ctx, 31, 0x194AB0u);
    ctx->pc = 0x194AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AA8u;
    // 0x194aac: 0x7fa000b0  sq          $zero, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194AA8u, 0x194AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AB0u;
label_194ab0:
    // 0x194ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194ab4:
    // 0x194ab4: 0xc0648ec  jal         func_1923B0
label_194ab8:
    if (ctx->pc == 0x194AB8u) {
        ctx->pc = 0x194AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AB4u;
        // 0x194ab8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194ABCu;
        goto label_194abc;
    }
    ctx->pc = 0x194AB4u;
    SET_GPR_U32(ctx, 31, 0x194ABCu);
    ctx->pc = 0x194AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AB4u;
    // 0x194ab8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194AB4u, 0x194ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194ABCu;
label_194abc:
    // 0x194abc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194ac0:
    // 0x194ac0: 0x108000e7  beqz        $a0, . + 4 + (0xE7 << 2)
label_194ac4:
    if (ctx->pc == 0x194AC4u) {
        ctx->pc = 0x194AC8u;
        goto label_194ac8;
    }
    ctx->pc = 0x194AC0u;
    {
        const bool branch_taken_0x194ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ac0) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194AC8u;
label_194ac8:
    // 0x194ac8: 0x8c820668  lw          $v0, 0x668($a0)
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1640)));
label_194acc:
    // 0x194acc: 0xc06433c  jal         func_190CF0
label_194ad0:
    if (ctx->pc == 0x194AD0u) {
        ctx->pc = 0x194AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ACCu;
        // 0x194ad0: 0xac820664  sw          $v0, 0x664($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AD4u;
        goto label_194ad4;
    }
    ctx->pc = 0x194ACCu;
    SET_GPR_U32(ctx, 31, 0x194AD4u);
    ctx->pc = 0x194AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194ACCu;
    // 0x194ad0: 0xac820664  sw          $v0, 0x664($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 1636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190CF0u, 0x194ACCu, 0x194AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AD4u;
label_194ad4:
    // 0x194ad4: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_194ad8:
    if (ctx->pc == 0x194AD8u) {
        ctx->pc = 0x194ADCu;
        goto label_194adc;
    }
    ctx->pc = 0x194AD4u;
    {
        const bool branch_taken_0x194ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ad4) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194ADCu;
label_194adc:
    // 0x194adc: 0x0  nop
    ctx->pc = 0x194adcu;
    // NOP
label_194ae0:
    // 0x194ae0: 0x8e15002c  lw          $s5, 0x2C($s0)
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194ae4:
    // 0x194ae4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194ae8:
    // 0x194ae8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x194ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_194aec:
    // 0x194aec: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194af0:
    // 0x194af0: 0xc063f7c  jal         func_18FDF0
label_194af4:
    if (ctx->pc == 0x194AF4u) {
        ctx->pc = 0x194AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF0u;
        // 0x194af4: 0x7fa000c0  sq          $zero, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AF8u;
        goto label_194af8;
    }
    ctx->pc = 0x194AF0u;
    SET_GPR_U32(ctx, 31, 0x194AF8u);
    ctx->pc = 0x194AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AF0u;
    // 0x194af4: 0x7fa000c0  sq          $zero, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194AF0u, 0x194AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AF8u;
label_194af8:
    // 0x194af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194afc:
    // 0x194afc: 0xc0648ec  jal         func_1923B0
label_194b00:
    if (ctx->pc == 0x194B00u) {
        ctx->pc = 0x194B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AFCu;
        // 0x194b00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B04u;
        goto label_194b04;
    }
    ctx->pc = 0x194AFCu;
    SET_GPR_U32(ctx, 31, 0x194B04u);
    ctx->pc = 0x194B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AFCu;
    // 0x194b00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194AFCu, 0x194B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B04u;
label_194b04:
    // 0x194b04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x194b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194b08:
    // 0x194b08: 0x124000d5  beqz        $s2, . + 4 + (0xD5 << 2)
label_194b0c:
    if (ctx->pc == 0x194B0Cu) {
        ctx->pc = 0x194B10u;
        goto label_194b10;
    }
    ctx->pc = 0x194B08u;
    {
        const bool branch_taken_0x194b08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b08) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194B10u;
label_194b10:
    // 0x194b10: 0xc067f08  jal         func_19FC20
label_194b14:
    if (ctx->pc == 0x194B14u) {
        ctx->pc = 0x194B18u;
        goto label_194b18;
    }
    ctx->pc = 0x194B10u;
    SET_GPR_U32(ctx, 31, 0x194B18u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x194B10u, 0x194B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B18u;
label_194b18:
    // 0x194b18: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_194b1c:
    if (ctx->pc == 0x194B1Cu) {
        ctx->pc = 0x194B20u;
        goto label_194b20;
    }
    ctx->pc = 0x194B18u;
    {
        const bool branch_taken_0x194b18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x194b18) {
            ctx->pc = 0x194B40u;
            goto label_194b40;
        }
    }
    ctx->pc = 0x194B20u;
label_194b20:
    // 0x194b20: 0xc067f08  jal         func_19FC20
label_194b24:
    if (ctx->pc == 0x194B24u) {
        ctx->pc = 0x194B28u;
        goto label_194b28;
    }
    ctx->pc = 0x194B20u;
    SET_GPR_U32(ctx, 31, 0x194B28u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x194B20u, 0x194B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B28u;
label_194b28:
    // 0x194b28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x194b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_194b2c:
    // 0x194b2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194b30:
    // 0x194b30: 0xc067f68  jal         func_19FDA0
label_194b34:
    if (ctx->pc == 0x194B34u) {
        ctx->pc = 0x194B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B30u;
        // 0x194b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B38u;
        goto label_194b38;
    }
    ctx->pc = 0x194B30u;
    SET_GPR_U32(ctx, 31, 0x194B38u);
    ctx->pc = 0x194B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B30u;
    // 0x194b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x194B30u, 0x194B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B38u;
label_194b38:
    // 0x194b38: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_194b3c:
    if (ctx->pc == 0x194B3Cu) {
        ctx->pc = 0x194B40u;
        goto label_194b40;
    }
    ctx->pc = 0x194B38u;
    {
        const bool branch_taken_0x194b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b38) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194B40u;
label_194b40:
    // 0x194b40: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_194b44:
    if (ctx->pc == 0x194B44u) {
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B40u;
        // 0x194b44: 0xae510320  sw          $s1, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B48u;
        goto label_194b48;
    }
    ctx->pc = 0x194B40u;
    {
        const bool branch_taken_0x194b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B40u;
        // 0x194b44: 0xae510320  sw          $s1, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b40) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194B48u;
label_194b48:
    // 0x194b48: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194b4c:
    // 0x194b4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x194b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_194b50:
    // 0x194b50: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194b54:
    // 0x194b54: 0xc063f7c  jal         func_18FDF0
label_194b58:
    if (ctx->pc == 0x194B58u) {
        ctx->pc = 0x194B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B54u;
        // 0x194b58: 0x7fa000d0  sq          $zero, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B5Cu;
        goto label_194b5c;
    }
    ctx->pc = 0x194B54u;
    SET_GPR_U32(ctx, 31, 0x194B5Cu);
    ctx->pc = 0x194B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B54u;
    // 0x194b58: 0x7fa000d0  sq          $zero, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194B54u, 0x194B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B5Cu;
label_194b5c:
    // 0x194b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194b60:
    // 0x194b60: 0xc0648ec  jal         func_1923B0
label_194b64:
    if (ctx->pc == 0x194B64u) {
        ctx->pc = 0x194B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B60u;
        // 0x194b64: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B68u;
        goto label_194b68;
    }
    ctx->pc = 0x194B60u;
    SET_GPR_U32(ctx, 31, 0x194B68u);
    ctx->pc = 0x194B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B60u;
    // 0x194b64: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194B60u, 0x194B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B68u;
label_194b68:
    // 0x194b68: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_194b6c:
    if (ctx->pc == 0x194B6Cu) {
        ctx->pc = 0x194B70u;
        goto label_194b70;
    }
    ctx->pc = 0x194B68u;
    {
        const bool branch_taken_0x194b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b68) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194B70u;
label_194b70:
    // 0x194b70: 0x100000bb  b           . + 4 + (0xBB << 2)
label_194b74:
    if (ctx->pc == 0x194B74u) {
        ctx->pc = 0x194B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B70u;
        // 0x194b74: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B78u;
        goto label_194b78;
    }
    ctx->pc = 0x194B70u;
    {
        const bool branch_taken_0x194b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B70u;
        // 0x194b74: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b70) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194B78u;
label_194b78:
    // 0x194b78: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194b7c:
    // 0x194b7c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_194b80:
    // 0x194b80: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194b84:
    // 0x194b84: 0xc063f7c  jal         func_18FDF0
label_194b88:
    if (ctx->pc == 0x194B88u) {
        ctx->pc = 0x194B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B84u;
        // 0x194b88: 0x7fa000e0  sq          $zero, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B8Cu;
        goto label_194b8c;
    }
    ctx->pc = 0x194B84u;
    SET_GPR_U32(ctx, 31, 0x194B8Cu);
    ctx->pc = 0x194B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B84u;
    // 0x194b88: 0x7fa000e0  sq          $zero, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194B84u, 0x194B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B8Cu;
label_194b8c:
    // 0x194b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194b90:
    // 0x194b90: 0xc0648ec  jal         func_1923B0
label_194b94:
    if (ctx->pc == 0x194B94u) {
        ctx->pc = 0x194B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B90u;
        // 0x194b94: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B98u;
        goto label_194b98;
    }
    ctx->pc = 0x194B90u;
    SET_GPR_U32(ctx, 31, 0x194B98u);
    ctx->pc = 0x194B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B90u;
    // 0x194b94: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194B90u, 0x194B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B98u;
label_194b98:
    // 0x194b98: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
label_194b9c:
    if (ctx->pc == 0x194B9Cu) {
        ctx->pc = 0x194BA0u;
        goto label_194ba0;
    }
    ctx->pc = 0x194B98u;
    {
        const bool branch_taken_0x194b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b98) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194BA0u;
label_194ba0:
    // 0x194ba0: 0x100000af  b           . + 4 + (0xAF << 2)
label_194ba4:
    if (ctx->pc == 0x194BA4u) {
        ctx->pc = 0x194BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BA0u;
        // 0x194ba4: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BA8u;
        goto label_194ba8;
    }
    ctx->pc = 0x194BA0u;
    {
        const bool branch_taken_0x194ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BA0u;
        // 0x194ba4: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ba0) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194BA8u;
label_194ba8:
    // 0x194ba8: 0xc049e34  jal         func_1278D0
label_194bac:
    if (ctx->pc == 0x194BACu) {
        ctx->pc = 0x194BB0u;
        goto label_194bb0;
    }
    ctx->pc = 0x194BA8u;
    SET_GPR_U32(ctx, 31, 0x194BB0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x194BA8u, 0x194BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB0u;
label_194bb0:
    // 0x194bb0: 0xc04a02c  jal         func_1280B0
label_194bb4:
    if (ctx->pc == 0x194BB4u) {
        ctx->pc = 0x194BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BB0u;
        // 0x194bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BB8u;
        goto label_194bb8;
    }
    ctx->pc = 0x194BB0u;
    SET_GPR_U32(ctx, 31, 0x194BB8u);
    ctx->pc = 0x194BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BB0u;
    // 0x194bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x194BB0u, 0x194BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB8u;
label_194bb8:
    // 0x194bb8: 0xc049e34  jal         func_1278D0
label_194bbc:
    if (ctx->pc == 0x194BBCu) {
        ctx->pc = 0x194BC0u;
        goto label_194bc0;
    }
    ctx->pc = 0x194BB8u;
    SET_GPR_U32(ctx, 31, 0x194BC0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x194BB8u, 0x194BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BC0u;
label_194bc0:
    // 0x194bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194bc4:
    // 0x194bc4: 0xc049ed8  jal         func_127B60
label_194bc8:
    if (ctx->pc == 0x194BC8u) {
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC4u;
        // 0x194bc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BCCu;
        goto label_194bcc;
    }
    ctx->pc = 0x194BC4u;
    SET_GPR_U32(ctx, 31, 0x194BCCu);
    ctx->pc = 0x194BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BC4u;
    // 0x194bc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x194BC4u, 0x194BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BCCu;
label_194bcc:
    // 0x194bcc: 0xc057548  jal         func_15D520
label_194bd0:
    if (ctx->pc == 0x194BD0u) {
        ctx->pc = 0x194BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BCCu;
        // 0x194bd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BD4u;
        goto label_194bd4;
    }
    ctx->pc = 0x194BCCu;
    SET_GPR_U32(ctx, 31, 0x194BD4u);
    ctx->pc = 0x194BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BCCu;
    // 0x194bd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x194BCCu, 0x194BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BD4u;
label_194bd4:
    // 0x194bd4: 0xc04d988  jal         func_136620
label_194bd8:
    if (ctx->pc == 0x194BD8u) {
        ctx->pc = 0x194BDCu;
        goto label_194bdc;
    }
    ctx->pc = 0x194BD4u;
    SET_GPR_U32(ctx, 31, 0x194BDCu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x194BD4u, 0x194BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BDCu;
label_194bdc:
    // 0x194bdc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194be0:
    // 0x194be0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x194be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_194be4:
    // 0x194be4: 0x320f809  jalr        $t9
label_194be8:
    if (ctx->pc == 0x194BE8u) {
        ctx->pc = 0x194BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE4u;
        // 0x194be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BECu;
        goto label_194bec;
    }
    ctx->pc = 0x194BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x194BECu);
        ctx->pc = 0x194BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE4u;
        // 0x194be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BE4u, 0x194BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194BECu;
label_194bec:
    // 0x194bec: 0x1000009c  b           . + 4 + (0x9C << 2)
label_194bf0:
    if (ctx->pc == 0x194BF0u) {
        ctx->pc = 0x194BF4u;
        goto label_194bf4;
    }
    ctx->pc = 0x194BECu;
    {
        const bool branch_taken_0x194bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194bec) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194BF4u;
label_194bf4:
    // 0x194bf4: 0x0  nop
    ctx->pc = 0x194bf4u;
    // NOP
label_194bf8:
    // 0x194bf8: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194bfc:
    // 0x194bfc: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194c00:
    // 0x194c00: 0xc058018  jal         func_160060
label_194c04:
    if (ctx->pc == 0x194C04u) {
        ctx->pc = 0x194C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C00u;
        // 0x194c04: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C08u;
        goto label_194c08;
    }
    ctx->pc = 0x194C00u;
    SET_GPR_U32(ctx, 31, 0x194C08u);
    ctx->pc = 0x194C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C00u;
    // 0x194c04: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x194C00u, 0x194C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C08u;
label_194c08:
    // 0x194c08: 0xc057f04  jal         func_15FC10
label_194c0c:
    if (ctx->pc == 0x194C0Cu) {
        ctx->pc = 0x194C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C08u;
        // 0x194c0c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C10u;
        goto label_194c10;
    }
    ctx->pc = 0x194C08u;
    SET_GPR_U32(ctx, 31, 0x194C10u);
    ctx->pc = 0x194C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C08u;
    // 0x194c0c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x194C08u, 0x194C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C10u;
label_194c10:
    // 0x194c10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_194c14:
    // 0x194c14: 0x12230092  beq         $s1, $v1, . + 4 + (0x92 << 2)
label_194c18:
    if (ctx->pc == 0x194C18u) {
        ctx->pc = 0x194C1Cu;
        goto label_194c1c;
    }
    ctx->pc = 0x194C14u;
    {
        const bool branch_taken_0x194c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x194c14) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194C1Cu;
label_194c1c:
    // 0x194c1c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x194c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_194c20:
    // 0x194c20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x194c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194c24:
    // 0x194c24: 0xc057040  jal         func_15C100
label_194c28:
    if (ctx->pc == 0x194C28u) {
        ctx->pc = 0x194C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C24u;
        // 0x194c28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C2Cu;
        goto label_194c2c;
    }
    ctx->pc = 0x194C24u;
    SET_GPR_U32(ctx, 31, 0x194C2Cu);
    ctx->pc = 0x194C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C24u;
    // 0x194c28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x194C24u, 0x194C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C2Cu;
label_194c2c:
    // 0x194c2c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x194c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_194c30:
    // 0x194c30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194c34:
    // 0x194c34: 0xc042360  jal         func_108D80
label_194c38:
    if (ctx->pc == 0x194C38u) {
        ctx->pc = 0x194C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C34u;
        // 0x194c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C3Cu;
        goto label_194c3c;
    }
    ctx->pc = 0x194C34u;
    SET_GPR_U32(ctx, 31, 0x194C3Cu);
    ctx->pc = 0x194C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C34u;
    // 0x194c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x194C34u, 0x194C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C3Cu;
label_194c3c:
    // 0x194c3c: 0x10000088  b           . + 4 + (0x88 << 2)
label_194c40:
    if (ctx->pc == 0x194C40u) {
        ctx->pc = 0x194C44u;
        goto label_194c44;
    }
    ctx->pc = 0x194C3Cu;
    {
        const bool branch_taken_0x194c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c3c) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194C44u;
label_194c44:
    // 0x194c44: 0x0  nop
    ctx->pc = 0x194c44u;
    // NOP
label_194c48:
    // 0x194c48: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194c4c:
    // 0x194c4c: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x194c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194c50:
    // 0x194c50: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x194c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194c54:
    // 0x194c54: 0xc064ab8  jal         func_192AE0
label_194c58:
    if (ctx->pc == 0x194C58u) {
        ctx->pc = 0x194C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C54u;
        // 0x194c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C5Cu;
        goto label_194c5c;
    }
    ctx->pc = 0x194C54u;
    SET_GPR_U32(ctx, 31, 0x194C5Cu);
    ctx->pc = 0x194C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C54u;
    // 0x194c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192AE0u, 0x194C54u, 0x194C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C5Cu;
label_194c5c:
    // 0x194c5c: 0x10000080  b           . + 4 + (0x80 << 2)
label_194c60:
    if (ctx->pc == 0x194C60u) {
        ctx->pc = 0x194C64u;
        goto label_194c64;
    }
    ctx->pc = 0x194C5Cu;
    {
        const bool branch_taken_0x194c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c5c) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194C64u;
label_194c64:
    // 0x194c64: 0x0  nop
    ctx->pc = 0x194c64u;
    // NOP
label_194c68:
    // 0x194c68: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194c6c:
    // 0x194c6c: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194c70:
    // 0x194c70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194c74:
    // 0x194c74: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x194c74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194c78:
    // 0x194c78: 0x8e090034  lw          $t1, 0x34($s0)
    ctx->pc = 0x194c78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_194c7c:
    // 0x194c7c: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_194c80:
    // 0x194c80: 0xc064b40  jal         func_192D00
label_194c84:
    if (ctx->pc == 0x194C84u) {
        ctx->pc = 0x194C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C80u;
        // 0x194c84: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C88u;
        goto label_194c88;
    }
    ctx->pc = 0x194C80u;
    SET_GPR_U32(ctx, 31, 0x194C88u);
    ctx->pc = 0x194C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C80u;
    // 0x194c84: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192D00u, 0x194C80u, 0x194C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C88u;
label_194c88:
    // 0x194c88: 0x10000075  b           . + 4 + (0x75 << 2)
label_194c8c:
    if (ctx->pc == 0x194C8Cu) {
        ctx->pc = 0x194C90u;
        goto label_194c90;
    }
    ctx->pc = 0x194C88u;
    {
        const bool branch_taken_0x194c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c88) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194C90u;
label_194c90:
    // 0x194c90: 0x8e150034  lw          $s5, 0x34($s0)
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_194c94:
    // 0x194c94: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x194c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194c98:
    // 0x194c98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_194c9c:
    // 0x194c9c: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194ca0:
    // 0x194ca0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194ca4:
    // 0x194ca4: 0x8e160028  lw          $s6, 0x28($s0)
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194ca8:
    // 0x194ca8: 0xc063f7c  jal         func_18FDF0
label_194cac:
    if (ctx->pc == 0x194CACu) {
        ctx->pc = 0x194CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CA8u;
        // 0x194cac: 0x7fa000f0  sq          $zero, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CB0u;
        goto label_194cb0;
    }
    ctx->pc = 0x194CA8u;
    SET_GPR_U32(ctx, 31, 0x194CB0u);
    ctx->pc = 0x194CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CA8u;
    // 0x194cac: 0x7fa000f0  sq          $zero, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194CA8u, 0x194CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CB0u;
label_194cb0:
    // 0x194cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194cb4:
    // 0x194cb4: 0xc0648ec  jal         func_1923B0
label_194cb8:
    if (ctx->pc == 0x194CB8u) {
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CBCu;
        goto label_194cbc;
    }
    ctx->pc = 0x194CB4u;
    SET_GPR_U32(ctx, 31, 0x194CBCu);
    ctx->pc = 0x194CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CB4u;
    // 0x194cb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194CB4u, 0x194CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_194cc0:
    if (ctx->pc == 0x194CC0u) {
        ctx->pc = 0x194CC4u;
        goto label_194cc4;
    }
    ctx->pc = 0x194CBCu;
    {
        const bool branch_taken_0x194cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cbc) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194CC4u;
label_194cc4:
    // 0x194cc4: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
label_194cc8:
    // 0x194cc8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_194ccc:
    // 0x194ccc: 0xac430328  sw          $v1, 0x328($v0)
    ctx->pc = 0x194cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 3));
label_194cd0:
    // 0x194cd0: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
label_194cd4:
    // 0x194cd4: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x194cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_194cd8:
    // 0x194cd8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_194cdc:
    if (ctx->pc == 0x194CDCu) {
        ctx->pc = 0x194CE0u;
        goto label_194ce0;
    }
    ctx->pc = 0x194CD8u;
    {
        const bool branch_taken_0x194cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cd8) {
            ctx->pc = 0x194CF8u;
            goto label_194cf8;
        }
    }
    ctx->pc = 0x194CE0u;
label_194ce0:
    // 0x194ce0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_194ce4:
    if (ctx->pc == 0x194CE4u) {
        ctx->pc = 0x194CE8u;
        goto label_194ce8;
    }
    ctx->pc = 0x194CE0u;
    {
        const bool branch_taken_0x194ce0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ce0) {
            ctx->pc = 0x194CF0u;
            goto label_194cf0;
        }
    }
    ctx->pc = 0x194CE8u;
label_194ce8:
    // 0x194ce8: 0x1000005d  b           . + 4 + (0x5D << 2)
label_194cec:
    if (ctx->pc == 0x194CECu) {
        ctx->pc = 0x194CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CE8u;
        // 0x194cec: 0xac520328  sw          $s2, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CF0u;
        goto label_194cf0;
    }
    ctx->pc = 0x194CE8u;
    {
        const bool branch_taken_0x194ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CE8u;
        // 0x194cec: 0xac520328  sw          $s2, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ce8) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194CF0u;
label_194cf0:
    // 0x194cf0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_194cf4:
    if (ctx->pc == 0x194CF4u) {
        ctx->pc = 0x194CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CF0u;
        // 0x194cf4: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CF8u;
        goto label_194cf8;
    }
    ctx->pc = 0x194CF0u;
    {
        const bool branch_taken_0x194cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CF0u;
        // 0x194cf4: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cf0) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194CF8u;
label_194cf8:
    // 0x194cf8: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x194cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_194cfc:
    // 0x194cfc: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
label_194d00:
    if (ctx->pc == 0x194D00u) {
        ctx->pc = 0x194D04u;
        goto label_194d04;
    }
    ctx->pc = 0x194CFCu;
    {
        const bool branch_taken_0x194cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cfc) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D04u;
label_194d04:
    // 0x194d04: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_194d08:
    if (ctx->pc == 0x194D08u) {
        ctx->pc = 0x194D0Cu;
        goto label_194d0c;
    }
    ctx->pc = 0x194D04u;
    {
        const bool branch_taken_0x194d04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d04) {
            ctx->pc = 0x194D14u;
            goto label_194d14;
        }
    }
    ctx->pc = 0x194D0Cu;
label_194d0c:
    // 0x194d0c: 0x10000054  b           . + 4 + (0x54 << 2)
label_194d10:
    if (ctx->pc == 0x194D10u) {
        ctx->pc = 0x194D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D0Cu;
        // 0x194d10: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D14u;
        goto label_194d14;
    }
    ctx->pc = 0x194D0Cu;
    {
        const bool branch_taken_0x194d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D0Cu;
        // 0x194d10: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d0c) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D14u;
label_194d14:
    // 0x194d14: 0x0  nop
    ctx->pc = 0x194d14u;
    // NOP
label_194d18:
    // 0x194d18: 0x10000051  b           . + 4 + (0x51 << 2)
label_194d1c:
    if (ctx->pc == 0x194D1Cu) {
        ctx->pc = 0x194D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D18u;
        // 0x194d1c: 0xac520328  sw          $s2, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D20u;
        goto label_194d20;
    }
    ctx->pc = 0x194D18u;
    {
        const bool branch_taken_0x194d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D18u;
        // 0x194d1c: 0xac520328  sw          $s2, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d18) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D20u;
label_194d20:
    // 0x194d20: 0x8e150034  lw          $s5, 0x34($s0)
    ctx->pc = 0x194d20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_194d24:
    // 0x194d24: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x194d24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194d28:
    // 0x194d28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_194d2c:
    // 0x194d2c: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x194d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194d30:
    // 0x194d30: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_194d34:
    // 0x194d34: 0x8e160028  lw          $s6, 0x28($s0)
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194d38:
    // 0x194d38: 0xc063f7c  jal         func_18FDF0
label_194d3c:
    if (ctx->pc == 0x194D3Cu) {
        ctx->pc = 0x194D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D38u;
        // 0x194d3c: 0x7fa00100  sq          $zero, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D40u;
        goto label_194d40;
    }
    ctx->pc = 0x194D38u;
    SET_GPR_U32(ctx, 31, 0x194D40u);
    ctx->pc = 0x194D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D38u;
    // 0x194d3c: 0x7fa00100  sq          $zero, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194D38u, 0x194D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D40u;
label_194d40:
    // 0x194d40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194d44:
    // 0x194d44: 0xc0648ec  jal         func_1923B0
label_194d48:
    if (ctx->pc == 0x194D48u) {
        ctx->pc = 0x194D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D44u;
        // 0x194d48: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D4Cu;
        goto label_194d4c;
    }
    ctx->pc = 0x194D44u;
    SET_GPR_U32(ctx, 31, 0x194D4Cu);
    ctx->pc = 0x194D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D44u;
    // 0x194d48: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194D44u, 0x194D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D4Cu;
label_194d4c:
    // 0x194d4c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_194d50:
    if (ctx->pc == 0x194D50u) {
        ctx->pc = 0x194D54u;
        goto label_194d54;
    }
    ctx->pc = 0x194D4Cu;
    {
        const bool branch_taken_0x194d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d4c) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D54u;
label_194d54:
    // 0x194d54: 0x8c43032c  lw          $v1, 0x32C($v0)
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
label_194d58:
    // 0x194d58: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_194d5c:
    // 0x194d5c: 0xac43032c  sw          $v1, 0x32C($v0)
    ctx->pc = 0x194d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 3));
label_194d60:
    // 0x194d60: 0x8c43032c  lw          $v1, 0x32C($v0)
    ctx->pc = 0x194d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
label_194d64:
    // 0x194d64: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x194d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_194d68:
    // 0x194d68: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_194d6c:
    if (ctx->pc == 0x194D6Cu) {
        ctx->pc = 0x194D70u;
        goto label_194d70;
    }
    ctx->pc = 0x194D68u;
    {
        const bool branch_taken_0x194d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d68) {
            ctx->pc = 0x194D88u;
            goto label_194d88;
        }
    }
    ctx->pc = 0x194D70u;
label_194d70:
    // 0x194d70: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_194d74:
    if (ctx->pc == 0x194D74u) {
        ctx->pc = 0x194D78u;
        goto label_194d78;
    }
    ctx->pc = 0x194D70u;
    {
        const bool branch_taken_0x194d70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d70) {
            ctx->pc = 0x194D80u;
            goto label_194d80;
        }
    }
    ctx->pc = 0x194D78u;
label_194d78:
    // 0x194d78: 0x10000039  b           . + 4 + (0x39 << 2)
label_194d7c:
    if (ctx->pc == 0x194D7Cu) {
        ctx->pc = 0x194D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D78u;
        // 0x194d7c: 0xac52032c  sw          $s2, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D80u;
        goto label_194d80;
    }
    ctx->pc = 0x194D78u;
    {
        const bool branch_taken_0x194d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D78u;
        // 0x194d7c: 0xac52032c  sw          $s2, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d78) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D80u;
label_194d80:
    // 0x194d80: 0x10000037  b           . + 4 + (0x37 << 2)
label_194d84:
    if (ctx->pc == 0x194D84u) {
        ctx->pc = 0x194D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D80u;
        // 0x194d84: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D88u;
        goto label_194d88;
    }
    ctx->pc = 0x194D80u;
    {
        const bool branch_taken_0x194d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D80u;
        // 0x194d84: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d80) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D88u;
label_194d88:
    // 0x194d88: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x194d88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_194d8c:
    // 0x194d8c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_194d90:
    if (ctx->pc == 0x194D90u) {
        ctx->pc = 0x194D94u;
        goto label_194d94;
    }
    ctx->pc = 0x194D8Cu;
    {
        const bool branch_taken_0x194d8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d8c) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194D94u;
label_194d94:
    // 0x194d94: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_194d98:
    if (ctx->pc == 0x194D98u) {
        ctx->pc = 0x194D9Cu;
        goto label_194d9c;
    }
    ctx->pc = 0x194D94u;
    {
        const bool branch_taken_0x194d94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d94) {
            ctx->pc = 0x194DA4u;
            goto label_194da4;
        }
    }
    ctx->pc = 0x194D9Cu;
label_194d9c:
    // 0x194d9c: 0x10000030  b           . + 4 + (0x30 << 2)
label_194da0:
    if (ctx->pc == 0x194DA0u) {
        ctx->pc = 0x194DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D9Cu;
        // 0x194da0: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DA4u;
        goto label_194da4;
    }
    ctx->pc = 0x194D9Cu;
    {
        const bool branch_taken_0x194d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D9Cu;
        // 0x194da0: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d9c) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194DA4u;
label_194da4:
    // 0x194da4: 0x0  nop
    ctx->pc = 0x194da4u;
    // NOP
label_194da8:
    // 0x194da8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_194dac:
    if (ctx->pc == 0x194DACu) {
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xac52032c  sw          $s2, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DB0u;
        goto label_194db0;
    }
    ctx->pc = 0x194DA8u;
    {
        const bool branch_taken_0x194da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xac52032c  sw          $s2, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194da8) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194DB0u;
label_194db0:
    // 0x194db0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x194db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194db4:
    // 0x194db4: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x194db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194db8:
    // 0x194db8: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194dbc:
    // 0x194dbc: 0xc064b88  jal         func_192E20
label_194dc0:
    if (ctx->pc == 0x194DC0u) {
        ctx->pc = 0x194DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DBCu;
        // 0x194dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DC4u;
        goto label_194dc4;
    }
    ctx->pc = 0x194DBCu;
    SET_GPR_U32(ctx, 31, 0x194DC4u);
    ctx->pc = 0x194DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DBCu;
    // 0x194dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192E20u, 0x194DBCu, 0x194DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DC4u;
label_194dc4:
    // 0x194dc4: 0x10000026  b           . + 4 + (0x26 << 2)
label_194dc8:
    if (ctx->pc == 0x194DC8u) {
        ctx->pc = 0x194DCCu;
        goto label_194dcc;
    }
    ctx->pc = 0x194DC4u;
    {
        const bool branch_taken_0x194dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194dc4) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194DCCu;
label_194dcc:
    // 0x194dcc: 0x0  nop
    ctx->pc = 0x194dccu;
    // NOP
label_194dd0:
    // 0x194dd0: 0x8f9185f4  lw          $s1, -0x7A0C($gp)
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_194dd4:
    // 0x194dd4: 0x8e243ddc  lw          $a0, 0x3DDC($s1)
    ctx->pc = 0x194dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194dd8:
    // 0x194dd8: 0x8e233dd8  lw          $v1, 0x3DD8($s1)
    ctx->pc = 0x194dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15832)));
label_194ddc:
    // 0x194ddc: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_194de0:
    if (ctx->pc == 0x194DE0u) {
        ctx->pc = 0x194DE4u;
        goto label_194de4;
    }
    ctx->pc = 0x194DDCu;
    {
        const bool branch_taken_0x194ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194ddc) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194DE4u;
label_194de4:
    // 0x194de4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x194de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194de8:
    // 0x194de8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_194dec:
    // 0x194dec: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_194df0:
    // 0x194df0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x194df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_194df4:
    // 0x194df4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_194df8:
    // 0x194df8: 0x320f809  jalr        $t9
label_194dfc:
    if (ctx->pc == 0x194DFCu) {
        ctx->pc = 0x194E00u;
        goto label_194e00;
    }
    ctx->pc = 0x194DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x194E00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194DF8u, 0x194E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E00u;
label_194e00:
    // 0x194e00: 0x8e233ddc  lw          $v1, 0x3DDC($s1)
    ctx->pc = 0x194e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194e04:
    // 0x194e04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194e08:
    // 0x194e08: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_194e0c:
    // 0x194e0c: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_194e10:
    // 0x194e10: 0x10000013  b           . + 4 + (0x13 << 2)
label_194e14:
    if (ctx->pc == 0x194E14u) {
        ctx->pc = 0x194E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E10u;
        // 0x194e14: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E18u;
        goto label_194e18;
    }
    ctx->pc = 0x194E10u;
    {
        const bool branch_taken_0x194e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E10u;
        // 0x194e14: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e10) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194E18u;
label_194e18:
    // 0x194e18: 0x8f9185f4  lw          $s1, -0x7A0C($gp)
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_194e1c:
    // 0x194e1c: 0x8e243ddc  lw          $a0, 0x3DDC($s1)
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194e20:
    // 0x194e20: 0x8e233dd8  lw          $v1, 0x3DD8($s1)
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15832)));
label_194e24:
    // 0x194e24: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_194e28:
    if (ctx->pc == 0x194E28u) {
        ctx->pc = 0x194E2Cu;
        goto label_194e2c;
    }
    ctx->pc = 0x194E24u;
    {
        const bool branch_taken_0x194e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e24) {
            ctx->pc = 0x194E60u;
            goto label_194e60;
        }
    }
    ctx->pc = 0x194E2Cu;
label_194e2c:
    // 0x194e2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194e30:
    // 0x194e30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x194e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_194e34:
    // 0x194e34: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x194e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_194e38:
    // 0x194e38: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_194e3c:
    // 0x194e3c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_194e40:
    // 0x194e40: 0x320f809  jalr        $t9
label_194e44:
    if (ctx->pc == 0x194E44u) {
        ctx->pc = 0x194E48u;
        goto label_194e48;
    }
    ctx->pc = 0x194E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x194E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E40u, 0x194E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E48u;
label_194e48:
    // 0x194e48: 0x8e243ddc  lw          $a0, 0x3DDC($s1)
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194e4c:
    // 0x194e4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194e50:
    // 0x194e50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194e54:
    // 0x194e54: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194e58:
    // 0x194e58: 0x8c843cd8  lw          $a0, 0x3CD8($a0)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15576)));
label_194e5c:
    // 0x194e5c: 0xa08301f9  sb          $v1, 0x1F9($a0)
    ctx->pc = 0x194e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 505), (uint8_t)GPR_U32(ctx, 3));
label_194e60:
    // 0x194e60: 0x100003c4  b           . + 4 + (0x3C4 << 2)
label_194e64:
    if (ctx->pc == 0x194E64u) {
        ctx->pc = 0x194E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E60u;
        // 0x194e64: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E68u;
        goto label_194e68;
    }
    ctx->pc = 0x194E60u;
    {
        const bool branch_taken_0x194e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E60u;
        // 0x194e64: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e60) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x194E68u;
label_194e68:
    // 0x194e68: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_194e6c:
    // 0x194e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194e70:
    // 0x194e70: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_194e74:
    if (ctx->pc == 0x194E74u) {
        ctx->pc = 0x194E78u;
        goto label_194e78;
    }
    ctx->pc = 0x194E70u;
    {
        const bool branch_taken_0x194e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e70) {
            ctx->pc = 0x194F58u;
            goto label_194f58;
        }
    }
    ctx->pc = 0x194E78u;
label_194e78:
    // 0x194e78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_194e7c:
    if (ctx->pc == 0x194E7Cu) {
        ctx->pc = 0x194E80u;
        goto label_194e80;
    }
    ctx->pc = 0x194E78u;
    {
        const bool branch_taken_0x194e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e78) {
            ctx->pc = 0x194E88u;
            goto label_194e88;
        }
    }
    ctx->pc = 0x194E80u;
label_194e80:
    // 0x194e80: 0x1000006a  b           . + 4 + (0x6A << 2)
label_194e84:
    if (ctx->pc == 0x194E84u) {
        ctx->pc = 0x194E88u;
        goto label_194e88;
    }
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194e8c:
    // 0x194e8c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194e90:
    // 0x194e90: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_194e94:
    if (ctx->pc == 0x194E94u) {
        ctx->pc = 0x194E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E90u;
        // 0x194e94: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E98u;
        goto label_194e98;
    }
    ctx->pc = 0x194E90u;
    {
        const bool branch_taken_0x194e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E90u;
        // 0x194e94: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e90) {
            ctx->pc = 0x194EA0u;
            goto label_194ea0;
        }
    }
    ctx->pc = 0x194E98u;
label_194e98:
    // 0x194e98: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_194e9c:
    if (ctx->pc == 0x194E9Cu) {
        ctx->pc = 0x194EA0u;
        goto label_194ea0;
    }
    ctx->pc = 0x194E98u;
    {
        const bool branch_taken_0x194e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e98) {
            ctx->pc = 0x194F0Cu;
            goto label_194f0c;
        }
    }
    ctx->pc = 0x194EA0u;
label_194ea0:
    // 0x194ea0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_194ea4:
    // 0x194ea4: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_194ea8:
    // 0x194ea8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194eac:
    // 0x194eac: 0x8c4428dc  lw          $a0, 0x28DC($v0)
    ctx->pc = 0x194eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
label_194eb0:
    // 0x194eb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_194eb4:
    // 0x194eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194eb8:
    // 0x194eb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_194ebc:
    if (ctx->pc == 0x194EBCu) {
        ctx->pc = 0x194EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EB8u;
        // 0x194ebc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EC0u;
        goto label_194ec0;
    }
    ctx->pc = 0x194EB8u;
    {
        const bool branch_taken_0x194eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EB8u;
        // 0x194ebc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194eb8) {
            ctx->pc = 0x194EC8u;
            goto label_194ec8;
        }
    }
    ctx->pc = 0x194EC0u;
label_194ec0:
    // 0x194ec0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x194ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_194ec4:
    // 0x194ec4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x194ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_194ec8:
    // 0x194ec8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_194ecc:
    // 0x194ecc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x194eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_194ed0:
    // 0x194ed0: 0x2243018  mult        $a2, $s1, $a0
    ctx->pc = 0x194ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_194ed4:
    // 0x194ed4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x194ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_194ed8:
    // 0x194ed8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_194edc:
    // 0x194edc: 0xc04bf38  jal         func_12FCE0
label_194ee0:
    if (ctx->pc == 0x194EE0u) {
        ctx->pc = 0x194EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EDCu;
        // 0x194ee0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EE4u;
        goto label_194ee4;
    }
    ctx->pc = 0x194EDCu;
    SET_GPR_U32(ctx, 31, 0x194EE4u);
    ctx->pc = 0x194EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EDCu;
    // 0x194ee0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x194EDCu, 0x194EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EE4u;
label_194ee4:
    // 0x194ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194ee8:
    // 0x194ee8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x194ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_194eec:
    // 0x194eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ef0:
    // 0x194ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ef4:
    // 0x194ef4: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x194ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_194ef8:
    // 0x194ef8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194efc:
    // 0x194efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194f00:
    // 0x194f00: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x194f00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_194f04:
    // 0x194f04: 0xc04bce0  jal         func_12F380
label_194f08:
    if (ctx->pc == 0x194F08u) {
        ctx->pc = 0x194F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F04u;
        // 0x194f08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F0Cu;
        goto label_194f0c;
    }
    ctx->pc = 0x194F04u;
    SET_GPR_U32(ctx, 31, 0x194F0Cu);
    ctx->pc = 0x194F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F04u;
    // 0x194f08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x194F04u, 0x194F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F0Cu;
label_194f0c:
    // 0x194f0c: 0x0  nop
    ctx->pc = 0x194f0cu;
    // NOP
label_194f10:
    // 0x194f10: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x194f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_194f14:
    // 0x194f14: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_194f18:
    // 0x194f18: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x194f18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_194f1c:
    // 0x194f1c: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x194f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
label_194f20:
    // 0x194f20: 0x84c328d8  lh          $v1, 0x28D8($a2)
    ctx->pc = 0x194f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
label_194f24:
    // 0x194f24: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x194f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_194f28:
    // 0x194f28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194f2c:
    // 0x194f2c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x194f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_194f30:
    // 0x194f30: 0x3012  mflo        $a2
    ctx->pc = 0x194f30u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_194f34:
    // 0x194f34: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x194f34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
label_194f38:
    // 0x194f38: 0x2810  mfhi        $a1
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_194f3c:
    // 0x194f3c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x194f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_194f40:
    // 0x194f40: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x194f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_194f44:
    // 0x194f44: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x194f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_194f48:
    // 0x194f48: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x194f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_194f4c:
    // 0x194f4c: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x194f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_194f50:
    // 0x194f50: 0x10000036  b           . + 4 + (0x36 << 2)
label_194f54:
    if (ctx->pc == 0x194F54u) {
        ctx->pc = 0x194F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F50u;
        // 0x194f54: 0xfc832818  sd          $v1, 0x2818($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F58u;
        goto label_194f58;
    }
    ctx->pc = 0x194F50u;
    {
        const bool branch_taken_0x194f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F50u;
        // 0x194f54: 0xfc832818  sd          $v1, 0x2818($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f50) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x194F58u;
label_194f58:
    // 0x194f58: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x194f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_194f5c:
    // 0x194f5c: 0x8e830328  lw          $v1, 0x328($s4)
    ctx->pc = 0x194f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
label_194f60:
    // 0x194f60: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x194f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_194f64:
    // 0x194f64: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194f68:
    // 0x194f68: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_194f6c:
    if (ctx->pc == 0x194F6Cu) {
        ctx->pc = 0x194F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F68u;
        // 0x194f6c: 0x838818  mult        $s1, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F70u;
        goto label_194f70;
    }
    ctx->pc = 0x194F68u;
    {
        const bool branch_taken_0x194f68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F68u;
        // 0x194f6c: 0x838818  mult        $s1, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f68) {
            ctx->pc = 0x194F78u;
            goto label_194f78;
        }
    }
    ctx->pc = 0x194F70u;
label_194f70:
    // 0x194f70: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_194f74:
    if (ctx->pc == 0x194F74u) {
        ctx->pc = 0x194F78u;
        goto label_194f78;
    }
    ctx->pc = 0x194F70u;
    {
        const bool branch_taken_0x194f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f70) {
            ctx->pc = 0x194FE4u;
            goto label_194fe4;
        }
    }
    ctx->pc = 0x194F78u;
label_194f78:
    // 0x194f78: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_194f7c:
    // 0x194f7c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_194f80:
    // 0x194f80: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_194f84:
    // 0x194f84: 0x8c4428dc  lw          $a0, 0x28DC($v0)
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
label_194f88:
    // 0x194f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_194f8c:
    // 0x194f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194f90:
    // 0x194f90: 0x10000003  b           . + 4 + (0x3 << 2)
label_194f94:
    if (ctx->pc == 0x194F94u) {
        ctx->pc = 0x194F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F90u;
        // 0x194f94: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F98u;
        goto label_194f98;
    }
    ctx->pc = 0x194F90u;
    {
        const bool branch_taken_0x194f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F90u;
        // 0x194f94: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f90) {
            ctx->pc = 0x194FA0u;
            goto label_194fa0;
        }
    }
    ctx->pc = 0x194F98u;
label_194f98:
    // 0x194f98: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_194f9c:
    // 0x194f9c: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x194f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_194fa0:
    // 0x194fa0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_194fa4:
    // 0x194fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x194fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_194fa8:
    // 0x194fa8: 0x2243018  mult        $a2, $s1, $a0
    ctx->pc = 0x194fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_194fac:
    // 0x194fac: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_194fb0:
    // 0x194fb0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x194fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_194fb4:
    // 0x194fb4: 0xc04bf38  jal         func_12FCE0
label_194fb8:
    if (ctx->pc == 0x194FB8u) {
        ctx->pc = 0x194FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FB4u;
        // 0x194fb8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FBCu;
        goto label_194fbc;
    }
    ctx->pc = 0x194FB4u;
    SET_GPR_U32(ctx, 31, 0x194FBCu);
    ctx->pc = 0x194FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FB4u;
    // 0x194fb8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x194FB4u, 0x194FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FBCu;
label_194fbc:
    // 0x194fbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x194fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194fc0:
    // 0x194fc0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x194fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_194fc4:
    // 0x194fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194fc8:
    // 0x194fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194fcc:
    // 0x194fcc: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_194fd0:
    // 0x194fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194fd4:
    // 0x194fd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194fd8:
    // 0x194fd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x194fd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_194fdc:
    // 0x194fdc: 0xc04bce0  jal         func_12F380
label_194fe0:
    if (ctx->pc == 0x194FE0u) {
        ctx->pc = 0x194FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FDCu;
        // 0x194fe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FE4u;
        goto label_194fe4;
    }
    ctx->pc = 0x194FDCu;
    SET_GPR_U32(ctx, 31, 0x194FE4u);
    ctx->pc = 0x194FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FDCu;
    // 0x194fe0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x194FDCu, 0x194FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FE4u;
label_194fe4:
    // 0x194fe4: 0x0  nop
    ctx->pc = 0x194fe4u;
    // NOP
label_194fe8:
    // 0x194fe8: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_194fec:
    // 0x194fec: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x194fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_194ff0:
    // 0x194ff0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x194ff0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_194ff4:
    // 0x194ff4: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x194ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
label_194ff8:
    // 0x194ff8: 0x84c328d8  lh          $v1, 0x28D8($a2)
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
label_194ffc:
    // 0x194ffc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x194ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_195000:
    // 0x195000: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_195004:
    // 0x195004: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x195004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_195008:
    // 0x195008: 0x3012  mflo        $a2
    ctx->pc = 0x195008u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19500c:
    // 0x19500c: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x19500cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
label_195010:
    // 0x195010: 0x2810  mfhi        $a1
    ctx->pc = 0x195010u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_195014:
    // 0x195014: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x195014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_195018:
    // 0x195018: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x195018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_19501c:
    // 0x19501c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x19501cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_195020:
    // 0x195020: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x195020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_195024:
    // 0x195024: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x195024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_195028:
    // 0x195028: 0xfc832818  sd          $v1, 0x2818($a0)
    ctx->pc = 0x195028u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
label_19502c:
    // 0x19502c: 0x0  nop
    ctx->pc = 0x19502cu;
    // NOP
label_195030:
    // 0x195030: 0x10000350  b           . + 4 + (0x350 << 2)
label_195034:
    if (ctx->pc == 0x195034u) {
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195038u;
        goto label_195038;
    }
    ctx->pc = 0x195030u;
    {
        const bool branch_taken_0x195030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195030u;
        // 0x195034: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195030) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x195038u;
label_195038:
    // 0x195038: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x195038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_19503c:
    // 0x19503c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_195040:
    if (ctx->pc == 0x195040u) {
        ctx->pc = 0x195044u;
        goto label_195044;
    }
    ctx->pc = 0x19503Cu;
    {
        const bool branch_taken_0x19503c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19503c) {
            ctx->pc = 0x1950D0u;
            goto label_1950d0;
        }
    }
    ctx->pc = 0x195044u;
label_195044:
    // 0x195044: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_195048:
    // 0x195048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19504c:
    // 0x19504c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19504cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_195050:
    // 0x195050: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_195054:
    // 0x195054: 0x7c600350  sq          $zero, 0x350($v1)
    ctx->pc = 0x195054u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 848), GPR_VEC(ctx, 0));
label_195058:
    // 0x195058: 0x10000009  b           . + 4 + (0x9 << 2)
label_19505c:
    if (ctx->pc == 0x19505Cu) {
        ctx->pc = 0x19505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195058u;
        // 0x19505c: 0x24660350  addiu       $a2, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195060u;
        goto label_195060;
    }
    ctx->pc = 0x195058u;
    {
        const bool branch_taken_0x195058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195058u;
        // 0x19505c: 0x24660350  addiu       $a2, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195058) {
            ctx->pc = 0x195080u;
            goto label_195080;
        }
    }
    ctx->pc = 0x195060u;
label_195060:
    // 0x195060: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_195064:
    // 0x195064: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x195064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_195068:
    // 0x195068: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_19506c:
    if (ctx->pc == 0x19506Cu) {
        ctx->pc = 0x195070u;
        goto label_195070;
    }
    ctx->pc = 0x195068u;
    {
        const bool branch_taken_0x195068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195068) {
            ctx->pc = 0x19508Cu;
            goto label_19508c;
        }
    }
    ctx->pc = 0x195070u;
label_195070:
    // 0x195070: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x195070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_195074:
    // 0x195074: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x195074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_195078:
    // 0x195078: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19507c:
    // 0x19507c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19507cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_195080:
    // 0x195080: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x195080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_195084:
    // 0x195084: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_195088:
    if (ctx->pc == 0x195088u) {
        ctx->pc = 0x19508Cu;
        goto label_19508c;
    }
    ctx->pc = 0x195084u;
    {
        const bool branch_taken_0x195084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195084) {
            ctx->pc = 0x195060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195060;
        }
    }
    ctx->pc = 0x19508Cu;
label_19508c:
    // 0x19508c: 0x0  nop
    ctx->pc = 0x19508cu;
    // NOP
label_195090:
    // 0x195090: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_195094:
    // 0x195094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_195098:
    // 0x195098: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_19509c:
    // 0x19509c: 0xac700490  sw          $s0, 0x490($v1)
    ctx->pc = 0x19509cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 16));
label_1950a0:
    // 0x1950a0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_1950a4:
    // 0x1950a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1950a8:
    // 0x1950a8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1950ac:
    // 0x1950ac: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x1950acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_1950b0:
    // 0x1950b0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_1950b4:
    // 0x1950b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1950b8:
    // 0x1950b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1950bc:
    // 0x1950bc: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x1950bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_1950c0:
    // 0x1950c0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_1950c4:
    // 0x1950c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1950c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1950c8:
    // 0x1950c8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1950cc:
    if (ctx->pc == 0x1950CCu) {
        ctx->pc = 0x1950CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950C8u;
        // 0x1950cc: 0xae830340  sw          $v1, 0x340($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950D0u;
        goto label_1950d0;
    }
    ctx->pc = 0x1950C8u;
    {
        const bool branch_taken_0x1950c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950C8u;
        // 0x1950cc: 0xae830340  sw          $v1, 0x340($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950c8) {
            ctx->pc = 0x19512Cu;
            goto label_19512c;
        }
    }
    ctx->pc = 0x1950D0u;
label_1950d0:
    // 0x1950d0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1950d4:
    // 0x1950d4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1950d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1950d8:
    // 0x1950d8: 0xc057040  jal         func_15C100
label_1950dc:
    if (ctx->pc == 0x1950DCu) {
        ctx->pc = 0x1950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950D8u;
        // 0x1950dc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950E0u;
        goto label_1950e0;
    }
    ctx->pc = 0x1950D8u;
    SET_GPR_U32(ctx, 31, 0x1950E0u);
    ctx->pc = 0x1950DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950D8u;
    // 0x1950dc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1950D8u, 0x1950E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_1950e4:
    // 0x1950e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1950e8:
    // 0x1950e8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1950ec:
    // 0x1950ec: 0xac620450  sw          $v0, 0x450($v1)
    ctx->pc = 0x1950ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 2));
label_1950f0:
    // 0x1950f0: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x1950f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_1950f4:
    // 0x1950f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1950f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1950f8:
    // 0x1950f8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1950fc:
    // 0x1950fc: 0xac700490  sw          $s0, 0x490($v1)
    ctx->pc = 0x1950fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 16));
label_195100:
    // 0x195100: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_195104:
    // 0x195104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_195108:
    // 0x195108: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x195108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_19510c:
    // 0x19510c: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x19510cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_195110:
    // 0x195110: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_195114:
    // 0x195114: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_195118:
    // 0x195118: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x195118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_19511c:
    // 0x19511c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19511cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
label_195120:
    // 0x195120: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_195124:
    // 0x195124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x195124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_195128:
    // 0x195128: 0xae830340  sw          $v1, 0x340($s4)
    ctx->pc = 0x195128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 3));
label_19512c:
    // 0x19512c: 0x0  nop
    ctx->pc = 0x19512cu;
    // NOP
label_195130:
    // 0x195130: 0x10000310  b           . + 4 + (0x310 << 2)
label_195134:
    if (ctx->pc == 0x195134u) {
        ctx->pc = 0x195134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195130u;
        // 0x195134: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195138u;
        goto label_195138;
    }
    ctx->pc = 0x195130u;
    {
        const bool branch_taken_0x195130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195130u;
        // 0x195134: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195130) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x195138u;
label_195138:
    // 0x195138: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x195138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19513c:
    // 0x19513c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195140:
    // 0x195140: 0x8e120038  lw          $s2, 0x38($s0)
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_195144:
    // 0x195144: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x195144u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_195148:
    // 0x195148: 0x8e150030  lw          $s5, 0x30($s0)
    ctx->pc = 0x195148u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19514c:
    // 0x19514c: 0x8e16002c  lw          $s6, 0x2C($s0)
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195150:
    // 0x195150: 0xc057040  jal         func_15C100
label_195154:
    if (ctx->pc == 0x195154u) {
        ctx->pc = 0x195154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195150u;
        // 0x195154: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195158u;
        goto label_195158;
    }
    ctx->pc = 0x195150u;
    SET_GPR_U32(ctx, 31, 0x195158u);
    ctx->pc = 0x195154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195150u;
    // 0x195154: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x195150u, 0x195158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195158u;
label_195158:
    // 0x195158: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x195158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19515c:
    // 0x19515c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19515cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_195160:
    // 0x195160: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x195160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195164:
    // 0x195164: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x195164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195168:
    // 0x195168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x195168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19516c:
    // 0x19516c: 0xc064d84  jal         func_193610
label_195170:
    if (ctx->pc == 0x195170u) {
        ctx->pc = 0x195170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19516Cu;
        // 0x195170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195174u;
        goto label_195174;
    }
    ctx->pc = 0x19516Cu;
    SET_GPR_U32(ctx, 31, 0x195174u);
    ctx->pc = 0x195170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19516Cu;
    // 0x195170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x19516Cu, 0x195174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195174u;
label_195174:
    // 0x195174: 0x100002ff  b           . + 4 + (0x2FF << 2)
label_195178:
    if (ctx->pc == 0x195178u) {
        ctx->pc = 0x195178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195174u;
        // 0x195178: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19517Cu;
        goto label_19517c;
    }
    ctx->pc = 0x195174u;
    {
        const bool branch_taken_0x195174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195174u;
        // 0x195178: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195174) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x19517Cu;
label_19517c:
    // 0x19517c: 0x0  nop
    ctx->pc = 0x19517cu;
    // NOP
label_195180:
    // 0x195180: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x195180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_195184:
    // 0x195184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_195188:
    if (ctx->pc == 0x195188u) {
        ctx->pc = 0x195188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195184u;
        // 0x195188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19518Cu;
        goto label_19518c;
    }
    ctx->pc = 0x195184u;
    {
        const bool branch_taken_0x195184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195184u;
        // 0x195188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195184) {
            ctx->pc = 0x195194u;
            goto label_195194;
        }
    }
    ctx->pc = 0x19518Cu;
label_19518c:
    // 0x19518c: 0x10000003  b           . + 4 + (0x3 << 2)
label_195190:
    if (ctx->pc == 0x195190u) {
        ctx->pc = 0x195194u;
        goto label_195194;
    }
    ctx->pc = 0x19518Cu;
    {
        const bool branch_taken_0x19518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19518c) {
            ctx->pc = 0x19519Cu;
            goto label_19519c;
        }
    }
    ctx->pc = 0x195194u;
label_195194:
    // 0x195194: 0x0  nop
    ctx->pc = 0x195194u;
    // NOP
label_195198:
    // 0x195198: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x195198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_19519c:
    // 0x19519c: 0x0  nop
    ctx->pc = 0x19519cu;
    // NOP
label_1951a0:
    // 0x1951a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1951a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1951a4:
    // 0x1951a4: 0x0  nop
    ctx->pc = 0x1951a4u;
    // NOP
label_1951a8:
    // 0x1951a8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1951a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1951ac:
    // 0x1951ac: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1951acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1951b0:
    // 0x1951b0: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1951b4:
    // 0x1951b4: 0xc05704c  jal         func_15C130
label_1951b8:
    if (ctx->pc == 0x1951B8u) {
        ctx->pc = 0x1951B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951B4u;
        // 0x1951b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951BCu;
        goto label_1951bc;
    }
    ctx->pc = 0x1951B4u;
    SET_GPR_U32(ctx, 31, 0x1951BCu);
    ctx->pc = 0x1951B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951B4u;
    // 0x1951b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x1951B4u, 0x1951BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951BCu;
label_1951bc:
    // 0x1951bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1951c0:
    // 0x1951c0: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
label_1951c4:
    if (ctx->pc == 0x1951C4u) {
        ctx->pc = 0x1951C8u;
        goto label_1951c8;
    }
    ctx->pc = 0x1951C0u;
    {
        const bool branch_taken_0x1951c0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1951c0) {
            ctx->pc = 0x1951ECu;
            goto label_1951ec;
        }
    }
    ctx->pc = 0x1951C8u;
label_1951c8:
    // 0x1951c8: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x1951c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1951cc:
    // 0x1951cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1951d0:
    // 0x1951d0: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x1951d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1951d4:
    // 0x1951d4: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1951d8:
    // 0x1951d8: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x1951d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1951dc:
    // 0x1951dc: 0xc064d84  jal         func_193610
label_1951e0:
    if (ctx->pc == 0x1951E0u) {
        ctx->pc = 0x1951E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951DCu;
        // 0x1951e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951E4u;
        goto label_1951e4;
    }
    ctx->pc = 0x1951DCu;
    SET_GPR_U32(ctx, 31, 0x1951E4u);
    ctx->pc = 0x1951E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951DCu;
    // 0x1951e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x1951DCu, 0x1951E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951E4u;
label_1951e4:
    // 0x1951e4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_1951e8:
    if (ctx->pc == 0x1951E8u) {
        ctx->pc = 0x1951E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E4u;
        // 0x1951e8: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951ECu;
        goto label_1951ec;
    }
    ctx->pc = 0x1951E4u;
    {
        const bool branch_taken_0x1951e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951E4u;
        // 0x1951e8: 0x26270001  addiu       $a3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951e4) {
            ctx->pc = 0x1951A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1951a4;
        }
    }
    ctx->pc = 0x1951ECu;
label_1951ec:
    // 0x1951ec: 0x0  nop
    ctx->pc = 0x1951ecu;
    // NOP
label_1951f0:
    // 0x1951f0: 0x100002e0  b           . + 4 + (0x2E0 << 2)
label_1951f4:
    if (ctx->pc == 0x1951F4u) {
        ctx->pc = 0x1951F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F0u;
        // 0x1951f4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951F8u;
        goto label_1951f8;
    }
    ctx->pc = 0x1951F0u;
    {
        const bool branch_taken_0x1951f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F0u;
        // 0x1951f4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951f0) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x1951F8u;
label_1951f8:
    // 0x1951f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1951f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1951fc:
    // 0x1951fc: 0x2c610016  sltiu       $at, $v1, 0x16
    ctx->pc = 0x1951fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_195200:
    // 0x195200: 0x102002d8  beqz        $at, . + 4 + (0x2D8 << 2)
label_195204:
    if (ctx->pc == 0x195204u) {
        ctx->pc = 0x195204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195200u;
        // 0x195204: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195208u;
        goto label_195208;
    }
    ctx->pc = 0x195200u;
    {
        const bool branch_taken_0x195200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195200u;
        // 0x195204: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195200) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195208u;
label_195208:
    // 0x195208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19520c:
    // 0x19520c: 0x2484ffa0  addiu       $a0, $a0, -0x60
    ctx->pc = 0x19520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
label_195210:
    // 0x195210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195214:
    // 0x195214: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x195214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_195218:
    // 0x195218: 0x600008  jr          $v1
label_19521c:
    if (ctx->pc == 0x19521Cu) {
        ctx->pc = 0x195220u;
        goto label_195220;
    }
    ctx->pc = 0x195218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195220u: goto label_195220;
            case 0x195310u: goto label_195310;
            case 0x195354u: goto label_195354;
            case 0x1953B8u: goto label_1953b8;
            case 0x19543Cu: goto label_19543c;
            case 0x195450u: goto label_195450;
            case 0x195460u: goto label_195460;
            case 0x195480u: goto label_195480;
            case 0x1954F0u: goto label_1954f0;
            case 0x1955CCu: goto label_1955cc;
            case 0x195618u: goto label_195618;
            case 0x19563Cu: goto label_19563c;
            case 0x195668u: goto label_195668;
            case 0x195B4Cu: goto label_195b4c;
            case 0x195C10u: goto label_195c10;
            case 0x195C38u: goto label_195c38;
            case 0x195C98u: goto label_195c98;
            case 0x195CB4u: goto label_195cb4;
            case 0x195CD0u: goto label_195cd0;
            case 0x195CE4u: goto label_195ce4;
            case 0x195D10u: goto label_195d10;
            case 0x195D64u: goto label_195d64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x195220u;
label_195220:
    // 0x195220: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x195220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195224:
    // 0x195224: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195228:
    // 0x195228: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_19522c:
    if (ctx->pc == 0x19522Cu) {
        ctx->pc = 0x19522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195228u;
        // 0x19522c: 0x8e150030  lw          $s5, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195230u;
        goto label_195230;
    }
    ctx->pc = 0x195228u;
    {
        const bool branch_taken_0x195228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195228u;
        // 0x19522c: 0x8e150030  lw          $s5, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195228) {
            ctx->pc = 0x19528Cu;
            goto label_19528c;
        }
    }
    ctx->pc = 0x195230u;
label_195230:
    // 0x195230: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_195234:
    // 0x195234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_195238:
    if (ctx->pc == 0x195238u) {
        ctx->pc = 0x19523Cu;
        goto label_19523c;
    }
    ctx->pc = 0x195234u;
    {
        const bool branch_taken_0x195234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195234) {
            ctx->pc = 0x195254u;
            goto label_195254;
        }
    }
    ctx->pc = 0x19523Cu;
label_19523c:
    // 0x19523c: 0xc047a50  jal         func_11E940
label_195240:
    if (ctx->pc == 0x195240u) {
        ctx->pc = 0x195244u;
        goto label_195244;
    }
    ctx->pc = 0x19523Cu;
    SET_GPR_U32(ctx, 31, 0x195244u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x19523Cu, 0x195244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195244u;
label_195244:
    // 0x195244: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_195248:
    // 0x195248: 0xc0478dc  jal         func_11E370
label_19524c:
    if (ctx->pc == 0x19524Cu) {
        ctx->pc = 0x19524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195248u;
        // 0x19524c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195250u;
        goto label_195250;
    }
    ctx->pc = 0x195248u;
    SET_GPR_U32(ctx, 31, 0x195250u);
    ctx->pc = 0x19524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195248u;
    // 0x19524c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195248u, 0x195250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195250u;
label_195250:
    // 0x195250: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_195254:
    // 0x195254: 0x0  nop
    ctx->pc = 0x195254u;
    // NOP
label_195258:
    // 0x195258: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x195258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_19525c:
    // 0x19525c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_195260:
    // 0x195260: 0xc06bd80  jal         func_1AF600
label_195264:
    if (ctx->pc == 0x195264u) {
        ctx->pc = 0x195264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195260u;
        // 0x195264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195268u;
        goto label_195268;
    }
    ctx->pc = 0x195260u;
    SET_GPR_U32(ctx, 31, 0x195268u);
    ctx->pc = 0x195264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195260u;
    // 0x195264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x195260u, 0x195268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195268u;
label_195268:
    // 0x195268: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x195268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_19526c:
    // 0x19526c: 0xc0461e4  jal         func_118790
label_195270:
    if (ctx->pc == 0x195270u) {
        ctx->pc = 0x195270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19526Cu;
        // 0x195270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195274u;
        goto label_195274;
    }
    ctx->pc = 0x19526Cu;
    SET_GPR_U32(ctx, 31, 0x195274u);
    ctx->pc = 0x195270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19526Cu;
    // 0x195270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118790u, 0x19526Cu, 0x195274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195274u;
label_195274:
    // 0x195274: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_195278:
    // 0x195278: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x195278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_19527c:
    // 0x19527c: 0xc06bd80  jal         func_1AF600
label_195280:
    if (ctx->pc == 0x195280u) {
        ctx->pc = 0x195280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19527Cu;
        // 0x195280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195284u;
        goto label_195284;
    }
    ctx->pc = 0x19527Cu;
    SET_GPR_U32(ctx, 31, 0x195284u);
    ctx->pc = 0x195280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19527Cu;
    // 0x195280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x19527Cu, 0x195284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195284u;
label_195284:
    // 0x195284: 0x100002b7  b           . + 4 + (0x2B7 << 2)
label_195288:
    if (ctx->pc == 0x195288u) {
        ctx->pc = 0x19528Cu;
        goto label_19528c;
    }
    ctx->pc = 0x195284u;
    {
        const bool branch_taken_0x195284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195284) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x19528Cu;
label_19528c:
    // 0x19528c: 0x0  nop
    ctx->pc = 0x19528cu;
    // NOP
label_195290:
    // 0x195290: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_195294:
    // 0x195294: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_195298:
    if (ctx->pc == 0x195298u) {
        ctx->pc = 0x19529Cu;
        goto label_19529c;
    }
    ctx->pc = 0x195294u;
    {
        const bool branch_taken_0x195294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195294) {
            ctx->pc = 0x1952B4u;
            goto label_1952b4;
        }
    }
    ctx->pc = 0x19529Cu;
label_19529c:
    // 0x19529c: 0xc047a50  jal         func_11E940
label_1952a0:
    if (ctx->pc == 0x1952A0u) {
        ctx->pc = 0x1952A4u;
        goto label_1952a4;
    }
    ctx->pc = 0x19529Cu;
    SET_GPR_U32(ctx, 31, 0x1952A4u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x19529Cu, 0x1952A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952A4u;
label_1952a4:
    // 0x1952a4: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x1952a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_1952a8:
    // 0x1952a8: 0xc0478dc  jal         func_11E370
label_1952ac:
    if (ctx->pc == 0x1952ACu) {
        ctx->pc = 0x1952ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A8u;
        // 0x1952ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952B0u;
        goto label_1952b0;
    }
    ctx->pc = 0x1952A8u;
    SET_GPR_U32(ctx, 31, 0x1952B0u);
    ctx->pc = 0x1952ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952A8u;
    // 0x1952ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1952A8u, 0x1952B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952B0u;
label_1952b0:
    // 0x1952b0: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x1952b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_1952b4:
    // 0x1952b4: 0x0  nop
    ctx->pc = 0x1952b4u;
    // NOP
label_1952b8:
    // 0x1952b8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1952bc:
    // 0x1952bc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1952c0:
    // 0x1952c0: 0xc06bd80  jal         func_1AF600
label_1952c4:
    if (ctx->pc == 0x1952C4u) {
        ctx->pc = 0x1952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C0u;
        // 0x1952c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952C8u;
        goto label_1952c8;
    }
    ctx->pc = 0x1952C0u;
    SET_GPR_U32(ctx, 31, 0x1952C8u);
    ctx->pc = 0x1952C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952C0u;
    // 0x1952c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1952C0u, 0x1952C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952C8u;
label_1952c8:
    // 0x1952c8: 0xc0802aa  jal         func_200AA8
label_1952cc:
    if (ctx->pc == 0x1952CCu) {
        ctx->pc = 0x1952CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952C8u;
        // 0x1952cc: 0x8f9283a0  lw          $s2, -0x7C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952D0u;
        goto label_1952d0;
    }
    ctx->pc = 0x1952C8u;
    SET_GPR_U32(ctx, 31, 0x1952D0u);
    ctx->pc = 0x1952CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952C8u;
    // 0x1952cc: 0x8f9283a0  lw          $s2, -0x7C60($gp) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1952C8u, 0x1952D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952D0u;
label_1952d0:
    // 0x1952d0: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1952d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_1952d4:
    // 0x1952d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1952d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1952d8:
    // 0x1952d8: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x1952d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1952dc:
    // 0x1952dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1952dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1952e0:
    // 0x1952e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1952e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1952e4:
    // 0x1952e4: 0x0  nop
    ctx->pc = 0x1952e4u;
    // NOP
label_1952e8:
    // 0x1952e8: 0x0  nop
    ctx->pc = 0x1952e8u;
    // NOP
label_1952ec:
    // 0x1952ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1952ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1952f0:
    // 0x1952f0: 0xc0461e4  jal         func_118790
label_1952f4:
    if (ctx->pc == 0x1952F4u) {
        ctx->pc = 0x1952F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952F0u;
        // 0x1952f4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952F8u;
        goto label_1952f8;
    }
    ctx->pc = 0x1952F0u;
    SET_GPR_U32(ctx, 31, 0x1952F8u);
    ctx->pc = 0x1952F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952F0u;
    // 0x1952f4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118790u, 0x1952F0u, 0x1952F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952F8u;
label_1952f8:
    // 0x1952f8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1952f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1952fc:
    // 0x1952fc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_195300:
    // 0x195300: 0xc06bd80  jal         func_1AF600
label_195304:
    if (ctx->pc == 0x195304u) {
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195308u;
        goto label_195308;
    }
    ctx->pc = 0x195300u;
    SET_GPR_U32(ctx, 31, 0x195308u);
    ctx->pc = 0x195304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195300u;
    // 0x195304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x195300u, 0x195308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195308u;
label_195308:
    // 0x195308: 0x10000296  b           . + 4 + (0x296 << 2)
label_19530c:
    if (ctx->pc == 0x19530Cu) {
        ctx->pc = 0x195310u;
        goto label_195310;
    }
    ctx->pc = 0x195308u;
    {
        const bool branch_taken_0x195308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195308) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195310u;
label_195310:
    // 0x195310: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_195314:
    // 0x195314: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195314u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195318:
    // 0x195318: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19531c:
    if (ctx->pc == 0x19531Cu) {
        ctx->pc = 0x19531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195318u;
        // 0x19531c: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195320u;
        goto label_195320;
    }
    ctx->pc = 0x195318u;
    {
        const bool branch_taken_0x195318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195318u;
        // 0x19531c: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195318) {
            ctx->pc = 0x195338u;
            goto label_195338;
        }
    }
    ctx->pc = 0x195320u;
label_195320:
    // 0x195320: 0xc047a50  jal         func_11E940
label_195324:
    if (ctx->pc == 0x195324u) {
        ctx->pc = 0x195328u;
        goto label_195328;
    }
    ctx->pc = 0x195320u;
    SET_GPR_U32(ctx, 31, 0x195328u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195320u, 0x195328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195328u;
label_195328:
    // 0x195328: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_19532c:
    // 0x19532c: 0xc0478dc  jal         func_11E370
label_195330:
    if (ctx->pc == 0x195330u) {
        ctx->pc = 0x195330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19532Cu;
        // 0x195330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195334u;
        goto label_195334;
    }
    ctx->pc = 0x19532Cu;
    SET_GPR_U32(ctx, 31, 0x195334u);
    ctx->pc = 0x195330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19532Cu;
    // 0x195330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x19532Cu, 0x195334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195334u;
label_195334:
    // 0x195334: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_195338:
    // 0x195338: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x195338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_19533c:
    // 0x19533c: 0x8f8586f4  lw          $a1, -0x790C($gp)
    ctx->pc = 0x19533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_195340:
    // 0x195340: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195344:
    // 0x195344: 0xc046350  jal         func_118D40
label_195348:
    if (ctx->pc == 0x195348u) {
        ctx->pc = 0x195348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195344u;
        // 0x195348: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19534Cu;
        goto label_19534c;
    }
    ctx->pc = 0x195344u;
    SET_GPR_U32(ctx, 31, 0x19534Cu);
    ctx->pc = 0x195348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195344u;
    // 0x195348: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D40u, 0x195344u, 0x19534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19534Cu;
label_19534c:
    // 0x19534c: 0x10000285  b           . + 4 + (0x285 << 2)
label_195350:
    if (ctx->pc == 0x195350u) {
        ctx->pc = 0x195354u;
        goto label_195354;
    }
    ctx->pc = 0x19534Cu;
    {
        const bool branch_taken_0x19534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19534c) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195354u;
label_195354:
    // 0x195354: 0x0  nop
    ctx->pc = 0x195354u;
    // NOP
label_195358:
    // 0x195358: 0xc062d50  jal         func_18B540
label_19535c:
    if (ctx->pc == 0x19535Cu) {
        ctx->pc = 0x19535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195358u;
        // 0x19535c: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195360u;
        goto label_195360;
    }
    ctx->pc = 0x195358u;
    SET_GPR_U32(ctx, 31, 0x195360u);
    ctx->pc = 0x19535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195358u;
    // 0x19535c: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x195358u, 0x195360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195360u;
label_195360:
    // 0x195360: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x195360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_195364:
    // 0x195364: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_195368:
    // 0x195368: 0x2243824  and         $a3, $s1, $a0
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_19536c:
    // 0x19536c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_195370:
    // 0x195370: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x195370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_195374:
    // 0x195374: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_195378:
    // 0x195378: 0x0  nop
    ctx->pc = 0x195378u;
    // NOP
label_19537c:
    // 0x19537c: 0x2010  mfhi        $a0
    ctx->pc = 0x19537cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_195380:
    // 0x195380: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x195380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
label_195384:
    // 0x195384: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x195384u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_195388:
    // 0x195388: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x195388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_19538c:
    // 0x19538c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x19538cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
label_195390:
    // 0x195390: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_195394:
    if (ctx->pc == 0x195394u) {
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195398u;
        goto label_195398;
    }
    ctx->pc = 0x195390u;
    {
        const bool branch_taken_0x195390 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195390) {
            ctx->pc = 0x1953A0u;
            goto label_1953a0;
        }
    }
    ctx->pc = 0x195398u;
label_195398:
    // 0x195398: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x195398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
label_19539c:
    // 0x19539c: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x19539cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_1953a0:
    // 0x1953a0: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x1953a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1953a4:
    // 0x1953a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1953a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1953a8:
    // 0x1953a8: 0xc062b74  jal         func_18ADD0
label_1953ac:
    if (ctx->pc == 0x1953ACu) {
        ctx->pc = 0x1953ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953A8u;
        // 0x1953ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953B0u;
        goto label_1953b0;
    }
    ctx->pc = 0x1953A8u;
    SET_GPR_U32(ctx, 31, 0x1953B0u);
    ctx->pc = 0x1953ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1953A8u;
    // 0x1953ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x1953A8u, 0x1953B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953B0u;
label_1953b0:
    // 0x1953b0: 0x1000026c  b           . + 4 + (0x26C << 2)
label_1953b4:
    if (ctx->pc == 0x1953B4u) {
        ctx->pc = 0x1953B8u;
        goto label_1953b8;
    }
    ctx->pc = 0x1953B0u;
    {
        const bool branch_taken_0x1953b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953b0) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1953B8u;
label_1953b8:
    // 0x1953b8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1953bc:
    // 0x1953bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1953c0:
    // 0x1953c0: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_1953c4:
    if (ctx->pc == 0x1953C4u) {
        ctx->pc = 0x1953C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C0u;
        // 0x1953c4: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953C8u;
        goto label_1953c8;
    }
    ctx->pc = 0x1953C0u;
    {
        const bool branch_taken_0x1953c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1953C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C0u;
        // 0x1953c4: 0x8e110028  lw          $s1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953c0) {
            ctx->pc = 0x195424u;
            goto label_195424;
        }
    }
    ctx->pc = 0x1953C8u;
label_1953c8:
    // 0x1953c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1953c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1953cc:
    // 0x1953cc: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_1953d0:
    if (ctx->pc == 0x1953D0u) {
        ctx->pc = 0x1953D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953CCu;
        // 0x1953d0: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953D4u;
        goto label_1953d4;
    }
    ctx->pc = 0x1953CCu;
    {
        const bool branch_taken_0x1953cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1953D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953CCu;
        // 0x1953d0: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953cc) {
            ctx->pc = 0x195404u;
            goto label_195404;
        }
    }
    ctx->pc = 0x1953D4u;
label_1953d4:
    // 0x1953d4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1953d8:
    if (ctx->pc == 0x1953D8u) {
        ctx->pc = 0x1953DCu;
        goto label_1953dc;
    }
    ctx->pc = 0x1953D4u;
    {
        const bool branch_taken_0x1953d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1953d4) {
            ctx->pc = 0x1953ECu;
            goto label_1953ec;
        }
    }
    ctx->pc = 0x1953DCu;
label_1953dc:
    // 0x1953dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1953e0:
    if (ctx->pc == 0x1953E0u) {
        ctx->pc = 0x1953E4u;
        goto label_1953e4;
    }
    ctx->pc = 0x1953DCu;
    {
        const bool branch_taken_0x1953dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953dc) {
            ctx->pc = 0x1953ECu;
            goto label_1953ec;
        }
    }
    ctx->pc = 0x1953E4u;
label_1953e4:
    // 0x1953e4: 0x1000025f  b           . + 4 + (0x25F << 2)
label_1953e8:
    if (ctx->pc == 0x1953E8u) {
        ctx->pc = 0x1953ECu;
        goto label_1953ec;
    }
    ctx->pc = 0x1953E4u;
    {
        const bool branch_taken_0x1953e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953e4) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1953ECu;
label_1953ec:
    // 0x1953ec: 0x0  nop
    ctx->pc = 0x1953ecu;
    // NOP
label_1953f0:
    // 0x1953f0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_1953f4:
    // 0x1953f4: 0xc046400  jal         func_119000
label_1953f8:
    if (ctx->pc == 0x1953F8u) {
        ctx->pc = 0x1953F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953F4u;
        // 0x1953f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953FCu;
        goto label_1953fc;
    }
    ctx->pc = 0x1953F4u;
    SET_GPR_U32(ctx, 31, 0x1953FCu);
    ctx->pc = 0x1953F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1953F4u;
    // 0x1953f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119000u, 0x1953F4u, 0x1953FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953FCu;
label_1953fc:
    // 0x1953fc: 0x10000259  b           . + 4 + (0x259 << 2)
label_195400:
    if (ctx->pc == 0x195400u) {
        ctx->pc = 0x195404u;
        goto label_195404;
    }
    ctx->pc = 0x1953FCu;
    {
        const bool branch_taken_0x1953fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953fc) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195404u;
label_195404:
    // 0x195404: 0x0  nop
    ctx->pc = 0x195404u;
    // NOP
label_195408:
    // 0x195408: 0xc0463e0  jal         func_118F80
label_19540c:
    if (ctx->pc == 0x19540Cu) {
        ctx->pc = 0x19540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195408u;
        // 0x19540c: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195410u;
        goto label_195410;
    }
    ctx->pc = 0x195408u;
    SET_GPR_U32(ctx, 31, 0x195410u);
    ctx->pc = 0x19540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195408u;
    // 0x19540c: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F80u, 0x195408u, 0x195410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195410u;
label_195410:
    // 0x195410: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_195414:
    // 0x195414: 0xc046414  jal         func_119050
label_195418:
    if (ctx->pc == 0x195418u) {
        ctx->pc = 0x195418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195414u;
        // 0x195418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19541Cu;
        goto label_19541c;
    }
    ctx->pc = 0x195414u;
    SET_GPR_U32(ctx, 31, 0x19541Cu);
    ctx->pc = 0x195418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195414u;
    // 0x195418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119050u, 0x195414u, 0x19541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19541Cu;
label_19541c:
    // 0x19541c: 0x10000251  b           . + 4 + (0x251 << 2)
label_195420:
    if (ctx->pc == 0x195420u) {
        ctx->pc = 0x195424u;
        goto label_195424;
    }
    ctx->pc = 0x19541Cu;
    {
        const bool branch_taken_0x19541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19541c) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195424u;
label_195424:
    // 0x195424: 0x0  nop
    ctx->pc = 0x195424u;
    // NOP
label_195428:
    // 0x195428: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_19542c:
    // 0x19542c: 0xc046414  jal         func_119050
label_195430:
    if (ctx->pc == 0x195430u) {
        ctx->pc = 0x195430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19542Cu;
        // 0x195430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195434u;
        goto label_195434;
    }
    ctx->pc = 0x19542Cu;
    SET_GPR_U32(ctx, 31, 0x195434u);
    ctx->pc = 0x195430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19542Cu;
    // 0x195430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119050u, 0x19542Cu, 0x195434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195434u;
label_195434:
    // 0x195434: 0x1000024b  b           . + 4 + (0x24B << 2)
label_195438:
    if (ctx->pc == 0x195438u) {
        ctx->pc = 0x19543Cu;
        goto label_19543c;
    }
    ctx->pc = 0x195434u;
    {
        const bool branch_taken_0x195434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195434) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x19543Cu;
label_19543c:
    // 0x19543c: 0x0  nop
    ctx->pc = 0x19543cu;
    // NOP
label_195440:
    // 0x195440: 0xc0463e0  jal         func_118F80
label_195444:
    if (ctx->pc == 0x195444u) {
        ctx->pc = 0x195444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195440u;
        // 0x195444: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195448u;
        goto label_195448;
    }
    ctx->pc = 0x195440u;
    SET_GPR_U32(ctx, 31, 0x195448u);
    ctx->pc = 0x195444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195440u;
    // 0x195444: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F80u, 0x195440u, 0x195448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195448u;
label_195448:
    // 0x195448: 0x10000246  b           . + 4 + (0x246 << 2)
label_19544c:
    if (ctx->pc == 0x19544Cu) {
        ctx->pc = 0x195450u;
        goto label_195450;
    }
    ctx->pc = 0x195448u;
    {
        const bool branch_taken_0x195448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195448) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195450u;
label_195450:
    // 0x195450: 0xc0463fc  jal         func_118FF0
label_195454:
    if (ctx->pc == 0x195454u) {
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195458u;
        goto label_195458;
    }
    ctx->pc = 0x195450u;
    SET_GPR_U32(ctx, 31, 0x195458u);
    ctx->pc = 0x195454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195450u;
    // 0x195454: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FF0u, 0x195450u, 0x195458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195458u;
label_195458:
    // 0x195458: 0x10000242  b           . + 4 + (0x242 << 2)
label_19545c:
    if (ctx->pc == 0x19545Cu) {
        ctx->pc = 0x195460u;
        goto label_195460;
    }
    ctx->pc = 0x195458u;
    {
        const bool branch_taken_0x195458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195458) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195460u;
label_195460:
    // 0x195460: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195464:
    // 0x195464: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x195464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195468:
    // 0x195468: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x195468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19546c:
    // 0x19546c: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x19546cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_195470:
    // 0x195470: 0xc064f00  jal         func_193C00
label_195474:
    if (ctx->pc == 0x195474u) {
        ctx->pc = 0x195474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195470u;
        // 0x195474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195478u;
        goto label_195478;
    }
    ctx->pc = 0x195470u;
    SET_GPR_U32(ctx, 31, 0x195478u);
    ctx->pc = 0x195474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195470u;
    // 0x195474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x195470u, 0x195478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195478u;
label_195478:
    // 0x195478: 0x1000023a  b           . + 4 + (0x23A << 2)
label_19547c:
    if (ctx->pc == 0x19547Cu) {
        ctx->pc = 0x195480u;
        goto label_195480;
    }
    ctx->pc = 0x195478u;
    {
        const bool branch_taken_0x195478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195478) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195480u;
label_195480:
    // 0x195480: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195484:
    // 0x195484: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195488:
    // 0x195488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19548c:
    // 0x19548c: 0x8f95831c  lw          $s5, -0x7CE4($gp)
    ctx->pc = 0x19548cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
label_195490:
    // 0x195490: 0x9072002e  lbu         $s2, 0x2E($v1)
    ctx->pc = 0x195490u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_195494:
    // 0x195494: 0xaf82831c  sw          $v0, -0x7CE4($gp)
    ctx->pc = 0x195494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 2));
label_195498:
    // 0x195498: 0xa062002e  sb          $v0, 0x2E($v1)
    ctx->pc = 0x195498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 2));
label_19549c:
    // 0x19549c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1954a0:
    // 0x1954a0: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_1954a4:
    // 0x1954a4: 0xa06201d3  sb          $v0, 0x1D3($v1)
    ctx->pc = 0x1954a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 2));
label_1954a8:
    // 0x1954a8: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1954ac:
    // 0x1954ac: 0x8c99000c  lw          $t9, 0xC($a0)
    ctx->pc = 0x1954acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1954b0:
    // 0x1954b0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1954b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_1954b4:
    // 0x1954b4: 0x320f809  jalr        $t9
label_1954b8:
    if (ctx->pc == 0x1954B8u) {
        ctx->pc = 0x1954BCu;
        goto label_1954bc;
    }
    ctx->pc = 0x1954B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1954BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954B4u, 0x1954BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1954BCu;
label_1954bc:
    // 0x1954bc: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x1954bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1954c0:
    // 0x1954c0: 0xc046240  jal         func_118900
label_1954c4:
    if (ctx->pc == 0x1954C4u) {
        ctx->pc = 0x1954C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954C0u;
        // 0x1954c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954C8u;
        goto label_1954c8;
    }
    ctx->pc = 0x1954C0u;
    SET_GPR_U32(ctx, 31, 0x1954C8u);
    ctx->pc = 0x1954C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954C0u;
    // 0x1954c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118900u, 0x1954C0u, 0x1954C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954C8u;
label_1954c8:
    // 0x1954c8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1954cc:
    // 0x1954cc: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x1954ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_1954d0:
    // 0x1954d0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1954d4:
    if (ctx->pc == 0x1954D4u) {
        ctx->pc = 0x1954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954D0u;
        // 0x1954d4: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954D8u;
        goto label_1954d8;
    }
    ctx->pc = 0x1954D0u;
    {
        const bool branch_taken_0x1954d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954D0u;
        // 0x1954d4: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954d0) {
            ctx->pc = 0x1954E0u;
            goto label_1954e0;
        }
    }
    ctx->pc = 0x1954D8u;
label_1954d8:
    // 0x1954d8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1954dc:
    // 0x1954dc: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x1954dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
label_1954e0:
    // 0x1954e0: 0x16400220  bnez        $s2, . + 4 + (0x220 << 2)
label_1954e4:
    if (ctx->pc == 0x1954E4u) {
        ctx->pc = 0x1954E8u;
        goto label_1954e8;
    }
    ctx->pc = 0x1954E0u;
    {
        const bool branch_taken_0x1954e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1954e0) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1954E8u;
label_1954e8:
    // 0x1954e8: 0x1000021e  b           . + 4 + (0x21E << 2)
label_1954ec:
    if (ctx->pc == 0x1954ECu) {
        ctx->pc = 0x1954ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E8u;
        // 0x1954ec: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954F0u;
        goto label_1954f0;
    }
    ctx->pc = 0x1954E8u;
    {
        const bool branch_taken_0x1954e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E8u;
        // 0x1954ec: 0xaf80831c  sw          $zero, -0x7CE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e8) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1954F0u;
label_1954f0:
    // 0x1954f0: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1954f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1954f4:
    // 0x1954f4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1954f8:
    // 0x1954f8: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
label_1954fc:
    if (ctx->pc == 0x1954FCu) {
        ctx->pc = 0x1954FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F8u;
        // 0x1954fc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195500u;
        goto label_195500;
    }
    ctx->pc = 0x1954F8u;
    {
        const bool branch_taken_0x1954f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1954FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F8u;
        // 0x1954fc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954f8) {
            ctx->pc = 0x195580u;
            goto label_195580;
        }
    }
    ctx->pc = 0x195500u;
label_195500:
    // 0x195500: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
label_195504:
    if (ctx->pc == 0x195504u) {
        ctx->pc = 0x195508u;
        goto label_195508;
    }
    ctx->pc = 0x195500u;
    {
        const bool branch_taken_0x195500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x195500) {
            ctx->pc = 0x19554Cu;
            goto label_19554c;
        }
    }
    ctx->pc = 0x195508u;
label_195508:
    // 0x195508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19550c:
    // 0x19550c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_195510:
    if (ctx->pc == 0x195510u) {
        ctx->pc = 0x195514u;
        goto label_195514;
    }
    ctx->pc = 0x19550Cu;
    {
        const bool branch_taken_0x19550c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19550c) {
            ctx->pc = 0x19551Cu;
            goto label_19551c;
        }
    }
    ctx->pc = 0x195514u;
label_195514:
    // 0x195514: 0x10000026  b           . + 4 + (0x26 << 2)
label_195518:
    if (ctx->pc == 0x195518u) {
        ctx->pc = 0x19551Cu;
        goto label_19551c;
    }
    ctx->pc = 0x195514u;
    {
        const bool branch_taken_0x195514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195514) {
            ctx->pc = 0x1955B0u;
            goto label_1955b0;
        }
    }
    ctx->pc = 0x19551Cu;
label_19551c:
    // 0x19551c: 0x0  nop
    ctx->pc = 0x19551cu;
    // NOP
label_195520:
    // 0x195520: 0xc049e34  jal         func_1278D0
label_195524:
    if (ctx->pc == 0x195524u) {
        ctx->pc = 0x195528u;
        goto label_195528;
    }
    ctx->pc = 0x195520u;
    SET_GPR_U32(ctx, 31, 0x195528u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195520u, 0x195528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195528u;
label_195528:
    // 0x195528: 0xc04a02c  jal         func_1280B0
label_19552c:
    if (ctx->pc == 0x19552Cu) {
        ctx->pc = 0x19552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195528u;
        // 0x19552c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195530u;
        goto label_195530;
    }
    ctx->pc = 0x195528u;
    SET_GPR_U32(ctx, 31, 0x195530u);
    ctx->pc = 0x19552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195528u;
    // 0x19552c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x195528u, 0x195530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195530u;
label_195530:
    // 0x195530: 0xc049e34  jal         func_1278D0
label_195534:
    if (ctx->pc == 0x195534u) {
        ctx->pc = 0x195538u;
        goto label_195538;
    }
    ctx->pc = 0x195530u;
    SET_GPR_U32(ctx, 31, 0x195538u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195530u, 0x195538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195538u;
label_195538:
    // 0x195538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19553c:
    // 0x19553c: 0xc049ed8  jal         func_127B60
label_195540:
    if (ctx->pc == 0x195540u) {
        ctx->pc = 0x195540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19553Cu;
        // 0x195540: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195544u;
        goto label_195544;
    }
    ctx->pc = 0x19553Cu;
    SET_GPR_U32(ctx, 31, 0x195544u);
    ctx->pc = 0x195540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19553Cu;
    // 0x195540: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x19553Cu, 0x195544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195544u;
label_195544:
    // 0x195544: 0x10000207  b           . + 4 + (0x207 << 2)
label_195548:
    if (ctx->pc == 0x195548u) {
        ctx->pc = 0x19554Cu;
        goto label_19554c;
    }
    ctx->pc = 0x195544u;
    {
        const bool branch_taken_0x195544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195544) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x19554Cu;
label_19554c:
    // 0x19554c: 0x0  nop
    ctx->pc = 0x19554cu;
    // NOP
label_195550:
    // 0x195550: 0xc049e34  jal         func_1278D0
label_195554:
    if (ctx->pc == 0x195554u) {
        ctx->pc = 0x195558u;
        goto label_195558;
    }
    ctx->pc = 0x195550u;
    SET_GPR_U32(ctx, 31, 0x195558u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195550u, 0x195558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195558u;
label_195558:
    // 0x195558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19555c:
    // 0x19555c: 0xc049f70  jal         func_127DC0
label_195560:
    if (ctx->pc == 0x195560u) {
        ctx->pc = 0x195560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19555Cu;
        // 0x195560: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195564u;
        goto label_195564;
    }
    ctx->pc = 0x19555Cu;
    SET_GPR_U32(ctx, 31, 0x195564u);
    ctx->pc = 0x195560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19555Cu;
    // 0x195560: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DC0u, 0x19555Cu, 0x195564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195564u;
label_195564:
    // 0x195564: 0xc049e34  jal         func_1278D0
label_195568:
    if (ctx->pc == 0x195568u) {
        ctx->pc = 0x19556Cu;
        goto label_19556c;
    }
    ctx->pc = 0x195564u;
    SET_GPR_U32(ctx, 31, 0x19556Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195564u, 0x19556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19556Cu;
label_19556c:
    // 0x19556c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195570:
    // 0x195570: 0xc049ed8  jal         func_127B60
label_195574:
    if (ctx->pc == 0x195574u) {
        ctx->pc = 0x195574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195570u;
        // 0x195574: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195578u;
        goto label_195578;
    }
    ctx->pc = 0x195570u;
    SET_GPR_U32(ctx, 31, 0x195578u);
    ctx->pc = 0x195574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195570u;
    // 0x195574: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x195570u, 0x195578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195578u;
label_195578:
    // 0x195578: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_19557c:
    if (ctx->pc == 0x19557Cu) {
        ctx->pc = 0x195580u;
        goto label_195580;
    }
    ctx->pc = 0x195578u;
    {
        const bool branch_taken_0x195578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195578) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195580u;
label_195580:
    // 0x195580: 0xc049e34  jal         func_1278D0
label_195584:
    if (ctx->pc == 0x195584u) {
        ctx->pc = 0x195588u;
        goto label_195588;
    }
    ctx->pc = 0x195580u;
    SET_GPR_U32(ctx, 31, 0x195588u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195580u, 0x195588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195588u;
label_195588:
    // 0x195588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19558c:
    // 0x19558c: 0xc049f70  jal         func_127DC0
label_195590:
    if (ctx->pc == 0x195590u) {
        ctx->pc = 0x195590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19558Cu;
        // 0x195590: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195594u;
        goto label_195594;
    }
    ctx->pc = 0x19558Cu;
    SET_GPR_U32(ctx, 31, 0x195594u);
    ctx->pc = 0x195590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19558Cu;
    // 0x195590: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DC0u, 0x19558Cu, 0x195594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195594u;
label_195594:
    // 0x195594: 0xc049e34  jal         func_1278D0
label_195598:
    if (ctx->pc == 0x195598u) {
        ctx->pc = 0x19559Cu;
        goto label_19559c;
    }
    ctx->pc = 0x195594u;
    SET_GPR_U32(ctx, 31, 0x19559Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x195594u, 0x19559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19559Cu;
label_19559c:
    // 0x19559c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1955a0:
    // 0x1955a0: 0xc049ed8  jal         func_127B60
label_1955a4:
    if (ctx->pc == 0x1955A4u) {
        ctx->pc = 0x1955A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955A0u;
        // 0x1955a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955A8u;
        goto label_1955a8;
    }
    ctx->pc = 0x1955A0u;
    SET_GPR_U32(ctx, 31, 0x1955A8u);
    ctx->pc = 0x1955A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955A0u;
    // 0x1955a4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x1955A0u, 0x1955A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955A8u;
label_1955a8:
    // 0x1955a8: 0x100001ee  b           . + 4 + (0x1EE << 2)
label_1955ac:
    if (ctx->pc == 0x1955ACu) {
        ctx->pc = 0x1955B0u;
        goto label_1955b0;
    }
    ctx->pc = 0x1955A8u;
    {
        const bool branch_taken_0x1955a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955a8) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1955B0u;
label_1955b0:
    // 0x1955b0: 0xc049e34  jal         func_1278D0
label_1955b4:
    if (ctx->pc == 0x1955B4u) {
        ctx->pc = 0x1955B8u;
        goto label_1955b8;
    }
    ctx->pc = 0x1955B0u;
    SET_GPR_U32(ctx, 31, 0x1955B8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1955B0u, 0x1955B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955B8u;
label_1955b8:
    // 0x1955b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1955b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1955bc:
    // 0x1955bc: 0xc049ff0  jal         func_127FC0
label_1955c0:
    if (ctx->pc == 0x1955C0u) {
        ctx->pc = 0x1955C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955BCu;
        // 0x1955c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955C4u;
        goto label_1955c4;
    }
    ctx->pc = 0x1955BCu;
    SET_GPR_U32(ctx, 31, 0x1955C4u);
    ctx->pc = 0x1955C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955BCu;
    // 0x1955c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127FC0u, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_1955c8:
    if (ctx->pc == 0x1955C8u) {
        ctx->pc = 0x1955CCu;
        goto label_1955cc;
    }
    ctx->pc = 0x1955C4u;
    {
        const bool branch_taken_0x1955c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1955c4) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1955CCu;
label_1955cc:
    // 0x1955cc: 0x0  nop
    ctx->pc = 0x1955ccu;
    // NOP
label_1955d0:
    // 0x1955d0: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x1955d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1955d4:
    // 0x1955d4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1955d8:
    // 0x1955d8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1955dc:
    // 0x1955dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1955e0:
    // 0x1955e0: 0xc05746c  jal         func_15D1B0
label_1955e4:
    if (ctx->pc == 0x1955E4u) {
        ctx->pc = 0x1955E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955E0u;
        // 0x1955e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955E8u;
        goto label_1955e8;
    }
    ctx->pc = 0x1955E0u;
    SET_GPR_U32(ctx, 31, 0x1955E8u);
    ctx->pc = 0x1955E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955E0u;
    // 0x1955e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D1B0u, 0x1955E0u, 0x1955E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955E8u;
label_1955e8:
    // 0x1955e8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1955e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1955ec:
    // 0x1955ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1955ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1955f0:
    // 0x1955f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1955f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1955f4:
    // 0x1955f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1955f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1955f8:
    // 0x1955f8: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x1955f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
label_1955fc:
    // 0x1955fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1955fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195600:
    // 0x195600: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_195604:
    // 0x195604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_195608:
    // 0x195608: 0xc05fb2c  jal         func_17ECB0
label_19560c:
    if (ctx->pc == 0x19560Cu) {
        ctx->pc = 0x19560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195608u;
        // 0x19560c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195610u;
        goto label_195610;
    }
    ctx->pc = 0x195608u;
    SET_GPR_U32(ctx, 31, 0x195610u);
    ctx->pc = 0x19560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195608u;
    // 0x19560c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECB0u, 0x195608u, 0x195610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195610u;
label_195610:
    // 0x195610: 0x100001d4  b           . + 4 + (0x1D4 << 2)
label_195614:
    if (ctx->pc == 0x195614u) {
        ctx->pc = 0x195618u;
        goto label_195618;
    }
    ctx->pc = 0x195610u;
    {
        const bool branch_taken_0x195610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195610) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195618u;
label_195618:
    // 0x195618: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x195618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19561c:
    // 0x19561c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19561cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195620:
    // 0x195620: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_195624:
    // 0x195624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195628:
    // 0x195628: 0x8ca42c1c  lw          $a0, 0x2C1C($a1)
    ctx->pc = 0x195628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
label_19562c:
    // 0x19562c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_195630:
    // 0x195630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195634:
    // 0x195634: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_195638:
    if (ctx->pc == 0x195638u) {
        ctx->pc = 0x195638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195634u;
        // 0x195638: 0xa0600041  sb          $zero, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19563Cu;
        goto label_19563c;
    }
    ctx->pc = 0x195634u;
    {
        const bool branch_taken_0x195634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195634u;
        // 0x195638: 0xa0600041  sb          $zero, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195634) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x19563Cu;
label_19563c:
    // 0x19563c: 0x0  nop
    ctx->pc = 0x19563cu;
    // NOP
label_195640:
    // 0x195640: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195644:
    // 0x195644: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195648:
    // 0x195648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19564c:
    // 0x19564c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_195650:
    // 0x195650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195654:
    // 0x195654: 0x8cc42c1c  lw          $a0, 0x2C1C($a2)
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11292)));
label_195658:
    // 0x195658: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x195658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19565c:
    // 0x19565c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195660:
    // 0x195660: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_195664:
    if (ctx->pc == 0x195664u) {
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0650041  sb          $a1, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195668u;
        goto label_195668;
    }
    ctx->pc = 0x195660u;
    {
        const bool branch_taken_0x195660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0650041  sb          $a1, 0x41($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195660) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195668u;
label_195668:
    // 0x195668: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x195668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19566c:
    // 0x19566c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_195670:
    // 0x195670: 0x108300f2  beq         $a0, $v1, . + 4 + (0xF2 << 2)
label_195674:
    if (ctx->pc == 0x195674u) {
        ctx->pc = 0x195674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195670u;
        // 0x195674: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195678u;
        goto label_195678;
    }
    ctx->pc = 0x195670u;
    {
        const bool branch_taken_0x195670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195670u;
        // 0x195674: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195670) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195678u;
label_195678:
    // 0x195678: 0x108300ad  beq         $a0, $v1, . + 4 + (0xAD << 2)
label_19567c:
    if (ctx->pc == 0x19567Cu) {
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195680u;
        goto label_195680;
    }
    ctx->pc = 0x195678u;
    {
        const bool branch_taken_0x195678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195678) {
            ctx->pc = 0x195930u;
            goto label_195930;
        }
    }
    ctx->pc = 0x195680u;
label_195680:
    // 0x195680: 0x10870068  beq         $a0, $a3, . + 4 + (0x68 << 2)
label_195684:
    if (ctx->pc == 0x195684u) {
        ctx->pc = 0x195688u;
        goto label_195688;
    }
    ctx->pc = 0x195680u;
    {
        const bool branch_taken_0x195680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x195680) {
            ctx->pc = 0x195824u;
            goto label_195824;
        }
    }
    ctx->pc = 0x195688u;
label_195688:
    // 0x195688: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
label_19568c:
    if (ctx->pc == 0x19568Cu) {
        ctx->pc = 0x19568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195688u;
        // 0x19568c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195690u;
        goto label_195690;
    }
    ctx->pc = 0x195688u;
    {
        const bool branch_taken_0x195688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195688u;
        // 0x19568c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195688) {
            ctx->pc = 0x1957A0u;
            goto label_1957a0;
        }
    }
    ctx->pc = 0x195690u;
label_195690:
    // 0x195690: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_195694:
    if (ctx->pc == 0x195694u) {
        ctx->pc = 0x195698u;
        goto label_195698;
    }
    ctx->pc = 0x195690u;
    {
        const bool branch_taken_0x195690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195690) {
            ctx->pc = 0x1956A0u;
            goto label_1956a0;
        }
    }
    ctx->pc = 0x195698u;
label_195698:
    // 0x195698: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_19569c:
    if (ctx->pc == 0x19569Cu) {
        ctx->pc = 0x1956A0u;
        goto label_1956a0;
    }
    ctx->pc = 0x195698u;
    {
        const bool branch_taken_0x195698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195698) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1956A0u;
label_1956a0:
    // 0x1956a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1956a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1956a4:
    // 0x1956a4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1956a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1956a8:
    // 0x1956a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1956ac:
    if (ctx->pc == 0x1956ACu) {
        ctx->pc = 0x1956ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A8u;
        // 0x1956ac: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956B0u;
        goto label_1956b0;
    }
    ctx->pc = 0x1956A8u;
    {
        const bool branch_taken_0x1956a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A8u;
        // 0x1956ac: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956a8) {
            ctx->pc = 0x195774u;
            goto label_195774;
        }
    }
    ctx->pc = 0x1956B0u;
label_1956b0:
    // 0x1956b0: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
label_1956b4:
    if (ctx->pc == 0x1956B4u) {
        ctx->pc = 0x1956B8u;
        goto label_1956b8;
    }
    ctx->pc = 0x1956B0u;
    {
        const bool branch_taken_0x1956b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1956b0) {
            ctx->pc = 0x195720u;
            goto label_195720;
        }
    }
    ctx->pc = 0x1956B8u;
label_1956b8:
    // 0x1956b8: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_1956bc:
    // 0x1956bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1956bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1956c0:
    // 0x1956c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1956c4:
    // 0x1956c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1956c8:
    // 0x1956c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1956cc:
    if (ctx->pc == 0x1956CCu) {
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956D0u;
        goto label_1956d0;
    }
    ctx->pc = 0x1956C8u;
    {
        const bool branch_taken_0x1956c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956c8) {
            ctx->pc = 0x1956D8u;
            goto label_1956d8;
        }
    }
    ctx->pc = 0x1956D0u;
label_1956d0:
    // 0x1956d0: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1956d4:
    // 0x1956d4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1956d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_1956d8:
    // 0x1956d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1956dc:
    // 0x1956dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1956dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1956e0:
    // 0x1956e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1956e4:
    // 0x1956e4: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
label_1956e8:
    // 0x1956e8: 0xc04bf38  jal         func_12FCE0
label_1956ec:
    if (ctx->pc == 0x1956ECu) {
        ctx->pc = 0x1956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956E8u;
        // 0x1956ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956F0u;
        goto label_1956f0;
    }
    ctx->pc = 0x1956E8u;
    SET_GPR_U32(ctx, 31, 0x1956F0u);
    ctx->pc = 0x1956ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956E8u;
    // 0x1956ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x1956E8u, 0x1956F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956F0u;
label_1956f0:
    // 0x1956f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1956f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1956f4:
    // 0x1956f4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1956f8:
    // 0x1956f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1956f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1956fc:
    // 0x1956fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1956fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195700:
    // 0x195700: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_195704:
    // 0x195704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195708:
    // 0x195708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19570c:
    // 0x19570c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19570cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195710:
    // 0x195710: 0xc04bce0  jal         func_12F380
label_195714:
    if (ctx->pc == 0x195714u) {
        ctx->pc = 0x195714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195710u;
        // 0x195714: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195718u;
        goto label_195718;
    }
    ctx->pc = 0x195710u;
    SET_GPR_U32(ctx, 31, 0x195718u);
    ctx->pc = 0x195714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195710u;
    // 0x195714: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195710u, 0x195718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195718u;
label_195718:
    // 0x195718: 0x10000192  b           . + 4 + (0x192 << 2)
label_19571c:
    if (ctx->pc == 0x19571Cu) {
        ctx->pc = 0x195720u;
        goto label_195720;
    }
    ctx->pc = 0x195718u;
    {
        const bool branch_taken_0x195718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195718) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195720u;
label_195720:
    // 0x195720: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_195724:
    // 0x195724: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_195728:
    // 0x195728: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19572c:
    // 0x19572c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195730:
    // 0x195730: 0x10000003  b           . + 4 + (0x3 << 2)
label_195734:
    if (ctx->pc == 0x195734u) {
        ctx->pc = 0x195734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195730u;
        // 0x195734: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195738u;
        goto label_195738;
    }
    ctx->pc = 0x195730u;
    {
        const bool branch_taken_0x195730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195730u;
        // 0x195734: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195730) {
            ctx->pc = 0x195740u;
            goto label_195740;
        }
    }
    ctx->pc = 0x195738u;
label_195738:
    // 0x195738: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x195738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_19573c:
    // 0x19573c: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x19573cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_195740:
    // 0x195740: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195744:
    // 0x195744: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_195748:
    // 0x195748: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19574c:
    // 0x19574c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195750:
    // 0x195750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195754:
    // 0x195754: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195754u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195758:
    // 0x195758: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x195758u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_19575c:
    // 0x19575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195760:
    // 0x195760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195764:
    // 0x195764: 0xc04bce0  jal         func_12F380
label_195768:
    if (ctx->pc == 0x195768u) {
        ctx->pc = 0x195768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195764u;
        // 0x195768: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19576Cu;
        goto label_19576c;
    }
    ctx->pc = 0x195764u;
    SET_GPR_U32(ctx, 31, 0x19576Cu);
    ctx->pc = 0x195768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195764u;
    // 0x195768: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195764u, 0x19576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19576Cu;
label_19576c:
    // 0x19576c: 0x1000017d  b           . + 4 + (0x17D << 2)
label_195770:
    if (ctx->pc == 0x195770u) {
        ctx->pc = 0x195774u;
        goto label_195774;
    }
    ctx->pc = 0x19576Cu;
    {
        const bool branch_taken_0x19576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19576c) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195774u;
label_195774:
    // 0x195774: 0x0  nop
    ctx->pc = 0x195774u;
    // NOP
label_195778:
    // 0x195778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19577c:
    // 0x19577c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19577cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195780:
    // 0x195780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195784:
    // 0x195784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195788:
    // 0x195788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19578c:
    // 0x19578c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19578cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195790:
    // 0x195790: 0xc04bce0  jal         func_12F380
label_195794:
    if (ctx->pc == 0x195794u) {
        ctx->pc = 0x195794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195790u;
        // 0x195794: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195798u;
        goto label_195798;
    }
    ctx->pc = 0x195790u;
    SET_GPR_U32(ctx, 31, 0x195798u);
    ctx->pc = 0x195794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195790u;
    // 0x195794: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195790u, 0x195798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195798u;
label_195798:
    // 0x195798: 0x10000172  b           . + 4 + (0x172 << 2)
label_19579c:
    if (ctx->pc == 0x19579Cu) {
        ctx->pc = 0x1957A0u;
        goto label_1957a0;
    }
    ctx->pc = 0x195798u;
    {
        const bool branch_taken_0x195798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195798) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1957A0u;
label_1957a0:
    // 0x1957a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1957a4:
    // 0x1957a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1957a8:
    if (ctx->pc == 0x1957A8u) {
        ctx->pc = 0x1957A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A4u;
        // 0x1957a8: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957ACu;
        goto label_1957ac;
    }
    ctx->pc = 0x1957A4u;
    {
        const bool branch_taken_0x1957a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A4u;
        // 0x1957a8: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957a4) {
            ctx->pc = 0x195800u;
            goto label_195800;
        }
    }
    ctx->pc = 0x1957ACu;
label_1957ac:
    // 0x1957ac: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x1957acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_1957b0:
    // 0x1957b0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1957b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1957b4:
    // 0x1957b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1957b8:
    // 0x1957b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1957bc:
    // 0x1957bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1957c0:
    if (ctx->pc == 0x1957C0u) {
        ctx->pc = 0x1957C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957BCu;
        // 0x1957c0: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957C4u;
        goto label_1957c4;
    }
    ctx->pc = 0x1957BCu;
    {
        const bool branch_taken_0x1957bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957BCu;
        // 0x1957c0: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957bc) {
            ctx->pc = 0x1957CCu;
            goto label_1957cc;
        }
    }
    ctx->pc = 0x1957C4u;
label_1957c4:
    // 0x1957c4: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x1957c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1957c8:
    // 0x1957c8: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1957c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_1957cc:
    // 0x1957cc: 0x0  nop
    ctx->pc = 0x1957ccu;
    // NOP
label_1957d0:
    // 0x1957d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1957d4:
    // 0x1957d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1957d8:
    // 0x1957d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1957d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1957dc:
    // 0x1957dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1957dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1957e0:
    // 0x1957e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1957e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1957e4:
    // 0x1957e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1957e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1957e8:
    // 0x1957e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1957e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1957ec:
    // 0x1957ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1957f0:
    // 0x1957f0: 0xc04bce0  jal         func_12F380
label_1957f4:
    if (ctx->pc == 0x1957F4u) {
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957F8u;
        goto label_1957f8;
    }
    ctx->pc = 0x1957F0u;
    SET_GPR_U32(ctx, 31, 0x1957F8u);
    ctx->pc = 0x1957F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957F0u;
    // 0x1957f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1957F0u, 0x1957F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x1000015a  b           . + 4 + (0x15A << 2)
label_1957fc:
    if (ctx->pc == 0x1957FCu) {
        ctx->pc = 0x195800u;
        goto label_195800;
    }
    ctx->pc = 0x1957F8u;
    {
        const bool branch_taken_0x1957f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957f8) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195800u;
label_195800:
    // 0x195800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195804:
    // 0x195804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195808:
    // 0x195808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19580c:
    // 0x19580c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19580cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195810:
    // 0x195810: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195810u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195814:
    // 0x195814: 0xc04bce0  jal         func_12F380
label_195818:
    if (ctx->pc == 0x195818u) {
        ctx->pc = 0x195818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195814u;
        // 0x195818: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19581Cu;
        goto label_19581c;
    }
    ctx->pc = 0x195814u;
    SET_GPR_U32(ctx, 31, 0x19581Cu);
    ctx->pc = 0x195818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195814u;
    // 0x195818: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195814u, 0x19581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19581Cu;
label_19581c:
    // 0x19581c: 0x10000151  b           . + 4 + (0x151 << 2)
label_195820:
    if (ctx->pc == 0x195820u) {
        ctx->pc = 0x195824u;
        goto label_195824;
    }
    ctx->pc = 0x19581Cu;
    {
        const bool branch_taken_0x19581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19581c) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195824u;
label_195824:
    // 0x195824: 0x0  nop
    ctx->pc = 0x195824u;
    // NOP
label_195828:
    // 0x195828: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_19582c:
    // 0x19582c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x19582cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195830:
    // 0x195830: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_195834:
    if (ctx->pc == 0x195834u) {
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x8e860320  lw          $a2, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195838u;
        goto label_195838;
    }
    ctx->pc = 0x195830u;
    {
        const bool branch_taken_0x195830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x8e860320  lw          $a2, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195830) {
            ctx->pc = 0x195904u;
            goto label_195904;
        }
    }
    ctx->pc = 0x195838u;
label_195838:
    // 0x195838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19583c:
    // 0x19583c: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
label_195840:
    if (ctx->pc == 0x195840u) {
        ctx->pc = 0x195844u;
        goto label_195844;
    }
    ctx->pc = 0x19583Cu;
    {
        const bool branch_taken_0x19583c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19583c) {
            ctx->pc = 0x1958B0u;
            goto label_1958b0;
        }
    }
    ctx->pc = 0x195844u;
label_195844:
    // 0x195844: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_195848:
    // 0x195848: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19584c:
    // 0x19584c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195850:
    // 0x195850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195854:
    // 0x195854: 0x10000003  b           . + 4 + (0x3 << 2)
label_195858:
    if (ctx->pc == 0x195858u) {
        ctx->pc = 0x195858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195854u;
        // 0x195858: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19585Cu;
        goto label_19585c;
    }
    ctx->pc = 0x195854u;
    {
        const bool branch_taken_0x195854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195854u;
        // 0x195858: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195854) {
            ctx->pc = 0x195864u;
            goto label_195864;
        }
    }
    ctx->pc = 0x19585Cu;
label_19585c:
    // 0x19585c: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_195860:
    // 0x195860: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_195864:
    // 0x195864: 0x0  nop
    ctx->pc = 0x195864u;
    // NOP
label_195868:
    // 0x195868: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19586c:
    // 0x19586c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_195870:
    // 0x195870: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_195874:
    // 0x195874: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x195874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
label_195878:
    // 0x195878: 0xc04bf38  jal         func_12FCE0
label_19587c:
    if (ctx->pc == 0x19587Cu) {
        ctx->pc = 0x19587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195878u;
        // 0x19587c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195880u;
        goto label_195880;
    }
    ctx->pc = 0x195878u;
    SET_GPR_U32(ctx, 31, 0x195880u);
    ctx->pc = 0x19587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195878u;
    // 0x19587c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x195878u, 0x195880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195880u;
label_195880:
    // 0x195880: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195884:
    // 0x195884: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_195888:
    // 0x195888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19588c:
    // 0x19588c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195890:
    // 0x195890: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_195894:
    // 0x195894: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195898:
    // 0x195898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19589c:
    // 0x19589c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19589cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1958a0:
    // 0x1958a0: 0xc04bce0  jal         func_12F380
label_1958a4:
    if (ctx->pc == 0x1958A4u) {
        ctx->pc = 0x1958A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958A0u;
        // 0x1958a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958A8u;
        goto label_1958a8;
    }
    ctx->pc = 0x1958A0u;
    SET_GPR_U32(ctx, 31, 0x1958A8u);
    ctx->pc = 0x1958A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958A0u;
    // 0x1958a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1958A0u, 0x1958A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958A8u;
label_1958a8:
    // 0x1958a8: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1958ac:
    if (ctx->pc == 0x1958ACu) {
        ctx->pc = 0x1958B0u;
        goto label_1958b0;
    }
    ctx->pc = 0x1958A8u;
    {
        const bool branch_taken_0x1958a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958a8) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1958B0u;
label_1958b0:
    // 0x1958b0: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_1958b4:
    // 0x1958b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1958b8:
    // 0x1958b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1958bc:
    // 0x1958bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1958c0:
    // 0x1958c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1958c4:
    if (ctx->pc == 0x1958C4u) {
        ctx->pc = 0x1958C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958C0u;
        // 0x1958c4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958C8u;
        goto label_1958c8;
    }
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1958C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958C0u;
        // 0x1958c4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958D0u;
            goto label_1958d0;
        }
    }
    ctx->pc = 0x1958C8u;
label_1958c8:
    // 0x1958c8: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1958cc:
    // 0x1958cc: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1958ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_1958d0:
    // 0x1958d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1958d4:
    // 0x1958d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1958d8:
    // 0x1958d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1958d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1958dc:
    // 0x1958dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1958dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1958e0:
    // 0x1958e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1958e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1958e4:
    // 0x1958e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1958e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1958e8:
    // 0x1958e8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1958e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1958ec:
    // 0x1958ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1958ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1958f0:
    // 0x1958f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1958f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1958f4:
    // 0x1958f4: 0xc04bce0  jal         func_12F380
label_1958f8:
    if (ctx->pc == 0x1958F8u) {
        ctx->pc = 0x1958F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F4u;
        // 0x1958f8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958FCu;
        goto label_1958fc;
    }
    ctx->pc = 0x1958F4u;
    SET_GPR_U32(ctx, 31, 0x1958FCu);
    ctx->pc = 0x1958F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958F4u;
    // 0x1958f8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1958F4u, 0x1958FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958FCu;
label_1958fc:
    // 0x1958fc: 0x10000119  b           . + 4 + (0x119 << 2)
label_195900:
    if (ctx->pc == 0x195900u) {
        ctx->pc = 0x195904u;
        goto label_195904;
    }
    ctx->pc = 0x1958FCu;
    {
        const bool branch_taken_0x1958fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958fc) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195904u;
label_195904:
    // 0x195904: 0x0  nop
    ctx->pc = 0x195904u;
    // NOP
label_195908:
    // 0x195908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19590c:
    // 0x19590c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19590cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195910:
    // 0x195910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195914:
    // 0x195914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195918:
    // 0x195918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19591c:
    // 0x19591c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19591cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195920:
    // 0x195920: 0xc04bce0  jal         func_12F380
label_195924:
    if (ctx->pc == 0x195924u) {
        ctx->pc = 0x195924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195920u;
        // 0x195924: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195928u;
        goto label_195928;
    }
    ctx->pc = 0x195920u;
    SET_GPR_U32(ctx, 31, 0x195928u);
    ctx->pc = 0x195924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195920u;
    // 0x195924: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195920u, 0x195928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195928u;
label_195928:
    // 0x195928: 0x1000010e  b           . + 4 + (0x10E << 2)
label_19592c:
    if (ctx->pc == 0x19592Cu) {
        ctx->pc = 0x195930u;
        goto label_195930;
    }
    ctx->pc = 0x195928u;
    {
        const bool branch_taken_0x195928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195928) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195930u;
label_195930:
    // 0x195930: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x195930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195934:
    // 0x195934: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195938:
    // 0x195938: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_19593c:
    if (ctx->pc == 0x19593Cu) {
        ctx->pc = 0x19593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195938u;
        // 0x19593c: 0x8e860328  lw          $a2, 0x328($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195940u;
        goto label_195940;
    }
    ctx->pc = 0x195938u;
    {
        const bool branch_taken_0x195938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195938u;
        // 0x19593c: 0x8e860328  lw          $a2, 0x328($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195938) {
            ctx->pc = 0x195A0Cu;
            goto label_195a0c;
        }
    }
    ctx->pc = 0x195940u;
label_195940:
    // 0x195940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195944:
    // 0x195944: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
label_195948:
    if (ctx->pc == 0x195948u) {
        ctx->pc = 0x19594Cu;
        goto label_19594c;
    }
    ctx->pc = 0x195944u;
    {
        const bool branch_taken_0x195944 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x195944) {
            ctx->pc = 0x1959B8u;
            goto label_1959b8;
        }
    }
    ctx->pc = 0x19594Cu;
label_19594c:
    // 0x19594c: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x19594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_195950:
    // 0x195950: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_195954:
    // 0x195954: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195958:
    // 0x195958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19595c:
    // 0x19595c: 0x10000003  b           . + 4 + (0x3 << 2)
label_195960:
    if (ctx->pc == 0x195960u) {
        ctx->pc = 0x195960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19595Cu;
        // 0x195960: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195964u;
        goto label_195964;
    }
    ctx->pc = 0x19595Cu;
    {
        const bool branch_taken_0x19595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19595Cu;
        // 0x195960: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19595c) {
            ctx->pc = 0x19596Cu;
            goto label_19596c;
        }
    }
    ctx->pc = 0x195964u;
label_195964:
    // 0x195964: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_195968:
    // 0x195968: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_19596c:
    // 0x19596c: 0x0  nop
    ctx->pc = 0x19596cu;
    // NOP
label_195970:
    // 0x195970: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195974:
    // 0x195974: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_195978:
    // 0x195978: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19597c:
    // 0x19597c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
label_195980:
    // 0x195980: 0xc04bf38  jal         func_12FCE0
label_195984:
    if (ctx->pc == 0x195984u) {
        ctx->pc = 0x195984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195980u;
        // 0x195984: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195988u;
        goto label_195988;
    }
    ctx->pc = 0x195980u;
    SET_GPR_U32(ctx, 31, 0x195988u);
    ctx->pc = 0x195984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195980u;
    // 0x195984: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x195980u, 0x195988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195988u;
label_195988:
    // 0x195988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19598c:
    // 0x19598c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x19598cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_195990:
    // 0x195990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195994:
    // 0x195994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195998:
    // 0x195998: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_19599c:
    // 0x19599c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1959a0:
    // 0x1959a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1959a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1959a4:
    // 0x1959a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1959a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1959a8:
    // 0x1959a8: 0xc04bce0  jal         func_12F380
label_1959ac:
    if (ctx->pc == 0x1959ACu) {
        ctx->pc = 0x1959ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A8u;
        // 0x1959ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959B0u;
        goto label_1959b0;
    }
    ctx->pc = 0x1959A8u;
    SET_GPR_U32(ctx, 31, 0x1959B0u);
    ctx->pc = 0x1959ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959A8u;
    // 0x1959ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1959A8u, 0x1959B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959B0u;
label_1959b0:
    // 0x1959b0: 0x100000ec  b           . + 4 + (0xEC << 2)
label_1959b4:
    if (ctx->pc == 0x1959B4u) {
        ctx->pc = 0x1959B8u;
        goto label_1959b8;
    }
    ctx->pc = 0x1959B0u;
    {
        const bool branch_taken_0x1959b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1959b0) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x1959B8u;
label_1959b8:
    // 0x1959b8: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x1959b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_1959bc:
    // 0x1959bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1959c0:
    // 0x1959c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1959c4:
    // 0x1959c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1959c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1959c8:
    // 0x1959c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1959cc:
    if (ctx->pc == 0x1959CCu) {
        ctx->pc = 0x1959CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959C8u;
        // 0x1959cc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959D0u;
        goto label_1959d0;
    }
    ctx->pc = 0x1959C8u;
    {
        const bool branch_taken_0x1959c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959C8u;
        // 0x1959cc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959c8) {
            ctx->pc = 0x1959D8u;
            goto label_1959d8;
        }
    }
    ctx->pc = 0x1959D0u;
label_1959d0:
    // 0x1959d0: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1959d4:
    // 0x1959d4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1959d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_1959d8:
    // 0x1959d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1959d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1959dc:
    // 0x1959dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1959e0:
    // 0x1959e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1959e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1959e4:
    // 0x1959e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1959e8:
    // 0x1959e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1959e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1959ec:
    // 0x1959ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1959ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1959f0:
    // 0x1959f0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1959f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1959f4:
    // 0x1959f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1959f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1959f8:
    // 0x1959f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1959f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1959fc:
    // 0x1959fc: 0xc04bce0  jal         func_12F380
label_195a00:
    if (ctx->pc == 0x195A00u) {
        ctx->pc = 0x195A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959FCu;
        // 0x195a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A04u;
        goto label_195a04;
    }
    ctx->pc = 0x1959FCu;
    SET_GPR_U32(ctx, 31, 0x195A04u);
    ctx->pc = 0x195A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959FCu;
    // 0x195a00: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1959FCu, 0x195A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A04u;
label_195a04:
    // 0x195a04: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_195a08:
    if (ctx->pc == 0x195A08u) {
        ctx->pc = 0x195A0Cu;
        goto label_195a0c;
    }
    ctx->pc = 0x195A04u;
    {
        const bool branch_taken_0x195a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a04) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195A0Cu;
label_195a0c:
    // 0x195a0c: 0x0  nop
    ctx->pc = 0x195a0cu;
    // NOP
label_195a10:
    // 0x195a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195a14:
    // 0x195a14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195a18:
    // 0x195a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195a1c:
    // 0x195a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195a20:
    // 0x195a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195a24:
    // 0x195a24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195a24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195a28:
    // 0x195a28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195a2c:
    // 0x195a2c: 0xc04bce0  jal         func_12F380
label_195a30:
    if (ctx->pc == 0x195A30u) {
        ctx->pc = 0x195A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A2Cu;
        // 0x195a30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A34u;
        goto label_195a34;
    }
    ctx->pc = 0x195A2Cu;
    SET_GPR_U32(ctx, 31, 0x195A34u);
    ctx->pc = 0x195A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A2Cu;
    // 0x195a30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195A2Cu, 0x195A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A34u;
label_195a34:
    // 0x195a34: 0x100000cb  b           . + 4 + (0xCB << 2)
label_195a38:
    if (ctx->pc == 0x195A38u) {
        ctx->pc = 0x195A3Cu;
        goto label_195a3c;
    }
    ctx->pc = 0x195A34u;
    {
        const bool branch_taken_0x195a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a34) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195A3Cu;
label_195a3c:
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
label_195a40:
    // 0x195a40: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195a44:
    // 0x195a44: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195a44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195a48:
    // 0x195a48: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_195a4c:
    if (ctx->pc == 0x195A4Cu) {
        ctx->pc = 0x195A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A48u;
        // 0x195a4c: 0x8e86032c  lw          $a2, 0x32C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A50u;
        goto label_195a50;
    }
    ctx->pc = 0x195A48u;
    {
        const bool branch_taken_0x195a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A48u;
        // 0x195a4c: 0x8e86032c  lw          $a2, 0x32C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a48) {
            ctx->pc = 0x195B1Cu;
            goto label_195b1c;
        }
    }
    ctx->pc = 0x195A50u;
label_195a50:
    // 0x195a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_195a54:
    // 0x195a54: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
label_195a58:
    if (ctx->pc == 0x195A58u) {
        ctx->pc = 0x195A5Cu;
        goto label_195a5c;
    }
    ctx->pc = 0x195A54u;
    {
        const bool branch_taken_0x195a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x195a54) {
            ctx->pc = 0x195AC8u;
            goto label_195ac8;
        }
    }
    ctx->pc = 0x195A5Cu;
label_195a5c:
    // 0x195a5c: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_195a60:
    // 0x195a60: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_195a64:
    // 0x195a64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195a68:
    // 0x195a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195a6c:
    // 0x195a6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_195a70:
    if (ctx->pc == 0x195A70u) {
        ctx->pc = 0x195A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A6Cu;
        // 0x195a70: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A74u;
        goto label_195a74;
    }
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A6Cu;
        // 0x195a70: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195A7Cu;
            goto label_195a7c;
        }
    }
    ctx->pc = 0x195A74u;
label_195a74:
    // 0x195a74: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_195a78:
    // 0x195a78: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195a78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_195a7c:
    // 0x195a7c: 0x0  nop
    ctx->pc = 0x195a7cu;
    // NOP
label_195a80:
    // 0x195a80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195a84:
    // 0x195a84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_195a88:
    // 0x195a88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x195a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_195a8c:
    // 0x195a8c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
label_195a90:
    // 0x195a90: 0xc04bf38  jal         func_12FCE0
label_195a94:
    if (ctx->pc == 0x195A94u) {
        ctx->pc = 0x195A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A90u;
        // 0x195a94: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A98u;
        goto label_195a98;
    }
    ctx->pc = 0x195A90u;
    SET_GPR_U32(ctx, 31, 0x195A98u);
    ctx->pc = 0x195A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A90u;
    // 0x195a94: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x195A90u, 0x195A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A98u;
label_195a98:
    // 0x195a98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195a9c:
    // 0x195a9c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x195a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_195aa0:
    // 0x195aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195aa4:
    // 0x195aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195aa8:
    // 0x195aa8: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x195aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_195aac:
    // 0x195aac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195ab0:
    // 0x195ab0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195ab4:
    // 0x195ab4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195ab4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195ab8:
    // 0x195ab8: 0xc04bce0  jal         func_12F380
label_195abc:
    if (ctx->pc == 0x195ABCu) {
        ctx->pc = 0x195ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AB8u;
        // 0x195abc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AC0u;
        goto label_195ac0;
    }
    ctx->pc = 0x195AB8u;
    SET_GPR_U32(ctx, 31, 0x195AC0u);
    ctx->pc = 0x195ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195AB8u;
    // 0x195abc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195AB8u, 0x195AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AC0u;
label_195ac0:
    // 0x195ac0: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_195ac4:
    if (ctx->pc == 0x195AC4u) {
        ctx->pc = 0x195AC8u;
        goto label_195ac8;
    }
    ctx->pc = 0x195AC0u;
    {
        const bool branch_taken_0x195ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ac0) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195AC8u;
label_195ac8:
    // 0x195ac8: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_195acc:
    // 0x195acc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_195ad0:
    // 0x195ad0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195ad4:
    // 0x195ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195ad8:
    // 0x195ad8: 0x10000003  b           . + 4 + (0x3 << 2)
label_195adc:
    if (ctx->pc == 0x195ADCu) {
        ctx->pc = 0x195ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AD8u;
        // 0x195adc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AE0u;
        goto label_195ae0;
    }
    ctx->pc = 0x195AD8u;
    {
        const bool branch_taken_0x195ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AD8u;
        // 0x195adc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ad8) {
            ctx->pc = 0x195AE8u;
            goto label_195ae8;
        }
    }
    ctx->pc = 0x195AE0u;
label_195ae0:
    // 0x195ae0: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_195ae4:
    // 0x195ae4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
label_195ae8:
    // 0x195ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195aec:
    // 0x195aec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_195af0:
    // 0x195af0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195af4:
    // 0x195af4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195af8:
    // 0x195af8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195afc:
    // 0x195afc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195afcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195b00:
    // 0x195b00: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x195b00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_195b04:
    // 0x195b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195b08:
    // 0x195b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b0c:
    // 0x195b0c: 0xc04bce0  jal         func_12F380
label_195b10:
    if (ctx->pc == 0x195B10u) {
        ctx->pc = 0x195B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B0Cu;
        // 0x195b10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B14u;
        goto label_195b14;
    }
    ctx->pc = 0x195B0Cu;
    SET_GPR_U32(ctx, 31, 0x195B14u);
    ctx->pc = 0x195B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B0Cu;
    // 0x195b10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195B0Cu, 0x195B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B14u;
label_195b14:
    // 0x195b14: 0x10000093  b           . + 4 + (0x93 << 2)
label_195b18:
    if (ctx->pc == 0x195B18u) {
        ctx->pc = 0x195B1Cu;
        goto label_195b1c;
    }
    ctx->pc = 0x195B14u;
    {
        const bool branch_taken_0x195b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b14) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195B1Cu;
label_195b1c:
    // 0x195b1c: 0x0  nop
    ctx->pc = 0x195b1cu;
    // NOP
label_195b20:
    // 0x195b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195b24:
    // 0x195b24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195b28:
    // 0x195b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b2c:
    // 0x195b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b30:
    // 0x195b30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195b34:
    // 0x195b34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195b34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_195b38:
    // 0x195b38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b3c:
    // 0x195b3c: 0xc04bce0  jal         func_12F380
label_195b40:
    if (ctx->pc == 0x195B40u) {
        ctx->pc = 0x195B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B3Cu;
        // 0x195b40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B44u;
        goto label_195b44;
    }
    ctx->pc = 0x195B3Cu;
    SET_GPR_U32(ctx, 31, 0x195B44u);
    ctx->pc = 0x195B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B3Cu;
    // 0x195b40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195B3Cu, 0x195B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B44u;
label_195b44:
    // 0x195b44: 0x10000087  b           . + 4 + (0x87 << 2)
label_195b48:
    if (ctx->pc == 0x195B48u) {
        ctx->pc = 0x195B4Cu;
        goto label_195b4c;
    }
    ctx->pc = 0x195B44u;
    {
        const bool branch_taken_0x195b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b44) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195B4Cu;
label_195b4c:
    // 0x195b4c: 0x0  nop
    ctx->pc = 0x195b4cu;
    // NOP
label_195b50:
    // 0x195b50: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_195b54:
    // 0x195b54: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195b58:
    // 0x195b58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x195b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_195b5c:
    // 0x195b5c: 0xc06cf0c  jal         func_1B3C30
label_195b60:
    if (ctx->pc == 0x195B60u) {
        ctx->pc = 0x195B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B5Cu;
        // 0x195b60: 0x24a5ff98  addiu       $a1, $a1, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B64u;
        goto label_195b64;
    }
    ctx->pc = 0x195B5Cu;
    SET_GPR_U32(ctx, 31, 0x195B64u);
    ctx->pc = 0x195B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B5Cu;
    // 0x195b60: 0x24a5ff98  addiu       $a1, $a1, -0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x195B5Cu, 0x195B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B64u;
label_195b64:
    // 0x195b64: 0x440007f  bltz        $v0, . + 4 + (0x7F << 2)
label_195b68:
    if (ctx->pc == 0x195B68u) {
        ctx->pc = 0x195B6Cu;
        goto label_195b6c;
    }
    ctx->pc = 0x195B64u;
    {
        const bool branch_taken_0x195b64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x195b64) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195B6Cu;
label_195b6c:
    // 0x195b6c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_195b70:
    if (ctx->pc == 0x195B70u) {
        ctx->pc = 0x195B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B6Cu;
        // 0x195b70: 0x8f8386f4  lw          $v1, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B74u;
        goto label_195b74;
    }
    ctx->pc = 0x195B6Cu;
    {
        const bool branch_taken_0x195b6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x195B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B6Cu;
        // 0x195b70: 0x8f8386f4  lw          $v1, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b6c) {
            ctx->pc = 0x195B7Cu;
            goto label_195b7c;
        }
    }
    ctx->pc = 0x195B74u;
label_195b74:
    // 0x195b74: 0x10000008  b           . + 4 + (0x8 << 2)
label_195b78:
    if (ctx->pc == 0x195B78u) {
        ctx->pc = 0x195B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B74u;
        // 0x195b78: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B7Cu;
        goto label_195b7c;
    }
    ctx->pc = 0x195B74u;
    {
        const bool branch_taken_0x195b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B74u;
        // 0x195b78: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195b74) {
            ctx->pc = 0x195B98u;
            goto label_195b98;
        }
    }
    ctx->pc = 0x195B7Cu;
label_195b7c:
    // 0x195b7c: 0x0  nop
    ctx->pc = 0x195b7cu;
    // NOP
label_195b80:
    // 0x195b80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x195b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_195b84:
    // 0x195b84: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_195b88:
    // 0x195b88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x195b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_195b8c:
    // 0x195b8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x195b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_195b90:
    // 0x195b90: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_195b94:
    // 0x195b94: 0x0  nop
    ctx->pc = 0x195b94u;
    // NOP
label_195b98:
    // 0x195b98: 0x18600072  blez        $v1, . + 4 + (0x72 << 2)
label_195b9c:
    if (ctx->pc == 0x195B9Cu) {
        ctx->pc = 0x195BA0u;
        goto label_195ba0;
    }
    ctx->pc = 0x195B98u;
    {
        const bool branch_taken_0x195b98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x195b98) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195BA0u;
label_195ba0:
    // 0x195ba0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_195ba4:
    // 0x195ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x195ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_195ba8:
    // 0x195ba8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x195ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_195bac:
    // 0x195bac: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_195bb0:
    // 0x195bb0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x195bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_195bb4:
    // 0x195bb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x195bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195bb8:
    // 0x195bb8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x195bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_195bbc:
    // 0x195bbc: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x195bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_195bc0:
    // 0x195bc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195bc4:
    // 0x195bc4: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x195bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_195bc8:
    // 0x195bc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_195bcc:
    if (ctx->pc == 0x195BCCu) {
        ctx->pc = 0x195BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BC8u;
        // 0x195bcc: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BD0u;
        goto label_195bd0;
    }
    ctx->pc = 0x195BC8u;
    {
        const bool branch_taken_0x195bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BC8u;
        // 0x195bcc: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bc8) {
            ctx->pc = 0x195BE8u;
            goto label_195be8;
        }
    }
    ctx->pc = 0x195BD0u;
label_195bd0:
    // 0x195bd0: 0xc047a50  jal         func_11E940
label_195bd4:
    if (ctx->pc == 0x195BD4u) {
        ctx->pc = 0x195BD8u;
        goto label_195bd8;
    }
    ctx->pc = 0x195BD0u;
    SET_GPR_U32(ctx, 31, 0x195BD8u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195BD0u, 0x195BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BD8u;
label_195bd8:
    // 0x195bd8: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_195bdc:
    // 0x195bdc: 0xc0478dc  jal         func_11E370
label_195be0:
    if (ctx->pc == 0x195BE0u) {
        ctx->pc = 0x195BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BDCu;
        // 0x195be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BE4u;
        goto label_195be4;
    }
    ctx->pc = 0x195BDCu;
    SET_GPR_U32(ctx, 31, 0x195BE4u);
    ctx->pc = 0x195BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195BDCu;
    // 0x195be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195BDCu, 0x195BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BE4u;
label_195be4:
    // 0x195be4: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195be4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_195be8:
    // 0x195be8: 0xc047a50  jal         func_11E940
label_195bec:
    if (ctx->pc == 0x195BECu) {
        ctx->pc = 0x195BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BE8u;
        // 0x195bec: 0xaf918700  sw          $s1, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BF0u;
        goto label_195bf0;
    }
    ctx->pc = 0x195BE8u;
    SET_GPR_U32(ctx, 31, 0x195BF0u);
    ctx->pc = 0x195BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195BE8u;
    // 0x195bec: 0xaf918700  sw          $s1, -0x7900($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195BE8u, 0x195BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BF0u;
label_195bf0:
    // 0x195bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195bf4:
    // 0x195bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195bf8:
    // 0x195bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195bfc:
    // 0x195bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x195bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195c00:
    // 0x195c00: 0xc047578  jal         func_11D5E0
label_195c04:
    if (ctx->pc == 0x195C04u) {
        ctx->pc = 0x195C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C00u;
        // 0x195c04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C08u;
        goto label_195c08;
    }
    ctx->pc = 0x195C00u;
    SET_GPR_U32(ctx, 31, 0x195C08u);
    ctx->pc = 0x195C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C00u;
    // 0x195c04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D5E0u, 0x195C00u, 0x195C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C08u;
label_195c08:
    // 0x195c08: 0x10000056  b           . + 4 + (0x56 << 2)
label_195c0c:
    if (ctx->pc == 0x195C0Cu) {
        ctx->pc = 0x195C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C08u;
        // 0x195c0c: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C10u;
        goto label_195c10;
    }
    ctx->pc = 0x195C08u;
    {
        const bool branch_taken_0x195c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C08u;
        // 0x195c0c: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c08) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195C10u;
label_195c10:
    // 0x195c10: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_195c14:
    // 0x195c14: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_195c18:
    if (ctx->pc == 0x195C18u) {
        ctx->pc = 0x195C1Cu;
        goto label_195c1c;
    }
    ctx->pc = 0x195C14u;
    {
        const bool branch_taken_0x195c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c14) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195C1Cu;
label_195c1c:
    // 0x195c1c: 0xc047a50  jal         func_11E940
label_195c20:
    if (ctx->pc == 0x195C20u) {
        ctx->pc = 0x195C24u;
        goto label_195c24;
    }
    ctx->pc = 0x195C1Cu;
    SET_GPR_U32(ctx, 31, 0x195C24u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195C1Cu, 0x195C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C24u;
label_195c24:
    // 0x195c24: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_195c28:
    // 0x195c28: 0xc0478dc  jal         func_11E370
label_195c2c:
    if (ctx->pc == 0x195C2Cu) {
        ctx->pc = 0x195C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C28u;
        // 0x195c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C30u;
        goto label_195c30;
    }
    ctx->pc = 0x195C28u;
    SET_GPR_U32(ctx, 31, 0x195C30u);
    ctx->pc = 0x195C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C28u;
    // 0x195c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195C28u, 0x195C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C30u;
label_195c30:
    // 0x195c30: 0x1000004c  b           . + 4 + (0x4C << 2)
label_195c34:
    if (ctx->pc == 0x195C34u) {
        ctx->pc = 0x195C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C30u;
        // 0x195c34: 0xaf8086fc  sw          $zero, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C38u;
        goto label_195c38;
    }
    ctx->pc = 0x195C30u;
    {
        const bool branch_taken_0x195c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C30u;
        // 0x195c34: 0xaf8086fc  sw          $zero, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c30) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195C38u;
label_195c38:
    // 0x195c38: 0x8f8586fc  lw          $a1, -0x7904($gp)
    ctx->pc = 0x195c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_195c3c:
    // 0x195c3c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_195c40:
    if (ctx->pc == 0x195C40u) {
        ctx->pc = 0x195C44u;
        goto label_195c44;
    }
    ctx->pc = 0x195C3Cu;
    {
        const bool branch_taken_0x195c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c3c) {
            ctx->pc = 0x195C80u;
            goto label_195c80;
        }
    }
    ctx->pc = 0x195C44u;
label_195c44:
    // 0x195c44: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_195c48:
    // 0x195c48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x195c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_195c4c:
    // 0x195c4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_195c50:
    if (ctx->pc == 0x195C50u) {
        ctx->pc = 0x195C54u;
        goto label_195c54;
    }
    ctx->pc = 0x195C4Cu;
    {
        const bool branch_taken_0x195c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195c4c) {
            ctx->pc = 0x195C88u;
            goto label_195c88;
        }
    }
    ctx->pc = 0x195C54u;
label_195c54:
    // 0x195c54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_195c58:
    if (ctx->pc == 0x195C58u) {
        ctx->pc = 0x195C5Cu;
        goto label_195c5c;
    }
    ctx->pc = 0x195C54u;
    {
        const bool branch_taken_0x195c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c54) {
            ctx->pc = 0x195C74u;
            goto label_195c74;
        }
    }
    ctx->pc = 0x195C5Cu;
label_195c5c:
    // 0x195c5c: 0xc047a50  jal         func_11E940
label_195c60:
    if (ctx->pc == 0x195C60u) {
        ctx->pc = 0x195C64u;
        goto label_195c64;
    }
    ctx->pc = 0x195C5Cu;
    SET_GPR_U32(ctx, 31, 0x195C64u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195C5Cu, 0x195C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C64u;
label_195c64:
    // 0x195c64: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_195c68:
    // 0x195c68: 0xc0478dc  jal         func_11E370
label_195c6c:
    if (ctx->pc == 0x195C6Cu) {
        ctx->pc = 0x195C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C68u;
        // 0x195c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C70u;
        goto label_195c70;
    }
    ctx->pc = 0x195C68u;
    SET_GPR_U32(ctx, 31, 0x195C70u);
    ctx->pc = 0x195C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C68u;
    // 0x195c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195C68u, 0x195C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C70u;
label_195c70:
    // 0x195c70: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195c70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_195c74:
    // 0x195c74: 0x0  nop
    ctx->pc = 0x195c74u;
    // NOP
label_195c78:
    // 0x195c78: 0x10000004  b           . + 4 + (0x4 << 2)
label_195c7c:
    if (ctx->pc == 0x195C7Cu) {
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C78u;
        // 0x195c7c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C80u;
        goto label_195c80;
    }
    ctx->pc = 0x195C78u;
    {
        const bool branch_taken_0x195c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C78u;
        // 0x195c7c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c78) {
            ctx->pc = 0x195C8Cu;
            goto label_195c8c;
        }
    }
    ctx->pc = 0x195C80u;
label_195c80:
    // 0x195c80: 0x10000002  b           . + 4 + (0x2 << 2)
label_195c84:
    if (ctx->pc == 0x195C84u) {
        ctx->pc = 0x195C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C80u;
        // 0x195c84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C88u;
        goto label_195c88;
    }
    ctx->pc = 0x195C80u;
    {
        const bool branch_taken_0x195c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C80u;
        // 0x195c84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195c80) {
            ctx->pc = 0x195C8Cu;
            goto label_195c8c;
        }
    }
    ctx->pc = 0x195C88u;
label_195c88:
    // 0x195c88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x195c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195c8c:
    // 0x195c8c: 0x0  nop
    ctx->pc = 0x195c8cu;
    // NOP
label_195c90:
    // 0x195c90: 0x10000034  b           . + 4 + (0x34 << 2)
label_195c94:
    if (ctx->pc == 0x195C94u) {
        ctx->pc = 0x195C98u;
        goto label_195c98;
    }
    ctx->pc = 0x195C90u;
    {
        const bool branch_taken_0x195c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c90) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195C98u;
label_195c98:
    // 0x195c98: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_195c9c:
    // 0x195c9c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195ca0:
    // 0x195ca0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195ca4:
    // 0x195ca4: 0xc0546f0  jal         func_151BC0
label_195ca8:
    if (ctx->pc == 0x195CA8u) {
        ctx->pc = 0x195CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CA4u;
        // 0x195ca8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CACu;
        goto label_195cac;
    }
    ctx->pc = 0x195CA4u;
    SET_GPR_U32(ctx, 31, 0x195CACu);
    ctx->pc = 0x195CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CA4u;
    // 0x195ca8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x195CA4u, 0x195CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CACu;
label_195cac:
    // 0x195cac: 0x1000002d  b           . + 4 + (0x2D << 2)
label_195cb0:
    if (ctx->pc == 0x195CB0u) {
        ctx->pc = 0x195CB4u;
        goto label_195cb4;
    }
    ctx->pc = 0x195CACu;
    {
        const bool branch_taken_0x195cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cac) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195CB4u;
label_195cb4:
    // 0x195cb4: 0x0  nop
    ctx->pc = 0x195cb4u;
    // NOP
label_195cb8:
    // 0x195cb8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195cbc:
    // 0x195cbc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195cc0:
    // 0x195cc0: 0xc054710  jal         func_151C40
label_195cc4:
    if (ctx->pc == 0x195CC4u) {
        ctx->pc = 0x195CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CC0u;
        // 0x195cc4: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CC8u;
        goto label_195cc8;
    }
    ctx->pc = 0x195CC0u;
    SET_GPR_U32(ctx, 31, 0x195CC8u);
    ctx->pc = 0x195CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CC0u;
    // 0x195cc4: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C40u, 0x195CC0u, 0x195CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CC8u;
label_195cc8:
    // 0x195cc8: 0x10000026  b           . + 4 + (0x26 << 2)
label_195ccc:
    if (ctx->pc == 0x195CCCu) {
        ctx->pc = 0x195CD0u;
        goto label_195cd0;
    }
    ctx->pc = 0x195CC8u;
    {
        const bool branch_taken_0x195cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cc8) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195CD0u;
label_195cd0:
    // 0x195cd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x195cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195cd4:
    // 0x195cd4: 0xc05473c  jal         func_151CF0
label_195cd8:
    if (ctx->pc == 0x195CD8u) {
        ctx->pc = 0x195CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CD4u;
        // 0x195cd8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CDCu;
        goto label_195cdc;
    }
    ctx->pc = 0x195CD4u;
    SET_GPR_U32(ctx, 31, 0x195CDCu);
    ctx->pc = 0x195CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CD4u;
    // 0x195cd8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CF0u, 0x195CD4u, 0x195CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CDCu;
label_195cdc:
    // 0x195cdc: 0x10000021  b           . + 4 + (0x21 << 2)
label_195ce0:
    if (ctx->pc == 0x195CE0u) {
        ctx->pc = 0x195CE4u;
        goto label_195ce4;
    }
    ctx->pc = 0x195CDCu;
    {
        const bool branch_taken_0x195cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cdc) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195CE4u;
label_195ce4:
    // 0x195ce4: 0x0  nop
    ctx->pc = 0x195ce4u;
    // NOP
label_195ce8:
    // 0x195ce8: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195cec:
    // 0x195cec: 0xc05f58c  jal         func_17D630
label_195cf0:
    if (ctx->pc == 0x195CF0u) {
        ctx->pc = 0x195CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CECu;
        // 0x195cf0: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CF4u;
        goto label_195cf4;
    }
    ctx->pc = 0x195CECu;
    SET_GPR_U32(ctx, 31, 0x195CF4u);
    ctx->pc = 0x195CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CECu;
    // 0x195cf0: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x195CECu, 0x195CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CF4u;
label_195cf4:
    // 0x195cf4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_195cf8:
    // 0x195cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195cfc:
    // 0x195cfc: 0x2442f270  addiu       $v0, $v0, -0xD90
    ctx->pc = 0x195cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963824));
label_195d00:
    // 0x195d00: 0x40f809  jalr        $v0
label_195d04:
    if (ctx->pc == 0x195D04u) {
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D08u;
        goto label_195d08;
    }
    ctx->pc = 0x195D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D08u);
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D00u, 0x195D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D08u;
label_195d08:
    // 0x195d08: 0x10000016  b           . + 4 + (0x16 << 2)
label_195d0c:
    if (ctx->pc == 0x195D0Cu) {
        ctx->pc = 0x195D10u;
        goto label_195d10;
    }
    ctx->pc = 0x195D08u;
    {
        const bool branch_taken_0x195d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d08) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195D10u;
label_195d10:
    // 0x195d10: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195d14:
    // 0x195d14: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195d18:
    // 0x195d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195d1c:
    // 0x195d1c: 0x8f91831c  lw          $s1, -0x7CE4($gp)
    ctx->pc = 0x195d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
label_195d20:
    // 0x195d20: 0x9072002e  lbu         $s2, 0x2E($v1)
    ctx->pc = 0x195d20u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_195d24:
    // 0x195d24: 0xaf82831c  sw          $v0, -0x7CE4($gp)
    ctx->pc = 0x195d24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 2));
label_195d28:
    // 0x195d28: 0xa062002e  sb          $v0, 0x2E($v1)
    ctx->pc = 0x195d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 2));
label_195d2c:
    // 0x195d2c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195d30:
    // 0x195d30: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_195d34:
    // 0x195d34: 0xa06201d3  sb          $v0, 0x1D3($v1)
    ctx->pc = 0x195d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 2));
label_195d38:
    // 0x195d38: 0xc046280  jal         func_118A00
label_195d3c:
    if (ctx->pc == 0x195D3Cu) {
        ctx->pc = 0x195D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D38u;
        // 0x195d3c: 0x8f8483a0  lw          $a0, -0x7C60($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D40u;
        goto label_195d40;
    }
    ctx->pc = 0x195D38u;
    SET_GPR_U32(ctx, 31, 0x195D40u);
    ctx->pc = 0x195D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D38u;
    // 0x195d3c: 0x8f8483a0  lw          $a0, -0x7C60($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A00u, 0x195D38u, 0x195D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D40u;
label_195d40:
    // 0x195d40: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195d44:
    // 0x195d44: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x195d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_195d48:
    // 0x195d48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_195d4c:
    if (ctx->pc == 0x195D4Cu) {
        ctx->pc = 0x195D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D48u;
        // 0x195d4c: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D50u;
        goto label_195d50;
    }
    ctx->pc = 0x195D48u;
    {
        const bool branch_taken_0x195d48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x195D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D48u;
        // 0x195d4c: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d48) {
            ctx->pc = 0x195D58u;
            goto label_195d58;
        }
    }
    ctx->pc = 0x195D50u;
label_195d50:
    // 0x195d50: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195d54:
    // 0x195d54: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x195d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
label_195d58:
    // 0x195d58: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
label_195d5c:
    if (ctx->pc == 0x195D5Cu) {
        ctx->pc = 0x195D60u;
        goto label_195d60;
    }
    ctx->pc = 0x195D58u;
    {
        const bool branch_taken_0x195d58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d58) {
            ctx->pc = 0x195D64u;
            goto label_195d64;
        }
    }
    ctx->pc = 0x195D60u;
label_195d60:
    // 0x195d60: 0xaf80831c  sw          $zero, -0x7CE4($gp)
    ctx->pc = 0x195d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 0));
label_195d64:
    // 0x195d64: 0x0  nop
    ctx->pc = 0x195d64u;
    // NOP
label_195d68:
    // 0x195d68: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_195d6c:
    if (ctx->pc == 0x195D6Cu) {
        ctx->pc = 0x195D70u;
        goto label_195d70;
    }
    ctx->pc = 0x195D68u;
    {
        const bool branch_taken_0x195d68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d68) {
            ctx->pc = 0x195D74u;
            goto label_195d74;
        }
    }
    ctx->pc = 0x195D70u;
label_195d70:
    // 0x195d70: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x195d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_195d74:
    // 0x195d74: 0x0  nop
    ctx->pc = 0x195d74u;
    // NOP
label_195d78:
    // 0x195d78: 0x1660f98c  bnez        $s3, . + 4 + (-0x674 << 2)
label_195d7c:
    if (ctx->pc == 0x195D7Cu) {
        ctx->pc = 0x195D80u;
        goto label_195d80;
    }
    ctx->pc = 0x195D78u;
    {
        const bool branch_taken_0x195d78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d78) {
            ctx->pc = 0x1943ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1943ac;
        }
    }
    ctx->pc = 0x195D80u;
label_195d80:
    // 0x195d80: 0xae900664  sw          $s0, 0x664($s4)
    ctx->pc = 0x195d80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 16));
label_195d84:
    // 0x195d84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x195d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_195d88:
    // 0x195d88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x195d88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_195d8c:
    // 0x195d8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x195d8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_195d90:
    // 0x195d90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x195d90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_195d94:
    // 0x195d94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195d98:
    // 0x195d98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195d9c:
    // 0x195d9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195da0:
    // 0x195da0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195da4:
    // 0x195da4: 0x3e00008  jr          $ra
label_195da8:
    if (ctx->pc == 0x195DA8u) {
        ctx->pc = 0x195DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DA4u;
        // 0x195da8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195DACu;
        goto label_fallthrough_0x195da4;
    }
    ctx->pc = 0x195DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DA4u;
        // 0x195da8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195da4:
    ctx->pc = 0x195DACu;
}
