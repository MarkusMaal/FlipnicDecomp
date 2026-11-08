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

// Function: FUN_0018d390
// Address: 0x18d390 - 0x18e36c
void FUN_0018d390_0x18d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018d390_0x18d390");
#endif

    switch (ctx->pc) {
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f4u: goto label_18d6f4;
        case 0x18d6f8u: goto label_18d6f8;
        case 0x18d6fcu: goto label_18d6fc;
        case 0x18d700u: goto label_18d700;
        case 0x18d704u: goto label_18d704;
        case 0x18d708u: goto label_18d708;
        case 0x18d70cu: goto label_18d70c;
        case 0x18d710u: goto label_18d710;
        case 0x18d714u: goto label_18d714;
        case 0x18d718u: goto label_18d718;
        case 0x18d71cu: goto label_18d71c;
        case 0x18d720u: goto label_18d720;
        case 0x18d724u: goto label_18d724;
        case 0x18d728u: goto label_18d728;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d730u: goto label_18d730;
        case 0x18d734u: goto label_18d734;
        case 0x18d738u: goto label_18d738;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d740u: goto label_18d740;
        case 0x18d744u: goto label_18d744;
        case 0x18d748u: goto label_18d748;
        case 0x18d74cu: goto label_18d74c;
        case 0x18d750u: goto label_18d750;
        case 0x18d754u: goto label_18d754;
        case 0x18d758u: goto label_18d758;
        case 0x18d75cu: goto label_18d75c;
        case 0x18d760u: goto label_18d760;
        case 0x18d764u: goto label_18d764;
        case 0x18d768u: goto label_18d768;
        case 0x18d76cu: goto label_18d76c;
        case 0x18d770u: goto label_18d770;
        case 0x18d774u: goto label_18d774;
        case 0x18d778u: goto label_18d778;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d780u: goto label_18d780;
        case 0x18d784u: goto label_18d784;
        case 0x18d788u: goto label_18d788;
        case 0x18d78cu: goto label_18d78c;
        case 0x18d790u: goto label_18d790;
        case 0x18d794u: goto label_18d794;
        case 0x18d798u: goto label_18d798;
        case 0x18d79cu: goto label_18d79c;
        case 0x18d7a0u: goto label_18d7a0;
        case 0x18d7a4u: goto label_18d7a4;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7b0u: goto label_18d7b0;
        case 0x18d7b4u: goto label_18d7b4;
        case 0x18d7b8u: goto label_18d7b8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7c4u: goto label_18d7c4;
        case 0x18d7c8u: goto label_18d7c8;
        case 0x18d7ccu: goto label_18d7cc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        case 0x18d858u: goto label_18d858;
        case 0x18d85cu: goto label_18d85c;
        case 0x18d860u: goto label_18d860;
        case 0x18d864u: goto label_18d864;
        case 0x18d868u: goto label_18d868;
        case 0x18d86cu: goto label_18d86c;
        case 0x18d870u: goto label_18d870;
        case 0x18d874u: goto label_18d874;
        case 0x18d878u: goto label_18d878;
        case 0x18d87cu: goto label_18d87c;
        case 0x18d880u: goto label_18d880;
        case 0x18d884u: goto label_18d884;
        case 0x18d888u: goto label_18d888;
        case 0x18d88cu: goto label_18d88c;
        case 0x18d890u: goto label_18d890;
        case 0x18d894u: goto label_18d894;
        case 0x18d898u: goto label_18d898;
        case 0x18d89cu: goto label_18d89c;
        case 0x18d8a0u: goto label_18d8a0;
        case 0x18d8a4u: goto label_18d8a4;
        case 0x18d8a8u: goto label_18d8a8;
        case 0x18d8acu: goto label_18d8ac;
        case 0x18d8b0u: goto label_18d8b0;
        case 0x18d8b4u: goto label_18d8b4;
        case 0x18d8b8u: goto label_18d8b8;
        case 0x18d8bcu: goto label_18d8bc;
        case 0x18d8c0u: goto label_18d8c0;
        case 0x18d8c4u: goto label_18d8c4;
        case 0x18d8c8u: goto label_18d8c8;
        case 0x18d8ccu: goto label_18d8cc;
        case 0x18d8d0u: goto label_18d8d0;
        case 0x18d8d4u: goto label_18d8d4;
        case 0x18d8d8u: goto label_18d8d8;
        case 0x18d8dcu: goto label_18d8dc;
        case 0x18d8e0u: goto label_18d8e0;
        case 0x18d8e4u: goto label_18d8e4;
        case 0x18d8e8u: goto label_18d8e8;
        case 0x18d8ecu: goto label_18d8ec;
        case 0x18d8f0u: goto label_18d8f0;
        case 0x18d8f4u: goto label_18d8f4;
        case 0x18d8f8u: goto label_18d8f8;
        case 0x18d8fcu: goto label_18d8fc;
        case 0x18d900u: goto label_18d900;
        case 0x18d904u: goto label_18d904;
        case 0x18d908u: goto label_18d908;
        case 0x18d90cu: goto label_18d90c;
        case 0x18d910u: goto label_18d910;
        case 0x18d914u: goto label_18d914;
        case 0x18d918u: goto label_18d918;
        case 0x18d91cu: goto label_18d91c;
        case 0x18d920u: goto label_18d920;
        case 0x18d924u: goto label_18d924;
        case 0x18d928u: goto label_18d928;
        case 0x18d92cu: goto label_18d92c;
        case 0x18d930u: goto label_18d930;
        case 0x18d934u: goto label_18d934;
        case 0x18d938u: goto label_18d938;
        case 0x18d93cu: goto label_18d93c;
        case 0x18d940u: goto label_18d940;
        case 0x18d944u: goto label_18d944;
        case 0x18d948u: goto label_18d948;
        case 0x18d94cu: goto label_18d94c;
        case 0x18d950u: goto label_18d950;
        case 0x18d954u: goto label_18d954;
        case 0x18d958u: goto label_18d958;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d960u: goto label_18d960;
        case 0x18d964u: goto label_18d964;
        case 0x18d968u: goto label_18d968;
        case 0x18d96cu: goto label_18d96c;
        case 0x18d970u: goto label_18d970;
        case 0x18d974u: goto label_18d974;
        case 0x18d978u: goto label_18d978;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d980u: goto label_18d980;
        case 0x18d984u: goto label_18d984;
        case 0x18d988u: goto label_18d988;
        case 0x18d98cu: goto label_18d98c;
        case 0x18d990u: goto label_18d990;
        case 0x18d994u: goto label_18d994;
        case 0x18d998u: goto label_18d998;
        case 0x18d99cu: goto label_18d99c;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9a4u: goto label_18d9a4;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18d9acu: goto label_18d9ac;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9b4u: goto label_18d9b4;
        case 0x18d9b8u: goto label_18d9b8;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9c0u: goto label_18d9c0;
        case 0x18d9c4u: goto label_18d9c4;
        case 0x18d9c8u: goto label_18d9c8;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9d0u: goto label_18d9d0;
        case 0x18d9d4u: goto label_18d9d4;
        case 0x18d9d8u: goto label_18d9d8;
        case 0x18d9dcu: goto label_18d9dc;
        case 0x18d9e0u: goto label_18d9e0;
        case 0x18d9e4u: goto label_18d9e4;
        case 0x18d9e8u: goto label_18d9e8;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f0u: goto label_18d9f0;
        case 0x18d9f4u: goto label_18d9f4;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18d9fcu: goto label_18d9fc;
        case 0x18da00u: goto label_18da00;
        case 0x18da04u: goto label_18da04;
        case 0x18da08u: goto label_18da08;
        case 0x18da0cu: goto label_18da0c;
        case 0x18da10u: goto label_18da10;
        case 0x18da14u: goto label_18da14;
        case 0x18da18u: goto label_18da18;
        case 0x18da1cu: goto label_18da1c;
        case 0x18da20u: goto label_18da20;
        case 0x18da24u: goto label_18da24;
        case 0x18da28u: goto label_18da28;
        case 0x18da2cu: goto label_18da2c;
        case 0x18da30u: goto label_18da30;
        case 0x18da34u: goto label_18da34;
        case 0x18da38u: goto label_18da38;
        case 0x18da3cu: goto label_18da3c;
        case 0x18da40u: goto label_18da40;
        case 0x18da44u: goto label_18da44;
        case 0x18da48u: goto label_18da48;
        case 0x18da4cu: goto label_18da4c;
        case 0x18da50u: goto label_18da50;
        case 0x18da54u: goto label_18da54;
        case 0x18da58u: goto label_18da58;
        case 0x18da5cu: goto label_18da5c;
        case 0x18da60u: goto label_18da60;
        case 0x18da64u: goto label_18da64;
        case 0x18da68u: goto label_18da68;
        case 0x18da6cu: goto label_18da6c;
        case 0x18da70u: goto label_18da70;
        case 0x18da74u: goto label_18da74;
        case 0x18da78u: goto label_18da78;
        case 0x18da7cu: goto label_18da7c;
        case 0x18da80u: goto label_18da80;
        case 0x18da84u: goto label_18da84;
        case 0x18da88u: goto label_18da88;
        case 0x18da8cu: goto label_18da8c;
        case 0x18da90u: goto label_18da90;
        case 0x18da94u: goto label_18da94;
        case 0x18da98u: goto label_18da98;
        case 0x18da9cu: goto label_18da9c;
        case 0x18daa0u: goto label_18daa0;
        case 0x18daa4u: goto label_18daa4;
        case 0x18daa8u: goto label_18daa8;
        case 0x18daacu: goto label_18daac;
        case 0x18dab0u: goto label_18dab0;
        case 0x18dab4u: goto label_18dab4;
        case 0x18dab8u: goto label_18dab8;
        case 0x18dabcu: goto label_18dabc;
        case 0x18dac0u: goto label_18dac0;
        case 0x18dac4u: goto label_18dac4;
        case 0x18dac8u: goto label_18dac8;
        case 0x18daccu: goto label_18dacc;
        case 0x18dad0u: goto label_18dad0;
        case 0x18dad4u: goto label_18dad4;
        case 0x18dad8u: goto label_18dad8;
        case 0x18dadcu: goto label_18dadc;
        case 0x18dae0u: goto label_18dae0;
        case 0x18dae4u: goto label_18dae4;
        case 0x18dae8u: goto label_18dae8;
        case 0x18daecu: goto label_18daec;
        case 0x18daf0u: goto label_18daf0;
        case 0x18daf4u: goto label_18daf4;
        case 0x18daf8u: goto label_18daf8;
        case 0x18dafcu: goto label_18dafc;
        case 0x18db00u: goto label_18db00;
        case 0x18db04u: goto label_18db04;
        case 0x18db08u: goto label_18db08;
        case 0x18db0cu: goto label_18db0c;
        case 0x18db10u: goto label_18db10;
        case 0x18db14u: goto label_18db14;
        case 0x18db18u: goto label_18db18;
        case 0x18db1cu: goto label_18db1c;
        case 0x18db20u: goto label_18db20;
        case 0x18db24u: goto label_18db24;
        case 0x18db28u: goto label_18db28;
        case 0x18db2cu: goto label_18db2c;
        case 0x18db30u: goto label_18db30;
        case 0x18db34u: goto label_18db34;
        case 0x18db38u: goto label_18db38;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db40u: goto label_18db40;
        case 0x18db44u: goto label_18db44;
        case 0x18db48u: goto label_18db48;
        case 0x18db4cu: goto label_18db4c;
        case 0x18db50u: goto label_18db50;
        case 0x18db54u: goto label_18db54;
        case 0x18db58u: goto label_18db58;
        case 0x18db5cu: goto label_18db5c;
        case 0x18db60u: goto label_18db60;
        case 0x18db64u: goto label_18db64;
        case 0x18db68u: goto label_18db68;
        case 0x18db6cu: goto label_18db6c;
        case 0x18db70u: goto label_18db70;
        case 0x18db74u: goto label_18db74;
        case 0x18db78u: goto label_18db78;
        case 0x18db7cu: goto label_18db7c;
        case 0x18db80u: goto label_18db80;
        case 0x18db84u: goto label_18db84;
        case 0x18db88u: goto label_18db88;
        case 0x18db8cu: goto label_18db8c;
        case 0x18db90u: goto label_18db90;
        case 0x18db94u: goto label_18db94;
        case 0x18db98u: goto label_18db98;
        case 0x18db9cu: goto label_18db9c;
        case 0x18dba0u: goto label_18dba0;
        case 0x18dba4u: goto label_18dba4;
        case 0x18dba8u: goto label_18dba8;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbb0u: goto label_18dbb0;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbc4u: goto label_18dbc4;
        case 0x18dbc8u: goto label_18dbc8;
        case 0x18dbccu: goto label_18dbcc;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbd4u: goto label_18dbd4;
        case 0x18dbd8u: goto label_18dbd8;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbecu: goto label_18dbec;
        case 0x18dbf0u: goto label_18dbf0;
        case 0x18dbf4u: goto label_18dbf4;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc04u: goto label_18dc04;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc0cu: goto label_18dc0c;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc18u: goto label_18dc18;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc20u: goto label_18dc20;
        case 0x18dc24u: goto label_18dc24;
        case 0x18dc28u: goto label_18dc28;
        case 0x18dc2cu: goto label_18dc2c;
        case 0x18dc30u: goto label_18dc30;
        case 0x18dc34u: goto label_18dc34;
        case 0x18dc38u: goto label_18dc38;
        case 0x18dc3cu: goto label_18dc3c;
        case 0x18dc40u: goto label_18dc40;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc48u: goto label_18dc48;
        case 0x18dc4cu: goto label_18dc4c;
        case 0x18dc50u: goto label_18dc50;
        case 0x18dc54u: goto label_18dc54;
        case 0x18dc58u: goto label_18dc58;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc60u: goto label_18dc60;
        case 0x18dc64u: goto label_18dc64;
        case 0x18dc68u: goto label_18dc68;
        case 0x18dc6cu: goto label_18dc6c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc74u: goto label_18dc74;
        case 0x18dc78u: goto label_18dc78;
        case 0x18dc7cu: goto label_18dc7c;
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc84u: goto label_18dc84;
        case 0x18dc88u: goto label_18dc88;
        case 0x18dc8cu: goto label_18dc8c;
        case 0x18dc90u: goto label_18dc90;
        case 0x18dc94u: goto label_18dc94;
        case 0x18dc98u: goto label_18dc98;
        case 0x18dc9cu: goto label_18dc9c;
        case 0x18dca0u: goto label_18dca0;
        case 0x18dca4u: goto label_18dca4;
        case 0x18dca8u: goto label_18dca8;
        case 0x18dcacu: goto label_18dcac;
        case 0x18dcb0u: goto label_18dcb0;
        case 0x18dcb4u: goto label_18dcb4;
        case 0x18dcb8u: goto label_18dcb8;
        case 0x18dcbcu: goto label_18dcbc;
        case 0x18dcc0u: goto label_18dcc0;
        case 0x18dcc4u: goto label_18dcc4;
        case 0x18dcc8u: goto label_18dcc8;
        case 0x18dcccu: goto label_18dccc;
        case 0x18dcd0u: goto label_18dcd0;
        case 0x18dcd4u: goto label_18dcd4;
        case 0x18dcd8u: goto label_18dcd8;
        case 0x18dcdcu: goto label_18dcdc;
        case 0x18dce0u: goto label_18dce0;
        case 0x18dce4u: goto label_18dce4;
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcecu: goto label_18dcec;
        case 0x18dcf0u: goto label_18dcf0;
        case 0x18dcf4u: goto label_18dcf4;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dcfcu: goto label_18dcfc;
        case 0x18dd00u: goto label_18dd00;
        case 0x18dd04u: goto label_18dd04;
        case 0x18dd08u: goto label_18dd08;
        case 0x18dd0cu: goto label_18dd0c;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd14u: goto label_18dd14;
        case 0x18dd18u: goto label_18dd18;
        case 0x18dd1cu: goto label_18dd1c;
        case 0x18dd20u: goto label_18dd20;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd28u: goto label_18dd28;
        case 0x18dd2cu: goto label_18dd2c;
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd34u: goto label_18dd34;
        case 0x18dd38u: goto label_18dd38;
        case 0x18dd3cu: goto label_18dd3c;
        case 0x18dd40u: goto label_18dd40;
        case 0x18dd44u: goto label_18dd44;
        case 0x18dd48u: goto label_18dd48;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd50u: goto label_18dd50;
        case 0x18dd54u: goto label_18dd54;
        case 0x18dd58u: goto label_18dd58;
        case 0x18dd5cu: goto label_18dd5c;
        case 0x18dd60u: goto label_18dd60;
        case 0x18dd64u: goto label_18dd64;
        case 0x18dd68u: goto label_18dd68;
        case 0x18dd6cu: goto label_18dd6c;
        case 0x18dd70u: goto label_18dd70;
        case 0x18dd74u: goto label_18dd74;
        case 0x18dd78u: goto label_18dd78;
        case 0x18dd7cu: goto label_18dd7c;
        case 0x18dd80u: goto label_18dd80;
        case 0x18dd84u: goto label_18dd84;
        case 0x18dd88u: goto label_18dd88;
        case 0x18dd8cu: goto label_18dd8c;
        case 0x18dd90u: goto label_18dd90;
        case 0x18dd94u: goto label_18dd94;
        case 0x18dd98u: goto label_18dd98;
        case 0x18dd9cu: goto label_18dd9c;
        case 0x18dda0u: goto label_18dda0;
        case 0x18dda4u: goto label_18dda4;
        case 0x18dda8u: goto label_18dda8;
        case 0x18ddacu: goto label_18ddac;
        case 0x18ddb0u: goto label_18ddb0;
        case 0x18ddb4u: goto label_18ddb4;
        case 0x18ddb8u: goto label_18ddb8;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddc0u: goto label_18ddc0;
        case 0x18ddc4u: goto label_18ddc4;
        case 0x18ddc8u: goto label_18ddc8;
        case 0x18ddccu: goto label_18ddcc;
        case 0x18ddd0u: goto label_18ddd0;
        case 0x18ddd4u: goto label_18ddd4;
        case 0x18ddd8u: goto label_18ddd8;
        case 0x18dddcu: goto label_18dddc;
        case 0x18dde0u: goto label_18dde0;
        case 0x18dde4u: goto label_18dde4;
        case 0x18dde8u: goto label_18dde8;
        case 0x18ddecu: goto label_18ddec;
        case 0x18ddf0u: goto label_18ddf0;
        case 0x18ddf4u: goto label_18ddf4;
        case 0x18ddf8u: goto label_18ddf8;
        case 0x18ddfcu: goto label_18ddfc;
        case 0x18de00u: goto label_18de00;
        case 0x18de04u: goto label_18de04;
        case 0x18de08u: goto label_18de08;
        case 0x18de0cu: goto label_18de0c;
        case 0x18de10u: goto label_18de10;
        case 0x18de14u: goto label_18de14;
        case 0x18de18u: goto label_18de18;
        case 0x18de1cu: goto label_18de1c;
        case 0x18de20u: goto label_18de20;
        case 0x18de24u: goto label_18de24;
        case 0x18de28u: goto label_18de28;
        case 0x18de2cu: goto label_18de2c;
        case 0x18de30u: goto label_18de30;
        case 0x18de34u: goto label_18de34;
        case 0x18de38u: goto label_18de38;
        case 0x18de3cu: goto label_18de3c;
        case 0x18de40u: goto label_18de40;
        case 0x18de44u: goto label_18de44;
        case 0x18de48u: goto label_18de48;
        case 0x18de4cu: goto label_18de4c;
        case 0x18de50u: goto label_18de50;
        case 0x18de54u: goto label_18de54;
        case 0x18de58u: goto label_18de58;
        case 0x18de5cu: goto label_18de5c;
        case 0x18de60u: goto label_18de60;
        case 0x18de64u: goto label_18de64;
        case 0x18de68u: goto label_18de68;
        case 0x18de6cu: goto label_18de6c;
        case 0x18de70u: goto label_18de70;
        case 0x18de74u: goto label_18de74;
        case 0x18de78u: goto label_18de78;
        case 0x18de7cu: goto label_18de7c;
        case 0x18de80u: goto label_18de80;
        case 0x18de84u: goto label_18de84;
        case 0x18de88u: goto label_18de88;
        case 0x18de8cu: goto label_18de8c;
        case 0x18de90u: goto label_18de90;
        case 0x18de94u: goto label_18de94;
        case 0x18de98u: goto label_18de98;
        case 0x18de9cu: goto label_18de9c;
        case 0x18dea0u: goto label_18dea0;
        case 0x18dea4u: goto label_18dea4;
        case 0x18dea8u: goto label_18dea8;
        case 0x18deacu: goto label_18deac;
        case 0x18deb0u: goto label_18deb0;
        case 0x18deb4u: goto label_18deb4;
        case 0x18deb8u: goto label_18deb8;
        case 0x18debcu: goto label_18debc;
        case 0x18dec0u: goto label_18dec0;
        case 0x18dec4u: goto label_18dec4;
        case 0x18dec8u: goto label_18dec8;
        case 0x18deccu: goto label_18decc;
        case 0x18ded0u: goto label_18ded0;
        case 0x18ded4u: goto label_18ded4;
        case 0x18ded8u: goto label_18ded8;
        case 0x18dedcu: goto label_18dedc;
        case 0x18dee0u: goto label_18dee0;
        case 0x18dee4u: goto label_18dee4;
        case 0x18dee8u: goto label_18dee8;
        case 0x18deecu: goto label_18deec;
        case 0x18def0u: goto label_18def0;
        case 0x18def4u: goto label_18def4;
        case 0x18def8u: goto label_18def8;
        case 0x18defcu: goto label_18defc;
        case 0x18df00u: goto label_18df00;
        case 0x18df04u: goto label_18df04;
        case 0x18df08u: goto label_18df08;
        case 0x18df0cu: goto label_18df0c;
        case 0x18df10u: goto label_18df10;
        case 0x18df14u: goto label_18df14;
        case 0x18df18u: goto label_18df18;
        case 0x18df1cu: goto label_18df1c;
        case 0x18df20u: goto label_18df20;
        case 0x18df24u: goto label_18df24;
        case 0x18df28u: goto label_18df28;
        case 0x18df2cu: goto label_18df2c;
        case 0x18df30u: goto label_18df30;
        case 0x18df34u: goto label_18df34;
        case 0x18df38u: goto label_18df38;
        case 0x18df3cu: goto label_18df3c;
        case 0x18df40u: goto label_18df40;
        case 0x18df44u: goto label_18df44;
        case 0x18df48u: goto label_18df48;
        case 0x18df4cu: goto label_18df4c;
        case 0x18df50u: goto label_18df50;
        case 0x18df54u: goto label_18df54;
        case 0x18df58u: goto label_18df58;
        case 0x18df5cu: goto label_18df5c;
        case 0x18df60u: goto label_18df60;
        case 0x18df64u: goto label_18df64;
        case 0x18df68u: goto label_18df68;
        case 0x18df6cu: goto label_18df6c;
        case 0x18df70u: goto label_18df70;
        case 0x18df74u: goto label_18df74;
        case 0x18df78u: goto label_18df78;
        case 0x18df7cu: goto label_18df7c;
        case 0x18df80u: goto label_18df80;
        case 0x18df84u: goto label_18df84;
        case 0x18df88u: goto label_18df88;
        case 0x18df8cu: goto label_18df8c;
        case 0x18df90u: goto label_18df90;
        case 0x18df94u: goto label_18df94;
        case 0x18df98u: goto label_18df98;
        case 0x18df9cu: goto label_18df9c;
        case 0x18dfa0u: goto label_18dfa0;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfa8u: goto label_18dfa8;
        case 0x18dfacu: goto label_18dfac;
        case 0x18dfb0u: goto label_18dfb0;
        case 0x18dfb4u: goto label_18dfb4;
        case 0x18dfb8u: goto label_18dfb8;
        case 0x18dfbcu: goto label_18dfbc;
        case 0x18dfc0u: goto label_18dfc0;
        case 0x18dfc4u: goto label_18dfc4;
        case 0x18dfc8u: goto label_18dfc8;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfd4u: goto label_18dfd4;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfdcu: goto label_18dfdc;
        case 0x18dfe0u: goto label_18dfe0;
        case 0x18dfe4u: goto label_18dfe4;
        case 0x18dfe8u: goto label_18dfe8;
        case 0x18dfecu: goto label_18dfec;
        case 0x18dff0u: goto label_18dff0;
        case 0x18dff4u: goto label_18dff4;
        case 0x18dff8u: goto label_18dff8;
        case 0x18dffcu: goto label_18dffc;
        case 0x18e000u: goto label_18e000;
        case 0x18e004u: goto label_18e004;
        case 0x18e008u: goto label_18e008;
        case 0x18e00cu: goto label_18e00c;
        case 0x18e010u: goto label_18e010;
        case 0x18e014u: goto label_18e014;
        case 0x18e018u: goto label_18e018;
        case 0x18e01cu: goto label_18e01c;
        case 0x18e020u: goto label_18e020;
        case 0x18e024u: goto label_18e024;
        case 0x18e028u: goto label_18e028;
        case 0x18e02cu: goto label_18e02c;
        case 0x18e030u: goto label_18e030;
        case 0x18e034u: goto label_18e034;
        case 0x18e038u: goto label_18e038;
        case 0x18e03cu: goto label_18e03c;
        case 0x18e040u: goto label_18e040;
        case 0x18e044u: goto label_18e044;
        case 0x18e048u: goto label_18e048;
        case 0x18e04cu: goto label_18e04c;
        case 0x18e050u: goto label_18e050;
        case 0x18e054u: goto label_18e054;
        case 0x18e058u: goto label_18e058;
        case 0x18e05cu: goto label_18e05c;
        case 0x18e060u: goto label_18e060;
        case 0x18e064u: goto label_18e064;
        case 0x18e068u: goto label_18e068;
        case 0x18e06cu: goto label_18e06c;
        case 0x18e070u: goto label_18e070;
        case 0x18e074u: goto label_18e074;
        case 0x18e078u: goto label_18e078;
        case 0x18e07cu: goto label_18e07c;
        case 0x18e080u: goto label_18e080;
        case 0x18e084u: goto label_18e084;
        case 0x18e088u: goto label_18e088;
        case 0x18e08cu: goto label_18e08c;
        case 0x18e090u: goto label_18e090;
        case 0x18e094u: goto label_18e094;
        case 0x18e098u: goto label_18e098;
        case 0x18e09cu: goto label_18e09c;
        case 0x18e0a0u: goto label_18e0a0;
        case 0x18e0a4u: goto label_18e0a4;
        case 0x18e0a8u: goto label_18e0a8;
        case 0x18e0acu: goto label_18e0ac;
        case 0x18e0b0u: goto label_18e0b0;
        case 0x18e0b4u: goto label_18e0b4;
        case 0x18e0b8u: goto label_18e0b8;
        case 0x18e0bcu: goto label_18e0bc;
        case 0x18e0c0u: goto label_18e0c0;
        case 0x18e0c4u: goto label_18e0c4;
        case 0x18e0c8u: goto label_18e0c8;
        case 0x18e0ccu: goto label_18e0cc;
        case 0x18e0d0u: goto label_18e0d0;
        case 0x18e0d4u: goto label_18e0d4;
        case 0x18e0d8u: goto label_18e0d8;
        case 0x18e0dcu: goto label_18e0dc;
        case 0x18e0e0u: goto label_18e0e0;
        case 0x18e0e4u: goto label_18e0e4;
        case 0x18e0e8u: goto label_18e0e8;
        case 0x18e0ecu: goto label_18e0ec;
        case 0x18e0f0u: goto label_18e0f0;
        case 0x18e0f4u: goto label_18e0f4;
        case 0x18e0f8u: goto label_18e0f8;
        case 0x18e0fcu: goto label_18e0fc;
        case 0x18e100u: goto label_18e100;
        case 0x18e104u: goto label_18e104;
        case 0x18e108u: goto label_18e108;
        case 0x18e10cu: goto label_18e10c;
        case 0x18e110u: goto label_18e110;
        case 0x18e114u: goto label_18e114;
        case 0x18e118u: goto label_18e118;
        case 0x18e11cu: goto label_18e11c;
        case 0x18e120u: goto label_18e120;
        case 0x18e124u: goto label_18e124;
        case 0x18e128u: goto label_18e128;
        case 0x18e12cu: goto label_18e12c;
        case 0x18e130u: goto label_18e130;
        case 0x18e134u: goto label_18e134;
        case 0x18e138u: goto label_18e138;
        case 0x18e13cu: goto label_18e13c;
        case 0x18e140u: goto label_18e140;
        case 0x18e144u: goto label_18e144;
        case 0x18e148u: goto label_18e148;
        case 0x18e14cu: goto label_18e14c;
        case 0x18e150u: goto label_18e150;
        case 0x18e154u: goto label_18e154;
        case 0x18e158u: goto label_18e158;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e160u: goto label_18e160;
        case 0x18e164u: goto label_18e164;
        case 0x18e168u: goto label_18e168;
        case 0x18e16cu: goto label_18e16c;
        case 0x18e170u: goto label_18e170;
        case 0x18e174u: goto label_18e174;
        case 0x18e178u: goto label_18e178;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e180u: goto label_18e180;
        case 0x18e184u: goto label_18e184;
        case 0x18e188u: goto label_18e188;
        case 0x18e18cu: goto label_18e18c;
        case 0x18e190u: goto label_18e190;
        case 0x18e194u: goto label_18e194;
        case 0x18e198u: goto label_18e198;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1a0u: goto label_18e1a0;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1a8u: goto label_18e1a8;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1b4u: goto label_18e1b4;
        case 0x18e1b8u: goto label_18e1b8;
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1c0u: goto label_18e1c0;
        case 0x18e1c4u: goto label_18e1c4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1ccu: goto label_18e1cc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1d4u: goto label_18e1d4;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1dcu: goto label_18e1dc;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1e4u: goto label_18e1e4;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e1ecu: goto label_18e1ec;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f4u: goto label_18e1f4;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e1fcu: goto label_18e1fc;
        case 0x18e200u: goto label_18e200;
        case 0x18e204u: goto label_18e204;
        case 0x18e208u: goto label_18e208;
        case 0x18e20cu: goto label_18e20c;
        case 0x18e210u: goto label_18e210;
        case 0x18e214u: goto label_18e214;
        case 0x18e218u: goto label_18e218;
        case 0x18e21cu: goto label_18e21c;
        case 0x18e220u: goto label_18e220;
        case 0x18e224u: goto label_18e224;
        case 0x18e228u: goto label_18e228;
        case 0x18e22cu: goto label_18e22c;
        case 0x18e230u: goto label_18e230;
        case 0x18e234u: goto label_18e234;
        case 0x18e238u: goto label_18e238;
        case 0x18e23cu: goto label_18e23c;
        case 0x18e240u: goto label_18e240;
        case 0x18e244u: goto label_18e244;
        case 0x18e248u: goto label_18e248;
        case 0x18e24cu: goto label_18e24c;
        case 0x18e250u: goto label_18e250;
        case 0x18e254u: goto label_18e254;
        case 0x18e258u: goto label_18e258;
        case 0x18e25cu: goto label_18e25c;
        case 0x18e260u: goto label_18e260;
        case 0x18e264u: goto label_18e264;
        case 0x18e268u: goto label_18e268;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e270u: goto label_18e270;
        case 0x18e274u: goto label_18e274;
        case 0x18e278u: goto label_18e278;
        case 0x18e27cu: goto label_18e27c;
        case 0x18e280u: goto label_18e280;
        case 0x18e284u: goto label_18e284;
        case 0x18e288u: goto label_18e288;
        case 0x18e28cu: goto label_18e28c;
        case 0x18e290u: goto label_18e290;
        case 0x18e294u: goto label_18e294;
        case 0x18e298u: goto label_18e298;
        case 0x18e29cu: goto label_18e29c;
        case 0x18e2a0u: goto label_18e2a0;
        case 0x18e2a4u: goto label_18e2a4;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2acu: goto label_18e2ac;
        case 0x18e2b0u: goto label_18e2b0;
        case 0x18e2b4u: goto label_18e2b4;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2c4u: goto label_18e2c4;
        case 0x18e2c8u: goto label_18e2c8;
        case 0x18e2ccu: goto label_18e2cc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2d8u: goto label_18e2d8;
        case 0x18e2dcu: goto label_18e2dc;
        case 0x18e2e0u: goto label_18e2e0;
        case 0x18e2e4u: goto label_18e2e4;
        case 0x18e2e8u: goto label_18e2e8;
        case 0x18e2ecu: goto label_18e2ec;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e2f8u: goto label_18e2f8;
        case 0x18e2fcu: goto label_18e2fc;
        case 0x18e300u: goto label_18e300;
        case 0x18e304u: goto label_18e304;
        case 0x18e308u: goto label_18e308;
        case 0x18e30cu: goto label_18e30c;
        case 0x18e310u: goto label_18e310;
        case 0x18e314u: goto label_18e314;
        case 0x18e318u: goto label_18e318;
        case 0x18e31cu: goto label_18e31c;
        case 0x18e320u: goto label_18e320;
        case 0x18e324u: goto label_18e324;
        case 0x18e328u: goto label_18e328;
        case 0x18e32cu: goto label_18e32c;
        case 0x18e330u: goto label_18e330;
        case 0x18e334u: goto label_18e334;
        case 0x18e338u: goto label_18e338;
        case 0x18e33cu: goto label_18e33c;
        case 0x18e340u: goto label_18e340;
        case 0x18e344u: goto label_18e344;
        case 0x18e348u: goto label_18e348;
        case 0x18e34cu: goto label_18e34c;
        case 0x18e350u: goto label_18e350;
        case 0x18e354u: goto label_18e354;
        case 0x18e358u: goto label_18e358;
        case 0x18e35cu: goto label_18e35c;
        case 0x18e360u: goto label_18e360;
        case 0x18e364u: goto label_18e364;
        case 0x18e368u: goto label_18e368;
        default: break;
    }

    ctx->pc = 0x18d390u;

label_18d390:
    // 0x18d390: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x18d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_18d394:
    // 0x18d394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18d398:
    // 0x18d398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18d39c:
    // 0x18d39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18d3a0:
    // 0x18d3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18d3a4:
    // 0x18d3a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d3a8:
    // 0x18d3a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18d3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d3ac:
    // 0x18d3ac: 0xc063dd4  jal         func_18F750
label_18d3b0:
    if (ctx->pc == 0x18D3B0u) {
        ctx->pc = 0x18D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ACu;
        // 0x18d3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B4u;
        goto label_18d3b4;
    }
    ctx->pc = 0x18D3ACu;
    SET_GPR_U32(ctx, 31, 0x18D3B4u);
    ctx->pc = 0x18D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3ACu;
    // 0x18d3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D3ACu, 0x18D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D3B4u;
label_18d3b4:
    // 0x18d3b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_18d3b8:
    // 0x18d3b8: 0x104303e5  beq         $v0, $v1, . + 4 + (0x3E5 << 2)
label_18d3bc:
    if (ctx->pc == 0x18D3BCu) {
        ctx->pc = 0x18D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B8u;
        // 0x18d3bc: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3C0u;
        goto label_18d3c0;
    }
    ctx->pc = 0x18D3B8u;
    {
        const bool branch_taken_0x18d3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B8u;
        // 0x18d3bc: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3b8) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D3C0u;
label_18d3c0:
    // 0x18d3c0: 0x104303e1  beq         $v0, $v1, . + 4 + (0x3E1 << 2)
label_18d3c4:
    if (ctx->pc == 0x18D3C4u) {
        ctx->pc = 0x18D3C8u;
        goto label_18d3c8;
    }
    ctx->pc = 0x18D3C0u;
    {
        const bool branch_taken_0x18d3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d3c0) {
            ctx->pc = 0x18E348u;
            goto label_18e348;
        }
    }
    ctx->pc = 0x18D3C8u;
label_18d3c8:
    // 0x18d3c8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x18d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_18d3cc:
    // 0x18d3cc: 0x104303b8  beq         $v0, $v1, . + 4 + (0x3B8 << 2)
label_18d3d0:
    if (ctx->pc == 0x18D3D0u) {
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3D4u;
        goto label_18d3d4;
    }
    ctx->pc = 0x18D3CCu;
    {
        const bool branch_taken_0x18d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3CCu;
        // 0x18d3d0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3cc) {
            ctx->pc = 0x18E2B0u;
            goto label_18e2b0;
        }
    }
    ctx->pc = 0x18D3D4u;
label_18d3d4:
    // 0x18d3d4: 0x1043039a  beq         $v0, $v1, . + 4 + (0x39A << 2)
label_18d3d8:
    if (ctx->pc == 0x18D3D8u) {
        ctx->pc = 0x18D3DCu;
        goto label_18d3dc;
    }
    ctx->pc = 0x18D3D4u;
    {
        const bool branch_taken_0x18d3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d3d4) {
            ctx->pc = 0x18E240u;
            goto label_18e240;
        }
    }
    ctx->pc = 0x18D3DCu;
label_18d3dc:
    // 0x18d3dc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18d3e0:
    // 0x18d3e0: 0x1043034c  beq         $v0, $v1, . + 4 + (0x34C << 2)
label_18d3e4:
    if (ctx->pc == 0x18D3E4u) {
        ctx->pc = 0x18D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3E0u;
        // 0x18d3e4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3E8u;
        goto label_18d3e8;
    }
    ctx->pc = 0x18D3E0u;
    {
        const bool branch_taken_0x18d3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3E0u;
        // 0x18d3e4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3e0) {
            ctx->pc = 0x18E114u;
            goto label_18e114;
        }
    }
    ctx->pc = 0x18D3E8u;
label_18d3e8:
    // 0x18d3e8: 0x1043029a  beq         $v0, $v1, . + 4 + (0x29A << 2)
label_18d3ec:
    if (ctx->pc == 0x18D3ECu) {
        ctx->pc = 0x18D3F0u;
        goto label_18d3f0;
    }
    ctx->pc = 0x18D3E8u;
    {
        const bool branch_taken_0x18d3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d3e8) {
            ctx->pc = 0x18DE54u;
            goto label_18de54;
        }
    }
    ctx->pc = 0x18D3F0u;
label_18d3f0:
    // 0x18d3f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_18d3f4:
    // 0x18d3f4: 0x10430266  beq         $v0, $v1, . + 4 + (0x266 << 2)
label_18d3f8:
    if (ctx->pc == 0x18D3F8u) {
        ctx->pc = 0x18D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3F4u;
        // 0x18d3f8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3FCu;
        goto label_18d3fc;
    }
    ctx->pc = 0x18D3F4u;
    {
        const bool branch_taken_0x18d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3F4u;
        // 0x18d3f8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d3f4) {
            ctx->pc = 0x18DD90u;
            goto label_18dd90;
        }
    }
    ctx->pc = 0x18D3FCu;
label_18d3fc:
    // 0x18d3fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18d400:
    // 0x18d400: 0x10430216  beq         $v0, $v1, . + 4 + (0x216 << 2)
label_18d404:
    if (ctx->pc == 0x18D404u) {
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D400u;
        // 0x18d404: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D408u;
        goto label_18d408;
    }
    ctx->pc = 0x18D400u;
    {
        const bool branch_taken_0x18d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D400u;
        // 0x18d404: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d400) {
            ctx->pc = 0x18DC5Cu;
            goto label_18dc5c;
        }
    }
    ctx->pc = 0x18D408u;
label_18d408:
    // 0x18d408: 0x104301e4  beq         $v0, $v1, . + 4 + (0x1E4 << 2)
label_18d40c:
    if (ctx->pc == 0x18D40Cu) {
        ctx->pc = 0x18D410u;
        goto label_18d410;
    }
    ctx->pc = 0x18D408u;
    {
        const bool branch_taken_0x18d408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d408) {
            ctx->pc = 0x18DB9Cu;
            goto label_18db9c;
        }
    }
    ctx->pc = 0x18D410u;
label_18d410:
    // 0x18d410: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18d414:
    // 0x18d414: 0x1043017f  beq         $v0, $v1, . + 4 + (0x17F << 2)
label_18d418:
    if (ctx->pc == 0x18D418u) {
        ctx->pc = 0x18D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D414u;
        // 0x18d418: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D41Cu;
        goto label_18d41c;
    }
    ctx->pc = 0x18D414u;
    {
        const bool branch_taken_0x18d414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D414u;
        // 0x18d418: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d414) {
            ctx->pc = 0x18DA14u;
            goto label_18da14;
        }
    }
    ctx->pc = 0x18D41Cu;
label_18d41c:
    // 0x18d41c: 0x1043013e  beq         $v0, $v1, . + 4 + (0x13E << 2)
label_18d420:
    if (ctx->pc == 0x18D420u) {
        ctx->pc = 0x18D424u;
        goto label_18d424;
    }
    ctx->pc = 0x18D41Cu;
    {
        const bool branch_taken_0x18d41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d41c) {
            ctx->pc = 0x18D918u;
            goto label_18d918;
        }
    }
    ctx->pc = 0x18D424u;
label_18d424:
    // 0x18d424: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18d424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18d428:
    // 0x18d428: 0x104300a0  beq         $v0, $v1, . + 4 + (0xA0 << 2)
label_18d42c:
    if (ctx->pc == 0x18D42Cu) {
        ctx->pc = 0x18D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D428u;
        // 0x18d42c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D430u;
        goto label_18d430;
    }
    ctx->pc = 0x18D428u;
    {
        const bool branch_taken_0x18d428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D428u;
        // 0x18d42c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d428) {
            ctx->pc = 0x18D6ACu;
            goto label_18d6ac;
        }
    }
    ctx->pc = 0x18D430u;
label_18d430:
    // 0x18d430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18d434:
    // 0x18d434: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
label_18d438:
    if (ctx->pc == 0x18D438u) {
        ctx->pc = 0x18D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D434u;
        // 0x18d438: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D43Cu;
        goto label_18d43c;
    }
    ctx->pc = 0x18D434u;
    {
        const bool branch_taken_0x18d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D434u;
        // 0x18d438: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d434) {
            ctx->pc = 0x18D5B8u;
            goto label_18d5b8;
        }
    }
    ctx->pc = 0x18D43Cu;
label_18d43c:
    // 0x18d43c: 0x1044004d  beq         $v0, $a0, . + 4 + (0x4D << 2)
label_18d440:
    if (ctx->pc == 0x18D440u) {
        ctx->pc = 0x18D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D43Cu;
        // 0x18d440: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D444u;
        goto label_18d444;
    }
    ctx->pc = 0x18D43Cu;
    {
        const bool branch_taken_0x18d43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x18D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D43Cu;
        // 0x18d440: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d43c) {
            ctx->pc = 0x18D574u;
            goto label_18d574;
        }
    }
    ctx->pc = 0x18D444u;
label_18d444:
    // 0x18d444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d448:
    // 0x18d448: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_18d44c:
    if (ctx->pc == 0x18D44Cu) {
        ctx->pc = 0x18D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D448u;
        // 0x18d44c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D450u;
        goto label_18d450;
    }
    ctx->pc = 0x18D448u;
    {
        const bool branch_taken_0x18d448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D448u;
        // 0x18d44c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d448) {
            ctx->pc = 0x18D4B4u;
            goto label_18d4b4;
        }
    }
    ctx->pc = 0x18D450u;
label_18d450:
    // 0x18d450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18d454:
    if (ctx->pc == 0x18D454u) {
        ctx->pc = 0x18D458u;
        goto label_18d458;
    }
    ctx->pc = 0x18D450u;
    {
        const bool branch_taken_0x18d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d450) {
            ctx->pc = 0x18D460u;
            goto label_18d460;
        }
    }
    ctx->pc = 0x18D458u;
label_18d458:
    // 0x18d458: 0x100003be  b           . + 4 + (0x3BE << 2)
label_18d45c:
    if (ctx->pc == 0x18D45Cu) {
        ctx->pc = 0x18D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D458u;
        // 0x18d45c: 0xae20045c  sw          $zero, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D460u;
        goto label_18d460;
    }
    ctx->pc = 0x18D458u;
    {
        const bool branch_taken_0x18d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D458u;
        // 0x18d45c: 0xae20045c  sw          $zero, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d458) {
            ctx->pc = 0x18E354u;
            goto label_18e354;
        }
    }
    ctx->pc = 0x18D460u;
label_18d460:
    // 0x18d460: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18d460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
label_18d464:
    // 0x18d464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d468:
    // 0x18d468: 0xae200460  sw          $zero, 0x460($s1)
    ctx->pc = 0x18d468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1120), GPR_U32(ctx, 0));
label_18d46c:
    // 0x18d46c: 0xae200464  sw          $zero, 0x464($s1)
    ctx->pc = 0x18d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1124), GPR_U32(ctx, 0));
label_18d470:
    // 0x18d470: 0xae20046c  sw          $zero, 0x46C($s1)
    ctx->pc = 0x18d470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 0));
label_18d474:
    // 0x18d474: 0xae200468  sw          $zero, 0x468($s1)
    ctx->pc = 0x18d474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 0));
label_18d478:
    // 0x18d478: 0xae202714  sw          $zero, 0x2714($s1)
    ctx->pc = 0x18d478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 0));
label_18d47c:
    // 0x18d47c: 0xae202710  sw          $zero, 0x2710($s1)
    ctx->pc = 0x18d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
label_18d480:
    // 0x18d480: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18d484:
    // 0x18d484: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d488:
    // 0x18d488: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d48c:
    // 0x18d48c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d490:
    // 0x18d490: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d494:
    // 0x18d494: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d498:
    // 0x18d498: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d49c:
    // 0x18d49c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d4a0:
    // 0x18d4a0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18d4a4:
    // 0x18d4a4: 0xc063e14  jal         func_18F850
label_18d4a8:
    if (ctx->pc == 0x18D4A8u) {
        ctx->pc = 0x18D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A4u;
        // 0x18d4a8: 0xae220480  sw          $v0, 0x480($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4ACu;
        goto label_18d4ac;
    }
    ctx->pc = 0x18D4A4u;
    SET_GPR_U32(ctx, 31, 0x18D4ACu);
    ctx->pc = 0x18D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4A4u;
    // 0x18d4a8: 0xae220480  sw          $v0, 0x480($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D4A4u, 0x18D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4ACu;
label_18d4ac:
    // 0x18d4ac: 0x100003a8  b           . + 4 + (0x3A8 << 2)
label_18d4b0:
    if (ctx->pc == 0x18D4B0u) {
        ctx->pc = 0x18D4B4u;
        goto label_18d4b4;
    }
    ctx->pc = 0x18D4ACu;
    {
        const bool branch_taken_0x18d4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4ac) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D4B4u;
label_18d4b4:
    // 0x18d4b4: 0xc05f878  jal         func_17E1E0
label_18d4b8:
    if (ctx->pc == 0x18D4B8u) {
        ctx->pc = 0x18D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B4u;
        // 0x18d4b8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4BCu;
        goto label_18d4bc;
    }
    ctx->pc = 0x18D4B4u;
    SET_GPR_U32(ctx, 31, 0x18D4BCu);
    ctx->pc = 0x18D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4B4u;
    // 0x18d4b8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D4B4u, 0x18D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4BCu;
label_18d4bc:
    // 0x18d4bc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18d4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d4c0:
    // 0x18d4c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18d4c4:
    // 0x18d4c4: 0x320f809  jalr        $t9
label_18d4c8:
    if (ctx->pc == 0x18D4C8u) {
        ctx->pc = 0x18D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C4u;
        // 0x18d4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4CCu;
        goto label_18d4cc;
    }
    ctx->pc = 0x18D4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18D4CCu);
        ctx->pc = 0x18D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C4u;
        // 0x18d4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D4C4u, 0x18D4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D4CCu;
label_18d4cc:
    // 0x18d4cc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_18d4d0:
    if (ctx->pc == 0x18D4D0u) {
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4CCu;
        // 0x18d4d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4D4u;
        goto label_18d4d4;
    }
    ctx->pc = 0x18D4CCu;
    {
        const bool branch_taken_0x18d4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4CCu;
        // 0x18d4d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4cc) {
            ctx->pc = 0x18D55Cu;
            goto label_18d55c;
        }
    }
    ctx->pc = 0x18D4D4u;
label_18d4d4:
    // 0x18d4d4: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18d4d8:
    // 0x18d4d8: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d4dc:
    // 0x18d4dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d4e0:
    // 0x18d4e0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d4e4:
    // 0x18d4e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d4e8:
    // 0x18d4e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d4ec:
    // 0x18d4ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d4f0:
    // 0x18d4f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d4f4:
    // 0x18d4f4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x18d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d4f8:
    // 0x18d4f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_18d4fc:
    if (ctx->pc == 0x18D4FCu) {
        ctx->pc = 0x18D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F8u;
        // 0x18d4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D500u;
        goto label_18d500;
    }
    ctx->pc = 0x18D4F8u;
    {
        const bool branch_taken_0x18d4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F8u;
        // 0x18d4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4f8) {
            ctx->pc = 0x18D550u;
            goto label_18d550;
        }
    }
    ctx->pc = 0x18D500u;
label_18d500:
    // 0x18d500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18d500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18d504:
    // 0x18d504: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d508:
    // 0x18d508: 0xc05f878  jal         func_17E1E0
label_18d50c:
    if (ctx->pc == 0x18D50Cu) {
        ctx->pc = 0x18D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D508u;
        // 0x18d50c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D510u;
        goto label_18d510;
    }
    ctx->pc = 0x18D508u;
    SET_GPR_U32(ctx, 31, 0x18D510u);
    ctx->pc = 0x18D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D508u;
    // 0x18d50c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D508u, 0x18D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D510u;
label_18d510:
    // 0x18d510: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18d514:
    // 0x18d514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d518:
    // 0x18d518: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d51c:
    // 0x18d51c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d520:
    // 0x18d520: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d524:
    // 0x18d524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d528:
    // 0x18d528: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d52c:
    // 0x18d52c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d530:
    // 0x18d530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d534:
    // 0x18d534: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x18d534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d538:
    // 0x18d538: 0xc0532f4  jal         func_14CBD0
label_18d53c:
    if (ctx->pc == 0x18D53Cu) {
        ctx->pc = 0x18D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D538u;
        // 0x18d53c: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D540u;
        goto label_18d540;
    }
    ctx->pc = 0x18D538u;
    SET_GPR_U32(ctx, 31, 0x18D540u);
    ctx->pc = 0x18D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D538u;
    // 0x18d53c: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18D538u, 0x18D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D540u;
label_18d540:
    // 0x18d540: 0xc063e14  jal         func_18F850
label_18d544:
    if (ctx->pc == 0x18D544u) {
        ctx->pc = 0x18D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D540u;
        // 0x18d544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D548u;
        goto label_18d548;
    }
    ctx->pc = 0x18D540u;
    SET_GPR_U32(ctx, 31, 0x18D548u);
    ctx->pc = 0x18D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D540u;
    // 0x18d544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D540u, 0x18D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D548u;
label_18d548:
    // 0x18d548: 0x10000003  b           . + 4 + (0x3 << 2)
label_18d54c:
    if (ctx->pc == 0x18D54Cu) {
        ctx->pc = 0x18D550u;
        goto label_18d550;
    }
    ctx->pc = 0x18D548u;
    {
        const bool branch_taken_0x18d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d548) {
            ctx->pc = 0x18D558u;
            goto label_18d558;
        }
    }
    ctx->pc = 0x18D550u;
label_18d550:
    // 0x18d550: 0xc063e08  jal         func_18F820
label_18d554:
    if (ctx->pc == 0x18D554u) {
        ctx->pc = 0x18D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D550u;
        // 0x18d554: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D558u;
        goto label_18d558;
    }
    ctx->pc = 0x18D550u;
    SET_GPR_U32(ctx, 31, 0x18D558u);
    ctx->pc = 0x18D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D550u;
    // 0x18d554: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D550u, 0x18D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D558u;
label_18d558:
    // 0x18d558: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d55c:
    // 0x18d55c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d560:
    // 0x18d560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d564:
    // 0x18d564: 0xc06333c  jal         func_18CCF0
label_18d568:
    if (ctx->pc == 0x18D568u) {
        ctx->pc = 0x18D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D564u;
        // 0x18d568: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D56Cu;
        goto label_18d56c;
    }
    ctx->pc = 0x18D564u;
    SET_GPR_U32(ctx, 31, 0x18D56Cu);
    ctx->pc = 0x18D568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D564u;
    // 0x18d568: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18D564u, 0x18D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D56Cu;
label_18d56c:
    // 0x18d56c: 0x10000378  b           . + 4 + (0x378 << 2)
label_18d570:
    if (ctx->pc == 0x18D570u) {
        ctx->pc = 0x18D574u;
        goto label_18d574;
    }
    ctx->pc = 0x18D56Cu;
    {
        const bool branch_taken_0x18d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d56c) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D574u;
label_18d574:
    // 0x18d574: 0xc05f878  jal         func_17E1E0
label_18d578:
    if (ctx->pc == 0x18D578u) {
        ctx->pc = 0x18D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D574u;
        // 0x18d578: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D57Cu;
        goto label_18d57c;
    }
    ctx->pc = 0x18D574u;
    SET_GPR_U32(ctx, 31, 0x18D57Cu);
    ctx->pc = 0x18D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D574u;
    // 0x18d578: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D574u, 0x18D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D57Cu;
label_18d57c:
    // 0x18d57c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18d57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d580:
    // 0x18d580: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18d580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18d584:
    // 0x18d584: 0x320f809  jalr        $t9
label_18d588:
    if (ctx->pc == 0x18D588u) {
        ctx->pc = 0x18D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D584u;
        // 0x18d588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D58Cu;
        goto label_18d58c;
    }
    ctx->pc = 0x18D584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18D58Cu);
        ctx->pc = 0x18D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D584u;
        // 0x18d588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D584u, 0x18D58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D58Cu;
label_18d58c:
    // 0x18d58c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18d590:
    if (ctx->pc == 0x18D590u) {
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D594u;
        goto label_18d594;
    }
    ctx->pc = 0x18D58Cu;
    {
        const bool branch_taken_0x18d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D58Cu;
        // 0x18d590: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d58c) {
            ctx->pc = 0x18D5A0u;
            goto label_18d5a0;
        }
    }
    ctx->pc = 0x18D594u;
label_18d594:
    // 0x18d594: 0xc063e14  jal         func_18F850
label_18d598:
    if (ctx->pc == 0x18D598u) {
        ctx->pc = 0x18D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D594u;
        // 0x18d598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D59Cu;
        goto label_18d59c;
    }
    ctx->pc = 0x18D594u;
    SET_GPR_U32(ctx, 31, 0x18D59Cu);
    ctx->pc = 0x18D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D594u;
    // 0x18d598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D594u, 0x18D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D59Cu;
label_18d59c:
    // 0x18d59c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d5a0:
    // 0x18d5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d5a4:
    // 0x18d5a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d5a8:
    // 0x18d5a8: 0xc06333c  jal         func_18CCF0
label_18d5ac:
    if (ctx->pc == 0x18D5ACu) {
        ctx->pc = 0x18D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5A8u;
        // 0x18d5ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5B0u;
        goto label_18d5b0;
    }
    ctx->pc = 0x18D5A8u;
    SET_GPR_U32(ctx, 31, 0x18D5B0u);
    ctx->pc = 0x18D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5A8u;
    // 0x18d5ac: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18D5A8u, 0x18D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5B0u;
label_18d5b0:
    // 0x18d5b0: 0x10000367  b           . + 4 + (0x367 << 2)
label_18d5b4:
    if (ctx->pc == 0x18D5B4u) {
        ctx->pc = 0x18D5B8u;
        goto label_18d5b8;
    }
    ctx->pc = 0x18D5B0u;
    {
        const bool branch_taken_0x18d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5b0) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D5B8u;
label_18d5b8:
    // 0x18d5b8: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x18d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d5bc:
    // 0x18d5bc: 0xae220458  sw          $v0, 0x458($s1)
    ctx->pc = 0x18d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 2));
label_18d5c0:
    // 0x18d5c0: 0x8e22271c  lw          $v0, 0x271C($s1)
    ctx->pc = 0x18d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18d5c4:
    // 0x18d5c4: 0xc062d50  jal         func_18B540
label_18d5c8:
    if (ctx->pc == 0x18D5C8u) {
        ctx->pc = 0x18D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C4u;
        // 0x18d5c8: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5CCu;
        goto label_18d5cc;
    }
    ctx->pc = 0x18D5C4u;
    SET_GPR_U32(ctx, 31, 0x18D5CCu);
    ctx->pc = 0x18D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5C4u;
    // 0x18d5c8: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18D5C4u, 0x18D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5CCu;
label_18d5cc:
    // 0x18d5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d5d0:
    // 0x18d5d0: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_18d5d4:
    // 0x18d5d4: 0xc062b5c  jal         func_18AD70
label_18d5d8:
    if (ctx->pc == 0x18D5D8u) {
        ctx->pc = 0x18D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5D4u;
        // 0x18d5d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5DCu;
        goto label_18d5dc;
    }
    ctx->pc = 0x18D5D4u;
    SET_GPR_U32(ctx, 31, 0x18D5DCu);
    ctx->pc = 0x18D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5D4u;
    // 0x18d5d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18D5D4u, 0x18D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5DCu;
label_18d5dc:
    // 0x18d5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d5e0:
    // 0x18d5e0: 0xc063e08  jal         func_18F820
label_18d5e4:
    if (ctx->pc == 0x18D5E4u) {
        ctx->pc = 0x18D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5E0u;
        // 0x18d5e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5E8u;
        goto label_18d5e8;
    }
    ctx->pc = 0x18D5E0u;
    SET_GPR_U32(ctx, 31, 0x18D5E8u);
    ctx->pc = 0x18D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5E0u;
    // 0x18d5e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D5E0u, 0x18D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5E8u;
label_18d5e8:
    // 0x18d5e8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_18d5ec:
    // 0x18d5ec: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x18d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_18d5f0:
    // 0x18d5f0: 0x24a528d0  addiu       $a1, $a1, 0x28D0
    ctx->pc = 0x18d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10448));
label_18d5f4:
    // 0x18d5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d5f8:
    // 0x18d5f8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18d5f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_18d5fc:
    // 0x18d5fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d600:
    // 0x18d600: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18d600u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18d604:
    // 0x18d604: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18d604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18d608:
    // 0x18d608: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18d60c:
    // 0x18d60c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18d610:
    // 0x18d610: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18d614:
    // 0x18d614: 0xc063e40  jal         func_18F900
label_18d618:
    if (ctx->pc == 0x18D618u) {
        ctx->pc = 0x18D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D614u;
        // 0x18d618: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D61Cu;
        goto label_18d61c;
    }
    ctx->pc = 0x18D614u;
    SET_GPR_U32(ctx, 31, 0x18D61Cu);
    ctx->pc = 0x18D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D614u;
    // 0x18d618: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18D614u, 0x18D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D61Cu;
label_18d61c:
    // 0x18d61c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18d620:
    // 0x18d620: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d624:
    // 0x18d624: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18d624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18d628:
    // 0x18d628: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x18d628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_18d62c:
    // 0x18d62c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18d62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18d630:
    // 0x18d630: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18d634:
    // 0x18d634: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18d634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
label_18d638:
    // 0x18d638: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18d63c:
    // 0x18d63c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18d640:
    // 0x18d640: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18d644:
    // 0x18d644: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18d644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18d648:
    // 0x18d648: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18d648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18d64c:
    // 0x18d64c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18d650:
    // 0x18d650: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18d654:
    // 0x18d654: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18d658:
    // 0x18d658: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18d658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_18d65c:
    // 0x18d65c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18d660:
    // 0x18d660: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18d664:
    // 0x18d664: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18d664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_18d668:
    // 0x18d668: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_18d66c:
    // 0x18d66c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18d670:
    // 0x18d670: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18d674:
    // 0x18d674: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18d678:
    // 0x18d678: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18d67c:
    // 0x18d67c: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
label_18d680:
    // 0x18d680: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18d684:
    // 0x18d684: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18d688:
    // 0x18d688: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d68c:
    // 0x18d68c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d690:
    // 0x18d690: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18d694:
    // 0x18d694: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_18d698:
    // 0x18d698: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18d698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
label_18d69c:
    // 0x18d69c: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18d69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
label_18d6a0:
    // 0x18d6a0: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18d6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
label_18d6a4:
    // 0x18d6a4: 0x1000032a  b           . + 4 + (0x32A << 2)
label_18d6a8:
    if (ctx->pc == 0x18D6A8u) {
        ctx->pc = 0x18D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A4u;
        // 0x18d6a8: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6ACu;
        goto label_18d6ac;
    }
    ctx->pc = 0x18D6A4u;
    {
        const bool branch_taken_0x18d6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A4u;
        // 0x18d6a8: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6a4) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D6ACu;
label_18d6ac:
    // 0x18d6ac: 0xc07d3ac  jal         func_1F4EB0
label_18d6b0:
    if (ctx->pc == 0x18D6B0u) {
        ctx->pc = 0x18D6B4u;
        goto label_18d6b4;
    }
    ctx->pc = 0x18D6ACu;
    SET_GPR_U32(ctx, 31, 0x18D6B4u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x18D6ACu, 0x18D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6B4u;
label_18d6b4:
    // 0x18d6b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18d6b8:
    // 0x18d6b8: 0xc07d334  jal         func_1F4CD0
label_18d6bc:
    if (ctx->pc == 0x18D6BCu) {
        ctx->pc = 0x18D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6B8u;
        // 0x18d6bc: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6C0u;
        goto label_18d6c0;
    }
    ctx->pc = 0x18D6B8u;
    SET_GPR_U32(ctx, 31, 0x18D6C0u);
    ctx->pc = 0x18D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6B8u;
    // 0x18d6bc: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x18D6B8u, 0x18D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6C0u;
label_18d6c0:
    // 0x18d6c0: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x18d6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d6c4:
    // 0x18d6c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d6c8:
    // 0x18d6c8: 0x8e282724  lw          $t0, 0x2724($s1)
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d6cc:
    // 0x18d6cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18d6d0:
    // 0x18d6d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18d6d4:
    // 0x18d6d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18d6d8:
    // 0x18d6d8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_18d6dc:
    // 0x18d6dc: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x18d6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_18d6e0:
    // 0x18d6e0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18d6e4:
    // 0x18d6e4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_18d6e8:
    // 0x18d6e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d6ec:
    // 0x18d6ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_18d6f0:
    // 0x18d6f0: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x18d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d6f4:
    // 0x18d6f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18d6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18d6f8:
    // 0x18d6f8: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x18d6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d6fc:
    // 0x18d6fc: 0x8e282724  lw          $t0, 0x2724($s1)
    ctx->pc = 0x18d6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d700:
    // 0x18d700: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_18d704:
    // 0x18d704: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x18d704u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_18d708:
    // 0x18d708: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x18d708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18d70c:
    // 0x18d70c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_18d710:
    // 0x18d710: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d714:
    // 0x18d714: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_18d718:
    // 0x18d718: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x18d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d71c:
    // 0x18d71c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_18d720:
    // 0x18d720: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d724:
    // 0x18d724: 0x8e282724  lw          $t0, 0x2724($s1)
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d728:
    // 0x18d728: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_18d72c:
    // 0x18d72c: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x18d72cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_18d730:
    // 0x18d730: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18d734:
    // 0x18d734: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_18d738:
    // 0x18d738: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d73c:
    // 0x18d73c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_18d740:
    // 0x18d740: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x18d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d744:
    // 0x18d744: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18d744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_18d748:
    // 0x18d748: 0xc07d2e2  jal         func_1F4B88
label_18d74c:
    if (ctx->pc == 0x18D74Cu) {
        ctx->pc = 0x18D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D748u;
        // 0x18d74c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D750u;
        goto label_18d750;
    }
    ctx->pc = 0x18D748u;
    SET_GPR_U32(ctx, 31, 0x18D750u);
    ctx->pc = 0x18D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D748u;
    // 0x18d74c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18D748u, 0x18D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D750u;
label_18d750:
    // 0x18d750: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d754:
    // 0x18d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d758:
    // 0x18d758: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d75c:
    // 0x18d75c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d760:
    // 0x18d760: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d764:
    // 0x18d764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d768:
    // 0x18d768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d76c:
    // 0x18d76c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d770:
    // 0x18d770: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18d774:
    // 0x18d774: 0xc44c006c  lwc1        $f12, 0x6C($v0)
    ctx->pc = 0x18d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d778:
    // 0x18d778: 0xc0630d4  jal         func_18C350
label_18d77c:
    if (ctx->pc == 0x18D77Cu) {
        ctx->pc = 0x18D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D778u;
        // 0x18d77c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D780u;
        goto label_18d780;
    }
    ctx->pc = 0x18D778u;
    SET_GPR_U32(ctx, 31, 0x18D780u);
    ctx->pc = 0x18D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D778u;
    // 0x18d77c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C350u, 0x18D778u, 0x18D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D780u;
label_18d780:
    // 0x18d780: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x18d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_18d784:
    // 0x18d784: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18d788:
    // 0x18d788: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_18d78c:
    // 0x18d78c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18d790:
    // 0x18d790: 0xc07d2e2  jal         func_1F4B88
label_18d794:
    if (ctx->pc == 0x18D794u) {
        ctx->pc = 0x18D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D790u;
        // 0x18d794: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D798u;
        goto label_18d798;
    }
    ctx->pc = 0x18D790u;
    SET_GPR_U32(ctx, 31, 0x18D798u);
    ctx->pc = 0x18D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D790u;
    // 0x18d794: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18D790u, 0x18D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D798u;
label_18d798:
    // 0x18d798: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d79c:
    // 0x18d79c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18d7a0:
    // 0x18d7a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18d7a4:
    // 0x18d7a4: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d7a8:
    // 0x18d7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d7ac:
    // 0x18d7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d7b0:
    // 0x18d7b0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18d7b4:
    // 0x18d7b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d7b8:
    // 0x18d7b8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d7bc:
    // 0x18d7bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d7c0:
    // 0x18d7c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d7c4:
    // 0x18d7c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d7c8:
    // 0x18d7c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18d7cc:
    // 0x18d7cc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x18d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d7d0:
    // 0x18d7d0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18d7d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_18d7d4:
    // 0x18d7d4: 0x0  nop
    ctx->pc = 0x18d7d4u;
    // NOP
label_18d7d8:
    // 0x18d7d8: 0x0  nop
    ctx->pc = 0x18d7d8u;
    // NOP
label_18d7dc:
    // 0x18d7dc: 0xc0631cc  jal         func_18C730
label_18d7e0:
    if (ctx->pc == 0x18D7E0u) {
        ctx->pc = 0x18D7E4u;
        goto label_18d7e4;
    }
    ctx->pc = 0x18D7DCu;
    SET_GPR_U32(ctx, 31, 0x18D7E4u);
    ctx->pc = 0x18C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C730u, 0x18D7DCu, 0x18D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7E4u;
label_18d7e4:
    // 0x18d7e4: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_18d7e8:
    // 0x18d7e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_18d7ec:
    if (ctx->pc == 0x18D7ECu) {
        ctx->pc = 0x18D7F0u;
        goto label_18d7f0;
    }
    ctx->pc = 0x18D7E8u;
    {
        const bool branch_taken_0x18d7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d7e8) {
            ctx->pc = 0x18D81Cu;
            goto label_18d81c;
        }
    }
    ctx->pc = 0x18D7F0u;
label_18d7f0:
    // 0x18d7f0: 0xc62104e0  lwc1        $f1, 0x4E0($s1)
    ctx->pc = 0x18d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d7f4:
    // 0x18d7f4: 0xc6200570  lwc1        $f0, 0x570($s1)
    ctx->pc = 0x18d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d7f8:
    // 0x18d7f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d7fc:
    // 0x18d7fc: 0xe62004e0  swc1        $f0, 0x4E0($s1)
    ctx->pc = 0x18d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1248), bits); }
label_18d800:
    // 0x18d800: 0xc62104e4  lwc1        $f1, 0x4E4($s1)
    ctx->pc = 0x18d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d804:
    // 0x18d804: 0xc6200574  lwc1        $f0, 0x574($s1)
    ctx->pc = 0x18d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d808:
    // 0x18d808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d80c:
    // 0x18d80c: 0xe62004e4  swc1        $f0, 0x4E4($s1)
    ctx->pc = 0x18d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1252), bits); }
label_18d810:
    // 0x18d810: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x18d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_18d814:
    // 0x18d814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18d818:
    // 0x18d818: 0xae230560  sw          $v1, 0x560($s1)
    ctx->pc = 0x18d818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 3));
label_18d81c:
    // 0x18d81c: 0x8e230540  lw          $v1, 0x540($s1)
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
label_18d820:
    // 0x18d820: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_18d824:
    if (ctx->pc == 0x18D824u) {
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D828u;
        goto label_18d828;
    }
    ctx->pc = 0x18D820u;
    {
        const bool branch_taken_0x18d820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D820u;
        // 0x18d824: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d820) {
            ctx->pc = 0x18D87Cu;
            goto label_18d87c;
        }
    }
    ctx->pc = 0x18D828u;
label_18d828:
    // 0x18d828: 0xc62104d0  lwc1        $f1, 0x4D0($s1)
    ctx->pc = 0x18d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d82c:
    // 0x18d82c: 0xc6200550  lwc1        $f0, 0x550($s1)
    ctx->pc = 0x18d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d830:
    // 0x18d830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d834:
    // 0x18d834: 0xe62004d0  swc1        $f0, 0x4D0($s1)
    ctx->pc = 0x18d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1232), bits); }
label_18d838:
    // 0x18d838: 0xc62104d4  lwc1        $f1, 0x4D4($s1)
    ctx->pc = 0x18d838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d83c:
    // 0x18d83c: 0xc6200554  lwc1        $f0, 0x554($s1)
    ctx->pc = 0x18d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d840:
    // 0x18d840: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d844:
    // 0x18d844: 0xe62004d4  swc1        $f0, 0x4D4($s1)
    ctx->pc = 0x18d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1236), bits); }
label_18d848:
    // 0x18d848: 0xc62104d8  lwc1        $f1, 0x4D8($s1)
    ctx->pc = 0x18d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d84c:
    // 0x18d84c: 0xc6200558  lwc1        $f0, 0x558($s1)
    ctx->pc = 0x18d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d850:
    // 0x18d850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d854:
    // 0x18d854: 0xe62004d8  swc1        $f0, 0x4D8($s1)
    ctx->pc = 0x18d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1240), bits); }
label_18d858:
    // 0x18d858: 0x8e230540  lw          $v1, 0x540($s1)
    ctx->pc = 0x18d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
label_18d85c:
    // 0x18d85c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18d860:
    // 0x18d860: 0xae230540  sw          $v1, 0x540($s1)
    ctx->pc = 0x18d860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1344), GPR_U32(ctx, 3));
label_18d864:
    // 0x18d864: 0x8e230540  lw          $v1, 0x540($s1)
    ctx->pc = 0x18d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
label_18d868:
    // 0x18d868: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_18d86c:
    if (ctx->pc == 0x18D86Cu) {
        ctx->pc = 0x18D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D868u;
        // 0x18d86c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D870u;
        goto label_18d870;
    }
    ctx->pc = 0x18D868u;
    {
        const bool branch_taken_0x18d868 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D868u;
        // 0x18d86c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d868) {
            ctx->pc = 0x18D878u;
            goto label_18d878;
        }
    }
    ctx->pc = 0x18D870u;
label_18d870:
    // 0x18d870: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d874:
    if (ctx->pc == 0x18D874u) {
        ctx->pc = 0x18D878u;
        goto label_18d878;
    }
    ctx->pc = 0x18D870u;
    {
        const bool branch_taken_0x18d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d870) {
            ctx->pc = 0x18D87Cu;
            goto label_18d87c;
        }
    }
    ctx->pc = 0x18D878u;
label_18d878:
    // 0x18d878: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18d878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d87c:
    // 0x18d87c: 0x146002b4  bnez        $v1, . + 4 + (0x2B4 << 2)
label_18d880:
    if (ctx->pc == 0x18D880u) {
        ctx->pc = 0x18D884u;
        goto label_18d884;
    }
    ctx->pc = 0x18D87Cu;
    {
        const bool branch_taken_0x18d87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d87c) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D884u;
label_18d884:
    // 0x18d884: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d888:
    // 0x18d888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d88c:
    // 0x18d88c: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d890:
    // 0x18d890: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d894:
    // 0x18d894: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d898:
    // 0x18d898: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d89c:
    // 0x18d89c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d8a0:
    // 0x18d8a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d8a4:
    // 0x18d8a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d8a8:
    // 0x18d8a8: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x18d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d8ac:
    // 0x18d8ac: 0xe62004f0  swc1        $f0, 0x4F0($s1)
    ctx->pc = 0x18d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1264), bits); }
label_18d8b0:
    // 0x18d8b0: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d8b4:
    // 0x18d8b4: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d8b8:
    // 0x18d8b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d8bc:
    // 0x18d8bc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d8c0:
    // 0x18d8c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d8c4:
    // 0x18d8c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d8c8:
    // 0x18d8c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d8cc:
    // 0x18d8cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d8d0:
    // 0x18d8d0: 0xc4400084  lwc1        $f0, 0x84($v0)
    ctx->pc = 0x18d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d8d4:
    // 0x18d8d4: 0xe62004f4  swc1        $f0, 0x4F4($s1)
    ctx->pc = 0x18d8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1268), bits); }
label_18d8d8:
    // 0x18d8d8: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d8dc:
    // 0x18d8dc: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d8e0:
    // 0x18d8e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d8e4:
    // 0x18d8e4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d8e8:
    // 0x18d8e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d8ec:
    // 0x18d8ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d8f0:
    // 0x18d8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d8f4:
    // 0x18d8f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d8f8:
    // 0x18d8f8: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x18d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d8fc:
    // 0x18d8fc: 0xc063220  jal         func_18C880
label_18d900:
    if (ctx->pc == 0x18D900u) {
        ctx->pc = 0x18D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8FCu;
        // 0x18d900: 0xe62004f8  swc1        $f0, 0x4F8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D904u;
        goto label_18d904;
    }
    ctx->pc = 0x18D8FCu;
    SET_GPR_U32(ctx, 31, 0x18D904u);
    ctx->pc = 0x18D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D8FCu;
    // 0x18d900: 0xe62004f8  swc1        $f0, 0x4F8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C880u, 0x18D8FCu, 0x18D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D904u;
label_18d904:
    // 0x18d904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d908:
    // 0x18d908: 0xc063e08  jal         func_18F820
label_18d90c:
    if (ctx->pc == 0x18D90Cu) {
        ctx->pc = 0x18D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D908u;
        // 0x18d90c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D910u;
        goto label_18d910;
    }
    ctx->pc = 0x18D908u;
    SET_GPR_U32(ctx, 31, 0x18D910u);
    ctx->pc = 0x18D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D908u;
    // 0x18d90c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D908u, 0x18D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D910u;
label_18d910:
    // 0x18d910: 0x1000028f  b           . + 4 + (0x28F << 2)
label_18d914:
    if (ctx->pc == 0x18D914u) {
        ctx->pc = 0x18D918u;
        goto label_18d918;
    }
    ctx->pc = 0x18D910u;
    {
        const bool branch_taken_0x18d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d910) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18D918u;
label_18d918:
    // 0x18d918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d91c:
    // 0x18d91c: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
label_18d920:
    // 0x18d920: 0xae232714  sw          $v1, 0x2714($s1)
    ctx->pc = 0x18d920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 3));
label_18d924:
    // 0x18d924: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
label_18d928:
    // 0x18d928: 0xae202710  sw          $zero, 0x2710($s1)
    ctx->pc = 0x18d928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
label_18d92c:
    // 0x18d92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d930:
    // 0x18d930: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d934:
    // 0x18d934: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x18d934u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18d938:
    // 0x18d938: 0xc082520  jal         func_209480
label_18d93c:
    if (ctx->pc == 0x18D93Cu) {
        ctx->pc = 0x18D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D938u;
        // 0x18d93c: 0xe62c0504  swc1        $f12, 0x504($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D940u;
        goto label_18d940;
    }
    ctx->pc = 0x18D938u;
    SET_GPR_U32(ctx, 31, 0x18D940u);
    ctx->pc = 0x18D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D938u;
    // 0x18d93c: 0xe62c0504  swc1        $f12, 0x504($s1) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x18D938u, 0x18D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D940u;
label_18d940:
    // 0x18d940: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
label_18d944:
    // 0x18d944: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
label_18d948:
    // 0x18d948: 0x348421fb  ori         $a0, $a0, 0x21FB
    ctx->pc = 0x18d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8699);
label_18d94c:
    // 0x18d94c: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x18d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
label_18d950:
    // 0x18d950: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x18d950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_18d954:
    // 0x18d954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d958:
    // 0x18d958: 0xc0400fc  jal         func_1003F0
label_18d95c:
    if (ctx->pc == 0x18D95Cu) {
        ctx->pc = 0x18D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D958u;
        // 0x18d95c: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D960u;
        goto label_18d960;
    }
    ctx->pc = 0x18D958u;
    SET_GPR_U32(ctx, 31, 0x18D960u);
    ctx->pc = 0x18D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D958u;
    // 0x18d95c: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x18D958u, 0x18D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D960u;
label_18d960:
    // 0x18d960: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_18d964:
    if (ctx->pc == 0x18D964u) {
        ctx->pc = 0x18D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D960u;
        // 0x18d964: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D968u;
        goto label_18d968;
    }
    ctx->pc = 0x18D960u;
    {
        const bool branch_taken_0x18d960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D960u;
        // 0x18d964: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d960) {
            ctx->pc = 0x18D9F4u;
            goto label_18d9f4;
        }
    }
    ctx->pc = 0x18D968u;
label_18d968:
    // 0x18d968: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x18d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
label_18d96c:
    // 0x18d96c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18d970:
    // 0x18d970: 0xae220480  sw          $v0, 0x480($s1)
    ctx->pc = 0x18d970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
label_18d974:
    // 0x18d974: 0xae200478  sw          $zero, 0x478($s1)
    ctx->pc = 0x18d974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
label_18d978:
    // 0x18d978: 0xc062d50  jal         func_18B540
label_18d97c:
    if (ctx->pc == 0x18D97Cu) {
        ctx->pc = 0x18D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D978u;
        // 0x18d97c: 0xae20047c  sw          $zero, 0x47C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D980u;
        goto label_18d980;
    }
    ctx->pc = 0x18D978u;
    SET_GPR_U32(ctx, 31, 0x18D980u);
    ctx->pc = 0x18D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D978u;
    // 0x18d97c: 0xae20047c  sw          $zero, 0x47C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18D978u, 0x18D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D980u;
label_18d980:
    // 0x18d980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d984:
    // 0x18d984: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_18d988:
    // 0x18d988: 0xc062b5c  jal         func_18AD70
label_18d98c:
    if (ctx->pc == 0x18D98Cu) {
        ctx->pc = 0x18D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D988u;
        // 0x18d98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D990u;
        goto label_18d990;
    }
    ctx->pc = 0x18D988u;
    SET_GPR_U32(ctx, 31, 0x18D990u);
    ctx->pc = 0x18D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D988u;
    // 0x18d98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18D988u, 0x18D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D990u;
label_18d990:
    // 0x18d990: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18d994:
    // 0x18d994: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d998:
    // 0x18d998: 0xc05f878  jal         func_17E1E0
label_18d99c:
    if (ctx->pc == 0x18D99Cu) {
        ctx->pc = 0x18D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D998u;
        // 0x18d99c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9A0u;
        goto label_18d9a0;
    }
    ctx->pc = 0x18D998u;
    SET_GPR_U32(ctx, 31, 0x18D9A0u);
    ctx->pc = 0x18D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D998u;
    // 0x18d99c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D998u, 0x18D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9A0u;
label_18d9a0:
    // 0x18d9a0: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18d9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18d9a4:
    // 0x18d9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d9a8:
    // 0x18d9a8: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d9ac:
    // 0x18d9ac: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18d9b0:
    // 0x18d9b0: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18d9b4:
    // 0x18d9b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d9b8:
    // 0x18d9b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d9bc:
    // 0x18d9bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d9c0:
    // 0x18d9c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d9c4:
    // 0x18d9c4: 0xc0532f4  jal         func_14CBD0
label_18d9c8:
    if (ctx->pc == 0x18D9C8u) {
        ctx->pc = 0x18D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9C4u;
        // 0x18d9c8: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9CCu;
        goto label_18d9cc;
    }
    ctx->pc = 0x18D9C4u;
    SET_GPR_U32(ctx, 31, 0x18D9CCu);
    ctx->pc = 0x18D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9C4u;
    // 0x18d9c8: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18D9C4u, 0x18D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9CCu;
label_18d9cc:
    // 0x18d9cc: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
label_18d9d0:
    // 0x18d9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d9d4:
    // 0x18d9d4: 0xae200460  sw          $zero, 0x460($s1)
    ctx->pc = 0x18d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1120), GPR_U32(ctx, 0));
label_18d9d8:
    // 0x18d9d8: 0xae200464  sw          $zero, 0x464($s1)
    ctx->pc = 0x18d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1124), GPR_U32(ctx, 0));
label_18d9dc:
    // 0x18d9dc: 0xae20046c  sw          $zero, 0x46C($s1)
    ctx->pc = 0x18d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 0));
label_18d9e0:
    // 0x18d9e0: 0xae200468  sw          $zero, 0x468($s1)
    ctx->pc = 0x18d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 0));
label_18d9e4:
    // 0x18d9e4: 0xae202714  sw          $zero, 0x2714($s1)
    ctx->pc = 0x18d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 0));
label_18d9e8:
    // 0x18d9e8: 0xc063e14  jal         func_18F850
label_18d9ec:
    if (ctx->pc == 0x18D9ECu) {
        ctx->pc = 0x18D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9E8u;
        // 0x18d9ec: 0xae202710  sw          $zero, 0x2710($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9F0u;
        goto label_18d9f0;
    }
    ctx->pc = 0x18D9E8u;
    SET_GPR_U32(ctx, 31, 0x18D9F0u);
    ctx->pc = 0x18D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9E8u;
    // 0x18d9ec: 0xae202710  sw          $zero, 0x2710($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D9E8u, 0x18D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9F0u;
label_18d9f0:
    // 0x18d9f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18d9f4:
    // 0x18d9f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18d9f8:
    // 0x18d9f8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18d9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d9fc:
    // 0x18d9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18da00:
    // 0x18da00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18da00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18da04:
    // 0x18da04: 0xc063270  jal         func_18C9C0
label_18da08:
    if (ctx->pc == 0x18DA08u) {
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA0Cu;
        goto label_18da0c;
    }
    ctx->pc = 0x18DA04u;
    SET_GPR_U32(ctx, 31, 0x18DA0Cu);
    ctx->pc = 0x18DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA04u;
    // 0x18da08: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DA04u, 0x18DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA0Cu;
label_18da0c:
    // 0x18da0c: 0x10000250  b           . + 4 + (0x250 << 2)
label_18da10:
    if (ctx->pc == 0x18DA10u) {
        ctx->pc = 0x18DA14u;
        goto label_18da14;
    }
    ctx->pc = 0x18DA0Cu;
    {
        const bool branch_taken_0x18da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da0c) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18DA14u;
label_18da14:
    // 0x18da14: 0x8e230478  lw          $v1, 0x478($s1)
    ctx->pc = 0x18da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
label_18da18:
    // 0x18da18: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_18da1c:
    // 0x18da1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18da1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_18da20:
    // 0x18da20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18da20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18da24:
    // 0x18da24: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x18da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18da28:
    // 0x18da28: 0xae220478  sw          $v0, 0x478($s1)
    ctx->pc = 0x18da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
label_18da2c:
    // 0x18da2c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x18da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18da30:
    // 0x18da30: 0x8e230478  lw          $v1, 0x478($s1)
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
label_18da34:
    // 0x18da34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18da34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18da38:
    // 0x18da38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18da38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18da3c:
    // 0x18da3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18da3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18da40:
    // 0x18da40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18da40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18da44:
    // 0x18da44: 0x0  nop
    ctx->pc = 0x18da44u;
    // NOP
label_18da48:
    // 0x18da48: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18da48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18da4c:
    // 0x18da4c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_18da50:
    if (ctx->pc == 0x18DA50u) {
        ctx->pc = 0x18DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA4Cu;
        // 0x18da50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA54u;
        goto label_18da54;
    }
    ctx->pc = 0x18DA4Cu;
    {
        const bool branch_taken_0x18da4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA4Cu;
        // 0x18da50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da4c) {
            ctx->pc = 0x18DB50u;
            goto label_18db50;
        }
    }
    ctx->pc = 0x18DA54u;
label_18da54:
    // 0x18da54: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18da58:
    // 0x18da58: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18da58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18da5c:
    // 0x18da5c: 0x8e25047c  lw          $a1, 0x47C($s1)
    ctx->pc = 0x18da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1148)));
label_18da60:
    // 0x18da60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18da64:
    // 0x18da64: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18da64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18da68:
    // 0x18da68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18da68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18da6c:
    // 0x18da6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18da70:
    // 0x18da70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18da74:
    // 0x18da74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18da78:
    // 0x18da78: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_18da7c:
    // 0x18da7c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x18da7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18da80:
    // 0x18da80: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_18da84:
    if (ctx->pc == 0x18DA84u) {
        ctx->pc = 0x18DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA80u;
        // 0x18da84: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA88u;
        goto label_18da88;
    }
    ctx->pc = 0x18DA80u;
    {
        const bool branch_taken_0x18da80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA80u;
        // 0x18da84: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da80) {
            ctx->pc = 0x18DABCu;
            goto label_18dabc;
        }
    }
    ctx->pc = 0x18DA88u;
label_18da88:
    // 0x18da88: 0x26240610  addiu       $a0, $s1, 0x610
    ctx->pc = 0x18da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
label_18da8c:
    // 0x18da8c: 0xae22047c  sw          $v0, 0x47C($s1)
    ctx->pc = 0x18da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 2));
label_18da90:
    // 0x18da90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18da94:
    // 0x18da94: 0xc063d00  jal         func_18F400
label_18da98:
    if (ctx->pc == 0x18DA98u) {
        ctx->pc = 0x18DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA94u;
        // 0x18da98: 0xae200478  sw          $zero, 0x478($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA9Cu;
        goto label_18da9c;
    }
    ctx->pc = 0x18DA94u;
    SET_GPR_U32(ctx, 31, 0x18DA9Cu);
    ctx->pc = 0x18DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA94u;
    // 0x18da98: 0xae200478  sw          $zero, 0x478($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F400u, 0x18DA94u, 0x18DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA9Cu;
label_18da9c:
    // 0x18da9c: 0xc062d50  jal         func_18B540
label_18daa0:
    if (ctx->pc == 0x18DAA0u) {
        ctx->pc = 0x18DAA4u;
        goto label_18daa4;
    }
    ctx->pc = 0x18DA9Cu;
    SET_GPR_U32(ctx, 31, 0x18DAA4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DA9Cu, 0x18DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAA4u;
label_18daa4:
    // 0x18daa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18daa8:
    // 0x18daa8: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x18daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_18daac:
    // 0x18daac: 0xc062b5c  jal         func_18AD70
label_18dab0:
    if (ctx->pc == 0x18DAB0u) {
        ctx->pc = 0x18DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAACu;
        // 0x18dab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAB4u;
        goto label_18dab4;
    }
    ctx->pc = 0x18DAACu;
    SET_GPR_U32(ctx, 31, 0x18DAB4u);
    ctx->pc = 0x18DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAACu;
    // 0x18dab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DAACu, 0x18DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DAB4u;
label_18dab4:
    // 0x18dab4: 0x10000025  b           . + 4 + (0x25 << 2)
label_18dab8:
    if (ctx->pc == 0x18DAB8u) {
        ctx->pc = 0x18DABCu;
        goto label_18dabc;
    }
    ctx->pc = 0x18DAB4u;
    {
        const bool branch_taken_0x18dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dab4) {
            ctx->pc = 0x18DB4Cu;
            goto label_18db4c;
        }
    }
    ctx->pc = 0x18DABCu;
label_18dabc:
    // 0x18dabc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18dac0:
    // 0x18dac0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18dac4:
    // 0x18dac4: 0xc05f878  jal         func_17E1E0
label_18dac8:
    if (ctx->pc == 0x18DAC8u) {
        ctx->pc = 0x18DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC4u;
        // 0x18dac8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DACCu;
        goto label_18dacc;
    }
    ctx->pc = 0x18DAC4u;
    SET_GPR_U32(ctx, 31, 0x18DACCu);
    ctx->pc = 0x18DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAC4u;
    // 0x18dac8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DAC4u, 0x18DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DACCu;
label_18dacc:
    // 0x18dacc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18daccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dad0:
    // 0x18dad0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18dad4:
    // 0x18dad4: 0x320f809  jalr        $t9
label_18dad8:
    if (ctx->pc == 0x18DAD8u) {
        ctx->pc = 0x18DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD4u;
        // 0x18dad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DADCu;
        goto label_18dadc;
    }
    ctx->pc = 0x18DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18DADCu);
        ctx->pc = 0x18DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD4u;
        // 0x18dad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAD4u, 0x18DADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DADCu;
label_18dadc:
    // 0x18dadc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_18dae0:
    if (ctx->pc == 0x18DAE0u) {
        ctx->pc = 0x18DAE4u;
        goto label_18dae4;
    }
    ctx->pc = 0x18DADCu;
    {
        const bool branch_taken_0x18dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dadc) {
            ctx->pc = 0x18DB4Cu;
            goto label_18db4c;
        }
    }
    ctx->pc = 0x18DAE4u;
label_18dae4:
    // 0x18dae4: 0xae200478  sw          $zero, 0x478($s1)
    ctx->pc = 0x18dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
label_18dae8:
    // 0x18dae8: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
label_18daec:
    // 0x18daec: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_18daf0:
    if (ctx->pc == 0x18DAF0u) {
        ctx->pc = 0x18DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAECu;
        // 0x18daf0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAF4u;
        goto label_18daf4;
    }
    ctx->pc = 0x18DAECu;
    {
        const bool branch_taken_0x18daec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAECu;
        // 0x18daf0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daec) {
            ctx->pc = 0x18DB08u;
            goto label_18db08;
        }
    }
    ctx->pc = 0x18DAF4u;
label_18daf4:
    // 0x18daf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18daf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18daf8:
    // 0x18daf8: 0xc063e08  jal         func_18F820
label_18dafc:
    if (ctx->pc == 0x18DAFCu) {
        ctx->pc = 0x18DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAF8u;
        // 0x18dafc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB00u;
        goto label_18db00;
    }
    ctx->pc = 0x18DAF8u;
    SET_GPR_U32(ctx, 31, 0x18DB00u);
    ctx->pc = 0x18DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAF8u;
    // 0x18dafc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DAF8u, 0x18DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB00u;
label_18db00:
    // 0x18db00: 0x10000012  b           . + 4 + (0x12 << 2)
label_18db04:
    if (ctx->pc == 0x18DB04u) {
        ctx->pc = 0x18DB08u;
        goto label_18db08;
    }
    ctx->pc = 0x18DB00u;
    {
        const bool branch_taken_0x18db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db00) {
            ctx->pc = 0x18DB4Cu;
            goto label_18db4c;
        }
    }
    ctx->pc = 0x18DB08u;
label_18db08:
    // 0x18db08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18db0c:
    // 0x18db0c: 0xc05f878  jal         func_17E1E0
label_18db10:
    if (ctx->pc == 0x18DB10u) {
        ctx->pc = 0x18DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB0Cu;
        // 0x18db10: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB14u;
        goto label_18db14;
    }
    ctx->pc = 0x18DB0Cu;
    SET_GPR_U32(ctx, 31, 0x18DB14u);
    ctx->pc = 0x18DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB0Cu;
    // 0x18db10: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DB0Cu, 0x18DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB14u;
label_18db14:
    // 0x18db14: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18db14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18db18:
    // 0x18db18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18db18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18db1c:
    // 0x18db1c: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18db20:
    // 0x18db20: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18db20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18db24:
    // 0x18db24: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18db28:
    // 0x18db28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18db28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18db2c:
    // 0x18db2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18db30:
    // 0x18db30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18db34:
    // 0x18db34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18db38:
    // 0x18db38: 0xc0532f4  jal         func_14CBD0
label_18db3c:
    if (ctx->pc == 0x18DB3Cu) {
        ctx->pc = 0x18DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB38u;
        // 0x18db3c: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB40u;
        goto label_18db40;
    }
    ctx->pc = 0x18DB38u;
    SET_GPR_U32(ctx, 31, 0x18DB40u);
    ctx->pc = 0x18DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB38u;
    // 0x18db3c: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18DB38u, 0x18DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB40u;
label_18db40:
    // 0x18db40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18db44:
    // 0x18db44: 0xc063e08  jal         func_18F820
label_18db48:
    if (ctx->pc == 0x18DB48u) {
        ctx->pc = 0x18DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB44u;
        // 0x18db48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB4Cu;
        goto label_18db4c;
    }
    ctx->pc = 0x18DB44u;
    SET_GPR_U32(ctx, 31, 0x18DB4Cu);
    ctx->pc = 0x18DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB44u;
    // 0x18db48: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DB44u, 0x18DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB4Cu;
label_18db4c:
    // 0x18db4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18db4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18db50:
    // 0x18db50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18db54:
    // 0x18db54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18db54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18db58:
    // 0x18db58: 0xc06333c  jal         func_18CCF0
label_18db5c:
    if (ctx->pc == 0x18DB5Cu) {
        ctx->pc = 0x18DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB58u;
        // 0x18db5c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB60u;
        goto label_18db60;
    }
    ctx->pc = 0x18DB58u;
    SET_GPR_U32(ctx, 31, 0x18DB60u);
    ctx->pc = 0x18DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB58u;
    // 0x18db5c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18DB58u, 0x18DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB60u;
label_18db60:
    // 0x18db60: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18db64:
    // 0x18db64: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
label_18db68:
    // 0x18db68: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
label_18db6c:
    // 0x18db6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18db70:
    // 0x18db70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18db70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18db74:
    // 0x18db74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18db74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18db78:
    // 0x18db78: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18db78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18db7c:
    // 0x18db7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18db80:
    // 0x18db80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18db80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18db84:
    // 0x18db84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18db84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18db88:
    // 0x18db88: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18db88u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_18db8c:
    // 0x18db8c: 0xc063270  jal         func_18C9C0
label_18db90:
    if (ctx->pc == 0x18DB90u) {
        ctx->pc = 0x18DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB8Cu;
        // 0x18db90: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB94u;
        goto label_18db94;
    }
    ctx->pc = 0x18DB8Cu;
    SET_GPR_U32(ctx, 31, 0x18DB94u);
    ctx->pc = 0x18DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB8Cu;
    // 0x18db90: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DB8Cu, 0x18DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB94u;
label_18db94:
    // 0x18db94: 0x100001ee  b           . + 4 + (0x1EE << 2)
label_18db98:
    if (ctx->pc == 0x18DB98u) {
        ctx->pc = 0x18DB9Cu;
        goto label_18db9c;
    }
    ctx->pc = 0x18DB94u;
    {
        const bool branch_taken_0x18db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db94) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18DB9Cu;
label_18db9c:
    // 0x18db9c: 0x8e220478  lw          $v0, 0x478($s1)
    ctx->pc = 0x18db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
label_18dba0:
    // 0x18dba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18dba4:
    // 0x18dba4: 0xae220478  sw          $v0, 0x478($s1)
    ctx->pc = 0x18dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
label_18dba8:
    // 0x18dba8: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18dbac:
    // 0x18dbac: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dbb0:
    // 0x18dbb0: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18dbb4:
    // 0x18dbb4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18dbb8:
    // 0x18dbb8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dbbc:
    // 0x18dbbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18dbc0:
    // 0x18dbc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dbc4:
    // 0x18dbc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18dbc8:
    // 0x18dbc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18dbcc:
    // 0x18dbcc: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x18dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dbd0:
    // 0x18dbd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18dbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18dbd4:
    // 0x18dbd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18dbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18dbd8:
    // 0x18dbd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18dbd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18dbdc:
    // 0x18dbdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18dbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18dbe0:
    // 0x18dbe0: 0x0  nop
    ctx->pc = 0x18dbe0u;
    // NOP
label_18dbe4:
    // 0x18dbe4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_18dbe8:
    if (ctx->pc == 0x18DBE8u) {
        ctx->pc = 0x18DBECu;
        goto label_18dbec;
    }
    ctx->pc = 0x18DBE4u;
    {
        const bool branch_taken_0x18dbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dbe4) {
            ctx->pc = 0x18DBF0u;
            goto label_18dbf0;
        }
    }
    ctx->pc = 0x18DBECu;
label_18dbec:
    // 0x18dbec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18dbf0:
    // 0x18dbf0: 0x8e220478  lw          $v0, 0x478($s1)
    ctx->pc = 0x18dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
label_18dbf4:
    // 0x18dbf4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18dbf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18dbf8:
    // 0x18dbf8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18dbfc:
    if (ctx->pc == 0x18DBFCu) {
        ctx->pc = 0x18DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBF8u;
        // 0x18dbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC00u;
        goto label_18dc00;
    }
    ctx->pc = 0x18DBF8u;
    {
        const bool branch_taken_0x18dbf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBF8u;
        // 0x18dbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbf8) {
            ctx->pc = 0x18DC10u;
            goto label_18dc10;
        }
    }
    ctx->pc = 0x18DC00u;
label_18dc00:
    // 0x18dc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc04:
    // 0x18dc04: 0xc063e08  jal         func_18F820
label_18dc08:
    if (ctx->pc == 0x18DC08u) {
        ctx->pc = 0x18DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC04u;
        // 0x18dc08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC0Cu;
        goto label_18dc0c;
    }
    ctx->pc = 0x18DC04u;
    SET_GPR_U32(ctx, 31, 0x18DC0Cu);
    ctx->pc = 0x18DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC04u;
    // 0x18dc08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DC04u, 0x18DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC0Cu;
label_18dc0c:
    // 0x18dc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18dc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dc10:
    // 0x18dc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18dc14:
    // 0x18dc14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18dc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18dc18:
    // 0x18dc18: 0xc06333c  jal         func_18CCF0
label_18dc1c:
    if (ctx->pc == 0x18DC1Cu) {
        ctx->pc = 0x18DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC18u;
        // 0x18dc1c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC20u;
        goto label_18dc20;
    }
    ctx->pc = 0x18DC18u;
    SET_GPR_U32(ctx, 31, 0x18DC20u);
    ctx->pc = 0x18DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC18u;
    // 0x18dc1c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18DC18u, 0x18DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC20u;
label_18dc20:
    // 0x18dc20: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dc24:
    // 0x18dc24: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
label_18dc28:
    // 0x18dc28: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
label_18dc2c:
    // 0x18dc2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18dc30:
    // 0x18dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dc34:
    // 0x18dc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18dc38:
    // 0x18dc38: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18dc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18dc3c:
    // 0x18dc3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18dc40:
    // 0x18dc40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18dc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18dc44:
    // 0x18dc44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18dc44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18dc48:
    // 0x18dc48: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18dc48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_18dc4c:
    // 0x18dc4c: 0xc063270  jal         func_18C9C0
label_18dc50:
    if (ctx->pc == 0x18DC50u) {
        ctx->pc = 0x18DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC4Cu;
        // 0x18dc50: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC54u;
        goto label_18dc54;
    }
    ctx->pc = 0x18DC4Cu;
    SET_GPR_U32(ctx, 31, 0x18DC54u);
    ctx->pc = 0x18DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC4Cu;
    // 0x18dc50: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DC4Cu, 0x18DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC54u;
label_18dc54:
    // 0x18dc54: 0x100001be  b           . + 4 + (0x1BE << 2)
label_18dc58:
    if (ctx->pc == 0x18DC58u) {
        ctx->pc = 0x18DC5Cu;
        goto label_18dc5c;
    }
    ctx->pc = 0x18DC54u;
    {
        const bool branch_taken_0x18dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc54) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18DC5Cu;
label_18dc5c:
    // 0x18dc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dc60:
    // 0x18dc60: 0xae222710  sw          $v0, 0x2710($s1)
    ctx->pc = 0x18dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 2));
label_18dc64:
    // 0x18dc64: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18dc68:
    // 0x18dc68: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18dc6c:
    // 0x18dc6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18dc70:
    // 0x18dc70: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dc74:
    // 0x18dc74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18dc78:
    // 0x18dc78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dc7c:
    // 0x18dc7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18dc80:
    // 0x18dc80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18dc84:
    // 0x18dc84: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x18dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_18dc88:
    // 0x18dc88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_18dc8c:
    if (ctx->pc == 0x18DC8Cu) {
        ctx->pc = 0x18DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC88u;
        // 0x18dc8c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC90u;
        goto label_18dc90;
    }
    ctx->pc = 0x18DC88u;
    {
        const bool branch_taken_0x18dc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC88u;
        // 0x18dc8c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc88) {
            ctx->pc = 0x18DCC8u;
            goto label_18dcc8;
        }
    }
    ctx->pc = 0x18DC90u;
label_18dc90:
    // 0x18dc90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18dc94:
    // 0x18dc94: 0xc05f878  jal         func_17E1E0
label_18dc98:
    if (ctx->pc == 0x18DC98u) {
        ctx->pc = 0x18DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC94u;
        // 0x18dc98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC9Cu;
        goto label_18dc9c;
    }
    ctx->pc = 0x18DC94u;
    SET_GPR_U32(ctx, 31, 0x18DC9Cu);
    ctx->pc = 0x18DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC94u;
    // 0x18dc98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DC94u, 0x18DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC9Cu;
label_18dc9c:
    // 0x18dc9c: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18dc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18dca0:
    // 0x18dca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dca4:
    // 0x18dca4: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18dca8:
    // 0x18dca8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18dcac:
    // 0x18dcac: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18dcb0:
    // 0x18dcb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18dcb4:
    // 0x18dcb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dcb8:
    // 0x18dcb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18dcbc:
    // 0x18dcbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18dcc0:
    // 0x18dcc0: 0xc0532f4  jal         func_14CBD0
label_18dcc4:
    if (ctx->pc == 0x18DCC4u) {
        ctx->pc = 0x18DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCC0u;
        // 0x18dcc4: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCC8u;
        goto label_18dcc8;
    }
    ctx->pc = 0x18DCC0u;
    SET_GPR_U32(ctx, 31, 0x18DCC8u);
    ctx->pc = 0x18DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCC0u;
    // 0x18dcc4: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18DCC0u, 0x18DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCC8u;
label_18dcc8:
    // 0x18dcc8: 0xc062d50  jal         func_18B540
label_18dccc:
    if (ctx->pc == 0x18DCCCu) {
        ctx->pc = 0x18DCD0u;
        goto label_18dcd0;
    }
    ctx->pc = 0x18DCC8u;
    SET_GPR_U32(ctx, 31, 0x18DCD0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DCC8u, 0x18DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCD0u;
label_18dcd0:
    // 0x18dcd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dcd4:
    // 0x18dcd4: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x18dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
label_18dcd8:
    // 0x18dcd8: 0xc062b5c  jal         func_18AD70
label_18dcdc:
    if (ctx->pc == 0x18DCDCu) {
        ctx->pc = 0x18DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD8u;
        // 0x18dcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCE0u;
        goto label_18dce0;
    }
    ctx->pc = 0x18DCD8u;
    SET_GPR_U32(ctx, 31, 0x18DCE0u);
    ctx->pc = 0x18DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCD8u;
    // 0x18dcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DCD8u, 0x18DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE0u;
label_18dce0:
    // 0x18dce0: 0xc062d50  jal         func_18B540
label_18dce4:
    if (ctx->pc == 0x18DCE4u) {
        ctx->pc = 0x18DCE8u;
        goto label_18dce8;
    }
    ctx->pc = 0x18DCE0u;
    SET_GPR_U32(ctx, 31, 0x18DCE8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DCE0u, 0x18DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE8u;
label_18dce8:
    // 0x18dce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dcec:
    // 0x18dcec: 0x240500ed  addiu       $a1, $zero, 0xED
    ctx->pc = 0x18dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_18dcf0:
    // 0x18dcf0: 0xc062b5c  jal         func_18AD70
label_18dcf4:
    if (ctx->pc == 0x18DCF4u) {
        ctx->pc = 0x18DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCF0u;
        // 0x18dcf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCF8u;
        goto label_18dcf8;
    }
    ctx->pc = 0x18DCF0u;
    SET_GPR_U32(ctx, 31, 0x18DCF8u);
    ctx->pc = 0x18DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCF0u;
    // 0x18dcf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DCF0u, 0x18DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCF8u;
label_18dcf8:
    // 0x18dcf8: 0x8e220474  lw          $v0, 0x474($s1)
    ctx->pc = 0x18dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
label_18dcfc:
    // 0x18dcfc: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_18dd00:
    if (ctx->pc == 0x18DD00u) {
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD04u;
        goto label_18dd04;
    }
    ctx->pc = 0x18DCFCu;
    {
        const bool branch_taken_0x18dcfc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcfc) {
            ctx->pc = 0x18DD80u;
            goto label_18dd80;
        }
    }
    ctx->pc = 0x18DD04u;
label_18dd04:
    // 0x18dd04: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18dd08:
    // 0x18dd08: 0x8e22271c  lw          $v0, 0x271C($s1)
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18dd0c:
    // 0x18dd0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18dd10:
    // 0x18dd10: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_18dd14:
    if (ctx->pc == 0x18DD14u) {
        ctx->pc = 0x18DD18u;
        goto label_18dd18;
    }
    ctx->pc = 0x18DD10u;
    {
        const bool branch_taken_0x18dd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dd10) {
            ctx->pc = 0x18DD7Cu;
            goto label_18dd7c;
        }
    }
    ctx->pc = 0x18DD18u;
label_18dd18:
    // 0x18dd18: 0xae2005b0  sw          $zero, 0x5B0($s1)
    ctx->pc = 0x18dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 0));
label_18dd1c:
    // 0x18dd1c: 0xc058018  jal         func_160060
label_18dd20:
    if (ctx->pc == 0x18DD20u) {
        ctx->pc = 0x18DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD1Cu;
        // 0x18dd20: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD24u;
        goto label_18dd24;
    }
    ctx->pc = 0x18DD1Cu;
    SET_GPR_U32(ctx, 31, 0x18DD24u);
    ctx->pc = 0x18DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD1Cu;
    // 0x18dd20: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x18DD1Cu, 0x18DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD24u;
label_18dd24:
    // 0x18dd24: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x18dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_18dd28:
    // 0x18dd28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dd2c:
    // 0x18dd2c: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x18dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
label_18dd30:
    // 0x18dd30: 0xc067f08  jal         func_19FC20
label_18dd34:
    if (ctx->pc == 0x18DD34u) {
        ctx->pc = 0x18DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD30u;
        // 0x18dd34: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD38u;
        goto label_18dd38;
    }
    ctx->pc = 0x18DD30u;
    SET_GPR_U32(ctx, 31, 0x18DD38u);
    ctx->pc = 0x18DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD30u;
    // 0x18dd34: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18DD30u, 0x18DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD38u;
label_18dd38:
    // 0x18dd38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18dd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dd3c:
    // 0x18dd3c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_18dd40:
    if (ctx->pc == 0x18DD40u) {
        ctx->pc = 0x18DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD3Cu;
        // 0x18dd40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD44u;
        goto label_18dd44;
    }
    ctx->pc = 0x18DD3Cu;
    {
        const bool branch_taken_0x18dd3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD3Cu;
        // 0x18dd40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd3c) {
            ctx->pc = 0x18DD7Cu;
            goto label_18dd7c;
        }
    }
    ctx->pc = 0x18DD44u;
label_18dd44:
    // 0x18dd44: 0xc064bb8  jal         func_192EE0
label_18dd48:
    if (ctx->pc == 0x18DD48u) {
        ctx->pc = 0x18DD4Cu;
        goto label_18dd4c;
    }
    ctx->pc = 0x18DD44u;
    SET_GPR_U32(ctx, 31, 0x18DD4Cu);
    ctx->pc = 0x192EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192EE0u, 0x18DD44u, 0x18DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD4Cu;
label_18dd4c:
    // 0x18dd4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18dd50:
    // 0x18dd50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dd54:
    // 0x18dd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18dd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dd58:
    // 0x18dd58: 0x24a5fd50  addiu       $a1, $a1, -0x2B0
    ctx->pc = 0x18dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
label_18dd5c:
    // 0x18dd5c: 0xc064a64  jal         func_192990
label_18dd60:
    if (ctx->pc == 0x18DD60u) {
        ctx->pc = 0x18DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD5Cu;
        // 0x18dd60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD64u;
        goto label_18dd64;
    }
    ctx->pc = 0x18DD5Cu;
    SET_GPR_U32(ctx, 31, 0x18DD64u);
    ctx->pc = 0x18DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD5Cu;
    // 0x18dd60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x18DD5Cu, 0x18DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD64u;
label_18dd64:
    // 0x18dd64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18dd68:
    // 0x18dd68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18dd6c:
    // 0x18dd6c: 0x24a5fd50  addiu       $a1, $a1, -0x2B0
    ctx->pc = 0x18dd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966608));
label_18dd70:
    // 0x18dd70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18dd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dd74:
    // 0x18dd74: 0xc064a64  jal         func_192990
label_18dd78:
    if (ctx->pc == 0x18DD78u) {
        ctx->pc = 0x18DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD74u;
        // 0x18dd78: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD7Cu;
        goto label_18dd7c;
    }
    ctx->pc = 0x18DD74u;
    SET_GPR_U32(ctx, 31, 0x18DD7Cu);
    ctx->pc = 0x18DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD74u;
    // 0x18dd78: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x18DD74u, 0x18DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD7Cu;
label_18dd7c:
    // 0x18dd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dd80:
    // 0x18dd80: 0xc063e14  jal         func_18F850
label_18dd84:
    if (ctx->pc == 0x18DD84u) {
        ctx->pc = 0x18DD88u;
        goto label_18dd88;
    }
    ctx->pc = 0x18DD80u;
    SET_GPR_U32(ctx, 31, 0x18DD88u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18DD80u, 0x18DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD88u;
label_18dd88:
    // 0x18dd88: 0x10000171  b           . + 4 + (0x171 << 2)
label_18dd8c:
    if (ctx->pc == 0x18DD8Cu) {
        ctx->pc = 0x18DD90u;
        goto label_18dd90;
    }
    ctx->pc = 0x18DD88u;
    {
        const bool branch_taken_0x18dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd88) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18DD90u;
label_18dd90:
    // 0x18dd90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18dd94:
    // 0x18dd94: 0xc05f878  jal         func_17E1E0
label_18dd98:
    if (ctx->pc == 0x18DD98u) {
        ctx->pc = 0x18DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD94u;
        // 0x18dd98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD9Cu;
        goto label_18dd9c;
    }
    ctx->pc = 0x18DD94u;
    SET_GPR_U32(ctx, 31, 0x18DD9Cu);
    ctx->pc = 0x18DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD94u;
    // 0x18dd98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DD94u, 0x18DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD9Cu;
label_18dd9c:
    // 0x18dd9c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dda0:
    // 0x18dda0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18dda4:
    // 0x18dda4: 0x320f809  jalr        $t9
label_18dda8:
    if (ctx->pc == 0x18DDA8u) {
        ctx->pc = 0x18DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA4u;
        // 0x18dda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDACu;
        goto label_18ddac;
    }
    ctx->pc = 0x18DDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18DDACu);
        ctx->pc = 0x18DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA4u;
        // 0x18dda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DDA4u, 0x18DDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DDACu;
label_18ddac:
    // 0x18ddac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18ddb0:
    if (ctx->pc == 0x18DDB0u) {
        ctx->pc = 0x18DDB4u;
        goto label_18ddb4;
    }
    ctx->pc = 0x18DDACu;
    {
        const bool branch_taken_0x18ddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ddac) {
            ctx->pc = 0x18DE18u;
            goto label_18de18;
        }
    }
    ctx->pc = 0x18DDB4u;
label_18ddb4:
    // 0x18ddb4: 0x8e230474  lw          $v1, 0x474($s1)
    ctx->pc = 0x18ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
label_18ddb8:
    // 0x18ddb8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_18ddbc:
    if (ctx->pc == 0x18DDBCu) {
        ctx->pc = 0x18DDC0u;
        goto label_18ddc0;
    }
    ctx->pc = 0x18DDB8u;
    {
        const bool branch_taken_0x18ddb8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18ddb8) {
            ctx->pc = 0x18DDCCu;
            goto label_18ddcc;
        }
    }
    ctx->pc = 0x18DDC0u;
label_18ddc0:
    // 0x18ddc0: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x18ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
label_18ddc4:
    // 0x18ddc4: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
label_18ddc8:
    if (ctx->pc == 0x18DDC8u) {
        ctx->pc = 0x18DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDC4u;
        // 0x18ddc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDCCu;
        goto label_18ddcc;
    }
    ctx->pc = 0x18DDC4u;
    {
        const bool branch_taken_0x18ddc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDC4u;
        // 0x18ddc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddc4) {
            ctx->pc = 0x18DE10u;
            goto label_18de10;
        }
    }
    ctx->pc = 0x18DDCCu;
label_18ddcc:
    // 0x18ddcc: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
label_18ddd0:
    if (ctx->pc == 0x18DDD0u) {
        ctx->pc = 0x18DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDCCu;
        // 0x18ddd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDD4u;
        goto label_18ddd4;
    }
    ctx->pc = 0x18DDCCu;
    {
        const bool branch_taken_0x18ddcc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x18DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDCCu;
        // 0x18ddd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddcc) {
            ctx->pc = 0x18DDFCu;
            goto label_18ddfc;
        }
    }
    ctx->pc = 0x18DDD4u;
label_18ddd4:
    // 0x18ddd4: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18ddd8:
    // 0x18ddd8: 0x8e22271c  lw          $v0, 0x271C($s1)
    ctx->pc = 0x18ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10012)));
label_18dddc:
    // 0x18dddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18dde0:
    // 0x18dde0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18dde4:
    if (ctx->pc == 0x18DDE4u) {
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE0u;
        // 0x18dde4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDE8u;
        goto label_18dde8;
    }
    ctx->pc = 0x18DDE0u;
    {
        const bool branch_taken_0x18dde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE0u;
        // 0x18dde4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dde0) {
            ctx->pc = 0x18DE00u;
            goto label_18de00;
        }
    }
    ctx->pc = 0x18DDE8u;
label_18dde8:
    // 0x18dde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ddec:
    // 0x18ddec: 0xc063e08  jal         func_18F820
label_18ddf0:
    if (ctx->pc == 0x18DDF0u) {
        ctx->pc = 0x18DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDECu;
        // 0x18ddf0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDF4u;
        goto label_18ddf4;
    }
    ctx->pc = 0x18DDECu;
    SET_GPR_U32(ctx, 31, 0x18DDF4u);
    ctx->pc = 0x18DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DDECu;
    // 0x18ddf0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DDECu, 0x18DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DDF4u;
label_18ddf4:
    // 0x18ddf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_18ddf8:
    if (ctx->pc == 0x18DDF8u) {
        ctx->pc = 0x18DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDF4u;
        // 0x18ddf8: 0xc6210504  lwc1        $f1, 0x504($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDFCu;
        goto label_18ddfc;
    }
    ctx->pc = 0x18DDF4u;
    {
        const bool branch_taken_0x18ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDF4u;
        // 0x18ddf8: 0xc6210504  lwc1        $f1, 0x504($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddf4) {
            ctx->pc = 0x18DE1Cu;
            goto label_18de1c;
        }
    }
    ctx->pc = 0x18DDFCu;
label_18ddfc:
    // 0x18ddfc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18de00:
    // 0x18de00: 0xc063e08  jal         func_18F820
label_18de04:
    if (ctx->pc == 0x18DE04u) {
        ctx->pc = 0x18DE08u;
        goto label_18de08;
    }
    ctx->pc = 0x18DE00u;
    SET_GPR_U32(ctx, 31, 0x18DE08u);
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DE00u, 0x18DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE08u;
label_18de08:
    // 0x18de08: 0x10000003  b           . + 4 + (0x3 << 2)
label_18de0c:
    if (ctx->pc == 0x18DE0Cu) {
        ctx->pc = 0x18DE10u;
        goto label_18de10;
    }
    ctx->pc = 0x18DE08u;
    {
        const bool branch_taken_0x18de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de08) {
            ctx->pc = 0x18DE18u;
            goto label_18de18;
        }
    }
    ctx->pc = 0x18DE10u;
label_18de10:
    // 0x18de10: 0xc063e08  jal         func_18F820
label_18de14:
    if (ctx->pc == 0x18DE14u) {
        ctx->pc = 0x18DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE10u;
        // 0x18de14: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE18u;
        goto label_18de18;
    }
    ctx->pc = 0x18DE10u;
    SET_GPR_U32(ctx, 31, 0x18DE18u);
    ctx->pc = 0x18DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE10u;
    // 0x18de14: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DE10u, 0x18DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE18u;
label_18de18:
    // 0x18de18: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18de1c:
    // 0x18de1c: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
label_18de20:
    // 0x18de20: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
label_18de24:
    // 0x18de24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18de24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18de28:
    // 0x18de28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18de28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18de2c:
    // 0x18de2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18de30:
    // 0x18de30: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18de30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18de34:
    // 0x18de34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18de38:
    // 0x18de38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18de38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18de3c:
    // 0x18de3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18de3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18de40:
    // 0x18de40: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18de40u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_18de44:
    // 0x18de44: 0xc063270  jal         func_18C9C0
label_18de48:
    if (ctx->pc == 0x18DE48u) {
        ctx->pc = 0x18DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE44u;
        // 0x18de48: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE4Cu;
        goto label_18de4c;
    }
    ctx->pc = 0x18DE44u;
    SET_GPR_U32(ctx, 31, 0x18DE4Cu);
    ctx->pc = 0x18DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE44u;
    // 0x18de48: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DE44u, 0x18DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE4Cu;
label_18de4c:
    // 0x18de4c: 0x10000140  b           . + 4 + (0x140 << 2)
label_18de50:
    if (ctx->pc == 0x18DE50u) {
        ctx->pc = 0x18DE54u;
        goto label_18de54;
    }
    ctx->pc = 0x18DE4Cu;
    {
        const bool branch_taken_0x18de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de4c) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18DE54u;
label_18de54:
    // 0x18de54: 0xc62c0504  lwc1        $f12, 0x504($s1)
    ctx->pc = 0x18de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18de58:
    // 0x18de58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18de58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18de5c:
    // 0x18de5c: 0x0  nop
    ctx->pc = 0x18de5cu;
    // NOP
label_18de60:
    // 0x18de60: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18de60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18de64:
    // 0x18de64: 0x0  nop
    ctx->pc = 0x18de64u;
    // NOP
label_18de68:
    // 0x18de68: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
label_18de6c:
    if (ctx->pc == 0x18DE6Cu) {
        ctx->pc = 0x18DE70u;
        goto label_18de70;
    }
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18E0D8u;
            goto label_18e0d8;
        }
    }
    ctx->pc = 0x18DE70u;
label_18de70:
    // 0x18de70: 0xc082520  jal         func_209480
label_18de74:
    if (ctx->pc == 0x18DE74u) {
        ctx->pc = 0x18DE78u;
        goto label_18de78;
    }
    ctx->pc = 0x18DE70u;
    SET_GPR_U32(ctx, 31, 0x18DE78u);
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x18DE70u, 0x18DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE78u;
label_18de78:
    // 0x18de78: 0x3c04bfe9  lui         $a0, 0xBFE9
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49129 << 16));
label_18de7c:
    // 0x18de7c: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
label_18de80:
    // 0x18de80: 0x348421fb  ori         $a0, $a0, 0x21FB
    ctx->pc = 0x18de80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8699);
label_18de84:
    // 0x18de84: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x18de84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
label_18de88:
    // 0x18de88: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x18de88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_18de8c:
    // 0x18de8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18de8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18de90:
    // 0x18de90: 0xc0400fc  jal         func_1003F0
label_18de94:
    if (ctx->pc == 0x18DE94u) {
        ctx->pc = 0x18DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE90u;
        // 0x18de94: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE98u;
        goto label_18de98;
    }
    ctx->pc = 0x18DE90u;
    SET_GPR_U32(ctx, 31, 0x18DE98u);
    ctx->pc = 0x18DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE90u;
    // 0x18de94: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x18DE90u, 0x18DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE98u;
label_18de98:
    // 0x18de98: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_18de9c:
    if (ctx->pc == 0x18DE9Cu) {
        ctx->pc = 0x18DEA0u;
        goto label_18dea0;
    }
    ctx->pc = 0x18DE98u;
    {
        const bool branch_taken_0x18de98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de98) {
            ctx->pc = 0x18E0D8u;
            goto label_18e0d8;
        }
    }
    ctx->pc = 0x18DEA0u;
label_18dea0:
    // 0x18dea0: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18dea4:
    // 0x18dea4: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18dea8:
    // 0x18dea8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18deac:
    // 0x18deac: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18deb0:
    // 0x18deb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18deb4:
    // 0x18deb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18deb8:
    // 0x18deb8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18debc:
    // 0x18debc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18dec0:
    // 0x18dec0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_18dec4:
    // 0x18dec4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_18dec8:
    if (ctx->pc == 0x18DEC8u) {
        ctx->pc = 0x18DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEC4u;
        // 0x18dec8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DECCu;
        goto label_18decc;
    }
    ctx->pc = 0x18DEC4u;
    {
        const bool branch_taken_0x18dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEC4u;
        // 0x18dec8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dec4) {
            ctx->pc = 0x18DFF0u;
            goto label_18dff0;
        }
    }
    ctx->pc = 0x18DECCu;
label_18decc:
    // 0x18decc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ded0:
    // 0x18ded0: 0xc05f878  jal         func_17E1E0
label_18ded4:
    if (ctx->pc == 0x18DED4u) {
        ctx->pc = 0x18DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DED0u;
        // 0x18ded4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DED8u;
        goto label_18ded8;
    }
    ctx->pc = 0x18DED0u;
    SET_GPR_U32(ctx, 31, 0x18DED8u);
    ctx->pc = 0x18DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DED0u;
    // 0x18ded4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DED0u, 0x18DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DED8u;
label_18ded8:
    // 0x18ded8: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18dedc:
    // 0x18dedc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18dee0:
    // 0x18dee0: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18dee4:
    // 0x18dee4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18dee8:
    // 0x18dee8: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18deec:
    // 0x18deec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18deecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18def0:
    // 0x18def0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18def0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18def4:
    // 0x18def4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18def4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18def8:
    // 0x18def8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18defc:
    // 0x18defc: 0xc0532f4  jal         func_14CBD0
label_18df00:
    if (ctx->pc == 0x18DF00u) {
        ctx->pc = 0x18DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEFCu;
        // 0x18df00: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF04u;
        goto label_18df04;
    }
    ctx->pc = 0x18DEFCu;
    SET_GPR_U32(ctx, 31, 0x18DF04u);
    ctx->pc = 0x18DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEFCu;
    // 0x18df00: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18DEFCu, 0x18DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF04u;
label_18df04:
    // 0x18df04: 0x8e220458  lw          $v0, 0x458($s1)
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1112)));
label_18df08:
    // 0x18df08: 0xc062d50  jal         func_18B540
label_18df0c:
    if (ctx->pc == 0x18DF0Cu) {
        ctx->pc = 0x18DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF08u;
        // 0x18df0c: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF10u;
        goto label_18df10;
    }
    ctx->pc = 0x18DF08u;
    SET_GPR_U32(ctx, 31, 0x18DF10u);
    ctx->pc = 0x18DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF08u;
    // 0x18df0c: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DF08u, 0x18DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF10u;
label_18df10:
    // 0x18df10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18df14:
    // 0x18df14: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_18df18:
    // 0x18df18: 0xc062b5c  jal         func_18AD70
label_18df1c:
    if (ctx->pc == 0x18DF1Cu) {
        ctx->pc = 0x18DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF18u;
        // 0x18df1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF20u;
        goto label_18df20;
    }
    ctx->pc = 0x18DF18u;
    SET_GPR_U32(ctx, 31, 0x18DF20u);
    ctx->pc = 0x18DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF18u;
    // 0x18df1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18DF18u, 0x18DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF20u;
label_18df20:
    // 0x18df20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18df24:
    // 0x18df24: 0xc063e08  jal         func_18F820
label_18df28:
    if (ctx->pc == 0x18DF28u) {
        ctx->pc = 0x18DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF24u;
        // 0x18df28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF2Cu;
        goto label_18df2c;
    }
    ctx->pc = 0x18DF24u;
    SET_GPR_U32(ctx, 31, 0x18DF2Cu);
    ctx->pc = 0x18DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF24u;
    // 0x18df28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DF24u, 0x18DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF2Cu;
label_18df2c:
    // 0x18df2c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_18df30:
    // 0x18df30: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_18df34:
    // 0x18df34: 0x24a528e0  addiu       $a1, $a1, 0x28E0
    ctx->pc = 0x18df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10464));
label_18df38:
    // 0x18df38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18df38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18df3c:
    // 0x18df3c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18df3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_18df40:
    // 0x18df40: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18df44:
    // 0x18df44: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18df44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18df48:
    // 0x18df48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18df48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18df4c:
    // 0x18df4c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18df50:
    // 0x18df50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18df50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18df54:
    // 0x18df54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18df58:
    // 0x18df58: 0xc063e40  jal         func_18F900
label_18df5c:
    if (ctx->pc == 0x18DF5Cu) {
        ctx->pc = 0x18DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF58u;
        // 0x18df5c: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF60u;
        goto label_18df60;
    }
    ctx->pc = 0x18DF58u;
    SET_GPR_U32(ctx, 31, 0x18DF60u);
    ctx->pc = 0x18DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF58u;
    // 0x18df5c: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18DF58u, 0x18DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF60u;
label_18df60:
    // 0x18df60: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18df64:
    // 0x18df64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18df68:
    // 0x18df68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18df6c:
    // 0x18df6c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x18df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_18df70:
    // 0x18df70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18df70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18df74:
    // 0x18df74: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_18df78:
    // 0x18df78: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x18df78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
label_18df7c:
    // 0x18df7c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18df80:
    // 0x18df80: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18df84:
    // 0x18df84: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18df88:
    // 0x18df88: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_18df8c:
    // 0x18df8c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_18df90:
    // 0x18df90: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_18df94:
    // 0x18df94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18df94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18df98:
    // 0x18df98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18df9c:
    // 0x18df9c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x18df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_18dfa0:
    // 0x18dfa0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18dfa4:
    // 0x18dfa4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18dfa8:
    // 0x18dfa8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18dfac:
    // 0x18dfac: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_18dfb0:
    // 0x18dfb0: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_18dfb4:
    // 0x18dfb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_18dfb8:
    // 0x18dfb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18dfbc:
    // 0x18dfbc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18dfc0:
    // 0x18dfc0: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x18dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
label_18dfc4:
    // 0x18dfc4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18dfc8:
    // 0x18dfc8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18dfcc:
    // 0x18dfcc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dfd0:
    // 0x18dfd0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dfd4:
    // 0x18dfd4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18dfd8:
    // 0x18dfd8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_18dfdc:
    // 0x18dfdc: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x18dfdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
label_18dfe0:
    // 0x18dfe0: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x18dfe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
label_18dfe4:
    // 0x18dfe4: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x18dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
label_18dfe8:
    // 0x18dfe8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_18dfec:
    if (ctx->pc == 0x18DFECu) {
        ctx->pc = 0x18DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFE8u;
        // 0x18dfec: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFF0u;
        goto label_18dff0;
    }
    ctx->pc = 0x18DFE8u;
    {
        const bool branch_taken_0x18dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFE8u;
        // 0x18dfec: 0xac620280  sw          $v0, 0x280($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfe8) {
            ctx->pc = 0x18E0D8u;
            goto label_18e0d8;
        }
    }
    ctx->pc = 0x18DFF0u;
label_18dff0:
    // 0x18dff0: 0x8e220458  lw          $v0, 0x458($s1)
    ctx->pc = 0x18dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1112)));
label_18dff4:
    // 0x18dff4: 0xc062d50  jal         func_18B540
label_18dff8:
    if (ctx->pc == 0x18DFF8u) {
        ctx->pc = 0x18DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF4u;
        // 0x18dff8: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFFCu;
        goto label_18dffc;
    }
    ctx->pc = 0x18DFF4u;
    SET_GPR_U32(ctx, 31, 0x18DFFCu);
    ctx->pc = 0x18DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFF4u;
    // 0x18dff8: 0xae220454  sw          $v0, 0x454($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18DFF4u, 0x18DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFFCu;
label_18dffc:
    // 0x18dffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e000:
    // 0x18e000: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_18e004:
    // 0x18e004: 0xc062b5c  jal         func_18AD70
label_18e008:
    if (ctx->pc == 0x18E008u) {
        ctx->pc = 0x18E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E004u;
        // 0x18e008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E00Cu;
        goto label_18e00c;
    }
    ctx->pc = 0x18E004u;
    SET_GPR_U32(ctx, 31, 0x18E00Cu);
    ctx->pc = 0x18E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E004u;
    // 0x18e008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18E004u, 0x18E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E00Cu;
label_18e00c:
    // 0x18e00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e010:
    // 0x18e010: 0xc063e08  jal         func_18F820
label_18e014:
    if (ctx->pc == 0x18E014u) {
        ctx->pc = 0x18E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E010u;
        // 0x18e014: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E018u;
        goto label_18e018;
    }
    ctx->pc = 0x18E010u;
    SET_GPR_U32(ctx, 31, 0x18E018u);
    ctx->pc = 0x18E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E010u;
    // 0x18e014: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E010u, 0x18E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E018u;
label_18e018:
    // 0x18e018: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_18e01c:
    // 0x18e01c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x18e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_18e020:
    // 0x18e020: 0x24a528f0  addiu       $a1, $a1, 0x28F0
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10480));
label_18e024:
    // 0x18e024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e028:
    // 0x18e028: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18e028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_18e02c:
    // 0x18e02c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e030:
    // 0x18e030: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18e030u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_18e034:
    // 0x18e034: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18e034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18e038:
    // 0x18e038: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e03c:
    // 0x18e03c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18e040:
    // 0x18e040: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18e044:
    // 0x18e044: 0xc063e40  jal         func_18F900
label_18e048:
    if (ctx->pc == 0x18E048u) {
        ctx->pc = 0x18E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E044u;
        // 0x18e048: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E04Cu;
        goto label_18e04c;
    }
    ctx->pc = 0x18E044u;
    SET_GPR_U32(ctx, 31, 0x18E04Cu);
    ctx->pc = 0x18E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E044u;
    // 0x18e048: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18E044u, 0x18E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E04Cu;
label_18e04c:
    // 0x18e04c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e050:
    // 0x18e050: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e054:
    // 0x18e054: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18e058:
    // 0x18e058: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x18e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_18e05c:
    // 0x18e05c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e060:
    // 0x18e060: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18e060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_18e064:
    // 0x18e064: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x18e064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
label_18e068:
    // 0x18e068: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e06c:
    // 0x18e06c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e070:
    // 0x18e070: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e074:
    // 0x18e074: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_18e078:
    // 0x18e078: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18e078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_18e07c:
    // 0x18e07c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_18e080:
    // 0x18e080: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e084:
    // 0x18e084: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18e084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18e088:
    // 0x18e088: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x18e088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_18e08c:
    // 0x18e08c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e090:
    // 0x18e090: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18e090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e094:
    // 0x18e094: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_18e098:
    // 0x18e098: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18e098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_18e09c:
    // 0x18e09c: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x18e09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_18e0a0:
    // 0x18e0a0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_18e0a4:
    // 0x18e0a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18e0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18e0a8:
    // 0x18e0a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18e0ac:
    // 0x18e0ac: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x18e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
label_18e0b0:
    // 0x18e0b0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x18e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e0b4:
    // 0x18e0b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18e0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18e0b8:
    // 0x18e0b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e0bc:
    // 0x18e0bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e0c0:
    // 0x18e0c0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18e0c4:
    // 0x18e0c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_18e0c8:
    // 0x18e0c8: 0xe4620274  swc1        $f2, 0x274($v1)
    ctx->pc = 0x18e0c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
label_18e0cc:
    // 0x18e0cc: 0xe4610278  swc1        $f1, 0x278($v1)
    ctx->pc = 0x18e0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
label_18e0d0:
    // 0x18e0d0: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x18e0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
label_18e0d4:
    // 0x18e0d4: 0xac620280  sw          $v0, 0x280($v1)
    ctx->pc = 0x18e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
label_18e0d8:
    // 0x18e0d8: 0xc6210504  lwc1        $f1, 0x504($s1)
    ctx->pc = 0x18e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e0dc:
    // 0x18e0dc: 0x3c023d07  lui         $v0, 0x3D07
    ctx->pc = 0x18e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15623 << 16));
label_18e0e0:
    // 0x18e0e0: 0x344273c7  ori         $v0, $v0, 0x73C7
    ctx->pc = 0x18e0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29639);
label_18e0e4:
    // 0x18e0e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18e0e8:
    // 0x18e0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e0ec:
    // 0x18e0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e0f0:
    // 0x18e0f0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18e0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18e0f4:
    // 0x18e0f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18e0f8:
    // 0x18e0f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e0fc:
    // 0x18e0fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e100:
    // 0x18e100: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x18e100u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_18e104:
    // 0x18e104: 0xc063270  jal         func_18C9C0
label_18e108:
    if (ctx->pc == 0x18E108u) {
        ctx->pc = 0x18E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E104u;
        // 0x18e108: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E10Cu;
        goto label_18e10c;
    }
    ctx->pc = 0x18E104u;
    SET_GPR_U32(ctx, 31, 0x18E10Cu);
    ctx->pc = 0x18E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E104u;
    // 0x18e108: 0xe6200504  swc1        $f0, 0x504($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18E104u, 0x18E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E10Cu;
label_18e10c:
    // 0x18e10c: 0x10000090  b           . + 4 + (0x90 << 2)
label_18e110:
    if (ctx->pc == 0x18E110u) {
        ctx->pc = 0x18E114u;
        goto label_18e114;
    }
    ctx->pc = 0x18E10Cu;
    {
        const bool branch_taken_0x18e10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e10c) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E114u;
label_18e114:
    // 0x18e114: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x18e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18e118:
    // 0x18e118: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18e118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e11c:
    // 0x18e11c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18e120:
    // 0x18e120: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18e120u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e124:
    // 0x18e124: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18e124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e128:
    // 0x18e128: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18e128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e12c:
    // 0x18e12c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e130:
    // 0x18e130: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18e134:
    // 0x18e134: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x18e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_18e138:
    // 0x18e138: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_18e13c:
    if (ctx->pc == 0x18E13Cu) {
        ctx->pc = 0x18E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E138u;
        // 0x18e13c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E140u;
        goto label_18e140;
    }
    ctx->pc = 0x18E138u;
    {
        const bool branch_taken_0x18e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E138u;
        // 0x18e13c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e138) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E140u;
label_18e140:
    // 0x18e140: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e144:
    // 0x18e144: 0xc05f878  jal         func_17E1E0
label_18e148:
    if (ctx->pc == 0x18E148u) {
        ctx->pc = 0x18E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E144u;
        // 0x18e148: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E14Cu;
        goto label_18e14c;
    }
    ctx->pc = 0x18E144u;
    SET_GPR_U32(ctx, 31, 0x18E14Cu);
    ctx->pc = 0x18E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E144u;
    // 0x18e148: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E144u, 0x18E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E14Cu;
label_18e14c:
    // 0x18e14c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e150:
    // 0x18e150: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18e150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18e154:
    // 0x18e154: 0x320f809  jalr        $t9
label_18e158:
    if (ctx->pc == 0x18E158u) {
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E15Cu;
        goto label_18e15c;
    }
    ctx->pc = 0x18E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E15Cu);
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E154u, 0x18E15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E15Cu;
label_18e15c:
    // 0x18e15c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_18e160:
    if (ctx->pc == 0x18E160u) {
        ctx->pc = 0x18E164u;
        goto label_18e164;
    }
    ctx->pc = 0x18E15Cu;
    {
        const bool branch_taken_0x18e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e15c) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E164u;
label_18e164:
    // 0x18e164: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e168:
    // 0x18e168: 0xc04c6dc  jal         func_131B70
label_18e16c:
    if (ctx->pc == 0x18E16Cu) {
        ctx->pc = 0x18E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E168u;
        // 0x18e16c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E170u;
        goto label_18e170;
    }
    ctx->pc = 0x18E168u;
    SET_GPR_U32(ctx, 31, 0x18E170u);
    ctx->pc = 0x18E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E168u;
    // 0x18e16c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x18E168u, 0x18E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E170u;
label_18e170:
    // 0x18e170: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18e170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_18e174:
    // 0x18e174: 0xc046458  jal         func_119160
label_18e178:
    if (ctx->pc == 0x18E178u) {
        ctx->pc = 0x18E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E174u;
        // 0x18e178: 0x2484fd58  addiu       $a0, $a0, -0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E17Cu;
        goto label_18e17c;
    }
    ctx->pc = 0x18E174u;
    SET_GPR_U32(ctx, 31, 0x18E17Cu);
    ctx->pc = 0x18E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E174u;
    // 0x18e178: 0x2484fd58  addiu       $a0, $a0, -0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x18E174u, 0x18E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E17Cu;
label_18e17c:
    // 0x18e17c: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x18e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_18e180:
    // 0x18e180: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18e184:
    // 0x18e184: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18e188:
    // 0x18e188: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18e18c:
    // 0x18e18c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e190:
    // 0x18e190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e194:
    // 0x18e194: 0xc046680  jal         func_119A00
label_18e198:
    if (ctx->pc == 0x18E198u) {
        ctx->pc = 0x18E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E194u;
        // 0x18e198: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E19Cu;
        goto label_18e19c;
    }
    ctx->pc = 0x18E194u;
    SET_GPR_U32(ctx, 31, 0x18E19Cu);
    ctx->pc = 0x18E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E194u;
    // 0x18e198: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A00u, 0x18E194u, 0x18E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E19Cu;
label_18e19c:
    // 0x18e19c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18e1a0:
    // 0x18e1a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e1a4:
    // 0x18e1a4: 0xc05f878  jal         func_17E1E0
label_18e1a8:
    if (ctx->pc == 0x18E1A8u) {
        ctx->pc = 0x18E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1A4u;
        // 0x18e1a8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1ACu;
        goto label_18e1ac;
    }
    ctx->pc = 0x18E1A4u;
    SET_GPR_U32(ctx, 31, 0x18E1ACu);
    ctx->pc = 0x18E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1A4u;
    // 0x18e1a8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E1A4u, 0x18E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1ACu;
label_18e1ac:
    // 0x18e1ac: 0x8e260450  lw          $a2, 0x450($s1)
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_18e1b0:
    // 0x18e1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1b4:
    // 0x18e1b4: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e1b8:
    // 0x18e1b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_18e1bc:
    // 0x18e1bc: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18e1c0:
    // 0x18e1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e1c4:
    // 0x18e1c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e1c8:
    // 0x18e1c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e1cc:
    // 0x18e1cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e1d0:
    // 0x18e1d0: 0xc0532f4  jal         func_14CBD0
label_18e1d4:
    if (ctx->pc == 0x18E1D4u) {
        ctx->pc = 0x18E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1D0u;
        // 0x18e1d4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1D8u;
        goto label_18e1d8;
    }
    ctx->pc = 0x18E1D0u;
    SET_GPR_U32(ctx, 31, 0x18E1D8u);
    ctx->pc = 0x18E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1D0u;
    // 0x18e1d4: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18E1D0u, 0x18E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1D8u;
label_18e1d8:
    // 0x18e1d8: 0xc062d50  jal         func_18B540
label_18e1dc:
    if (ctx->pc == 0x18E1DCu) {
        ctx->pc = 0x18E1E0u;
        goto label_18e1e0;
    }
    ctx->pc = 0x18E1D8u;
    SET_GPR_U32(ctx, 31, 0x18E1E0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18E1D8u, 0x18E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1E0u;
label_18e1e0:
    // 0x18e1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1e4:
    // 0x18e1e4: 0x240500e3  addiu       $a1, $zero, 0xE3
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
label_18e1e8:
    // 0x18e1e8: 0xc062b5c  jal         func_18AD70
label_18e1ec:
    if (ctx->pc == 0x18E1ECu) {
        ctx->pc = 0x18E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1E8u;
        // 0x18e1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1F0u;
        goto label_18e1f0;
    }
    ctx->pc = 0x18E1E8u;
    SET_GPR_U32(ctx, 31, 0x18E1F0u);
    ctx->pc = 0x18E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1E8u;
    // 0x18e1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18E1E8u, 0x18E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F0u;
label_18e1f0:
    // 0x18e1f0: 0xc062d50  jal         func_18B540
label_18e1f4:
    if (ctx->pc == 0x18E1F4u) {
        ctx->pc = 0x18E1F8u;
        goto label_18e1f8;
    }
    ctx->pc = 0x18E1F0u;
    SET_GPR_U32(ctx, 31, 0x18E1F8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18E1F0u, 0x18E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F8u;
label_18e1f8:
    // 0x18e1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1fc:
    // 0x18e1fc: 0x240500ee  addiu       $a1, $zero, 0xEE
    ctx->pc = 0x18e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_18e200:
    // 0x18e200: 0xc062b5c  jal         func_18AD70
label_18e204:
    if (ctx->pc == 0x18E204u) {
        ctx->pc = 0x18E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E200u;
        // 0x18e204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E208u;
        goto label_18e208;
    }
    ctx->pc = 0x18E200u;
    SET_GPR_U32(ctx, 31, 0x18E208u);
    ctx->pc = 0x18E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E200u;
    // 0x18e204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18E200u, 0x18E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E208u;
label_18e208:
    // 0x18e208: 0xc063e14  jal         func_18F850
label_18e20c:
    if (ctx->pc == 0x18E20Cu) {
        ctx->pc = 0x18E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E208u;
        // 0x18e20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E210u;
        goto label_18e210;
    }
    ctx->pc = 0x18E208u;
    SET_GPR_U32(ctx, 31, 0x18E210u);
    ctx->pc = 0x18E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E208u;
    // 0x18e20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18E208u, 0x18E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E210u;
label_18e210:
    // 0x18e210: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x18e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e214:
    // 0x18e214: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x18e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_18e218:
    // 0x18e218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e21c:
    // 0x18e21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e220:
    // 0x18e220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e224:
    // 0x18e224: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e228:
    // 0x18e228: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e22c:
    // 0x18e22c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x18e22cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_18e230:
    // 0x18e230: 0xc063de0  jal         func_18F780
label_18e234:
    if (ctx->pc == 0x18E234u) {
        ctx->pc = 0x18E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E230u;
        // 0x18e234: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E238u;
        goto label_18e238;
    }
    ctx->pc = 0x18E230u;
    SET_GPR_U32(ctx, 31, 0x18E238u);
    ctx->pc = 0x18E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E230u;
    // 0x18e234: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x18E230u, 0x18E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E238u;
label_18e238:
    // 0x18e238: 0x10000045  b           . + 4 + (0x45 << 2)
label_18e23c:
    if (ctx->pc == 0x18E23Cu) {
        ctx->pc = 0x18E240u;
        goto label_18e240;
    }
    ctx->pc = 0x18E238u;
    {
        const bool branch_taken_0x18e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e238) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E240u;
label_18e240:
    // 0x18e240: 0xc067f08  jal         func_19FC20
label_18e244:
    if (ctx->pc == 0x18E244u) {
        ctx->pc = 0x18E248u;
        goto label_18e248;
    }
    ctx->pc = 0x18E240u;
    SET_GPR_U32(ctx, 31, 0x18E248u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18E240u, 0x18E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E248u;
label_18e248:
    // 0x18e248: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18e24c:
    if (ctx->pc == 0x18E24Cu) {
        ctx->pc = 0x18E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E248u;
        // 0x18e24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E250u;
        goto label_18e250;
    }
    ctx->pc = 0x18E248u;
    {
        const bool branch_taken_0x18e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E248u;
        // 0x18e24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e248) {
            ctx->pc = 0x18E26Cu;
            goto label_18e26c;
        }
    }
    ctx->pc = 0x18E250u;
label_18e250:
    // 0x18e250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e254:
    // 0x18e254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e258:
    // 0x18e258: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x18e258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_18e25c:
    // 0x18e25c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x18e25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18e260:
    // 0x18e260: 0xc064f00  jal         func_193C00
label_18e264:
    if (ctx->pc == 0x18E264u) {
        ctx->pc = 0x18E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E260u;
        // 0x18e264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E268u;
        goto label_18e268;
    }
    ctx->pc = 0x18E260u;
    SET_GPR_U32(ctx, 31, 0x18E268u);
    ctx->pc = 0x18E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E260u;
    // 0x18e264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x18E260u, 0x18E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E268u;
label_18e268:
    // 0x18e268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e26c:
    // 0x18e26c: 0xc063e14  jal         func_18F850
label_18e270:
    if (ctx->pc == 0x18E270u) {
        ctx->pc = 0x18E274u;
        goto label_18e274;
    }
    ctx->pc = 0x18E26Cu;
    SET_GPR_U32(ctx, 31, 0x18E274u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18E26Cu, 0x18E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E274u;
label_18e274:
    // 0x18e274: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e278:
    // 0x18e278: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_18e27c:
    // 0x18e27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e280:
    // 0x18e280: 0x0  nop
    ctx->pc = 0x18e280u;
    // NOP
label_18e284:
    // 0x18e284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e288:
    // 0x18e288: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e28c:
    // 0x18e28c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x18e28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_18e290:
    // 0x18e290: 0x0  nop
    ctx->pc = 0x18e290u;
    // NOP
label_18e294:
    // 0x18e294: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_18e298:
    if (ctx->pc == 0x18E298u) {
        ctx->pc = 0x18E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E294u;
        // 0x18e298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E29Cu;
        goto label_18e29c;
    }
    ctx->pc = 0x18E294u;
    {
        const bool branch_taken_0x18e294 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E294u;
        // 0x18e298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e294) {
            ctx->pc = 0x18E2A0u;
            goto label_18e2a0;
        }
    }
    ctx->pc = 0x18E29Cu;
label_18e29c:
    // 0x18e29c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18e29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_18e2a0:
    // 0x18e2a0: 0xc063de0  jal         func_18F780
label_18e2a4:
    if (ctx->pc == 0x18E2A4u) {
        ctx->pc = 0x18E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2A0u;
        // 0x18e2a4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2A8u;
        goto label_18e2a8;
    }
    ctx->pc = 0x18E2A0u;
    SET_GPR_U32(ctx, 31, 0x18E2A8u);
    ctx->pc = 0x18E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2A0u;
    // 0x18e2a4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x18E2A0u, 0x18E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2A8u;
label_18e2a8:
    // 0x18e2a8: 0x10000029  b           . + 4 + (0x29 << 2)
label_18e2ac:
    if (ctx->pc == 0x18E2ACu) {
        ctx->pc = 0x18E2B0u;
        goto label_18e2b0;
    }
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E2B0u;
label_18e2b0:
    // 0x18e2b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18e2b4:
    // 0x18e2b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e2b8:
    // 0x18e2b8: 0xc05f878  jal         func_17E1E0
label_18e2bc:
    if (ctx->pc == 0x18E2BCu) {
        ctx->pc = 0x18E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2B8u;
        // 0x18e2bc: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2C0u;
        goto label_18e2c0;
    }
    ctx->pc = 0x18E2B8u;
    SET_GPR_U32(ctx, 31, 0x18E2C0u);
    ctx->pc = 0x18E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2B8u;
    // 0x18e2bc: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E2B8u, 0x18E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2C0u;
label_18e2c0:
    // 0x18e2c0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e2c4:
    // 0x18e2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e2c8:
    // 0x18e2c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x18e2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_18e2cc:
    // 0x18e2cc: 0x320f809  jalr        $t9
label_18e2d0:
    if (ctx->pc == 0x18E2D0u) {
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2CCu;
        // 0x18e2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2D4u;
        goto label_18e2d4;
    }
    ctx->pc = 0x18E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E2D4u);
        ctx->pc = 0x18E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2CCu;
        // 0x18e2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E2CCu, 0x18E2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E2D4u;
label_18e2d4:
    // 0x18e2d4: 0xc067f08  jal         func_19FC20
label_18e2d8:
    if (ctx->pc == 0x18E2D8u) {
        ctx->pc = 0x18E2DCu;
        goto label_18e2dc;
    }
    ctx->pc = 0x18E2D4u;
    SET_GPR_U32(ctx, 31, 0x18E2DCu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x18E2D4u, 0x18E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2DCu;
label_18e2dc:
    // 0x18e2dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18e2e0:
    if (ctx->pc == 0x18E2E0u) {
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2E4u;
        goto label_18e2e4;
    }
    ctx->pc = 0x18E2DCu;
    {
        const bool branch_taken_0x18e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2dc) {
            ctx->pc = 0x18E2F8u;
            goto label_18e2f8;
        }
    }
    ctx->pc = 0x18E2E4u;
label_18e2e4:
    // 0x18e2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e2e8:
    // 0x18e2e8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_18e2ec:
    // 0x18e2ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18e2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e2f0:
    // 0x18e2f0: 0xc064f00  jal         func_193C00
label_18e2f4:
    if (ctx->pc == 0x18E2F4u) {
        ctx->pc = 0x18E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F0u;
        // 0x18e2f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2F8u;
        goto label_18e2f8;
    }
    ctx->pc = 0x18E2F0u;
    SET_GPR_U32(ctx, 31, 0x18E2F8u);
    ctx->pc = 0x18E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2F0u;
    // 0x18e2f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x18E2F0u, 0x18E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2F8u;
label_18e2f8:
    // 0x18e2f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18e2fc:
    // 0x18e2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e300:
    // 0x18e300: 0xae222720  sw          $v0, 0x2720($s1)
    ctx->pc = 0x18e300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 2));
label_18e304:
    // 0x18e304: 0xc063e08  jal         func_18F820
label_18e308:
    if (ctx->pc == 0x18E308u) {
        ctx->pc = 0x18E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E304u;
        // 0x18e308: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E30Cu;
        goto label_18e30c;
    }
    ctx->pc = 0x18E304u;
    SET_GPR_U32(ctx, 31, 0x18E30Cu);
    ctx->pc = 0x18E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E304u;
    // 0x18e308: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E304u, 0x18E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E30Cu;
label_18e30c:
    // 0x18e30c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e310:
    // 0x18e310: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_18e314:
    // 0x18e314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e318:
    // 0x18e318: 0x0  nop
    ctx->pc = 0x18e318u;
    // NOP
label_18e31c:
    // 0x18e31c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e320:
    // 0x18e320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e324:
    // 0x18e324: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x18e324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_18e328:
    // 0x18e328: 0x0  nop
    ctx->pc = 0x18e328u;
    // NOP
label_18e32c:
    // 0x18e32c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_18e330:
    if (ctx->pc == 0x18E330u) {
        ctx->pc = 0x18E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E32Cu;
        // 0x18e330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E334u;
        goto label_18e334;
    }
    ctx->pc = 0x18E32Cu;
    {
        const bool branch_taken_0x18e32c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E32Cu;
        // 0x18e330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e32c) {
            ctx->pc = 0x18E338u;
            goto label_18e338;
        }
    }
    ctx->pc = 0x18E334u;
label_18e334:
    // 0x18e334: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_18e338:
    // 0x18e338: 0xc063de0  jal         func_18F780
label_18e33c:
    if (ctx->pc == 0x18E33Cu) {
        ctx->pc = 0x18E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E338u;
        // 0x18e33c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E340u;
        goto label_18e340;
    }
    ctx->pc = 0x18E338u;
    SET_GPR_U32(ctx, 31, 0x18E340u);
    ctx->pc = 0x18E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E338u;
    // 0x18e33c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x18E338u, 0x18E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E340u;
label_18e340:
    // 0x18e340: 0x10000003  b           . + 4 + (0x3 << 2)
label_18e344:
    if (ctx->pc == 0x18E344u) {
        ctx->pc = 0x18E348u;
        goto label_18e348;
    }
    ctx->pc = 0x18E340u;
    {
        const bool branch_taken_0x18e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e340) {
            ctx->pc = 0x18E350u;
            goto label_18e350;
        }
    }
    ctx->pc = 0x18E348u;
label_18e348:
    // 0x18e348: 0xc063e34  jal         func_18F8D0
label_18e34c:
    if (ctx->pc == 0x18E34Cu) {
        ctx->pc = 0x18E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E348u;
        // 0x18e34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E350u;
        goto label_18e350;
    }
    ctx->pc = 0x18E348u;
    SET_GPR_U32(ctx, 31, 0x18E350u);
    ctx->pc = 0x18E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E348u;
    // 0x18e34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x18E348u, 0x18E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E350u;
label_18e350:
    // 0x18e350: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18e350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
label_18e354:
    // 0x18e354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18e358:
    // 0x18e358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e35c:
    // 0x18e35c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e360:
    // 0x18e360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18e364:
    // 0x18e364: 0x3e00008  jr          $ra
label_18e368:
    if (ctx->pc == 0x18E368u) {
        ctx->pc = 0x18E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E364u;
        // 0x18e368: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E36Cu;
        goto label_fallthrough_0x18e364;
    }
    ctx->pc = 0x18E364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E364u;
        // 0x18e368: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e364:
    ctx->pc = 0x18E36Cu;
}
