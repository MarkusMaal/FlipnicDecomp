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

// Function: FUN_00205250
// Address: 0x205250 - 0x205d58
void FUN_00205250_0x205250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205250_0x205250");
#endif

    switch (ctx->pc) {
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        case 0x2052a8u: goto label_2052a8;
        case 0x2052acu: goto label_2052ac;
        case 0x2052b0u: goto label_2052b0;
        case 0x2052b4u: goto label_2052b4;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052bcu: goto label_2052bc;
        case 0x2052c0u: goto label_2052c0;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052c8u: goto label_2052c8;
        case 0x2052ccu: goto label_2052cc;
        case 0x2052d0u: goto label_2052d0;
        case 0x2052d4u: goto label_2052d4;
        case 0x2052d8u: goto label_2052d8;
        case 0x2052dcu: goto label_2052dc;
        case 0x2052e0u: goto label_2052e0;
        case 0x2052e4u: goto label_2052e4;
        case 0x2052e8u: goto label_2052e8;
        case 0x2052ecu: goto label_2052ec;
        case 0x2052f0u: goto label_2052f0;
        case 0x2052f4u: goto label_2052f4;
        case 0x2052f8u: goto label_2052f8;
        case 0x2052fcu: goto label_2052fc;
        case 0x205300u: goto label_205300;
        case 0x205304u: goto label_205304;
        case 0x205308u: goto label_205308;
        case 0x20530cu: goto label_20530c;
        case 0x205310u: goto label_205310;
        case 0x205314u: goto label_205314;
        case 0x205318u: goto label_205318;
        case 0x20531cu: goto label_20531c;
        case 0x205320u: goto label_205320;
        case 0x205324u: goto label_205324;
        case 0x205328u: goto label_205328;
        case 0x20532cu: goto label_20532c;
        case 0x205330u: goto label_205330;
        case 0x205334u: goto label_205334;
        case 0x205338u: goto label_205338;
        case 0x20533cu: goto label_20533c;
        case 0x205340u: goto label_205340;
        case 0x205344u: goto label_205344;
        case 0x205348u: goto label_205348;
        case 0x20534cu: goto label_20534c;
        case 0x205350u: goto label_205350;
        case 0x205354u: goto label_205354;
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        case 0x205420u: goto label_205420;
        case 0x205424u: goto label_205424;
        case 0x205428u: goto label_205428;
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205434u: goto label_205434;
        case 0x205438u: goto label_205438;
        case 0x20543cu: goto label_20543c;
        case 0x205440u: goto label_205440;
        case 0x205444u: goto label_205444;
        case 0x205448u: goto label_205448;
        case 0x20544cu: goto label_20544c;
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d4u: goto label_2055d4;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055dcu: goto label_2055dc;
        case 0x2055e0u: goto label_2055e0;
        case 0x2055e4u: goto label_2055e4;
        case 0x2055e8u: goto label_2055e8;
        case 0x2055ecu: goto label_2055ec;
        case 0x2055f0u: goto label_2055f0;
        case 0x2055f4u: goto label_2055f4;
        case 0x2055f8u: goto label_2055f8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205600u: goto label_205600;
        case 0x205604u: goto label_205604;
        case 0x205608u: goto label_205608;
        case 0x20560cu: goto label_20560c;
        case 0x205610u: goto label_205610;
        case 0x205614u: goto label_205614;
        case 0x205618u: goto label_205618;
        case 0x20561cu: goto label_20561c;
        case 0x205620u: goto label_205620;
        case 0x205624u: goto label_205624;
        case 0x205628u: goto label_205628;
        case 0x20562cu: goto label_20562c;
        case 0x205630u: goto label_205630;
        case 0x205634u: goto label_205634;
        case 0x205638u: goto label_205638;
        case 0x20563cu: goto label_20563c;
        case 0x205640u: goto label_205640;
        case 0x205644u: goto label_205644;
        case 0x205648u: goto label_205648;
        case 0x20564cu: goto label_20564c;
        case 0x205650u: goto label_205650;
        case 0x205654u: goto label_205654;
        case 0x205658u: goto label_205658;
        case 0x20565cu: goto label_20565c;
        case 0x205660u: goto label_205660;
        case 0x205664u: goto label_205664;
        case 0x205668u: goto label_205668;
        case 0x20566cu: goto label_20566c;
        case 0x205670u: goto label_205670;
        case 0x205674u: goto label_205674;
        case 0x205678u: goto label_205678;
        case 0x20567cu: goto label_20567c;
        case 0x205680u: goto label_205680;
        case 0x205684u: goto label_205684;
        case 0x205688u: goto label_205688;
        case 0x20568cu: goto label_20568c;
        case 0x205690u: goto label_205690;
        case 0x205694u: goto label_205694;
        case 0x205698u: goto label_205698;
        case 0x20569cu: goto label_20569c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a4u: goto label_2056a4;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056acu: goto label_2056ac;
        case 0x2056b0u: goto label_2056b0;
        case 0x2056b4u: goto label_2056b4;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056bcu: goto label_2056bc;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c4u: goto label_2056c4;
        case 0x2056c8u: goto label_2056c8;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056d0u: goto label_2056d0;
        case 0x2056d4u: goto label_2056d4;
        case 0x2056d8u: goto label_2056d8;
        case 0x2056dcu: goto label_2056dc;
        case 0x2056e0u: goto label_2056e0;
        case 0x2056e4u: goto label_2056e4;
        case 0x2056e8u: goto label_2056e8;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        case 0x205820u: goto label_205820;
        case 0x205824u: goto label_205824;
        case 0x205828u: goto label_205828;
        case 0x20582cu: goto label_20582c;
        case 0x205830u: goto label_205830;
        case 0x205834u: goto label_205834;
        case 0x205838u: goto label_205838;
        case 0x20583cu: goto label_20583c;
        case 0x205840u: goto label_205840;
        case 0x205844u: goto label_205844;
        case 0x205848u: goto label_205848;
        case 0x20584cu: goto label_20584c;
        case 0x205850u: goto label_205850;
        case 0x205854u: goto label_205854;
        case 0x205858u: goto label_205858;
        case 0x20585cu: goto label_20585c;
        case 0x205860u: goto label_205860;
        case 0x205864u: goto label_205864;
        case 0x205868u: goto label_205868;
        case 0x20586cu: goto label_20586c;
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        case 0x2058f8u: goto label_2058f8;
        case 0x2058fcu: goto label_2058fc;
        case 0x205900u: goto label_205900;
        case 0x205904u: goto label_205904;
        case 0x205908u: goto label_205908;
        case 0x20590cu: goto label_20590c;
        case 0x205910u: goto label_205910;
        case 0x205914u: goto label_205914;
        case 0x205918u: goto label_205918;
        case 0x20591cu: goto label_20591c;
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        case 0x205ce0u: goto label_205ce0;
        case 0x205ce4u: goto label_205ce4;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cecu: goto label_205cec;
        case 0x205cf0u: goto label_205cf0;
        case 0x205cf4u: goto label_205cf4;
        case 0x205cf8u: goto label_205cf8;
        case 0x205cfcu: goto label_205cfc;
        case 0x205d00u: goto label_205d00;
        case 0x205d04u: goto label_205d04;
        case 0x205d08u: goto label_205d08;
        case 0x205d0cu: goto label_205d0c;
        case 0x205d10u: goto label_205d10;
        case 0x205d14u: goto label_205d14;
        case 0x205d18u: goto label_205d18;
        case 0x205d1cu: goto label_205d1c;
        case 0x205d20u: goto label_205d20;
        case 0x205d24u: goto label_205d24;
        case 0x205d28u: goto label_205d28;
        case 0x205d2cu: goto label_205d2c;
        case 0x205d30u: goto label_205d30;
        case 0x205d34u: goto label_205d34;
        case 0x205d38u: goto label_205d38;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d40u: goto label_205d40;
        case 0x205d44u: goto label_205d44;
        case 0x205d48u: goto label_205d48;
        case 0x205d4cu: goto label_205d4c;
        case 0x205d50u: goto label_205d50;
        case 0x205d54u: goto label_205d54;
        default: break;
    }

    ctx->pc = 0x205250u;

label_205250:
    // 0x205250: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_205254:
    // 0x205254: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x205254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
label_205258:
    // 0x205258: 0xffbe0300  sd          $fp, 0x300($sp)
    ctx->pc = 0x205258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 30));
label_20525c:
    // 0x20525c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x20525cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205260:
    // 0x205260: 0xffb702f0  sd          $s7, 0x2F0($sp)
    ctx->pc = 0x205260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 23));
label_205264:
    // 0x205264: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x205264u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205268:
    // 0x205268: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x205268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
label_20526c:
    // 0x20526c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20526cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205270:
    // 0x205270: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x205270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
label_205274:
    // 0x205274: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x205274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205278:
    // 0x205278: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x205278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_20527c:
    // 0x20527c: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_205280:
    // 0x205280: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x205280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
label_205284:
    // 0x205284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x205284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205288:
    // 0x205288: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x205288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
label_20528c:
    // 0x20528c: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x20528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
label_205290:
    // 0x205290: 0xffb00280  sd          $s0, 0x280($sp)
    ctx->pc = 0x205290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
label_205294:
    // 0x205294: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x205294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_205298:
    // 0x205298: 0x10000002  b           . + 4 + (0x2 << 2)
label_20529c:
    if (ctx->pc == 0x20529Cu) {
        ctx->pc = 0x20529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205298u;
        // 0x20529c: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052A0u;
        goto label_2052a0;
    }
    ctx->pc = 0x205298u;
    {
        const bool branch_taken_0x205298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205298u;
        // 0x20529c: 0xafa00264  sw          $zero, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205298) {
            ctx->pc = 0x2052A4u;
            goto label_2052a4;
        }
    }
    ctx->pc = 0x2052A0u;
label_2052a0:
    // 0x2052a0: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2052a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2052a4:
    // 0x2052a4: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_2052a8:
    // 0x2052a8: 0x1080029e  beqz        $a0, . + 4 + (0x29E << 2)
label_2052ac:
    if (ctx->pc == 0x2052ACu) {
        ctx->pc = 0x2052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A8u;
        // 0x2052ac: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052B0u;
        goto label_2052b0;
    }
    ctx->pc = 0x2052A8u;
    {
        const bool branch_taken_0x2052a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A8u;
        // 0x2052ac: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052a8) {
            ctx->pc = 0x205D24u;
            goto label_205d24;
        }
    }
    ctx->pc = 0x2052B0u;
label_2052b0:
    // 0x2052b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2052b4:
    // 0x2052b4: 0x14420020  bne         $v0, $v0, . + 4 + (0x20 << 2)
label_2052b8:
    if (ctx->pc == 0x2052B8u) {
        ctx->pc = 0x2052B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B4u;
        // 0x2052b8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052BCu;
        goto label_2052bc;
    }
    ctx->pc = 0x2052B4u;
    {
        const bool branch_taken_0x2052b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 2));
        ctx->pc = 0x2052B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B4u;
        // 0x2052b8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052b4) {
            ctx->pc = 0x205338u;
            goto label_205338;
        }
    }
    ctx->pc = 0x2052BCu;
label_2052bc:
    // 0x2052bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2052bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2052c0:
    // 0x2052c0: 0x24454dd1  addiu       $a1, $v0, 0x4DD1
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_2052c4:
    // 0x2052c4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2052c8:
    // 0x2052c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2052c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2052cc:
    // 0x2052cc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2052ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2052d0:
    // 0x2052d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2052d4:
    if (ctx->pc == 0x2052D4u) {
        ctx->pc = 0x2052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D0u;
        // 0x2052d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052D8u;
        goto label_2052d8;
    }
    ctx->pc = 0x2052D0u;
    {
        const bool branch_taken_0x2052d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D0u;
        // 0x2052d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052d0) {
            ctx->pc = 0x205334u;
            goto label_205334;
        }
    }
    ctx->pc = 0x2052D8u;
label_2052d8:
    // 0x2052d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2052dc:
    if (ctx->pc == 0x2052DCu) {
        ctx->pc = 0x2052DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D8u;
        // 0x2052dc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052E0u;
        goto label_2052e0;
    }
    ctx->pc = 0x2052D8u;
    {
        const bool branch_taken_0x2052d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D8u;
        // 0x2052dc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052d8) {
            ctx->pc = 0x2052F8u;
            goto label_2052f8;
        }
    }
    ctx->pc = 0x2052E0u;
label_2052e0:
    // 0x2052e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2052e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2052e4:
    // 0x2052e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2052e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2052e8:
    // 0x2052e8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2052e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2052ec:
    // 0x2052ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2052f0:
    // 0x2052f0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2052f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_2052f4:
    // 0x2052f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2052f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2052f8:
    // 0x2052f8: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_2052fc:
    if (ctx->pc == 0x2052FCu) {
        ctx->pc = 0x2052FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052F8u;
        // 0x2052fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205300u;
        goto label_205300;
    }
    ctx->pc = 0x2052F8u;
    {
        const bool branch_taken_0x2052f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2052f8) {
            ctx->pc = 0x2052FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2052F8u;
            // 0x2052fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205314u;
            goto label_205314;
        }
    }
    ctx->pc = 0x205300u;
label_205300:
    // 0x205300: 0xc080432  jal         func_2010C8
label_205304:
    if (ctx->pc == 0x205304u) {
        ctx->pc = 0x205304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205300u;
        // 0x205304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205308u;
        goto label_205308;
    }
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 31, 0x205308u);
    ctx->pc = 0x205304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205300u;
    // 0x205304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205300u, 0x205308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205308u;
label_205308:
    // 0x205308: 0x14400287  bnez        $v0, . + 4 + (0x287 << 2)
label_20530c:
    if (ctx->pc == 0x20530Cu) {
        ctx->pc = 0x20530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205308u;
        // 0x20530c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205310u;
        goto label_205310;
    }
    ctx->pc = 0x205308u;
    {
        const bool branch_taken_0x205308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205308u;
        // 0x20530c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205308) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205310u;
label_205310:
    // 0x205310: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205314:
    // 0x205314: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x205314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_205318:
    // 0x205318: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x205318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20531c:
    // 0x20531c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x20531cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205320:
    // 0x205320: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x205320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_205324:
    // 0x205324: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_205328:
    if (ctx->pc == 0x205328u) {
        ctx->pc = 0x205328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205324u;
        // 0x205328: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20532Cu;
        goto label_20532c;
    }
    ctx->pc = 0x205324u;
    {
        const bool branch_taken_0x205324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205324) {
            ctx->pc = 0x205328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205324u;
            // 0x205328: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052e0;
        }
    }
    ctx->pc = 0x20532Cu;
label_20532c:
    // 0x20532c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_205330:
    if (ctx->pc == 0x205330u) {
        ctx->pc = 0x205330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20532Cu;
        // 0x205330: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205334u;
        goto label_205334;
    }
    ctx->pc = 0x20532Cu;
    {
        const bool branch_taken_0x20532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20532Cu;
        // 0x205330: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20532c) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205334u;
label_205334:
    // 0x205334: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x205334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_205338:
    // 0x205338: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
label_20533c:
    if (ctx->pc == 0x20533Cu) {
        ctx->pc = 0x20533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205338u;
        // 0x20533c: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205340u;
        goto label_205340;
    }
    ctx->pc = 0x205338u;
    {
        const bool branch_taken_0x205338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205338u;
        // 0x20533c: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205338) {
            ctx->pc = 0x205378u;
            goto label_205378;
        }
    }
    ctx->pc = 0x205340u;
label_205340:
    // 0x205340: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x205340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205344:
    // 0x205344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205348:
    // 0x205348: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x205348u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_20534c:
    // 0x20534c: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x20534cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_205350:
    // 0x205350: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_205354:
    if (ctx->pc == 0x205354u) {
        ctx->pc = 0x205354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205350u;
        // 0x205354: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205358u;
        goto label_205358;
    }
    ctx->pc = 0x205350u;
    {
        const bool branch_taken_0x205350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205350u;
        // 0x205354: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205350) {
            ctx->pc = 0x205554u;
            goto label_205554;
        }
    }
    ctx->pc = 0x205358u;
label_205358:
    // 0x205358: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_20535c:
    // 0x20535c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_205360:
    // 0x205360: 0x244253c0  addiu       $v0, $v0, 0x53C0
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21440));
label_205364:
    // 0x205364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205368:
    // 0x205368: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20536c:
    // 0x20536c: 0x800008  jr          $a0
label_205370:
    if (ctx->pc == 0x205370u) {
        ctx->pc = 0x205374u;
        goto label_205374;
    }
    ctx->pc = 0x20536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205374u: goto label_205374;
            case 0x2053D8u: goto label_2053d8;
            case 0x2053E0u: goto label_2053e0;
            case 0x2053E8u: goto label_2053e8;
            case 0x2053F0u: goto label_2053f0;
            case 0x2053F8u: goto label_2053f8;
            case 0x20540Cu: goto label_20540c;
            case 0x205410u: goto label_205410;
            case 0x20542Cu: goto label_20542c;
            case 0x205444u: goto label_205444;
            case 0x205448u: goto label_205448;
            case 0x205464u: goto label_205464;
            case 0x205480u: goto label_205480;
            case 0x2054A0u: goto label_2054a0;
            case 0x2054A8u: goto label_2054a8;
            case 0x2054B0u: goto label_2054b0;
            case 0x2054CCu: goto label_2054cc;
            case 0x2054D8u: goto label_2054d8;
            case 0x2054F8u: goto label_2054f8;
            case 0x20554Cu: goto label_20554c;
            case 0x205554u: goto label_205554;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20536Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x205374u;
label_205374:
    // 0x205374: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x205374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_205378:
    // 0x205378: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20537c:
    // 0x20537c: 0x0  nop
    ctx->pc = 0x20537cu;
    // NOP
label_205380:
    // 0x205380: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205384:
    // 0x205384: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_205388:
    if (ctx->pc == 0x205388u) {
        ctx->pc = 0x205388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205384u;
        // 0x205388: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20538Cu;
        goto label_20538c;
    }
    ctx->pc = 0x205384u;
    {
        const bool branch_taken_0x205384 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x205384) {
            ctx->pc = 0x205388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205384u;
            // 0x205388: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2053A0u;
            goto label_2053a0;
        }
    }
    ctx->pc = 0x20538Cu;
label_20538c:
    // 0x20538c: 0xc080432  jal         func_2010C8
label_205390:
    if (ctx->pc == 0x205390u) {
        ctx->pc = 0x205390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20538Cu;
        // 0x205390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205394u;
        goto label_205394;
    }
    ctx->pc = 0x20538Cu;
    SET_GPR_U32(ctx, 31, 0x205394u);
    ctx->pc = 0x205390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20538Cu;
    // 0x205390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20538Cu, 0x205394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205394u;
label_205394:
    // 0x205394: 0x14400261  bnez        $v0, . + 4 + (0x261 << 2)
label_205398:
    if (ctx->pc == 0x205398u) {
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20539Cu;
        goto label_20539c;
    }
    ctx->pc = 0x205394u;
    {
        const bool branch_taken_0x205394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205394u;
        // 0x205398: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205394) {
            ctx->pc = 0x205D1Cu;
            goto label_205d1c;
        }
    }
    ctx->pc = 0x20539Cu;
label_20539c:
    // 0x20539c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2053a0:
    // 0x2053a0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2053a4:
    // 0x2053a4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2053a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2053a8:
    // 0x2053a8: 0x1443025e  bne         $v0, $v1, . + 4 + (0x25E << 2)
label_2053ac:
    if (ctx->pc == 0x2053ACu) {
        ctx->pc = 0x2053ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053A8u;
        // 0x2053ac: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053B0u;
        goto label_2053b0;
    }
    ctx->pc = 0x2053A8u;
    {
        const bool branch_taken_0x2053a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2053ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053A8u;
        // 0x2053ac: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053a8) {
            ctx->pc = 0x205D24u;
            goto label_205d24;
        }
    }
    ctx->pc = 0x2053B0u;
label_2053b0:
    // 0x2053b0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2053b4:
    // 0x2053b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2053b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2053b8:
    // 0x2053b8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2053bc:
    // 0x2053bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2053c0:
    // 0x2053c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2053c4:
    // 0x2053c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2053c8:
    // 0x2053c8: 0x1a00ffed  blez        $s0, . + 4 + (-0x13 << 2)
label_2053cc:
    if (ctx->pc == 0x2053CCu) {
        ctx->pc = 0x2053CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053C8u;
        // 0x2053cc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053D0u;
        goto label_2053d0;
    }
    ctx->pc = 0x2053C8u;
    {
        const bool branch_taken_0x2053c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2053CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053C8u;
        // 0x2053cc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053c8) {
            ctx->pc = 0x205380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205380;
        }
    }
    ctx->pc = 0x2053D0u;
label_2053d0:
    // 0x2053d0: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_2053d4:
    if (ctx->pc == 0x2053D4u) {
        ctx->pc = 0x2053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D0u;
        // 0x2053d4: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053D8u;
        goto label_2053d8;
    }
    ctx->pc = 0x2053D0u;
    {
        const bool branch_taken_0x2053d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D0u;
        // 0x2053d4: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053d0) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x2053D8u;
label_2053d8:
    // 0x2053d8: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_2053dc:
    if (ctx->pc == 0x2053DCu) {
        ctx->pc = 0x2053DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D8u;
        // 0x2053dc: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053E0u;
        goto label_2053e0;
    }
    ctx->pc = 0x2053D8u;
    {
        const bool branch_taken_0x2053d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D8u;
        // 0x2053dc: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053d8) {
            ctx->pc = 0x205348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205348;
        }
    }
    ctx->pc = 0x2053E0u;
label_2053e0:
    // 0x2053e0: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_2053e4:
    if (ctx->pc == 0x2053E4u) {
        ctx->pc = 0x2053E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E0u;
        // 0x2053e4: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053E8u;
        goto label_2053e8;
    }
    ctx->pc = 0x2053E0u;
    {
        const bool branch_taken_0x2053e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E0u;
        // 0x2053e4: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053e0) {
            ctx->pc = 0x205348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205348;
        }
    }
    ctx->pc = 0x2053E8u;
label_2053e8:
    // 0x2053e8: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_2053ec:
    if (ctx->pc == 0x2053ECu) {
        ctx->pc = 0x2053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E8u;
        // 0x2053ec: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053F0u;
        goto label_2053f0;
    }
    ctx->pc = 0x2053E8u;
    {
        const bool branch_taken_0x2053e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E8u;
        // 0x2053ec: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053e8) {
            ctx->pc = 0x205348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205348;
        }
    }
    ctx->pc = 0x2053F0u;
label_2053f0:
    // 0x2053f0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_2053f4:
    if (ctx->pc == 0x2053F4u) {
        ctx->pc = 0x2053F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053F0u;
        // 0x2053f4: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053F8u;
        goto label_2053f8;
    }
    ctx->pc = 0x2053F0u;
    {
        const bool branch_taken_0x2053f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053F0u;
        // 0x2053f4: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053f0) {
            ctx->pc = 0x205348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205348;
        }
    }
    ctx->pc = 0x2053F8u;
label_2053f8:
    // 0x2053f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2053fc:
    // 0x2053fc: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x2053fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_205400:
    // 0x205400: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x205400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_205404:
    // 0x205404: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_205408:
    if (ctx->pc == 0x205408u) {
        ctx->pc = 0x205408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205404u;
        // 0x205408: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20540Cu;
        goto label_20540c;
    }
    ctx->pc = 0x205404u;
    {
        const bool branch_taken_0x205404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205404u;
        // 0x205408: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205404) {
            ctx->pc = 0x205348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205348;
        }
    }
    ctx->pc = 0x20540Cu;
label_20540c:
    // 0x20540c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x20540cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_205410:
    // 0x205410: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_205414:
    // 0x205414: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x205414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_205418:
    // 0x205418: 0x244233d0  addiu       $v0, $v0, 0x33D0
    ctx->pc = 0x205418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13264));
label_20541c:
    // 0x20541c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x20541cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205420:
    // 0x205420: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_205424:
    // 0x205424: 0x10000057  b           . + 4 + (0x57 << 2)
label_205428:
    if (ctx->pc == 0x205428u) {
        ctx->pc = 0x205428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205424u;
        // 0x205428: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20542Cu;
        goto label_20542c;
    }
    ctx->pc = 0x205424u;
    {
        const bool branch_taken_0x205424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205424u;
        // 0x205428: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205424) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x20542Cu;
label_20542c:
    // 0x20542c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x20542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_205430:
    // 0x205430: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205434:
    // 0x205434: 0x244233d0  addiu       $v0, $v0, 0x33D0
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13264));
label_205438:
    // 0x205438: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x205438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
label_20543c:
    // 0x20543c: 0x10000051  b           . + 4 + (0x51 << 2)
label_205440:
    if (ctx->pc == 0x205440u) {
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20543Cu;
        // 0x205440: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205444u;
        goto label_205444;
    }
    ctx->pc = 0x20543Cu;
    {
        const bool branch_taken_0x20543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20543Cu;
        // 0x205440: 0xafa20264  sw          $v0, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20543c) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x205444u;
label_205444:
    // 0x205444: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x205444u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_205448:
    // 0x205448: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_20544c:
    // 0x20544c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205450:
    // 0x205450: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
label_205454:
    // 0x205454: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_205458:
    // 0x205458: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x205458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20545c:
    // 0x20545c: 0x10000049  b           . + 4 + (0x49 << 2)
label_205460:
    if (ctx->pc == 0x205460u) {
        ctx->pc = 0x205460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20545Cu;
        // 0x205460: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205464u;
        goto label_205464;
    }
    ctx->pc = 0x20545Cu;
    {
        const bool branch_taken_0x20545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20545Cu;
        // 0x205460: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20545c) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x205464u;
label_205464:
    // 0x205464: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_205468:
    // 0x205468: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x205468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20546c:
    // 0x20546c: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
label_205470:
    // 0x205470: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205474:
    // 0x205474: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_205478:
    // 0x205478: 0x10000042  b           . + 4 + (0x42 << 2)
label_20547c:
    if (ctx->pc == 0x20547Cu) {
        ctx->pc = 0x20547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205478u;
        // 0x20547c: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205480u;
        goto label_205480;
    }
    ctx->pc = 0x205478u;
    {
        const bool branch_taken_0x205478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205478u;
        // 0x20547c: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205478) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x205480u;
label_205480:
    // 0x205480: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_205484:
    // 0x205484: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x205484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205488:
    // 0x205488: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x205488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
label_20548c:
    // 0x20548c: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x20548cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_205490:
    // 0x205490: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_205494:
    // 0x205494: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205498:
    // 0x205498: 0x1000003a  b           . + 4 + (0x3A << 2)
label_20549c:
    if (ctx->pc == 0x20549Cu) {
        ctx->pc = 0x20549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205498u;
        // 0x20549c: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054A0u;
        goto label_2054a0;
    }
    ctx->pc = 0x205498u;
    {
        const bool branch_taken_0x205498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205498u;
        // 0x20549c: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205498) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x2054A0u;
label_2054a0:
    // 0x2054a0: 0x10000038  b           . + 4 + (0x38 << 2)
label_2054a4:
    if (ctx->pc == 0x2054A4u) {
        ctx->pc = 0x2054A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A0u;
        // 0x2054a4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054A8u;
        goto label_2054a8;
    }
    ctx->pc = 0x2054A0u;
    {
        const bool branch_taken_0x2054a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A0u;
        // 0x2054a4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054a0) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x2054A8u;
label_2054a8:
    // 0x2054a8: 0x10000036  b           . + 4 + (0x36 << 2)
label_2054ac:
    if (ctx->pc == 0x2054ACu) {
        ctx->pc = 0x2054ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A8u;
        // 0x2054ac: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054B0u;
        goto label_2054b0;
    }
    ctx->pc = 0x2054A8u;
    {
        const bool branch_taken_0x2054a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A8u;
        // 0x2054ac: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054a8) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x2054B0u;
label_2054b0:
    // 0x2054b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2054b4:
    // 0x2054b4: 0xc081756  jal         func_205D58
label_2054b8:
    if (ctx->pc == 0x2054B8u) {
        ctx->pc = 0x2054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054B4u;
        // 0x2054b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054BCu;
        goto label_2054bc;
    }
    ctx->pc = 0x2054B4u;
    SET_GPR_U32(ctx, 31, 0x2054BCu);
    ctx->pc = 0x2054B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2054B4u;
    // 0x2054b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205D58u, 0x2054B4u, 0x2054BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2054BCu;
label_2054bc:
    // 0x2054bc: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x2054bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_2054c0:
    // 0x2054c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2054c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2054c4:
    // 0x2054c4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2054c8:
    if (ctx->pc == 0x2054C8u) {
        ctx->pc = 0x2054C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054C4u;
        // 0x2054c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054CCu;
        goto label_2054cc;
    }
    ctx->pc = 0x2054C4u;
    {
        const bool branch_taken_0x2054c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054C4u;
        // 0x2054c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054c4) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x2054CCu;
label_2054cc:
    // 0x2054cc: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x2054ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_2054d0:
    // 0x2054d0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2054d4:
    if (ctx->pc == 0x2054D4u) {
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054D8u;
        goto label_2054d8;
    }
    ctx->pc = 0x2054D0u;
    {
        const bool branch_taken_0x2054d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054D0u;
        // 0x2054d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054d0) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x2054D8u;
label_2054d8:
    // 0x2054d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_2054dc:
    // 0x2054dc: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x2054dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_2054e0:
    // 0x2054e0: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x2054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
label_2054e4:
    // 0x2054e4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2054e8:
    // 0x2054e8: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2054e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2054ec:
    // 0x2054ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2054f0:
    // 0x2054f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_2054f4:
    if (ctx->pc == 0x2054F4u) {
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054F8u;
        goto label_2054f8;
    }
    ctx->pc = 0x2054F0u;
    {
        const bool branch_taken_0x2054f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054f0) {
            ctx->pc = 0x205584u;
            goto label_205584;
        }
    }
    ctx->pc = 0x2054F8u;
label_2054f8:
    // 0x2054f8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2054f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2054fc:
    // 0x2054fc: 0x5440ff69  bnel        $v0, $zero, . + 4 + (-0x97 << 2)
label_205500:
    if (ctx->pc == 0x205500u) {
        ctx->pc = 0x205500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054FCu;
        // 0x205500: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205504u;
        goto label_205504;
    }
    ctx->pc = 0x2054FCu;
    {
        const bool branch_taken_0x2054fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2054fc) {
            ctx->pc = 0x205500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2054FCu;
            // 0x205500: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205504u;
label_205504:
    // 0x205504: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x205504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_205508:
    // 0x205508: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20550c:
    if (ctx->pc == 0x20550Cu) {
        ctx->pc = 0x20550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205508u;
        // 0x20550c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205510u;
        goto label_205510;
    }
    ctx->pc = 0x205508u;
    {
        const bool branch_taken_0x205508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205508u;
        // 0x20550c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205508) {
            ctx->pc = 0x205524u;
            goto label_205524;
        }
    }
    ctx->pc = 0x205510u;
label_205510:
    // 0x205510: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205514:
    // 0x205514: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_205518:
    // 0x205518: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_20551c:
    // 0x20551c: 0x1000ff61  b           . + 4 + (-0x9F << 2)
label_205520:
    if (ctx->pc == 0x205520u) {
        ctx->pc = 0x205520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20551Cu;
        // 0x205520: 0xa49e0000  sh          $fp, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205524u;
        goto label_205524;
    }
    ctx->pc = 0x20551Cu;
    {
        const bool branch_taken_0x20551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20551Cu;
        // 0x205520: 0xa49e0000  sh          $fp, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20551c) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205524u;
label_205524:
    // 0x205524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_205528:
    if (ctx->pc == 0x205528u) {
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20552Cu;
        goto label_20552c;
    }
    ctx->pc = 0x205524u;
    {
        const bool branch_taken_0x205524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205524) {
            ctx->pc = 0x20553Cu;
            goto label_20553c;
        }
    }
    ctx->pc = 0x20552Cu;
label_20552c:
    // 0x20552c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205530:
    // 0x205530: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205534:
    // 0x205534: 0x1000ff5b  b           . + 4 + (-0xA5 << 2)
label_205538:
    if (ctx->pc == 0x205538u) {
        ctx->pc = 0x205538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205534u;
        // 0x205538: 0xfc5e0000  sd          $fp, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20553Cu;
        goto label_20553c;
    }
    ctx->pc = 0x205534u;
    {
        const bool branch_taken_0x205534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205534u;
        // 0x205538: 0xfc5e0000  sd          $fp, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205534) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x20553Cu;
label_20553c:
    // 0x20553c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x20553cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205540:
    // 0x205540: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205544:
    // 0x205544: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
label_205548:
    if (ctx->pc == 0x205548u) {
        ctx->pc = 0x205548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205544u;
        // 0x205548: 0xac9e0000  sw          $fp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20554Cu;
        goto label_20554c;
    }
    ctx->pc = 0x205544u;
    {
        const bool branch_taken_0x205544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205544u;
        // 0x205548: 0xac9e0000  sw          $fp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205544) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x20554Cu;
label_20554c:
    // 0x20554c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
label_205550:
    if (ctx->pc == 0x205550u) {
        ctx->pc = 0x205550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20554Cu;
        // 0x205550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205554u;
        goto label_205554;
    }
    ctx->pc = 0x20554Cu;
    {
        const bool branch_taken_0x20554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20554Cu;
        // 0x205550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20554c) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205554u;
label_205554:
    // 0x205554: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_205558:
    // 0x205558: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_20555c:
    // 0x20555c: 0x246333d0  addiu       $v1, $v1, 0x33D0
    ctx->pc = 0x20555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13264));
label_205560:
    // 0x205560: 0x24424dd1  addiu       $v0, $v0, 0x4DD1
    ctx->pc = 0x205560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_205564:
    // 0x205564: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x205564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_205568:
    // 0x205568: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x205568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_20556c:
    // 0x20556c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_205570:
    // 0x205570: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205574:
    // 0x205574: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x205574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
label_205578:
    // 0x205578: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x205578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20557c:
    // 0x20557c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_205580:
    // 0x205580: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x205580u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_205584:
    // 0x205584: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205588:
    // 0x205588: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_20558c:
    if (ctx->pc == 0x20558Cu) {
        ctx->pc = 0x20558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205588u;
        // 0x20558c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205590u;
        goto label_205590;
    }
    ctx->pc = 0x205588u;
    {
        const bool branch_taken_0x205588 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205588u;
        // 0x20558c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205588) {
            ctx->pc = 0x2055A4u;
            goto label_2055a4;
        }
    }
    ctx->pc = 0x205590u;
label_205590:
    // 0x205590: 0xc080432  jal         func_2010C8
label_205594:
    if (ctx->pc == 0x205594u) {
        ctx->pc = 0x205594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205590u;
        // 0x205594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205598u;
        goto label_205598;
    }
    ctx->pc = 0x205590u;
    SET_GPR_U32(ctx, 31, 0x205598u);
    ctx->pc = 0x205594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205590u;
    // 0x205594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205590u, 0x205598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205598u;
label_205598:
    // 0x205598: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
label_20559c:
    if (ctx->pc == 0x20559Cu) {
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055A0u;
        goto label_2055a0;
    }
    ctx->pc = 0x205598u;
    {
        const bool branch_taken_0x205598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205598) {
            ctx->pc = 0x205D1Cu;
            goto label_205d1c;
        }
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x2055a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_2055a4:
    // 0x2055a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2055a8:
    if (ctx->pc == 0x2055A8u) {
        ctx->pc = 0x2055A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055A4u;
        // 0x2055a8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055ACu;
        goto label_2055ac;
    }
    ctx->pc = 0x2055A4u;
    {
        const bool branch_taken_0x2055a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2055A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055A4u;
        // 0x2055a8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055a4) {
            ctx->pc = 0x205624u;
            goto label_205624;
        }
    }
    ctx->pc = 0x2055ACu;
label_2055ac:
    // 0x2055ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2055acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2055b0:
    // 0x2055b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2055b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2055b4:
    // 0x2055b4: 0x24454dd1  addiu       $a1, $v0, 0x4DD1
    ctx->pc = 0x2055b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_2055b8:
    // 0x2055b8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2055b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2055bc:
    // 0x2055bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2055bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2055c0:
    // 0x2055c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2055c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2055c4:
    // 0x2055c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2055c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2055c8:
    // 0x2055c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2055cc:
    if (ctx->pc == 0x2055CCu) {
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055D0u;
        goto label_2055d0;
    }
    ctx->pc = 0x2055C8u;
    {
        const bool branch_taken_0x2055c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055C8u;
        // 0x2055cc: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055c8) {
            ctx->pc = 0x205624u;
            goto label_205624;
        }
    }
    ctx->pc = 0x2055D0u;
label_2055d0:
    // 0x2055d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2055d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2055d4:
    // 0x2055d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2055d8:
    // 0x2055d8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2055dc:
    // 0x2055dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2055e0:
    // 0x2055e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2055e4:
    if (ctx->pc == 0x2055E4u) {
        ctx->pc = 0x2055E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055E0u;
        // 0x2055e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055E8u;
        goto label_2055e8;
    }
    ctx->pc = 0x2055E0u;
    {
        const bool branch_taken_0x2055e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2055E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055E0u;
        // 0x2055e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055e0) {
            ctx->pc = 0x2055F4u;
            goto label_2055f4;
        }
    }
    ctx->pc = 0x2055E8u;
label_2055e8:
    // 0x2055e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2055ec:
    // 0x2055ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_2055f0:
    if (ctx->pc == 0x2055F0u) {
        ctx->pc = 0x2055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055ECu;
        // 0x2055f0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055F4u;
        goto label_2055f4;
    }
    ctx->pc = 0x2055ECu;
    {
        const bool branch_taken_0x2055ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055ECu;
        // 0x2055f0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055ec) {
            ctx->pc = 0x205604u;
            goto label_205604;
        }
    }
    ctx->pc = 0x2055F4u;
label_2055f4:
    // 0x2055f4: 0xc080432  jal         func_2010C8
label_2055f8:
    if (ctx->pc == 0x2055F8u) {
        ctx->pc = 0x2055F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055F4u;
        // 0x2055f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2055FCu;
        goto label_2055fc;
    }
    ctx->pc = 0x2055F4u;
    SET_GPR_U32(ctx, 31, 0x2055FCu);
    ctx->pc = 0x2055F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055F4u;
    // 0x2055f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x2055F4u, 0x2055FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055FCu;
label_2055fc:
    // 0x2055fc: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
label_205600:
    if (ctx->pc == 0x205600u) {
        ctx->pc = 0x205600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055FCu;
        // 0x205600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205604u;
        goto label_205604;
    }
    ctx->pc = 0x2055FCu;
    {
        const bool branch_taken_0x2055fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055FCu;
        // 0x205600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055fc) {
            ctx->pc = 0x205D1Cu;
            goto label_205d1c;
        }
    }
    ctx->pc = 0x205604u;
label_205604:
    // 0x205604: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x205604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205608:
    // 0x205608: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x205608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_20560c:
    // 0x20560c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_205610:
    // 0x205610: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x205610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205614:
    // 0x205614: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x205614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_205618:
    // 0x205618: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_20561c:
    if (ctx->pc == 0x20561Cu) {
        ctx->pc = 0x20561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205618u;
        // 0x20561c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205620u;
        goto label_205620;
    }
    ctx->pc = 0x205618u;
    {
        const bool branch_taken_0x205618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205618) {
            ctx->pc = 0x20561Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205618u;
            // 0x20561c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2055D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2055d8;
        }
    }
    ctx->pc = 0x205620u;
label_205620:
    // 0x205620: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x205620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_205624:
    // 0x205624: 0x5040ff1f  beql        $v0, $zero, . + 4 + (-0xE1 << 2)
label_205628:
    if (ctx->pc == 0x205628u) {
        ctx->pc = 0x205628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205624u;
        // 0x205628: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20562Cu;
        goto label_20562c;
    }
    ctx->pc = 0x205624u;
    {
        const bool branch_taken_0x205624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205624) {
            ctx->pc = 0x205628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205624u;
            // 0x205628: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x20562Cu;
label_20562c:
    // 0x20562c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_205630:
    // 0x205630: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x205630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_205634:
    // 0x205634: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x205634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_205638:
    // 0x205638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20563c:
    // 0x20563c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_205640:
    // 0x205640: 0x800008  jr          $a0
label_205644:
    if (ctx->pc == 0x205644u) {
        ctx->pc = 0x205648u;
        goto label_205648;
    }
    ctx->pc = 0x205640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205648u: goto label_205648;
            case 0x2056E4u: goto label_2056e4;
            case 0x2057E8u: goto label_2057e8;
            case 0x2058F0u: goto label_2058f0;
            case 0x205B48u: goto label_205b48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x205648u;
label_205648:
    // 0x205648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20564c:
    // 0x20564c: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x20564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_205650:
    // 0x205650: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_205654:
    if (ctx->pc == 0x205654u) {
        ctx->pc = 0x205654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205650u;
        // 0x205654: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205658u;
        goto label_205658;
    }
    ctx->pc = 0x205650u;
    {
        const bool branch_taken_0x205650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205650u;
        // 0x205654: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205650) {
            ctx->pc = 0x2056BCu;
            goto label_2056bc;
        }
    }
    ctx->pc = 0x205658u;
label_205658:
    // 0x205658: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x205658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20565c:
    // 0x20565c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x20565cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205660:
    // 0x205660: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x205660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_205664:
    // 0x205664: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_205668:
    if (ctx->pc == 0x205668u) {
        ctx->pc = 0x205668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205664u;
        // 0x205668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20566Cu;
        goto label_20566c;
    }
    ctx->pc = 0x205664u;
    {
        const bool branch_taken_0x205664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205664u;
        // 0x205668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205664) {
            ctx->pc = 0x20569Cu;
            goto label_20569c;
        }
    }
    ctx->pc = 0x20566Cu;
label_20566c:
    // 0x20566c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205670:
    // 0x205670: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x205670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_205674:
    // 0x205674: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x205674u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_205678:
    // 0x205678: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x205678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20567c:
    // 0x20567c: 0xc080432  jal         func_2010C8
label_205680:
    if (ctx->pc == 0x205680u) {
        ctx->pc = 0x205680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20567Cu;
        // 0x205680: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205684u;
        goto label_205684;
    }
    ctx->pc = 0x20567Cu;
    SET_GPR_U32(ctx, 31, 0x205684u);
    ctx->pc = 0x205680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20567Cu;
    // 0x205680: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20567Cu, 0x205684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205684u;
label_205684:
    // 0x205684: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_205688:
    if (ctx->pc == 0x205688u) {
        ctx->pc = 0x205688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205684u;
        // 0x205688: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20568Cu;
        goto label_20568c;
    }
    ctx->pc = 0x205684u;
    {
        const bool branch_taken_0x205684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205684) {
            ctx->pc = 0x205688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205684u;
            // 0x205688: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205660;
        }
    }
    ctx->pc = 0x20568Cu;
label_20568c:
    // 0x20568c: 0x122001a2  beqz        $s1, . + 4 + (0x1A2 << 2)
label_205690:
    if (ctx->pc == 0x205690u) {
        ctx->pc = 0x205690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20568Cu;
        // 0x205690: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205694u;
        goto label_205694;
    }
    ctx->pc = 0x20568Cu;
    {
        const bool branch_taken_0x20568c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x205690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20568Cu;
        // 0x205690: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20568c) {
            ctx->pc = 0x205D18u;
            goto label_205d18;
        }
    }
    ctx->pc = 0x205694u;
label_205694:
    // 0x205694: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_205698:
    if (ctx->pc == 0x205698u) {
        ctx->pc = 0x205698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205694u;
        // 0x205698: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20569Cu;
        goto label_20569c;
    }
    ctx->pc = 0x205694u;
    {
        const bool branch_taken_0x205694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205694u;
        // 0x205698: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205694) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x20569Cu;
label_20569c:
    // 0x20569c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2056a0:
    // 0x2056a0: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x2056a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2056a4:
    // 0x2056a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2056a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2056a8:
    // 0x2056a8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_2056ac:
    // 0x2056ac: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2056b0:
    // 0x2056b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2056b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2056b4:
    // 0x2056b4: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_2056b8:
    if (ctx->pc == 0x2056B8u) {
        ctx->pc = 0x2056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056B4u;
        // 0x2056b8: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056BCu;
        goto label_2056bc;
    }
    ctx->pc = 0x2056B4u;
    {
        const bool branch_taken_0x2056b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056B4u;
        // 0x2056b8: 0x3d1f021  addu        $fp, $fp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056b4) {
            ctx->pc = 0x2052A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a0;
        }
    }
    ctx->pc = 0x2056BCu;
label_2056bc:
    // 0x2056bc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2056bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2056c0:
    // 0x2056c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2056c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2056c4:
    // 0x2056c4: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x2056c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_2056c8:
    // 0x2056c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2056c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2056cc:
    // 0x2056cc: 0xc07f5e2  jal         func_1FD788
label_2056d0:
    if (ctx->pc == 0x2056D0u) {
        ctx->pc = 0x2056D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056CCu;
        // 0x2056d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056D4u;
        goto label_2056d4;
    }
    ctx->pc = 0x2056CCu;
    SET_GPR_U32(ctx, 31, 0x2056D4u);
    ctx->pc = 0x2056D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056CCu;
    // 0x2056d0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD788u, 0x2056CCu, 0x2056D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056D4u;
label_2056d4:
    // 0x2056d4: 0x10400190  beqz        $v0, . + 4 + (0x190 << 2)
label_2056d8:
    if (ctx->pc == 0x2056D8u) {
        ctx->pc = 0x2056D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056D4u;
        // 0x2056d8: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056DCu;
        goto label_2056dc;
    }
    ctx->pc = 0x2056D4u;
    {
        const bool branch_taken_0x2056d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056D4u;
        // 0x2056d8: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056d4) {
            ctx->pc = 0x205D18u;
            goto label_205d18;
        }
    }
    ctx->pc = 0x2056DCu;
label_2056dc:
    // 0x2056dc: 0x1000fef0  b           . + 4 + (-0x110 << 2)
label_2056e0:
    if (ctx->pc == 0x2056E0u) {
        ctx->pc = 0x2056E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056DCu;
        // 0x2056e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056E4u;
        goto label_2056e4;
    }
    ctx->pc = 0x2056DCu;
    {
        const bool branch_taken_0x2056dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056DCu;
        // 0x2056e0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056dc) {
            ctx->pc = 0x2052A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a0;
        }
    }
    ctx->pc = 0x2056E4u;
label_2056e4:
    // 0x2056e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2056e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2056e8:
    // 0x2056e8: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2056e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2056ec:
    // 0x2056ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2056ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2056f0:
    // 0x2056f0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2056f4:
    if (ctx->pc == 0x2056F4u) {
        ctx->pc = 0x2056F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056F0u;
        // 0x2056f4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2056F8u;
        goto label_2056f8;
    }
    ctx->pc = 0x2056F0u;
    {
        const bool branch_taken_0x2056f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2056F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056F0u;
        // 0x2056f4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2056f0) {
            ctx->pc = 0x205760u;
            goto label_205760;
        }
    }
    ctx->pc = 0x2056F8u;
label_2056f8:
    // 0x2056f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2056f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2056fc:
    // 0x2056fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2056fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205700:
    // 0x205700: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x205700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205704:
    // 0x205704: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x205704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_205708:
    // 0x205708: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x205708u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20570c:
    // 0x20570c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_205710:
    if (ctx->pc == 0x205710u) {
        ctx->pc = 0x205710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20570Cu;
        // 0x205710: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205714u;
        goto label_205714;
    }
    ctx->pc = 0x20570Cu;
    {
        const bool branch_taken_0x20570c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x205710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20570Cu;
        // 0x205710: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20570c) {
            ctx->pc = 0x205750u;
            goto label_205750;
        }
    }
    ctx->pc = 0x205714u;
label_205714:
    // 0x205714: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x205714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205718:
    // 0x205718: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x205718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20571c:
    // 0x20571c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20571cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205720:
    // 0x205720: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_205724:
    // 0x205724: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205728:
    // 0x205728: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_20572c:
    if (ctx->pc == 0x20572Cu) {
        ctx->pc = 0x20572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205728u;
        // 0x20572c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205730u;
        goto label_205730;
    }
    ctx->pc = 0x205728u;
    {
        const bool branch_taken_0x205728 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205728u;
        // 0x20572c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205728) {
            ctx->pc = 0x205750u;
            goto label_205750;
        }
    }
    ctx->pc = 0x205730u;
label_205730:
    // 0x205730: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_205734:
    if (ctx->pc == 0x205734u) {
        ctx->pc = 0x205734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205730u;
        // 0x205734: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205738u;
        goto label_205738;
    }
    ctx->pc = 0x205730u;
    {
        const bool branch_taken_0x205730 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x205730) {
            ctx->pc = 0x205734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205730u;
            // 0x205734: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205700;
        }
    }
    ctx->pc = 0x205738u;
label_205738:
    // 0x205738: 0xc080432  jal         func_2010C8
label_20573c:
    if (ctx->pc == 0x20573Cu) {
        ctx->pc = 0x20573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205738u;
        // 0x20573c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205740u;
        goto label_205740;
    }
    ctx->pc = 0x205738u;
    SET_GPR_U32(ctx, 31, 0x205740u);
    ctx->pc = 0x20573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205738u;
    // 0x20573c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205738u, 0x205740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205740u;
label_205740:
    // 0x205740: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_205744:
    if (ctx->pc == 0x205744u) {
        ctx->pc = 0x205744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205740u;
        // 0x205744: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205748u;
        goto label_205748;
    }
    ctx->pc = 0x205740u;
    {
        const bool branch_taken_0x205740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205740) {
            ctx->pc = 0x205744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205740u;
            // 0x205744: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205700;
        }
    }
    ctx->pc = 0x205748u;
label_205748:
    // 0x205748: 0x12000174  beqz        $s0, . + 4 + (0x174 << 2)
label_20574c:
    if (ctx->pc == 0x20574Cu) {
        ctx->pc = 0x20574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205748u;
        // 0x20574c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205750u;
        goto label_205750;
    }
    ctx->pc = 0x205748u;
    {
        const bool branch_taken_0x205748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205748u;
        // 0x20574c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205748) {
            ctx->pc = 0x205D1Cu;
            goto label_205d1c;
        }
    }
    ctx->pc = 0x205750u;
label_205750:
    // 0x205750: 0x12000174  beqz        $s0, . + 4 + (0x174 << 2)
label_205754:
    if (ctx->pc == 0x205754u) {
        ctx->pc = 0x205754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205750u;
        // 0x205754: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205758u;
        goto label_205758;
    }
    ctx->pc = 0x205750u;
    {
        const bool branch_taken_0x205750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x205754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205750u;
        // 0x205754: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205750) {
            ctx->pc = 0x205D24u;
            goto label_205d24;
        }
    }
    ctx->pc = 0x205758u;
label_205758:
    // 0x205758: 0x1000fed2  b           . + 4 + (-0x12E << 2)
label_20575c:
    if (ctx->pc == 0x20575Cu) {
        ctx->pc = 0x20575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205758u;
        // 0x20575c: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205760u;
        goto label_205760;
    }
    ctx->pc = 0x205758u;
    {
        const bool branch_taken_0x205758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205758u;
        // 0x20575c: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205758) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205760u;
label_205760:
    // 0x205760: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205760u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205764:
    // 0x205764: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205768:
    // 0x205768: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x205768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20576c:
    // 0x20576c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x20576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205770:
    // 0x205770: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x205770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205774:
    // 0x205774: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_205778:
    // 0x205778: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20577c:
    // 0x20577c: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_205780:
    if (ctx->pc == 0x205780u) {
        ctx->pc = 0x205780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20577Cu;
        // 0x205780: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205784u;
        goto label_205784;
    }
    ctx->pc = 0x20577Cu;
    {
        const bool branch_taken_0x20577c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20577c) {
            ctx->pc = 0x205780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20577Cu;
            // 0x205780: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2057D4u;
            goto label_2057d4;
        }
    }
    ctx->pc = 0x205784u;
label_205784:
    // 0x205784: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205788:
    // 0x205788: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20578c:
    // 0x20578c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x20578cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205790:
    // 0x205790: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_205794:
    // 0x205794: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x205794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_205798:
    // 0x205798: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x205798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_20579c:
    // 0x20579c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x20579cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2057a0:
    // 0x2057a0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2057a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2057a4:
    // 0x2057a4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2057a8:
    if (ctx->pc == 0x2057A8u) {
        ctx->pc = 0x2057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057A4u;
        // 0x2057a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057ACu;
        goto label_2057ac;
    }
    ctx->pc = 0x2057A4u;
    {
        const bool branch_taken_0x2057a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057A4u;
        // 0x2057a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057a4) {
            ctx->pc = 0x2057D0u;
            goto label_2057d0;
        }
    }
    ctx->pc = 0x2057ACu;
label_2057ac:
    // 0x2057ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2057b0:
    // 0x2057b0: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_2057b4:
    if (ctx->pc == 0x2057B4u) {
        ctx->pc = 0x2057B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B0u;
        // 0x2057b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057B8u;
        goto label_2057b8;
    }
    ctx->pc = 0x2057B0u;
    {
        const bool branch_taken_0x2057b0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2057b0) {
            ctx->pc = 0x2057B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057B0u;
            // 0x2057b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205770;
        }
    }
    ctx->pc = 0x2057B8u;
label_2057b8:
    // 0x2057b8: 0xc080432  jal         func_2010C8
label_2057bc:
    if (ctx->pc == 0x2057BCu) {
        ctx->pc = 0x2057BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057B8u;
        // 0x2057bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057C0u;
        goto label_2057c0;
    }
    ctx->pc = 0x2057B8u;
    SET_GPR_U32(ctx, 31, 0x2057C0u);
    ctx->pc = 0x2057BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2057B8u;
    // 0x2057bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x2057B8u, 0x2057C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_2057c4:
    if (ctx->pc == 0x2057C4u) {
        ctx->pc = 0x2057C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C0u;
        // 0x2057c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057C8u;
        goto label_2057c8;
    }
    ctx->pc = 0x2057C0u;
    {
        const bool branch_taken_0x2057c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057c0) {
            ctx->pc = 0x2057C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057C0u;
            // 0x2057c4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205770;
        }
    }
    ctx->pc = 0x2057C8u;
label_2057c8:
    // 0x2057c8: 0x12300154  beq         $s1, $s0, . + 4 + (0x154 << 2)
label_2057cc:
    if (ctx->pc == 0x2057CCu) {
        ctx->pc = 0x2057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C8u;
        // 0x2057cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057D0u;
        goto label_2057d0;
    }
    ctx->pc = 0x2057C8u;
    {
        const bool branch_taken_0x2057c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2057CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057C8u;
        // 0x2057cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057c8) {
            ctx->pc = 0x205D1Cu;
            goto label_205d1c;
        }
    }
    ctx->pc = 0x2057D0u;
label_2057d0:
    // 0x2057d0: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2057d4:
    // 0x2057d4: 0x12000153  beqz        $s0, . + 4 + (0x153 << 2)
label_2057d8:
    if (ctx->pc == 0x2057D8u) {
        ctx->pc = 0x2057D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057D4u;
        // 0x2057d8: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057DCu;
        goto label_2057dc;
    }
    ctx->pc = 0x2057D4u;
    {
        const bool branch_taken_0x2057d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057D4u;
        // 0x2057d8: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057d4) {
            ctx->pc = 0x205D24u;
            goto label_205d24;
        }
    }
    ctx->pc = 0x2057DCu;
label_2057dc:
    // 0x2057dc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2057dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2057e0:
    // 0x2057e0: 0x1000feaf  b           . + 4 + (-0x151 << 2)
label_2057e4:
    if (ctx->pc == 0x2057E4u) {
        ctx->pc = 0x2057E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057E0u;
        // 0x2057e4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057E8u;
        goto label_2057e8;
    }
    ctx->pc = 0x2057E0u;
    {
        const bool branch_taken_0x2057e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057E0u;
        // 0x2057e4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057e0) {
            ctx->pc = 0x2052A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a0;
        }
    }
    ctx->pc = 0x2057E8u;
label_2057e8:
    // 0x2057e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2057ec:
    // 0x2057ec: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x2057ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_2057f0:
    // 0x2057f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2057f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2057f4:
    // 0x2057f4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2057f8:
    if (ctx->pc == 0x2057F8u) {
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057FCu;
        goto label_2057fc;
    }
    ctx->pc = 0x2057F4u;
    {
        const bool branch_taken_0x2057f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057F4u;
        // 0x2057f8: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2057f4) {
            ctx->pc = 0x205864u;
            goto label_205864;
        }
    }
    ctx->pc = 0x2057FCu;
label_2057fc:
    // 0x2057fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2057fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_205800:
    // 0x205800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205804:
    // 0x205804: 0x24514dd1  addiu       $s1, $v0, 0x4DD1
    ctx->pc = 0x205804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_205808:
    // 0x205808: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20580c:
    // 0x20580c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205810:
    // 0x205810: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x205810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_205814:
    // 0x205814: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_205818:
    // 0x205818: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x205818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20581c:
    // 0x20581c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x20581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_205820:
    // 0x205820: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_205824:
    if (ctx->pc == 0x205824u) {
        ctx->pc = 0x205824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205820u;
        // 0x205824: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205828u;
        goto label_205828;
    }
    ctx->pc = 0x205820u;
    {
        const bool branch_taken_0x205820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205820u;
        // 0x205824: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205820) {
            ctx->pc = 0x20585Cu;
            goto label_20585c;
        }
    }
    ctx->pc = 0x205828u;
label_205828:
    // 0x205828: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x205828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20582c:
    // 0x20582c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20582cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_205830:
    // 0x205830: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x205830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_205834:
    // 0x205834: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x205834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_205838:
    // 0x205838: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205838u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_20583c:
    // 0x20583c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_205840:
    if (ctx->pc == 0x205840u) {
        ctx->pc = 0x205840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20583Cu;
        // 0x205840: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205844u;
        goto label_205844;
    }
    ctx->pc = 0x20583Cu;
    {
        const bool branch_taken_0x20583c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x205840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20583Cu;
        // 0x205840: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20583c) {
            ctx->pc = 0x20585Cu;
            goto label_20585c;
        }
    }
    ctx->pc = 0x205844u;
label_205844:
    // 0x205844: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_205848:
    if (ctx->pc == 0x205848u) {
        ctx->pc = 0x205848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205844u;
        // 0x205848: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20584Cu;
        goto label_20584c;
    }
    ctx->pc = 0x205844u;
    {
        const bool branch_taken_0x205844 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x205844) {
            ctx->pc = 0x205848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205844u;
            // 0x205848: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205810;
        }
    }
    ctx->pc = 0x20584Cu;
label_20584c:
    // 0x20584c: 0xc080432  jal         func_2010C8
label_205850:
    if (ctx->pc == 0x205850u) {
        ctx->pc = 0x205850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20584Cu;
        // 0x205850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205854u;
        goto label_205854;
    }
    ctx->pc = 0x20584Cu;
    SET_GPR_U32(ctx, 31, 0x205854u);
    ctx->pc = 0x205850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20584Cu;
    // 0x205850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20584Cu, 0x205854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205854u;
label_205854:
    // 0x205854: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_205858:
    if (ctx->pc == 0x205858u) {
        ctx->pc = 0x205858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205854u;
        // 0x205858: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20585Cu;
        goto label_20585c;
    }
    ctx->pc = 0x205854u;
    {
        const bool branch_taken_0x205854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205854) {
            ctx->pc = 0x205858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205854u;
            // 0x205858: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205810;
        }
    }
    ctx->pc = 0x20585Cu;
label_20585c:
    // 0x20585c: 0x1000fe91  b           . + 4 + (-0x16F << 2)
label_205860:
    if (ctx->pc == 0x205860u) {
        ctx->pc = 0x205860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20585Cu;
        // 0x205860: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205864u;
        goto label_205864;
    }
    ctx->pc = 0x20585Cu;
    {
        const bool branch_taken_0x20585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20585Cu;
        // 0x205860: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20585c) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205864u;
label_205864:
    // 0x205864: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205864u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205868:
    // 0x205868: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_20586c:
    // 0x20586c: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x20586cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205870:
    // 0x205870: 0x24464dd1  addiu       $a2, $v0, 0x4DD1
    ctx->pc = 0x205870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
label_205874:
    // 0x205874: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x205874u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_205878:
    // 0x205878: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_20587c:
    // 0x20587c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x20587cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205880:
    // 0x205880: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x205880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205884:
    // 0x205884: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x205884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_205888:
    // 0x205888: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20588c:
    // 0x20588c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x20588cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205890:
    // 0x205890: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x205890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_205894:
    // 0x205894: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_205898:
    if (ctx->pc == 0x205898u) {
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20589Cu;
        goto label_20589c;
    }
    ctx->pc = 0x205894u;
    {
        const bool branch_taken_0x205894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205894u;
        // 0x205898: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205894) {
            ctx->pc = 0x2058E0u;
            goto label_2058e0;
        }
    }
    ctx->pc = 0x20589Cu;
label_20589c:
    // 0x20589c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x20589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2058a0:
    // 0x2058a0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2058a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2058a4:
    // 0x2058a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2058a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2058a8:
    // 0x2058a8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2058a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2058ac:
    // 0x2058ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2058acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2058b0:
    // 0x2058b0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2058b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2058b4:
    // 0x2058b4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2058b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2058b8:
    // 0x2058b8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2058bc:
    if (ctx->pc == 0x2058BCu) {
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058C0u;
        goto label_2058c0;
    }
    ctx->pc = 0x2058B8u;
    {
        const bool branch_taken_0x2058b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058B8u;
        // 0x2058bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058b8) {
            ctx->pc = 0x2058E0u;
            goto label_2058e0;
        }
    }
    ctx->pc = 0x2058C0u;
label_2058c0:
    // 0x2058c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2058c4:
    // 0x2058c4: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_2058c8:
    if (ctx->pc == 0x2058C8u) {
        ctx->pc = 0x2058C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058C4u;
        // 0x2058c8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058CCu;
        goto label_2058cc;
    }
    ctx->pc = 0x2058C4u;
    {
        const bool branch_taken_0x2058c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2058c4) {
            ctx->pc = 0x2058C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2058C4u;
            // 0x2058c8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205884;
        }
    }
    ctx->pc = 0x2058CCu;
label_2058cc:
    // 0x2058cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2058ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2058d0:
    // 0x2058d0: 0xc080432  jal         func_2010C8
label_2058d4:
    if (ctx->pc == 0x2058D4u) {
        ctx->pc = 0x2058D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D0u;
        // 0x2058d4: 0x7fa60270  sq          $a2, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058D8u;
        goto label_2058d8;
    }
    ctx->pc = 0x2058D0u;
    SET_GPR_U32(ctx, 31, 0x2058D8u);
    ctx->pc = 0x2058D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058D0u;
    // 0x2058d4: 0x7fa60270  sq          $a2, 0x270($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x2058D0u, 0x2058D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058D8u;
label_2058d8:
    // 0x2058d8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_2058dc:
    if (ctx->pc == 0x2058DCu) {
        ctx->pc = 0x2058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D8u;
        // 0x2058dc: 0x7ba60270  lq          $a2, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058E0u;
        goto label_2058e0;
    }
    ctx->pc = 0x2058D8u;
    {
        const bool branch_taken_0x2058d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D8u;
        // 0x2058dc: 0x7ba60270  lq          $a2, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058d8) {
            ctx->pc = 0x205880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205880;
        }
    }
    ctx->pc = 0x2058E0u;
label_2058e0:
    // 0x2058e0: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2058e4:
    // 0x2058e4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2058e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2058e8:
    // 0x2058e8: 0x1000fe6e  b           . + 4 + (-0x192 << 2)
label_2058ec:
    if (ctx->pc == 0x2058ECu) {
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2058F0u;
        goto label_2058f0;
    }
    ctx->pc = 0x2058E8u;
    {
        const bool branch_taken_0x2058e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058e8) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x2058F0u;
label_2058f0:
    // 0x2058f0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2058f4:
    // 0x2058f4: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x2058f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_2058f8:
    // 0x2058f8: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x2058f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_2058fc:
    // 0x2058fc: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x2058fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_205900:
    // 0x205900: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x205900u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_205904:
    // 0x205904: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_205908:
    // 0x205908: 0x12800052  beqz        $s4, . + 4 + (0x52 << 2)
label_20590c:
    if (ctx->pc == 0x20590Cu) {
        ctx->pc = 0x20590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205908u;
        // 0x20590c: 0x367302c0  ori         $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205910u;
        goto label_205910;
    }
    ctx->pc = 0x205908u;
    {
        const bool branch_taken_0x205908 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205908u;
        // 0x20590c: 0x367302c0  ori         $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205908) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x205910u;
label_205910:
    // 0x205910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205914:
    // 0x205914: 0x0  nop
    ctx->pc = 0x205914u;
    // NOP
label_205918:
    // 0x205918: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x205918u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20591c:
    // 0x20591c: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x20591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_205920:
    // 0x205920: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x205920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_205924:
    // 0x205924: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_205928:
    if (ctx->pc == 0x205928u) {
        ctx->pc = 0x205928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205924u;
        // 0x205928: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20592Cu;
        goto label_20592c;
    }
    ctx->pc = 0x205924u;
    {
        const bool branch_taken_0x205924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205924u;
        // 0x205928: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205924) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x20592Cu;
label_20592c:
    // 0x20592c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205930:
    // 0x205930: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_205934:
    // 0x205934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205938:
    // 0x205938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20593c:
    // 0x20593c: 0x800008  jr          $a0
label_205940:
    if (ctx->pc == 0x205940u) {
        ctx->pc = 0x205944u;
        goto label_205944;
    }
    ctx->pc = 0x20593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205944u: goto label_205944;
            case 0x205970u: goto label_205970;
            case 0x205998u: goto label_205998;
            case 0x2059C4u: goto label_2059c4;
            case 0x2059DCu: goto label_2059dc;
            case 0x2059F0u: goto label_2059f0;
            case 0x205A54u: goto label_205a54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20593Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x205944u;
label_205944:
    // 0x205944: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x205944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_205948:
    // 0x205948: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_20594c:
    if (ctx->pc == 0x20594Cu) {
        ctx->pc = 0x20594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205948u;
        // 0x20594c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205950u;
        goto label_205950;
    }
    ctx->pc = 0x205948u;
    {
        const bool branch_taken_0x205948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205948u;
        // 0x20594c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205948) {
            ctx->pc = 0x205960u;
            goto label_205960;
        }
    }
    ctx->pc = 0x205950u;
label_205950:
    // 0x205950: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_205954:
    // 0x205954: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x205954u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_205958:
    // 0x205958: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x205958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_20595c:
    // 0x20595c: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x20595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_205960:
    // 0x205960: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_205964:
    if (ctx->pc == 0x205964u) {
        ctx->pc = 0x205964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205960u;
        // 0x205964: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205968u;
        goto label_205968;
    }
    ctx->pc = 0x205960u;
    {
        const bool branch_taken_0x205960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205960u;
        // 0x205964: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205960) {
            ctx->pc = 0x205A0Cu;
            goto label_205a0c;
        }
    }
    ctx->pc = 0x205968u;
label_205968:
    // 0x205968: 0x10000028  b           . + 4 + (0x28 << 2)
label_20596c:
    if (ctx->pc == 0x20596Cu) {
        ctx->pc = 0x20596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205968u;
        // 0x20596c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205970u;
        goto label_205970;
    }
    ctx->pc = 0x205968u;
    {
        const bool branch_taken_0x205968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205968u;
        // 0x20596c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205968) {
            ctx->pc = 0x205A0Cu;
            goto label_205a0c;
        }
    }
    ctx->pc = 0x205970u;
label_205970:
    // 0x205970: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x205970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_205974:
    // 0x205974: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_205978:
    // 0x205978: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x205978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
label_20597c:
    // 0x20597c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20597cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_205980:
    // 0x205980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205984:
    // 0x205984: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x205984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_205988:
    // 0x205988: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x205988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_20598c:
    // 0x20598c: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x20598cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_205990:
    // 0x205990: 0x1000001f  b           . + 4 + (0x1F << 2)
label_205994:
    if (ctx->pc == 0x205994u) {
        ctx->pc = 0x205994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205990u;
        // 0x205994: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205998u;
        goto label_205998;
    }
    ctx->pc = 0x205990u;
    {
        const bool branch_taken_0x205990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205990u;
        // 0x205994: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205990) {
            ctx->pc = 0x205A10u;
            goto label_205a10;
        }
    }
    ctx->pc = 0x205998u;
label_205998:
    // 0x205998: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_20599c:
    // 0x20599c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2059a0:
    // 0x2059a0: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x2059a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
label_2059a4:
    // 0x2059a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2059a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2059a8:
    // 0x2059a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2059a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2059ac:
    // 0x2059ac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2059acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2059b0:
    // 0x2059b0: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2059b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2059b4:
    // 0x2059b4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_2059b8:
    if (ctx->pc == 0x2059B8u) {
        ctx->pc = 0x2059B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059B4u;
        // 0x2059b8: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059BCu;
        goto label_2059bc;
    }
    ctx->pc = 0x2059B4u;
    {
        const bool branch_taken_0x2059b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2059B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059B4u;
        // 0x2059b8: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059b4) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x2059BCu;
label_2059bc:
    // 0x2059bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_2059c0:
    if (ctx->pc == 0x2059C0u) {
        ctx->pc = 0x2059C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059BCu;
        // 0x2059c0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059C4u;
        goto label_2059c4;
    }
    ctx->pc = 0x2059BCu;
    {
        const bool branch_taken_0x2059bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059BCu;
        // 0x2059c0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059bc) {
            ctx->pc = 0x205A0Cu;
            goto label_205a0c;
        }
    }
    ctx->pc = 0x2059C4u;
label_2059c4:
    // 0x2059c4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2059c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2059c8:
    // 0x2059c8: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x2059c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_2059cc:
    // 0x2059cc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_2059d0:
    if (ctx->pc == 0x2059D0u) {
        ctx->pc = 0x2059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059CCu;
        // 0x2059d0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059D4u;
        goto label_2059d4;
    }
    ctx->pc = 0x2059CCu;
    {
        const bool branch_taken_0x2059cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059CCu;
        // 0x2059d0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059cc) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x2059D4u;
label_2059d4:
    // 0x2059d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2059d8:
    if (ctx->pc == 0x2059D8u) {
        ctx->pc = 0x2059D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059D4u;
        // 0x2059d8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059DCu;
        goto label_2059dc;
    }
    ctx->pc = 0x2059D4u;
    {
        const bool branch_taken_0x2059d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059D4u;
        // 0x2059d8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059d4) {
            ctx->pc = 0x205A10u;
            goto label_205a10;
        }
    }
    ctx->pc = 0x2059DCu;
label_2059dc:
    // 0x2059dc: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x2059dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_2059e0:
    // 0x2059e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2059e4:
    if (ctx->pc == 0x2059E4u) {
        ctx->pc = 0x2059E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E0u;
        // 0x2059e4: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059E8u;
        goto label_2059e8;
    }
    ctx->pc = 0x2059E0u;
    {
        const bool branch_taken_0x2059e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E0u;
        // 0x2059e4: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059e0) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x2059E8u;
label_2059e8:
    // 0x2059e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2059ec:
    if (ctx->pc == 0x2059ECu) {
        ctx->pc = 0x2059ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E8u;
        // 0x2059ec: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059F0u;
        goto label_2059f0;
    }
    ctx->pc = 0x2059E8u;
    {
        const bool branch_taken_0x2059e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059E8u;
        // 0x2059ec: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059e8) {
            ctx->pc = 0x205A10u;
            goto label_205a10;
        }
    }
    ctx->pc = 0x2059F0u;
label_2059f0:
    // 0x2059f0: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x2059f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_2059f4:
    // 0x2059f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2059f8:
    if (ctx->pc == 0x2059F8u) {
        ctx->pc = 0x2059F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059F4u;
        // 0x2059f8: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2059FCu;
        goto label_2059fc;
    }
    ctx->pc = 0x2059F4u;
    {
        const bool branch_taken_0x2059f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059F4u;
        // 0x2059f8: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059f4) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x2059FCu;
label_2059fc:
    // 0x2059fc: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
label_205a00:
    if (ctx->pc == 0x205A00u) {
        ctx->pc = 0x205A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059FCu;
        // 0x205a00: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A04u;
        goto label_205a04;
    }
    ctx->pc = 0x2059FCu;
    {
        const bool branch_taken_0x2059fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x205A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059FCu;
        // 0x205a00: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059fc) {
            ctx->pc = 0x205A54u;
            goto label_205a54;
        }
    }
    ctx->pc = 0x205A04u;
label_205a04:
    // 0x205a04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_205a08:
    // 0x205a08: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x205a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_205a0c:
    // 0x205a0c: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x205a0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_205a10:
    // 0x205a10: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x205a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_205a14:
    // 0x205a14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_205a18:
    // 0x205a18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205a1c:
    // 0x205a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_205a20:
    // 0x205a20: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_205a24:
    if (ctx->pc == 0x205A24u) {
        ctx->pc = 0x205A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A20u;
        // 0x205a24: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A28u;
        goto label_205a28;
    }
    ctx->pc = 0x205A20u;
    {
        const bool branch_taken_0x205a20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A20u;
        // 0x205a24: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a20) {
            ctx->pc = 0x205A38u;
            goto label_205a38;
        }
    }
    ctx->pc = 0x205A28u;
label_205a28:
    // 0x205a28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205a2c:
    // 0x205a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_205a30:
    // 0x205a30: 0x10000005  b           . + 4 + (0x5 << 2)
label_205a34:
    if (ctx->pc == 0x205A34u) {
        ctx->pc = 0x205A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A30u;
        // 0x205a34: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A38u;
        goto label_205a38;
    }
    ctx->pc = 0x205A30u;
    {
        const bool branch_taken_0x205a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A30u;
        // 0x205a34: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a30) {
            ctx->pc = 0x205A48u;
            goto label_205a48;
        }
    }
    ctx->pc = 0x205A38u;
label_205a38:
    // 0x205a38: 0xc080432  jal         func_2010C8
label_205a3c:
    if (ctx->pc == 0x205A3Cu) {
        ctx->pc = 0x205A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A38u;
        // 0x205a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A40u;
        goto label_205a40;
    }
    ctx->pc = 0x205A38u;
    SET_GPR_U32(ctx, 31, 0x205A40u);
    ctx->pc = 0x205A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A38u;
    // 0x205a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205A38u, 0x205A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A40u;
label_205a40:
    // 0x205a40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_205a44:
    if (ctx->pc == 0x205A44u) {
        ctx->pc = 0x205A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A40u;
        // 0x205a44: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A48u;
        goto label_205a48;
    }
    ctx->pc = 0x205A40u;
    {
        const bool branch_taken_0x205a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A40u;
        // 0x205a44: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a40) {
            ctx->pc = 0x205A58u;
            goto label_205a58;
        }
    }
    ctx->pc = 0x205A48u;
label_205a48:
    // 0x205a48: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205a48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205a4c:
    // 0x205a4c: 0x5680ffb2  bnel        $s4, $zero, . + 4 + (-0x4E << 2)
label_205a50:
    if (ctx->pc == 0x205A50u) {
        ctx->pc = 0x205A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A4Cu;
        // 0x205a50: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A54u;
        goto label_205a54;
    }
    ctx->pc = 0x205A4Cu;
    {
        const bool branch_taken_0x205a4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x205a4c) {
            ctx->pc = 0x205A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205A4Cu;
            // 0x205a50: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205918;
        }
    }
    ctx->pc = 0x205A54u;
label_205a54:
    // 0x205a54: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x205a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_205a58:
    // 0x205a58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_205a5c:
    if (ctx->pc == 0x205A5Cu) {
        ctx->pc = 0x205A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A58u;
        // 0x205a5c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A60u;
        goto label_205a60;
    }
    ctx->pc = 0x205A58u;
    {
        const bool branch_taken_0x205a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A58u;
        // 0x205a5c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a58) {
            ctx->pc = 0x205A80u;
            goto label_205a80;
        }
    }
    ctx->pc = 0x205A60u;
label_205a60:
    // 0x205a60: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x205a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_205a64:
    // 0x205a64: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_205a68:
    if (ctx->pc == 0x205A68u) {
        ctx->pc = 0x205A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A64u;
        // 0x205a68: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A6Cu;
        goto label_205a6c;
    }
    ctx->pc = 0x205A64u;
    {
        const bool branch_taken_0x205a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A64u;
        // 0x205a68: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a64) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205A6Cu;
label_205a6c:
    // 0x205a6c: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x205a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_205a70:
    // 0x205a70: 0xc080dea  jal         func_2037A8
label_205a74:
    if (ctx->pc == 0x205A74u) {
        ctx->pc = 0x205A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A70u;
        // 0x205a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A78u;
        goto label_205a78;
    }
    ctx->pc = 0x205A70u;
    SET_GPR_U32(ctx, 31, 0x205A78u);
    ctx->pc = 0x205A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A70u;
    // 0x205a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205A70u, 0x205A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A78u;
label_205a78:
    // 0x205a78: 0x100000ab  b           . + 4 + (0xAB << 2)
label_205a7c:
    if (ctx->pc == 0x205A7Cu) {
        ctx->pc = 0x205A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A78u;
        // 0x205a7c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A80u;
        goto label_205a80;
    }
    ctx->pc = 0x205A78u;
    {
        const bool branch_taken_0x205a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A78u;
        // 0x205a7c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a78) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205A80u;
label_205a80:
    // 0x205a80: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x205a80u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_205a84:
    // 0x205a84: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_205a88:
    // 0x205a88: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_205a8c:
    if (ctx->pc == 0x205A8Cu) {
        ctx->pc = 0x205A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A88u;
        // 0x205a8c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A90u;
        goto label_205a90;
    }
    ctx->pc = 0x205A88u;
    {
        const bool branch_taken_0x205a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A88u;
        // 0x205a8c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a88) {
            ctx->pc = 0x205A98u;
            goto label_205a98;
        }
    }
    ctx->pc = 0x205A90u;
label_205a90:
    // 0x205a90: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_205a94:
    if (ctx->pc == 0x205A94u) {
        ctx->pc = 0x205A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A90u;
        // 0x205a94: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205A98u;
        goto label_205a98;
    }
    ctx->pc = 0x205A90u;
    {
        const bool branch_taken_0x205a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x205A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A90u;
        // 0x205a94: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a90) {
            ctx->pc = 0x205AACu;
            goto label_205aac;
        }
    }
    ctx->pc = 0x205A98u;
label_205a98:
    // 0x205a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205a9c:
    // 0x205a9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_205aa0:
    // 0x205aa0: 0xc080dea  jal         func_2037A8
label_205aa4:
    if (ctx->pc == 0x205AA4u) {
        ctx->pc = 0x205AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AA0u;
        // 0x205aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AA8u;
        goto label_205aa8;
    }
    ctx->pc = 0x205AA0u;
    SET_GPR_U32(ctx, 31, 0x205AA8u);
    ctx->pc = 0x205AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AA0u;
    // 0x205aa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205AA0u, 0x205AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AA8u;
label_205aa8:
    // 0x205aa8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x205aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_205aac:
    // 0x205aac: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_205ab0:
    if (ctx->pc == 0x205AB0u) {
        ctx->pc = 0x205AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AACu;
        // 0x205ab0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AB4u;
        goto label_205ab4;
    }
    ctx->pc = 0x205AACu;
    {
        const bool branch_taken_0x205aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AACu;
        // 0x205ab0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205aac) {
            ctx->pc = 0x205B38u;
            goto label_205b38;
        }
    }
    ctx->pc = 0x205AB4u;
label_205ab4:
    // 0x205ab4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x205ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_205ab8:
    // 0x205ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205abc:
    // 0x205abc: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x205abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_205ac0:
    // 0x205ac0: 0x60f809  jalr        $v1
label_205ac4:
    if (ctx->pc == 0x205AC4u) {
        ctx->pc = 0x205AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC0u;
        // 0x205ac4: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AC8u;
        goto label_205ac8;
    }
    ctx->pc = 0x205AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205AC8u);
        ctx->pc = 0x205AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AC0u;
        // 0x205ac4: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205AC0u, 0x205AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205AC8u;
label_205ac8:
    // 0x205ac8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205acc:
    // 0x205acc: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x205accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_205ad0:
    // 0x205ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_205ad4:
    if (ctx->pc == 0x205AD4u) {
        ctx->pc = 0x205AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD0u;
        // 0x205ad4: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AD8u;
        goto label_205ad8;
    }
    ctx->pc = 0x205AD0u;
    {
        const bool branch_taken_0x205ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AD0u;
        // 0x205ad4: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ad0) {
            ctx->pc = 0x205AF0u;
            goto label_205af0;
        }
    }
    ctx->pc = 0x205AD8u;
label_205ad8:
    // 0x205ad8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205adc:
    // 0x205adc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x205adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_205ae0:
    // 0x205ae0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x205ae0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_205ae4:
    // 0x205ae4: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205ae8:
    // 0x205ae8: 0x10000011  b           . + 4 + (0x11 << 2)
label_205aec:
    if (ctx->pc == 0x205AECu) {
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AF0u;
        goto label_205af0;
    }
    ctx->pc = 0x205AE8u;
    {
        const bool branch_taken_0x205ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AE8u;
        // 0x205aec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ae8) {
            ctx->pc = 0x205B30u;
            goto label_205b30;
        }
    }
    ctx->pc = 0x205AF0u;
label_205af0:
    // 0x205af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_205af4:
    if (ctx->pc == 0x205AF4u) {
        ctx->pc = 0x205AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AF0u;
        // 0x205af4: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205AF8u;
        goto label_205af8;
    }
    ctx->pc = 0x205AF0u;
    {
        const bool branch_taken_0x205af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205AF0u;
        // 0x205af4: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205af0) {
            ctx->pc = 0x205B08u;
            goto label_205b08;
        }
    }
    ctx->pc = 0x205AF8u;
label_205af8:
    // 0x205af8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205afc:
    // 0x205afc: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205b00:
    // 0x205b00: 0x1000000b  b           . + 4 + (0xB << 2)
label_205b04:
    if (ctx->pc == 0x205B04u) {
        ctx->pc = 0x205B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B00u;
        // 0x205b04: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B08u;
        goto label_205b08;
    }
    ctx->pc = 0x205B00u;
    {
        const bool branch_taken_0x205b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B00u;
        // 0x205b04: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b00) {
            ctx->pc = 0x205B30u;
            goto label_205b30;
        }
    }
    ctx->pc = 0x205B08u;
label_205b08:
    // 0x205b08: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x205b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_205b0c:
    // 0x205b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_205b10:
    if (ctx->pc == 0x205B10u) {
        ctx->pc = 0x205B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B0Cu;
        // 0x205b10: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B14u;
        goto label_205b14;
    }
    ctx->pc = 0x205B0Cu;
    {
        const bool branch_taken_0x205b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B0Cu;
        // 0x205b10: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b0c) {
            ctx->pc = 0x205B20u;
            goto label_205b20;
        }
    }
    ctx->pc = 0x205B14u;
label_205b14:
    // 0x205b14: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205b18:
    // 0x205b18: 0x10000005  b           . + 4 + (0x5 << 2)
label_205b1c:
    if (ctx->pc == 0x205B1Cu) {
        ctx->pc = 0x205B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B18u;
        // 0x205b1c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B20u;
        goto label_205b20;
    }
    ctx->pc = 0x205B18u;
    {
        const bool branch_taken_0x205b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B18u;
        // 0x205b1c: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b18) {
            ctx->pc = 0x205B30u;
            goto label_205b30;
        }
    }
    ctx->pc = 0x205B20u;
label_205b20:
    // 0x205b20: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x205b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_205b24:
    // 0x205b24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x205b24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_205b28:
    // 0x205b28: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205b2c:
    // 0x205b2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x205b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_205b30:
    // 0x205b30: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x205b30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_205b34:
    // 0x205b34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x205b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_205b38:
    // 0x205b38: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_205b3c:
    // 0x205b3c: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x205b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_205b40:
    // 0x205b40: 0x1000fdd8  b           . + 4 + (-0x228 << 2)
label_205b44:
    if (ctx->pc == 0x205B44u) {
        ctx->pc = 0x205B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B40u;
        // 0x205b44: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B48u;
        goto label_205b48;
    }
    ctx->pc = 0x205B40u;
    {
        const bool branch_taken_0x205b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B40u;
        // 0x205b44: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b40) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205B48u;
label_205b48:
    // 0x205b48: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205b4c:
    // 0x205b4c: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x205b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_205b50:
    // 0x205b50: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x205b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_205b54:
    // 0x205b54: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_205b58:
    // 0x205b58: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x205b58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_205b5c:
    // 0x205b5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_205b60:
    // 0x205b60: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_205b64:
    if (ctx->pc == 0x205B64u) {
        ctx->pc = 0x205B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B60u;
        // 0x205b64: 0x367303c0  ori         $s3, $s3, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B68u;
        goto label_205b68;
    }
    ctx->pc = 0x205B60u;
    {
        const bool branch_taken_0x205b60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B60u;
        // 0x205b64: 0x367303c0  ori         $s3, $s3, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b60) {
            ctx->pc = 0x205C2Cu;
            goto label_205c2c;
        }
    }
    ctx->pc = 0x205B68u;
label_205b68:
    // 0x205b68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205b6c:
    // 0x205b6c: 0x0  nop
    ctx->pc = 0x205b6cu;
    // NOP
label_205b70:
    // 0x205b70: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x205b70u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205b74:
    // 0x205b74: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x205b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_205b78:
    // 0x205b78: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x205b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_205b7c:
    // 0x205b7c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_205b80:
    if (ctx->pc == 0x205B80u) {
        ctx->pc = 0x205B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B7Cu;
        // 0x205b80: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B84u;
        goto label_205b84;
    }
    ctx->pc = 0x205B7Cu;
    {
        const bool branch_taken_0x205b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B7Cu;
        // 0x205b80: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b7c) {
            ctx->pc = 0x205C2Cu;
            goto label_205c2c;
        }
    }
    ctx->pc = 0x205B84u;
label_205b84:
    // 0x205b84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205b88:
    // 0x205b88: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x205b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_205b8c:
    // 0x205b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205b90:
    // 0x205b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_205b94:
    // 0x205b94: 0x800008  jr          $a0
label_205b98:
    if (ctx->pc == 0x205B98u) {
        ctx->pc = 0x205B9Cu;
        goto label_205b9c;
    }
    ctx->pc = 0x205B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205B9Cu: goto label_205b9c;
            case 0x205BA8u: goto label_205ba8;
            case 0x205BBCu: goto label_205bbc;
            case 0x205BD0u: goto label_205bd0;
            case 0x205C2Cu: goto label_205c2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x205B9Cu;
label_205b9c:
    // 0x205b9c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_205ba0:
    // 0x205ba0: 0x10000011  b           . + 4 + (0x11 << 2)
label_205ba4:
    if (ctx->pc == 0x205BA4u) {
        ctx->pc = 0x205BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BA0u;
        // 0x205ba4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BA8u;
        goto label_205ba8;
    }
    ctx->pc = 0x205BA0u;
    {
        const bool branch_taken_0x205ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BA0u;
        // 0x205ba4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ba0) {
            ctx->pc = 0x205BE8u;
            goto label_205be8;
        }
    }
    ctx->pc = 0x205BA8u;
label_205ba8:
    // 0x205ba8: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x205ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_205bac:
    // 0x205bac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_205bb0:
    if (ctx->pc == 0x205BB0u) {
        ctx->pc = 0x205BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BACu;
        // 0x205bb0: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BB4u;
        goto label_205bb4;
    }
    ctx->pc = 0x205BACu;
    {
        const bool branch_taken_0x205bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BACu;
        // 0x205bb0: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bac) {
            ctx->pc = 0x205C2Cu;
            goto label_205c2c;
        }
    }
    ctx->pc = 0x205BB4u;
label_205bb4:
    // 0x205bb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_205bb8:
    if (ctx->pc == 0x205BB8u) {
        ctx->pc = 0x205BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BB4u;
        // 0x205bb8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BBCu;
        goto label_205bbc;
    }
    ctx->pc = 0x205BB4u;
    {
        const bool branch_taken_0x205bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BB4u;
        // 0x205bb8: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bb4) {
            ctx->pc = 0x205BE8u;
            goto label_205be8;
        }
    }
    ctx->pc = 0x205BBCu;
label_205bbc:
    // 0x205bbc: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x205bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_205bc0:
    // 0x205bc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_205bc4:
    if (ctx->pc == 0x205BC4u) {
        ctx->pc = 0x205BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BC0u;
        // 0x205bc4: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BC8u;
        goto label_205bc8;
    }
    ctx->pc = 0x205BC0u;
    {
        const bool branch_taken_0x205bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BC0u;
        // 0x205bc4: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bc0) {
            ctx->pc = 0x205C2Cu;
            goto label_205c2c;
        }
    }
    ctx->pc = 0x205BC8u;
label_205bc8:
    // 0x205bc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_205bcc:
    if (ctx->pc == 0x205BCCu) {
        ctx->pc = 0x205BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BC8u;
        // 0x205bcc: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BD0u;
        goto label_205bd0;
    }
    ctx->pc = 0x205BC8u;
    {
        const bool branch_taken_0x205bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BC8u;
        // 0x205bcc: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bc8) {
            ctx->pc = 0x205BE8u;
            goto label_205be8;
        }
    }
    ctx->pc = 0x205BD0u;
label_205bd0:
    // 0x205bd0: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x205bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_205bd4:
    // 0x205bd4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x205bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_205bd8:
    // 0x205bd8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_205bdc:
    if (ctx->pc == 0x205BDCu) {
        ctx->pc = 0x205BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD8u;
        // 0x205bdc: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205BE0u;
        goto label_205be0;
    }
    ctx->pc = 0x205BD8u;
    {
        const bool branch_taken_0x205bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x205BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD8u;
        // 0x205bdc: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bd8) {
            ctx->pc = 0x205C2Cu;
            goto label_205c2c;
        }
    }
    ctx->pc = 0x205BE0u;
label_205be0:
    // 0x205be0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_205be4:
    // 0x205be4: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x205be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_205be8:
    // 0x205be8: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x205be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_205bec:
    // 0x205bec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x205becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_205bf0:
    // 0x205bf0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205bf4:
    // 0x205bf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_205bf8:
    // 0x205bf8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_205bfc:
    if (ctx->pc == 0x205BFCu) {
        ctx->pc = 0x205BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF8u;
        // 0x205bfc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C00u;
        goto label_205c00;
    }
    ctx->pc = 0x205BF8u;
    {
        const bool branch_taken_0x205bf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF8u;
        // 0x205bfc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bf8) {
            ctx->pc = 0x205C10u;
            goto label_205c10;
        }
    }
    ctx->pc = 0x205C00u;
label_205c00:
    // 0x205c00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_205c04:
    // 0x205c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_205c08:
    // 0x205c08: 0x10000005  b           . + 4 + (0x5 << 2)
label_205c0c:
    if (ctx->pc == 0x205C0Cu) {
        ctx->pc = 0x205C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C08u;
        // 0x205c0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C10u;
        goto label_205c10;
    }
    ctx->pc = 0x205C08u;
    {
        const bool branch_taken_0x205c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C08u;
        // 0x205c0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c08) {
            ctx->pc = 0x205C20u;
            goto label_205c20;
        }
    }
    ctx->pc = 0x205C10u;
label_205c10:
    // 0x205c10: 0xc080432  jal         func_2010C8
label_205c14:
    if (ctx->pc == 0x205C14u) {
        ctx->pc = 0x205C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C10u;
        // 0x205c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C18u;
        goto label_205c18;
    }
    ctx->pc = 0x205C10u;
    SET_GPR_U32(ctx, 31, 0x205C18u);
    ctx->pc = 0x205C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C10u;
    // 0x205c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205C10u, 0x205C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C18u;
label_205c18:
    // 0x205c18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_205c1c:
    if (ctx->pc == 0x205C1Cu) {
        ctx->pc = 0x205C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C18u;
        // 0x205c1c: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C20u;
        goto label_205c20;
    }
    ctx->pc = 0x205C18u;
    {
        const bool branch_taken_0x205c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C18u;
        // 0x205c1c: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c18) {
            ctx->pc = 0x205C30u;
            goto label_205c30;
        }
    }
    ctx->pc = 0x205C20u;
label_205c20:
    // 0x205c20: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205c20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_205c24:
    // 0x205c24: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
label_205c28:
    if (ctx->pc == 0x205C28u) {
        ctx->pc = 0x205C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C24u;
        // 0x205c28: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C2Cu;
        goto label_205c2c;
    }
    ctx->pc = 0x205C24u;
    {
        const bool branch_taken_0x205c24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x205c24) {
            ctx->pc = 0x205C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C24u;
            // 0x205c28: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205b70;
        }
    }
    ctx->pc = 0x205C2Cu;
label_205c2c:
    // 0x205c2c: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x205c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_205c30:
    // 0x205c30: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_205c34:
    if (ctx->pc == 0x205C34u) {
        ctx->pc = 0x205C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C30u;
        // 0x205c34: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C38u;
        goto label_205c38;
    }
    ctx->pc = 0x205C30u;
    {
        const bool branch_taken_0x205c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C30u;
        // 0x205c34: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c30) {
            ctx->pc = 0x205CACu;
            goto label_205cac;
        }
    }
    ctx->pc = 0x205C38u;
label_205c38:
    // 0x205c38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_205c3c:
    if (ctx->pc == 0x205C3Cu) {
        ctx->pc = 0x205C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C38u;
        // 0x205c3c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C40u;
        goto label_205c40;
    }
    ctx->pc = 0x205C38u;
    {
        const bool branch_taken_0x205c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C38u;
        // 0x205c3c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c38) {
            ctx->pc = 0x205C74u;
            goto label_205c74;
        }
    }
    ctx->pc = 0x205C40u;
label_205c40:
    // 0x205c40: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x205c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_205c44:
    // 0x205c44: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_205c48:
    if (ctx->pc == 0x205C48u) {
        ctx->pc = 0x205C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C44u;
        // 0x205c48: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C4Cu;
        goto label_205c4c;
    }
    ctx->pc = 0x205C44u;
    {
        const bool branch_taken_0x205c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C44u;
        // 0x205c48: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c44) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205C4Cu;
label_205c4c:
    // 0x205c4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_205c50:
    // 0x205c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x205c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_205c54:
    // 0x205c54: 0xc080dea  jal         func_2037A8
label_205c58:
    if (ctx->pc == 0x205C58u) {
        ctx->pc = 0x205C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C54u;
        // 0x205c58: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C5Cu;
        goto label_205c5c;
    }
    ctx->pc = 0x205C54u;
    SET_GPR_U32(ctx, 31, 0x205C5Cu);
    ctx->pc = 0x205C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C54u;
    // 0x205c58: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205C54u, 0x205C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C5Cu;
label_205c5c:
    // 0x205c5c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x205c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_205c60:
    // 0x205c60: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x205c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_205c64:
    // 0x205c64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_205c68:
    if (ctx->pc == 0x205C68u) {
        ctx->pc = 0x205C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C64u;
        // 0x205c68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C6Cu;
        goto label_205c6c;
    }
    ctx->pc = 0x205C64u;
    {
        const bool branch_taken_0x205c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C64u;
        // 0x205c68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c64) {
            ctx->pc = 0x205C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205c50;
        }
    }
    ctx->pc = 0x205C6Cu;
label_205c6c:
    // 0x205c6c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_205c70:
    if (ctx->pc == 0x205C70u) {
        ctx->pc = 0x205C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C6Cu;
        // 0x205c70: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C74u;
        goto label_205c74;
    }
    ctx->pc = 0x205C6Cu;
    {
        const bool branch_taken_0x205c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C6Cu;
        // 0x205c70: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c6c) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205C74u;
label_205c74:
    // 0x205c74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_205c78:
    // 0x205c78: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x205c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_205c7c:
    // 0x205c7c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x205c7cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_205c80:
    // 0x205c80: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_205c84:
    if (ctx->pc == 0x205C84u) {
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C88u;
        goto label_205c88;
    }
    ctx->pc = 0x205C80u;
    {
        const bool branch_taken_0x205c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c80) {
            ctx->pc = 0x205CA0u;
            goto label_205ca0;
        }
    }
    ctx->pc = 0x205C88u;
label_205c88:
    // 0x205c88: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_205c8c:
    if (ctx->pc == 0x205C8Cu) {
        ctx->pc = 0x205C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C88u;
        // 0x205c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C90u;
        goto label_205c90;
    }
    ctx->pc = 0x205C88u;
    {
        const bool branch_taken_0x205c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x205C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C88u;
        // 0x205c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c88) {
            ctx->pc = 0x205CA0u;
            goto label_205ca0;
        }
    }
    ctx->pc = 0x205C90u;
label_205c90:
    // 0x205c90: 0xc080dea  jal         func_2037A8
label_205c94:
    if (ctx->pc == 0x205C94u) {
        ctx->pc = 0x205C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C90u;
        // 0x205c94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205C98u;
        goto label_205c98;
    }
    ctx->pc = 0x205C90u;
    SET_GPR_U32(ctx, 31, 0x205C98u);
    ctx->pc = 0x205C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C90u;
    // 0x205c94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205C90u, 0x205C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C98u;
label_205c98:
    // 0x205c98: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_205c9c:
    // 0x205c9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_205ca0:
    // 0x205ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205ca4:
    // 0x205ca4: 0xc080dea  jal         func_2037A8
label_205ca8:
    if (ctx->pc == 0x205CA8u) {
        ctx->pc = 0x205CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CA4u;
        // 0x205ca8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CACu;
        goto label_205cac;
    }
    ctx->pc = 0x205CA4u;
    SET_GPR_U32(ctx, 31, 0x205CACu);
    ctx->pc = 0x205CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CA4u;
    // 0x205ca8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205CA4u, 0x205CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CACu;
label_205cac:
    // 0x205cac: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x205cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_205cb0:
    // 0x205cb0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_205cb4:
    if (ctx->pc == 0x205CB4u) {
        ctx->pc = 0x205CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CB0u;
        // 0x205cb4: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CB8u;
        goto label_205cb8;
    }
    ctx->pc = 0x205CB0u;
    {
        const bool branch_taken_0x205cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CB0u;
        // 0x205cb4: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205cb0) {
            ctx->pc = 0x205D08u;
            goto label_205d08;
        }
    }
    ctx->pc = 0x205CB8u;
label_205cb8:
    // 0x205cb8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x205cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_205cbc:
    // 0x205cbc: 0xc07ef98  jal         func_1FBE60
label_205cc0:
    if (ctx->pc == 0x205CC0u) {
        ctx->pc = 0x205CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CBCu;
        // 0x205cc0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CC4u;
        goto label_205cc4;
    }
    ctx->pc = 0x205CBCu;
    SET_GPR_U32(ctx, 31, 0x205CC4u);
    ctx->pc = 0x205CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CBCu;
    // 0x205cc0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE60u, 0x205CBCu, 0x205CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CC4u;
label_205cc4:
    // 0x205cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205cc8:
    // 0x205cc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x205cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_205ccc:
    // 0x205ccc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_205cd0:
    if (ctx->pc == 0x205CD0u) {
        ctx->pc = 0x205CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CCCu;
        // 0x205cd0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CD4u;
        goto label_205cd4;
    }
    ctx->pc = 0x205CCCu;
    {
        const bool branch_taken_0x205ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205ccc) {
            ctx->pc = 0x205CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205CCCu;
            // 0x205cd0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205CE4u;
            goto label_205ce4;
        }
    }
    ctx->pc = 0x205CD4u;
label_205cd4:
    // 0x205cd4: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x205cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_205cd8:
    // 0x205cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_205cdc:
    if (ctx->pc == 0x205CDCu) {
        ctx->pc = 0x205CE0u;
        goto label_205ce0;
    }
    ctx->pc = 0x205CD8u;
    {
        const bool branch_taken_0x205cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cd8) {
            ctx->pc = 0x205CF0u;
            goto label_205cf0;
        }
    }
    ctx->pc = 0x205CE0u;
label_205ce0:
    // 0x205ce0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_205ce4:
    // 0x205ce4: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205ce8:
    // 0x205ce8: 0x10000005  b           . + 4 + (0x5 << 2)
label_205cec:
    if (ctx->pc == 0x205CECu) {
        ctx->pc = 0x205CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CE8u;
        // 0x205cec: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CF0u;
        goto label_205cf0;
    }
    ctx->pc = 0x205CE8u;
    {
        const bool branch_taken_0x205ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CE8u;
        // 0x205cec: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ce8) {
            ctx->pc = 0x205D00u;
            goto label_205d00;
        }
    }
    ctx->pc = 0x205CF0u;
label_205cf0:
    // 0x205cf0: 0xc082222  jal         func_208888
label_205cf4:
    if (ctx->pc == 0x205CF4u) {
        ctx->pc = 0x205CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CF0u;
        // 0x205cf4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205CF8u;
        goto label_205cf8;
    }
    ctx->pc = 0x205CF0u;
    SET_GPR_U32(ctx, 31, 0x205CF8u);
    ctx->pc = 0x205CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205CF0u;
    // 0x205cf4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x205CF0u, 0x205CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CF8u;
label_205cf8:
    // 0x205cf8: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_205cfc:
    // 0x205cfc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x205cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_205d00:
    // 0x205d00: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x205d00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_205d04:
    // 0x205d04: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_205d08:
    // 0x205d08: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_205d0c:
    // 0x205d0c: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_205d10:
    // 0x205d10: 0x1000fd64  b           . + 4 + (-0x29C << 2)
label_205d14:
    if (ctx->pc == 0x205D14u) {
        ctx->pc = 0x205D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D10u;
        // 0x205d14: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D18u;
        goto label_205d18;
    }
    ctx->pc = 0x205D10u;
    {
        const bool branch_taken_0x205d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D10u;
        // 0x205d14: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d10) {
            ctx->pc = 0x2052A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2052a4;
        }
    }
    ctx->pc = 0x205D18u;
label_205d18:
    // 0x205d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x205d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_205d1c:
    // 0x205d1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_205d20:
    if (ctx->pc == 0x205D20u) {
        ctx->pc = 0x205D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D1Cu;
        // 0x205d20: 0x2f7100b  movn        $v0, $s7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D24u;
        goto label_205d24;
    }
    ctx->pc = 0x205D1Cu;
    {
        const bool branch_taken_0x205d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D1Cu;
        // 0x205d20: 0x2f7100b  movn        $v0, $s7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d1c) {
            ctx->pc = 0x205D28u;
            goto label_205d28;
        }
    }
    ctx->pc = 0x205D24u;
label_205d24:
    // 0x205d24: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x205d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_205d28:
    // 0x205d28: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x205d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_205d2c:
    // 0x205d2c: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x205d2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_205d30:
    // 0x205d30: 0xdfb702f0  ld          $s7, 0x2F0($sp)
    ctx->pc = 0x205d30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_205d34:
    // 0x205d34: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x205d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_205d38:
    // 0x205d38: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x205d38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_205d3c:
    // 0x205d3c: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x205d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_205d40:
    // 0x205d40: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x205d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_205d44:
    // 0x205d44: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x205d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_205d48:
    // 0x205d48: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x205d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_205d4c:
    // 0x205d4c: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x205d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_205d50:
    // 0x205d50: 0x3e00008  jr          $ra
label_205d54:
    if (ctx->pc == 0x205D54u) {
        ctx->pc = 0x205D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D50u;
        // 0x205d54: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205D58u;
        goto label_fallthrough_0x205d50;
    }
    ctx->pc = 0x205D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D50u;
        // 0x205d54: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205d50:
    ctx->pc = 0x205D58u;
}
