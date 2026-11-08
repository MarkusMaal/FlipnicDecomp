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

// Function: FUN_00181450
// Address: 0x181450 - 0x181d24
void FUN_00181450_0x181450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181450_0x181450");
#endif

    switch (ctx->pc) {
        case 0x181450u: goto label_181450;
        case 0x181454u: goto label_181454;
        case 0x181458u: goto label_181458;
        case 0x18145cu: goto label_18145c;
        case 0x181460u: goto label_181460;
        case 0x181464u: goto label_181464;
        case 0x181468u: goto label_181468;
        case 0x18146cu: goto label_18146c;
        case 0x181470u: goto label_181470;
        case 0x181474u: goto label_181474;
        case 0x181478u: goto label_181478;
        case 0x18147cu: goto label_18147c;
        case 0x181480u: goto label_181480;
        case 0x181484u: goto label_181484;
        case 0x181488u: goto label_181488;
        case 0x18148cu: goto label_18148c;
        case 0x181490u: goto label_181490;
        case 0x181494u: goto label_181494;
        case 0x181498u: goto label_181498;
        case 0x18149cu: goto label_18149c;
        case 0x1814a0u: goto label_1814a0;
        case 0x1814a4u: goto label_1814a4;
        case 0x1814a8u: goto label_1814a8;
        case 0x1814acu: goto label_1814ac;
        case 0x1814b0u: goto label_1814b0;
        case 0x1814b4u: goto label_1814b4;
        case 0x1814b8u: goto label_1814b8;
        case 0x1814bcu: goto label_1814bc;
        case 0x1814c0u: goto label_1814c0;
        case 0x1814c4u: goto label_1814c4;
        case 0x1814c8u: goto label_1814c8;
        case 0x1814ccu: goto label_1814cc;
        case 0x1814d0u: goto label_1814d0;
        case 0x1814d4u: goto label_1814d4;
        case 0x1814d8u: goto label_1814d8;
        case 0x1814dcu: goto label_1814dc;
        case 0x1814e0u: goto label_1814e0;
        case 0x1814e4u: goto label_1814e4;
        case 0x1814e8u: goto label_1814e8;
        case 0x1814ecu: goto label_1814ec;
        case 0x1814f0u: goto label_1814f0;
        case 0x1814f4u: goto label_1814f4;
        case 0x1814f8u: goto label_1814f8;
        case 0x1814fcu: goto label_1814fc;
        case 0x181500u: goto label_181500;
        case 0x181504u: goto label_181504;
        case 0x181508u: goto label_181508;
        case 0x18150cu: goto label_18150c;
        case 0x181510u: goto label_181510;
        case 0x181514u: goto label_181514;
        case 0x181518u: goto label_181518;
        case 0x18151cu: goto label_18151c;
        case 0x181520u: goto label_181520;
        case 0x181524u: goto label_181524;
        case 0x181528u: goto label_181528;
        case 0x18152cu: goto label_18152c;
        case 0x181530u: goto label_181530;
        case 0x181534u: goto label_181534;
        case 0x181538u: goto label_181538;
        case 0x18153cu: goto label_18153c;
        case 0x181540u: goto label_181540;
        case 0x181544u: goto label_181544;
        case 0x181548u: goto label_181548;
        case 0x18154cu: goto label_18154c;
        case 0x181550u: goto label_181550;
        case 0x181554u: goto label_181554;
        case 0x181558u: goto label_181558;
        case 0x18155cu: goto label_18155c;
        case 0x181560u: goto label_181560;
        case 0x181564u: goto label_181564;
        case 0x181568u: goto label_181568;
        case 0x18156cu: goto label_18156c;
        case 0x181570u: goto label_181570;
        case 0x181574u: goto label_181574;
        case 0x181578u: goto label_181578;
        case 0x18157cu: goto label_18157c;
        case 0x181580u: goto label_181580;
        case 0x181584u: goto label_181584;
        case 0x181588u: goto label_181588;
        case 0x18158cu: goto label_18158c;
        case 0x181590u: goto label_181590;
        case 0x181594u: goto label_181594;
        case 0x181598u: goto label_181598;
        case 0x18159cu: goto label_18159c;
        case 0x1815a0u: goto label_1815a0;
        case 0x1815a4u: goto label_1815a4;
        case 0x1815a8u: goto label_1815a8;
        case 0x1815acu: goto label_1815ac;
        case 0x1815b0u: goto label_1815b0;
        case 0x1815b4u: goto label_1815b4;
        case 0x1815b8u: goto label_1815b8;
        case 0x1815bcu: goto label_1815bc;
        case 0x1815c0u: goto label_1815c0;
        case 0x1815c4u: goto label_1815c4;
        case 0x1815c8u: goto label_1815c8;
        case 0x1815ccu: goto label_1815cc;
        case 0x1815d0u: goto label_1815d0;
        case 0x1815d4u: goto label_1815d4;
        case 0x1815d8u: goto label_1815d8;
        case 0x1815dcu: goto label_1815dc;
        case 0x1815e0u: goto label_1815e0;
        case 0x1815e4u: goto label_1815e4;
        case 0x1815e8u: goto label_1815e8;
        case 0x1815ecu: goto label_1815ec;
        case 0x1815f0u: goto label_1815f0;
        case 0x1815f4u: goto label_1815f4;
        case 0x1815f8u: goto label_1815f8;
        case 0x1815fcu: goto label_1815fc;
        case 0x181600u: goto label_181600;
        case 0x181604u: goto label_181604;
        case 0x181608u: goto label_181608;
        case 0x18160cu: goto label_18160c;
        case 0x181610u: goto label_181610;
        case 0x181614u: goto label_181614;
        case 0x181618u: goto label_181618;
        case 0x18161cu: goto label_18161c;
        case 0x181620u: goto label_181620;
        case 0x181624u: goto label_181624;
        case 0x181628u: goto label_181628;
        case 0x18162cu: goto label_18162c;
        case 0x181630u: goto label_181630;
        case 0x181634u: goto label_181634;
        case 0x181638u: goto label_181638;
        case 0x18163cu: goto label_18163c;
        case 0x181640u: goto label_181640;
        case 0x181644u: goto label_181644;
        case 0x181648u: goto label_181648;
        case 0x18164cu: goto label_18164c;
        case 0x181650u: goto label_181650;
        case 0x181654u: goto label_181654;
        case 0x181658u: goto label_181658;
        case 0x18165cu: goto label_18165c;
        case 0x181660u: goto label_181660;
        case 0x181664u: goto label_181664;
        case 0x181668u: goto label_181668;
        case 0x18166cu: goto label_18166c;
        case 0x181670u: goto label_181670;
        case 0x181674u: goto label_181674;
        case 0x181678u: goto label_181678;
        case 0x18167cu: goto label_18167c;
        case 0x181680u: goto label_181680;
        case 0x181684u: goto label_181684;
        case 0x181688u: goto label_181688;
        case 0x18168cu: goto label_18168c;
        case 0x181690u: goto label_181690;
        case 0x181694u: goto label_181694;
        case 0x181698u: goto label_181698;
        case 0x18169cu: goto label_18169c;
        case 0x1816a0u: goto label_1816a0;
        case 0x1816a4u: goto label_1816a4;
        case 0x1816a8u: goto label_1816a8;
        case 0x1816acu: goto label_1816ac;
        case 0x1816b0u: goto label_1816b0;
        case 0x1816b4u: goto label_1816b4;
        case 0x1816b8u: goto label_1816b8;
        case 0x1816bcu: goto label_1816bc;
        case 0x1816c0u: goto label_1816c0;
        case 0x1816c4u: goto label_1816c4;
        case 0x1816c8u: goto label_1816c8;
        case 0x1816ccu: goto label_1816cc;
        case 0x1816d0u: goto label_1816d0;
        case 0x1816d4u: goto label_1816d4;
        case 0x1816d8u: goto label_1816d8;
        case 0x1816dcu: goto label_1816dc;
        case 0x1816e0u: goto label_1816e0;
        case 0x1816e4u: goto label_1816e4;
        case 0x1816e8u: goto label_1816e8;
        case 0x1816ecu: goto label_1816ec;
        case 0x1816f0u: goto label_1816f0;
        case 0x1816f4u: goto label_1816f4;
        case 0x1816f8u: goto label_1816f8;
        case 0x1816fcu: goto label_1816fc;
        case 0x181700u: goto label_181700;
        case 0x181704u: goto label_181704;
        case 0x181708u: goto label_181708;
        case 0x18170cu: goto label_18170c;
        case 0x181710u: goto label_181710;
        case 0x181714u: goto label_181714;
        case 0x181718u: goto label_181718;
        case 0x18171cu: goto label_18171c;
        case 0x181720u: goto label_181720;
        case 0x181724u: goto label_181724;
        case 0x181728u: goto label_181728;
        case 0x18172cu: goto label_18172c;
        case 0x181730u: goto label_181730;
        case 0x181734u: goto label_181734;
        case 0x181738u: goto label_181738;
        case 0x18173cu: goto label_18173c;
        case 0x181740u: goto label_181740;
        case 0x181744u: goto label_181744;
        case 0x181748u: goto label_181748;
        case 0x18174cu: goto label_18174c;
        case 0x181750u: goto label_181750;
        case 0x181754u: goto label_181754;
        case 0x181758u: goto label_181758;
        case 0x18175cu: goto label_18175c;
        case 0x181760u: goto label_181760;
        case 0x181764u: goto label_181764;
        case 0x181768u: goto label_181768;
        case 0x18176cu: goto label_18176c;
        case 0x181770u: goto label_181770;
        case 0x181774u: goto label_181774;
        case 0x181778u: goto label_181778;
        case 0x18177cu: goto label_18177c;
        case 0x181780u: goto label_181780;
        case 0x181784u: goto label_181784;
        case 0x181788u: goto label_181788;
        case 0x18178cu: goto label_18178c;
        case 0x181790u: goto label_181790;
        case 0x181794u: goto label_181794;
        case 0x181798u: goto label_181798;
        case 0x18179cu: goto label_18179c;
        case 0x1817a0u: goto label_1817a0;
        case 0x1817a4u: goto label_1817a4;
        case 0x1817a8u: goto label_1817a8;
        case 0x1817acu: goto label_1817ac;
        case 0x1817b0u: goto label_1817b0;
        case 0x1817b4u: goto label_1817b4;
        case 0x1817b8u: goto label_1817b8;
        case 0x1817bcu: goto label_1817bc;
        case 0x1817c0u: goto label_1817c0;
        case 0x1817c4u: goto label_1817c4;
        case 0x1817c8u: goto label_1817c8;
        case 0x1817ccu: goto label_1817cc;
        case 0x1817d0u: goto label_1817d0;
        case 0x1817d4u: goto label_1817d4;
        case 0x1817d8u: goto label_1817d8;
        case 0x1817dcu: goto label_1817dc;
        case 0x1817e0u: goto label_1817e0;
        case 0x1817e4u: goto label_1817e4;
        case 0x1817e8u: goto label_1817e8;
        case 0x1817ecu: goto label_1817ec;
        case 0x1817f0u: goto label_1817f0;
        case 0x1817f4u: goto label_1817f4;
        case 0x1817f8u: goto label_1817f8;
        case 0x1817fcu: goto label_1817fc;
        case 0x181800u: goto label_181800;
        case 0x181804u: goto label_181804;
        case 0x181808u: goto label_181808;
        case 0x18180cu: goto label_18180c;
        case 0x181810u: goto label_181810;
        case 0x181814u: goto label_181814;
        case 0x181818u: goto label_181818;
        case 0x18181cu: goto label_18181c;
        case 0x181820u: goto label_181820;
        case 0x181824u: goto label_181824;
        case 0x181828u: goto label_181828;
        case 0x18182cu: goto label_18182c;
        case 0x181830u: goto label_181830;
        case 0x181834u: goto label_181834;
        case 0x181838u: goto label_181838;
        case 0x18183cu: goto label_18183c;
        case 0x181840u: goto label_181840;
        case 0x181844u: goto label_181844;
        case 0x181848u: goto label_181848;
        case 0x18184cu: goto label_18184c;
        case 0x181850u: goto label_181850;
        case 0x181854u: goto label_181854;
        case 0x181858u: goto label_181858;
        case 0x18185cu: goto label_18185c;
        case 0x181860u: goto label_181860;
        case 0x181864u: goto label_181864;
        case 0x181868u: goto label_181868;
        case 0x18186cu: goto label_18186c;
        case 0x181870u: goto label_181870;
        case 0x181874u: goto label_181874;
        case 0x181878u: goto label_181878;
        case 0x18187cu: goto label_18187c;
        case 0x181880u: goto label_181880;
        case 0x181884u: goto label_181884;
        case 0x181888u: goto label_181888;
        case 0x18188cu: goto label_18188c;
        case 0x181890u: goto label_181890;
        case 0x181894u: goto label_181894;
        case 0x181898u: goto label_181898;
        case 0x18189cu: goto label_18189c;
        case 0x1818a0u: goto label_1818a0;
        case 0x1818a4u: goto label_1818a4;
        case 0x1818a8u: goto label_1818a8;
        case 0x1818acu: goto label_1818ac;
        case 0x1818b0u: goto label_1818b0;
        case 0x1818b4u: goto label_1818b4;
        case 0x1818b8u: goto label_1818b8;
        case 0x1818bcu: goto label_1818bc;
        case 0x1818c0u: goto label_1818c0;
        case 0x1818c4u: goto label_1818c4;
        case 0x1818c8u: goto label_1818c8;
        case 0x1818ccu: goto label_1818cc;
        case 0x1818d0u: goto label_1818d0;
        case 0x1818d4u: goto label_1818d4;
        case 0x1818d8u: goto label_1818d8;
        case 0x1818dcu: goto label_1818dc;
        case 0x1818e0u: goto label_1818e0;
        case 0x1818e4u: goto label_1818e4;
        case 0x1818e8u: goto label_1818e8;
        case 0x1818ecu: goto label_1818ec;
        case 0x1818f0u: goto label_1818f0;
        case 0x1818f4u: goto label_1818f4;
        case 0x1818f8u: goto label_1818f8;
        case 0x1818fcu: goto label_1818fc;
        case 0x181900u: goto label_181900;
        case 0x181904u: goto label_181904;
        case 0x181908u: goto label_181908;
        case 0x18190cu: goto label_18190c;
        case 0x181910u: goto label_181910;
        case 0x181914u: goto label_181914;
        case 0x181918u: goto label_181918;
        case 0x18191cu: goto label_18191c;
        case 0x181920u: goto label_181920;
        case 0x181924u: goto label_181924;
        case 0x181928u: goto label_181928;
        case 0x18192cu: goto label_18192c;
        case 0x181930u: goto label_181930;
        case 0x181934u: goto label_181934;
        case 0x181938u: goto label_181938;
        case 0x18193cu: goto label_18193c;
        case 0x181940u: goto label_181940;
        case 0x181944u: goto label_181944;
        case 0x181948u: goto label_181948;
        case 0x18194cu: goto label_18194c;
        case 0x181950u: goto label_181950;
        case 0x181954u: goto label_181954;
        case 0x181958u: goto label_181958;
        case 0x18195cu: goto label_18195c;
        case 0x181960u: goto label_181960;
        case 0x181964u: goto label_181964;
        case 0x181968u: goto label_181968;
        case 0x18196cu: goto label_18196c;
        case 0x181970u: goto label_181970;
        case 0x181974u: goto label_181974;
        case 0x181978u: goto label_181978;
        case 0x18197cu: goto label_18197c;
        case 0x181980u: goto label_181980;
        case 0x181984u: goto label_181984;
        case 0x181988u: goto label_181988;
        case 0x18198cu: goto label_18198c;
        case 0x181990u: goto label_181990;
        case 0x181994u: goto label_181994;
        case 0x181998u: goto label_181998;
        case 0x18199cu: goto label_18199c;
        case 0x1819a0u: goto label_1819a0;
        case 0x1819a4u: goto label_1819a4;
        case 0x1819a8u: goto label_1819a8;
        case 0x1819acu: goto label_1819ac;
        case 0x1819b0u: goto label_1819b0;
        case 0x1819b4u: goto label_1819b4;
        case 0x1819b8u: goto label_1819b8;
        case 0x1819bcu: goto label_1819bc;
        case 0x1819c0u: goto label_1819c0;
        case 0x1819c4u: goto label_1819c4;
        case 0x1819c8u: goto label_1819c8;
        case 0x1819ccu: goto label_1819cc;
        case 0x1819d0u: goto label_1819d0;
        case 0x1819d4u: goto label_1819d4;
        case 0x1819d8u: goto label_1819d8;
        case 0x1819dcu: goto label_1819dc;
        case 0x1819e0u: goto label_1819e0;
        case 0x1819e4u: goto label_1819e4;
        case 0x1819e8u: goto label_1819e8;
        case 0x1819ecu: goto label_1819ec;
        case 0x1819f0u: goto label_1819f0;
        case 0x1819f4u: goto label_1819f4;
        case 0x1819f8u: goto label_1819f8;
        case 0x1819fcu: goto label_1819fc;
        case 0x181a00u: goto label_181a00;
        case 0x181a04u: goto label_181a04;
        case 0x181a08u: goto label_181a08;
        case 0x181a0cu: goto label_181a0c;
        case 0x181a10u: goto label_181a10;
        case 0x181a14u: goto label_181a14;
        case 0x181a18u: goto label_181a18;
        case 0x181a1cu: goto label_181a1c;
        case 0x181a20u: goto label_181a20;
        case 0x181a24u: goto label_181a24;
        case 0x181a28u: goto label_181a28;
        case 0x181a2cu: goto label_181a2c;
        case 0x181a30u: goto label_181a30;
        case 0x181a34u: goto label_181a34;
        case 0x181a38u: goto label_181a38;
        case 0x181a3cu: goto label_181a3c;
        case 0x181a40u: goto label_181a40;
        case 0x181a44u: goto label_181a44;
        case 0x181a48u: goto label_181a48;
        case 0x181a4cu: goto label_181a4c;
        case 0x181a50u: goto label_181a50;
        case 0x181a54u: goto label_181a54;
        case 0x181a58u: goto label_181a58;
        case 0x181a5cu: goto label_181a5c;
        case 0x181a60u: goto label_181a60;
        case 0x181a64u: goto label_181a64;
        case 0x181a68u: goto label_181a68;
        case 0x181a6cu: goto label_181a6c;
        case 0x181a70u: goto label_181a70;
        case 0x181a74u: goto label_181a74;
        case 0x181a78u: goto label_181a78;
        case 0x181a7cu: goto label_181a7c;
        case 0x181a80u: goto label_181a80;
        case 0x181a84u: goto label_181a84;
        case 0x181a88u: goto label_181a88;
        case 0x181a8cu: goto label_181a8c;
        case 0x181a90u: goto label_181a90;
        case 0x181a94u: goto label_181a94;
        case 0x181a98u: goto label_181a98;
        case 0x181a9cu: goto label_181a9c;
        case 0x181aa0u: goto label_181aa0;
        case 0x181aa4u: goto label_181aa4;
        case 0x181aa8u: goto label_181aa8;
        case 0x181aacu: goto label_181aac;
        case 0x181ab0u: goto label_181ab0;
        case 0x181ab4u: goto label_181ab4;
        case 0x181ab8u: goto label_181ab8;
        case 0x181abcu: goto label_181abc;
        case 0x181ac0u: goto label_181ac0;
        case 0x181ac4u: goto label_181ac4;
        case 0x181ac8u: goto label_181ac8;
        case 0x181accu: goto label_181acc;
        case 0x181ad0u: goto label_181ad0;
        case 0x181ad4u: goto label_181ad4;
        case 0x181ad8u: goto label_181ad8;
        case 0x181adcu: goto label_181adc;
        case 0x181ae0u: goto label_181ae0;
        case 0x181ae4u: goto label_181ae4;
        case 0x181ae8u: goto label_181ae8;
        case 0x181aecu: goto label_181aec;
        case 0x181af0u: goto label_181af0;
        case 0x181af4u: goto label_181af4;
        case 0x181af8u: goto label_181af8;
        case 0x181afcu: goto label_181afc;
        case 0x181b00u: goto label_181b00;
        case 0x181b04u: goto label_181b04;
        case 0x181b08u: goto label_181b08;
        case 0x181b0cu: goto label_181b0c;
        case 0x181b10u: goto label_181b10;
        case 0x181b14u: goto label_181b14;
        case 0x181b18u: goto label_181b18;
        case 0x181b1cu: goto label_181b1c;
        case 0x181b20u: goto label_181b20;
        case 0x181b24u: goto label_181b24;
        case 0x181b28u: goto label_181b28;
        case 0x181b2cu: goto label_181b2c;
        case 0x181b30u: goto label_181b30;
        case 0x181b34u: goto label_181b34;
        case 0x181b38u: goto label_181b38;
        case 0x181b3cu: goto label_181b3c;
        case 0x181b40u: goto label_181b40;
        case 0x181b44u: goto label_181b44;
        case 0x181b48u: goto label_181b48;
        case 0x181b4cu: goto label_181b4c;
        case 0x181b50u: goto label_181b50;
        case 0x181b54u: goto label_181b54;
        case 0x181b58u: goto label_181b58;
        case 0x181b5cu: goto label_181b5c;
        case 0x181b60u: goto label_181b60;
        case 0x181b64u: goto label_181b64;
        case 0x181b68u: goto label_181b68;
        case 0x181b6cu: goto label_181b6c;
        case 0x181b70u: goto label_181b70;
        case 0x181b74u: goto label_181b74;
        case 0x181b78u: goto label_181b78;
        case 0x181b7cu: goto label_181b7c;
        case 0x181b80u: goto label_181b80;
        case 0x181b84u: goto label_181b84;
        case 0x181b88u: goto label_181b88;
        case 0x181b8cu: goto label_181b8c;
        case 0x181b90u: goto label_181b90;
        case 0x181b94u: goto label_181b94;
        case 0x181b98u: goto label_181b98;
        case 0x181b9cu: goto label_181b9c;
        case 0x181ba0u: goto label_181ba0;
        case 0x181ba4u: goto label_181ba4;
        case 0x181ba8u: goto label_181ba8;
        case 0x181bacu: goto label_181bac;
        case 0x181bb0u: goto label_181bb0;
        case 0x181bb4u: goto label_181bb4;
        case 0x181bb8u: goto label_181bb8;
        case 0x181bbcu: goto label_181bbc;
        case 0x181bc0u: goto label_181bc0;
        case 0x181bc4u: goto label_181bc4;
        case 0x181bc8u: goto label_181bc8;
        case 0x181bccu: goto label_181bcc;
        case 0x181bd0u: goto label_181bd0;
        case 0x181bd4u: goto label_181bd4;
        case 0x181bd8u: goto label_181bd8;
        case 0x181bdcu: goto label_181bdc;
        case 0x181be0u: goto label_181be0;
        case 0x181be4u: goto label_181be4;
        case 0x181be8u: goto label_181be8;
        case 0x181becu: goto label_181bec;
        case 0x181bf0u: goto label_181bf0;
        case 0x181bf4u: goto label_181bf4;
        case 0x181bf8u: goto label_181bf8;
        case 0x181bfcu: goto label_181bfc;
        case 0x181c00u: goto label_181c00;
        case 0x181c04u: goto label_181c04;
        case 0x181c08u: goto label_181c08;
        case 0x181c0cu: goto label_181c0c;
        case 0x181c10u: goto label_181c10;
        case 0x181c14u: goto label_181c14;
        case 0x181c18u: goto label_181c18;
        case 0x181c1cu: goto label_181c1c;
        case 0x181c20u: goto label_181c20;
        case 0x181c24u: goto label_181c24;
        case 0x181c28u: goto label_181c28;
        case 0x181c2cu: goto label_181c2c;
        case 0x181c30u: goto label_181c30;
        case 0x181c34u: goto label_181c34;
        case 0x181c38u: goto label_181c38;
        case 0x181c3cu: goto label_181c3c;
        case 0x181c40u: goto label_181c40;
        case 0x181c44u: goto label_181c44;
        case 0x181c48u: goto label_181c48;
        case 0x181c4cu: goto label_181c4c;
        case 0x181c50u: goto label_181c50;
        case 0x181c54u: goto label_181c54;
        case 0x181c58u: goto label_181c58;
        case 0x181c5cu: goto label_181c5c;
        case 0x181c60u: goto label_181c60;
        case 0x181c64u: goto label_181c64;
        case 0x181c68u: goto label_181c68;
        case 0x181c6cu: goto label_181c6c;
        case 0x181c70u: goto label_181c70;
        case 0x181c74u: goto label_181c74;
        case 0x181c78u: goto label_181c78;
        case 0x181c7cu: goto label_181c7c;
        case 0x181c80u: goto label_181c80;
        case 0x181c84u: goto label_181c84;
        case 0x181c88u: goto label_181c88;
        case 0x181c8cu: goto label_181c8c;
        case 0x181c90u: goto label_181c90;
        case 0x181c94u: goto label_181c94;
        case 0x181c98u: goto label_181c98;
        case 0x181c9cu: goto label_181c9c;
        case 0x181ca0u: goto label_181ca0;
        case 0x181ca4u: goto label_181ca4;
        case 0x181ca8u: goto label_181ca8;
        case 0x181cacu: goto label_181cac;
        case 0x181cb0u: goto label_181cb0;
        case 0x181cb4u: goto label_181cb4;
        case 0x181cb8u: goto label_181cb8;
        case 0x181cbcu: goto label_181cbc;
        case 0x181cc0u: goto label_181cc0;
        case 0x181cc4u: goto label_181cc4;
        case 0x181cc8u: goto label_181cc8;
        case 0x181cccu: goto label_181ccc;
        case 0x181cd0u: goto label_181cd0;
        case 0x181cd4u: goto label_181cd4;
        case 0x181cd8u: goto label_181cd8;
        case 0x181cdcu: goto label_181cdc;
        case 0x181ce0u: goto label_181ce0;
        case 0x181ce4u: goto label_181ce4;
        case 0x181ce8u: goto label_181ce8;
        case 0x181cecu: goto label_181cec;
        case 0x181cf0u: goto label_181cf0;
        case 0x181cf4u: goto label_181cf4;
        case 0x181cf8u: goto label_181cf8;
        case 0x181cfcu: goto label_181cfc;
        case 0x181d00u: goto label_181d00;
        case 0x181d04u: goto label_181d04;
        case 0x181d08u: goto label_181d08;
        case 0x181d0cu: goto label_181d0c;
        case 0x181d10u: goto label_181d10;
        case 0x181d14u: goto label_181d14;
        case 0x181d18u: goto label_181d18;
        case 0x181d1cu: goto label_181d1c;
        case 0x181d20u: goto label_181d20;
        default: break;
    }

    ctx->pc = 0x181450u;

label_181450:
    // 0x181450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_181454:
    // 0x181454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x181454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_181458:
    // 0x181458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18145c:
    // 0x18145c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_181460:
    // 0x181460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_181464:
    // 0x181464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_181468:
    // 0x181468: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x181468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18146c:
    // 0x18146c: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_181470:
    // 0x181470: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_181474:
    if (ctx->pc == 0x181474u) {
        ctx->pc = 0x181474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181470u;
        // 0x181474: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181478u;
        goto label_181478;
    }
    ctx->pc = 0x181470u;
    {
        const bool branch_taken_0x181470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x181474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181470u;
        // 0x181474: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181470) {
            ctx->pc = 0x181488u;
            goto label_181488;
        }
    }
    ctx->pc = 0x181478u;
label_181478:
    // 0x181478: 0x8ca40074  lw          $a0, 0x74($a1)
    ctx->pc = 0x181478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_18147c:
    // 0x18147c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_181480:
    // 0x181480: 0x10830221  beq         $a0, $v1, . + 4 + (0x221 << 2)
label_181484:
    if (ctx->pc == 0x181484u) {
        ctx->pc = 0x181488u;
        goto label_181488;
    }
    ctx->pc = 0x181480u;
    {
        const bool branch_taken_0x181480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x181480) {
            ctx->pc = 0x181D08u;
            goto label_181d08;
        }
    }
    ctx->pc = 0x181488u;
label_181488:
    // 0x181488: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_18148c:
    // 0x18148c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_181490:
    // 0x181490: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_181494:
    if (ctx->pc == 0x181494u) {
        ctx->pc = 0x181494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181490u;
        // 0x181494: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181498u;
        goto label_181498;
    }
    ctx->pc = 0x181490u;
    {
        const bool branch_taken_0x181490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x181494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181490u;
        // 0x181494: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181490) {
            ctx->pc = 0x1814A0u;
            goto label_1814a0;
        }
    }
    ctx->pc = 0x181498u;
label_181498:
    // 0x181498: 0x1000021b  b           . + 4 + (0x21B << 2)
label_18149c:
    if (ctx->pc == 0x18149Cu) {
        ctx->pc = 0x18149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181498u;
        // 0x18149c: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814A0u;
        goto label_1814a0;
    }
    ctx->pc = 0x181498u;
    {
        const bool branch_taken_0x181498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181498u;
        // 0x18149c: 0xaf83865c  sw          $v1, -0x79A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181498) {
            ctx->pc = 0x181D08u;
            goto label_181d08;
        }
    }
    ctx->pc = 0x1814A0u;
label_1814a0:
    // 0x1814a0: 0x8382868c  lb          $v0, -0x7974($gp)
    ctx->pc = 0x1814a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936204)));
label_1814a4:
    // 0x1814a4: 0x144000e4  bnez        $v0, . + 4 + (0xE4 << 2)
label_1814a8:
    if (ctx->pc == 0x1814A8u) {
        ctx->pc = 0x1814A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814A4u;
        // 0x1814a8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814ACu;
        goto label_1814ac;
    }
    ctx->pc = 0x1814A4u;
    {
        const bool branch_taken_0x1814a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1814A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814A4u;
        // 0x1814a8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814a4) {
            ctx->pc = 0x181838u;
            goto label_181838;
        }
    }
    ctx->pc = 0x1814ACu;
label_1814ac:
    // 0x1814ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1814acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1814b0:
    // 0x1814b0: 0xac208a70  sw          $zero, -0x7590($at)
    ctx->pc = 0x1814b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937200), GPR_U32(ctx, 0));
label_1814b4:
    // 0x1814b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1814b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1814b8:
    // 0x1814b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1814bc:
    // 0x1814bc: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
label_1814c0:
    // 0x1814c0: 0xac208a74  sw          $zero, -0x758C($at)
    ctx->pc = 0x1814c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937204), GPR_U32(ctx, 0));
label_1814c4:
    // 0x1814c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1814c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1814c8:
    // 0x1814c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1814cc:
    // 0x1814cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1814d0:
    // 0x1814d0: 0xfc208a58  sd          $zero, -0x75A8($at)
    ctx->pc = 0x1814d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937176), GPR_U64(ctx, 0));
label_1814d4:
    // 0x1814d4: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x1814d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1814d8:
    // 0x1814d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1814dc:
    // 0x1814dc: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x1814dcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1814e0:
    // 0x1814e0: 0xfc228a10  sd          $v0, -0x75F0($at)
    ctx->pc = 0x1814e0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937104), GPR_U64(ctx, 2));
label_1814e4:
    // 0x1814e4: 0x2408ffcf  addiu       $t0, $zero, -0x31
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1814e8:
    // 0x1814e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1814ec:
    // 0x1814ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1814f0:
    // 0x1814f0: 0xfc238a18  sd          $v1, -0x75E8($at)
    ctx->pc = 0x1814f0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937112), GPR_U64(ctx, 3));
label_1814f4:
    // 0x1814f4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1814f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1814f8:
    // 0x1814f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1814f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1814fc:
    // 0x1814fc: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x1814fcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_181500:
    // 0x181500: 0xfc228a68  sd          $v0, -0x7598($at)
    ctx->pc = 0x181500u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937192), GPR_U64(ctx, 2));
label_181504:
    // 0x181504: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x181504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_181508:
    // 0x181508: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18150c:
    // 0x18150c: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x18150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
label_181510:
    // 0x181510: 0x902b8a30  lbu         $t3, -0x75D0($at)
    ctx->pc = 0x181510u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937136)));
label_181514:
    // 0x181514: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x181514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_181518:
    // 0x181518: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x181518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_18151c:
    // 0x18151c: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x18151cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_181520:
    // 0x181520: 0x240dfff9  addiu       $t5, $zero, -0x7
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_181524:
    // 0x181524: 0x640e0002  daddiu      $t6, $zero, 0x2
    ctx->pc = 0x181524u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_181528:
    // 0x181528: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18152c:
    // 0x18152c: 0x1725824  and         $t3, $t3, $s2
    ctx->pc = 0x18152cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 18));
label_181530:
    // 0x181530: 0x90298a31  lbu         $t1, -0x75CF($at)
    ctx->pc = 0x181530u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937137)));
label_181534:
    // 0x181534: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x181534u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_181538:
    // 0x181538: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18153c:
    // 0x18153c: 0x1284824  and         $t1, $t1, $t0
    ctx->pc = 0x18153cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_181540:
    // 0x181540: 0x902f8a32  lbu         $t7, -0x75CE($at)
    ctx->pc = 0x181540u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937138)));
label_181544:
    // 0x181544: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181548:
    // 0x181548: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x181548u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
label_18154c:
    // 0x18154c: 0x902c8a50  lbu         $t4, -0x75B0($at)
    ctx->pc = 0x18154cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
label_181550:
    // 0x181550: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x181550u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
label_181554:
    // 0x181554: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_181558:
    // 0x181558: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18155c:
    // 0x18155c: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x18155cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_181560:
    // 0x181560: 0xa02b8a30  sb          $t3, -0x75D0($at)
    ctx->pc = 0x181560u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937136), (uint8_t)GPR_U32(ctx, 11));
label_181564:
    // 0x181564: 0x46080  sll         $t4, $a0, 2
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_181568:
    // 0x181568: 0x1265825  or          $t3, $t1, $a2
    ctx->pc = 0x181568u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_18156c:
    // 0x18156c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181570:
    // 0x181570: 0x90298a30  lbu         $t1, -0x75D0($at)
    ctx->pc = 0x181570u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937136)));
label_181574:
    // 0x181574: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181578:
    // 0x181578: 0x1252824  and         $a1, $t1, $a1
    ctx->pc = 0x181578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
label_18157c:
    // 0x18157c: 0xa02b8a31  sb          $t3, -0x75CF($at)
    ctx->pc = 0x18157cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937137), (uint8_t)GPR_U32(ctx, 11));
label_181580:
    // 0x181580: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x181580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_181584:
    // 0x181584: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181588:
    // 0x181588: 0x459c0  sll         $t3, $a0, 7
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_18158c:
    // 0x18158c: 0x90328a31  lbu         $s2, -0x75CF($at)
    ctx->pc = 0x18158cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937137)));
label_181590:
    // 0x181590: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x181590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_181594:
    // 0x181594: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x181594u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_181598:
    // 0x181598: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18159c:
    // 0x18159c: 0xa02f8a32  sb          $t7, -0x75CE($at)
    ctx->pc = 0x18159cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937138), (uint8_t)GPR_U32(ctx, 15));
label_1815a0:
    // 0x1815a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1815a4:
    // 0x1815a4: 0x902b8a32  lbu         $t3, -0x75CE($at)
    ctx->pc = 0x1815a4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937138)));
label_1815a8:
    // 0x1815a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1815ac:
    // 0x1815ac: 0xa02a8a50  sb          $t2, -0x75B0($at)
    ctx->pc = 0x1815acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937168), (uint8_t)GPR_U32(ctx, 10));
label_1815b0:
    // 0x1815b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1815b4:
    // 0x1815b4: 0x902a8a50  lbu         $t2, -0x75B0($at)
    ctx->pc = 0x1815b4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
label_1815b8:
    // 0x1815b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1815bc:
    // 0x1815bc: 0xa0258a30  sb          $a1, -0x75D0($at)
    ctx->pc = 0x1815bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937136), (uint8_t)GPR_U32(ctx, 5));
label_1815c0:
    // 0x1815c0: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x1815c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_1815c4:
    // 0x1815c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1815c8:
    // 0x1815c8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1815c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1815cc:
    // 0x1815cc: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1815ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_1815d0:
    // 0x1815d0: 0xa0238a31  sb          $v1, -0x75CF($at)
    ctx->pc = 0x1815d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937137), (uint8_t)GPR_U32(ctx, 3));
label_1815d4:
    // 0x1815d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1815d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1815d8:
    // 0x1815d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1815dc:
    // 0x1815dc: 0x16d1824  and         $v1, $t3, $t5
    ctx->pc = 0x1815dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 13));
label_1815e0:
    // 0x1815e0: 0x90298a51  lbu         $t1, -0x75AF($at)
    ctx->pc = 0x1815e0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937169)));
label_1815e4:
    // 0x1815e4: 0x6e5825  or          $t3, $v1, $t6
    ctx->pc = 0x1815e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_1815e8:
    // 0x1815e8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1815ec:
    // 0x1815ec: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1815ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1815f0:
    // 0x1815f0: 0x47140  sll         $t6, $a0, 5
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1815f4:
    // 0x1815f4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_1815f8:
    // 0x1815f8: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x1815f8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_1815fc:
    // 0x1815fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181600:
    // 0x181600: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x181600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_181604:
    // 0x181604: 0xa02b8a32  sb          $t3, -0x75CE($at)
    ctx->pc = 0x181604u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937138), (uint8_t)GPR_U32(ctx, 11));
label_181608:
    // 0x181608: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x181608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_18160c:
    // 0x18160c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181610:
    // 0x181610: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_181614:
    // 0x181614: 0xa0228a50  sb          $v0, -0x75B0($at)
    ctx->pc = 0x181614u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937168), (uint8_t)GPR_U32(ctx, 2));
label_181618:
    // 0x181618: 0x2409fffb  addiu       $t1, $zero, -0x5
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_18161c:
    // 0x18161c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181620:
    // 0x181620: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x181620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_181624:
    // 0x181624: 0x902f8a50  lbu         $t7, -0x75B0($at)
    ctx->pc = 0x181624u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
label_181628:
    // 0x181628: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x181628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_18162c:
    // 0x18162c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181630:
    // 0x181630: 0x1e21024  and         $v0, $t7, $v0
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
label_181634:
    // 0x181634: 0xa0238a51  sb          $v1, -0x75AF($at)
    ctx->pc = 0x181634u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937169), (uint8_t)GPR_U32(ctx, 3));
label_181638:
    // 0x181638: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_18163c:
    // 0x18163c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181640:
    // 0x181640: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_181644:
    // 0x181644: 0x902d8a51  lbu         $t5, -0x75AF($at)
    ctx->pc = 0x181644u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937169)));
label_181648:
    // 0x181648: 0x300e0003  andi        $t6, $zero, 0x3
    ctx->pc = 0x181648u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_18164c:
    // 0x18164c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181650:
    // 0x181650: 0x1a94824  and         $t1, $t5, $t1
    ctx->pc = 0x181650u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & GPR_U64(ctx, 9));
label_181654:
    // 0x181654: 0xa02b8a60  sb          $t3, -0x75A0($at)
    ctx->pc = 0x181654u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937184), (uint8_t)GPR_U32(ctx, 11));
label_181658:
    // 0x181658: 0x240dfffc  addiu       $t5, $zero, -0x4
    ctx->pc = 0x181658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_18165c:
    // 0x18165c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181660:
    // 0x181660: 0xa02b8a61  sb          $t3, -0x759F($at)
    ctx->pc = 0x181660u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937185), (uint8_t)GPR_U32(ctx, 11));
label_181664:
    // 0x181664: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181668:
    // 0x181668: 0xa0228a50  sb          $v0, -0x75B0($at)
    ctx->pc = 0x181668u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937168), (uint8_t)GPR_U32(ctx, 2));
label_18166c:
    // 0x18166c: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
label_181670:
    // 0x181670: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181674:
    // 0x181674: 0xa4228a80  sh          $v0, -0x7580($at)
    ctx->pc = 0x181674u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937216), (uint16_t)GPR_U32(ctx, 2));
label_181678:
    // 0x181678: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
label_18167c:
    // 0x18167c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181680:
    // 0x181680: 0xa4228a82  sh          $v0, -0x757E($at)
    ctx->pc = 0x181680u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937218), (uint16_t)GPR_U32(ctx, 2));
label_181684:
    // 0x181684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181688:
    // 0x181688: 0x12c1025  or          $v0, $t1, $t4
    ctx->pc = 0x181688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
label_18168c:
    // 0x18168c: 0xa02b8a62  sb          $t3, -0x759E($at)
    ctx->pc = 0x18168cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937186), (uint8_t)GPR_U32(ctx, 11));
label_181690:
    // 0x181690: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_181694:
    // 0x181694: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181698:
    // 0x181698: 0xa0228a51  sb          $v0, -0x75AF($at)
    ctx->pc = 0x181698u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937169), (uint8_t)GPR_U32(ctx, 2));
label_18169c:
    // 0x18169c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816a0:
    // 0x1816a0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1816a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1816a4:
    // 0x1816a4: 0xa02b8a63  sb          $t3, -0x759D($at)
    ctx->pc = 0x1816a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937187), (uint8_t)GPR_U32(ctx, 11));
label_1816a8:
    // 0x1816a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816ac:
    // 0x1816ac: 0xa02b8a44  sb          $t3, -0x75BC($at)
    ctx->pc = 0x1816acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937156), (uint8_t)GPR_U32(ctx, 11));
label_1816b0:
    // 0x1816b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816b4:
    // 0x1816b4: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1816b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
label_1816b8:
    // 0x1816b8: 0xac2a8a64  sw          $t2, -0x759C($at)
    ctx->pc = 0x1816b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937188), GPR_U32(ctx, 10));
label_1816bc:
    // 0x1816bc: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x1816bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1816c0:
    // 0x1816c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816c4:
    // 0x1816c4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1816c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_1816c8:
    // 0x1816c8: 0xac2a8a90  sw          $t2, -0x7570($at)
    ctx->pc = 0x1816c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), GPR_U32(ctx, 10));
label_1816cc:
    // 0x1816cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816d0:
    // 0x1816d0: 0xac2a8a94  sw          $t2, -0x756C($at)
    ctx->pc = 0x1816d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), GPR_U32(ctx, 10));
label_1816d4:
    // 0x1816d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816d8:
    // 0x1816d8: 0x352affff  ori         $t2, $t1, 0xFFFF
    ctx->pc = 0x1816d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1816dc:
    // 0x1816dc: 0x902f8a50  lbu         $t7, -0x75B0($at)
    ctx->pc = 0x1816dcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
label_1816e0:
    // 0x1816e0: 0x14b4825  or          $t1, $t2, $t3
    ctx->pc = 0x1816e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1816e4:
    // 0x1816e4: 0x712a5b89  pcpyld      $t3, $t1, $t2
    ctx->pc = 0x1816e4u;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
label_1816e8:
    // 0x1816e8: 0x340a9400  ori         $t2, $zero, 0x9400
    ctx->pc = 0x1816e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1816ec:
    // 0x1816ec: 0x34098800  ori         $t1, $zero, 0x8800
    ctx->pc = 0x1816ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
label_1816f0:
    // 0x1816f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1816f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1816f4:
    // 0x1816f4: 0x1e52824  and         $a1, $t7, $a1
    ctx->pc = 0x1816f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
label_1816f8:
    // 0x1816f8: 0xdc2c8a80  ld          $t4, -0x7580($at)
    ctx->pc = 0x1816f8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 1), 4294937216)));
label_1816fc:
    // 0x1816fc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1816fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_181700:
    // 0x181700: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181704:
    // 0x181704: 0xa42a8aa0  sh          $t2, -0x7560($at)
    ctx->pc = 0x181704u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937248), (uint16_t)GPR_U32(ctx, 10));
label_181708:
    // 0x181708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18170c:
    // 0x18170c: 0xa4298aa2  sh          $t1, -0x755E($at)
    ctx->pc = 0x18170cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937250), (uint16_t)GPR_U32(ctx, 9));
label_181710:
    // 0x181710: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181714:
    // 0x181714: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181718:
    // 0x181718: 0xdc2a8aa0  ld          $t2, -0x7560($at)
    ctx->pc = 0x181718u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 1), 4294937248)));
label_18171c:
    // 0x18171c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181720:
    // 0x181720: 0x14b3024  and         $a2, $t2, $t3
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
label_181724:
    // 0x181724: 0xfc298a78  sd          $t1, -0x7588($at)
    ctx->pc = 0x181724u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937208), GPR_U64(ctx, 9));
label_181728:
    // 0x181728: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_18172c:
    // 0x18172c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181730:
    // 0x181730: 0xfc298a98  sd          $t1, -0x7568($at)
    ctx->pc = 0x181730u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937240), GPR_U64(ctx, 9));
label_181734:
    // 0x181734: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181738:
    // 0x181738: 0x2409ff3f  addiu       $t1, $zero, -0xC1
    ctx->pc = 0x181738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_18173c:
    // 0x18173c: 0xa0258a50  sb          $a1, -0x75B0($at)
    ctx->pc = 0x18173cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937168), (uint8_t)GPR_U32(ctx, 5));
label_181740:
    // 0x181740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181744:
    // 0x181744: 0x18b2824  and         $a1, $t4, $t3
    ctx->pc = 0x181744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
label_181748:
    // 0x181748: 0x902f8a50  lbu         $t7, -0x75B0($at)
    ctx->pc = 0x181748u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937168)));
label_18174c:
    // 0x18174c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x18174cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_181750:
    // 0x181750: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x181750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_181754:
    // 0x181754: 0x240bfff3  addiu       $t3, $zero, -0xD
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_181758:
    // 0x181758: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x181758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18175c:
    // 0x18175c: 0x640c0008  daddiu      $t4, $zero, 0x8
    ctx->pc = 0x18175cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_181760:
    // 0x181760: 0x24c68a00  addiu       $a2, $a2, -0x7600
    ctx->pc = 0x181760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937088));
label_181764:
    // 0x181764: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181768:
    // 0x181768: 0x1e31824  and         $v1, $t7, $v1
    ctx->pc = 0x181768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
label_18176c:
    // 0x18176c: 0xfc258a80  sd          $a1, -0x7580($at)
    ctx->pc = 0x18176cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U64(ctx, 5));
label_181770:
    // 0x181770: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x181770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_181774:
    // 0x181774: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181778:
    // 0x181778: 0x90258a40  lbu         $a1, -0x75C0($at)
    ctx->pc = 0x181778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937152)));
label_18177c:
    // 0x18177c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181780:
    // 0x181780: 0xad1824  and         $v1, $a1, $t5
    ctx->pc = 0x181780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
label_181784:
    // 0x181784: 0xfc228aa0  sd          $v0, -0x7560($at)
    ctx->pc = 0x181784u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937248), GPR_U64(ctx, 2));
label_181788:
    // 0x181788: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x181788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_18178c:
    // 0x18178c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x18178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_181790:
    // 0x181790: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181794:
    // 0x181794: 0xfc228a28  sd          $v0, -0x75D8($at)
    ctx->pc = 0x181794u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937128), GPR_U64(ctx, 2));
label_181798:
    // 0x181798: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x181798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
label_18179c:
    // 0x18179c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817a0:
    // 0x1817a0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1817a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1817a4:
    // 0x1817a4: 0xa0248a50  sb          $a0, -0x75B0($at)
    ctx->pc = 0x1817a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937168), (uint8_t)GPR_U32(ctx, 4));
label_1817a8:
    // 0x1817a8: 0x24a51d80  addiu       $a1, $a1, 0x1D80
    ctx->pc = 0x1817a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7552));
label_1817ac:
    // 0x1817ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817b0:
    // 0x1817b0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1817b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1817b4:
    // 0x1817b4: 0xfc228a38  sd          $v0, -0x75C8($at)
    ctx->pc = 0x1817b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937144), GPR_U64(ctx, 2));
label_1817b8:
    // 0x1817b8: 0x24848a10  addiu       $a0, $a0, -0x75F0
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937104));
label_1817bc:
    // 0x1817bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817c0:
    // 0x1817c0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1817c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1817c4:
    // 0x1817c4: 0xa0238a40  sb          $v1, -0x75C0($at)
    ctx->pc = 0x1817c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937152), (uint8_t)GPR_U32(ctx, 3));
label_1817c8:
    // 0x1817c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1817c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1817cc:
    // 0x1817cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817d0:
    // 0x1817d0: 0xfc238a88  sd          $v1, -0x7578($at)
    ctx->pc = 0x1817d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U64(ctx, 3));
label_1817d4:
    // 0x1817d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817d8:
    // 0x1817d8: 0xfc238aa8  sd          $v1, -0x7558($at)
    ctx->pc = 0x1817d8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937256), GPR_U64(ctx, 3));
label_1817dc:
    // 0x1817dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817e0:
    // 0x1817e0: 0xfc228a48  sd          $v0, -0x75B8($at)
    ctx->pc = 0x1817e0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937160), GPR_U64(ctx, 2));
label_1817e4:
    // 0x1817e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817e8:
    // 0x1817e8: 0x90228a40  lbu         $v0, -0x75C0($at)
    ctx->pc = 0x1817e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937152)));
label_1817ec:
    // 0x1817ec: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x1817ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_1817f0:
    // 0x1817f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1817f4:
    // 0x1817f4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x1817f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
label_1817f8:
    // 0x1817f8: 0xa0228a40  sb          $v0, -0x75C0($at)
    ctx->pc = 0x1817f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937152), (uint8_t)GPR_U32(ctx, 2));
label_1817fc:
    // 0x1817fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1817fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181800:
    // 0x181800: 0x90228a40  lbu         $v0, -0x75C0($at)
    ctx->pc = 0x181800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937152)));
label_181804:
    // 0x181804: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x181804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_181808:
    // 0x181808: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18180c:
    // 0x18180c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x18180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_181810:
    // 0x181810: 0xa0228a40  sb          $v0, -0x75C0($at)
    ctx->pc = 0x181810u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937152), (uint8_t)GPR_U32(ctx, 2));
label_181814:
    // 0x181814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181818:
    // 0x181818: 0x90228a40  lbu         $v0, -0x75C0($at)
    ctx->pc = 0x181818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937152)));
label_18181c:
    // 0x18181c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_181820:
    // 0x181820: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181824:
    // 0x181824: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x181824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_181828:
    // 0x181828: 0xc07a540  jal         func_1E9500
label_18182c:
    if (ctx->pc == 0x18182Cu) {
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0xa0228a40  sb          $v0, -0x75C0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937152), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181830u;
        goto label_181830;
    }
    ctx->pc = 0x181828u;
    SET_GPR_U32(ctx, 31, 0x181830u);
    ctx->pc = 0x18182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181828u;
    // 0x18182c: 0xa0228a40  sb          $v0, -0x75C0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937152), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x181828u, 0x181830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181834:
    // 0x181834: 0xa382868c  sb          $v0, -0x7974($gp)
    ctx->pc = 0x181834u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936204), (uint8_t)GPR_U32(ctx, 2));
label_181838:
    // 0x181838: 0x83828690  lb          $v0, -0x7970($gp)
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936208)));
label_18183c:
    // 0x18183c: 0x144000e4  bnez        $v0, . + 4 + (0xE4 << 2)
label_181840:
    if (ctx->pc == 0x181840u) {
        ctx->pc = 0x181840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18183Cu;
        // 0x181840: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181844u;
        goto label_181844;
    }
    ctx->pc = 0x18183Cu;
    {
        const bool branch_taken_0x18183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18183Cu;
        // 0x181840: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18183c) {
            ctx->pc = 0x181BD0u;
            goto label_181bd0;
        }
    }
    ctx->pc = 0x181844u;
label_181844:
    // 0x181844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_181848:
    // 0x181848: 0xac208b20  sw          $zero, -0x74E0($at)
    ctx->pc = 0x181848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937376), GPR_U32(ctx, 0));
label_18184c:
    // 0x18184c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18184cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_181850:
    // 0x181850: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181854:
    // 0x181854: 0x34028009  ori         $v0, $zero, 0x8009
    ctx->pc = 0x181854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
label_181858:
    // 0x181858: 0xac208b24  sw          $zero, -0x74DC($at)
    ctx->pc = 0x181858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937380), GPR_U32(ctx, 0));
label_18185c:
    // 0x18185c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_181860:
    // 0x181860: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181864:
    // 0x181864: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x181864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_181868:
    // 0x181868: 0xfc208b08  sd          $zero, -0x74F8($at)
    ctx->pc = 0x181868u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937352), GPR_U64(ctx, 0));
label_18186c:
    // 0x18186c: 0x2412fffe  addiu       $s2, $zero, -0x2
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_181870:
    // 0x181870: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181874:
    // 0x181874: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x181874u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_181878:
    // 0x181878: 0xfc228ac0  sd          $v0, -0x7540($at)
    ctx->pc = 0x181878u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937280), GPR_U64(ctx, 2));
label_18187c:
    // 0x18187c: 0x2409ffcf  addiu       $t1, $zero, -0x31
    ctx->pc = 0x18187cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_181880:
    // 0x181880: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181884:
    // 0x181884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181888:
    // 0x181888: 0xfc238ac8  sd          $v1, -0x7538($at)
    ctx->pc = 0x181888u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937288), GPR_U64(ctx, 3));
label_18188c:
    // 0x18188c: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x18188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_181890:
    // 0x181890: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181894:
    // 0x181894: 0x640a0010  daddiu      $t2, $zero, 0x10
    ctx->pc = 0x181894u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_181898:
    // 0x181898: 0xfc228b18  sd          $v0, -0x74E8($at)
    ctx->pc = 0x181898u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937368), GPR_U64(ctx, 2));
label_18189c:
    // 0x18189c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x18189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_1818a0:
    // 0x1818a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1818a4:
    // 0x1818a4: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
label_1818a8:
    // 0x1818a8: 0x902c8ae0  lbu         $t4, -0x7520($at)
    ctx->pc = 0x1818a8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937312)));
label_1818ac:
    // 0x1818ac: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1818b0:
    // 0x1818b0: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1818b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1818b4:
    // 0x1818b4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1818b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1818b8:
    // 0x1818b8: 0x240efff9  addiu       $t6, $zero, -0x7
    ctx->pc = 0x1818b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_1818bc:
    // 0x1818bc: 0x64080002  daddiu      $t0, $zero, 0x2
    ctx->pc = 0x1818bcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1818c0:
    // 0x1818c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1818c4:
    // 0x1818c4: 0x1926024  and         $t4, $t4, $s2
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 18));
label_1818c8:
    // 0x1818c8: 0x90278ae1  lbu         $a3, -0x751F($at)
    ctx->pc = 0x1818c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937313)));
label_1818cc:
    // 0x1818cc: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x1818ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_1818d0:
    // 0x1818d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1818d4:
    // 0x1818d4: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
label_1818d8:
    // 0x1818d8: 0x902f8ae2  lbu         $t7, -0x751E($at)
    ctx->pc = 0x1818d8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937314)));
label_1818dc:
    // 0x1818dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1818e0:
    // 0x1818e0: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x1818e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
label_1818e4:
    // 0x1818e4: 0x902d8b00  lbu         $t5, -0x7500($at)
    ctx->pc = 0x1818e4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937344)));
label_1818e8:
    // 0x1818e8: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x1818e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
label_1818ec:
    // 0x1818ec: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_1818f0:
    // 0x1818f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1818f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1818f4:
    // 0x1818f4: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
label_1818f8:
    // 0x1818f8: 0xa02c8ae0  sb          $t4, -0x7520($at)
    ctx->pc = 0x1818f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937312), (uint8_t)GPR_U32(ctx, 12));
label_1818fc:
    // 0x1818fc: 0x46880  sll         $t5, $a0, 2
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_181900:
    // 0x181900: 0xea6025  or          $t4, $a3, $t2
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
label_181904:
    // 0x181904: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181908:
    // 0x181908: 0x90278ae0  lbu         $a3, -0x7520($at)
    ctx->pc = 0x181908u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937312)));
label_18190c:
    // 0x18190c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18190cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181910:
    // 0x181910: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_181914:
    // 0x181914: 0xa02c8ae1  sb          $t4, -0x751F($at)
    ctx->pc = 0x181914u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937313), (uint8_t)GPR_U32(ctx, 12));
label_181918:
    // 0x181918: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x181918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_18191c:
    // 0x18191c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181920:
    // 0x181920: 0x461c0  sll         $t4, $a0, 7
    ctx->pc = 0x181920u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_181924:
    // 0x181924: 0x90328ae1  lbu         $s2, -0x751F($at)
    ctx->pc = 0x181924u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937313)));
label_181928:
    // 0x181928: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x181928u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_18192c:
    // 0x18192c: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x18192cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_181930:
    // 0x181930: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181934:
    // 0x181934: 0xa02f8ae2  sb          $t7, -0x751E($at)
    ctx->pc = 0x181934u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937314), (uint8_t)GPR_U32(ctx, 15));
label_181938:
    // 0x181938: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18193c:
    // 0x18193c: 0x47940  sll         $t7, $a0, 5
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_181940:
    // 0x181940: 0x902c8ae2  lbu         $t4, -0x751E($at)
    ctx->pc = 0x181940u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937314)));
label_181944:
    // 0x181944: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181948:
    // 0x181948: 0xa02b8b00  sb          $t3, -0x7500($at)
    ctx->pc = 0x181948u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937344), (uint8_t)GPR_U32(ctx, 11));
label_18194c:
    // 0x18194c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18194cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181950:
    // 0x181950: 0x902b8b00  lbu         $t3, -0x7500($at)
    ctx->pc = 0x181950u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937344)));
label_181954:
    // 0x181954: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181958:
    // 0x181958: 0xa0258ae0  sb          $a1, -0x7520($at)
    ctx->pc = 0x181958u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937312), (uint8_t)GPR_U32(ctx, 5));
label_18195c:
    // 0x18195c: 0x2422824  and         $a1, $s2, $v0
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_181960:
    // 0x181960: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181964:
    // 0x181964: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x181964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_181968:
    // 0x181968: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x181968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_18196c:
    // 0x18196c: 0xa0238ae1  sb          $v1, -0x751F($at)
    ctx->pc = 0x18196cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937313), (uint8_t)GPR_U32(ctx, 3));
label_181970:
    // 0x181970: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x181970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_181974:
    // 0x181974: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181978:
    // 0x181978: 0x18e1824  and         $v1, $t4, $t6
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
label_18197c:
    // 0x18197c: 0x90268b01  lbu         $a2, -0x74FF($at)
    ctx->pc = 0x18197cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937345)));
label_181980:
    // 0x181980: 0x686025  or          $t4, $v1, $t0
    ctx->pc = 0x181980u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_181984:
    // 0x181984: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x181984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_181988:
    // 0x181988: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_18198c:
    // 0x18198c: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x18198cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
label_181990:
    // 0x181990: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181994:
    // 0x181994: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_181998:
    // 0x181998: 0xa02c8ae2  sb          $t4, -0x751E($at)
    ctx->pc = 0x181998u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937314), (uint8_t)GPR_U32(ctx, 12));
label_18199c:
    // 0x18199c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1819a0:
    // 0x1819a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819a4:
    // 0x1819a4: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x1819a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1819a8:
    // 0x1819a8: 0xa0228b00  sb          $v0, -0x7500($at)
    ctx->pc = 0x1819a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937344), (uint8_t)GPR_U32(ctx, 2));
label_1819ac:
    // 0x1819ac: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1819b0:
    // 0x1819b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819b4:
    // 0x1819b4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1819b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1819b8:
    // 0x1819b8: 0x90328b00  lbu         $s2, -0x7500($at)
    ctx->pc = 0x1819b8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937344)));
label_1819bc:
    // 0x1819bc: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_1819c0:
    // 0x1819c0: 0x64050006  daddiu      $a1, $zero, 0x6
    ctx->pc = 0x1819c0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_1819c4:
    // 0x1819c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819c8:
    // 0x1819c8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1819c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_1819cc:
    // 0x1819cc: 0xa0248b01  sb          $a0, -0x74FF($at)
    ctx->pc = 0x1819ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937345), (uint8_t)GPR_U32(ctx, 4));
label_1819d0:
    // 0x1819d0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1819d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_1819d4:
    // 0x1819d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819d8:
    // 0x1819d8: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_1819dc:
    // 0x1819dc: 0x902e8b01  lbu         $t6, -0x74FF($at)
    ctx->pc = 0x1819dcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937345)));
label_1819e0:
    // 0x1819e0: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1819e4:
    // 0x1819e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819e8:
    // 0x1819e8: 0x1c31824  and         $v1, $t6, $v1
    ctx->pc = 0x1819e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
label_1819ec:
    // 0x1819ec: 0xa02c8b10  sb          $t4, -0x74F0($at)
    ctx->pc = 0x1819ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937360), (uint8_t)GPR_U32(ctx, 12));
label_1819f0:
    // 0x1819f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819f4:
    // 0x1819f4: 0xa02c8b11  sb          $t4, -0x74EF($at)
    ctx->pc = 0x1819f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937361), (uint8_t)GPR_U32(ctx, 12));
label_1819f8:
    // 0x1819f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1819f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1819fc:
    // 0x1819fc: 0xa0228b00  sb          $v0, -0x7500($at)
    ctx->pc = 0x1819fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937344), (uint8_t)GPR_U32(ctx, 2));
label_181a00:
    // 0x181a00: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x181a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
label_181a04:
    // 0x181a04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a08:
    // 0x181a08: 0xa4228b30  sh          $v0, -0x74D0($at)
    ctx->pc = 0x181a08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937392), (uint16_t)GPR_U32(ctx, 2));
label_181a0c:
    // 0x181a0c: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x181a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
label_181a10:
    // 0x181a10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a14:
    // 0x181a14: 0xa4228b32  sh          $v0, -0x74CE($at)
    ctx->pc = 0x181a14u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937394), (uint16_t)GPR_U32(ctx, 2));
label_181a18:
    // 0x181a18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a1c:
    // 0x181a1c: 0x6d1025  or          $v0, $v1, $t5
    ctx->pc = 0x181a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_181a20:
    // 0x181a20: 0xa02c8b12  sb          $t4, -0x74EE($at)
    ctx->pc = 0x181a20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937362), (uint8_t)GPR_U32(ctx, 12));
label_181a24:
    // 0x181a24: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x181a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
label_181a28:
    // 0x181a28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a2c:
    // 0x181a2c: 0xa0228b01  sb          $v0, -0x74FF($at)
    ctx->pc = 0x181a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937345), (uint8_t)GPR_U32(ctx, 2));
label_181a30:
    // 0x181a30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a34:
    // 0x181a34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_181a38:
    // 0x181a38: 0xa02c8b13  sb          $t4, -0x74ED($at)
    ctx->pc = 0x181a38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937363), (uint8_t)GPR_U32(ctx, 12));
label_181a3c:
    // 0x181a3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a40:
    // 0x181a40: 0xa02c8af4  sb          $t4, -0x750C($at)
    ctx->pc = 0x181a40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937332), (uint8_t)GPR_U32(ctx, 12));
label_181a44:
    // 0x181a44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a48:
    // 0x181a48: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x181a48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
label_181a4c:
    // 0x181a4c: 0xac2b8b14  sw          $t3, -0x74EC($at)
    ctx->pc = 0x181a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937364), GPR_U32(ctx, 11));
label_181a50:
    // 0x181a50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x181a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181a54:
    // 0x181a54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a58:
    // 0x181a58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x181a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_181a5c:
    // 0x181a5c: 0xac2b8b40  sw          $t3, -0x74C0($at)
    ctx->pc = 0x181a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937408), GPR_U32(ctx, 11));
label_181a60:
    // 0x181a60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a64:
    // 0x181a64: 0xac2b8b44  sw          $t3, -0x74BC($at)
    ctx->pc = 0x181a64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937412), GPR_U32(ctx, 11));
label_181a68:
    // 0x181a68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a6c:
    // 0x181a6c: 0x344bffff  ori         $t3, $v0, 0xFFFF
    ctx->pc = 0x181a6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_181a70:
    // 0x181a70: 0x902e8b00  lbu         $t6, -0x7500($at)
    ctx->pc = 0x181a70u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937344)));
label_181a74:
    // 0x181a74: 0x16c1025  or          $v0, $t3, $t4
    ctx->pc = 0x181a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_181a78:
    // 0x181a78: 0x704b1389  pcpyld      $v0, $v0, $t3
    ctx->pc = 0x181a78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
label_181a7c:
    // 0x181a7c: 0x340c9400  ori         $t4, $zero, 0x9400
    ctx->pc = 0x181a7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_181a80:
    // 0x181a80: 0x340b8800  ori         $t3, $zero, 0x8800
    ctx->pc = 0x181a80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
label_181a84:
    // 0x181a84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a88:
    // 0x181a88: 0x1c63024  and         $a2, $t6, $a2
    ctx->pc = 0x181a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
label_181a8c:
    // 0x181a8c: 0xdc2d8b30  ld          $t5, -0x74D0($at)
    ctx->pc = 0x181a8cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 4294937392)));
label_181a90:
    // 0x181a90: 0xca5025  or          $t2, $a2, $t2
    ctx->pc = 0x181a90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
label_181a94:
    // 0x181a94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181a98:
    // 0x181a98: 0x1a23024  and         $a2, $t5, $v0
    ctx->pc = 0x181a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_181a9c:
    // 0x181a9c: 0xa42c8b50  sh          $t4, -0x74B0($at)
    ctx->pc = 0x181a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937424), (uint16_t)GPR_U32(ctx, 12));
label_181aa0:
    // 0x181aa0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_181aa4:
    // 0x181aa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181aa8:
    // 0x181aa8: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181aac:
    // 0x181aac: 0xa42b8b52  sh          $t3, -0x74AE($at)
    ctx->pc = 0x181aacu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294937426), (uint16_t)GPR_U32(ctx, 11));
label_181ab0:
    // 0x181ab0: 0x240dfff3  addiu       $t5, $zero, -0xD
    ctx->pc = 0x181ab0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_181ab4:
    // 0x181ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181ab8:
    // 0x181ab8: 0x300b0003  andi        $t3, $zero, 0x3
    ctx->pc = 0x181ab8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_181abc:
    // 0x181abc: 0xfc2c8b28  sd          $t4, -0x74D8($at)
    ctx->pc = 0x181abcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937384), GPR_U64(ctx, 12));
label_181ac0:
    // 0x181ac0: 0xb7080  sll         $t6, $t3, 2
    ctx->pc = 0x181ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_181ac4:
    // 0x181ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181ac8:
    // 0x181ac8: 0xfc2c8b48  sd          $t4, -0x74B8($at)
    ctx->pc = 0x181ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937416), GPR_U64(ctx, 12));
label_181acc:
    // 0x181acc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181ad0:
    // 0x181ad0: 0xb6100  sll         $t4, $t3, 4
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_181ad4:
    // 0x181ad4: 0xa02a8b00  sb          $t2, -0x7500($at)
    ctx->pc = 0x181ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937344), (uint8_t)GPR_U32(ctx, 10));
label_181ad8:
    // 0x181ad8: 0x240bff3f  addiu       $t3, $zero, -0xC1
    ctx->pc = 0x181ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_181adc:
    // 0x181adc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181ae0:
    // 0x181ae0: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x181ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_181ae4:
    // 0x181ae4: 0xfc268b30  sd          $a2, -0x74D0($at)
    ctx->pc = 0x181ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937392), GPR_U64(ctx, 6));
label_181ae8:
    // 0x181ae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181aec:
    // 0x181aec: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x181aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_181af0:
    // 0x181af0: 0x90388b00  lbu         $t8, -0x7500($at)
    ctx->pc = 0x181af0u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937344)));
label_181af4:
    // 0x181af4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181af8:
    // 0x181af8: 0x3042024  and         $a0, $t8, $a0
    ctx->pc = 0x181af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
label_181afc:
    // 0x181afc: 0xdc338b50  ld          $s3, -0x74B0($at)
    ctx->pc = 0x181afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 1), 4294937424)));
label_181b00:
    // 0x181b00: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x181b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_181b04:
    // 0x181b04: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_181b08:
    // 0x181b08: 0x24a51d30  addiu       $a1, $a1, 0x1D30
    ctx->pc = 0x181b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7472));
label_181b0c:
    // 0x181b0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b10:
    // 0x181b10: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x181b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_181b14:
    // 0x181b14: 0x90328af0  lbu         $s2, -0x7510($at)
    ctx->pc = 0x181b14u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937328)));
label_181b18:
    // 0x181b18: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x181b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_181b1c:
    // 0x181b1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b20:
    // 0x181b20: 0x24f1024  and         $v0, $s2, $t7
    ctx->pc = 0x181b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 15));
label_181b24:
    // 0x181b24: 0xfc2a8ad8  sd          $t2, -0x7528($at)
    ctx->pc = 0x181b24u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937304), GPR_U64(ctx, 10));
label_181b28:
    // 0x181b28: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x181b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_181b2c:
    // 0x181b2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b30:
    // 0x181b30: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_181b34:
    // 0x181b34: 0xfc268ae8  sd          $a2, -0x7518($at)
    ctx->pc = 0x181b34u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937320), GPR_U64(ctx, 6));
label_181b38:
    // 0x181b38: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_181b3c:
    // 0x181b3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b40:
    // 0x181b40: 0xfc268af8  sd          $a2, -0x7508($at)
    ctx->pc = 0x181b40u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937336), GPR_U64(ctx, 6));
label_181b44:
    // 0x181b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b48:
    // 0x181b48: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x181b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_181b4c:
    // 0x181b4c: 0xa0248b00  sb          $a0, -0x7500($at)
    ctx->pc = 0x181b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937344), (uint8_t)GPR_U32(ctx, 4));
label_181b50:
    // 0x181b50: 0x24c68ab0  addiu       $a2, $a2, -0x7550
    ctx->pc = 0x181b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937264));
label_181b54:
    // 0x181b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b58:
    // 0x181b58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x181b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_181b5c:
    // 0x181b5c: 0xfc238b50  sd          $v1, -0x74B0($at)
    ctx->pc = 0x181b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937424), GPR_U64(ctx, 3));
label_181b60:
    // 0x181b60: 0x24848ac0  addiu       $a0, $a0, -0x7540
    ctx->pc = 0x181b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937280));
label_181b64:
    // 0x181b64: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b68:
    // 0x181b68: 0xa0228af0  sb          $v0, -0x7510($at)
    ctx->pc = 0x181b68u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937328), (uint8_t)GPR_U32(ctx, 2));
label_181b6c:
    // 0x181b6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b70:
    // 0x181b70: 0xfc2a8b38  sd          $t2, -0x74C8($at)
    ctx->pc = 0x181b70u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937400), GPR_U64(ctx, 10));
label_181b74:
    // 0x181b74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b78:
    // 0x181b78: 0xfc2a8b58  sd          $t2, -0x74A8($at)
    ctx->pc = 0x181b78u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294937432), GPR_U64(ctx, 10));
label_181b7c:
    // 0x181b7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b80:
    // 0x181b80: 0x90228af0  lbu         $v0, -0x7510($at)
    ctx->pc = 0x181b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937328)));
label_181b84:
    // 0x181b84: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x181b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
label_181b88:
    // 0x181b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b8c:
    // 0x181b8c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x181b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_181b90:
    // 0x181b90: 0xa0228af0  sb          $v0, -0x7510($at)
    ctx->pc = 0x181b90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937328), (uint8_t)GPR_U32(ctx, 2));
label_181b94:
    // 0x181b94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181b98:
    // 0x181b98: 0x90228af0  lbu         $v0, -0x7510($at)
    ctx->pc = 0x181b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937328)));
label_181b9c:
    // 0x181b9c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x181b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_181ba0:
    // 0x181ba0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181ba4:
    // 0x181ba4: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x181ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
label_181ba8:
    // 0x181ba8: 0xa0228af0  sb          $v0, -0x7510($at)
    ctx->pc = 0x181ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937328), (uint8_t)GPR_U32(ctx, 2));
label_181bac:
    // 0x181bac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181bb0:
    // 0x181bb0: 0x90228af0  lbu         $v0, -0x7510($at)
    ctx->pc = 0x181bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294937328)));
label_181bb4:
    // 0x181bb4: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x181bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_181bb8:
    // 0x181bb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_181bbc:
    // 0x181bbc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x181bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_181bc0:
    // 0x181bc0: 0xc07a540  jal         func_1E9500
label_181bc4:
    if (ctx->pc == 0x181BC4u) {
        ctx->pc = 0x181BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BC0u;
        // 0x181bc4: 0xa0228af0  sb          $v0, -0x7510($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937328), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BC8u;
        goto label_181bc8;
    }
    ctx->pc = 0x181BC0u;
    SET_GPR_U32(ctx, 31, 0x181BC8u);
    ctx->pc = 0x181BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BC0u;
    // 0x181bc4: 0xa0228af0  sb          $v0, -0x7510($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x181BC0u, 0x181BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BC8u;
label_181bc8:
    // 0x181bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181bcc:
    // 0x181bcc: 0xa3828690  sb          $v0, -0x7970($gp)
    ctx->pc = 0x181bccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936208), (uint8_t)GPR_U32(ctx, 2));
label_181bd0:
    // 0x181bd0: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x181bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181bd4:
    // 0x181bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181bd8:
    // 0x181bd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181bdc:
    // 0x181bdc: 0xc0495c0  jal         func_125700
label_181be0:
    if (ctx->pc == 0x181BE0u) {
        ctx->pc = 0x181BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BDCu;
        // 0x181be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BE4u;
        goto label_181be4;
    }
    ctx->pc = 0x181BDCu;
    SET_GPR_U32(ctx, 31, 0x181BE4u);
    ctx->pc = 0x181BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BDCu;
    // 0x181be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x181BDCu, 0x181BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BE4u;
label_181be4:
    // 0x181be4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x181be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181be8:
    // 0x181be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181bec:
    // 0x181bec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x181becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181bf0:
    // 0x181bf0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181bf4:
    // 0x181bf4: 0x320f809  jalr        $t9
label_181bf8:
    if (ctx->pc == 0x181BF8u) {
        ctx->pc = 0x181BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF4u;
        // 0x181bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BFCu;
        goto label_181bfc;
    }
    ctx->pc = 0x181BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x181BFCu);
        ctx->pc = 0x181BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF4u;
        // 0x181bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181BF4u, 0x181BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181BFCu;
label_181bfc:
    // 0x181bfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x181bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181c00:
    // 0x181c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c04:
    // 0x181c04: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181c08:
    // 0x181c08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x181c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_181c0c:
    // 0x181c0c: 0xc061734  jal         func_185CD0
label_181c10:
    if (ctx->pc == 0x181C10u) {
        ctx->pc = 0x181C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C0Cu;
        // 0x181c10: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C14u;
        goto label_181c14;
    }
    ctx->pc = 0x181C0Cu;
    SET_GPR_U32(ctx, 31, 0x181C14u);
    ctx->pc = 0x181C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C0Cu;
    // 0x181c10: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181C0Cu, 0x181C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C14u;
label_181c14:
    // 0x181c14: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x181c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181c18:
    // 0x181c18: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x181c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_181c1c:
    // 0x181c1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x181c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_181c20:
    // 0x181c20: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_181c24:
    // 0x181c24: 0x24a58ac0  addiu       $a1, $a1, -0x7540
    ctx->pc = 0x181c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
label_181c28:
    // 0x181c28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x181c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_181c2c:
    // 0x181c2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x181c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_181c30:
    // 0x181c30: 0x3448000a  ori         $t0, $v0, 0xA
    ctx->pc = 0x181c30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_181c34:
    // 0x181c34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x181c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_181c38:
    // 0x181c38: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_181c3c:
    // 0x181c3c: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x181c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_181c40:
    // 0x181c40: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x181c40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_181c44:
    // 0x181c44: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x181c44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_181c48:
    // 0x181c48: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x181c48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_181c4c:
    // 0x181c4c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x181c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_181c50:
    // 0x181c50: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x181c50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
label_181c54:
    // 0x181c54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181c58:
    // 0x181c58: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_181c5c:
    // 0x181c5c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_181c60:
    if (ctx->pc == 0x181C60u) {
        ctx->pc = 0x181C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C5Cu;
        // 0x181c60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C64u;
        goto label_181c64;
    }
    ctx->pc = 0x181C5Cu;
    {
        const bool branch_taken_0x181c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C5Cu;
        // 0x181c60: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c5c) {
            ctx->pc = 0x181C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c00;
        }
    }
    ctx->pc = 0x181C64u;
label_181c64:
    // 0x181c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x181c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_181c68:
    // 0x181c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c6c:
    // 0x181c6c: 0xc0495c0  jal         func_125700
label_181c70:
    if (ctx->pc == 0x181C70u) {
        ctx->pc = 0x181C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C6Cu;
        // 0x181c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C74u;
        goto label_181c74;
    }
    ctx->pc = 0x181C6Cu;
    SET_GPR_U32(ctx, 31, 0x181C74u);
    ctx->pc = 0x181C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C6Cu;
    // 0x181c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x181C6Cu, 0x181C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181C74u;
label_181c74:
    // 0x181c74: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181c78:
    // 0x181c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c7c:
    // 0x181c7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x181c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181c80:
    // 0x181c80: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181c84:
    // 0x181c84: 0x320f809  jalr        $t9
label_181c88:
    if (ctx->pc == 0x181C88u) {
        ctx->pc = 0x181C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C84u;
        // 0x181c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181C8Cu;
        goto label_181c8c;
    }
    ctx->pc = 0x181C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x181C8Cu);
        ctx->pc = 0x181C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C84u;
        // 0x181c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C84u, 0x181C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181C8Cu;
label_181c8c:
    // 0x181c8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x181c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181c90:
    // 0x181c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181c94:
    // 0x181c94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181c98:
    // 0x181c98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181c9c:
    // 0x181c9c: 0xc061734  jal         func_185CD0
label_181ca0:
    if (ctx->pc == 0x181CA0u) {
        ctx->pc = 0x181CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C9Cu;
        // 0x181ca0: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CA4u;
        goto label_181ca4;
    }
    ctx->pc = 0x181C9Cu;
    SET_GPR_U32(ctx, 31, 0x181CA4u);
    ctx->pc = 0x181CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C9Cu;
    // 0x181ca0: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181C9Cu, 0x181CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181CA4u;
label_181ca4:
    // 0x181ca4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x181ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181ca8:
    // 0x181ca8: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x181ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_181cac:
    // 0x181cac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_181cb0:
    // 0x181cb0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_181cb4:
    // 0x181cb4: 0x24c68a10  addiu       $a2, $a2, -0x75F0
    ctx->pc = 0x181cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937104));
label_181cb8:
    // 0x181cb8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x181cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_181cbc:
    // 0x181cbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x181cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_181cc0:
    // 0x181cc0: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x181cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_181cc4:
    // 0x181cc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x181cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_181cc8:
    // 0x181cc8: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x181cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_181ccc:
    // 0x181ccc: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x181cccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
label_181cd0:
    // 0x181cd0: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x181cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_181cd4:
    // 0x181cd4: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x181cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_181cd8:
    // 0x181cd8: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x181cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_181cdc:
    // 0x181cdc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x181cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_181ce0:
    // 0x181ce0: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x181ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_181ce4:
    // 0x181ce4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181ce8:
    // 0x181ce8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_181cec:
    // 0x181cec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_181cf0:
    if (ctx->pc == 0x181CF0u) {
        ctx->pc = 0x181CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CECu;
        // 0x181cf0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181CF4u;
        goto label_181cf4;
    }
    ctx->pc = 0x181CECu;
    {
        const bool branch_taken_0x181cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CECu;
        // 0x181cf0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cec) {
            ctx->pc = 0x181C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181c90;
        }
    }
    ctx->pc = 0x181CF4u;
label_181cf4:
    // 0x181cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181cf8:
    // 0x181cf8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_181cfc:
    // 0x181cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181d00:
    // 0x181d00: 0xc061734  jal         func_185CD0
label_181d04:
    if (ctx->pc == 0x181D04u) {
        ctx->pc = 0x181D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D00u;
        // 0x181d04: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D08u;
        goto label_181d08;
    }
    ctx->pc = 0x181D00u;
    SET_GPR_U32(ctx, 31, 0x181D08u);
    ctx->pc = 0x181D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181D00u;
    // 0x181d04: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181D00u, 0x181D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181D08u;
label_181d08:
    // 0x181d08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x181d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_181d0c:
    // 0x181d0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181d10:
    // 0x181d10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181d14:
    // 0x181d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181d18:
    // 0x181d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_181d1c:
    // 0x181d1c: 0x3e00008  jr          $ra
label_181d20:
    if (ctx->pc == 0x181D20u) {
        ctx->pc = 0x181D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D1Cu;
        // 0x181d20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D24u;
        goto label_fallthrough_0x181d1c;
    }
    ctx->pc = 0x181D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D1Cu;
        // 0x181d20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x181d1c:
    ctx->pc = 0x181D24u;
}
