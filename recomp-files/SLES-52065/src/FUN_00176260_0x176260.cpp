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

// Function: FUN_00176260
// Address: 0x176260 - 0x176adc
void FUN_00176260_0x176260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176260_0x176260");
#endif

    switch (ctx->pc) {
        case 0x176260u: goto label_176260;
        case 0x176264u: goto label_176264;
        case 0x176268u: goto label_176268;
        case 0x17626cu: goto label_17626c;
        case 0x176270u: goto label_176270;
        case 0x176274u: goto label_176274;
        case 0x176278u: goto label_176278;
        case 0x17627cu: goto label_17627c;
        case 0x176280u: goto label_176280;
        case 0x176284u: goto label_176284;
        case 0x176288u: goto label_176288;
        case 0x17628cu: goto label_17628c;
        case 0x176290u: goto label_176290;
        case 0x176294u: goto label_176294;
        case 0x176298u: goto label_176298;
        case 0x17629cu: goto label_17629c;
        case 0x1762a0u: goto label_1762a0;
        case 0x1762a4u: goto label_1762a4;
        case 0x1762a8u: goto label_1762a8;
        case 0x1762acu: goto label_1762ac;
        case 0x1762b0u: goto label_1762b0;
        case 0x1762b4u: goto label_1762b4;
        case 0x1762b8u: goto label_1762b8;
        case 0x1762bcu: goto label_1762bc;
        case 0x1762c0u: goto label_1762c0;
        case 0x1762c4u: goto label_1762c4;
        case 0x1762c8u: goto label_1762c8;
        case 0x1762ccu: goto label_1762cc;
        case 0x1762d0u: goto label_1762d0;
        case 0x1762d4u: goto label_1762d4;
        case 0x1762d8u: goto label_1762d8;
        case 0x1762dcu: goto label_1762dc;
        case 0x1762e0u: goto label_1762e0;
        case 0x1762e4u: goto label_1762e4;
        case 0x1762e8u: goto label_1762e8;
        case 0x1762ecu: goto label_1762ec;
        case 0x1762f0u: goto label_1762f0;
        case 0x1762f4u: goto label_1762f4;
        case 0x1762f8u: goto label_1762f8;
        case 0x1762fcu: goto label_1762fc;
        case 0x176300u: goto label_176300;
        case 0x176304u: goto label_176304;
        case 0x176308u: goto label_176308;
        case 0x17630cu: goto label_17630c;
        case 0x176310u: goto label_176310;
        case 0x176314u: goto label_176314;
        case 0x176318u: goto label_176318;
        case 0x17631cu: goto label_17631c;
        case 0x176320u: goto label_176320;
        case 0x176324u: goto label_176324;
        case 0x176328u: goto label_176328;
        case 0x17632cu: goto label_17632c;
        case 0x176330u: goto label_176330;
        case 0x176334u: goto label_176334;
        case 0x176338u: goto label_176338;
        case 0x17633cu: goto label_17633c;
        case 0x176340u: goto label_176340;
        case 0x176344u: goto label_176344;
        case 0x176348u: goto label_176348;
        case 0x17634cu: goto label_17634c;
        case 0x176350u: goto label_176350;
        case 0x176354u: goto label_176354;
        case 0x176358u: goto label_176358;
        case 0x17635cu: goto label_17635c;
        case 0x176360u: goto label_176360;
        case 0x176364u: goto label_176364;
        case 0x176368u: goto label_176368;
        case 0x17636cu: goto label_17636c;
        case 0x176370u: goto label_176370;
        case 0x176374u: goto label_176374;
        case 0x176378u: goto label_176378;
        case 0x17637cu: goto label_17637c;
        case 0x176380u: goto label_176380;
        case 0x176384u: goto label_176384;
        case 0x176388u: goto label_176388;
        case 0x17638cu: goto label_17638c;
        case 0x176390u: goto label_176390;
        case 0x176394u: goto label_176394;
        case 0x176398u: goto label_176398;
        case 0x17639cu: goto label_17639c;
        case 0x1763a0u: goto label_1763a0;
        case 0x1763a4u: goto label_1763a4;
        case 0x1763a8u: goto label_1763a8;
        case 0x1763acu: goto label_1763ac;
        case 0x1763b0u: goto label_1763b0;
        case 0x1763b4u: goto label_1763b4;
        case 0x1763b8u: goto label_1763b8;
        case 0x1763bcu: goto label_1763bc;
        case 0x1763c0u: goto label_1763c0;
        case 0x1763c4u: goto label_1763c4;
        case 0x1763c8u: goto label_1763c8;
        case 0x1763ccu: goto label_1763cc;
        case 0x1763d0u: goto label_1763d0;
        case 0x1763d4u: goto label_1763d4;
        case 0x1763d8u: goto label_1763d8;
        case 0x1763dcu: goto label_1763dc;
        case 0x1763e0u: goto label_1763e0;
        case 0x1763e4u: goto label_1763e4;
        case 0x1763e8u: goto label_1763e8;
        case 0x1763ecu: goto label_1763ec;
        case 0x1763f0u: goto label_1763f0;
        case 0x1763f4u: goto label_1763f4;
        case 0x1763f8u: goto label_1763f8;
        case 0x1763fcu: goto label_1763fc;
        case 0x176400u: goto label_176400;
        case 0x176404u: goto label_176404;
        case 0x176408u: goto label_176408;
        case 0x17640cu: goto label_17640c;
        case 0x176410u: goto label_176410;
        case 0x176414u: goto label_176414;
        case 0x176418u: goto label_176418;
        case 0x17641cu: goto label_17641c;
        case 0x176420u: goto label_176420;
        case 0x176424u: goto label_176424;
        case 0x176428u: goto label_176428;
        case 0x17642cu: goto label_17642c;
        case 0x176430u: goto label_176430;
        case 0x176434u: goto label_176434;
        case 0x176438u: goto label_176438;
        case 0x17643cu: goto label_17643c;
        case 0x176440u: goto label_176440;
        case 0x176444u: goto label_176444;
        case 0x176448u: goto label_176448;
        case 0x17644cu: goto label_17644c;
        case 0x176450u: goto label_176450;
        case 0x176454u: goto label_176454;
        case 0x176458u: goto label_176458;
        case 0x17645cu: goto label_17645c;
        case 0x176460u: goto label_176460;
        case 0x176464u: goto label_176464;
        case 0x176468u: goto label_176468;
        case 0x17646cu: goto label_17646c;
        case 0x176470u: goto label_176470;
        case 0x176474u: goto label_176474;
        case 0x176478u: goto label_176478;
        case 0x17647cu: goto label_17647c;
        case 0x176480u: goto label_176480;
        case 0x176484u: goto label_176484;
        case 0x176488u: goto label_176488;
        case 0x17648cu: goto label_17648c;
        case 0x176490u: goto label_176490;
        case 0x176494u: goto label_176494;
        case 0x176498u: goto label_176498;
        case 0x17649cu: goto label_17649c;
        case 0x1764a0u: goto label_1764a0;
        case 0x1764a4u: goto label_1764a4;
        case 0x1764a8u: goto label_1764a8;
        case 0x1764acu: goto label_1764ac;
        case 0x1764b0u: goto label_1764b0;
        case 0x1764b4u: goto label_1764b4;
        case 0x1764b8u: goto label_1764b8;
        case 0x1764bcu: goto label_1764bc;
        case 0x1764c0u: goto label_1764c0;
        case 0x1764c4u: goto label_1764c4;
        case 0x1764c8u: goto label_1764c8;
        case 0x1764ccu: goto label_1764cc;
        case 0x1764d0u: goto label_1764d0;
        case 0x1764d4u: goto label_1764d4;
        case 0x1764d8u: goto label_1764d8;
        case 0x1764dcu: goto label_1764dc;
        case 0x1764e0u: goto label_1764e0;
        case 0x1764e4u: goto label_1764e4;
        case 0x1764e8u: goto label_1764e8;
        case 0x1764ecu: goto label_1764ec;
        case 0x1764f0u: goto label_1764f0;
        case 0x1764f4u: goto label_1764f4;
        case 0x1764f8u: goto label_1764f8;
        case 0x1764fcu: goto label_1764fc;
        case 0x176500u: goto label_176500;
        case 0x176504u: goto label_176504;
        case 0x176508u: goto label_176508;
        case 0x17650cu: goto label_17650c;
        case 0x176510u: goto label_176510;
        case 0x176514u: goto label_176514;
        case 0x176518u: goto label_176518;
        case 0x17651cu: goto label_17651c;
        case 0x176520u: goto label_176520;
        case 0x176524u: goto label_176524;
        case 0x176528u: goto label_176528;
        case 0x17652cu: goto label_17652c;
        case 0x176530u: goto label_176530;
        case 0x176534u: goto label_176534;
        case 0x176538u: goto label_176538;
        case 0x17653cu: goto label_17653c;
        case 0x176540u: goto label_176540;
        case 0x176544u: goto label_176544;
        case 0x176548u: goto label_176548;
        case 0x17654cu: goto label_17654c;
        case 0x176550u: goto label_176550;
        case 0x176554u: goto label_176554;
        case 0x176558u: goto label_176558;
        case 0x17655cu: goto label_17655c;
        case 0x176560u: goto label_176560;
        case 0x176564u: goto label_176564;
        case 0x176568u: goto label_176568;
        case 0x17656cu: goto label_17656c;
        case 0x176570u: goto label_176570;
        case 0x176574u: goto label_176574;
        case 0x176578u: goto label_176578;
        case 0x17657cu: goto label_17657c;
        case 0x176580u: goto label_176580;
        case 0x176584u: goto label_176584;
        case 0x176588u: goto label_176588;
        case 0x17658cu: goto label_17658c;
        case 0x176590u: goto label_176590;
        case 0x176594u: goto label_176594;
        case 0x176598u: goto label_176598;
        case 0x17659cu: goto label_17659c;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765a8u: goto label_1765a8;
        case 0x1765acu: goto label_1765ac;
        case 0x1765b0u: goto label_1765b0;
        case 0x1765b4u: goto label_1765b4;
        case 0x1765b8u: goto label_1765b8;
        case 0x1765bcu: goto label_1765bc;
        case 0x1765c0u: goto label_1765c0;
        case 0x1765c4u: goto label_1765c4;
        case 0x1765c8u: goto label_1765c8;
        case 0x1765ccu: goto label_1765cc;
        case 0x1765d0u: goto label_1765d0;
        case 0x1765d4u: goto label_1765d4;
        case 0x1765d8u: goto label_1765d8;
        case 0x1765dcu: goto label_1765dc;
        case 0x1765e0u: goto label_1765e0;
        case 0x1765e4u: goto label_1765e4;
        case 0x1765e8u: goto label_1765e8;
        case 0x1765ecu: goto label_1765ec;
        case 0x1765f0u: goto label_1765f0;
        case 0x1765f4u: goto label_1765f4;
        case 0x1765f8u: goto label_1765f8;
        case 0x1765fcu: goto label_1765fc;
        case 0x176600u: goto label_176600;
        case 0x176604u: goto label_176604;
        case 0x176608u: goto label_176608;
        case 0x17660cu: goto label_17660c;
        case 0x176610u: goto label_176610;
        case 0x176614u: goto label_176614;
        case 0x176618u: goto label_176618;
        case 0x17661cu: goto label_17661c;
        case 0x176620u: goto label_176620;
        case 0x176624u: goto label_176624;
        case 0x176628u: goto label_176628;
        case 0x17662cu: goto label_17662c;
        case 0x176630u: goto label_176630;
        case 0x176634u: goto label_176634;
        case 0x176638u: goto label_176638;
        case 0x17663cu: goto label_17663c;
        case 0x176640u: goto label_176640;
        case 0x176644u: goto label_176644;
        case 0x176648u: goto label_176648;
        case 0x17664cu: goto label_17664c;
        case 0x176650u: goto label_176650;
        case 0x176654u: goto label_176654;
        case 0x176658u: goto label_176658;
        case 0x17665cu: goto label_17665c;
        case 0x176660u: goto label_176660;
        case 0x176664u: goto label_176664;
        case 0x176668u: goto label_176668;
        case 0x17666cu: goto label_17666c;
        case 0x176670u: goto label_176670;
        case 0x176674u: goto label_176674;
        case 0x176678u: goto label_176678;
        case 0x17667cu: goto label_17667c;
        case 0x176680u: goto label_176680;
        case 0x176684u: goto label_176684;
        case 0x176688u: goto label_176688;
        case 0x17668cu: goto label_17668c;
        case 0x176690u: goto label_176690;
        case 0x176694u: goto label_176694;
        case 0x176698u: goto label_176698;
        case 0x17669cu: goto label_17669c;
        case 0x1766a0u: goto label_1766a0;
        case 0x1766a4u: goto label_1766a4;
        case 0x1766a8u: goto label_1766a8;
        case 0x1766acu: goto label_1766ac;
        case 0x1766b0u: goto label_1766b0;
        case 0x1766b4u: goto label_1766b4;
        case 0x1766b8u: goto label_1766b8;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766c0u: goto label_1766c0;
        case 0x1766c4u: goto label_1766c4;
        case 0x1766c8u: goto label_1766c8;
        case 0x1766ccu: goto label_1766cc;
        case 0x1766d0u: goto label_1766d0;
        case 0x1766d4u: goto label_1766d4;
        case 0x1766d8u: goto label_1766d8;
        case 0x1766dcu: goto label_1766dc;
        case 0x1766e0u: goto label_1766e0;
        case 0x1766e4u: goto label_1766e4;
        case 0x1766e8u: goto label_1766e8;
        case 0x1766ecu: goto label_1766ec;
        case 0x1766f0u: goto label_1766f0;
        case 0x1766f4u: goto label_1766f4;
        case 0x1766f8u: goto label_1766f8;
        case 0x1766fcu: goto label_1766fc;
        case 0x176700u: goto label_176700;
        case 0x176704u: goto label_176704;
        case 0x176708u: goto label_176708;
        case 0x17670cu: goto label_17670c;
        case 0x176710u: goto label_176710;
        case 0x176714u: goto label_176714;
        case 0x176718u: goto label_176718;
        case 0x17671cu: goto label_17671c;
        case 0x176720u: goto label_176720;
        case 0x176724u: goto label_176724;
        case 0x176728u: goto label_176728;
        case 0x17672cu: goto label_17672c;
        case 0x176730u: goto label_176730;
        case 0x176734u: goto label_176734;
        case 0x176738u: goto label_176738;
        case 0x17673cu: goto label_17673c;
        case 0x176740u: goto label_176740;
        case 0x176744u: goto label_176744;
        case 0x176748u: goto label_176748;
        case 0x17674cu: goto label_17674c;
        case 0x176750u: goto label_176750;
        case 0x176754u: goto label_176754;
        case 0x176758u: goto label_176758;
        case 0x17675cu: goto label_17675c;
        case 0x176760u: goto label_176760;
        case 0x176764u: goto label_176764;
        case 0x176768u: goto label_176768;
        case 0x17676cu: goto label_17676c;
        case 0x176770u: goto label_176770;
        case 0x176774u: goto label_176774;
        case 0x176778u: goto label_176778;
        case 0x17677cu: goto label_17677c;
        case 0x176780u: goto label_176780;
        case 0x176784u: goto label_176784;
        case 0x176788u: goto label_176788;
        case 0x17678cu: goto label_17678c;
        case 0x176790u: goto label_176790;
        case 0x176794u: goto label_176794;
        case 0x176798u: goto label_176798;
        case 0x17679cu: goto label_17679c;
        case 0x1767a0u: goto label_1767a0;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767a8u: goto label_1767a8;
        case 0x1767acu: goto label_1767ac;
        case 0x1767b0u: goto label_1767b0;
        case 0x1767b4u: goto label_1767b4;
        case 0x1767b8u: goto label_1767b8;
        case 0x1767bcu: goto label_1767bc;
        case 0x1767c0u: goto label_1767c0;
        case 0x1767c4u: goto label_1767c4;
        case 0x1767c8u: goto label_1767c8;
        case 0x1767ccu: goto label_1767cc;
        case 0x1767d0u: goto label_1767d0;
        case 0x1767d4u: goto label_1767d4;
        case 0x1767d8u: goto label_1767d8;
        case 0x1767dcu: goto label_1767dc;
        case 0x1767e0u: goto label_1767e0;
        case 0x1767e4u: goto label_1767e4;
        case 0x1767e8u: goto label_1767e8;
        case 0x1767ecu: goto label_1767ec;
        case 0x1767f0u: goto label_1767f0;
        case 0x1767f4u: goto label_1767f4;
        case 0x1767f8u: goto label_1767f8;
        case 0x1767fcu: goto label_1767fc;
        case 0x176800u: goto label_176800;
        case 0x176804u: goto label_176804;
        case 0x176808u: goto label_176808;
        case 0x17680cu: goto label_17680c;
        case 0x176810u: goto label_176810;
        case 0x176814u: goto label_176814;
        case 0x176818u: goto label_176818;
        case 0x17681cu: goto label_17681c;
        case 0x176820u: goto label_176820;
        case 0x176824u: goto label_176824;
        case 0x176828u: goto label_176828;
        case 0x17682cu: goto label_17682c;
        case 0x176830u: goto label_176830;
        case 0x176834u: goto label_176834;
        case 0x176838u: goto label_176838;
        case 0x17683cu: goto label_17683c;
        case 0x176840u: goto label_176840;
        case 0x176844u: goto label_176844;
        case 0x176848u: goto label_176848;
        case 0x17684cu: goto label_17684c;
        case 0x176850u: goto label_176850;
        case 0x176854u: goto label_176854;
        case 0x176858u: goto label_176858;
        case 0x17685cu: goto label_17685c;
        case 0x176860u: goto label_176860;
        case 0x176864u: goto label_176864;
        case 0x176868u: goto label_176868;
        case 0x17686cu: goto label_17686c;
        case 0x176870u: goto label_176870;
        case 0x176874u: goto label_176874;
        case 0x176878u: goto label_176878;
        case 0x17687cu: goto label_17687c;
        case 0x176880u: goto label_176880;
        case 0x176884u: goto label_176884;
        case 0x176888u: goto label_176888;
        case 0x17688cu: goto label_17688c;
        case 0x176890u: goto label_176890;
        case 0x176894u: goto label_176894;
        case 0x176898u: goto label_176898;
        case 0x17689cu: goto label_17689c;
        case 0x1768a0u: goto label_1768a0;
        case 0x1768a4u: goto label_1768a4;
        case 0x1768a8u: goto label_1768a8;
        case 0x1768acu: goto label_1768ac;
        case 0x1768b0u: goto label_1768b0;
        case 0x1768b4u: goto label_1768b4;
        case 0x1768b8u: goto label_1768b8;
        case 0x1768bcu: goto label_1768bc;
        case 0x1768c0u: goto label_1768c0;
        case 0x1768c4u: goto label_1768c4;
        case 0x1768c8u: goto label_1768c8;
        case 0x1768ccu: goto label_1768cc;
        case 0x1768d0u: goto label_1768d0;
        case 0x1768d4u: goto label_1768d4;
        case 0x1768d8u: goto label_1768d8;
        case 0x1768dcu: goto label_1768dc;
        case 0x1768e0u: goto label_1768e0;
        case 0x1768e4u: goto label_1768e4;
        case 0x1768e8u: goto label_1768e8;
        case 0x1768ecu: goto label_1768ec;
        case 0x1768f0u: goto label_1768f0;
        case 0x1768f4u: goto label_1768f4;
        case 0x1768f8u: goto label_1768f8;
        case 0x1768fcu: goto label_1768fc;
        case 0x176900u: goto label_176900;
        case 0x176904u: goto label_176904;
        case 0x176908u: goto label_176908;
        case 0x17690cu: goto label_17690c;
        case 0x176910u: goto label_176910;
        case 0x176914u: goto label_176914;
        case 0x176918u: goto label_176918;
        case 0x17691cu: goto label_17691c;
        case 0x176920u: goto label_176920;
        case 0x176924u: goto label_176924;
        case 0x176928u: goto label_176928;
        case 0x17692cu: goto label_17692c;
        case 0x176930u: goto label_176930;
        case 0x176934u: goto label_176934;
        case 0x176938u: goto label_176938;
        case 0x17693cu: goto label_17693c;
        case 0x176940u: goto label_176940;
        case 0x176944u: goto label_176944;
        case 0x176948u: goto label_176948;
        case 0x17694cu: goto label_17694c;
        case 0x176950u: goto label_176950;
        case 0x176954u: goto label_176954;
        case 0x176958u: goto label_176958;
        case 0x17695cu: goto label_17695c;
        case 0x176960u: goto label_176960;
        case 0x176964u: goto label_176964;
        case 0x176968u: goto label_176968;
        case 0x17696cu: goto label_17696c;
        case 0x176970u: goto label_176970;
        case 0x176974u: goto label_176974;
        case 0x176978u: goto label_176978;
        case 0x17697cu: goto label_17697c;
        case 0x176980u: goto label_176980;
        case 0x176984u: goto label_176984;
        case 0x176988u: goto label_176988;
        case 0x17698cu: goto label_17698c;
        case 0x176990u: goto label_176990;
        case 0x176994u: goto label_176994;
        case 0x176998u: goto label_176998;
        case 0x17699cu: goto label_17699c;
        case 0x1769a0u: goto label_1769a0;
        case 0x1769a4u: goto label_1769a4;
        case 0x1769a8u: goto label_1769a8;
        case 0x1769acu: goto label_1769ac;
        case 0x1769b0u: goto label_1769b0;
        case 0x1769b4u: goto label_1769b4;
        case 0x1769b8u: goto label_1769b8;
        case 0x1769bcu: goto label_1769bc;
        case 0x1769c0u: goto label_1769c0;
        case 0x1769c4u: goto label_1769c4;
        case 0x1769c8u: goto label_1769c8;
        case 0x1769ccu: goto label_1769cc;
        case 0x1769d0u: goto label_1769d0;
        case 0x1769d4u: goto label_1769d4;
        case 0x1769d8u: goto label_1769d8;
        case 0x1769dcu: goto label_1769dc;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769e4u: goto label_1769e4;
        case 0x1769e8u: goto label_1769e8;
        case 0x1769ecu: goto label_1769ec;
        case 0x1769f0u: goto label_1769f0;
        case 0x1769f4u: goto label_1769f4;
        case 0x1769f8u: goto label_1769f8;
        case 0x1769fcu: goto label_1769fc;
        case 0x176a00u: goto label_176a00;
        case 0x176a04u: goto label_176a04;
        case 0x176a08u: goto label_176a08;
        case 0x176a0cu: goto label_176a0c;
        case 0x176a10u: goto label_176a10;
        case 0x176a14u: goto label_176a14;
        case 0x176a18u: goto label_176a18;
        case 0x176a1cu: goto label_176a1c;
        case 0x176a20u: goto label_176a20;
        case 0x176a24u: goto label_176a24;
        case 0x176a28u: goto label_176a28;
        case 0x176a2cu: goto label_176a2c;
        case 0x176a30u: goto label_176a30;
        case 0x176a34u: goto label_176a34;
        case 0x176a38u: goto label_176a38;
        case 0x176a3cu: goto label_176a3c;
        case 0x176a40u: goto label_176a40;
        case 0x176a44u: goto label_176a44;
        case 0x176a48u: goto label_176a48;
        case 0x176a4cu: goto label_176a4c;
        case 0x176a50u: goto label_176a50;
        case 0x176a54u: goto label_176a54;
        case 0x176a58u: goto label_176a58;
        case 0x176a5cu: goto label_176a5c;
        case 0x176a60u: goto label_176a60;
        case 0x176a64u: goto label_176a64;
        case 0x176a68u: goto label_176a68;
        case 0x176a6cu: goto label_176a6c;
        case 0x176a70u: goto label_176a70;
        case 0x176a74u: goto label_176a74;
        case 0x176a78u: goto label_176a78;
        case 0x176a7cu: goto label_176a7c;
        case 0x176a80u: goto label_176a80;
        case 0x176a84u: goto label_176a84;
        case 0x176a88u: goto label_176a88;
        case 0x176a8cu: goto label_176a8c;
        case 0x176a90u: goto label_176a90;
        case 0x176a94u: goto label_176a94;
        case 0x176a98u: goto label_176a98;
        case 0x176a9cu: goto label_176a9c;
        case 0x176aa0u: goto label_176aa0;
        case 0x176aa4u: goto label_176aa4;
        case 0x176aa8u: goto label_176aa8;
        case 0x176aacu: goto label_176aac;
        case 0x176ab0u: goto label_176ab0;
        case 0x176ab4u: goto label_176ab4;
        case 0x176ab8u: goto label_176ab8;
        case 0x176abcu: goto label_176abc;
        case 0x176ac0u: goto label_176ac0;
        case 0x176ac4u: goto label_176ac4;
        case 0x176ac8u: goto label_176ac8;
        case 0x176accu: goto label_176acc;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ad4u: goto label_176ad4;
        case 0x176ad8u: goto label_176ad8;
        default: break;
    }

    ctx->pc = 0x176260u;

label_176260:
    // 0x176260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_176264:
    // 0x176264: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x176264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_176268:
    // 0x176268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17626c:
    // 0x17626c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176270:
    // 0x176270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176274:
    // 0x176274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_176278:
    // 0x176278: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17627c:
    // 0x17627c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_176280:
    if (ctx->pc == 0x176280u) {
        ctx->pc = 0x176280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17627Cu;
        // 0x176280: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176284u;
        goto label_176284;
    }
    ctx->pc = 0x17627Cu;
    {
        const bool branch_taken_0x17627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17627Cu;
        // 0x176280: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17627c) {
            ctx->pc = 0x17629Cu;
            goto label_17629c;
        }
    }
    ctx->pc = 0x176284u;
label_176284:
    // 0x176284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x176284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_176288:
    // 0x176288: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x176288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_17628c:
    // 0x17628c: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x17628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176290:
    // 0x176290: 0x38420040  xori        $v0, $v0, 0x40
    ctx->pc = 0x176290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)64);
label_176294:
    // 0x176294: 0x1000020a  b           . + 4 + (0x20A << 2)
label_176298:
    if (ctx->pc == 0x176298u) {
        ctx->pc = 0x176298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176294u;
        // 0x176298: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17629Cu;
        goto label_17629c;
    }
    ctx->pc = 0x176294u;
    {
        const bool branch_taken_0x176294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176294u;
        // 0x176298: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176294) {
            ctx->pc = 0x176AC0u;
            goto label_176ac0;
        }
    }
    ctx->pc = 0x17629Cu;
label_17629c:
    // 0x17629c: 0x92620c24  lbu         $v0, 0xC24($s3)
    ctx->pc = 0x17629cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3108)));
label_1762a0:
    // 0x1762a0: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_1762a4:
    if (ctx->pc == 0x1762A4u) {
        ctx->pc = 0x1762A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762A0u;
        // 0x1762a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1762A8u;
        goto label_1762a8;
    }
    ctx->pc = 0x1762A0u;
    {
        const bool branch_taken_0x1762a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762A0u;
        // 0x1762a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762a0) {
            ctx->pc = 0x1764A4u;
            goto label_1764a4;
        }
    }
    ctx->pc = 0x1762A8u;
label_1762a8:
    // 0x1762a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1762a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1762ac:
    // 0x1762ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1762acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1762b0:
    // 0x1762b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1762b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1762b4:
    // 0x1762b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1762b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1762b8:
    // 0x1762b8: 0x10000068  b           . + 4 + (0x68 << 2)
label_1762bc:
    if (ctx->pc == 0x1762BCu) {
        ctx->pc = 0x1762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762B8u;
        // 0x1762bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1762C0u;
        goto label_1762c0;
    }
    ctx->pc = 0x1762B8u;
    {
        const bool branch_taken_0x1762b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762B8u;
        // 0x1762bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762b8) {
            ctx->pc = 0x17645Cu;
            goto label_17645c;
        }
    }
    ctx->pc = 0x1762C0u;
label_1762c0:
    // 0x1762c0: 0x8e620c28  lw          $v0, 0xC28($s3)
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3112)));
label_1762c4:
    // 0x1762c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1762c8:
    // 0x1762c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1762cc:
    // 0x1762cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1762ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1762d0:
    // 0x1762d0: 0x8c680048  lw          $t0, 0x48($v1)
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1762d4:
    // 0x1762d4: 0x1448005f  bne         $v0, $t0, . + 4 + (0x5F << 2)
label_1762d8:
    if (ctx->pc == 0x1762D8u) {
        ctx->pc = 0x1762DCu;
        goto label_1762dc;
    }
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x176454u;
            goto label_176454;
        }
    }
    ctx->pc = 0x1762DCu;
label_1762dc:
    // 0x1762dc: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x1762dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
label_1762e0:
    // 0x1762e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1762e4:
    // 0x1762e4: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x1762e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1762e8:
    // 0x1762e8: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1762e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
label_1762ec:
    // 0x1762ec: 0xc421f5c8  lwc1        $f1, -0xA38($at)
    ctx->pc = 0x1762ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1762f0:
    // 0x1762f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1762f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1762f4:
    // 0x1762f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1762f8:
    if (ctx->pc == 0x1762F8u) {
        ctx->pc = 0x1762F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762F4u;
        // 0x1762f8: 0x460208c2  mul.s       $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1762FCu;
        goto label_1762fc;
    }
    ctx->pc = 0x1762F4u;
    {
        const bool branch_taken_0x1762f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762F4u;
        // 0x1762f8: 0x460208c2  mul.s       $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762f4) {
            ctx->pc = 0x176374u;
            goto label_176374;
        }
    }
    ctx->pc = 0x1762FCu;
label_1762fc:
    // 0x1762fc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1762fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176300:
    // 0x176300: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176304:
    // 0x176304: 0x0  nop
    ctx->pc = 0x176304u;
    // NOP
label_176308:
    // 0x176308: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_17630c:
    if (ctx->pc == 0x17630Cu) {
        ctx->pc = 0x176310u;
        goto label_176310;
    }
    ctx->pc = 0x176308u;
    {
        const bool branch_taken_0x176308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x176308) {
            ctx->pc = 0x1763D8u;
            goto label_1763d8;
        }
    }
    ctx->pc = 0x176310u;
label_176310:
    // 0x176310: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x176310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176314:
    // 0x176314: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x176314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176318:
    // 0x176318: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x176318u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_17631c:
    // 0x17631c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x17631cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_176320:
    // 0x176320: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x176320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_176324:
    // 0x176324: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x176324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176328:
    // 0x176328: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x176328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17632c:
    // 0x17632c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x17632cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_176330:
    // 0x176330: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x176330u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_176334:
    // 0x176334: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x176334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_176338:
    // 0x176338: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x176338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17633c:
    // 0x17633c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x17633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176340:
    // 0x176340: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x176340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_176344:
    // 0x176344: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x176344u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_176348:
    // 0x176348: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x176348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_17634c:
    // 0x17634c: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x17634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176350:
    // 0x176350: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x176350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_176354:
    // 0x176354: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x176354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_176358:
    // 0x176358: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x176358u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
label_17635c:
    // 0x17635c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17635cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176360:
    // 0x176360: 0x0  nop
    ctx->pc = 0x176360u;
    // NOP
label_176364:
    // 0x176364: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_176368:
    if (ctx->pc == 0x176368u) {
        ctx->pc = 0x17636Cu;
        goto label_17636c;
    }
    ctx->pc = 0x176364u;
    {
        const bool branch_taken_0x176364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176364) {
            ctx->pc = 0x1763D8u;
            goto label_1763d8;
        }
    }
    ctx->pc = 0x17636Cu;
label_17636c:
    // 0x17636c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_176370:
    if (ctx->pc == 0x176370u) {
        ctx->pc = 0x176370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17636Cu;
        // 0x176370: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176374u;
        goto label_176374;
    }
    ctx->pc = 0x17636Cu;
    {
        const bool branch_taken_0x17636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17636Cu;
        // 0x176370: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17636c) {
            ctx->pc = 0x1763D8u;
            goto label_1763d8;
        }
    }
    ctx->pc = 0x176374u;
label_176374:
    // 0x176374: 0x0  nop
    ctx->pc = 0x176374u;
    // NOP
label_176378:
    // 0x176378: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x176378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17637c:
    // 0x17637c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x17637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176380:
    // 0x176380: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x176380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176384:
    // 0x176384: 0x0  nop
    ctx->pc = 0x176384u;
    // NOP
label_176388:
    // 0x176388: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_17638c:
    if (ctx->pc == 0x17638Cu) {
        ctx->pc = 0x176390u;
        goto label_176390;
    }
    ctx->pc = 0x176388u;
    {
        const bool branch_taken_0x176388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176388) {
            ctx->pc = 0x1763D8u;
            goto label_1763d8;
        }
    }
    ctx->pc = 0x176390u;
label_176390:
    // 0x176390: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x176390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176394:
    // 0x176394: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x176394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176398:
    // 0x176398: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x176398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_17639c:
    // 0x17639c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17639cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1763a0:
    // 0x1763a0: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x1763a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1763a4:
    // 0x1763a4: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x1763a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1763a8:
    // 0x1763a8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1763a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763ac:
    // 0x1763ac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1763acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1763b0:
    // 0x1763b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1763b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1763b4:
    // 0x1763b4: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x1763b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1763b8:
    // 0x1763b8: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1763b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1763bc:
    // 0x1763bc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1763bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763c0:
    // 0x1763c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1763c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1763c4:
    // 0x1763c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1763c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1763c8:
    // 0x1763c8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x1763c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1763cc:
    // 0x1763cc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1763ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763d0:
    // 0x1763d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1763d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1763d4:
    // 0x1763d4: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x1763d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_1763d8:
    // 0x1763d8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1763d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1763dc:
    // 0x1763dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1763dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1763e0:
    // 0x1763e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1763e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1763e4:
    // 0x1763e4: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1763e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1763e8:
    // 0x1763e8: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1763e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
label_1763ec:
    // 0x1763ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1763f0:
    if (ctx->pc == 0x1763F0u) {
        ctx->pc = 0x1763F4u;
        goto label_1763f4;
    }
    ctx->pc = 0x1763ECu;
    {
        const bool branch_taken_0x1763ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763ec) {
            ctx->pc = 0x176414u;
            goto label_176414;
        }
    }
    ctx->pc = 0x1763F4u;
label_1763f4:
    // 0x1763f4: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1763f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1763f8:
    // 0x1763f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1763f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1763fc:
    // 0x1763fc: 0x0  nop
    ctx->pc = 0x1763fcu;
    // NOP
label_176400:
    // 0x176400: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_176404:
    if (ctx->pc == 0x176404u) {
        ctx->pc = 0x176404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176400u;
        // 0x176404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176408u;
        goto label_176408;
    }
    ctx->pc = 0x176400u;
    {
        const bool branch_taken_0x176400 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176400u;
        // 0x176404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176400) {
            ctx->pc = 0x17640Cu;
            goto label_17640c;
        }
    }
    ctx->pc = 0x176408u;
label_176408:
    // 0x176408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17640c:
    // 0x17640c: 0x1000000a  b           . + 4 + (0xA << 2)
label_176410:
    if (ctx->pc == 0x176410u) {
        ctx->pc = 0x176410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17640Cu;
        // 0x176410: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x176414u;
        goto label_176414;
    }
    ctx->pc = 0x17640Cu;
    {
        const bool branch_taken_0x17640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17640Cu;
        // 0x176410: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17640c) {
            ctx->pc = 0x176438u;
            goto label_176438;
        }
    }
    ctx->pc = 0x176414u;
label_176414:
    // 0x176414: 0x0  nop
    ctx->pc = 0x176414u;
    // NOP
label_176418:
    // 0x176418: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x176418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17641c:
    // 0x17641c: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x17641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176420:
    // 0x176420: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x176420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176424:
    // 0x176424: 0x0  nop
    ctx->pc = 0x176424u;
    // NOP
label_176428:
    // 0x176428: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17642c:
    if (ctx->pc == 0x17642Cu) {
        ctx->pc = 0x17642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176428u;
        // 0x17642c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176430u;
        goto label_176430;
    }
    ctx->pc = 0x176428u;
    {
        const bool branch_taken_0x176428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176428u;
        // 0x17642c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176428) {
            ctx->pc = 0x176434u;
            goto label_176434;
        }
    }
    ctx->pc = 0x176430u;
label_176430:
    // 0x176430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176434:
    // 0x176434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x176434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_176438:
    // 0x176438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17643c:
    if (ctx->pc == 0x17643Cu) {
        ctx->pc = 0x176440u;
        goto label_176440;
    }
    ctx->pc = 0x176438u;
    {
        const bool branch_taken_0x176438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176438) {
            ctx->pc = 0x176448u;
            goto label_176448;
        }
    }
    ctx->pc = 0x176440u;
label_176440:
    // 0x176440: 0x10000002  b           . + 4 + (0x2 << 2)
label_176444:
    if (ctx->pc == 0x176444u) {
        ctx->pc = 0x176444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176440u;
        // 0x176444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176448u;
        goto label_176448;
    }
    ctx->pc = 0x176440u;
    {
        const bool branch_taken_0x176440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176440u;
        // 0x176444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176440) {
            ctx->pc = 0x17644Cu;
            goto label_17644c;
        }
    }
    ctx->pc = 0x176448u;
label_176448:
    // 0x176448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17644c:
    // 0x17644c: 0x0  nop
    ctx->pc = 0x17644cu;
    // NOP
label_176450:
    // 0x176450: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_176454:
    // 0x176454: 0x0  nop
    ctx->pc = 0x176454u;
    // NOP
label_176458:
    // 0x176458: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_17645c:
    // 0x17645c: 0x0  nop
    ctx->pc = 0x17645cu;
    // NOP
label_176460:
    // 0x176460: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176464:
    // 0x176464: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x176464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_176468:
    // 0x176468: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_17646c:
    if (ctx->pc == 0x17646Cu) {
        ctx->pc = 0x17646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176468u;
        // 0x17646c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176470u;
        goto label_176470;
    }
    ctx->pc = 0x176468u;
    {
        const bool branch_taken_0x176468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176468u;
        // 0x17646c: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176468) {
            ctx->pc = 0x1762C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1762c0;
        }
    }
    ctx->pc = 0x176470u;
label_176470:
    // 0x176470: 0x14a60190  bne         $a1, $a2, . + 4 + (0x190 << 2)
label_176474:
    if (ctx->pc == 0x176474u) {
        ctx->pc = 0x176478u;
        goto label_176478;
    }
    ctx->pc = 0x176470u;
    {
        const bool branch_taken_0x176470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x176470) {
            ctx->pc = 0x176AB4u;
            goto label_176ab4;
        }
    }
    ctx->pc = 0x176478u;
label_176478:
    // 0x176478: 0x8e620c28  lw          $v0, 0xC28($s3)
    ctx->pc = 0x176478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3112)));
label_17647c:
    // 0x17647c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_176480:
    // 0x176480: 0x441018c  bgez        $v0, . + 4 + (0x18C << 2)
label_176484:
    if (ctx->pc == 0x176484u) {
        ctx->pc = 0x176484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176480u;
        // 0x176484: 0xae620c28  sw          $v0, 0xC28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176488u;
        goto label_176488;
    }
    ctx->pc = 0x176480u;
    {
        const bool branch_taken_0x176480 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x176484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176480u;
        // 0x176484: 0xae620c28  sw          $v0, 0xC28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176480) {
            ctx->pc = 0x176AB4u;
            goto label_176ab4;
        }
    }
    ctx->pc = 0x176488u;
label_176488:
    // 0x176488: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_17648c:
    // 0x17648c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176490:
    // 0x176490: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x176490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_176494:
    // 0x176494: 0x320f809  jalr        $t9
label_176498:
    if (ctx->pc == 0x176498u) {
        ctx->pc = 0x176498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176494u;
        // 0x176498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17649Cu;
        goto label_17649c;
    }
    ctx->pc = 0x176494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17649Cu);
        ctx->pc = 0x176498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176494u;
        // 0x176498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176494u, 0x17649Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17649Cu;
label_17649c:
    // 0x17649c: 0x10000186  b           . + 4 + (0x186 << 2)
label_1764a0:
    if (ctx->pc == 0x1764A0u) {
        ctx->pc = 0x1764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17649Cu;
        // 0x1764a0: 0x8e620c20  lw          $v0, 0xC20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764A4u;
        goto label_1764a4;
    }
    ctx->pc = 0x17649Cu;
    {
        const bool branch_taken_0x17649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17649Cu;
        // 0x1764a0: 0x8e620c20  lw          $v0, 0xC20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17649c) {
            ctx->pc = 0x176AB8u;
            goto label_176ab8;
        }
    }
    ctx->pc = 0x1764A4u;
label_1764a4:
    // 0x1764a4: 0x10000170  b           . + 4 + (0x170 << 2)
label_1764a8:
    if (ctx->pc == 0x1764A8u) {
        ctx->pc = 0x1764A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764A4u;
        // 0x1764a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764ACu;
        goto label_1764ac;
    }
    ctx->pc = 0x1764A4u;
    {
        const bool branch_taken_0x1764a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764A4u;
        // 0x1764a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764a4) {
            ctx->pc = 0x176A68u;
            goto label_176a68;
        }
    }
    ctx->pc = 0x1764ACu;
label_1764ac:
    // 0x1764ac: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1764b0:
    // 0x1764b0: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x1764b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1764b4:
    // 0x1764b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1764b8:
    // 0x1764b8: 0xc420f5c8  lwc1        $f0, -0xA38($at)
    ctx->pc = 0x1764b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1764bc:
    // 0x1764bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1764bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1764c0:
    // 0x1764c0: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1764c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1764c4:
    // 0x1764c4: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1764c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
label_1764c8:
    // 0x1764c8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1764cc:
    if (ctx->pc == 0x1764CCu) {
        ctx->pc = 0x1764CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764C8u;
        // 0x1764cc: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764D0u;
        goto label_1764d0;
    }
    ctx->pc = 0x1764C8u;
    {
        const bool branch_taken_0x1764c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764C8u;
        // 0x1764cc: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764c8) {
            ctx->pc = 0x176590u;
            goto label_176590;
        }
    }
    ctx->pc = 0x1764D0u;
label_1764d0:
    // 0x1764d0: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1764d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1764d4:
    // 0x1764d4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1764d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1764d8:
    // 0x1764d8: 0x0  nop
    ctx->pc = 0x1764d8u;
    // NOP
label_1764dc:
    // 0x1764dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1764dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1764e0:
    // 0x1764e0: 0x0  nop
    ctx->pc = 0x1764e0u;
    // NOP
label_1764e4:
    // 0x1764e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1764e8:
    if (ctx->pc == 0x1764E8u) {
        ctx->pc = 0x1764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764E4u;
        // 0x1764e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764ECu;
        goto label_1764ec;
    }
    ctx->pc = 0x1764E4u;
    {
        const bool branch_taken_0x1764e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1764E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764E4u;
        // 0x1764e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764e4) {
            ctx->pc = 0x1764F4u;
            goto label_1764f4;
        }
    }
    ctx->pc = 0x1764ECu;
label_1764ec:
    // 0x1764ec: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1764f0:
    if (ctx->pc == 0x1764F0u) {
        ctx->pc = 0x1764F4u;
        goto label_1764f4;
    }
    ctx->pc = 0x1764ECu;
    {
        const bool branch_taken_0x1764ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1764ec) {
            ctx->pc = 0x176618u;
            goto label_176618;
        }
    }
    ctx->pc = 0x1764F4u;
label_1764f4:
    // 0x1764f4: 0x0  nop
    ctx->pc = 0x1764f4u;
    // NOP
label_1764f8:
    // 0x1764f8: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1764f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1764fc:
    // 0x1764fc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1764fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176500:
    // 0x176500: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_176504:
    // 0x176504: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x176504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_176508:
    // 0x176508: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x176508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_17650c:
    // 0x17650c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x17650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176510:
    // 0x176510: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x176510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176514:
    // 0x176514: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_176518:
    // 0x176518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x176518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_17651c:
    // 0x17651c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x17651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_176520:
    // 0x176520: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x176520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176524:
    // 0x176524: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x176524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176528:
    // 0x176528: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x176528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_17652c:
    // 0x17652c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17652cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_176530:
    // 0x176530: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x176530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_176534:
    // 0x176534: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x176534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176538:
    // 0x176538: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x176538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_17653c:
    // 0x17653c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x17653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_176540:
    // 0x176540: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x176540u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_176544:
    // 0x176544: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x176544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176548:
    // 0x176548: 0x0  nop
    ctx->pc = 0x176548u;
    // NOP
label_17654c:
    // 0x17654c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_176550:
    if (ctx->pc == 0x176550u) {
        ctx->pc = 0x176554u;
        goto label_176554;
    }
    ctx->pc = 0x17654Cu;
    {
        const bool branch_taken_0x17654c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17654c) {
            ctx->pc = 0x176558u;
            goto label_176558;
        }
    }
    ctx->pc = 0x176554u;
label_176554:
    // 0x176554: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x176554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_176558:
    // 0x176558: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_17655c:
    // 0x17655c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_176560:
    // 0x176560: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176564:
    // 0x176564: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x176564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_176568:
    // 0x176568: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x176568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17656c:
    // 0x17656c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17656cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176570:
    // 0x176570: 0x0  nop
    ctx->pc = 0x176570u;
    // NOP
label_176574:
    // 0x176574: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176578:
    // 0x176578: 0x0  nop
    ctx->pc = 0x176578u;
    // NOP
label_17657c:
    // 0x17657c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_176580:
    if (ctx->pc == 0x176580u) {
        ctx->pc = 0x176580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17657Cu;
        // 0x176580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176584u;
        goto label_176584;
    }
    ctx->pc = 0x17657Cu;
    {
        const bool branch_taken_0x17657c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17657Cu;
        // 0x176580: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17657c) {
            ctx->pc = 0x176588u;
            goto label_176588;
        }
    }
    ctx->pc = 0x176584u;
label_176584:
    // 0x176584: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x176584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176588:
    // 0x176588: 0x10000023  b           . + 4 + (0x23 << 2)
label_17658c:
    if (ctx->pc == 0x17658Cu) {
        ctx->pc = 0x17658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176588u;
        // 0x17658c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x176590u;
        goto label_176590;
    }
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176588u;
        // 0x17658c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176588) {
            ctx->pc = 0x176618u;
            goto label_176618;
        }
    }
    ctx->pc = 0x176590u;
label_176590:
    // 0x176590: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x176590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176594:
    // 0x176594: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x176594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176598:
    // 0x176598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17659c:
    // 0x17659c: 0x0  nop
    ctx->pc = 0x17659cu;
    // NOP
label_1765a0:
    // 0x1765a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1765a4:
    if (ctx->pc == 0x1765A4u) {
        ctx->pc = 0x1765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765A0u;
        // 0x1765a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765A8u;
        goto label_1765a8;
    }
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765A0u;
        // 0x1765a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x1765B0u;
            goto label_1765b0;
        }
    }
    ctx->pc = 0x1765A8u;
label_1765a8:
    // 0x1765a8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1765ac:
    if (ctx->pc == 0x1765ACu) {
        ctx->pc = 0x1765B0u;
        goto label_1765b0;
    }
    ctx->pc = 0x1765A8u;
    {
        const bool branch_taken_0x1765a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765a8) {
            ctx->pc = 0x176618u;
            goto label_176618;
        }
    }
    ctx->pc = 0x1765B0u;
label_1765b0:
    // 0x1765b0: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1765b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1765b4:
    // 0x1765b4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1765b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1765b8:
    // 0x1765b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1765b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1765bc:
    // 0x1765bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1765bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1765c0:
    // 0x1765c0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1765c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1765c4:
    // 0x1765c4: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1765c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1765c8:
    // 0x1765c8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1765c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1765cc:
    // 0x1765cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1765ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1765d0:
    // 0x1765d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1765d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1765d4:
    // 0x1765d4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1765d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1765d8:
    // 0x1765d8: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1765d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1765dc:
    // 0x1765dc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1765dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1765e0:
    // 0x1765e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1765e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1765e4:
    // 0x1765e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1765e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1765e8:
    // 0x1765e8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1765ec:
    // 0x1765ec: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1765ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1765f0:
    // 0x1765f0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1765f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1765f4:
    // 0x1765f4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1765f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_1765f8:
    // 0x1765f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1765f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1765fc:
    // 0x1765fc: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176600:
    // 0x176600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176604:
    // 0x176604: 0x0  nop
    ctx->pc = 0x176604u;
    // NOP
label_176608:
    // 0x176608: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17660c:
    if (ctx->pc == 0x17660Cu) {
        ctx->pc = 0x17660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176608u;
        // 0x17660c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176610u;
        goto label_176610;
    }
    ctx->pc = 0x176608u;
    {
        const bool branch_taken_0x176608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176608u;
        // 0x17660c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176608) {
            ctx->pc = 0x176614u;
            goto label_176614;
        }
    }
    ctx->pc = 0x176610u;
label_176610:
    // 0x176610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176614:
    // 0x176614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x176614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_176618:
    // 0x176618: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
label_17661c:
    if (ctx->pc == 0x17661Cu) {
        ctx->pc = 0x176620u;
        goto label_176620;
    }
    ctx->pc = 0x176618u;
    {
        const bool branch_taken_0x176618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176618) {
            ctx->pc = 0x1769DCu;
            goto label_1769dc;
        }
    }
    ctx->pc = 0x176620u;
label_176620:
    // 0x176620: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176624:
    // 0x176624: 0x8e650c20  lw          $a1, 0xC20($s3)
    ctx->pc = 0x176624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176628:
    // 0x176628: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17662c:
    // 0x17662c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176630:
    // 0x176630: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x176630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_176634:
    // 0x176634: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x176634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_176638:
    // 0x176638: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17663c:
    // 0x17663c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_176640:
    // 0x176640: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x176640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_176644:
    // 0x176644: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_176648:
    // 0x176648: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x176648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_17664c:
    // 0x17664c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_176650:
    if (ctx->pc == 0x176650u) {
        ctx->pc = 0x176650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17664Cu;
        // 0x176650: 0x24920020  addiu       $s2, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176654u;
        goto label_176654;
    }
    ctx->pc = 0x17664Cu;
    {
        const bool branch_taken_0x17664c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17664Cu;
        // 0x176650: 0x24920020  addiu       $s2, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17664c) {
            ctx->pc = 0x17665Cu;
            goto label_17665c;
        }
    }
    ctx->pc = 0x176654u;
label_176654:
    // 0x176654: 0x10000063  b           . + 4 + (0x63 << 2)
label_176658:
    if (ctx->pc == 0x176658u) {
        ctx->pc = 0x176658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176654u;
        // 0x176658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17665Cu;
        goto label_17665c;
    }
    ctx->pc = 0x176654u;
    {
        const bool branch_taken_0x176654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176654u;
        // 0x176658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176654) {
            ctx->pc = 0x1767E4u;
            goto label_1767e4;
        }
    }
    ctx->pc = 0x17665Cu;
label_17665c:
    // 0x17665c: 0x0  nop
    ctx->pc = 0x17665cu;
    // NOP
label_176660:
    // 0x176660: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x176660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_176664:
    // 0x176664: 0xc07d38e  jal         func_1F4E38
label_176668:
    if (ctx->pc == 0x176668u) {
        ctx->pc = 0x176668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176664u;
        // 0x176668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17666Cu;
        goto label_17666c;
    }
    ctx->pc = 0x176664u;
    SET_GPR_U32(ctx, 31, 0x17666Cu);
    ctx->pc = 0x176668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176664u;
    // 0x176668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176664u, 0x17666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17666Cu;
label_17666c:
    // 0x17666c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17666cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176670:
    // 0x176670: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x176670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_176674:
    // 0x176674: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_176678:
    // 0x176678: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17667c:
    // 0x17667c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17667cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176680:
    // 0x176680: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
label_176684:
    // 0x176684: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_176688:
    // 0x176688: 0xc07d300  jal         func_1F4C00
label_17668c:
    if (ctx->pc == 0x17668Cu) {
        ctx->pc = 0x17668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176688u;
        // 0x17668c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176690u;
        goto label_176690;
    }
    ctx->pc = 0x176688u;
    SET_GPR_U32(ctx, 31, 0x176690u);
    ctx->pc = 0x17668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176688u;
    // 0x17668c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x176688u, 0x176690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176690u;
label_176690:
    // 0x176690: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_176694:
    // 0x176694: 0xc07d312  jal         func_1F4C48
label_176698:
    if (ctx->pc == 0x176698u) {
        ctx->pc = 0x176698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176694u;
        // 0x176698: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17669Cu;
        goto label_17669c;
    }
    ctx->pc = 0x176694u;
    SET_GPR_U32(ctx, 31, 0x17669Cu);
    ctx->pc = 0x176698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176694u;
    // 0x176698: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176694u, 0x17669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17669Cu;
label_17669c:
    // 0x17669c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1766a0:
    // 0x1766a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1766a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1766a4:
    // 0x1766a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1766a8:
    // 0x1766a8: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
label_1766ac:
    // 0x1766ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1766b0:
    // 0x1766b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1766b4:
    // 0x1766b4: 0xc07d38e  jal         func_1F4E38
label_1766b8:
    if (ctx->pc == 0x1766B8u) {
        ctx->pc = 0x1766B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766B4u;
        // 0x1766b8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766BCu;
        goto label_1766bc;
    }
    ctx->pc = 0x1766B4u;
    SET_GPR_U32(ctx, 31, 0x1766BCu);
    ctx->pc = 0x1766B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766B4u;
    // 0x1766b8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1766B4u, 0x1766BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766BCu;
label_1766bc:
    // 0x1766bc: 0xc045b00  jal         func_116C00
label_1766c0:
    if (ctx->pc == 0x1766C0u) {
        ctx->pc = 0x1766C4u;
        goto label_1766c4;
    }
    ctx->pc = 0x1766BCu;
    SET_GPR_U32(ctx, 31, 0x1766C4u);
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x1766BCu, 0x1766C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766C4u;
label_1766c4:
    // 0x1766c4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1766c8:
    // 0x1766c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1766cc:
    // 0x1766cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1766ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1766d0:
    // 0x1766d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1766d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1766d4:
    // 0x1766d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1766d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1766d8:
    // 0x1766d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1766d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1766dc:
    // 0x1766dc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1766e0:
    // 0x1766e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1766e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1766e4:
    // 0x1766e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1766e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1766e8:
    // 0x1766e8: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x1766e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_1766ec:
    // 0x1766ec: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x1766ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
label_1766f0:
    // 0x1766f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1766f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1766f4:
    // 0x1766f4: 0x0  nop
    ctx->pc = 0x1766f4u;
    // NOP
label_1766f8:
    // 0x1766f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1766f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1766fc:
    // 0x1766fc: 0xc05c550  jal         func_171540
label_176700:
    if (ctx->pc == 0x176700u) {
        ctx->pc = 0x176700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766FCu;
        // 0x176700: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176704u;
        goto label_176704;
    }
    ctx->pc = 0x1766FCu;
    SET_GPR_U32(ctx, 31, 0x176704u);
    ctx->pc = 0x176700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766FCu;
    // 0x176700: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x1766FCu, 0x176704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176704u;
label_176704:
    // 0x176704: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_176708:
    // 0x176708: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17670c:
    // 0x17670c: 0x24637680  addiu       $v1, $v1, 0x7680
    ctx->pc = 0x17670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30336));
label_176710:
    // 0x176710: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_176714:
    // 0x176714: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
label_176718:
    // 0x176718: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x176718u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17671c:
    // 0x17671c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x17671cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176720:
    // 0x176720: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x176720u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_176724:
    // 0x176724: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x176724u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_176728:
    // 0x176728: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x176728u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17672c:
    // 0x17672c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x17672cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176730:
    // 0x176730: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176734:
    // 0x176734: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x176734u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176738:
    // 0x176738: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176738u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17673c:
    // 0x17673c: 0xc045b00  jal         func_116C00
label_176740:
    if (ctx->pc == 0x176740u) {
        ctx->pc = 0x176740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17673Cu;
        // 0x176740: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176744u;
        goto label_176744;
    }
    ctx->pc = 0x17673Cu;
    SET_GPR_U32(ctx, 31, 0x176744u);
    ctx->pc = 0x176740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17673Cu;
    // 0x176740: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x17673Cu, 0x176744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176744u;
label_176744:
    // 0x176744: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x176744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_176748:
    // 0x176748: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17674c:
    // 0x17674c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_176750:
    // 0x176750: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x176750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_176754:
    // 0x176754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_176758:
    // 0x176758: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17675c:
    // 0x17675c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_176760:
    // 0x176760: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x176760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
label_176764:
    // 0x176764: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_176768:
    // 0x176768: 0xc05c550  jal         func_171540
label_17676c:
    if (ctx->pc == 0x17676Cu) {
        ctx->pc = 0x17676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176768u;
        // 0x17676c: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176770u;
        goto label_176770;
    }
    ctx->pc = 0x176768u;
    SET_GPR_U32(ctx, 31, 0x176770u);
    ctx->pc = 0x17676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176768u;
    // 0x17676c: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x176768u, 0x176770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176770u;
label_176770:
    // 0x176770: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176774:
    // 0x176774: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_176778:
    // 0x176778: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17677c:
    // 0x17677c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_176780:
    // 0x176780: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176784:
    // 0x176784: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_176788:
    // 0x176788: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_17678c:
    // 0x17678c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x17678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_176790:
    // 0x176790: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x176790u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_176794:
    // 0x176794: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x176794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_176798:
    // 0x176798: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x176798u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17679c:
    // 0x17679c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x17679cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1767a0:
    // 0x1767a0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1767a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_1767a4:
    // 0x1767a4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1767a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1767a8:
    // 0x1767a8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1767a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1767ac:
    // 0x1767ac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1767acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1767b0:
    // 0x1767b0: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x1767b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_1767b4:
    // 0x1767b4: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x1767b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_1767b8:
    // 0x1767b8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1767b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_1767bc:
    // 0x1767bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1767bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1767c0:
    // 0x1767c0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1767c0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1767c4:
    // 0x1767c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1767c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1767c8:
    // 0x1767c8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1767c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1767cc:
    // 0x1767cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1767ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1767d0:
    // 0x1767d0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1767d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1767d4:
    // 0x1767d4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1767d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1767d8:
    // 0x1767d8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1767dc:
    // 0x1767dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1767dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1767e0:
    // 0x1767e0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1767e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1767e4:
    // 0x1767e4: 0x0  nop
    ctx->pc = 0x1767e4u;
    // NOP
label_1767e8:
    // 0x1767e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1767ec:
    if (ctx->pc == 0x1767ECu) {
        ctx->pc = 0x1767F0u;
        goto label_1767f0;
    }
    ctx->pc = 0x1767E8u;
    {
        const bool branch_taken_0x1767e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767e8) {
            ctx->pc = 0x1767FCu;
            goto label_1767fc;
        }
    }
    ctx->pc = 0x1767F0u;
label_1767f0:
    // 0x1767f0: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_1767f4:
    // 0x1767f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1767f8:
    // 0x1767f8: 0xae620c20  sw          $v0, 0xC20($s3)
    ctx->pc = 0x1767f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3104), GPR_U32(ctx, 2));
label_1767fc:
    // 0x1767fc: 0x0  nop
    ctx->pc = 0x1767fcu;
    // NOP
label_176800:
    // 0x176800: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176804:
    // 0x176804: 0x8e650c20  lw          $a1, 0xC20($s3)
    ctx->pc = 0x176804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176808:
    // 0x176808: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17680c:
    // 0x17680c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176810:
    // 0x176810: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_176814:
    // 0x176814: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x176814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_176818:
    // 0x176818: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17681c:
    // 0x17681c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_176820:
    // 0x176820: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x176820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_176824:
    // 0x176824: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_176828:
    // 0x176828: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x176828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_17682c:
    // 0x17682c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_176830:
    if (ctx->pc == 0x176830u) {
        ctx->pc = 0x176830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17682Cu;
        // 0x176830: 0x24920020  addiu       $s2, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176834u;
        goto label_176834;
    }
    ctx->pc = 0x17682Cu;
    {
        const bool branch_taken_0x17682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17682Cu;
        // 0x176830: 0x24920020  addiu       $s2, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17682c) {
            ctx->pc = 0x17683Cu;
            goto label_17683c;
        }
    }
    ctx->pc = 0x176834u;
label_176834:
    // 0x176834: 0x10000063  b           . + 4 + (0x63 << 2)
label_176838:
    if (ctx->pc == 0x176838u) {
        ctx->pc = 0x176838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176834u;
        // 0x176838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17683Cu;
        goto label_17683c;
    }
    ctx->pc = 0x176834u;
    {
        const bool branch_taken_0x176834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176834u;
        // 0x176838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176834) {
            ctx->pc = 0x1769C4u;
            goto label_1769c4;
        }
    }
    ctx->pc = 0x17683Cu;
label_17683c:
    // 0x17683c: 0x0  nop
    ctx->pc = 0x17683cu;
    // NOP
label_176840:
    // 0x176840: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_176844:
    // 0x176844: 0xc07d38e  jal         func_1F4E38
label_176848:
    if (ctx->pc == 0x176848u) {
        ctx->pc = 0x176848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176844u;
        // 0x176848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17684Cu;
        goto label_17684c;
    }
    ctx->pc = 0x176844u;
    SET_GPR_U32(ctx, 31, 0x17684Cu);
    ctx->pc = 0x176848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176844u;
    // 0x176848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176844u, 0x17684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17684Cu;
label_17684c:
    // 0x17684c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176850:
    // 0x176850: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x176850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_176854:
    // 0x176854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_176858:
    // 0x176858: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17685c:
    // 0x17685c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176860:
    // 0x176860: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
label_176864:
    // 0x176864: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_176868:
    // 0x176868: 0xc07d300  jal         func_1F4C00
label_17686c:
    if (ctx->pc == 0x17686Cu) {
        ctx->pc = 0x17686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176868u;
        // 0x17686c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176870u;
        goto label_176870;
    }
    ctx->pc = 0x176868u;
    SET_GPR_U32(ctx, 31, 0x176870u);
    ctx->pc = 0x17686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176868u;
    // 0x17686c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x176868u, 0x176870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176870u;
label_176870:
    // 0x176870: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_176874:
    // 0x176874: 0xc07d312  jal         func_1F4C48
label_176878:
    if (ctx->pc == 0x176878u) {
        ctx->pc = 0x176878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176874u;
        // 0x176878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17687Cu;
        goto label_17687c;
    }
    ctx->pc = 0x176874u;
    SET_GPR_U32(ctx, 31, 0x17687Cu);
    ctx->pc = 0x176878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176874u;
    // 0x176878: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176874u, 0x17687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17687Cu;
label_17687c:
    // 0x17687c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176880:
    // 0x176880: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_176884:
    // 0x176884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_176888:
    // 0x176888: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
label_17688c:
    // 0x17688c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176890:
    // 0x176890: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_176894:
    // 0x176894: 0xc07d38e  jal         func_1F4E38
label_176898:
    if (ctx->pc == 0x176898u) {
        ctx->pc = 0x176898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176894u;
        // 0x176898: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17689Cu;
        goto label_17689c;
    }
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176894u;
    // 0x176898: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176894u, 0x17689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0xc045b00  jal         func_116C00
label_1768a0:
    if (ctx->pc == 0x1768A0u) {
        ctx->pc = 0x1768A4u;
        goto label_1768a4;
    }
    ctx->pc = 0x17689Cu;
    SET_GPR_U32(ctx, 31, 0x1768A4u);
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x17689Cu, 0x1768A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768A4u;
label_1768a4:
    // 0x1768a4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1768a8:
    // 0x1768a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1768ac:
    // 0x1768ac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1768acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1768b0:
    // 0x1768b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1768b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1768b4:
    // 0x1768b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1768b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1768b8:
    // 0x1768b8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1768bc:
    // 0x1768bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1768c0:
    // 0x1768c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1768c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1768c4:
    // 0x1768c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1768c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1768c8:
    // 0x1768c8: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_1768cc:
    // 0x1768cc: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
label_1768d0:
    // 0x1768d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1768d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1768d4:
    // 0x1768d4: 0x0  nop
    ctx->pc = 0x1768d4u;
    // NOP
label_1768d8:
    // 0x1768d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1768d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1768dc:
    // 0x1768dc: 0xc05c550  jal         func_171540
label_1768e0:
    if (ctx->pc == 0x1768E0u) {
        ctx->pc = 0x1768E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768DCu;
        // 0x1768e0: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1768E4u;
        goto label_1768e4;
    }
    ctx->pc = 0x1768DCu;
    SET_GPR_U32(ctx, 31, 0x1768E4u);
    ctx->pc = 0x1768E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768DCu;
    // 0x1768e0: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x1768DCu, 0x1768E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768E4u;
label_1768e4:
    // 0x1768e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1768e8:
    // 0x1768e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1768ec:
    // 0x1768ec: 0x24637680  addiu       $v1, $v1, 0x7680
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30336));
label_1768f0:
    // 0x1768f0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1768f4:
    // 0x1768f4: 0x24847670  addiu       $a0, $a0, 0x7670
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30320));
label_1768f8:
    // 0x1768f8: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x1768f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1768fc:
    // 0x1768fc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1768fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176900:
    // 0x176900: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x176900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_176904:
    // 0x176904: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x176904u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_176908:
    // 0x176908: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x176908u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17690c:
    // 0x17690c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x17690cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176910:
    // 0x176910: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176914:
    // 0x176914: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x176914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176918:
    // 0x176918: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17691c:
    // 0x17691c: 0xc045b00  jal         func_116C00
label_176920:
    if (ctx->pc == 0x176920u) {
        ctx->pc = 0x176920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17691Cu;
        // 0x176920: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176924u;
        goto label_176924;
    }
    ctx->pc = 0x17691Cu;
    SET_GPR_U32(ctx, 31, 0x176924u);
    ctx->pc = 0x176920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17691Cu;
    // 0x176920: 0xf8880000  sqc2        $vf8, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C00u, 0x17691Cu, 0x176924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176924u;
label_176924:
    // 0x176924: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x176924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_176928:
    // 0x176928: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_17692c:
    // 0x17692c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17692cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_176930:
    // 0x176930: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_176934:
    // 0x176934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_176938:
    // 0x176938: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17693c:
    // 0x17693c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_176940:
    // 0x176940: 0x24a57670  addiu       $a1, $a1, 0x7670
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30320));
label_176944:
    // 0x176944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_176948:
    // 0x176948: 0xc05c550  jal         func_171540
label_17694c:
    if (ctx->pc == 0x17694Cu) {
        ctx->pc = 0x17694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176948u;
        // 0x17694c: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176950u;
        goto label_176950;
    }
    ctx->pc = 0x176948u;
    SET_GPR_U32(ctx, 31, 0x176950u);
    ctx->pc = 0x17694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176948u;
    // 0x17694c: 0xe420767c  swc1        $f0, 0x767C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x176948u, 0x176950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176950u;
label_176950:
    // 0x176950: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_176954:
    // 0x176954: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_176958:
    // 0x176958: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17695c:
    // 0x17695c: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x17695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
label_176960:
    // 0x176960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_176964:
    // 0x176964: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_176968:
    // 0x176968: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x176968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_17696c:
    // 0x17696c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_176970:
    // 0x176970: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x176970u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_176974:
    // 0x176974: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x176974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_176978:
    // 0x176978: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x176978u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17697c:
    // 0x17697c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x17697cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_176980:
    // 0x176980: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x176980u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_176984:
    // 0x176984: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x176984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176988:
    // 0x176988: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x176988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17698c:
    // 0x17698c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x17698cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_176990:
    // 0x176990: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x176990u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_176994:
    // 0x176994: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x176994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
label_176998:
    // 0x176998: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x176998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_17699c:
    // 0x17699c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x17699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1769a0:
    // 0x1769a0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1769a0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1769a4:
    // 0x1769a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1769a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1769a8:
    // 0x1769a8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1769a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1769ac:
    // 0x1769ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1769acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1769b0:
    // 0x1769b0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1769b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1769b4:
    // 0x1769b4: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1769b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1769b8:
    // 0x1769b8: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1769bc:
    // 0x1769bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1769c0:
    // 0x1769c0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1769c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1769c4:
    // 0x1769c4: 0x0  nop
    ctx->pc = 0x1769c4u;
    // NOP
label_1769c8:
    // 0x1769c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1769cc:
    if (ctx->pc == 0x1769CCu) {
        ctx->pc = 0x1769D0u;
        goto label_1769d0;
    }
    ctx->pc = 0x1769C8u;
    {
        const bool branch_taken_0x1769c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1769c8) {
            ctx->pc = 0x1769DCu;
            goto label_1769dc;
        }
    }
    ctx->pc = 0x1769D0u;
label_1769d0:
    // 0x1769d0: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x1769d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_1769d4:
    // 0x1769d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1769d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1769d8:
    // 0x1769d8: 0xae620c20  sw          $v0, 0xC20($s3)
    ctx->pc = 0x1769d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3104), GPR_U32(ctx, 2));
label_1769dc:
    // 0x1769dc: 0x0  nop
    ctx->pc = 0x1769dcu;
    // NOP
label_1769e0:
    // 0x1769e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1769e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1769e4:
    // 0x1769e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1769e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1769e8:
    // 0x1769e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1769e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1769ec:
    // 0x1769ec: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1769ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1769f0:
    // 0x1769f0: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1769f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
label_1769f4:
    // 0x1769f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1769f8:
    if (ctx->pc == 0x1769F8u) {
        ctx->pc = 0x1769FCu;
        goto label_1769fc;
    }
    ctx->pc = 0x1769F4u;
    {
        const bool branch_taken_0x1769f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1769f4) {
            ctx->pc = 0x176A24u;
            goto label_176a24;
        }
    }
    ctx->pc = 0x1769FCu;
label_1769fc:
    // 0x1769fc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1769fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a00:
    // 0x176a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176a04:
    // 0x176a04: 0x0  nop
    ctx->pc = 0x176a04u;
    // NOP
label_176a08:
    // 0x176a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176a0c:
    // 0x176a0c: 0x0  nop
    ctx->pc = 0x176a0cu;
    // NOP
label_176a10:
    // 0x176a10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_176a14:
    if (ctx->pc == 0x176A14u) {
        ctx->pc = 0x176A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A10u;
        // 0x176a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A18u;
        goto label_176a18;
    }
    ctx->pc = 0x176A10u;
    {
        const bool branch_taken_0x176a10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A10u;
        // 0x176a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a10) {
            ctx->pc = 0x176A1Cu;
            goto label_176a1c;
        }
    }
    ctx->pc = 0x176A18u;
label_176a18:
    // 0x176a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176a1c:
    // 0x176a1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_176a20:
    if (ctx->pc == 0x176A20u) {
        ctx->pc = 0x176A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A1Cu;
        // 0x176a20: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A24u;
        goto label_176a24;
    }
    ctx->pc = 0x176A1Cu;
    {
        const bool branch_taken_0x176a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A1Cu;
        // 0x176a20: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a1c) {
            ctx->pc = 0x176A48u;
            goto label_176a48;
        }
    }
    ctx->pc = 0x176A24u;
label_176a24:
    // 0x176a24: 0x0  nop
    ctx->pc = 0x176a24u;
    // NOP
label_176a28:
    // 0x176a28: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x176a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a2c:
    // 0x176a2c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x176a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a30:
    // 0x176a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176a34:
    // 0x176a34: 0x0  nop
    ctx->pc = 0x176a34u;
    // NOP
label_176a38:
    // 0x176a38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_176a3c:
    if (ctx->pc == 0x176A3Cu) {
        ctx->pc = 0x176A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A38u;
        // 0x176a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A40u;
        goto label_176a40;
    }
    ctx->pc = 0x176A38u;
    {
        const bool branch_taken_0x176a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x176A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A38u;
        // 0x176a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a38) {
            ctx->pc = 0x176A44u;
            goto label_176a44;
        }
    }
    ctx->pc = 0x176A40u;
label_176a40:
    // 0x176a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176a44:
    // 0x176a44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x176a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_176a48:
    // 0x176a48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_176a4c:
    if (ctx->pc == 0x176A4Cu) {
        ctx->pc = 0x176A50u;
        goto label_176a50;
    }
    ctx->pc = 0x176A48u;
    {
        const bool branch_taken_0x176a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176a48) {
            ctx->pc = 0x176A58u;
            goto label_176a58;
        }
    }
    ctx->pc = 0x176A50u;
label_176a50:
    // 0x176a50: 0x10000002  b           . + 4 + (0x2 << 2)
label_176a54:
    if (ctx->pc == 0x176A54u) {
        ctx->pc = 0x176A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A50u;
        // 0x176a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A58u;
        goto label_176a58;
    }
    ctx->pc = 0x176A50u;
    {
        const bool branch_taken_0x176a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A50u;
        // 0x176a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a50) {
            ctx->pc = 0x176A5Cu;
            goto label_176a5c;
        }
    }
    ctx->pc = 0x176A58u;
label_176a58:
    // 0x176a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176a5c:
    // 0x176a5c: 0x0  nop
    ctx->pc = 0x176a5cu;
    // NOP
label_176a60:
    // 0x176a60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x176a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_176a64:
    // 0x176a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_176a68:
    // 0x176a68: 0x8e630c20  lw          $v1, 0xC20($s3)
    ctx->pc = 0x176a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176a6c:
    // 0x176a6c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x176a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_176a70:
    // 0x176a70: 0x1440fe8e  bnez        $v0, . + 4 + (-0x172 << 2)
label_176a74:
    if (ctx->pc == 0x176A74u) {
        ctx->pc = 0x176A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A70u;
        // 0x176a74: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A78u;
        goto label_176a78;
    }
    ctx->pc = 0x176A70u;
    {
        const bool branch_taken_0x176a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A70u;
        // 0x176a74: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a70) {
            ctx->pc = 0x1764ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1764ac;
        }
    }
    ctx->pc = 0x176A78u;
label_176a78:
    // 0x176a78: 0x1603000e  bne         $s0, $v1, . + 4 + (0xE << 2)
label_176a7c:
    if (ctx->pc == 0x176A7Cu) {
        ctx->pc = 0x176A80u;
        goto label_176a80;
    }
    ctx->pc = 0x176A78u;
    {
        const bool branch_taken_0x176a78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x176a78) {
            ctx->pc = 0x176AB4u;
            goto label_176ab4;
        }
    }
    ctx->pc = 0x176A80u;
label_176a80:
    // 0x176a80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_176a84:
    // 0x176a84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_176a88:
    // 0x176a88: 0xae630c28  sw          $v1, 0xC28($s3)
    ctx->pc = 0x176a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3112), GPR_U32(ctx, 3));
label_176a8c:
    // 0x176a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x176a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_176a90:
    // 0x176a90: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x176a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a94:
    // 0x176a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176a98:
    // 0x176a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_176a9c:
    // 0x176a9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_176aa0:
    // 0x176aa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x176aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_176aa4:
    // 0x176aa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x176aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_176aa8:
    // 0x176aa8: 0x0  nop
    ctx->pc = 0x176aa8u;
    // NOP
label_176aac:
    // 0x176aac: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x176aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_176ab0:
    // 0x176ab0: 0xa2620c24  sb          $v0, 0xC24($s3)
    ctx->pc = 0x176ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3108), (uint8_t)GPR_U32(ctx, 2));
label_176ab4:
    // 0x176ab4: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x176ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
label_176ab8:
    // 0x176ab8: 0x38420040  xori        $v0, $v0, 0x40
    ctx->pc = 0x176ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)64);
label_176abc:
    // 0x176abc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x176abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_176ac0:
    // 0x176ac0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_176ac4:
    // 0x176ac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176ac8:
    // 0x176ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_176acc:
    // 0x176acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_176ad0:
    // 0x176ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176ad4:
    // 0x176ad4: 0x3e00008  jr          $ra
label_176ad8:
    if (ctx->pc == 0x176AD8u) {
        ctx->pc = 0x176AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AD4u;
        // 0x176ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176ADCu;
        goto label_fallthrough_0x176ad4;
    }
    ctx->pc = 0x176AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AD4u;
        // 0x176ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176ad4:
    ctx->pc = 0x176ADCu;
}
