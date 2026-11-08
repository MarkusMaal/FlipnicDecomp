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

// Function: FUN_001ae2e0
// Address: 0x1ae2e0 - 0x1aef0c
void FUN_001ae2e0_0x1ae2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae2e0_0x1ae2e0");
#endif

    switch (ctx->pc) {
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae380u: goto label_1ae380;
        case 0x1ae384u: goto label_1ae384;
        case 0x1ae388u: goto label_1ae388;
        case 0x1ae38cu: goto label_1ae38c;
        case 0x1ae390u: goto label_1ae390;
        case 0x1ae394u: goto label_1ae394;
        case 0x1ae398u: goto label_1ae398;
        case 0x1ae39cu: goto label_1ae39c;
        case 0x1ae3a0u: goto label_1ae3a0;
        case 0x1ae3a4u: goto label_1ae3a4;
        case 0x1ae3a8u: goto label_1ae3a8;
        case 0x1ae3acu: goto label_1ae3ac;
        case 0x1ae3b0u: goto label_1ae3b0;
        case 0x1ae3b4u: goto label_1ae3b4;
        case 0x1ae3b8u: goto label_1ae3b8;
        case 0x1ae3bcu: goto label_1ae3bc;
        case 0x1ae3c0u: goto label_1ae3c0;
        case 0x1ae3c4u: goto label_1ae3c4;
        case 0x1ae3c8u: goto label_1ae3c8;
        case 0x1ae3ccu: goto label_1ae3cc;
        case 0x1ae3d0u: goto label_1ae3d0;
        case 0x1ae3d4u: goto label_1ae3d4;
        case 0x1ae3d8u: goto label_1ae3d8;
        case 0x1ae3dcu: goto label_1ae3dc;
        case 0x1ae3e0u: goto label_1ae3e0;
        case 0x1ae3e4u: goto label_1ae3e4;
        case 0x1ae3e8u: goto label_1ae3e8;
        case 0x1ae3ecu: goto label_1ae3ec;
        case 0x1ae3f0u: goto label_1ae3f0;
        case 0x1ae3f4u: goto label_1ae3f4;
        case 0x1ae3f8u: goto label_1ae3f8;
        case 0x1ae3fcu: goto label_1ae3fc;
        case 0x1ae400u: goto label_1ae400;
        case 0x1ae404u: goto label_1ae404;
        case 0x1ae408u: goto label_1ae408;
        case 0x1ae40cu: goto label_1ae40c;
        case 0x1ae410u: goto label_1ae410;
        case 0x1ae414u: goto label_1ae414;
        case 0x1ae418u: goto label_1ae418;
        case 0x1ae41cu: goto label_1ae41c;
        case 0x1ae420u: goto label_1ae420;
        case 0x1ae424u: goto label_1ae424;
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae42cu: goto label_1ae42c;
        case 0x1ae430u: goto label_1ae430;
        case 0x1ae434u: goto label_1ae434;
        case 0x1ae438u: goto label_1ae438;
        case 0x1ae43cu: goto label_1ae43c;
        case 0x1ae440u: goto label_1ae440;
        case 0x1ae444u: goto label_1ae444;
        case 0x1ae448u: goto label_1ae448;
        case 0x1ae44cu: goto label_1ae44c;
        case 0x1ae450u: goto label_1ae450;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae458u: goto label_1ae458;
        case 0x1ae45cu: goto label_1ae45c;
        case 0x1ae460u: goto label_1ae460;
        case 0x1ae464u: goto label_1ae464;
        case 0x1ae468u: goto label_1ae468;
        case 0x1ae46cu: goto label_1ae46c;
        case 0x1ae470u: goto label_1ae470;
        case 0x1ae474u: goto label_1ae474;
        case 0x1ae478u: goto label_1ae478;
        case 0x1ae47cu: goto label_1ae47c;
        case 0x1ae480u: goto label_1ae480;
        case 0x1ae484u: goto label_1ae484;
        case 0x1ae488u: goto label_1ae488;
        case 0x1ae48cu: goto label_1ae48c;
        case 0x1ae490u: goto label_1ae490;
        case 0x1ae494u: goto label_1ae494;
        case 0x1ae498u: goto label_1ae498;
        case 0x1ae49cu: goto label_1ae49c;
        case 0x1ae4a0u: goto label_1ae4a0;
        case 0x1ae4a4u: goto label_1ae4a4;
        case 0x1ae4a8u: goto label_1ae4a8;
        case 0x1ae4acu: goto label_1ae4ac;
        case 0x1ae4b0u: goto label_1ae4b0;
        case 0x1ae4b4u: goto label_1ae4b4;
        case 0x1ae4b8u: goto label_1ae4b8;
        case 0x1ae4bcu: goto label_1ae4bc;
        case 0x1ae4c0u: goto label_1ae4c0;
        case 0x1ae4c4u: goto label_1ae4c4;
        case 0x1ae4c8u: goto label_1ae4c8;
        case 0x1ae4ccu: goto label_1ae4cc;
        case 0x1ae4d0u: goto label_1ae4d0;
        case 0x1ae4d4u: goto label_1ae4d4;
        case 0x1ae4d8u: goto label_1ae4d8;
        case 0x1ae4dcu: goto label_1ae4dc;
        case 0x1ae4e0u: goto label_1ae4e0;
        case 0x1ae4e4u: goto label_1ae4e4;
        case 0x1ae4e8u: goto label_1ae4e8;
        case 0x1ae4ecu: goto label_1ae4ec;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae4f4u: goto label_1ae4f4;
        case 0x1ae4f8u: goto label_1ae4f8;
        case 0x1ae4fcu: goto label_1ae4fc;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae504u: goto label_1ae504;
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae50cu: goto label_1ae50c;
        case 0x1ae510u: goto label_1ae510;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae518u: goto label_1ae518;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae520u: goto label_1ae520;
        case 0x1ae524u: goto label_1ae524;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae52cu: goto label_1ae52c;
        case 0x1ae530u: goto label_1ae530;
        case 0x1ae534u: goto label_1ae534;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae53cu: goto label_1ae53c;
        case 0x1ae540u: goto label_1ae540;
        case 0x1ae544u: goto label_1ae544;
        case 0x1ae548u: goto label_1ae548;
        case 0x1ae54cu: goto label_1ae54c;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae554u: goto label_1ae554;
        case 0x1ae558u: goto label_1ae558;
        case 0x1ae55cu: goto label_1ae55c;
        case 0x1ae560u: goto label_1ae560;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae568u: goto label_1ae568;
        case 0x1ae56cu: goto label_1ae56c;
        case 0x1ae570u: goto label_1ae570;
        case 0x1ae574u: goto label_1ae574;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae57cu: goto label_1ae57c;
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae584u: goto label_1ae584;
        case 0x1ae588u: goto label_1ae588;
        case 0x1ae58cu: goto label_1ae58c;
        case 0x1ae590u: goto label_1ae590;
        case 0x1ae594u: goto label_1ae594;
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae59cu: goto label_1ae59c;
        case 0x1ae5a0u: goto label_1ae5a0;
        case 0x1ae5a4u: goto label_1ae5a4;
        case 0x1ae5a8u: goto label_1ae5a8;
        case 0x1ae5acu: goto label_1ae5ac;
        case 0x1ae5b0u: goto label_1ae5b0;
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae5b8u: goto label_1ae5b8;
        case 0x1ae5bcu: goto label_1ae5bc;
        case 0x1ae5c0u: goto label_1ae5c0;
        case 0x1ae5c4u: goto label_1ae5c4;
        case 0x1ae5c8u: goto label_1ae5c8;
        case 0x1ae5ccu: goto label_1ae5cc;
        case 0x1ae5d0u: goto label_1ae5d0;
        case 0x1ae5d4u: goto label_1ae5d4;
        case 0x1ae5d8u: goto label_1ae5d8;
        case 0x1ae5dcu: goto label_1ae5dc;
        case 0x1ae5e0u: goto label_1ae5e0;
        case 0x1ae5e4u: goto label_1ae5e4;
        case 0x1ae5e8u: goto label_1ae5e8;
        case 0x1ae5ecu: goto label_1ae5ec;
        case 0x1ae5f0u: goto label_1ae5f0;
        case 0x1ae5f4u: goto label_1ae5f4;
        case 0x1ae5f8u: goto label_1ae5f8;
        case 0x1ae5fcu: goto label_1ae5fc;
        case 0x1ae600u: goto label_1ae600;
        case 0x1ae604u: goto label_1ae604;
        case 0x1ae608u: goto label_1ae608;
        case 0x1ae60cu: goto label_1ae60c;
        case 0x1ae610u: goto label_1ae610;
        case 0x1ae614u: goto label_1ae614;
        case 0x1ae618u: goto label_1ae618;
        case 0x1ae61cu: goto label_1ae61c;
        case 0x1ae620u: goto label_1ae620;
        case 0x1ae624u: goto label_1ae624;
        case 0x1ae628u: goto label_1ae628;
        case 0x1ae62cu: goto label_1ae62c;
        case 0x1ae630u: goto label_1ae630;
        case 0x1ae634u: goto label_1ae634;
        case 0x1ae638u: goto label_1ae638;
        case 0x1ae63cu: goto label_1ae63c;
        case 0x1ae640u: goto label_1ae640;
        case 0x1ae644u: goto label_1ae644;
        case 0x1ae648u: goto label_1ae648;
        case 0x1ae64cu: goto label_1ae64c;
        case 0x1ae650u: goto label_1ae650;
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae658u: goto label_1ae658;
        case 0x1ae65cu: goto label_1ae65c;
        case 0x1ae660u: goto label_1ae660;
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae668u: goto label_1ae668;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae670u: goto label_1ae670;
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae678u: goto label_1ae678;
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae680u: goto label_1ae680;
        case 0x1ae684u: goto label_1ae684;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae690u: goto label_1ae690;
        case 0x1ae694u: goto label_1ae694;
        case 0x1ae698u: goto label_1ae698;
        case 0x1ae69cu: goto label_1ae69c;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6a4u: goto label_1ae6a4;
        case 0x1ae6a8u: goto label_1ae6a8;
        case 0x1ae6acu: goto label_1ae6ac;
        case 0x1ae6b0u: goto label_1ae6b0;
        case 0x1ae6b4u: goto label_1ae6b4;
        case 0x1ae6b8u: goto label_1ae6b8;
        case 0x1ae6bcu: goto label_1ae6bc;
        case 0x1ae6c0u: goto label_1ae6c0;
        case 0x1ae6c4u: goto label_1ae6c4;
        case 0x1ae6c8u: goto label_1ae6c8;
        case 0x1ae6ccu: goto label_1ae6cc;
        case 0x1ae6d0u: goto label_1ae6d0;
        case 0x1ae6d4u: goto label_1ae6d4;
        case 0x1ae6d8u: goto label_1ae6d8;
        case 0x1ae6dcu: goto label_1ae6dc;
        case 0x1ae6e0u: goto label_1ae6e0;
        case 0x1ae6e4u: goto label_1ae6e4;
        case 0x1ae6e8u: goto label_1ae6e8;
        case 0x1ae6ecu: goto label_1ae6ec;
        case 0x1ae6f0u: goto label_1ae6f0;
        case 0x1ae6f4u: goto label_1ae6f4;
        case 0x1ae6f8u: goto label_1ae6f8;
        case 0x1ae6fcu: goto label_1ae6fc;
        case 0x1ae700u: goto label_1ae700;
        case 0x1ae704u: goto label_1ae704;
        case 0x1ae708u: goto label_1ae708;
        case 0x1ae70cu: goto label_1ae70c;
        case 0x1ae710u: goto label_1ae710;
        case 0x1ae714u: goto label_1ae714;
        case 0x1ae718u: goto label_1ae718;
        case 0x1ae71cu: goto label_1ae71c;
        case 0x1ae720u: goto label_1ae720;
        case 0x1ae724u: goto label_1ae724;
        case 0x1ae728u: goto label_1ae728;
        case 0x1ae72cu: goto label_1ae72c;
        case 0x1ae730u: goto label_1ae730;
        case 0x1ae734u: goto label_1ae734;
        case 0x1ae738u: goto label_1ae738;
        case 0x1ae73cu: goto label_1ae73c;
        case 0x1ae740u: goto label_1ae740;
        case 0x1ae744u: goto label_1ae744;
        case 0x1ae748u: goto label_1ae748;
        case 0x1ae74cu: goto label_1ae74c;
        case 0x1ae750u: goto label_1ae750;
        case 0x1ae754u: goto label_1ae754;
        case 0x1ae758u: goto label_1ae758;
        case 0x1ae75cu: goto label_1ae75c;
        case 0x1ae760u: goto label_1ae760;
        case 0x1ae764u: goto label_1ae764;
        case 0x1ae768u: goto label_1ae768;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae770u: goto label_1ae770;
        case 0x1ae774u: goto label_1ae774;
        case 0x1ae778u: goto label_1ae778;
        case 0x1ae77cu: goto label_1ae77c;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae784u: goto label_1ae784;
        case 0x1ae788u: goto label_1ae788;
        case 0x1ae78cu: goto label_1ae78c;
        case 0x1ae790u: goto label_1ae790;
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae798u: goto label_1ae798;
        case 0x1ae79cu: goto label_1ae79c;
        case 0x1ae7a0u: goto label_1ae7a0;
        case 0x1ae7a4u: goto label_1ae7a4;
        case 0x1ae7a8u: goto label_1ae7a8;
        case 0x1ae7acu: goto label_1ae7ac;
        case 0x1ae7b0u: goto label_1ae7b0;
        case 0x1ae7b4u: goto label_1ae7b4;
        case 0x1ae7b8u: goto label_1ae7b8;
        case 0x1ae7bcu: goto label_1ae7bc;
        case 0x1ae7c0u: goto label_1ae7c0;
        case 0x1ae7c4u: goto label_1ae7c4;
        case 0x1ae7c8u: goto label_1ae7c8;
        case 0x1ae7ccu: goto label_1ae7cc;
        case 0x1ae7d0u: goto label_1ae7d0;
        case 0x1ae7d4u: goto label_1ae7d4;
        case 0x1ae7d8u: goto label_1ae7d8;
        case 0x1ae7dcu: goto label_1ae7dc;
        case 0x1ae7e0u: goto label_1ae7e0;
        case 0x1ae7e4u: goto label_1ae7e4;
        case 0x1ae7e8u: goto label_1ae7e8;
        case 0x1ae7ecu: goto label_1ae7ec;
        case 0x1ae7f0u: goto label_1ae7f0;
        case 0x1ae7f4u: goto label_1ae7f4;
        case 0x1ae7f8u: goto label_1ae7f8;
        case 0x1ae7fcu: goto label_1ae7fc;
        case 0x1ae800u: goto label_1ae800;
        case 0x1ae804u: goto label_1ae804;
        case 0x1ae808u: goto label_1ae808;
        case 0x1ae80cu: goto label_1ae80c;
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae814u: goto label_1ae814;
        case 0x1ae818u: goto label_1ae818;
        case 0x1ae81cu: goto label_1ae81c;
        case 0x1ae820u: goto label_1ae820;
        case 0x1ae824u: goto label_1ae824;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae82cu: goto label_1ae82c;
        case 0x1ae830u: goto label_1ae830;
        case 0x1ae834u: goto label_1ae834;
        case 0x1ae838u: goto label_1ae838;
        case 0x1ae83cu: goto label_1ae83c;
        case 0x1ae840u: goto label_1ae840;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae848u: goto label_1ae848;
        case 0x1ae84cu: goto label_1ae84c;
        case 0x1ae850u: goto label_1ae850;
        case 0x1ae854u: goto label_1ae854;
        case 0x1ae858u: goto label_1ae858;
        case 0x1ae85cu: goto label_1ae85c;
        case 0x1ae860u: goto label_1ae860;
        case 0x1ae864u: goto label_1ae864;
        case 0x1ae868u: goto label_1ae868;
        case 0x1ae86cu: goto label_1ae86c;
        case 0x1ae870u: goto label_1ae870;
        case 0x1ae874u: goto label_1ae874;
        case 0x1ae878u: goto label_1ae878;
        case 0x1ae87cu: goto label_1ae87c;
        case 0x1ae880u: goto label_1ae880;
        case 0x1ae884u: goto label_1ae884;
        case 0x1ae888u: goto label_1ae888;
        case 0x1ae88cu: goto label_1ae88c;
        case 0x1ae890u: goto label_1ae890;
        case 0x1ae894u: goto label_1ae894;
        case 0x1ae898u: goto label_1ae898;
        case 0x1ae89cu: goto label_1ae89c;
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8a4u: goto label_1ae8a4;
        case 0x1ae8a8u: goto label_1ae8a8;
        case 0x1ae8acu: goto label_1ae8ac;
        case 0x1ae8b0u: goto label_1ae8b0;
        case 0x1ae8b4u: goto label_1ae8b4;
        case 0x1ae8b8u: goto label_1ae8b8;
        case 0x1ae8bcu: goto label_1ae8bc;
        case 0x1ae8c0u: goto label_1ae8c0;
        case 0x1ae8c4u: goto label_1ae8c4;
        case 0x1ae8c8u: goto label_1ae8c8;
        case 0x1ae8ccu: goto label_1ae8cc;
        case 0x1ae8d0u: goto label_1ae8d0;
        case 0x1ae8d4u: goto label_1ae8d4;
        case 0x1ae8d8u: goto label_1ae8d8;
        case 0x1ae8dcu: goto label_1ae8dc;
        case 0x1ae8e0u: goto label_1ae8e0;
        case 0x1ae8e4u: goto label_1ae8e4;
        case 0x1ae8e8u: goto label_1ae8e8;
        case 0x1ae8ecu: goto label_1ae8ec;
        case 0x1ae8f0u: goto label_1ae8f0;
        case 0x1ae8f4u: goto label_1ae8f4;
        case 0x1ae8f8u: goto label_1ae8f8;
        case 0x1ae8fcu: goto label_1ae8fc;
        case 0x1ae900u: goto label_1ae900;
        case 0x1ae904u: goto label_1ae904;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae90cu: goto label_1ae90c;
        case 0x1ae910u: goto label_1ae910;
        case 0x1ae914u: goto label_1ae914;
        case 0x1ae918u: goto label_1ae918;
        case 0x1ae91cu: goto label_1ae91c;
        case 0x1ae920u: goto label_1ae920;
        case 0x1ae924u: goto label_1ae924;
        case 0x1ae928u: goto label_1ae928;
        case 0x1ae92cu: goto label_1ae92c;
        case 0x1ae930u: goto label_1ae930;
        case 0x1ae934u: goto label_1ae934;
        case 0x1ae938u: goto label_1ae938;
        case 0x1ae93cu: goto label_1ae93c;
        case 0x1ae940u: goto label_1ae940;
        case 0x1ae944u: goto label_1ae944;
        case 0x1ae948u: goto label_1ae948;
        case 0x1ae94cu: goto label_1ae94c;
        case 0x1ae950u: goto label_1ae950;
        case 0x1ae954u: goto label_1ae954;
        case 0x1ae958u: goto label_1ae958;
        case 0x1ae95cu: goto label_1ae95c;
        case 0x1ae960u: goto label_1ae960;
        case 0x1ae964u: goto label_1ae964;
        case 0x1ae968u: goto label_1ae968;
        case 0x1ae96cu: goto label_1ae96c;
        case 0x1ae970u: goto label_1ae970;
        case 0x1ae974u: goto label_1ae974;
        case 0x1ae978u: goto label_1ae978;
        case 0x1ae97cu: goto label_1ae97c;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae984u: goto label_1ae984;
        case 0x1ae988u: goto label_1ae988;
        case 0x1ae98cu: goto label_1ae98c;
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae994u: goto label_1ae994;
        case 0x1ae998u: goto label_1ae998;
        case 0x1ae99cu: goto label_1ae99c;
        case 0x1ae9a0u: goto label_1ae9a0;
        case 0x1ae9a4u: goto label_1ae9a4;
        case 0x1ae9a8u: goto label_1ae9a8;
        case 0x1ae9acu: goto label_1ae9ac;
        case 0x1ae9b0u: goto label_1ae9b0;
        case 0x1ae9b4u: goto label_1ae9b4;
        case 0x1ae9b8u: goto label_1ae9b8;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9c0u: goto label_1ae9c0;
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9d0u: goto label_1ae9d0;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9d8u: goto label_1ae9d8;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1ae9e0u: goto label_1ae9e0;
        case 0x1ae9e4u: goto label_1ae9e4;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1ae9f4u: goto label_1ae9f4;
        case 0x1ae9f8u: goto label_1ae9f8;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea04u: goto label_1aea04;
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea10u: goto label_1aea10;
        case 0x1aea14u: goto label_1aea14;
        case 0x1aea18u: goto label_1aea18;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea24u: goto label_1aea24;
        case 0x1aea28u: goto label_1aea28;
        case 0x1aea2cu: goto label_1aea2c;
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeac0u: goto label_1aeac0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeac8u: goto label_1aeac8;
        case 0x1aeaccu: goto label_1aeacc;
        case 0x1aead0u: goto label_1aead0;
        case 0x1aead4u: goto label_1aead4;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeadcu: goto label_1aeadc;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeae4u: goto label_1aeae4;
        case 0x1aeae8u: goto label_1aeae8;
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeaf0u: goto label_1aeaf0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeafcu: goto label_1aeafc;
        case 0x1aeb00u: goto label_1aeb00;
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb78u: goto label_1aeb78;
        case 0x1aeb7cu: goto label_1aeb7c;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aeb8cu: goto label_1aeb8c;
        case 0x1aeb90u: goto label_1aeb90;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeb98u: goto label_1aeb98;
        case 0x1aeb9cu: goto label_1aeb9c;
        case 0x1aeba0u: goto label_1aeba0;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aeba8u: goto label_1aeba8;
        case 0x1aebacu: goto label_1aebac;
        case 0x1aebb0u: goto label_1aebb0;
        case 0x1aebb4u: goto label_1aebb4;
        case 0x1aebb8u: goto label_1aebb8;
        case 0x1aebbcu: goto label_1aebbc;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aebc4u: goto label_1aebc4;
        case 0x1aebc8u: goto label_1aebc8;
        case 0x1aebccu: goto label_1aebcc;
        case 0x1aebd0u: goto label_1aebd0;
        case 0x1aebd4u: goto label_1aebd4;
        case 0x1aebd8u: goto label_1aebd8;
        case 0x1aebdcu: goto label_1aebdc;
        case 0x1aebe0u: goto label_1aebe0;
        case 0x1aebe4u: goto label_1aebe4;
        case 0x1aebe8u: goto label_1aebe8;
        case 0x1aebecu: goto label_1aebec;
        case 0x1aebf0u: goto label_1aebf0;
        case 0x1aebf4u: goto label_1aebf4;
        case 0x1aebf8u: goto label_1aebf8;
        case 0x1aebfcu: goto label_1aebfc;
        case 0x1aec00u: goto label_1aec00;
        case 0x1aec04u: goto label_1aec04;
        case 0x1aec08u: goto label_1aec08;
        case 0x1aec0cu: goto label_1aec0c;
        case 0x1aec10u: goto label_1aec10;
        case 0x1aec14u: goto label_1aec14;
        case 0x1aec18u: goto label_1aec18;
        case 0x1aec1cu: goto label_1aec1c;
        case 0x1aec20u: goto label_1aec20;
        case 0x1aec24u: goto label_1aec24;
        case 0x1aec28u: goto label_1aec28;
        case 0x1aec2cu: goto label_1aec2c;
        case 0x1aec30u: goto label_1aec30;
        case 0x1aec34u: goto label_1aec34;
        case 0x1aec38u: goto label_1aec38;
        case 0x1aec3cu: goto label_1aec3c;
        case 0x1aec40u: goto label_1aec40;
        case 0x1aec44u: goto label_1aec44;
        case 0x1aec48u: goto label_1aec48;
        case 0x1aec4cu: goto label_1aec4c;
        case 0x1aec50u: goto label_1aec50;
        case 0x1aec54u: goto label_1aec54;
        case 0x1aec58u: goto label_1aec58;
        case 0x1aec5cu: goto label_1aec5c;
        case 0x1aec60u: goto label_1aec60;
        case 0x1aec64u: goto label_1aec64;
        case 0x1aec68u: goto label_1aec68;
        case 0x1aec6cu: goto label_1aec6c;
        case 0x1aec70u: goto label_1aec70;
        case 0x1aec74u: goto label_1aec74;
        case 0x1aec78u: goto label_1aec78;
        case 0x1aec7cu: goto label_1aec7c;
        case 0x1aec80u: goto label_1aec80;
        case 0x1aec84u: goto label_1aec84;
        case 0x1aec88u: goto label_1aec88;
        case 0x1aec8cu: goto label_1aec8c;
        case 0x1aec90u: goto label_1aec90;
        case 0x1aec94u: goto label_1aec94;
        case 0x1aec98u: goto label_1aec98;
        case 0x1aec9cu: goto label_1aec9c;
        case 0x1aeca0u: goto label_1aeca0;
        case 0x1aeca4u: goto label_1aeca4;
        case 0x1aeca8u: goto label_1aeca8;
        case 0x1aecacu: goto label_1aecac;
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecb4u: goto label_1aecb4;
        case 0x1aecb8u: goto label_1aecb8;
        case 0x1aecbcu: goto label_1aecbc;
        case 0x1aecc0u: goto label_1aecc0;
        case 0x1aecc4u: goto label_1aecc4;
        case 0x1aecc8u: goto label_1aecc8;
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aecd0u: goto label_1aecd0;
        case 0x1aecd4u: goto label_1aecd4;
        case 0x1aecd8u: goto label_1aecd8;
        case 0x1aecdcu: goto label_1aecdc;
        case 0x1aece0u: goto label_1aece0;
        case 0x1aece4u: goto label_1aece4;
        case 0x1aece8u: goto label_1aece8;
        case 0x1aececu: goto label_1aecec;
        case 0x1aecf0u: goto label_1aecf0;
        case 0x1aecf4u: goto label_1aecf4;
        case 0x1aecf8u: goto label_1aecf8;
        case 0x1aecfcu: goto label_1aecfc;
        case 0x1aed00u: goto label_1aed00;
        case 0x1aed04u: goto label_1aed04;
        case 0x1aed08u: goto label_1aed08;
        case 0x1aed0cu: goto label_1aed0c;
        case 0x1aed10u: goto label_1aed10;
        case 0x1aed14u: goto label_1aed14;
        case 0x1aed18u: goto label_1aed18;
        case 0x1aed1cu: goto label_1aed1c;
        case 0x1aed20u: goto label_1aed20;
        case 0x1aed24u: goto label_1aed24;
        case 0x1aed28u: goto label_1aed28;
        case 0x1aed2cu: goto label_1aed2c;
        case 0x1aed30u: goto label_1aed30;
        case 0x1aed34u: goto label_1aed34;
        case 0x1aed38u: goto label_1aed38;
        case 0x1aed3cu: goto label_1aed3c;
        case 0x1aed40u: goto label_1aed40;
        case 0x1aed44u: goto label_1aed44;
        case 0x1aed48u: goto label_1aed48;
        case 0x1aed4cu: goto label_1aed4c;
        case 0x1aed50u: goto label_1aed50;
        case 0x1aed54u: goto label_1aed54;
        case 0x1aed58u: goto label_1aed58;
        case 0x1aed5cu: goto label_1aed5c;
        case 0x1aed60u: goto label_1aed60;
        case 0x1aed64u: goto label_1aed64;
        case 0x1aed68u: goto label_1aed68;
        case 0x1aed6cu: goto label_1aed6c;
        case 0x1aed70u: goto label_1aed70;
        case 0x1aed74u: goto label_1aed74;
        case 0x1aed78u: goto label_1aed78;
        case 0x1aed7cu: goto label_1aed7c;
        case 0x1aed80u: goto label_1aed80;
        case 0x1aed84u: goto label_1aed84;
        case 0x1aed88u: goto label_1aed88;
        case 0x1aed8cu: goto label_1aed8c;
        case 0x1aed90u: goto label_1aed90;
        case 0x1aed94u: goto label_1aed94;
        case 0x1aed98u: goto label_1aed98;
        case 0x1aed9cu: goto label_1aed9c;
        case 0x1aeda0u: goto label_1aeda0;
        case 0x1aeda4u: goto label_1aeda4;
        case 0x1aeda8u: goto label_1aeda8;
        case 0x1aedacu: goto label_1aedac;
        case 0x1aedb0u: goto label_1aedb0;
        case 0x1aedb4u: goto label_1aedb4;
        case 0x1aedb8u: goto label_1aedb8;
        case 0x1aedbcu: goto label_1aedbc;
        case 0x1aedc0u: goto label_1aedc0;
        case 0x1aedc4u: goto label_1aedc4;
        case 0x1aedc8u: goto label_1aedc8;
        case 0x1aedccu: goto label_1aedcc;
        case 0x1aedd0u: goto label_1aedd0;
        case 0x1aedd4u: goto label_1aedd4;
        case 0x1aedd8u: goto label_1aedd8;
        case 0x1aeddcu: goto label_1aeddc;
        case 0x1aede0u: goto label_1aede0;
        case 0x1aede4u: goto label_1aede4;
        case 0x1aede8u: goto label_1aede8;
        case 0x1aedecu: goto label_1aedec;
        case 0x1aedf0u: goto label_1aedf0;
        case 0x1aedf4u: goto label_1aedf4;
        case 0x1aedf8u: goto label_1aedf8;
        case 0x1aedfcu: goto label_1aedfc;
        case 0x1aee00u: goto label_1aee00;
        case 0x1aee04u: goto label_1aee04;
        case 0x1aee08u: goto label_1aee08;
        case 0x1aee0cu: goto label_1aee0c;
        case 0x1aee10u: goto label_1aee10;
        case 0x1aee14u: goto label_1aee14;
        case 0x1aee18u: goto label_1aee18;
        case 0x1aee1cu: goto label_1aee1c;
        case 0x1aee20u: goto label_1aee20;
        case 0x1aee24u: goto label_1aee24;
        case 0x1aee28u: goto label_1aee28;
        case 0x1aee2cu: goto label_1aee2c;
        case 0x1aee30u: goto label_1aee30;
        case 0x1aee34u: goto label_1aee34;
        case 0x1aee38u: goto label_1aee38;
        case 0x1aee3cu: goto label_1aee3c;
        case 0x1aee40u: goto label_1aee40;
        case 0x1aee44u: goto label_1aee44;
        case 0x1aee48u: goto label_1aee48;
        case 0x1aee4cu: goto label_1aee4c;
        case 0x1aee50u: goto label_1aee50;
        case 0x1aee54u: goto label_1aee54;
        case 0x1aee58u: goto label_1aee58;
        case 0x1aee5cu: goto label_1aee5c;
        case 0x1aee60u: goto label_1aee60;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee68u: goto label_1aee68;
        case 0x1aee6cu: goto label_1aee6c;
        case 0x1aee70u: goto label_1aee70;
        case 0x1aee74u: goto label_1aee74;
        case 0x1aee78u: goto label_1aee78;
        case 0x1aee7cu: goto label_1aee7c;
        case 0x1aee80u: goto label_1aee80;
        case 0x1aee84u: goto label_1aee84;
        case 0x1aee88u: goto label_1aee88;
        case 0x1aee8cu: goto label_1aee8c;
        case 0x1aee90u: goto label_1aee90;
        case 0x1aee94u: goto label_1aee94;
        case 0x1aee98u: goto label_1aee98;
        case 0x1aee9cu: goto label_1aee9c;
        case 0x1aeea0u: goto label_1aeea0;
        case 0x1aeea4u: goto label_1aeea4;
        case 0x1aeea8u: goto label_1aeea8;
        case 0x1aeeacu: goto label_1aeeac;
        case 0x1aeeb0u: goto label_1aeeb0;
        case 0x1aeeb4u: goto label_1aeeb4;
        case 0x1aeeb8u: goto label_1aeeb8;
        case 0x1aeebcu: goto label_1aeebc;
        case 0x1aeec0u: goto label_1aeec0;
        case 0x1aeec4u: goto label_1aeec4;
        case 0x1aeec8u: goto label_1aeec8;
        case 0x1aeeccu: goto label_1aeecc;
        case 0x1aeed0u: goto label_1aeed0;
        case 0x1aeed4u: goto label_1aeed4;
        case 0x1aeed8u: goto label_1aeed8;
        case 0x1aeedcu: goto label_1aeedc;
        case 0x1aeee0u: goto label_1aeee0;
        case 0x1aeee4u: goto label_1aeee4;
        case 0x1aeee8u: goto label_1aeee8;
        case 0x1aeeecu: goto label_1aeeec;
        case 0x1aeef0u: goto label_1aeef0;
        case 0x1aeef4u: goto label_1aeef4;
        case 0x1aeef8u: goto label_1aeef8;
        case 0x1aeefcu: goto label_1aeefc;
        case 0x1aef00u: goto label_1aef00;
        case 0x1aef04u: goto label_1aef04;
        case 0x1aef08u: goto label_1aef08;
        default: break;
    }

    ctx->pc = 0x1ae2e0u;

label_1ae2e0:
    // 0x1ae2e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1ae2e4:
    // 0x1ae2e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ae2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ae2e8:
    // 0x1ae2e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ae2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ae2ec:
    // 0x1ae2ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ae2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ae2f0:
    // 0x1ae2f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ae2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ae2f4:
    // 0x1ae2f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ae2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ae2f8:
    // 0x1ae2f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ae2f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2fc:
    // 0x1ae2fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ae300:
    // 0x1ae300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ae304:
    // 0x1ae304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae308:
    // 0x1ae308: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ae30c:
    // 0x1ae30c: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ae30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1ae310:
    // 0x1ae310: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ae314:
    if (ctx->pc == 0x1AE314u) {
        ctx->pc = 0x1AE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE310u;
        // 0x1ae314: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE318u;
        goto label_1ae318;
    }
    ctx->pc = 0x1AE310u;
    {
        const bool branch_taken_0x1ae310 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE310u;
        // 0x1ae314: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae310) {
            ctx->pc = 0x1AE320u;
            goto label_1ae320;
        }
    }
    ctx->pc = 0x1AE318u;
label_1ae318:
    // 0x1ae318: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ae31c:
    if (ctx->pc == 0x1AE31Cu) {
        ctx->pc = 0x1AE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE318u;
        // 0x1ae31c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE320u;
        goto label_1ae320;
    }
    ctx->pc = 0x1AE318u;
    {
        const bool branch_taken_0x1ae318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE318u;
        // 0x1ae31c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae318) {
            ctx->pc = 0x1AE33Cu;
            goto label_1ae33c;
        }
    }
    ctx->pc = 0x1AE320u;
label_1ae320:
    // 0x1ae320: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1ae320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ae324:
    // 0x1ae324: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae328:
    // 0x1ae328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae32c:
    // 0x1ae32c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae330:
    // 0x1ae330: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ae330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ae334:
    // 0x1ae334: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ae338:
    // 0x1ae338: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1ae338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ae33c:
    // 0x1ae33c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1ae33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae340:
    // 0x1ae340: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1ae344:
    // 0x1ae344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ae348:
    // 0x1ae348: 0x0  nop
    ctx->pc = 0x1ae348u;
    // NOP
label_1ae34c:
    // 0x1ae34c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ae350:
    // 0x1ae350: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae354:
    // 0x1ae354: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ae354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ae358:
    // 0x1ae358: 0x0  nop
    ctx->pc = 0x1ae358u;
    // NOP
label_1ae35c:
    // 0x1ae35c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_1ae360:
    if (ctx->pc == 0x1AE360u) {
        ctx->pc = 0x1AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE35Cu;
        // 0x1ae360: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE364u;
        goto label_1ae364;
    }
    ctx->pc = 0x1AE35Cu;
    {
        const bool branch_taken_0x1ae35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE35Cu;
        // 0x1ae360: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae35c) {
            ctx->pc = 0x1AE368u;
            goto label_1ae368;
        }
    }
    ctx->pc = 0x1AE364u;
label_1ae364:
    // 0x1ae364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ae368:
    // 0x1ae368: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ae368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1ae36c:
    // 0x1ae36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae370:
    // 0x1ae370: 0xc055c78  jal         func_1571E0
label_1ae374:
    if (ctx->pc == 0x1AE374u) {
        ctx->pc = 0x1AE378u;
        goto label_1ae378;
    }
    ctx->pc = 0x1AE370u;
    SET_GPR_U32(ctx, 31, 0x1AE378u);
    ctx->pc = 0x1571E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571E0u, 0x1AE370u, 0x1AE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE378u;
label_1ae378:
    // 0x1ae378: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1ae378u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ae37c:
    // 0x1ae37c: 0xc063dd4  jal         func_18F750
label_1ae380:
    if (ctx->pc == 0x1AE380u) {
        ctx->pc = 0x1AE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE37Cu;
        // 0x1ae380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE384u;
        goto label_1ae384;
    }
    ctx->pc = 0x1AE37Cu;
    SET_GPR_U32(ctx, 31, 0x1AE384u);
    ctx->pc = 0x1AE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE37Cu;
    // 0x1ae380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AE37Cu, 0x1AE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE384u;
label_1ae384:
    // 0x1ae384: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1ae384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1ae388:
    // 0x1ae388: 0x1020028b  beqz        $at, . + 4 + (0x28B << 2)
label_1ae38c:
    if (ctx->pc == 0x1AE38Cu) {
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE390u;
        goto label_1ae390;
    }
    ctx->pc = 0x1AE388u;
    {
        const bool branch_taken_0x1ae388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae388) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE390u;
label_1ae390:
    // 0x1ae390: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ae390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae394:
    // 0x1ae394: 0x24840b10  addiu       $a0, $a0, 0xB10
    ctx->pc = 0x1ae394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2832));
label_1ae398:
    // 0x1ae398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae39c:
    // 0x1ae39c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ae39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ae3a0:
    // 0x1ae3a0: 0x600008  jr          $v1
label_1ae3a4:
    if (ctx->pc == 0x1AE3A4u) {
        ctx->pc = 0x1AE3A8u;
        goto label_1ae3a8;
    }
    ctx->pc = 0x1AE3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE3A8u: goto label_1ae3a8;
            case 0x1AE5D0u: goto label_1ae5d0;
            case 0x1AE67Cu: goto label_1ae67c;
            case 0x1AE71Cu: goto label_1ae71c;
            case 0x1AE7B0u: goto label_1ae7b0;
            case 0x1AE7D8u: goto label_1ae7d8;
            case 0x1AE86Cu: goto label_1ae86c;
            case 0x1AE8B0u: goto label_1ae8b0;
            case 0x1AEA30u: goto label_1aea30;
            case 0x1AEB04u: goto label_1aeb04;
            case 0x1AEBA8u: goto label_1aeba8;
            case 0x1AEC10u: goto label_1aec10;
            case 0x1AED64u: goto label_1aed64;
            case 0x1AEDB8u: goto label_1aedb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AE3A8u;
label_1ae3a8:
    // 0x1ae3a8: 0xc067f08  jal         func_19FC20
label_1ae3ac:
    if (ctx->pc == 0x1AE3ACu) {
        ctx->pc = 0x1AE3B0u;
        goto label_1ae3b0;
    }
    ctx->pc = 0x1AE3A8u;
    SET_GPR_U32(ctx, 31, 0x1AE3B0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AE3A8u, 0x1AE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3B0u;
label_1ae3b0:
    // 0x1ae3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3b4:
    // 0x1ae3b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ae3b8:
    if (ctx->pc == 0x1AE3B8u) {
        ctx->pc = 0x1AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3B4u;
        // 0x1ae3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3BCu;
        goto label_1ae3bc;
    }
    ctx->pc = 0x1AE3B4u;
    {
        const bool branch_taken_0x1ae3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3B4u;
        // 0x1ae3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3b4) {
            ctx->pc = 0x1AE3D8u;
            goto label_1ae3d8;
        }
    }
    ctx->pc = 0x1AE3BCu;
label_1ae3bc:
    // 0x1ae3bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ae3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ae3c0:
    // 0x1ae3c0: 0xc067f68  jal         func_19FDA0
label_1ae3c4:
    if (ctx->pc == 0x1AE3C4u) {
        ctx->pc = 0x1AE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3C0u;
        // 0x1ae3c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3C8u;
        goto label_1ae3c8;
    }
    ctx->pc = 0x1AE3C0u;
    SET_GPR_U32(ctx, 31, 0x1AE3C8u);
    ctx->pc = 0x1AE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3C0u;
    // 0x1ae3c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AE3C0u, 0x1AE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3C8u;
label_1ae3c8:
    // 0x1ae3c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae3cc:
    // 0x1ae3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3d0:
    // 0x1ae3d0: 0xc067f68  jal         func_19FDA0
label_1ae3d4:
    if (ctx->pc == 0x1AE3D4u) {
        ctx->pc = 0x1AE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3D0u;
        // 0x1ae3d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3D8u;
        goto label_1ae3d8;
    }
    ctx->pc = 0x1AE3D0u;
    SET_GPR_U32(ctx, 31, 0x1AE3D8u);
    ctx->pc = 0x1AE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3D0u;
    // 0x1ae3d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AE3D0u, 0x1AE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3D8u;
label_1ae3d8:
    // 0x1ae3d8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ae3dc:
    // 0x1ae3dc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ae3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae3e0:
    // 0x1ae3e0: 0xc06bd80  jal         func_1AF600
label_1ae3e4:
    if (ctx->pc == 0x1AE3E4u) {
        ctx->pc = 0x1AE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3E0u;
        // 0x1ae3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3E8u;
        goto label_1ae3e8;
    }
    ctx->pc = 0x1AE3E0u;
    SET_GPR_U32(ctx, 31, 0x1AE3E8u);
    ctx->pc = 0x1AE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3E0u;
    // 0x1ae3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1AE3E0u, 0x1AE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3E8u;
label_1ae3e8:
    // 0x1ae3e8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ae3ec:
    // 0x1ae3ec: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ae3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ae3f0:
    // 0x1ae3f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ae3f4:
    if (ctx->pc == 0x1AE3F4u) {
        ctx->pc = 0x1AE3F8u;
        goto label_1ae3f8;
    }
    ctx->pc = 0x1AE3F0u;
    {
        const bool branch_taken_0x1ae3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3f0) {
            ctx->pc = 0x1AE404u;
            goto label_1ae404;
        }
    }
    ctx->pc = 0x1AE3F8u;
label_1ae3f8:
    // 0x1ae3f8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ae3fc:
    // 0x1ae3fc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae400:
    // 0x1ae400: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x1ae400u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
label_1ae404:
    // 0x1ae404: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ae404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ae408:
    // 0x1ae408: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ae408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae40c:
    // 0x1ae40c: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1ae410:
    // 0x1ae410: 0xae8207e0  sw          $v0, 0x7E0($s4)
    ctx->pc = 0x1ae410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2016), GPR_U32(ctx, 2));
label_1ae414:
    // 0x1ae414: 0x8e8407e0  lw          $a0, 0x7E0($s4)
    ctx->pc = 0x1ae414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1ae418:
    // 0x1ae418: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ae41c:
    // 0x1ae41c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ae420:
    // 0x1ae420: 0x320f809  jalr        $t9
label_1ae424:
    if (ctx->pc == 0x1AE424u) {
        ctx->pc = 0x1AE428u;
        goto label_1ae428;
    }
    ctx->pc = 0x1AE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE420u, 0x1AE428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE428u;
label_1ae428:
    // 0x1ae428: 0x8e8207e0  lw          $v0, 0x7E0($s4)
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1ae42c:
    // 0x1ae42c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ae42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ae430:
    // 0x1ae430: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ae430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ae434:
    // 0x1ae434: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ae434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae438:
    // 0x1ae438: 0x8c420304  lw          $v0, 0x304($v0)
    ctx->pc = 0x1ae438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_1ae43c:
    // 0x1ae43c: 0xae8207e4  sw          $v0, 0x7E4($s4)
    ctx->pc = 0x1ae43cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2020), GPR_U32(ctx, 2));
label_1ae440:
    // 0x1ae440: 0x8e8407e4  lw          $a0, 0x7E4($s4)
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1ae444:
    // 0x1ae444: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ae444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ae448:
    // 0x1ae448: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ae448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ae44c:
    // 0x1ae44c: 0x320f809  jalr        $t9
label_1ae450:
    if (ctx->pc == 0x1AE450u) {
        ctx->pc = 0x1AE454u;
        goto label_1ae454;
    }
    ctx->pc = 0x1AE44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE44Cu, 0x1AE454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x8e8307e4  lw          $v1, 0x7E4($s4)
    ctx->pc = 0x1ae454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1ae458:
    // 0x1ae458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae45c:
    // 0x1ae45c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ae45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ae460:
    // 0x1ae460: 0xc064228  jal         func_1908A0
label_1ae464:
    if (ctx->pc == 0x1AE464u) {
        ctx->pc = 0x1AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE460u;
        // 0x1ae464: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE468u;
        goto label_1ae468;
    }
    ctx->pc = 0x1AE460u;
    SET_GPR_U32(ctx, 31, 0x1AE468u);
    ctx->pc = 0x1AE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE460u;
    // 0x1ae464: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1AE460u, 0x1AE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE468u;
label_1ae468:
    // 0x1ae468: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ae468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ae46c:
    // 0x1ae46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae470:
    // 0x1ae470: 0xc0642e0  jal         func_190B80
label_1ae474:
    if (ctx->pc == 0x1AE474u) {
        ctx->pc = 0x1AE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE470u;
        // 0x1ae474: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE478u;
        goto label_1ae478;
    }
    ctx->pc = 0x1AE470u;
    SET_GPR_U32(ctx, 31, 0x1AE478u);
    ctx->pc = 0x1AE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE470u;
    // 0x1ae474: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1AE470u, 0x1AE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE478u;
label_1ae478:
    // 0x1ae478: 0xae8206cc  sw          $v0, 0x6CC($s4)
    ctx->pc = 0x1ae478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 2));
label_1ae47c:
    // 0x1ae47c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ae47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae480:
    // 0x1ae480: 0xae8006c8  sw          $zero, 0x6C8($s4)
    ctx->pc = 0x1ae480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1736), GPR_U32(ctx, 0));
label_1ae484:
    // 0x1ae484: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_1ae488:
    // 0x1ae488: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1ae48c:
    // 0x1ae48c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ae48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae490:
    // 0x1ae490: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae494:
    // 0x1ae494: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ae494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae498:
    // 0x1ae498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae49c:
    // 0x1ae49c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1ae49cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4a0:
    // 0x1ae4a0: 0x10000036  b           . + 4 + (0x36 << 2)
label_1ae4a4:
    if (ctx->pc == 0x1AE4A4u) {
        ctx->pc = 0x1AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4A0u;
        // 0x1ae4a4: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4A8u;
        goto label_1ae4a8;
    }
    ctx->pc = 0x1AE4A0u;
    {
        const bool branch_taken_0x1ae4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4A0u;
        // 0x1ae4a4: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4a0) {
            ctx->pc = 0x1AE57Cu;
            goto label_1ae57c;
        }
    }
    ctx->pc = 0x1AE4A8u;
label_1ae4a8:
    // 0x1ae4a8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1ae4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1ae4ac:
    // 0x1ae4ac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1ae4b0:
    if (ctx->pc == 0x1AE4B0u) {
        ctx->pc = 0x1AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4ACu;
        // 0x1ae4b0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4B4u;
        goto label_1ae4b4;
    }
    ctx->pc = 0x1AE4ACu;
    {
        const bool branch_taken_0x1ae4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4ACu;
        // 0x1ae4b0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4ac) {
            ctx->pc = 0x1AE578u;
            goto label_1ae578;
        }
    }
    ctx->pc = 0x1AE4B4u;
label_1ae4b4:
    // 0x1ae4b4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_1ae4b8:
    if (ctx->pc == 0x1AE4B8u) {
        ctx->pc = 0x1AE4BCu;
        goto label_1ae4bc;
    }
    ctx->pc = 0x1AE4B4u;
    {
        const bool branch_taken_0x1ae4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4b4) {
            ctx->pc = 0x1AE564u;
            goto label_1ae564;
        }
    }
    ctx->pc = 0x1AE4BCu;
label_1ae4bc:
    // 0x1ae4bc: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1ae4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ae4c0:
    // 0x1ae4c0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1ae4c4:
    if (ctx->pc == 0x1AE4C4u) {
        ctx->pc = 0x1AE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4C0u;
        // 0x1ae4c4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4C8u;
        goto label_1ae4c8;
    }
    ctx->pc = 0x1AE4C0u;
    {
        const bool branch_taken_0x1ae4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4C0u;
        // 0x1ae4c4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4c0) {
            ctx->pc = 0x1AE530u;
            goto label_1ae530;
        }
    }
    ctx->pc = 0x1AE4C8u;
label_1ae4c8:
    // 0x1ae4c8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1ae4cc:
    if (ctx->pc == 0x1AE4CCu) {
        ctx->pc = 0x1AE4D0u;
        goto label_1ae4d0;
    }
    ctx->pc = 0x1AE4C8u;
    {
        const bool branch_taken_0x1ae4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4c8) {
            ctx->pc = 0x1AE510u;
            goto label_1ae510;
        }
    }
    ctx->pc = 0x1AE4D0u;
label_1ae4d0:
    // 0x1ae4d0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ae4d4:
    // 0x1ae4d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ae4d8:
    if (ctx->pc == 0x1AE4D8u) {
        ctx->pc = 0x1AE4DCu;
        goto label_1ae4dc;
    }
    ctx->pc = 0x1AE4D4u;
    {
        const bool branch_taken_0x1ae4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4d4) {
            ctx->pc = 0x1AE4E4u;
            goto label_1ae4e4;
        }
    }
    ctx->pc = 0x1AE4DCu;
label_1ae4dc:
    // 0x1ae4dc: 0x10000026  b           . + 4 + (0x26 << 2)
label_1ae4e0:
    if (ctx->pc == 0x1AE4E0u) {
        ctx->pc = 0x1AE4E4u;
        goto label_1ae4e4;
    }
    ctx->pc = 0x1AE4DCu;
    {
        const bool branch_taken_0x1ae4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4dc) {
            ctx->pc = 0x1AE578u;
            goto label_1ae578;
        }
    }
    ctx->pc = 0x1AE4E4u;
label_1ae4e4:
    // 0x1ae4e4: 0x0  nop
    ctx->pc = 0x1ae4e4u;
    // NOP
label_1ae4e8:
    // 0x1ae4e8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1ae4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ae4ec:
    // 0x1ae4ec: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1ae4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ae4f0:
    // 0x1ae4f0: 0xc057040  jal         func_15C100
label_1ae4f4:
    if (ctx->pc == 0x1AE4F4u) {
        ctx->pc = 0x1AE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4F0u;
        // 0x1ae4f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4F8u;
        goto label_1ae4f8;
    }
    ctx->pc = 0x1AE4F0u;
    SET_GPR_U32(ctx, 31, 0x1AE4F8u);
    ctx->pc = 0x1AE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4F0u;
    // 0x1ae4f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AE4F0u, 0x1AE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE4F8u;
label_1ae4f8:
    // 0x1ae4f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ae4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ae4fc:
    // 0x1ae4fc: 0x2912021  addu        $a0, $s4, $s1
    ctx->pc = 0x1ae4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1ae500:
    // 0x1ae500: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x1ae500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1ae504:
    // 0x1ae504: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1ae504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
label_1ae508:
    // 0x1ae508: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1ae50c:
    if (ctx->pc == 0x1AE50Cu) {
        ctx->pc = 0x1AE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE508u;
        // 0x1ae50c: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE510u;
        goto label_1ae510;
    }
    ctx->pc = 0x1AE508u;
    {
        const bool branch_taken_0x1ae508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE508u;
        // 0x1ae50c: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae508) {
            ctx->pc = 0x1AE578u;
            goto label_1ae578;
        }
    }
    ctx->pc = 0x1AE510u;
label_1ae510:
    // 0x1ae510: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ae514:
    // 0x1ae514: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ae518:
    // 0x1ae518: 0xc057040  jal         func_15C100
label_1ae51c:
    if (ctx->pc == 0x1AE51Cu) {
        ctx->pc = 0x1AE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE518u;
        // 0x1ae51c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE520u;
        goto label_1ae520;
    }
    ctx->pc = 0x1AE518u;
    SET_GPR_U32(ctx, 31, 0x1AE520u);
    ctx->pc = 0x1AE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE518u;
    // 0x1ae51c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AE518u, 0x1AE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE520u;
label_1ae520:
    // 0x1ae520: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1ae524:
    // 0x1ae524: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1ae524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
label_1ae528:
    // 0x1ae528: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ae52c:
    if (ctx->pc == 0x1AE52Cu) {
        ctx->pc = 0x1AE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE528u;
        // 0x1ae52c: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE530u;
        goto label_1ae530;
    }
    ctx->pc = 0x1AE528u;
    {
        const bool branch_taken_0x1ae528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE528u;
        // 0x1ae52c: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae528) {
            ctx->pc = 0x1AE578u;
            goto label_1ae578;
        }
    }
    ctx->pc = 0x1AE530u;
label_1ae530:
    // 0x1ae530: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1ae530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1ae534:
    // 0x1ae534: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ae534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1ae538:
    // 0x1ae538: 0x24080049  addiu       $t0, $zero, 0x49
    ctx->pc = 0x1ae538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1ae53c:
    // 0x1ae53c: 0x24440670  addiu       $a0, $v0, 0x670
    ctx->pc = 0x1ae53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
label_1ae540:
    // 0x1ae540: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ae544:
    // 0x1ae544: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1ae548:
    // 0x1ae548: 0x26070005  addiu       $a3, $s0, 0x5
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_1ae54c:
    // 0x1ae54c: 0x56400a  movz        $t0, $v0, $s6
    ctx->pc = 0x1ae54cu;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_1ae550:
    // 0x1ae550: 0xc06bbc4  jal         func_1AEF10
label_1ae554:
    if (ctx->pc == 0x1AE554u) {
        ctx->pc = 0x1AE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE550u;
        // 0x1ae554: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE558u;
        goto label_1ae558;
    }
    ctx->pc = 0x1AE550u;
    SET_GPR_U32(ctx, 31, 0x1AE558u);
    ctx->pc = 0x1AE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE550u;
    // 0x1ae554: 0x24650028  addiu       $a1, $v1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF10u, 0x1AE550u, 0x1AE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE558u;
label_1ae558:
    // 0x1ae558: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x1ae558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1ae55c:
    // 0x1ae55c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ae560:
    if (ctx->pc == 0x1AE560u) {
        ctx->pc = 0x1AE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE55Cu;
        // 0x1ae560: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE564u;
        goto label_1ae564;
    }
    ctx->pc = 0x1AE55Cu;
    {
        const bool branch_taken_0x1ae55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE55Cu;
        // 0x1ae560: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae55c) {
            ctx->pc = 0x1AE578u;
            goto label_1ae578;
        }
    }
    ctx->pc = 0x1AE564u;
label_1ae564:
    // 0x1ae564: 0x0  nop
    ctx->pc = 0x1ae564u;
    // NOP
label_1ae568:
    // 0x1ae568: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
label_1ae56c:
    // 0x1ae56c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ae570:
    if (ctx->pc == 0x1AE570u) {
        ctx->pc = 0x1AE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE56Cu;
        // 0x1ae570: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE574u;
        goto label_1ae574;
    }
    ctx->pc = 0x1AE56Cu;
    {
        const bool branch_taken_0x1ae56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE56Cu;
        // 0x1ae570: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae56c) {
            ctx->pc = 0x1AE578u;
            goto label_1ae578;
        }
    }
    ctx->pc = 0x1AE574u;
label_1ae574:
    // 0x1ae574: 0xae8206c8  sw          $v0, 0x6C8($s4)
    ctx->pc = 0x1ae574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1736), GPR_U32(ctx, 2));
label_1ae578:
    // 0x1ae578: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1ae57c:
    // 0x1ae57c: 0x0  nop
    ctx->pc = 0x1ae57cu;
    // NOP
label_1ae580:
    // 0x1ae580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae584:
    // 0x1ae584: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ae588:
    // 0x1ae588: 0x1062ffc7  beq         $v1, $v0, . + 4 + (-0x39 << 2)
label_1ae58c:
    if (ctx->pc == 0x1AE58Cu) {
        ctx->pc = 0x1AE590u;
        goto label_1ae590;
    }
    ctx->pc = 0x1AE588u;
    {
        const bool branch_taken_0x1ae588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae588) {
            ctx->pc = 0x1AE4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae4a8;
        }
    }
    ctx->pc = 0x1AE590u;
label_1ae590:
    // 0x1ae590: 0xc046458  jal         func_119160
label_1ae594:
    if (ctx->pc == 0x1AE594u) {
        ctx->pc = 0x1AE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE590u;
        // 0x1ae594: 0x8f848120  lw          $a0, -0x7EE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE598u;
        goto label_1ae598;
    }
    ctx->pc = 0x1AE590u;
    SET_GPR_U32(ctx, 31, 0x1AE598u);
    ctx->pc = 0x1AE594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE590u;
    // 0x1ae594: 0x8f848120  lw          $a0, -0x7EE0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AE590u, 0x1AE598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE598u;
label_1ae598:
    // 0x1ae598: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1ae598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1ae59c:
    // 0x1ae59c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ae59cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ae5a0:
    // 0x1ae5a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ae5a4:
    // 0x1ae5a4: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
label_1ae5a8:
    // 0x1ae5a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae5ac:
    // 0x1ae5ac: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ae5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1ae5b0:
    // 0x1ae5b0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ae5b4:
    // 0x1ae5b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ae5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ae5b8:
    // 0x1ae5b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ae5bc:
    // 0x1ae5bc: 0xae8206c4  sw          $v0, 0x6C4($s4)
    ctx->pc = 0x1ae5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1732), GPR_U32(ctx, 2));
label_1ae5c0:
    // 0x1ae5c0: 0xc06223c  jal         func_1888F0
label_1ae5c4:
    if (ctx->pc == 0x1AE5C4u) {
        ctx->pc = 0x1AE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C0u;
        // 0x1ae5c4: 0xae9407a0  sw          $s4, 0x7A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5C8u;
        goto label_1ae5c8;
    }
    ctx->pc = 0x1AE5C0u;
    SET_GPR_U32(ctx, 31, 0x1AE5C8u);
    ctx->pc = 0x1AE5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5C0u;
    // 0x1ae5c4: 0xae9407a0  sw          $s4, 0x7A0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1952), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AE5C0u, 0x1AE5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5C8u;
label_1ae5c8:
    // 0x1ae5c8: 0xc063e14  jal         func_18F850
label_1ae5cc:
    if (ctx->pc == 0x1AE5CCu) {
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C8u;
        // 0x1ae5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5D0u;
        goto label_1ae5d0;
    }
    ctx->pc = 0x1AE5C8u;
    SET_GPR_U32(ctx, 31, 0x1AE5D0u);
    ctx->pc = 0x1AE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5C8u;
    // 0x1ae5cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE5C8u, 0x1AE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0xa28006b8  sb          $zero, 0x6B8($s4)
    ctx->pc = 0x1ae5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
label_1ae5d4:
    // 0x1ae5d4: 0xa28006b9  sb          $zero, 0x6B9($s4)
    ctx->pc = 0x1ae5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 0));
label_1ae5d8:
    // 0x1ae5d8: 0xa28006ba  sb          $zero, 0x6BA($s4)
    ctx->pc = 0x1ae5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1722), (uint8_t)GPR_U32(ctx, 0));
label_1ae5dc:
    // 0x1ae5dc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ae5e0:
    // 0x1ae5e0: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ae5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ae5e4:
    // 0x1ae5e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ae5e8:
    if (ctx->pc == 0x1AE5E8u) {
        ctx->pc = 0x1AE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E4u;
        // 0x1ae5e8: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5ECu;
        goto label_1ae5ec;
    }
    ctx->pc = 0x1AE5E4u;
    {
        const bool branch_taken_0x1ae5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E4u;
        // 0x1ae5e8: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e4) {
            ctx->pc = 0x1AE5FCu;
            goto label_1ae5fc;
        }
    }
    ctx->pc = 0x1AE5ECu;
label_1ae5ec:
    // 0x1ae5ec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ae5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1ae5f0:
    // 0x1ae5f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ae5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ae5f4:
    // 0x1ae5f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ae5f8:
    if (ctx->pc == 0x1AE5F8u) {
        ctx->pc = 0x1AE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F4u;
        // 0x1ae5f8: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5FCu;
        goto label_1ae5fc;
    }
    ctx->pc = 0x1AE5F4u;
    {
        const bool branch_taken_0x1ae5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F4u;
        // 0x1ae5f8: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f4) {
            ctx->pc = 0x1AE604u;
            goto label_1ae604;
        }
    }
    ctx->pc = 0x1AE5FCu;
label_1ae5fc:
    // 0x1ae5fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ae5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ae600:
    // 0x1ae600: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ae600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae604:
    // 0x1ae604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae608:
    // 0x1ae608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ae60c:
    // 0x1ae60c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae610:
    // 0x1ae610: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae614:
    // 0x1ae614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae618:
    // 0x1ae618: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ae61c:
    // 0x1ae61c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae620:
    // 0x1ae620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae624:
    // 0x1ae624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ae624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1ae628:
    // 0x1ae628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae62c:
    // 0x1ae62c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ae62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ae630:
    // 0x1ae630: 0x0  nop
    ctx->pc = 0x1ae630u;
    // NOP
label_1ae634:
    // 0x1ae634: 0xae8206bc  sw          $v0, 0x6BC($s4)
    ctx->pc = 0x1ae634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 2));
label_1ae638:
    // 0x1ae638: 0xae8006a8  sw          $zero, 0x6A8($s4)
    ctx->pc = 0x1ae638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 0));
label_1ae63c:
    // 0x1ae63c: 0xae8006ac  sw          $zero, 0x6AC($s4)
    ctx->pc = 0x1ae63cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 0));
label_1ae640:
    // 0x1ae640: 0xae8006b0  sw          $zero, 0x6B0($s4)
    ctx->pc = 0x1ae640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 0));
label_1ae644:
    // 0x1ae644: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1ae648:
    // 0x1ae648: 0xac400670  sw          $zero, 0x670($v0)
    ctx->pc = 0x1ae648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 0));
label_1ae64c:
    // 0x1ae64c: 0xc06bc24  jal         func_1AF090
label_1ae650:
    if (ctx->pc == 0x1AE650u) {
        ctx->pc = 0x1AE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE64Cu;
        // 0x1ae650: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE654u;
        goto label_1ae654;
    }
    ctx->pc = 0x1AE64Cu;
    SET_GPR_U32(ctx, 31, 0x1AE654u);
    ctx->pc = 0x1AE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE64Cu;
    // 0x1ae650: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF090u, 0x1AE64Cu, 0x1AE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE654u;
label_1ae654:
    // 0x1ae654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ae658:
    // 0x1ae658: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1ae658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ae65c:
    // 0x1ae65c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ae660:
    if (ctx->pc == 0x1AE660u) {
        ctx->pc = 0x1AE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE65Cu;
        // 0x1ae660: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE664u;
        goto label_1ae664;
    }
    ctx->pc = 0x1AE65Cu;
    {
        const bool branch_taken_0x1ae65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE65Cu;
        // 0x1ae660: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae65c) {
            ctx->pc = 0x1AE644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae644;
        }
    }
    ctx->pc = 0x1AE664u;
label_1ae664:
    // 0x1ae664: 0xc058018  jal         func_160060
label_1ae668:
    if (ctx->pc == 0x1AE668u) {
        ctx->pc = 0x1AE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE664u;
        // 0x1ae668: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE66Cu;
        goto label_1ae66c;
    }
    ctx->pc = 0x1AE664u;
    SET_GPR_U32(ctx, 31, 0x1AE66Cu);
    ctx->pc = 0x1AE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE664u;
    // 0x1ae668: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AE664u, 0x1AE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE66Cu;
label_1ae66c:
    // 0x1ae66c: 0xc06bc24  jal         func_1AF090
label_1ae670:
    if (ctx->pc == 0x1AE670u) {
        ctx->pc = 0x1AE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE66Cu;
        // 0x1ae670: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE674u;
        goto label_1ae674;
    }
    ctx->pc = 0x1AE66Cu;
    SET_GPR_U32(ctx, 31, 0x1AE674u);
    ctx->pc = 0x1AE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE66Cu;
    // 0x1ae670: 0x26840670  addiu       $a0, $s4, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF090u, 0x1AE66Cu, 0x1AE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE674u;
label_1ae674:
    // 0x1ae674: 0xc063e14  jal         func_18F850
label_1ae678:
    if (ctx->pc == 0x1AE678u) {
        ctx->pc = 0x1AE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE674u;
        // 0x1ae678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE67Cu;
        goto label_1ae67c;
    }
    ctx->pc = 0x1AE674u;
    SET_GPR_U32(ctx, 31, 0x1AE67Cu);
    ctx->pc = 0x1AE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE674u;
    // 0x1ae678: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE674u, 0x1AE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE67Cu;
label_1ae67c:
    // 0x1ae67c: 0x8e8406c4  lw          $a0, 0x6C4($s4)
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1732)));
label_1ae680:
    // 0x1ae680: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae684:
    // 0x1ae684: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ae688:
    // 0x1ae688: 0x320f809  jalr        $t9
label_1ae68c:
    if (ctx->pc == 0x1AE68Cu) {
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE690u;
        goto label_1ae690;
    }
    ctx->pc = 0x1AE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE690u);
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE688u, 0x1AE690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE690u;
label_1ae690:
    // 0x1ae690: 0xae8007bc  sw          $zero, 0x7BC($s4)
    ctx->pc = 0x1ae690u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1980), GPR_U32(ctx, 0));
label_1ae694:
    // 0x1ae694: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ae698:
    // 0x1ae698: 0xae8207c0  sw          $v0, 0x7C0($s4)
    ctx->pc = 0x1ae698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1984), GPR_U32(ctx, 2));
label_1ae69c:
    // 0x1ae69c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ae6a0:
    // 0x1ae6a0: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ae6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae6a4:
    // 0x1ae6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae6a8:
    // 0x1ae6a8: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ae6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae6ac:
    // 0x1ae6ac: 0x268407ac  addiu       $a0, $s4, 0x7AC
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1964));
label_1ae6b0:
    // 0x1ae6b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ae6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ae6b4:
    // 0x1ae6b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ae6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ae6b8:
    // 0x1ae6b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae6b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae6bc:
    // 0x1ae6bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ae6bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ae6c0:
    // 0x1ae6c0: 0x0  nop
    ctx->pc = 0x1ae6c0u;
    // NOP
label_1ae6c4:
    // 0x1ae6c4: 0xae8307c4  sw          $v1, 0x7C4($s4)
    ctx->pc = 0x1ae6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1988), GPR_U32(ctx, 3));
label_1ae6c8:
    // 0x1ae6c8: 0xae8007c8  sw          $zero, 0x7C8($s4)
    ctx->pc = 0x1ae6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1992), GPR_U32(ctx, 0));
label_1ae6cc:
    // 0x1ae6cc: 0xae8207cc  sw          $v0, 0x7CC($s4)
    ctx->pc = 0x1ae6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1996), GPR_U32(ctx, 2));
label_1ae6d0:
    // 0x1ae6d0: 0xc069d00  jal         func_1A7400
label_1ae6d4:
    if (ctx->pc == 0x1AE6D4u) {
        ctx->pc = 0x1AE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D0u;
        // 0x1ae6d4: 0xa28007d4  sb          $zero, 0x7D4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2004), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6D8u;
        goto label_1ae6d8;
    }
    ctx->pc = 0x1AE6D0u;
    SET_GPR_U32(ctx, 31, 0x1AE6D8u);
    ctx->pc = 0x1AE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6D0u;
    // 0x1ae6d4: 0xa28007d4  sb          $zero, 0x7D4($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 2004), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AE6D0u, 0x1AE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6D8u;
label_1ae6d8:
    // 0x1ae6d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ae6dc:
    if (ctx->pc == 0x1AE6DCu) {
        ctx->pc = 0x1AE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D8u;
        // 0x1ae6dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6E0u;
        goto label_1ae6e0;
    }
    ctx->pc = 0x1AE6D8u;
    {
        const bool branch_taken_0x1ae6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D8u;
        // 0x1ae6dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6d8) {
            ctx->pc = 0x1AE700u;
            goto label_1ae700;
        }
    }
    ctx->pc = 0x1AE6E0u;
label_1ae6e0:
    // 0x1ae6e0: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ae6e4:
    // 0x1ae6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae6e8:
    // 0x1ae6e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ae6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6ec:
    // 0x1ae6ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ae6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ae6f0:
    // 0x1ae6f0: 0xc063e08  jal         func_18F820
label_1ae6f4:
    if (ctx->pc == 0x1AE6F4u) {
        ctx->pc = 0x1AE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F0u;
        // 0x1ae6f4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6F8u;
        goto label_1ae6f8;
    }
    ctx->pc = 0x1AE6F0u;
    SET_GPR_U32(ctx, 31, 0x1AE6F8u);
    ctx->pc = 0x1AE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6F0u;
    // 0x1ae6f4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AE6F0u, 0x1AE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6F8u;
label_1ae6f8:
    // 0x1ae6f8: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_1ae6fc:
    if (ctx->pc == 0x1AE6FCu) {
        ctx->pc = 0x1AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F8u;
        // 0x1ae6fc: 0x928306b8  lbu         $v1, 0x6B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE700u;
        goto label_1ae700;
    }
    ctx->pc = 0x1AE6F8u;
    {
        const bool branch_taken_0x1ae6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F8u;
        // 0x1ae6fc: 0x928306b8  lbu         $v1, 0x6B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6f8) {
            ctx->pc = 0x1AEDBCu;
            goto label_1aedbc;
        }
    }
    ctx->pc = 0x1AE700u;
label_1ae700:
    // 0x1ae700: 0xc063e14  jal         func_18F850
label_1ae704:
    if (ctx->pc == 0x1AE704u) {
        ctx->pc = 0x1AE708u;
        goto label_1ae708;
    }
    ctx->pc = 0x1AE700u;
    SET_GPR_U32(ctx, 31, 0x1AE708u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE700u, 0x1AE708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE708u;
label_1ae708:
    // 0x1ae708: 0x8e8406c4  lw          $a0, 0x6C4($s4)
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1732)));
label_1ae70c:
    // 0x1ae70c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae710:
    // 0x1ae710: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ae710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ae714:
    // 0x1ae714: 0x320f809  jalr        $t9
label_1ae718:
    if (ctx->pc == 0x1AE718u) {
        ctx->pc = 0x1AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE714u;
        // 0x1ae718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE71Cu;
        goto label_1ae71c;
    }
    ctx->pc = 0x1AE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE71Cu);
        ctx->pc = 0x1AE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE714u;
        // 0x1ae718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE714u, 0x1AE71Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE71Cu;
label_1ae71c:
    // 0x1ae71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae720:
    // 0x1ae720: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ae724:
    // 0x1ae724: 0xa28306b9  sb          $v1, 0x6B9($s4)
    ctx->pc = 0x1ae724u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 3));
label_1ae728:
    // 0x1ae728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae72c:
    // 0x1ae72c: 0xae8006e0  sw          $zero, 0x6E0($s4)
    ctx->pc = 0x1ae72cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
label_1ae730:
    // 0x1ae730: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
label_1ae734:
    // 0x1ae734: 0xae8006d8  sw          $zero, 0x6D8($s4)
    ctx->pc = 0x1ae734u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 0));
label_1ae738:
    // 0x1ae738: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1ae738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1ae73c:
    // 0x1ae73c: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1ae73cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
label_1ae740:
    // 0x1ae740: 0xa28006e8  sb          $zero, 0x6E8($s4)
    ctx->pc = 0x1ae740u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1ae744:
    // 0x1ae744: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ae748:
    // 0x1ae748: 0x8f868124  lw          $a2, -0x7EDC($gp)
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_1ae74c:
    // 0x1ae74c: 0xc06cf34  jal         func_1B3CD0
label_1ae750:
    if (ctx->pc == 0x1AE750u) {
        ctx->pc = 0x1AE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE74Cu;
        // 0x1ae750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE754u;
        goto label_1ae754;
    }
    ctx->pc = 0x1AE74Cu;
    SET_GPR_U32(ctx, 31, 0x1AE754u);
    ctx->pc = 0x1AE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE74Cu;
    // 0x1ae750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AE74Cu, 0x1AE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE754u;
label_1ae754:
    // 0x1ae754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae758:
    // 0x1ae758: 0xc069ac8  jal         func_1A6B20
label_1ae75c:
    if (ctx->pc == 0x1AE75Cu) {
        ctx->pc = 0x1AE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE758u;
        // 0x1ae75c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE760u;
        goto label_1ae760;
    }
    ctx->pc = 0x1AE758u;
    SET_GPR_U32(ctx, 31, 0x1AE760u);
    ctx->pc = 0x1AE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE758u;
    // 0x1ae75c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AE758u, 0x1AE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE760u;
label_1ae760:
    // 0x1ae760: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae764:
    // 0x1ae764: 0x268406d0  addiu       $a0, $s4, 0x6D0
    ctx->pc = 0x1ae764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_1ae768:
    // 0x1ae768: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae76c:
    // 0x1ae76c: 0xc069ac0  jal         func_1A6B00
label_1ae770:
    if (ctx->pc == 0x1AE770u) {
        ctx->pc = 0x1AE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE76Cu;
        // 0x1ae770: 0xa28006e9  sb          $zero, 0x6E9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE774u;
        goto label_1ae774;
    }
    ctx->pc = 0x1AE76Cu;
    SET_GPR_U32(ctx, 31, 0x1AE774u);
    ctx->pc = 0x1AE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE76Cu;
    // 0x1ae770: 0xa28006e9  sb          $zero, 0x6E9($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AE76Cu, 0x1AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE774u;
label_1ae774:
    // 0x1ae774: 0xc062114  jal         func_188450
label_1ae778:
    if (ctx->pc == 0x1AE778u) {
        ctx->pc = 0x1AE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE774u;
        // 0x1ae778: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE77Cu;
        goto label_1ae77c;
    }
    ctx->pc = 0x1AE774u;
    SET_GPR_U32(ctx, 31, 0x1AE77Cu);
    ctx->pc = 0x1AE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE774u;
    // 0x1ae778: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AE774u, 0x1AE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE77Cu;
label_1ae77c:
    // 0x1ae77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae780:
    // 0x1ae780: 0xc0620fc  jal         func_1883F0
label_1ae784:
    if (ctx->pc == 0x1AE784u) {
        ctx->pc = 0x1AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE780u;
        // 0x1ae784: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE788u;
        goto label_1ae788;
    }
    ctx->pc = 0x1AE780u;
    SET_GPR_U32(ctx, 31, 0x1AE788u);
    ctx->pc = 0x1AE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE780u;
    // 0x1ae784: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AE780u, 0x1AE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE788u;
label_1ae788:
    // 0x1ae788: 0x8e8406d0  lw          $a0, 0x6D0($s4)
    ctx->pc = 0x1ae788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
label_1ae78c:
    // 0x1ae78c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ae790:
    if (ctx->pc == 0x1AE790u) {
        ctx->pc = 0x1AE794u;
        goto label_1ae794;
    }
    ctx->pc = 0x1AE78Cu;
    {
        const bool branch_taken_0x1ae78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae78c) {
            ctx->pc = 0x1AE7A8u;
            goto label_1ae7a8;
        }
    }
    ctx->pc = 0x1AE794u;
label_1ae794:
    // 0x1ae794: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae798:
    // 0x1ae798: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ae798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ae79c:
    // 0x1ae79c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ae79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ae7a0:
    // 0x1ae7a0: 0x320f809  jalr        $t9
label_1ae7a4:
    if (ctx->pc == 0x1AE7A4u) {
        ctx->pc = 0x1AE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A0u;
        // 0x1ae7a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7A8u;
        goto label_1ae7a8;
    }
    ctx->pc = 0x1AE7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE7A8u);
        ctx->pc = 0x1AE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A0u;
        // 0x1ae7a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7A0u, 0x1AE7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE7A8u;
label_1ae7a8:
    // 0x1ae7a8: 0xc063e14  jal         func_18F850
label_1ae7ac:
    if (ctx->pc == 0x1AE7ACu) {
        ctx->pc = 0x1AE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A8u;
        // 0x1ae7ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7B0u;
        goto label_1ae7b0;
    }
    ctx->pc = 0x1AE7A8u;
    SET_GPR_U32(ctx, 31, 0x1AE7B0u);
    ctx->pc = 0x1AE7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7A8u;
    // 0x1ae7ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE7A8u, 0x1AE7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7B0u;
label_1ae7b0:
    // 0x1ae7b0: 0xc069afc  jal         func_1A6BF0
label_1ae7b4:
    if (ctx->pc == 0x1AE7B4u) {
        ctx->pc = 0x1AE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7B0u;
        // 0x1ae7b4: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7B8u;
        goto label_1ae7b8;
    }
    ctx->pc = 0x1AE7B0u;
    SET_GPR_U32(ctx, 31, 0x1AE7B8u);
    ctx->pc = 0x1AE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7B0u;
    // 0x1ae7b4: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AE7B0u, 0x1AE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7B8u;
label_1ae7b8:
    // 0x1ae7b8: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
label_1ae7bc:
    if (ctx->pc == 0x1AE7BCu) {
        ctx->pc = 0x1AE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7B8u;
        // 0x1ae7bc: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7C0u;
        goto label_1ae7c0;
    }
    ctx->pc = 0x1AE7B8u;
    {
        const bool branch_taken_0x1ae7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7B8u;
        // 0x1ae7bc: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7b8) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE7C0u;
label_1ae7c0:
    // 0x1ae7c0: 0xc069ae8  jal         func_1A6BA0
label_1ae7c4:
    if (ctx->pc == 0x1AE7C4u) {
        ctx->pc = 0x1AE7C8u;
        goto label_1ae7c8;
    }
    ctx->pc = 0x1AE7C0u;
    SET_GPR_U32(ctx, 31, 0x1AE7C8u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AE7C0u, 0x1AE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7C8u;
label_1ae7c8:
    // 0x1ae7c8: 0xc063e14  jal         func_18F850
label_1ae7cc:
    if (ctx->pc == 0x1AE7CCu) {
        ctx->pc = 0x1AE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7C8u;
        // 0x1ae7cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7D0u;
        goto label_1ae7d0;
    }
    ctx->pc = 0x1AE7C8u;
    SET_GPR_U32(ctx, 31, 0x1AE7D0u);
    ctx->pc = 0x1AE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7C8u;
    // 0x1ae7cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE7C8u, 0x1AE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7D0u;
label_1ae7d0:
    // 0x1ae7d0: 0x10000179  b           . + 4 + (0x179 << 2)
label_1ae7d4:
    if (ctx->pc == 0x1AE7D4u) {
        ctx->pc = 0x1AE7D8u;
        goto label_1ae7d8;
    }
    ctx->pc = 0x1AE7D0u;
    {
        const bool branch_taken_0x1ae7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7d0) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE7D8u;
label_1ae7d8:
    // 0x1ae7d8: 0x928206ba  lbu         $v0, 0x6BA($s4)
    ctx->pc = 0x1ae7d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1722)));
label_1ae7dc:
    // 0x1ae7dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1ae7e0:
    if (ctx->pc == 0x1AE7E0u) {
        ctx->pc = 0x1AE7E4u;
        goto label_1ae7e4;
    }
    ctx->pc = 0x1AE7DCu;
    {
        const bool branch_taken_0x1ae7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7dc) {
            ctx->pc = 0x1AE820u;
            goto label_1ae820;
        }
    }
    ctx->pc = 0x1AE7E4u;
label_1ae7e4:
    // 0x1ae7e4: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x1ae7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1ae7e8:
    // 0x1ae7e8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1ae7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ae7ec:
    // 0x1ae7ec: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1ae7f0:
    if (ctx->pc == 0x1AE7F0u) {
        ctx->pc = 0x1AE7F4u;
        goto label_1ae7f4;
    }
    ctx->pc = 0x1AE7ECu;
    {
        const bool branch_taken_0x1ae7ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7ec) {
            ctx->pc = 0x1AE804u;
            goto label_1ae804;
        }
    }
    ctx->pc = 0x1AE7F4u;
label_1ae7f4:
    // 0x1ae7f4: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x1ae7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_1ae7f8:
    // 0x1ae7f8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1ae7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ae7fc:
    // 0x1ae7fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1ae800:
    if (ctx->pc == 0x1AE800u) {
        ctx->pc = 0x1AE804u;
        goto label_1ae804;
    }
    ctx->pc = 0x1AE7FCu;
    {
        const bool branch_taken_0x1ae7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7fc) {
            ctx->pc = 0x1AE820u;
            goto label_1ae820;
        }
    }
    ctx->pc = 0x1AE804u;
label_1ae804:
    // 0x1ae804: 0x8e8306cc  lw          $v1, 0x6CC($s4)
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1740)));
label_1ae808:
    // 0x1ae808: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae80c:
    if (ctx->pc == 0x1AE80Cu) {
        ctx->pc = 0x1AE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE808u;
        // 0x1ae80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE810u;
        goto label_1ae810;
    }
    ctx->pc = 0x1AE808u;
    {
        const bool branch_taken_0x1ae808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE808u;
        // 0x1ae80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae808) {
            ctx->pc = 0x1AE81Cu;
            goto label_1ae81c;
        }
    }
    ctx->pc = 0x1AE810u;
label_1ae810:
    // 0x1ae810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae814:
    // 0x1ae814: 0xac620320  sw          $v0, 0x320($v1)
    ctx->pc = 0x1ae814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 2));
label_1ae818:
    // 0x1ae818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae81c:
    // 0x1ae81c: 0xa28206ba  sb          $v0, 0x6BA($s4)
    ctx->pc = 0x1ae81cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1722), (uint8_t)GPR_U32(ctx, 2));
label_1ae820:
    // 0x1ae820: 0xc058018  jal         func_160060
label_1ae824:
    if (ctx->pc == 0x1AE824u) {
        ctx->pc = 0x1AE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE820u;
        // 0x1ae824: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE828u;
        goto label_1ae828;
    }
    ctx->pc = 0x1AE820u;
    SET_GPR_U32(ctx, 31, 0x1AE828u);
    ctx->pc = 0x1AE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE820u;
    // 0x1ae824: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AE820u, 0x1AE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_1ae82c:
    // 0x1ae82c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ae830:
    // 0x1ae830: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae834:
    // 0x1ae834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae838:
    // 0x1ae838: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ae83c:
    // 0x1ae83c: 0xc06bc30  jal         func_1AF0C0
label_1ae840:
    if (ctx->pc == 0x1AE840u) {
        ctx->pc = 0x1AE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE83Cu;
        // 0x1ae840: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE844u;
        goto label_1ae844;
    }
    ctx->pc = 0x1AE83Cu;
    SET_GPR_U32(ctx, 31, 0x1AE844u);
    ctx->pc = 0x1AE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE83Cu;
    // 0x1ae840: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF0C0u, 0x1AE83Cu, 0x1AE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE844u;
label_1ae844:
    // 0x1ae844: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1ae844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ae848:
    // 0x1ae848: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1ae84c:
    // 0x1ae84c: 0xc062d50  jal         func_18B540
label_1ae850:
    if (ctx->pc == 0x1AE850u) {
        ctx->pc = 0x1AE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE84Cu;
        // 0x1ae850: 0xae8206b4  sw          $v0, 0x6B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE854u;
        goto label_1ae854;
    }
    ctx->pc = 0x1AE84Cu;
    SET_GPR_U32(ctx, 31, 0x1AE854u);
    ctx->pc = 0x1AE850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE84Cu;
    // 0x1ae850: 0xae8206b4  sw          $v0, 0x6B4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE84Cu, 0x1AE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE854u;
label_1ae854:
    // 0x1ae854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae858:
    // 0x1ae858: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1ae85c:
    // 0x1ae85c: 0xc062b5c  jal         func_18AD70
label_1ae860:
    if (ctx->pc == 0x1AE860u) {
        ctx->pc = 0x1AE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE85Cu;
        // 0x1ae860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE864u;
        goto label_1ae864;
    }
    ctx->pc = 0x1AE85Cu;
    SET_GPR_U32(ctx, 31, 0x1AE864u);
    ctx->pc = 0x1AE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE85Cu;
    // 0x1ae860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE85Cu, 0x1AE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE864u;
label_1ae864:
    // 0x1ae864: 0xc063e14  jal         func_18F850
label_1ae868:
    if (ctx->pc == 0x1AE868u) {
        ctx->pc = 0x1AE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE864u;
        // 0x1ae868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE86Cu;
        goto label_1ae86c;
    }
    ctx->pc = 0x1AE864u;
    SET_GPR_U32(ctx, 31, 0x1AE86Cu);
    ctx->pc = 0x1AE868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE864u;
    // 0x1ae868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE864u, 0x1AE86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE86Cu;
label_1ae86c:
    // 0x1ae86c: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x1ae86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_1ae870:
    // 0x1ae870: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ae874:
    // 0x1ae874: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae878:
    // 0x1ae878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae87c:
    // 0x1ae87c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ae880:
    // 0x1ae880: 0xc06bc5c  jal         func_1AF170
label_1ae884:
    if (ctx->pc == 0x1AE884u) {
        ctx->pc = 0x1AE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE880u;
        // 0x1ae884: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE888u;
        goto label_1ae888;
    }
    ctx->pc = 0x1AE880u;
    SET_GPR_U32(ctx, 31, 0x1AE888u);
    ctx->pc = 0x1AE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE880u;
    // 0x1ae884: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF170u, 0x1AE880u, 0x1AE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE888u;
label_1ae888:
    // 0x1ae888: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
label_1ae88c:
    if (ctx->pc == 0x1AE88Cu) {
        ctx->pc = 0x1AE890u;
        goto label_1ae890;
    }
    ctx->pc = 0x1AE888u;
    {
        const bool branch_taken_0x1ae888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae888) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE890u;
label_1ae890:
    // 0x1ae890: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x1ae890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
label_1ae894:
    // 0x1ae894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae898:
    // 0x1ae898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ae898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae89c:
    // 0x1ae89c: 0xae8306a8  sw          $v1, 0x6A8($s4)
    ctx->pc = 0x1ae89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 3));
label_1ae8a0:
    // 0x1ae8a0: 0xc063e14  jal         func_18F850
label_1ae8a4:
    if (ctx->pc == 0x1AE8A4u) {
        ctx->pc = 0x1AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A0u;
        // 0x1ae8a4: 0xa28206b8  sb          $v0, 0x6B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8A8u;
        goto label_1ae8a8;
    }
    ctx->pc = 0x1AE8A0u;
    SET_GPR_U32(ctx, 31, 0x1AE8A8u);
    ctx->pc = 0x1AE8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8A0u;
    // 0x1ae8a4: 0xa28206b8  sb          $v0, 0x6B8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE8A0u, 0x1AE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8A8u;
label_1ae8a8:
    // 0x1ae8a8: 0x10000143  b           . + 4 + (0x143 << 2)
label_1ae8ac:
    if (ctx->pc == 0x1AE8ACu) {
        ctx->pc = 0x1AE8B0u;
        goto label_1ae8b0;
    }
    ctx->pc = 0x1AE8A8u;
    {
        const bool branch_taken_0x1ae8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8a8) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE8B0u;
label_1ae8b0:
    // 0x1ae8b0: 0x8e8306bc  lw          $v1, 0x6BC($s4)
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
label_1ae8b4:
    // 0x1ae8b4: 0x18600140  blez        $v1, . + 4 + (0x140 << 2)
label_1ae8b8:
    if (ctx->pc == 0x1AE8B8u) {
        ctx->pc = 0x1AE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B4u;
        // 0x1ae8b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8BCu;
        goto label_1ae8bc;
    }
    ctx->pc = 0x1AE8B4u;
    {
        const bool branch_taken_0x1ae8b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B4u;
        // 0x1ae8b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8b4) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE8BCu;
label_1ae8bc:
    // 0x1ae8bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8c0:
    // 0x1ae8c0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1ae8c4:
    // 0x1ae8c4: 0xc06bc68  jal         func_1AF1A0
label_1ae8c8:
    if (ctx->pc == 0x1AE8C8u) {
        ctx->pc = 0x1AE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8C4u;
        // 0x1ae8c8: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8CCu;
        goto label_1ae8cc;
    }
    ctx->pc = 0x1AE8C4u;
    SET_GPR_U32(ctx, 31, 0x1AE8CCu);
    ctx->pc = 0x1AE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8C4u;
    // 0x1ae8c8: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1A0u, 0x1AE8C4u, 0x1AE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8CCu;
label_1ae8cc:
    // 0x1ae8cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ae8d0:
    if (ctx->pc == 0x1AE8D0u) {
        ctx->pc = 0x1AE8D4u;
        goto label_1ae8d4;
    }
    ctx->pc = 0x1AE8CCu;
    {
        const bool branch_taken_0x1ae8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8cc) {
            ctx->pc = 0x1AE8D8u;
            goto label_1ae8d8;
        }
    }
    ctx->pc = 0x1AE8D4u;
label_1ae8d4:
    // 0x1ae8d4: 0xae9106a8  sw          $s1, 0x6A8($s4)
    ctx->pc = 0x1ae8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 17));
label_1ae8d8:
    // 0x1ae8d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae8dc:
    // 0x1ae8dc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ae8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ae8e0:
    // 0x1ae8e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1ae8e4:
    if (ctx->pc == 0x1AE8E4u) {
        ctx->pc = 0x1AE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8E0u;
        // 0x1ae8e4: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8E8u;
        goto label_1ae8e8;
    }
    ctx->pc = 0x1AE8E0u;
    {
        const bool branch_taken_0x1ae8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8E0u;
        // 0x1ae8e4: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8e0) {
            ctx->pc = 0x1AE8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae8c0;
        }
    }
    ctx->pc = 0x1AE8E8u;
label_1ae8e8:
    // 0x1ae8e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8ec:
    // 0x1ae8ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae8f0:
    // 0x1ae8f0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1ae8f4:
    // 0x1ae8f4: 0xc06bc50  jal         func_1AF140
label_1ae8f8:
    if (ctx->pc == 0x1AE8F8u) {
        ctx->pc = 0x1AE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8F4u;
        // 0x1ae8f8: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8FCu;
        goto label_1ae8fc;
    }
    ctx->pc = 0x1AE8F4u;
    SET_GPR_U32(ctx, 31, 0x1AE8FCu);
    ctx->pc = 0x1AE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8F4u;
    // 0x1ae8f8: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF140u, 0x1AE8F4u, 0x1AE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8FCu;
label_1ae8fc:
    // 0x1ae8fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1ae900:
    if (ctx->pc == 0x1AE900u) {
        ctx->pc = 0x1AE904u;
        goto label_1ae904;
    }
    ctx->pc = 0x1AE8FCu;
    {
        const bool branch_taken_0x1ae8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8fc) {
            ctx->pc = 0x1AE9A0u;
            goto label_1ae9a0;
        }
    }
    ctx->pc = 0x1AE904u;
label_1ae904:
    // 0x1ae904: 0xae9106ac  sw          $s1, 0x6AC($s4)
    ctx->pc = 0x1ae904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 17));
label_1ae908:
    // 0x1ae908: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x1ae908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_1ae90c:
    // 0x1ae90c: 0xae8206b0  sw          $v0, 0x6B0($s4)
    ctx->pc = 0x1ae90cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 2));
label_1ae910:
    // 0x1ae910: 0x8e8306b0  lw          $v1, 0x6B0($s4)
    ctx->pc = 0x1ae910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
label_1ae914:
    // 0x1ae914: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1ae914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1ae918:
    // 0x1ae918: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1ae918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ae91c:
    // 0x1ae91c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae920:
    // 0x1ae920: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ae924:
    // 0x1ae924: 0x24440670  addiu       $a0, $v0, 0x670
    ctx->pc = 0x1ae924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
label_1ae928:
    // 0x1ae928: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ae92c:
    // 0x1ae92c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae930:
    // 0x1ae930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae934:
    // 0x1ae934: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1ae934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ae938:
    // 0x1ae938: 0x8c620670  lw          $v0, 0x670($v1)
    ctx->pc = 0x1ae938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1ae93c:
    // 0x1ae93c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ae940:
    // 0x1ae940: 0xc06bc44  jal         func_1AF110
label_1ae944:
    if (ctx->pc == 0x1AE944u) {
        ctx->pc = 0x1AE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE940u;
        // 0x1ae944: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE948u;
        goto label_1ae948;
    }
    ctx->pc = 0x1AE940u;
    SET_GPR_U32(ctx, 31, 0x1AE948u);
    ctx->pc = 0x1AE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE940u;
    // 0x1ae944: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1AE940u, 0x1AE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE948u;
label_1ae948:
    // 0x1ae948: 0xc062d50  jal         func_18B540
label_1ae94c:
    if (ctx->pc == 0x1AE94Cu) {
        ctx->pc = 0x1AE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE948u;
        // 0x1ae94c: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE950u;
        goto label_1ae950;
    }
    ctx->pc = 0x1AE948u;
    SET_GPR_U32(ctx, 31, 0x1AE950u);
    ctx->pc = 0x1AE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE948u;
    // 0x1ae94c: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE948u, 0x1AE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE950u;
label_1ae950:
    // 0x1ae950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae954:
    // 0x1ae954: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1ae958:
    // 0x1ae958: 0xc062b5c  jal         func_18AD70
label_1ae95c:
    if (ctx->pc == 0x1AE95Cu) {
        ctx->pc = 0x1AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE958u;
        // 0x1ae95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE960u;
        goto label_1ae960;
    }
    ctx->pc = 0x1AE958u;
    SET_GPR_U32(ctx, 31, 0x1AE960u);
    ctx->pc = 0x1AE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE958u;
    // 0x1ae95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE958u, 0x1AE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE960u;
label_1ae960:
    // 0x1ae960: 0xc062d50  jal         func_18B540
label_1ae964:
    if (ctx->pc == 0x1AE964u) {
        ctx->pc = 0x1AE968u;
        goto label_1ae968;
    }
    ctx->pc = 0x1AE960u;
    SET_GPR_U32(ctx, 31, 0x1AE968u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE960u, 0x1AE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE968u;
label_1ae968:
    // 0x1ae968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae96c:
    // 0x1ae96c: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x1ae96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_1ae970:
    // 0x1ae970: 0xc062b5c  jal         func_18AD70
label_1ae974:
    if (ctx->pc == 0x1AE974u) {
        ctx->pc = 0x1AE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE970u;
        // 0x1ae974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE978u;
        goto label_1ae978;
    }
    ctx->pc = 0x1AE970u;
    SET_GPR_U32(ctx, 31, 0x1AE978u);
    ctx->pc = 0x1AE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE970u;
    // 0x1ae974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE970u, 0x1AE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE978u;
label_1ae978:
    // 0x1ae978: 0xc062d50  jal         func_18B540
label_1ae97c:
    if (ctx->pc == 0x1AE97Cu) {
        ctx->pc = 0x1AE980u;
        goto label_1ae980;
    }
    ctx->pc = 0x1AE978u;
    SET_GPR_U32(ctx, 31, 0x1AE980u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE978u, 0x1AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE980u;
label_1ae980:
    // 0x1ae980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae984:
    // 0x1ae984: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x1ae984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_1ae988:
    // 0x1ae988: 0xc062b5c  jal         func_18AD70
label_1ae98c:
    if (ctx->pc == 0x1AE98Cu) {
        ctx->pc = 0x1AE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE988u;
        // 0x1ae98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE990u;
        goto label_1ae990;
    }
    ctx->pc = 0x1AE988u;
    SET_GPR_U32(ctx, 31, 0x1AE990u);
    ctx->pc = 0x1AE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE988u;
    // 0x1ae98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE988u, 0x1AE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE990u;
label_1ae990:
    // 0x1ae990: 0xc063e14  jal         func_18F850
label_1ae994:
    if (ctx->pc == 0x1AE994u) {
        ctx->pc = 0x1AE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE990u;
        // 0x1ae994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE998u;
        goto label_1ae998;
    }
    ctx->pc = 0x1AE990u;
    SET_GPR_U32(ctx, 31, 0x1AE998u);
    ctx->pc = 0x1AE994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE990u;
    // 0x1ae994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE990u, 0x1AE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE998u;
label_1ae998:
    // 0x1ae998: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ae99c:
    if (ctx->pc == 0x1AE99Cu) {
        ctx->pc = 0x1AE9A0u;
        goto label_1ae9a0;
    }
    ctx->pc = 0x1AE998u;
    {
        const bool branch_taken_0x1ae998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae998) {
            ctx->pc = 0x1AE9B0u;
            goto label_1ae9b0;
        }
    }
    ctx->pc = 0x1AE9A0u;
label_1ae9a0:
    // 0x1ae9a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ae9a4:
    // 0x1ae9a4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ae9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ae9a8:
    // 0x1ae9a8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1ae9ac:
    if (ctx->pc == 0x1AE9ACu) {
        ctx->pc = 0x1AE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9A8u;
        // 0x1ae9ac: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9B0u;
        goto label_1ae9b0;
    }
    ctx->pc = 0x1AE9A8u;
    {
        const bool branch_taken_0x1ae9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9A8u;
        // 0x1ae9ac: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9a8) {
            ctx->pc = 0x1AE8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae8f0;
        }
    }
    ctx->pc = 0x1AE9B0u;
label_1ae9b0:
    // 0x1ae9b0: 0xc063dd4  jal         func_18F750
label_1ae9b4:
    if (ctx->pc == 0x1AE9B4u) {
        ctx->pc = 0x1AE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9B0u;
        // 0x1ae9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9B8u;
        goto label_1ae9b8;
    }
    ctx->pc = 0x1AE9B0u;
    SET_GPR_U32(ctx, 31, 0x1AE9B8u);
    ctx->pc = 0x1AE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9B0u;
    // 0x1ae9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AE9B0u, 0x1AE9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9B8u;
label_1ae9b8:
    // 0x1ae9b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ae9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ae9bc:
    // 0x1ae9bc: 0x144300fe  bne         $v0, $v1, . + 4 + (0xFE << 2)
label_1ae9c0:
    if (ctx->pc == 0x1AE9C0u) {
        ctx->pc = 0x1AE9C4u;
        goto label_1ae9c4;
    }
    ctx->pc = 0x1AE9BCu;
    {
        const bool branch_taken_0x1ae9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ae9bc) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE9C4u;
label_1ae9c4:
    // 0x1ae9c4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1ae9c8:
    if (ctx->pc == 0x1AE9C8u) {
        ctx->pc = 0x1AE9CCu;
        goto label_1ae9cc;
    }
    ctx->pc = 0x1AE9C4u;
    {
        const bool branch_taken_0x1ae9c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9c4) {
            ctx->pc = 0x1AE9DCu;
            goto label_1ae9dc;
        }
    }
    ctx->pc = 0x1AE9CCu;
label_1ae9cc:
    // 0x1ae9cc: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ae9d0:
    // 0x1ae9d0: 0x8c6327a4  lw          $v1, 0x27A4($v1)
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10148)));
label_1ae9d4:
    // 0x1ae9d4: 0x106000f8  beqz        $v1, . + 4 + (0xF8 << 2)
label_1ae9d8:
    if (ctx->pc == 0x1AE9D8u) {
        ctx->pc = 0x1AE9DCu;
        goto label_1ae9dc;
    }
    ctx->pc = 0x1AE9D4u;
    {
        const bool branch_taken_0x1ae9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9d4) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AE9DCu;
label_1ae9dc:
    // 0x1ae9dc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ae9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ae9e0:
    // 0x1ae9e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae9e4:
    // 0x1ae9e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ae9e8:
    // 0x1ae9e8: 0x0  nop
    ctx->pc = 0x1ae9e8u;
    // NOP
label_1ae9ec:
    // 0x1ae9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae9f0:
    // 0x1ae9f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ae9f4:
    // 0x1ae9f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae9f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ae9f8:
    // 0x1ae9f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ae9f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ae9fc:
    // 0x1ae9fc: 0x0  nop
    ctx->pc = 0x1ae9fcu;
    // NOP
label_1aea00:
    // 0x1aea00: 0xae8206c0  sw          $v0, 0x6C0($s4)
    ctx->pc = 0x1aea00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
label_1aea04:
    // 0x1aea04: 0xc062d50  jal         func_18B540
label_1aea08:
    if (ctx->pc == 0x1AEA08u) {
        ctx->pc = 0x1AEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA04u;
        // 0x1aea08: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA0Cu;
        goto label_1aea0c;
    }
    ctx->pc = 0x1AEA04u;
    SET_GPR_U32(ctx, 31, 0x1AEA0Cu);
    ctx->pc = 0x1AEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA04u;
    // 0x1aea08: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AEA04u, 0x1AEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA0Cu;
label_1aea0c:
    // 0x1aea0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea10:
    // 0x1aea10: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1aea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1aea14:
    // 0x1aea14: 0xc062b5c  jal         func_18AD70
label_1aea18:
    if (ctx->pc == 0x1AEA18u) {
        ctx->pc = 0x1AEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA14u;
        // 0x1aea18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA1Cu;
        goto label_1aea1c;
    }
    ctx->pc = 0x1AEA14u;
    SET_GPR_U32(ctx, 31, 0x1AEA1Cu);
    ctx->pc = 0x1AEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA14u;
    // 0x1aea18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AEA14u, 0x1AEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA1Cu;
label_1aea1c:
    // 0x1aea1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aea20:
    // 0x1aea20: 0xc063e08  jal         func_18F820
label_1aea24:
    if (ctx->pc == 0x1AEA24u) {
        ctx->pc = 0x1AEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA20u;
        // 0x1aea24: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA28u;
        goto label_1aea28;
    }
    ctx->pc = 0x1AEA20u;
    SET_GPR_U32(ctx, 31, 0x1AEA28u);
    ctx->pc = 0x1AEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA20u;
    // 0x1aea24: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEA20u, 0x1AEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA28u;
label_1aea28:
    // 0x1aea28: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_1aea2c:
    if (ctx->pc == 0x1AEA2Cu) {
        ctx->pc = 0x1AEA30u;
        goto label_1aea30;
    }
    ctx->pc = 0x1AEA28u;
    {
        const bool branch_taken_0x1aea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aea28) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AEA30u;
label_1aea30:
    // 0x1aea30: 0xae8006e0  sw          $zero, 0x6E0($s4)
    ctx->pc = 0x1aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
label_1aea34:
    // 0x1aea34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aea34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1aea38:
    // 0x1aea38: 0xae8006d8  sw          $zero, 0x6D8($s4)
    ctx->pc = 0x1aea38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 0));
label_1aea3c:
    // 0x1aea3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aea40:
    // 0x1aea40: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aea40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1aea44:
    // 0x1aea44: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
label_1aea48:
    // 0x1aea48: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1aea48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
label_1aea4c:
    // 0x1aea4c: 0xa28006e8  sb          $zero, 0x6E8($s4)
    ctx->pc = 0x1aea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1aea50:
    // 0x1aea50: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1aea50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1aea54:
    // 0x1aea54: 0x8f868124  lw          $a2, -0x7EDC($gp)
    ctx->pc = 0x1aea54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_1aea58:
    // 0x1aea58: 0xc06cf34  jal         func_1B3CD0
label_1aea5c:
    if (ctx->pc == 0x1AEA5Cu) {
        ctx->pc = 0x1AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA58u;
        // 0x1aea5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA60u;
        goto label_1aea60;
    }
    ctx->pc = 0x1AEA58u;
    SET_GPR_U32(ctx, 31, 0x1AEA60u);
    ctx->pc = 0x1AEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA58u;
    // 0x1aea5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AEA58u, 0x1AEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA60u;
label_1aea60:
    // 0x1aea60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea64:
    // 0x1aea64: 0xc069ac8  jal         func_1A6B20
label_1aea68:
    if (ctx->pc == 0x1AEA68u) {
        ctx->pc = 0x1AEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA64u;
        // 0x1aea68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA6Cu;
        goto label_1aea6c;
    }
    ctx->pc = 0x1AEA64u;
    SET_GPR_U32(ctx, 31, 0x1AEA6Cu);
    ctx->pc = 0x1AEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA64u;
    // 0x1aea68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AEA64u, 0x1AEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA6Cu;
label_1aea6c:
    // 0x1aea6c: 0xa28006e9  sb          $zero, 0x6E9($s4)
    ctx->pc = 0x1aea6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 0));
label_1aea70:
    // 0x1aea70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aea74:
    // 0x1aea74: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aea74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1aea78:
    // 0x1aea78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aea7c:
    // 0x1aea7c: 0xae8206d8  sw          $v0, 0x6D8($s4)
    ctx->pc = 0x1aea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 2));
label_1aea80:
    // 0x1aea80: 0xc069ac0  jal         func_1A6B00
label_1aea84:
    if (ctx->pc == 0x1AEA84u) {
        ctx->pc = 0x1AEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA80u;
        // 0x1aea84: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA88u;
        goto label_1aea88;
    }
    ctx->pc = 0x1AEA80u;
    SET_GPR_U32(ctx, 31, 0x1AEA88u);
    ctx->pc = 0x1AEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA80u;
    // 0x1aea84: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AEA80u, 0x1AEA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA88u;
label_1aea88:
    // 0x1aea88: 0xc062114  jal         func_188450
label_1aea8c:
    if (ctx->pc == 0x1AEA8Cu) {
        ctx->pc = 0x1AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA88u;
        // 0x1aea8c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA90u;
        goto label_1aea90;
    }
    ctx->pc = 0x1AEA88u;
    SET_GPR_U32(ctx, 31, 0x1AEA90u);
    ctx->pc = 0x1AEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA88u;
    // 0x1aea8c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AEA88u, 0x1AEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA90u;
label_1aea90:
    // 0x1aea90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aea94:
    // 0x1aea94: 0xc0620fc  jal         func_1883F0
label_1aea98:
    if (ctx->pc == 0x1AEA98u) {
        ctx->pc = 0x1AEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA94u;
        // 0x1aea98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA9Cu;
        goto label_1aea9c;
    }
    ctx->pc = 0x1AEA94u;
    SET_GPR_U32(ctx, 31, 0x1AEA9Cu);
    ctx->pc = 0x1AEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA94u;
    // 0x1aea98: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AEA94u, 0x1AEA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA9Cu;
label_1aea9c:
    // 0x1aea9c: 0x8e8406d0  lw          $a0, 0x6D0($s4)
    ctx->pc = 0x1aea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
label_1aeaa0:
    // 0x1aeaa0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1aeaa4:
    if (ctx->pc == 0x1AEAA4u) {
        ctx->pc = 0x1AEAA8u;
        goto label_1aeaa8;
    }
    ctx->pc = 0x1AEAA0u;
    {
        const bool branch_taken_0x1aeaa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeaa0) {
            ctx->pc = 0x1AEABCu;
            goto label_1aeabc;
        }
    }
    ctx->pc = 0x1AEAA8u;
label_1aeaa8:
    // 0x1aeaa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aeaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aeaac:
    // 0x1aeaac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1aeab0:
    // 0x1aeab0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1aeab4:
    // 0x1aeab4: 0x320f809  jalr        $t9
label_1aeab8:
    if (ctx->pc == 0x1AEAB8u) {
        ctx->pc = 0x1AEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAB4u;
        // 0x1aeab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEABCu;
        goto label_1aeabc;
    }
    ctx->pc = 0x1AEAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEABCu);
        ctx->pc = 0x1AEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAB4u;
        // 0x1aeab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEAB4u, 0x1AEABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEABCu;
label_1aeabc:
    // 0x1aeabc: 0xae8006c0  sw          $zero, 0x6C0($s4)
    ctx->pc = 0x1aeabcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 0));
label_1aeac0:
    // 0x1aeac0: 0x8e8407e4  lw          $a0, 0x7E4($s4)
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeac4:
    // 0x1aeac4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1aeac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aeac8:
    // 0x1aeac8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aeacc:
    // 0x1aeacc: 0x320f809  jalr        $t9
label_1aead0:
    if (ctx->pc == 0x1AEAD0u) {
        ctx->pc = 0x1AEAD4u;
        goto label_1aead4;
    }
    ctx->pc = 0x1AEACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEAD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEACCu, 0x1AEAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEAD4u;
label_1aead4:
    // 0x1aead4: 0x8e8506b0  lw          $a1, 0x6B0($s4)
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
label_1aead8:
    // 0x1aead8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeadc:
    // 0x1aeadc: 0x8e86068c  lw          $a2, 0x68C($s4)
    ctx->pc = 0x1aeadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_1aeae0:
    // 0x1aeae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aeae4:
    // 0x1aeae4: 0x8e870670  lw          $a3, 0x670($s4)
    ctx->pc = 0x1aeae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1aeae8:
    // 0x1aeae8: 0x8e8207e4  lw          $v0, 0x7E4($s4)
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeaec:
    // 0x1aeaec: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1aeaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_1aeaf0:
    // 0x1aeaf0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1aeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_1aeaf4:
    // 0x1aeaf4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1aeaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_1aeaf8:
    // 0x1aeaf8: 0x8e8207e4  lw          $v0, 0x7E4($s4)
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeafc:
    // 0x1aeafc: 0xc063e14  jal         func_18F850
label_1aeb00:
    if (ctx->pc == 0x1AEB00u) {
        ctx->pc = 0x1AEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAFCu;
        // 0x1aeb00: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB04u;
        goto label_1aeb04;
    }
    ctx->pc = 0x1AEAFCu;
    SET_GPR_U32(ctx, 31, 0x1AEB04u);
    ctx->pc = 0x1AEB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAFCu;
    // 0x1aeb00: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AEAFCu, 0x1AEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB04u;
label_1aeb04:
    // 0x1aeb04: 0x8e8407e4  lw          $a0, 0x7E4($s4)
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeb08:
    // 0x1aeb08: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1aeb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aeb0c:
    // 0x1aeb0c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1aeb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1aeb10:
    // 0x1aeb10: 0x320f809  jalr        $t9
label_1aeb14:
    if (ctx->pc == 0x1AEB14u) {
        ctx->pc = 0x1AEB18u;
        goto label_1aeb18;
    }
    ctx->pc = 0x1AEB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AEB18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB10u, 0x1AEB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEB18u;
label_1aeb18:
    // 0x1aeb18: 0xc069afc  jal         func_1A6BF0
label_1aeb1c:
    if (ctx->pc == 0x1AEB1Cu) {
        ctx->pc = 0x1AEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB18u;
        // 0x1aeb1c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB20u;
        goto label_1aeb20;
    }
    ctx->pc = 0x1AEB18u;
    SET_GPR_U32(ctx, 31, 0x1AEB20u);
    ctx->pc = 0x1AEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB18u;
    // 0x1aeb1c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AEB18u, 0x1AEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB20u;
label_1aeb20:
    // 0x1aeb20: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_1aeb24:
    if (ctx->pc == 0x1AEB24u) {
        ctx->pc = 0x1AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB20u;
        // 0x1aeb24: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB28u;
        goto label_1aeb28;
    }
    ctx->pc = 0x1AEB20u;
    {
        const bool branch_taken_0x1aeb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB20u;
        // 0x1aeb24: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb20) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AEB28u;
label_1aeb28:
    // 0x1aeb28: 0xc069ae8  jal         func_1A6BA0
label_1aeb2c:
    if (ctx->pc == 0x1AEB2Cu) {
        ctx->pc = 0x1AEB30u;
        goto label_1aeb30;
    }
    ctx->pc = 0x1AEB28u;
    SET_GPR_U32(ctx, 31, 0x1AEB30u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AEB28u, 0x1AEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB30u;
label_1aeb30:
    // 0x1aeb30: 0x8e8207e4  lw          $v0, 0x7E4($s4)
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1aeb34:
    // 0x1aeb34: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1aeb34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aeb38:
    // 0x1aeb38: 0x8e8306b0  lw          $v1, 0x6B0($s4)
    ctx->pc = 0x1aeb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
label_1aeb3c:
    // 0x1aeb3c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1aeb40:
    // 0x1aeb40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aeb44:
    // 0x1aeb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aeb48:
    // 0x1aeb48: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1aeb4c:
    // 0x1aeb4c: 0x8c420670  lw          $v0, 0x670($v0)
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1aeb50:
    // 0x1aeb50: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1aeb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1aeb54:
    // 0x1aeb54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1aeb58:
    if (ctx->pc == 0x1AEB58u) {
        ctx->pc = 0x1AEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB54u;
        // 0x1aeb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB5Cu;
        goto label_1aeb5c;
    }
    ctx->pc = 0x1AEB54u;
    {
        const bool branch_taken_0x1aeb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB54u;
        // 0x1aeb58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb54) {
            ctx->pc = 0x1AEB90u;
            goto label_1aeb90;
        }
    }
    ctx->pc = 0x1AEB5Cu;
label_1aeb5c:
    // 0x1aeb5c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aeb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aeb60:
    // 0x1aeb60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1aeb64:
    // 0x1aeb64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aeb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aeb68:
    // 0x1aeb68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb6c:
    // 0x1aeb6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aeb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1aeb70:
    // 0x1aeb70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aeb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aeb74:
    // 0x1aeb74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aeb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aeb78:
    // 0x1aeb78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aeb78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aeb7c:
    // 0x1aeb7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aeb7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1aeb80:
    // 0x1aeb80: 0xc063e08  jal         func_18F820
label_1aeb84:
    if (ctx->pc == 0x1AEB84u) {
        ctx->pc = 0x1AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB80u;
        // 0x1aeb84: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB88u;
        goto label_1aeb88;
    }
    ctx->pc = 0x1AEB80u;
    SET_GPR_U32(ctx, 31, 0x1AEB88u);
    ctx->pc = 0x1AEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB80u;
    // 0x1aeb84: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEB80u, 0x1AEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB88u;
label_1aeb88:
    // 0x1aeb88: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1aeb8c:
    if (ctx->pc == 0x1AEB8Cu) {
        ctx->pc = 0x1AEB90u;
        goto label_1aeb90;
    }
    ctx->pc = 0x1AEB88u;
    {
        const bool branch_taken_0x1aeb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb88) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AEB90u;
label_1aeb90:
    // 0x1aeb90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb94:
    // 0x1aeb94: 0xa28206b9  sb          $v0, 0x6B9($s4)
    ctx->pc = 0x1aeb94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 2));
label_1aeb98:
    // 0x1aeb98: 0xc063e08  jal         func_18F820
label_1aeb9c:
    if (ctx->pc == 0x1AEB9Cu) {
        ctx->pc = 0x1AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB98u;
        // 0x1aeb9c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBA0u;
        goto label_1aeba0;
    }
    ctx->pc = 0x1AEB98u;
    SET_GPR_U32(ctx, 31, 0x1AEBA0u);
    ctx->pc = 0x1AEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB98u;
    // 0x1aeb9c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEB98u, 0x1AEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBA0u;
label_1aeba0:
    // 0x1aeba0: 0x10000085  b           . + 4 + (0x85 << 2)
label_1aeba4:
    if (ctx->pc == 0x1AEBA4u) {
        ctx->pc = 0x1AEBA8u;
        goto label_1aeba8;
    }
    ctx->pc = 0x1AEBA0u;
    {
        const bool branch_taken_0x1aeba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeba0) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AEBA8u;
label_1aeba8:
    // 0x1aeba8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aebac:
    // 0x1aebac: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1aebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1aebb0:
    // 0x1aebb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1aebb4:
    if (ctx->pc == 0x1AEBB4u) {
        ctx->pc = 0x1AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB0u;
        // 0x1aebb4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBB8u;
        goto label_1aebb8;
    }
    ctx->pc = 0x1AEBB0u;
    {
        const bool branch_taken_0x1aebb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB0u;
        // 0x1aebb4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebb0) {
            ctx->pc = 0x1AEBC0u;
            goto label_1aebc0;
        }
    }
    ctx->pc = 0x1AEBB8u;
label_1aebb8:
    // 0x1aebb8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1aebbc:
    if (ctx->pc == 0x1AEBBCu) {
        ctx->pc = 0x1AEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB8u;
        // 0x1aebbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBC0u;
        goto label_1aebc0;
    }
    ctx->pc = 0x1AEBB8u;
    {
        const bool branch_taken_0x1aebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBB8u;
        // 0x1aebbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebb8) {
            ctx->pc = 0x1AEBD8u;
            goto label_1aebd8;
        }
    }
    ctx->pc = 0x1AEBC0u;
label_1aebc0:
    // 0x1aebc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aebc4:
    // 0x1aebc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aebc8:
    // 0x1aebc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aebcc:
    // 0x1aebcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aebccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1aebd0:
    // 0x1aebd0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1aebd4:
    // 0x1aebd4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1aebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1aebd8:
    // 0x1aebd8: 0xc055c40  jal         func_157100
label_1aebdc:
    if (ctx->pc == 0x1AEBDCu) {
        ctx->pc = 0x1AEBE0u;
        goto label_1aebe0;
    }
    ctx->pc = 0x1AEBD8u;
    SET_GPR_U32(ctx, 31, 0x1AEBE0u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AEBD8u, 0x1AEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBE0u;
label_1aebe0:
    // 0x1aebe0: 0x8e8306c0  lw          $v1, 0x6C0($s4)
    ctx->pc = 0x1aebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1728)));
label_1aebe4:
    // 0x1aebe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1aebe8:
    // 0x1aebe8: 0x1c600073  bgtz        $v1, . + 4 + (0x73 << 2)
label_1aebec:
    if (ctx->pc == 0x1AEBECu) {
        ctx->pc = 0x1AEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE8u;
        // 0x1aebec: 0xae8306c0  sw          $v1, 0x6C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBF0u;
        goto label_1aebf0;
    }
    ctx->pc = 0x1AEBE8u;
    {
        const bool branch_taken_0x1aebe8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE8u;
        // 0x1aebec: 0xae8306c0  sw          $v1, 0x6C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebe8) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AEBF0u;
label_1aebf0:
    // 0x1aebf0: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
label_1aebf4:
    // 0x1aebf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aebf8:
    // 0x1aebf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aebfc:
    // 0x1aebfc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1aec00:
    // 0x1aec00: 0xc063e08  jal         func_18F820
label_1aec04:
    if (ctx->pc == 0x1AEC04u) {
        ctx->pc = 0x1AEC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC00u;
        // 0x1aec04: 0xae8206ac  sw          $v0, 0x6AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC08u;
        goto label_1aec08;
    }
    ctx->pc = 0x1AEC00u;
    SET_GPR_U32(ctx, 31, 0x1AEC08u);
    ctx->pc = 0x1AEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC00u;
    // 0x1aec04: 0xae8206ac  sw          $v0, 0x6AC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEC00u, 0x1AEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC08u;
label_1aec08:
    // 0x1aec08: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1aec0c:
    if (ctx->pc == 0x1AEC0Cu) {
        ctx->pc = 0x1AEC10u;
        goto label_1aec10;
    }
    ctx->pc = 0x1AEC08u;
    {
        const bool branch_taken_0x1aec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec08) {
            ctx->pc = 0x1AEDB8u;
            goto label_1aedb8;
        }
    }
    ctx->pc = 0x1AEC10u;
label_1aec10:
    // 0x1aec10: 0xa28006b8  sb          $zero, 0x6B8($s4)
    ctx->pc = 0x1aec10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
label_1aec14:
    // 0x1aec14: 0xa28006b9  sb          $zero, 0x6B9($s4)
    ctx->pc = 0x1aec14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 0));
label_1aec18:
    // 0x1aec18: 0x8e8207e0  lw          $v0, 0x7E0($s4)
    ctx->pc = 0x1aec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1aec1c:
    // 0x1aec1c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1aec1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aec20:
    // 0x1aec20: 0x8e8206cc  lw          $v0, 0x6CC($s4)
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1740)));
label_1aec24:
    // 0x1aec24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1aec28:
    if (ctx->pc == 0x1AEC28u) {
        ctx->pc = 0x1AEC2Cu;
        goto label_1aec2c;
    }
    ctx->pc = 0x1AEC24u;
    {
        const bool branch_taken_0x1aec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec24) {
            ctx->pc = 0x1AEC30u;
            goto label_1aec30;
        }
    }
    ctx->pc = 0x1AEC2Cu;
label_1aec2c:
    // 0x1aec2c: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1aec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_1aec30:
    // 0x1aec30: 0xae8006e0  sw          $zero, 0x6E0($s4)
    ctx->pc = 0x1aec30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
label_1aec34:
    // 0x1aec34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1aec38:
    // 0x1aec38: 0xae8006d8  sw          $zero, 0x6D8($s4)
    ctx->pc = 0x1aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 0));
label_1aec3c:
    // 0x1aec3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aec40:
    // 0x1aec40: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aec40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1aec44:
    // 0x1aec44: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x1aec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
label_1aec48:
    // 0x1aec48: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1aec48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
label_1aec4c:
    // 0x1aec4c: 0xa28006e8  sb          $zero, 0x6E8($s4)
    ctx->pc = 0x1aec4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1aec50:
    // 0x1aec50: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1aec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1aec54:
    // 0x1aec54: 0x8f868124  lw          $a2, -0x7EDC($gp)
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_1aec58:
    // 0x1aec58: 0xc06cf34  jal         func_1B3CD0
label_1aec5c:
    if (ctx->pc == 0x1AEC5Cu) {
        ctx->pc = 0x1AEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC58u;
        // 0x1aec5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC60u;
        goto label_1aec60;
    }
    ctx->pc = 0x1AEC58u;
    SET_GPR_U32(ctx, 31, 0x1AEC60u);
    ctx->pc = 0x1AEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC58u;
    // 0x1aec5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AEC58u, 0x1AEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC60u;
label_1aec60:
    // 0x1aec60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aec64:
    // 0x1aec64: 0xc069ac8  jal         func_1A6B20
label_1aec68:
    if (ctx->pc == 0x1AEC68u) {
        ctx->pc = 0x1AEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC64u;
        // 0x1aec68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC6Cu;
        goto label_1aec6c;
    }
    ctx->pc = 0x1AEC64u;
    SET_GPR_U32(ctx, 31, 0x1AEC6Cu);
    ctx->pc = 0x1AEC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC64u;
    // 0x1aec68: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AEC64u, 0x1AEC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC6Cu;
label_1aec6c:
    // 0x1aec6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aec70:
    // 0x1aec70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aec74:
    // 0x1aec74: 0xa28306e9  sb          $v1, 0x6E9($s4)
    ctx->pc = 0x1aec74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 3));
label_1aec78:
    // 0x1aec78: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1aec78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1aec7c:
    // 0x1aec7c: 0xae8206d8  sw          $v0, 0x6D8($s4)
    ctx->pc = 0x1aec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 2));
label_1aec80:
    // 0x1aec80: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1aec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1aec84:
    // 0x1aec84: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x1aec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_1aec88:
    // 0x1aec88: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1aec8c:
    if (ctx->pc == 0x1AEC8Cu) {
        ctx->pc = 0x1AEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC88u;
        // 0x1aec8c: 0x43802a  slt         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC90u;
        goto label_1aec90;
    }
    ctx->pc = 0x1AEC88u;
    {
        const bool branch_taken_0x1aec88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC88u;
        // 0x1aec8c: 0x43802a  slt         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec88) {
            ctx->pc = 0x1AECC4u;
            goto label_1aecc4;
        }
    }
    ctx->pc = 0x1AEC90u;
label_1aec90:
    // 0x1aec90: 0xc062114  jal         func_188450
label_1aec94:
    if (ctx->pc == 0x1AEC94u) {
        ctx->pc = 0x1AEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC90u;
        // 0x1aec94: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC98u;
        goto label_1aec98;
    }
    ctx->pc = 0x1AEC90u;
    SET_GPR_U32(ctx, 31, 0x1AEC98u);
    ctx->pc = 0x1AEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC90u;
    // 0x1aec94: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AEC90u, 0x1AEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC98u;
label_1aec98:
    // 0x1aec98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aec9c:
    // 0x1aec9c: 0xc0620fc  jal         func_1883F0
label_1aeca0:
    if (ctx->pc == 0x1AECA0u) {
        ctx->pc = 0x1AECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC9Cu;
        // 0x1aeca0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECA4u;
        goto label_1aeca4;
    }
    ctx->pc = 0x1AEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AECA4u);
    ctx->pc = 0x1AECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC9Cu;
    // 0x1aeca0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AEC9Cu, 0x1AECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECA4u;
label_1aeca4:
    // 0x1aeca4: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
label_1aeca8:
    // 0x1aeca8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1aecac:
    if (ctx->pc == 0x1AECACu) {
        ctx->pc = 0x1AECB0u;
        goto label_1aecb0;
    }
    ctx->pc = 0x1AECA8u;
    {
        const bool branch_taken_0x1aeca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeca8) {
            ctx->pc = 0x1AED0Cu;
            goto label_1aed0c;
        }
    }
    ctx->pc = 0x1AECB0u;
label_1aecb0:
    // 0x1aecb0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1aecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aecb4:
    // 0x1aecb4: 0xc064fb8  jal         func_193EE0
label_1aecb8:
    if (ctx->pc == 0x1AECB8u) {
        ctx->pc = 0x1AECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECB4u;
        // 0x1aecb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECBCu;
        goto label_1aecbc;
    }
    ctx->pc = 0x1AECB4u;
    SET_GPR_U32(ctx, 31, 0x1AECBCu);
    ctx->pc = 0x1AECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECB4u;
    // 0x1aecb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AECB4u, 0x1AECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECBCu;
label_1aecbc:
    // 0x1aecbc: 0x10000014  b           . + 4 + (0x14 << 2)
label_1aecc0:
    if (ctx->pc == 0x1AECC0u) {
        ctx->pc = 0x1AECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECBCu;
        // 0x1aecc0: 0x8e8406d0  lw          $a0, 0x6D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECC4u;
        goto label_1aecc4;
    }
    ctx->pc = 0x1AECBCu;
    {
        const bool branch_taken_0x1aecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECBCu;
        // 0x1aecc0: 0x8e8406d0  lw          $a0, 0x6D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecbc) {
            ctx->pc = 0x1AED10u;
            goto label_1aed10;
        }
    }
    ctx->pc = 0x1AECC4u;
label_1aecc4:
    // 0x1aecc4: 0xc062114  jal         func_188450
label_1aecc8:
    if (ctx->pc == 0x1AECC8u) {
        ctx->pc = 0x1AECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECC4u;
        // 0x1aecc8: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECCCu;
        goto label_1aeccc;
    }
    ctx->pc = 0x1AECC4u;
    SET_GPR_U32(ctx, 31, 0x1AECCCu);
    ctx->pc = 0x1AECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECC4u;
    // 0x1aecc8: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AECC4u, 0x1AECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECCCu;
label_1aeccc:
    // 0x1aeccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aecd0:
    // 0x1aecd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aecd4:
    // 0x1aecd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aecd8:
    // 0x1aecd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1aecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1aecdc:
    // 0x1aecdc: 0xc0620fc  jal         func_1883F0
label_1aece0:
    if (ctx->pc == 0x1AECE0u) {
        ctx->pc = 0x1AECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECDCu;
        // 0x1aece0: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECE4u;
        goto label_1aece4;
    }
    ctx->pc = 0x1AECDCu;
    SET_GPR_U32(ctx, 31, 0x1AECE4u);
    ctx->pc = 0x1AECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECDCu;
    // 0x1aece0: 0x50300a  movz        $a2, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AECDCu, 0x1AECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECE4u;
label_1aece4:
    // 0x1aece4: 0x8e8506c8  lw          $a1, 0x6C8($s4)
    ctx->pc = 0x1aece4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
label_1aece8:
    // 0x1aece8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1aecec:
    if (ctx->pc == 0x1AECECu) {
        ctx->pc = 0x1AECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECE8u;
        // 0x1aecec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECF0u;
        goto label_1aecf0;
    }
    ctx->pc = 0x1AECE8u;
    {
        const bool branch_taken_0x1aece8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECE8u;
        // 0x1aecec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aece8) {
            ctx->pc = 0x1AED0Cu;
            goto label_1aed0c;
        }
    }
    ctx->pc = 0x1AECF0u;
label_1aecf0:
    // 0x1aecf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aecf4:
    // 0x1aecf4: 0x50180a  movz        $v1, $v0, $s0
    ctx->pc = 0x1aecf4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1aecf8:
    // 0x1aecf8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1aecfc:
    // 0x1aecfc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1aecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1aed00:
    // 0x1aed00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1aed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aed04:
    // 0x1aed04: 0xc064fb8  jal         func_193EE0
label_1aed08:
    if (ctx->pc == 0x1AED08u) {
        ctx->pc = 0x1AED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED04u;
        // 0x1aed08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED0Cu;
        goto label_1aed0c;
    }
    ctx->pc = 0x1AED04u;
    SET_GPR_U32(ctx, 31, 0x1AED0Cu);
    ctx->pc = 0x1AED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED04u;
    // 0x1aed08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AED04u, 0x1AED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED0Cu;
label_1aed0c:
    // 0x1aed0c: 0x8e8406d0  lw          $a0, 0x6D0($s4)
    ctx->pc = 0x1aed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
label_1aed10:
    // 0x1aed10: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1aed14:
    if (ctx->pc == 0x1AED14u) {
        ctx->pc = 0x1AED18u;
        goto label_1aed18;
    }
    ctx->pc = 0x1AED10u;
    {
        const bool branch_taken_0x1aed10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aed10) {
            ctx->pc = 0x1AED2Cu;
            goto label_1aed2c;
        }
    }
    ctx->pc = 0x1AED18u;
label_1aed18:
    // 0x1aed18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aed18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aed1c:
    // 0x1aed1c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1aed1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1aed20:
    // 0x1aed20: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1aed20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1aed24:
    // 0x1aed24: 0x320f809  jalr        $t9
label_1aed28:
    if (ctx->pc == 0x1AED28u) {
        ctx->pc = 0x1AED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED24u;
        // 0x1aed28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED2Cu;
        goto label_1aed2c;
    }
    ctx->pc = 0x1AED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AED2Cu);
        ctx->pc = 0x1AED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED24u;
        // 0x1aed28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED24u, 0x1AED2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AED2Cu;
label_1aed2c:
    // 0x1aed2c: 0xc062d50  jal         func_18B540
label_1aed30:
    if (ctx->pc == 0x1AED30u) {
        ctx->pc = 0x1AED34u;
        goto label_1aed34;
    }
    ctx->pc = 0x1AED2Cu;
    SET_GPR_U32(ctx, 31, 0x1AED34u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AED2Cu, 0x1AED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED34u;
label_1aed34:
    // 0x1aed34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aed34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aed38:
    // 0x1aed38: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x1aed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1aed3c:
    // 0x1aed3c: 0xc062b5c  jal         func_18AD70
label_1aed40:
    if (ctx->pc == 0x1AED40u) {
        ctx->pc = 0x1AED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED3Cu;
        // 0x1aed40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED44u;
        goto label_1aed44;
    }
    ctx->pc = 0x1AED3Cu;
    SET_GPR_U32(ctx, 31, 0x1AED44u);
    ctx->pc = 0x1AED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED3Cu;
    // 0x1aed40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AED3Cu, 0x1AED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED44u;
label_1aed44:
    // 0x1aed44: 0xc062d50  jal         func_18B540
label_1aed48:
    if (ctx->pc == 0x1AED48u) {
        ctx->pc = 0x1AED4Cu;
        goto label_1aed4c;
    }
    ctx->pc = 0x1AED44u;
    SET_GPR_U32(ctx, 31, 0x1AED4Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AED44u, 0x1AED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED4Cu;
label_1aed4c:
    // 0x1aed4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aed50:
    // 0x1aed50: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1aed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1aed54:
    // 0x1aed54: 0xc062b5c  jal         func_18AD70
label_1aed58:
    if (ctx->pc == 0x1AED58u) {
        ctx->pc = 0x1AED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED54u;
        // 0x1aed58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED5Cu;
        goto label_1aed5c;
    }
    ctx->pc = 0x1AED54u;
    SET_GPR_U32(ctx, 31, 0x1AED5Cu);
    ctx->pc = 0x1AED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED54u;
    // 0x1aed58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AED54u, 0x1AED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED5Cu;
label_1aed5c:
    // 0x1aed5c: 0xc063e14  jal         func_18F850
label_1aed60:
    if (ctx->pc == 0x1AED60u) {
        ctx->pc = 0x1AED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED5Cu;
        // 0x1aed60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED64u;
        goto label_1aed64;
    }
    ctx->pc = 0x1AED5Cu;
    SET_GPR_U32(ctx, 31, 0x1AED64u);
    ctx->pc = 0x1AED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED5Cu;
    // 0x1aed60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AED5Cu, 0x1AED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED64u;
label_1aed64:
    // 0x1aed64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aed68:
    // 0x1aed68: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1aed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1aed6c:
    // 0x1aed6c: 0xae8307a4  sw          $v1, 0x7A4($s4)
    ctx->pc = 0x1aed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1956), GPR_U32(ctx, 3));
label_1aed70:
    // 0x1aed70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aed70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aed74:
    // 0x1aed74: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aed78:
    // 0x1aed78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aed78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aed7c:
    // 0x1aed7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aed7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aed80:
    // 0x1aed80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aed80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aed84:
    // 0x1aed84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aed84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1aed88:
    // 0x1aed88: 0x0  nop
    ctx->pc = 0x1aed88u;
    // NOP
label_1aed8c:
    // 0x1aed8c: 0xae8207a8  sw          $v0, 0x7A8($s4)
    ctx->pc = 0x1aed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1960), GPR_U32(ctx, 2));
label_1aed90:
    // 0x1aed90: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1aed90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1aed94:
    // 0x1aed94: 0xc054660  jal         func_151980
label_1aed98:
    if (ctx->pc == 0x1AED98u) {
        ctx->pc = 0x1AED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED94u;
        // 0x1aed98: 0x26840790  addiu       $a0, $s4, 0x790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED9Cu;
        goto label_1aed9c;
    }
    ctx->pc = 0x1AED94u;
    SET_GPR_U32(ctx, 31, 0x1AED9Cu);
    ctx->pc = 0x1AED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED94u;
    // 0x1aed98: 0x26840790  addiu       $a0, $s4, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1AED94u, 0x1AED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED9Cu;
label_1aed9c:
    // 0x1aed9c: 0xc069ae8  jal         func_1A6BA0
label_1aeda0:
    if (ctx->pc == 0x1AEDA0u) {
        ctx->pc = 0x1AEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED9Cu;
        // 0x1aeda0: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDA4u;
        goto label_1aeda4;
    }
    ctx->pc = 0x1AED9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEDA4u);
    ctx->pc = 0x1AEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED9Cu;
    // 0x1aeda0: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AED9Cu, 0x1AEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDA4u;
label_1aeda4:
    // 0x1aeda4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aeda8:
    // 0x1aeda8: 0xc063e08  jal         func_18F820
label_1aedac:
    if (ctx->pc == 0x1AEDACu) {
        ctx->pc = 0x1AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA8u;
        // 0x1aedac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDB0u;
        goto label_1aedb0;
    }
    ctx->pc = 0x1AEDA8u;
    SET_GPR_U32(ctx, 31, 0x1AEDB0u);
    ctx->pc = 0x1AEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDA8u;
    // 0x1aedac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEDA8u, 0x1AEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDB0u;
label_1aedb0:
    // 0x1aedb0: 0x1000fe08  b           . + 4 + (-0x1F8 << 2)
label_1aedb4:
    if (ctx->pc == 0x1AEDB4u) {
        ctx->pc = 0x1AEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDB0u;
        // 0x1aedb4: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDB8u;
        goto label_1aedb8;
    }
    ctx->pc = 0x1AEDB0u;
    {
        const bool branch_taken_0x1aedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDB0u;
        // 0x1aedb4: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedb0) {
            ctx->pc = 0x1AE5D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae5d4;
        }
    }
    ctx->pc = 0x1AEDB8u;
label_1aedb8:
    // 0x1aedb8: 0x928306b8  lbu         $v1, 0x6B8($s4)
    ctx->pc = 0x1aedb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1720)));
label_1aedbc:
    // 0x1aedbc: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_1aedc0:
    if (ctx->pc == 0x1AEDC0u) {
        ctx->pc = 0x1AEDC4u;
        goto label_1aedc4;
    }
    ctx->pc = 0x1AEDBCu;
    {
        const bool branch_taken_0x1aedbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedbc) {
            ctx->pc = 0x1AEEA4u;
            goto label_1aeea4;
        }
    }
    ctx->pc = 0x1AEDC4u;
label_1aedc4:
    // 0x1aedc4: 0x8e8306bc  lw          $v1, 0x6BC($s4)
    ctx->pc = 0x1aedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
label_1aedc8:
    // 0x1aedc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1aedcc:
    // 0x1aedcc: 0xae8306bc  sw          $v1, 0x6BC($s4)
    ctx->pc = 0x1aedccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 3));
label_1aedd0:
    // 0x1aedd0: 0x928306ba  lbu         $v1, 0x6BA($s4)
    ctx->pc = 0x1aedd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1722)));
label_1aedd4:
    // 0x1aedd4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1aedd8:
    if (ctx->pc == 0x1AEDD8u) {
        ctx->pc = 0x1AEDDCu;
        goto label_1aeddc;
    }
    ctx->pc = 0x1AEDD4u;
    {
        const bool branch_taken_0x1aedd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aedd4) {
            ctx->pc = 0x1AEE38u;
            goto label_1aee38;
        }
    }
    ctx->pc = 0x1AEDDCu;
label_1aeddc:
    // 0x1aeddc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aeddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aede0:
    // 0x1aede0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1aede0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_1aede4:
    // 0x1aede4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1aede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aede8:
    // 0x1aede8: 0x8e8406bc  lw          $a0, 0x6BC($s4)
    ctx->pc = 0x1aede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
label_1aedec:
    // 0x1aedec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aedecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aedf0:
    // 0x1aedf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aedf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aedf4:
    // 0x1aedf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aedf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aedf8:
    // 0x1aedf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1aedf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1aedfc:
    // 0x1aedfc: 0x0  nop
    ctx->pc = 0x1aedfcu;
    // NOP
label_1aee00:
    // 0x1aee00: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1aee00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aee04:
    // 0x1aee04: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1aee08:
    if (ctx->pc == 0x1AEE08u) {
        ctx->pc = 0x1AEE0Cu;
        goto label_1aee0c;
    }
    ctx->pc = 0x1AEE04u;
    {
        const bool branch_taken_0x1aee04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee04) {
            ctx->pc = 0x1AEE38u;
            goto label_1aee38;
        }
    }
    ctx->pc = 0x1AEE0Cu;
label_1aee0c:
    // 0x1aee0c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1aee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1aee10:
    // 0x1aee10: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1aee10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_1aee14:
    // 0x1aee14: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1aee18:
    if (ctx->pc == 0x1AEE18u) {
        ctx->pc = 0x1AEE1Cu;
        goto label_1aee1c;
    }
    ctx->pc = 0x1AEE14u;
    {
        const bool branch_taken_0x1aee14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aee14) {
            ctx->pc = 0x1AEE38u;
            goto label_1aee38;
        }
    }
    ctx->pc = 0x1AEE1Cu;
label_1aee1c:
    // 0x1aee1c: 0x8e8406cc  lw          $a0, 0x6CC($s4)
    ctx->pc = 0x1aee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1740)));
label_1aee20:
    // 0x1aee20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1aee24:
    if (ctx->pc == 0x1AEE24u) {
        ctx->pc = 0x1AEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE20u;
        // 0x1aee24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE28u;
        goto label_1aee28;
    }
    ctx->pc = 0x1AEE20u;
    {
        const bool branch_taken_0x1aee20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE20u;
        // 0x1aee24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee20) {
            ctx->pc = 0x1AEE34u;
            goto label_1aee34;
        }
    }
    ctx->pc = 0x1AEE28u;
label_1aee28:
    // 0x1aee28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aee2c:
    // 0x1aee2c: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1aee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
label_1aee30:
    // 0x1aee30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aee34:
    // 0x1aee34: 0xa28306ba  sb          $v1, 0x6BA($s4)
    ctx->pc = 0x1aee34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1722), (uint8_t)GPR_U32(ctx, 3));
label_1aee38:
    // 0x1aee38: 0x8e8306bc  lw          $v1, 0x6BC($s4)
    ctx->pc = 0x1aee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
label_1aee3c:
    // 0x1aee3c: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
label_1aee40:
    if (ctx->pc == 0x1AEE40u) {
        ctx->pc = 0x1AEE44u;
        goto label_1aee44;
    }
    ctx->pc = 0x1AEE3Cu;
    {
        const bool branch_taken_0x1aee3c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1aee3c) {
            ctx->pc = 0x1AEEA4u;
            goto label_1aeea4;
        }
    }
    ctx->pc = 0x1AEE44u;
label_1aee44:
    // 0x1aee44: 0xae8006bc  sw          $zero, 0x6BC($s4)
    ctx->pc = 0x1aee44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 0));
label_1aee48:
    // 0x1aee48: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1aee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1aee4c:
    // 0x1aee4c: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1aee4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1aee50:
    // 0x1aee50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1aee54:
    if (ctx->pc == 0x1AEE54u) {
        ctx->pc = 0x1AEE58u;
        goto label_1aee58;
    }
    ctx->pc = 0x1AEE50u;
    {
        const bool branch_taken_0x1aee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee50) {
            ctx->pc = 0x1AEE78u;
            goto label_1aee78;
        }
    }
    ctx->pc = 0x1AEE58u;
label_1aee58:
    // 0x1aee58: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1aee5c:
    // 0x1aee5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aee60:
    // 0x1aee60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aee64:
    // 0x1aee64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1aee68:
    // 0x1aee68: 0xc063e08  jal         func_18F820
label_1aee6c:
    if (ctx->pc == 0x1AEE6Cu) {
        ctx->pc = 0x1AEE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE68u;
        // 0x1aee6c: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE70u;
        goto label_1aee70;
    }
    ctx->pc = 0x1AEE68u;
    SET_GPR_U32(ctx, 31, 0x1AEE70u);
    ctx->pc = 0x1AEE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE68u;
    // 0x1aee6c: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEE68u, 0x1AEE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE70u;
label_1aee70:
    // 0x1aee70: 0x1000000d  b           . + 4 + (0xD << 2)
label_1aee74:
    if (ctx->pc == 0x1AEE74u) {
        ctx->pc = 0x1AEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE70u;
        // 0x1aee74: 0x928306b9  lbu         $v1, 0x6B9($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1721)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE78u;
        goto label_1aee78;
    }
    ctx->pc = 0x1AEE70u;
    {
        const bool branch_taken_0x1aee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE70u;
        // 0x1aee74: 0x928306b9  lbu         $v1, 0x6B9($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1721)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee70) {
            ctx->pc = 0x1AEEA8u;
            goto label_1aeea8;
        }
    }
    ctx->pc = 0x1AEE78u;
label_1aee78:
    // 0x1aee78: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aee7c:
    // 0x1aee7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1aee80:
    // 0x1aee80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aee80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aee84:
    // 0x1aee84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aee88:
    // 0x1aee88: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1aee8c:
    // 0x1aee8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aee8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aee90:
    // 0x1aee90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aee90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aee94:
    // 0x1aee94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aee94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aee98:
    // 0x1aee98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aee98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1aee9c:
    // 0x1aee9c: 0xc063e08  jal         func_18F820
label_1aeea0:
    if (ctx->pc == 0x1AEEA0u) {
        ctx->pc = 0x1AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE9Cu;
        // 0x1aeea0: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEA4u;
        goto label_1aeea4;
    }
    ctx->pc = 0x1AEE9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEEA4u);
    ctx->pc = 0x1AEEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE9Cu;
    // 0x1aeea0: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEE9Cu, 0x1AEEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEA4u;
label_1aeea4:
    // 0x1aeea4: 0x928306b9  lbu         $v1, 0x6B9($s4)
    ctx->pc = 0x1aeea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1721)));
label_1aeea8:
    // 0x1aeea8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1aeeac:
    if (ctx->pc == 0x1AEEACu) {
        ctx->pc = 0x1AEEB0u;
        goto label_1aeeb0;
    }
    ctx->pc = 0x1AEEA8u;
    {
        const bool branch_taken_0x1aeea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeea8) {
            ctx->pc = 0x1AEEDCu;
            goto label_1aeedc;
        }
    }
    ctx->pc = 0x1AEEB0u;
label_1aeeb0:
    // 0x1aeeb0: 0x8e8307e0  lw          $v1, 0x7E0($s4)
    ctx->pc = 0x1aeeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1aeeb4:
    // 0x1aeeb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeeb8:
    // 0x1aeeb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1aeeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1aeebc:
    // 0x1aeebc: 0x8e8406bc  lw          $a0, 0x6BC($s4)
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
label_1aeec0:
    // 0x1aeec0: 0x8e85068c  lw          $a1, 0x68C($s4)
    ctx->pc = 0x1aeec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
label_1aeec4:
    // 0x1aeec4: 0x8e860670  lw          $a2, 0x670($s4)
    ctx->pc = 0x1aeec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1aeec8:
    // 0x1aeec8: 0x8e8307e0  lw          $v1, 0x7E0($s4)
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1aeecc:
    // 0x1aeecc: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1aeeccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1aeed0:
    // 0x1aeed0: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1aeed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_1aeed4:
    // 0x1aeed4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aeed8:
    if (ctx->pc == 0x1AEED8u) {
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED4u;
        // 0x1aeed8: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEDCu;
        goto label_1aeedc;
    }
    ctx->pc = 0x1AEED4u;
    {
        const bool branch_taken_0x1aeed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED4u;
        // 0x1aeed8: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeed4) {
            ctx->pc = 0x1AEEE4u;
            goto label_1aeee4;
        }
    }
    ctx->pc = 0x1AEEDCu;
label_1aeedc:
    // 0x1aeedc: 0x8e8307e0  lw          $v1, 0x7E0($s4)
    ctx->pc = 0x1aeedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1aeee0:
    // 0x1aeee0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1aeee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1aeee4:
    // 0x1aeee4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1aeee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aeee8:
    // 0x1aeee8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1aeee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aeeec:
    // 0x1aeeec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1aeeecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aeef0:
    // 0x1aeef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aeef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aeef4:
    // 0x1aeef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aeef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aeef8:
    // 0x1aeef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aeef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aeefc:
    // 0x1aeefc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aeefcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aef00:
    // 0x1aef00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aef00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aef04:
    // 0x1aef04: 0x3e00008  jr          $ra
label_1aef08:
    if (ctx->pc == 0x1AEF08u) {
        ctx->pc = 0x1AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF04u;
        // 0x1aef08: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF0Cu;
        goto label_fallthrough_0x1aef04;
    }
    ctx->pc = 0x1AEF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF04u;
        // 0x1aef08: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aef04:
    ctx->pc = 0x1AEF0Cu;
}
