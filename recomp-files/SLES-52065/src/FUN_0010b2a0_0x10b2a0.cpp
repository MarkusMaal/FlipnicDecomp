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

// Function: FUN_0010b2a0
// Address: 0x10b2a0 - 0x10bca0
void FUN_0010b2a0_0x10b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010b2a0_0x10b2a0");
#endif

    switch (ctx->pc) {
        case 0x10b2a0u: goto label_10b2a0;
        case 0x10b2a4u: goto label_10b2a4;
        case 0x10b2a8u: goto label_10b2a8;
        case 0x10b2acu: goto label_10b2ac;
        case 0x10b2b0u: goto label_10b2b0;
        case 0x10b2b4u: goto label_10b2b4;
        case 0x10b2b8u: goto label_10b2b8;
        case 0x10b2bcu: goto label_10b2bc;
        case 0x10b2c0u: goto label_10b2c0;
        case 0x10b2c4u: goto label_10b2c4;
        case 0x10b2c8u: goto label_10b2c8;
        case 0x10b2ccu: goto label_10b2cc;
        case 0x10b2d0u: goto label_10b2d0;
        case 0x10b2d4u: goto label_10b2d4;
        case 0x10b2d8u: goto label_10b2d8;
        case 0x10b2dcu: goto label_10b2dc;
        case 0x10b2e0u: goto label_10b2e0;
        case 0x10b2e4u: goto label_10b2e4;
        case 0x10b2e8u: goto label_10b2e8;
        case 0x10b2ecu: goto label_10b2ec;
        case 0x10b2f0u: goto label_10b2f0;
        case 0x10b2f4u: goto label_10b2f4;
        case 0x10b2f8u: goto label_10b2f8;
        case 0x10b2fcu: goto label_10b2fc;
        case 0x10b300u: goto label_10b300;
        case 0x10b304u: goto label_10b304;
        case 0x10b308u: goto label_10b308;
        case 0x10b30cu: goto label_10b30c;
        case 0x10b310u: goto label_10b310;
        case 0x10b314u: goto label_10b314;
        case 0x10b318u: goto label_10b318;
        case 0x10b31cu: goto label_10b31c;
        case 0x10b320u: goto label_10b320;
        case 0x10b324u: goto label_10b324;
        case 0x10b328u: goto label_10b328;
        case 0x10b32cu: goto label_10b32c;
        case 0x10b330u: goto label_10b330;
        case 0x10b334u: goto label_10b334;
        case 0x10b338u: goto label_10b338;
        case 0x10b33cu: goto label_10b33c;
        case 0x10b340u: goto label_10b340;
        case 0x10b344u: goto label_10b344;
        case 0x10b348u: goto label_10b348;
        case 0x10b34cu: goto label_10b34c;
        case 0x10b350u: goto label_10b350;
        case 0x10b354u: goto label_10b354;
        case 0x10b358u: goto label_10b358;
        case 0x10b35cu: goto label_10b35c;
        case 0x10b360u: goto label_10b360;
        case 0x10b364u: goto label_10b364;
        case 0x10b368u: goto label_10b368;
        case 0x10b36cu: goto label_10b36c;
        case 0x10b370u: goto label_10b370;
        case 0x10b374u: goto label_10b374;
        case 0x10b378u: goto label_10b378;
        case 0x10b37cu: goto label_10b37c;
        case 0x10b380u: goto label_10b380;
        case 0x10b384u: goto label_10b384;
        case 0x10b388u: goto label_10b388;
        case 0x10b38cu: goto label_10b38c;
        case 0x10b390u: goto label_10b390;
        case 0x10b394u: goto label_10b394;
        case 0x10b398u: goto label_10b398;
        case 0x10b39cu: goto label_10b39c;
        case 0x10b3a0u: goto label_10b3a0;
        case 0x10b3a4u: goto label_10b3a4;
        case 0x10b3a8u: goto label_10b3a8;
        case 0x10b3acu: goto label_10b3ac;
        case 0x10b3b0u: goto label_10b3b0;
        case 0x10b3b4u: goto label_10b3b4;
        case 0x10b3b8u: goto label_10b3b8;
        case 0x10b3bcu: goto label_10b3bc;
        case 0x10b3c0u: goto label_10b3c0;
        case 0x10b3c4u: goto label_10b3c4;
        case 0x10b3c8u: goto label_10b3c8;
        case 0x10b3ccu: goto label_10b3cc;
        case 0x10b3d0u: goto label_10b3d0;
        case 0x10b3d4u: goto label_10b3d4;
        case 0x10b3d8u: goto label_10b3d8;
        case 0x10b3dcu: goto label_10b3dc;
        case 0x10b3e0u: goto label_10b3e0;
        case 0x10b3e4u: goto label_10b3e4;
        case 0x10b3e8u: goto label_10b3e8;
        case 0x10b3ecu: goto label_10b3ec;
        case 0x10b3f0u: goto label_10b3f0;
        case 0x10b3f4u: goto label_10b3f4;
        case 0x10b3f8u: goto label_10b3f8;
        case 0x10b3fcu: goto label_10b3fc;
        case 0x10b400u: goto label_10b400;
        case 0x10b404u: goto label_10b404;
        case 0x10b408u: goto label_10b408;
        case 0x10b40cu: goto label_10b40c;
        case 0x10b410u: goto label_10b410;
        case 0x10b414u: goto label_10b414;
        case 0x10b418u: goto label_10b418;
        case 0x10b41cu: goto label_10b41c;
        case 0x10b420u: goto label_10b420;
        case 0x10b424u: goto label_10b424;
        case 0x10b428u: goto label_10b428;
        case 0x10b42cu: goto label_10b42c;
        case 0x10b430u: goto label_10b430;
        case 0x10b434u: goto label_10b434;
        case 0x10b438u: goto label_10b438;
        case 0x10b43cu: goto label_10b43c;
        case 0x10b440u: goto label_10b440;
        case 0x10b444u: goto label_10b444;
        case 0x10b448u: goto label_10b448;
        case 0x10b44cu: goto label_10b44c;
        case 0x10b450u: goto label_10b450;
        case 0x10b454u: goto label_10b454;
        case 0x10b458u: goto label_10b458;
        case 0x10b45cu: goto label_10b45c;
        case 0x10b460u: goto label_10b460;
        case 0x10b464u: goto label_10b464;
        case 0x10b468u: goto label_10b468;
        case 0x10b46cu: goto label_10b46c;
        case 0x10b470u: goto label_10b470;
        case 0x10b474u: goto label_10b474;
        case 0x10b478u: goto label_10b478;
        case 0x10b47cu: goto label_10b47c;
        case 0x10b480u: goto label_10b480;
        case 0x10b484u: goto label_10b484;
        case 0x10b488u: goto label_10b488;
        case 0x10b48cu: goto label_10b48c;
        case 0x10b490u: goto label_10b490;
        case 0x10b494u: goto label_10b494;
        case 0x10b498u: goto label_10b498;
        case 0x10b49cu: goto label_10b49c;
        case 0x10b4a0u: goto label_10b4a0;
        case 0x10b4a4u: goto label_10b4a4;
        case 0x10b4a8u: goto label_10b4a8;
        case 0x10b4acu: goto label_10b4ac;
        case 0x10b4b0u: goto label_10b4b0;
        case 0x10b4b4u: goto label_10b4b4;
        case 0x10b4b8u: goto label_10b4b8;
        case 0x10b4bcu: goto label_10b4bc;
        case 0x10b4c0u: goto label_10b4c0;
        case 0x10b4c4u: goto label_10b4c4;
        case 0x10b4c8u: goto label_10b4c8;
        case 0x10b4ccu: goto label_10b4cc;
        case 0x10b4d0u: goto label_10b4d0;
        case 0x10b4d4u: goto label_10b4d4;
        case 0x10b4d8u: goto label_10b4d8;
        case 0x10b4dcu: goto label_10b4dc;
        case 0x10b4e0u: goto label_10b4e0;
        case 0x10b4e4u: goto label_10b4e4;
        case 0x10b4e8u: goto label_10b4e8;
        case 0x10b4ecu: goto label_10b4ec;
        case 0x10b4f0u: goto label_10b4f0;
        case 0x10b4f4u: goto label_10b4f4;
        case 0x10b4f8u: goto label_10b4f8;
        case 0x10b4fcu: goto label_10b4fc;
        case 0x10b500u: goto label_10b500;
        case 0x10b504u: goto label_10b504;
        case 0x10b508u: goto label_10b508;
        case 0x10b50cu: goto label_10b50c;
        case 0x10b510u: goto label_10b510;
        case 0x10b514u: goto label_10b514;
        case 0x10b518u: goto label_10b518;
        case 0x10b51cu: goto label_10b51c;
        case 0x10b520u: goto label_10b520;
        case 0x10b524u: goto label_10b524;
        case 0x10b528u: goto label_10b528;
        case 0x10b52cu: goto label_10b52c;
        case 0x10b530u: goto label_10b530;
        case 0x10b534u: goto label_10b534;
        case 0x10b538u: goto label_10b538;
        case 0x10b53cu: goto label_10b53c;
        case 0x10b540u: goto label_10b540;
        case 0x10b544u: goto label_10b544;
        case 0x10b548u: goto label_10b548;
        case 0x10b54cu: goto label_10b54c;
        case 0x10b550u: goto label_10b550;
        case 0x10b554u: goto label_10b554;
        case 0x10b558u: goto label_10b558;
        case 0x10b55cu: goto label_10b55c;
        case 0x10b560u: goto label_10b560;
        case 0x10b564u: goto label_10b564;
        case 0x10b568u: goto label_10b568;
        case 0x10b56cu: goto label_10b56c;
        case 0x10b570u: goto label_10b570;
        case 0x10b574u: goto label_10b574;
        case 0x10b578u: goto label_10b578;
        case 0x10b57cu: goto label_10b57c;
        case 0x10b580u: goto label_10b580;
        case 0x10b584u: goto label_10b584;
        case 0x10b588u: goto label_10b588;
        case 0x10b58cu: goto label_10b58c;
        case 0x10b590u: goto label_10b590;
        case 0x10b594u: goto label_10b594;
        case 0x10b598u: goto label_10b598;
        case 0x10b59cu: goto label_10b59c;
        case 0x10b5a0u: goto label_10b5a0;
        case 0x10b5a4u: goto label_10b5a4;
        case 0x10b5a8u: goto label_10b5a8;
        case 0x10b5acu: goto label_10b5ac;
        case 0x10b5b0u: goto label_10b5b0;
        case 0x10b5b4u: goto label_10b5b4;
        case 0x10b5b8u: goto label_10b5b8;
        case 0x10b5bcu: goto label_10b5bc;
        case 0x10b5c0u: goto label_10b5c0;
        case 0x10b5c4u: goto label_10b5c4;
        case 0x10b5c8u: goto label_10b5c8;
        case 0x10b5ccu: goto label_10b5cc;
        case 0x10b5d0u: goto label_10b5d0;
        case 0x10b5d4u: goto label_10b5d4;
        case 0x10b5d8u: goto label_10b5d8;
        case 0x10b5dcu: goto label_10b5dc;
        case 0x10b5e0u: goto label_10b5e0;
        case 0x10b5e4u: goto label_10b5e4;
        case 0x10b5e8u: goto label_10b5e8;
        case 0x10b5ecu: goto label_10b5ec;
        case 0x10b5f0u: goto label_10b5f0;
        case 0x10b5f4u: goto label_10b5f4;
        case 0x10b5f8u: goto label_10b5f8;
        case 0x10b5fcu: goto label_10b5fc;
        case 0x10b600u: goto label_10b600;
        case 0x10b604u: goto label_10b604;
        case 0x10b608u: goto label_10b608;
        case 0x10b60cu: goto label_10b60c;
        case 0x10b610u: goto label_10b610;
        case 0x10b614u: goto label_10b614;
        case 0x10b618u: goto label_10b618;
        case 0x10b61cu: goto label_10b61c;
        case 0x10b620u: goto label_10b620;
        case 0x10b624u: goto label_10b624;
        case 0x10b628u: goto label_10b628;
        case 0x10b62cu: goto label_10b62c;
        case 0x10b630u: goto label_10b630;
        case 0x10b634u: goto label_10b634;
        case 0x10b638u: goto label_10b638;
        case 0x10b63cu: goto label_10b63c;
        case 0x10b640u: goto label_10b640;
        case 0x10b644u: goto label_10b644;
        case 0x10b648u: goto label_10b648;
        case 0x10b64cu: goto label_10b64c;
        case 0x10b650u: goto label_10b650;
        case 0x10b654u: goto label_10b654;
        case 0x10b658u: goto label_10b658;
        case 0x10b65cu: goto label_10b65c;
        case 0x10b660u: goto label_10b660;
        case 0x10b664u: goto label_10b664;
        case 0x10b668u: goto label_10b668;
        case 0x10b66cu: goto label_10b66c;
        case 0x10b670u: goto label_10b670;
        case 0x10b674u: goto label_10b674;
        case 0x10b678u: goto label_10b678;
        case 0x10b67cu: goto label_10b67c;
        case 0x10b680u: goto label_10b680;
        case 0x10b684u: goto label_10b684;
        case 0x10b688u: goto label_10b688;
        case 0x10b68cu: goto label_10b68c;
        case 0x10b690u: goto label_10b690;
        case 0x10b694u: goto label_10b694;
        case 0x10b698u: goto label_10b698;
        case 0x10b69cu: goto label_10b69c;
        case 0x10b6a0u: goto label_10b6a0;
        case 0x10b6a4u: goto label_10b6a4;
        case 0x10b6a8u: goto label_10b6a8;
        case 0x10b6acu: goto label_10b6ac;
        case 0x10b6b0u: goto label_10b6b0;
        case 0x10b6b4u: goto label_10b6b4;
        case 0x10b6b8u: goto label_10b6b8;
        case 0x10b6bcu: goto label_10b6bc;
        case 0x10b6c0u: goto label_10b6c0;
        case 0x10b6c4u: goto label_10b6c4;
        case 0x10b6c8u: goto label_10b6c8;
        case 0x10b6ccu: goto label_10b6cc;
        case 0x10b6d0u: goto label_10b6d0;
        case 0x10b6d4u: goto label_10b6d4;
        case 0x10b6d8u: goto label_10b6d8;
        case 0x10b6dcu: goto label_10b6dc;
        case 0x10b6e0u: goto label_10b6e0;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6ecu: goto label_10b6ec;
        case 0x10b6f0u: goto label_10b6f0;
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b6f8u: goto label_10b6f8;
        case 0x10b6fcu: goto label_10b6fc;
        case 0x10b700u: goto label_10b700;
        case 0x10b704u: goto label_10b704;
        case 0x10b708u: goto label_10b708;
        case 0x10b70cu: goto label_10b70c;
        case 0x10b710u: goto label_10b710;
        case 0x10b714u: goto label_10b714;
        case 0x10b718u: goto label_10b718;
        case 0x10b71cu: goto label_10b71c;
        case 0x10b720u: goto label_10b720;
        case 0x10b724u: goto label_10b724;
        case 0x10b728u: goto label_10b728;
        case 0x10b72cu: goto label_10b72c;
        case 0x10b730u: goto label_10b730;
        case 0x10b734u: goto label_10b734;
        case 0x10b738u: goto label_10b738;
        case 0x10b73cu: goto label_10b73c;
        case 0x10b740u: goto label_10b740;
        case 0x10b744u: goto label_10b744;
        case 0x10b748u: goto label_10b748;
        case 0x10b74cu: goto label_10b74c;
        case 0x10b750u: goto label_10b750;
        case 0x10b754u: goto label_10b754;
        case 0x10b758u: goto label_10b758;
        case 0x10b75cu: goto label_10b75c;
        case 0x10b760u: goto label_10b760;
        case 0x10b764u: goto label_10b764;
        case 0x10b768u: goto label_10b768;
        case 0x10b76cu: goto label_10b76c;
        case 0x10b770u: goto label_10b770;
        case 0x10b774u: goto label_10b774;
        case 0x10b778u: goto label_10b778;
        case 0x10b77cu: goto label_10b77c;
        case 0x10b780u: goto label_10b780;
        case 0x10b784u: goto label_10b784;
        case 0x10b788u: goto label_10b788;
        case 0x10b78cu: goto label_10b78c;
        case 0x10b790u: goto label_10b790;
        case 0x10b794u: goto label_10b794;
        case 0x10b798u: goto label_10b798;
        case 0x10b79cu: goto label_10b79c;
        case 0x10b7a0u: goto label_10b7a0;
        case 0x10b7a4u: goto label_10b7a4;
        case 0x10b7a8u: goto label_10b7a8;
        case 0x10b7acu: goto label_10b7ac;
        case 0x10b7b0u: goto label_10b7b0;
        case 0x10b7b4u: goto label_10b7b4;
        case 0x10b7b8u: goto label_10b7b8;
        case 0x10b7bcu: goto label_10b7bc;
        case 0x10b7c0u: goto label_10b7c0;
        case 0x10b7c4u: goto label_10b7c4;
        case 0x10b7c8u: goto label_10b7c8;
        case 0x10b7ccu: goto label_10b7cc;
        case 0x10b7d0u: goto label_10b7d0;
        case 0x10b7d4u: goto label_10b7d4;
        case 0x10b7d8u: goto label_10b7d8;
        case 0x10b7dcu: goto label_10b7dc;
        case 0x10b7e0u: goto label_10b7e0;
        case 0x10b7e4u: goto label_10b7e4;
        case 0x10b7e8u: goto label_10b7e8;
        case 0x10b7ecu: goto label_10b7ec;
        case 0x10b7f0u: goto label_10b7f0;
        case 0x10b7f4u: goto label_10b7f4;
        case 0x10b7f8u: goto label_10b7f8;
        case 0x10b7fcu: goto label_10b7fc;
        case 0x10b800u: goto label_10b800;
        case 0x10b804u: goto label_10b804;
        case 0x10b808u: goto label_10b808;
        case 0x10b80cu: goto label_10b80c;
        case 0x10b810u: goto label_10b810;
        case 0x10b814u: goto label_10b814;
        case 0x10b818u: goto label_10b818;
        case 0x10b81cu: goto label_10b81c;
        case 0x10b820u: goto label_10b820;
        case 0x10b824u: goto label_10b824;
        case 0x10b828u: goto label_10b828;
        case 0x10b82cu: goto label_10b82c;
        case 0x10b830u: goto label_10b830;
        case 0x10b834u: goto label_10b834;
        case 0x10b838u: goto label_10b838;
        case 0x10b83cu: goto label_10b83c;
        case 0x10b840u: goto label_10b840;
        case 0x10b844u: goto label_10b844;
        case 0x10b848u: goto label_10b848;
        case 0x10b84cu: goto label_10b84c;
        case 0x10b850u: goto label_10b850;
        case 0x10b854u: goto label_10b854;
        case 0x10b858u: goto label_10b858;
        case 0x10b85cu: goto label_10b85c;
        case 0x10b860u: goto label_10b860;
        case 0x10b864u: goto label_10b864;
        case 0x10b868u: goto label_10b868;
        case 0x10b86cu: goto label_10b86c;
        case 0x10b870u: goto label_10b870;
        case 0x10b874u: goto label_10b874;
        case 0x10b878u: goto label_10b878;
        case 0x10b87cu: goto label_10b87c;
        case 0x10b880u: goto label_10b880;
        case 0x10b884u: goto label_10b884;
        case 0x10b888u: goto label_10b888;
        case 0x10b88cu: goto label_10b88c;
        case 0x10b890u: goto label_10b890;
        case 0x10b894u: goto label_10b894;
        case 0x10b898u: goto label_10b898;
        case 0x10b89cu: goto label_10b89c;
        case 0x10b8a0u: goto label_10b8a0;
        case 0x10b8a4u: goto label_10b8a4;
        case 0x10b8a8u: goto label_10b8a8;
        case 0x10b8acu: goto label_10b8ac;
        case 0x10b8b0u: goto label_10b8b0;
        case 0x10b8b4u: goto label_10b8b4;
        case 0x10b8b8u: goto label_10b8b8;
        case 0x10b8bcu: goto label_10b8bc;
        case 0x10b8c0u: goto label_10b8c0;
        case 0x10b8c4u: goto label_10b8c4;
        case 0x10b8c8u: goto label_10b8c8;
        case 0x10b8ccu: goto label_10b8cc;
        case 0x10b8d0u: goto label_10b8d0;
        case 0x10b8d4u: goto label_10b8d4;
        case 0x10b8d8u: goto label_10b8d8;
        case 0x10b8dcu: goto label_10b8dc;
        case 0x10b8e0u: goto label_10b8e0;
        case 0x10b8e4u: goto label_10b8e4;
        case 0x10b8e8u: goto label_10b8e8;
        case 0x10b8ecu: goto label_10b8ec;
        case 0x10b8f0u: goto label_10b8f0;
        case 0x10b8f4u: goto label_10b8f4;
        case 0x10b8f8u: goto label_10b8f8;
        case 0x10b8fcu: goto label_10b8fc;
        case 0x10b900u: goto label_10b900;
        case 0x10b904u: goto label_10b904;
        case 0x10b908u: goto label_10b908;
        case 0x10b90cu: goto label_10b90c;
        case 0x10b910u: goto label_10b910;
        case 0x10b914u: goto label_10b914;
        case 0x10b918u: goto label_10b918;
        case 0x10b91cu: goto label_10b91c;
        case 0x10b920u: goto label_10b920;
        case 0x10b924u: goto label_10b924;
        case 0x10b928u: goto label_10b928;
        case 0x10b92cu: goto label_10b92c;
        case 0x10b930u: goto label_10b930;
        case 0x10b934u: goto label_10b934;
        case 0x10b938u: goto label_10b938;
        case 0x10b93cu: goto label_10b93c;
        case 0x10b940u: goto label_10b940;
        case 0x10b944u: goto label_10b944;
        case 0x10b948u: goto label_10b948;
        case 0x10b94cu: goto label_10b94c;
        case 0x10b950u: goto label_10b950;
        case 0x10b954u: goto label_10b954;
        case 0x10b958u: goto label_10b958;
        case 0x10b95cu: goto label_10b95c;
        case 0x10b960u: goto label_10b960;
        case 0x10b964u: goto label_10b964;
        case 0x10b968u: goto label_10b968;
        case 0x10b96cu: goto label_10b96c;
        case 0x10b970u: goto label_10b970;
        case 0x10b974u: goto label_10b974;
        case 0x10b978u: goto label_10b978;
        case 0x10b97cu: goto label_10b97c;
        case 0x10b980u: goto label_10b980;
        case 0x10b984u: goto label_10b984;
        case 0x10b988u: goto label_10b988;
        case 0x10b98cu: goto label_10b98c;
        case 0x10b990u: goto label_10b990;
        case 0x10b994u: goto label_10b994;
        case 0x10b998u: goto label_10b998;
        case 0x10b99cu: goto label_10b99c;
        case 0x10b9a0u: goto label_10b9a0;
        case 0x10b9a4u: goto label_10b9a4;
        case 0x10b9a8u: goto label_10b9a8;
        case 0x10b9acu: goto label_10b9ac;
        case 0x10b9b0u: goto label_10b9b0;
        case 0x10b9b4u: goto label_10b9b4;
        case 0x10b9b8u: goto label_10b9b8;
        case 0x10b9bcu: goto label_10b9bc;
        case 0x10b9c0u: goto label_10b9c0;
        case 0x10b9c4u: goto label_10b9c4;
        case 0x10b9c8u: goto label_10b9c8;
        case 0x10b9ccu: goto label_10b9cc;
        case 0x10b9d0u: goto label_10b9d0;
        case 0x10b9d4u: goto label_10b9d4;
        case 0x10b9d8u: goto label_10b9d8;
        case 0x10b9dcu: goto label_10b9dc;
        case 0x10b9e0u: goto label_10b9e0;
        case 0x10b9e4u: goto label_10b9e4;
        case 0x10b9e8u: goto label_10b9e8;
        case 0x10b9ecu: goto label_10b9ec;
        case 0x10b9f0u: goto label_10b9f0;
        case 0x10b9f4u: goto label_10b9f4;
        case 0x10b9f8u: goto label_10b9f8;
        case 0x10b9fcu: goto label_10b9fc;
        case 0x10ba00u: goto label_10ba00;
        case 0x10ba04u: goto label_10ba04;
        case 0x10ba08u: goto label_10ba08;
        case 0x10ba0cu: goto label_10ba0c;
        case 0x10ba10u: goto label_10ba10;
        case 0x10ba14u: goto label_10ba14;
        case 0x10ba18u: goto label_10ba18;
        case 0x10ba1cu: goto label_10ba1c;
        case 0x10ba20u: goto label_10ba20;
        case 0x10ba24u: goto label_10ba24;
        case 0x10ba28u: goto label_10ba28;
        case 0x10ba2cu: goto label_10ba2c;
        case 0x10ba30u: goto label_10ba30;
        case 0x10ba34u: goto label_10ba34;
        case 0x10ba38u: goto label_10ba38;
        case 0x10ba3cu: goto label_10ba3c;
        case 0x10ba40u: goto label_10ba40;
        case 0x10ba44u: goto label_10ba44;
        case 0x10ba48u: goto label_10ba48;
        case 0x10ba4cu: goto label_10ba4c;
        case 0x10ba50u: goto label_10ba50;
        case 0x10ba54u: goto label_10ba54;
        case 0x10ba58u: goto label_10ba58;
        case 0x10ba5cu: goto label_10ba5c;
        case 0x10ba60u: goto label_10ba60;
        case 0x10ba64u: goto label_10ba64;
        case 0x10ba68u: goto label_10ba68;
        case 0x10ba6cu: goto label_10ba6c;
        case 0x10ba70u: goto label_10ba70;
        case 0x10ba74u: goto label_10ba74;
        case 0x10ba78u: goto label_10ba78;
        case 0x10ba7cu: goto label_10ba7c;
        case 0x10ba80u: goto label_10ba80;
        case 0x10ba84u: goto label_10ba84;
        case 0x10ba88u: goto label_10ba88;
        case 0x10ba8cu: goto label_10ba8c;
        case 0x10ba90u: goto label_10ba90;
        case 0x10ba94u: goto label_10ba94;
        case 0x10ba98u: goto label_10ba98;
        case 0x10ba9cu: goto label_10ba9c;
        case 0x10baa0u: goto label_10baa0;
        case 0x10baa4u: goto label_10baa4;
        case 0x10baa8u: goto label_10baa8;
        case 0x10baacu: goto label_10baac;
        case 0x10bab0u: goto label_10bab0;
        case 0x10bab4u: goto label_10bab4;
        case 0x10bab8u: goto label_10bab8;
        case 0x10babcu: goto label_10babc;
        case 0x10bac0u: goto label_10bac0;
        case 0x10bac4u: goto label_10bac4;
        case 0x10bac8u: goto label_10bac8;
        case 0x10baccu: goto label_10bacc;
        case 0x10bad0u: goto label_10bad0;
        case 0x10bad4u: goto label_10bad4;
        case 0x10bad8u: goto label_10bad8;
        case 0x10badcu: goto label_10badc;
        case 0x10bae0u: goto label_10bae0;
        case 0x10bae4u: goto label_10bae4;
        case 0x10bae8u: goto label_10bae8;
        case 0x10baecu: goto label_10baec;
        case 0x10baf0u: goto label_10baf0;
        case 0x10baf4u: goto label_10baf4;
        case 0x10baf8u: goto label_10baf8;
        case 0x10bafcu: goto label_10bafc;
        case 0x10bb00u: goto label_10bb00;
        case 0x10bb04u: goto label_10bb04;
        case 0x10bb08u: goto label_10bb08;
        case 0x10bb0cu: goto label_10bb0c;
        case 0x10bb10u: goto label_10bb10;
        case 0x10bb14u: goto label_10bb14;
        case 0x10bb18u: goto label_10bb18;
        case 0x10bb1cu: goto label_10bb1c;
        case 0x10bb20u: goto label_10bb20;
        case 0x10bb24u: goto label_10bb24;
        case 0x10bb28u: goto label_10bb28;
        case 0x10bb2cu: goto label_10bb2c;
        case 0x10bb30u: goto label_10bb30;
        case 0x10bb34u: goto label_10bb34;
        case 0x10bb38u: goto label_10bb38;
        case 0x10bb3cu: goto label_10bb3c;
        case 0x10bb40u: goto label_10bb40;
        case 0x10bb44u: goto label_10bb44;
        case 0x10bb48u: goto label_10bb48;
        case 0x10bb4cu: goto label_10bb4c;
        case 0x10bb50u: goto label_10bb50;
        case 0x10bb54u: goto label_10bb54;
        case 0x10bb58u: goto label_10bb58;
        case 0x10bb5cu: goto label_10bb5c;
        case 0x10bb60u: goto label_10bb60;
        case 0x10bb64u: goto label_10bb64;
        case 0x10bb68u: goto label_10bb68;
        case 0x10bb6cu: goto label_10bb6c;
        case 0x10bb70u: goto label_10bb70;
        case 0x10bb74u: goto label_10bb74;
        case 0x10bb78u: goto label_10bb78;
        case 0x10bb7cu: goto label_10bb7c;
        case 0x10bb80u: goto label_10bb80;
        case 0x10bb84u: goto label_10bb84;
        case 0x10bb88u: goto label_10bb88;
        case 0x10bb8cu: goto label_10bb8c;
        case 0x10bb90u: goto label_10bb90;
        case 0x10bb94u: goto label_10bb94;
        case 0x10bb98u: goto label_10bb98;
        case 0x10bb9cu: goto label_10bb9c;
        case 0x10bba0u: goto label_10bba0;
        case 0x10bba4u: goto label_10bba4;
        case 0x10bba8u: goto label_10bba8;
        case 0x10bbacu: goto label_10bbac;
        case 0x10bbb0u: goto label_10bbb0;
        case 0x10bbb4u: goto label_10bbb4;
        case 0x10bbb8u: goto label_10bbb8;
        case 0x10bbbcu: goto label_10bbbc;
        case 0x10bbc0u: goto label_10bbc0;
        case 0x10bbc4u: goto label_10bbc4;
        case 0x10bbc8u: goto label_10bbc8;
        case 0x10bbccu: goto label_10bbcc;
        case 0x10bbd0u: goto label_10bbd0;
        case 0x10bbd4u: goto label_10bbd4;
        case 0x10bbd8u: goto label_10bbd8;
        case 0x10bbdcu: goto label_10bbdc;
        case 0x10bbe0u: goto label_10bbe0;
        case 0x10bbe4u: goto label_10bbe4;
        case 0x10bbe8u: goto label_10bbe8;
        case 0x10bbecu: goto label_10bbec;
        case 0x10bbf0u: goto label_10bbf0;
        case 0x10bbf4u: goto label_10bbf4;
        case 0x10bbf8u: goto label_10bbf8;
        case 0x10bbfcu: goto label_10bbfc;
        case 0x10bc00u: goto label_10bc00;
        case 0x10bc04u: goto label_10bc04;
        case 0x10bc08u: goto label_10bc08;
        case 0x10bc0cu: goto label_10bc0c;
        case 0x10bc10u: goto label_10bc10;
        case 0x10bc14u: goto label_10bc14;
        case 0x10bc18u: goto label_10bc18;
        case 0x10bc1cu: goto label_10bc1c;
        case 0x10bc20u: goto label_10bc20;
        case 0x10bc24u: goto label_10bc24;
        case 0x10bc28u: goto label_10bc28;
        case 0x10bc2cu: goto label_10bc2c;
        case 0x10bc30u: goto label_10bc30;
        case 0x10bc34u: goto label_10bc34;
        case 0x10bc38u: goto label_10bc38;
        case 0x10bc3cu: goto label_10bc3c;
        case 0x10bc40u: goto label_10bc40;
        case 0x10bc44u: goto label_10bc44;
        case 0x10bc48u: goto label_10bc48;
        case 0x10bc4cu: goto label_10bc4c;
        case 0x10bc50u: goto label_10bc50;
        case 0x10bc54u: goto label_10bc54;
        case 0x10bc58u: goto label_10bc58;
        case 0x10bc5cu: goto label_10bc5c;
        case 0x10bc60u: goto label_10bc60;
        case 0x10bc64u: goto label_10bc64;
        case 0x10bc68u: goto label_10bc68;
        case 0x10bc6cu: goto label_10bc6c;
        case 0x10bc70u: goto label_10bc70;
        case 0x10bc74u: goto label_10bc74;
        case 0x10bc78u: goto label_10bc78;
        case 0x10bc7cu: goto label_10bc7c;
        case 0x10bc80u: goto label_10bc80;
        case 0x10bc84u: goto label_10bc84;
        case 0x10bc88u: goto label_10bc88;
        case 0x10bc8cu: goto label_10bc8c;
        case 0x10bc90u: goto label_10bc90;
        case 0x10bc94u: goto label_10bc94;
        case 0x10bc98u: goto label_10bc98;
        case 0x10bc9cu: goto label_10bc9c;
        default: break;
    }

    ctx->pc = 0x10b2a0u;

label_10b2a0:
    // 0x10b2a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10b2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_10b2a4:
    // 0x10b2a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_10b2a8:
    // 0x10b2a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10b2ac:
    // 0x10b2ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10b2b0:
    // 0x10b2b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10b2b4:
    // 0x10b2b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10b2b8:
    // 0x10b2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10b2bc:
    // 0x10b2bc: 0x908243f2  lbu         $v0, 0x43F2($a0)
    ctx->pc = 0x10b2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17394)));
label_10b2c0:
    // 0x10b2c0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_10b2c4:
    if (ctx->pc == 0x10B2C4u) {
        ctx->pc = 0x10B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2C0u;
        // 0x10b2c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B2C8u;
        goto label_10b2c8;
    }
    ctx->pc = 0x10B2C0u;
    {
        const bool branch_taken_0x10b2c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2C0u;
        // 0x10b2c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2c0) {
            ctx->pc = 0x10B2D0u;
            goto label_10b2d0;
        }
    }
    ctx->pc = 0x10B2C8u;
label_10b2c8:
    // 0x10b2c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10b2cc:
    // 0x10b2cc: 0xa20243f2  sb          $v0, 0x43F2($s0)
    ctx->pc = 0x10b2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17394), (uint8_t)GPR_U32(ctx, 2));
label_10b2d0:
    // 0x10b2d0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x10b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10b2d4:
    // 0x10b2d4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x10b2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_10b2d8:
    // 0x10b2d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_10b2dc:
    if (ctx->pc == 0x10B2DCu) {
        ctx->pc = 0x10B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2D8u;
        // 0x10b2dc: 0x28610007  slti        $at, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B2E0u;
        goto label_10b2e0;
    }
    ctx->pc = 0x10B2D8u;
    {
        const bool branch_taken_0x10b2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2D8u;
        // 0x10b2dc: 0x28610007  slti        $at, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2d8) {
            ctx->pc = 0x10B314u;
            goto label_10b314;
        }
    }
    ctx->pc = 0x10B2E0u;
label_10b2e0:
    // 0x10b2e0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_10b2e4:
    if (ctx->pc == 0x10B2E4u) {
        ctx->pc = 0x10B2E8u;
        goto label_10b2e8;
    }
    ctx->pc = 0x10B2E0u;
    {
        const bool branch_taken_0x10b2e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2e0) {
            ctx->pc = 0x10B314u;
            goto label_10b314;
        }
    }
    ctx->pc = 0x10B2E8u;
label_10b2e8:
    // 0x10b2e8: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b2ec:
    // 0x10b2ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b2f0:
    // 0x10b2f0: 0x846301e8  lh          $v1, 0x1E8($v1)
    ctx->pc = 0x10b2f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_10b2f4:
    // 0x10b2f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_10b2f8:
    if (ctx->pc == 0x10B2F8u) {
        ctx->pc = 0x10B2FCu;
        goto label_10b2fc;
    }
    ctx->pc = 0x10B2F4u;
    {
        const bool branch_taken_0x10b2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b2f4) {
            ctx->pc = 0x10B314u;
            goto label_10b314;
        }
    }
    ctx->pc = 0x10B2FCu;
label_10b2fc:
    // 0x10b2fc: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b300:
    // 0x10b300: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10b300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10b304:
    // 0x10b304: 0x320f809  jalr        $t9
label_10b308:
    if (ctx->pc == 0x10B308u) {
        ctx->pc = 0x10B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B304u;
        // 0x10b308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B30Cu;
        goto label_10b30c;
    }
    ctx->pc = 0x10B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B30Cu);
        ctx->pc = 0x10B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B304u;
        // 0x10b308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B304u, 0x10B30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B30Cu;
label_10b30c:
    // 0x10b30c: 0x1000025d  b           . + 4 + (0x25D << 2)
label_10b310:
    if (ctx->pc == 0x10B310u) {
        ctx->pc = 0x10B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B30Cu;
        // 0x10b310: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B314u;
        goto label_10b314;
    }
    ctx->pc = 0x10B30Cu;
    {
        const bool branch_taken_0x10b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B30Cu;
        // 0x10b310: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b30c) {
            ctx->pc = 0x10BC84u;
            goto label_10bc84;
        }
    }
    ctx->pc = 0x10B314u;
label_10b314:
    // 0x10b314: 0x860243f0  lh          $v0, 0x43F0($s0)
    ctx->pc = 0x10b314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 17392)));
label_10b318:
    // 0x10b318: 0x1c400034  bgtz        $v0, . + 4 + (0x34 << 2)
label_10b31c:
    if (ctx->pc == 0x10B31Cu) {
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B320u;
        goto label_10b320;
    }
    ctx->pc = 0x10B318u;
    {
        const bool branch_taken_0x10b318 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b318) {
            ctx->pc = 0x10B3ECu;
            goto label_10b3ec;
        }
    }
    ctx->pc = 0x10B320u;
label_10b320:
    // 0x10b320: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10b324:
    // 0x10b324: 0xc046458  jal         func_119160
label_10b328:
    if (ctx->pc == 0x10B328u) {
        ctx->pc = 0x10B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B324u;
        // 0x10b328: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B32Cu;
        goto label_10b32c;
    }
    ctx->pc = 0x10B324u;
    SET_GPR_U32(ctx, 31, 0x10B32Cu);
    ctx->pc = 0x10B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B324u;
    // 0x10b328: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10B324u, 0x10B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B32Cu;
label_10b32c:
    // 0x10b32c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10b330:
    // 0x10b330: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_10b334:
    // 0x10b334: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x10b334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
label_10b338:
    // 0x10b338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b33c:
    // 0x10b33c: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x10b33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_10b340:
    // 0x10b340: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b344:
    // 0x10b344: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x10b344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b348:
    // 0x10b348: 0xc046680  jal         func_119A00
label_10b34c:
    if (ctx->pc == 0x10B34Cu) {
        ctx->pc = 0x10B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B348u;
        // 0x10b34c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B350u;
        goto label_10b350;
    }
    ctx->pc = 0x10B348u;
    SET_GPR_U32(ctx, 31, 0x10B350u);
    ctx->pc = 0x10B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B348u;
    // 0x10b34c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A00u, 0x10B348u, 0x10B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B350u;
label_10b350:
    // 0x10b350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b354:
    // 0x10b354: 0xc042118  jal         func_108460
label_10b358:
    if (ctx->pc == 0x10B358u) {
        ctx->pc = 0x10B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B354u;
        // 0x10b358: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B35Cu;
        goto label_10b35c;
    }
    ctx->pc = 0x10B354u;
    SET_GPR_U32(ctx, 31, 0x10B35Cu);
    ctx->pc = 0x10B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B354u;
    // 0x10b358: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B354u, 0x10B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B35Cu;
label_10b35c:
    // 0x10b35c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b360:
    // 0x10b360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b364:
    // 0x10b364: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b368:
    // 0x10b368: 0x320f809  jalr        $t9
label_10b36c:
    if (ctx->pc == 0x10B36Cu) {
        ctx->pc = 0x10B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B368u;
        // 0x10b36c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B370u;
        goto label_10b370;
    }
    ctx->pc = 0x10B368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B370u);
        ctx->pc = 0x10B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B368u;
        // 0x10b36c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B368u, 0x10B370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B370u;
label_10b370:
    // 0x10b370: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b374:
    // 0x10b374: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10b374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10b378:
    // 0x10b378: 0x320f809  jalr        $t9
label_10b37c:
    if (ctx->pc == 0x10B37Cu) {
        ctx->pc = 0x10B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B378u;
        // 0x10b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B380u;
        goto label_10b380;
    }
    ctx->pc = 0x10B378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B380u);
        ctx->pc = 0x10B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B378u;
        // 0x10b37c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B378u, 0x10B380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B380u;
label_10b380:
    // 0x10b380: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x10b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_10b384:
    // 0x10b384: 0x8e0643e4  lw          $a2, 0x43E4($s0)
    ctx->pc = 0x10b384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17380)));
label_10b388:
    // 0x10b388: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10b388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10b38c:
    // 0x10b38c: 0x8e0343d0  lw          $v1, 0x43D0($s0)
    ctx->pc = 0x10b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17360)));
label_10b390:
    // 0x10b390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b394:
    // 0x10b394: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x10b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_10b398:
    // 0x10b398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10b39c:
    // 0x10b39c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x10b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_10b3a0:
    // 0x10b3a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10b3a4:
    // 0x10b3a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x10b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b3a8:
    // 0x10b3a8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x10b3a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_10b3ac:
    // 0x10b3ac: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x10b3acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_10b3b0:
    // 0x10b3b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x10b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b3b4:
    // 0x10b3b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10b3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_10b3b8:
    // 0x10b3b8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x10b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_10b3bc:
    // 0x10b3bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x10b3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10b3c0:
    // 0x10b3c0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x10b3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_10b3c4:
    // 0x10b3c4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b3c8:
    // 0x10b3c8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b3cc:
    // 0x10b3cc: 0x320f809  jalr        $t9
label_10b3d0:
    if (ctx->pc == 0x10B3D0u) {
        ctx->pc = 0x10B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3CCu;
        // 0x10b3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B3D4u;
        goto label_10b3d4;
    }
    ctx->pc = 0x10B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B3D4u);
        ctx->pc = 0x10B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3CCu;
        // 0x10b3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B3CCu, 0x10B3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B3D4u;
label_10b3d4:
    // 0x10b3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b3d8:
    // 0x10b3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b3dc:
    // 0x10b3dc: 0xae032314  sw          $v1, 0x2314($s0)
    ctx->pc = 0x10b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 3));
label_10b3e0:
    // 0x10b3e0: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x10b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_10b3e4:
    // 0x10b3e4: 0xa20243f2  sb          $v0, 0x43F2($s0)
    ctx->pc = 0x10b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17394), (uint8_t)GPR_U32(ctx, 2));
label_10b3e8:
    // 0x10b3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b3ec:
    // 0x10b3ec: 0xc042b1c  jal         func_10AC70
label_10b3f0:
    if (ctx->pc == 0x10B3F0u) {
        ctx->pc = 0x10B3F4u;
        goto label_10b3f4;
    }
    ctx->pc = 0x10B3ECu;
    SET_GPR_U32(ctx, 31, 0x10B3F4u);
    ctx->pc = 0x10AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC70u, 0x10B3ECu, 0x10B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3F4u;
label_10b3f4:
    // 0x10b3f4: 0xc04318c  jal         func_10C630
label_10b3f8:
    if (ctx->pc == 0x10B3F8u) {
        ctx->pc = 0x10B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3F4u;
        // 0x10b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B3FCu;
        goto label_10b3fc;
    }
    ctx->pc = 0x10B3F4u;
    SET_GPR_U32(ctx, 31, 0x10B3FCu);
    ctx->pc = 0x10B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3F4u;
    // 0x10b3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C630u, 0x10B3F4u, 0x10B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3FCu;
label_10b3fc:
    // 0x10b3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b400:
    // 0x10b400: 0xc042118  jal         func_108460
label_10b404:
    if (ctx->pc == 0x10B404u) {
        ctx->pc = 0x10B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B400u;
        // 0x10b404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B408u;
        goto label_10b408;
    }
    ctx->pc = 0x10B400u;
    SET_GPR_U32(ctx, 31, 0x10B408u);
    ctx->pc = 0x10B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B400u;
    // 0x10b404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B400u, 0x10B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B408u;
label_10b408:
    // 0x10b408: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x10b408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10b40c:
    // 0x10b40c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10b410:
    // 0x10b410: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
label_10b414:
    if (ctx->pc == 0x10B414u) {
        ctx->pc = 0x10B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B410u;
        // 0x10b414: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B418u;
        goto label_10b418;
    }
    ctx->pc = 0x10B410u;
    {
        const bool branch_taken_0x10b410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B410u;
        // 0x10b414: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b410) {
            ctx->pc = 0x10B4F4u;
            goto label_10b4f4;
        }
    }
    ctx->pc = 0x10B418u;
label_10b418:
    // 0x10b418: 0x8e05231c  lw          $a1, 0x231C($s0)
    ctx->pc = 0x10b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b41c:
    // 0x10b41c: 0x3c033d44  lui         $v1, 0x3D44
    ctx->pc = 0x10b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15684 << 16));
label_10b420:
    // 0x10b420: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x10b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
label_10b424:
    // 0x10b424: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
label_10b428:
    // 0x10b428: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10b42c:
    // 0x10b42c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x10b42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b430:
    // 0x10b430: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10b430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10b434:
    // 0x10b434: 0xc043160  jal         func_10C580
label_10b438:
    if (ctx->pc == 0x10B438u) {
        ctx->pc = 0x10B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B434u;
        // 0x10b438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B43Cu;
        goto label_10b43c;
    }
    ctx->pc = 0x10B434u;
    SET_GPR_U32(ctx, 31, 0x10B43Cu);
    ctx->pc = 0x10B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B434u;
    // 0x10b438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C580u, 0x10B434u, 0x10B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B43Cu;
label_10b43c:
    // 0x10b43c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b440:
    // 0x10b440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b444:
    // 0x10b444: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b448:
    // 0x10b448: 0x320f809  jalr        $t9
label_10b44c:
    if (ctx->pc == 0x10B44Cu) {
        ctx->pc = 0x10B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B448u;
        // 0x10b44c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B450u;
        goto label_10b450;
    }
    ctx->pc = 0x10B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B450u);
        ctx->pc = 0x10B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B448u;
        // 0x10b44c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B448u, 0x10B450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B450u;
label_10b450:
    // 0x10b450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b454:
    // 0x10b454: 0xc042118  jal         func_108460
label_10b458:
    if (ctx->pc == 0x10B458u) {
        ctx->pc = 0x10B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B454u;
        // 0x10b458: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B45Cu;
        goto label_10b45c;
    }
    ctx->pc = 0x10B454u;
    SET_GPR_U32(ctx, 31, 0x10B45Cu);
    ctx->pc = 0x10B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B454u;
    // 0x10b458: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B454u, 0x10B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B45Cu;
label_10b45c:
    // 0x10b45c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10b460:
    // 0x10b460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b464:
    // 0x10b464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b468:
    // 0x10b468: 0xc0425a4  jal         func_109690
label_10b46c:
    if (ctx->pc == 0x10B46Cu) {
        ctx->pc = 0x10B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B468u;
        // 0x10b46c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B470u;
        goto label_10b470;
    }
    ctx->pc = 0x10B468u;
    SET_GPR_U32(ctx, 31, 0x10B470u);
    ctx->pc = 0x10B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B468u;
    // 0x10b46c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x10B468u, 0x10B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B470u;
label_10b470:
    // 0x10b470: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b474:
    // 0x10b474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b478:
    // 0x10b478: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x10b478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_10b47c:
    // 0x10b47c: 0x320f809  jalr        $t9
label_10b480:
    if (ctx->pc == 0x10B480u) {
        ctx->pc = 0x10B484u;
        goto label_10b484;
    }
    ctx->pc = 0x10B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B47Cu, 0x10B484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B484u;
label_10b484:
    // 0x10b484: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x10b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b488:
    // 0x10b488: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b48c:
    // 0x10b48c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10b48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10b490:
    // 0x10b490: 0xc04c72c  jal         func_131CB0
label_10b494:
    if (ctx->pc == 0x10B494u) {
        ctx->pc = 0x10B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B490u;
        // 0x10b494: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B498u;
        goto label_10b498;
    }
    ctx->pc = 0x10B490u;
    SET_GPR_U32(ctx, 31, 0x10B498u);
    ctx->pc = 0x10B494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B490u;
    // 0x10b494: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10B490u, 0x10B498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B498u;
label_10b498:
    // 0x10b498: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b49c:
    // 0x10b49c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x10b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10b4a0:
    // 0x10b4a0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10b4a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b4a4:
    // 0x10b4a4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10b4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b4a8:
    // 0x10b4a8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10b4a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10b4ac:
    // 0x10b4ac: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10b4acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10b4b0:
    // 0x10b4b0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10b4b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10b4b4:
    // 0x10b4b4: 0xf8a40030  sqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_10b4b8:
    // 0x10b4b8: 0xf8a50020  sqc2        $vf5, 0x20($a1)
    ctx->pc = 0x10b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_10b4bc:
    // 0x10b4bc: 0xf8a60010  sqc2        $vf6, 0x10($a1)
    ctx->pc = 0x10b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10b4c0:
    // 0x10b4c0: 0xf8a70000  sqc2        $vf7, 0x0($a1)
    ctx->pc = 0x10b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_10b4c4:
    // 0x10b4c4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x10b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_10b4c8:
    // 0x10b4c8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10b4c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10b4cc:
    // 0x10b4cc: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x10b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_10b4d0:
    // 0x10b4d0: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b4d4:
    // 0x10b4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b4d8:
    // 0x10b4d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b4dc:
    // 0x10b4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b4e0:
    // 0x10b4e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b4e4:
    // 0x10b4e4: 0xc0465f0  jal         func_1197C0
label_10b4e8:
    if (ctx->pc == 0x10B4E8u) {
        ctx->pc = 0x10B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4E4u;
        // 0x10b4e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B4ECu;
        goto label_10b4ec;
    }
    ctx->pc = 0x10B4E4u;
    SET_GPR_U32(ctx, 31, 0x10B4ECu);
    ctx->pc = 0x10B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4E4u;
    // 0x10b4e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10B4E4u, 0x10B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_10b4f0:
    if (ctx->pc == 0x10B4F0u) {
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0xae0243dc  sw          $v0, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B4F4u;
        goto label_10b4f4;
    }
    ctx->pc = 0x10B4ECu;
    {
        const bool branch_taken_0x10b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4ECu;
        // 0x10b4f0: 0xae0243dc  sw          $v0, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4ec) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B4F4u;
label_10b4f4:
    // 0x10b4f4: 0x14830047  bne         $a0, $v1, . + 4 + (0x47 << 2)
label_10b4f8:
    if (ctx->pc == 0x10B4F8u) {
        ctx->pc = 0x10B4FCu;
        goto label_10b4fc;
    }
    ctx->pc = 0x10B4F4u;
    {
        const bool branch_taken_0x10b4f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b4f4) {
            ctx->pc = 0x10B614u;
            goto label_10b614;
        }
    }
    ctx->pc = 0x10B4FCu;
label_10b4fc:
    // 0x10b4fc: 0x8603024e  lh          $v1, 0x24E($s0)
    ctx->pc = 0x10b4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
label_10b500:
    // 0x10b500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b504:
    // 0x10b504: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_10b508:
    if (ctx->pc == 0x10B508u) {
        ctx->pc = 0x10B50Cu;
        goto label_10b50c;
    }
    ctx->pc = 0x10B504u;
    {
        const bool branch_taken_0x10b504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b504) {
            ctx->pc = 0x10B594u;
            goto label_10b594;
        }
    }
    ctx->pc = 0x10B50Cu;
label_10b50c:
    // 0x10b50c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b510:
    // 0x10b510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b514:
    // 0x10b514: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b518:
    // 0x10b518: 0x320f809  jalr        $t9
label_10b51c:
    if (ctx->pc == 0x10B51Cu) {
        ctx->pc = 0x10B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B518u;
        // 0x10b51c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B520u;
        goto label_10b520;
    }
    ctx->pc = 0x10B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B520u);
        ctx->pc = 0x10B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B518u;
        // 0x10b51c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B518u, 0x10B520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B520u;
label_10b520:
    // 0x10b520: 0x8e022324  lw          $v0, 0x2324($s0)
    ctx->pc = 0x10b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8996)));
label_10b524:
    // 0x10b524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b528:
    // 0x10b528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10b52c:
    // 0x10b52c: 0xc042118  jal         func_108460
label_10b530:
    if (ctx->pc == 0x10B530u) {
        ctx->pc = 0x10B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B52Cu;
        // 0x10b530: 0xae022320  sw          $v0, 0x2320($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B534u;
        goto label_10b534;
    }
    ctx->pc = 0x10B52Cu;
    SET_GPR_U32(ctx, 31, 0x10B534u);
    ctx->pc = 0x10B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B52Cu;
    // 0x10b530: 0xae022320  sw          $v0, 0x2320($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B52Cu, 0x10B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B534u;
label_10b534:
    // 0x10b534: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10b538:
    // 0x10b538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b53c:
    // 0x10b53c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b540:
    // 0x10b540: 0xc0425a4  jal         func_109690
label_10b544:
    if (ctx->pc == 0x10B544u) {
        ctx->pc = 0x10B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B540u;
        // 0x10b544: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B548u;
        goto label_10b548;
    }
    ctx->pc = 0x10B540u;
    SET_GPR_U32(ctx, 31, 0x10B548u);
    ctx->pc = 0x10B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B540u;
    // 0x10b544: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x10B540u, 0x10B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B548u;
label_10b548:
    // 0x10b548: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b54c:
    // 0x10b54c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b550:
    // 0x10b550: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x10b550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_10b554:
    // 0x10b554: 0x320f809  jalr        $t9
label_10b558:
    if (ctx->pc == 0x10B558u) {
        ctx->pc = 0x10B55Cu;
        goto label_10b55c;
    }
    ctx->pc = 0x10B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B55Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B554u, 0x10B55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B55Cu;
label_10b55c:
    // 0x10b55c: 0xc6012324  lwc1        $f1, 0x2324($s0)
    ctx->pc = 0x10b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b560:
    // 0x10b560: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b564:
    // 0x10b564: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10b564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10b568:
    // 0x10b568: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10b568u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10b56c:
    // 0x10b56c: 0x0  nop
    ctx->pc = 0x10b56cu;
    // NOP
label_10b570:
    // 0x10b570: 0x0  nop
    ctx->pc = 0x10b570u;
    // NOP
label_10b574:
    // 0x10b574: 0xc04c72c  jal         func_131CB0
label_10b578:
    if (ctx->pc == 0x10B578u) {
        ctx->pc = 0x10B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B574u;
        // 0x10b578: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B57Cu;
        goto label_10b57c;
    }
    ctx->pc = 0x10B574u;
    SET_GPR_U32(ctx, 31, 0x10B57Cu);
    ctx->pc = 0x10B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B574u;
    // 0x10b578: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10B574u, 0x10B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B57Cu;
label_10b57c:
    // 0x10b57c: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
label_10b580:
    // 0x10b580: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10b580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_10b584:
    // 0x10b584: 0xc042930  jal         func_10A4C0
label_10b588:
    if (ctx->pc == 0x10B588u) {
        ctx->pc = 0x10B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B584u;
        // 0x10b588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B58Cu;
        goto label_10b58c;
    }
    ctx->pc = 0x10B584u;
    SET_GPR_U32(ctx, 31, 0x10B58Cu);
    ctx->pc = 0x10B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B584u;
    // 0x10b588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4C0u, 0x10B584u, 0x10B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B58Cu;
label_10b58c:
    // 0x10b58c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_10b590:
    if (ctx->pc == 0x10B590u) {
        ctx->pc = 0x10B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B58Cu;
        // 0x10b590: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B594u;
        goto label_10b594;
    }
    ctx->pc = 0x10B58Cu;
    {
        const bool branch_taken_0x10b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B58Cu;
        // 0x10b590: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b58c) {
            ctx->pc = 0x10B818u;
            goto label_10b818;
        }
    }
    ctx->pc = 0x10B594u;
label_10b594:
    // 0x10b594: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b598:
    // 0x10b598: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x10b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_10b59c:
    // 0x10b59c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10b59cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b5a0:
    // 0x10b5a0: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10b5a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b5a4:
    // 0x10b5a4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10b5a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10b5a8:
    // 0x10b5a8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10b5a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10b5ac:
    // 0x10b5ac: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10b5acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10b5b0:
    // 0x10b5b0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x10b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_10b5b4:
    // 0x10b5b4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x10b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_10b5b8:
    // 0x10b5b8: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x10b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10b5bc:
    // 0x10b5bc: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x10b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_10b5c0:
    // 0x10b5c0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x10b5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_10b5c4:
    // 0x10b5c4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x10b5c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10b5c8:
    // 0x10b5c8: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x10b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_10b5cc:
    // 0x10b5cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10b5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b5d0:
    // 0x10b5d0: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b5d4:
    // 0x10b5d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b5d8:
    // 0x10b5d8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b5dc:
    // 0x10b5dc: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
label_10b5e0:
    // 0x10b5e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b5e4:
    // 0x10b5e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b5e8:
    // 0x10b5e8: 0xc0466e4  jal         func_119B90
label_10b5ec:
    if (ctx->pc == 0x10B5ECu) {
        ctx->pc = 0x10B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5E8u;
        // 0x10b5ec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5F0u;
        goto label_10b5f0;
    }
    ctx->pc = 0x10B5E8u;
    SET_GPR_U32(ctx, 31, 0x10B5F0u);
    ctx->pc = 0x10B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5E8u;
    // 0x10b5ec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10B5E8u, 0x10B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F0u;
label_10b5f0:
    // 0x10b5f0: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b5f4:
    // 0x10b5f4: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x10b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
label_10b5f8:
    // 0x10b5f8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10b5f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10b5fc:
    // 0x10b5fc: 0x7e0643c0  sq          $a2, 0x43C0($s0)
    ctx->pc = 0x10b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 17344), GPR_VEC(ctx, 6));
label_10b600:
    // 0x10b600: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10b600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_10b604:
    // 0x10b604: 0xc042930  jal         func_10A4C0
label_10b608:
    if (ctx->pc == 0x10B608u) {
        ctx->pc = 0x10B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B604u;
        // 0x10b608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B60Cu;
        goto label_10b60c;
    }
    ctx->pc = 0x10B604u;
    SET_GPR_U32(ctx, 31, 0x10B60Cu);
    ctx->pc = 0x10B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B604u;
    // 0x10b608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4C0u, 0x10B604u, 0x10B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B60Cu;
label_10b60c:
    // 0x10b60c: 0x10000081  b           . + 4 + (0x81 << 2)
label_10b610:
    if (ctx->pc == 0x10B610u) {
        ctx->pc = 0x10B614u;
        goto label_10b614;
    }
    ctx->pc = 0x10B60Cu;
    {
        const bool branch_taken_0x10b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b60c) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B614u;
label_10b614:
    // 0x10b614: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_10b618:
    // 0x10b618: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
label_10b61c:
    if (ctx->pc == 0x10B61Cu) {
        ctx->pc = 0x10B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B618u;
        // 0x10b61c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B620u;
        goto label_10b620;
    }
    ctx->pc = 0x10B618u;
    {
        const bool branch_taken_0x10b618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B618u;
        // 0x10b61c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b618) {
            ctx->pc = 0x10B7D4u;
            goto label_10b7d4;
        }
    }
    ctx->pc = 0x10B620u;
label_10b620:
    // 0x10b620: 0x26030230  addiu       $v1, $s0, 0x230
    ctx->pc = 0x10b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_10b624:
    // 0x10b624: 0x7a060230  lq          $a2, 0x230($s0)
    ctx->pc = 0x10b624u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 560)));
label_10b628:
    // 0x10b628: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x10b628u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_10b62c:
    // 0x10b62c: 0x8e022320  lw          $v0, 0x2320($s0)
    ctx->pc = 0x10b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8992)));
label_10b630:
    // 0x10b630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10b634:
    // 0x10b634: 0xae022320  sw          $v0, 0x2320($s0)
    ctx->pc = 0x10b634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 2));
label_10b638:
    // 0x10b638: 0x8e022320  lw          $v0, 0x2320($s0)
    ctx->pc = 0x10b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8992)));
label_10b63c:
    // 0x10b63c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_10b640:
    if (ctx->pc == 0x10B640u) {
        ctx->pc = 0x10B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B63Cu;
        // 0x10b640: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B644u;
        goto label_10b644;
    }
    ctx->pc = 0x10B63Cu;
    {
        const bool branch_taken_0x10b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B63Cu;
        // 0x10b640: 0x3c023fd9  lui         $v0, 0x3FD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b63c) {
            ctx->pc = 0x10B6E4u;
            goto label_10b6e4;
        }
    }
    ctx->pc = 0x10B644u;
label_10b644:
    // 0x10b644: 0x8e04231c  lw          $a0, 0x231C($s0)
    ctx->pc = 0x10b644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b648:
    // 0x10b648: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10b64c:
    // 0x10b64c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10b64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10b650:
    // 0x10b650: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x10b650u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10b654:
    // 0x10b654: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x10b654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_10b658:
    // 0x10b658: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x10b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_10b65c:
    // 0x10b65c: 0xc6002320  lwc1        $f0, 0x2320($s0)
    ctx->pc = 0x10b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10b660:
    // 0x10b660: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b664:
    // 0x10b664: 0xc6012324  lwc1        $f1, 0x2324($s0)
    ctx->pc = 0x10b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b668:
    // 0x10b668: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x10b668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_10b66c:
    // 0x10b66c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10b66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10b670:
    // 0x10b670: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x10b670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_10b674:
    // 0x10b674: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10b674u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10b678:
    // 0x10b678: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x10b678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10b67c:
    // 0x10b67c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x10b67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10b680:
    // 0x10b680: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x10b680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_10b684:
    // 0x10b684: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b688:
    // 0x10b688: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x10b688u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b68c:
    // 0x10b68c: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x10b68cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10b690:
    // 0x10b690: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x10b690u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_10b694:
    // 0x10b694: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x10b694u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10b698:
    // 0x10b698: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x10b698u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10b69c:
    // 0x10b69c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x10b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_10b6a0:
    // 0x10b6a0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x10b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_10b6a4:
    // 0x10b6a4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x10b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_10b6a8:
    // 0x10b6a8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x10b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
label_10b6ac:
    // 0x10b6ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x10b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_10b6b0:
    // 0x10b6b0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10b6b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10b6b4:
    // 0x10b6b4: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x10b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_10b6b8:
    // 0x10b6b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10b6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b6bc:
    // 0x10b6bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10b6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10b6c0:
    // 0x10b6c0: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b6c4:
    // 0x10b6c4: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b6c8:
    // 0x10b6c8: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
label_10b6cc:
    // 0x10b6cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b6d0:
    // 0x10b6d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b6d4:
    // 0x10b6d4: 0xc0466e4  jal         func_119B90
label_10b6d8:
    if (ctx->pc == 0x10B6D8u) {
        ctx->pc = 0x10B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6D4u;
        // 0x10b6d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B6DCu;
        goto label_10b6dc;
    }
    ctx->pc = 0x10B6D4u;
    SET_GPR_U32(ctx, 31, 0x10B6DCu);
    ctx->pc = 0x10B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6D4u;
    // 0x10b6d8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10B6D4u, 0x10B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6DCu;
label_10b6dc:
    // 0x10b6dc: 0x1000004d  b           . + 4 + (0x4D << 2)
label_10b6e0:
    if (ctx->pc == 0x10B6E0u) {
        ctx->pc = 0x10B6E4u;
        goto label_10b6e4;
    }
    ctx->pc = 0x10B6DCu;
    {
        const bool branch_taken_0x10b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b6dc) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B6E4u;
label_10b6e4:
    // 0x10b6e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10b6e8:
    // 0x10b6e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b6ec:
    // 0x10b6ec: 0xc04c72c  jal         func_131CB0
label_10b6f0:
    if (ctx->pc == 0x10B6F0u) {
        ctx->pc = 0x10B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6ECu;
        // 0x10b6f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B6F4u;
        goto label_10b6f4;
    }
    ctx->pc = 0x10B6ECu;
    SET_GPR_U32(ctx, 31, 0x10B6F4u);
    ctx->pc = 0x10B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6ECu;
    // 0x10b6f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10B6ECu, 0x10B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6F4u;
label_10b6f4:
    // 0x10b6f4: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
label_10b6f8:
    // 0x10b6f8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_10b6fc:
    if (ctx->pc == 0x10B6FCu) {
        ctx->pc = 0x10B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6F8u;
        // 0x10b6fc: 0x3c023eae  lui         $v0, 0x3EAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B700u;
        goto label_10b700;
    }
    ctx->pc = 0x10B6F8u;
    {
        const bool branch_taken_0x10b6f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x10B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6F8u;
        // 0x10b6fc: 0x3c023eae  lui         $v0, 0x3EAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6f8) {
            ctx->pc = 0x10B724u;
            goto label_10b724;
        }
    }
    ctx->pc = 0x10B700u;
label_10b700:
    // 0x10b700: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b704:
    // 0x10b704: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b708:
    // 0x10b708: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b70c:
    // 0x10b70c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b710:
    // 0x10b710: 0xc046744  jal         func_119D10
label_10b714:
    if (ctx->pc == 0x10B714u) {
        ctx->pc = 0x10B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B710u;
        // 0x10b714: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B718u;
        goto label_10b718;
    }
    ctx->pc = 0x10B710u;
    SET_GPR_U32(ctx, 31, 0x10B718u);
    ctx->pc = 0x10B714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B710u;
    // 0x10b714: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10B710u, 0x10B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B718u;
label_10b718:
    // 0x10b718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b71c:
    // 0x10b71c: 0xae0243dc  sw          $v0, 0x43DC($s0)
    ctx->pc = 0x10b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
label_10b720:
    // 0x10b720: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10b720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10b724:
    // 0x10b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b728:
    // 0x10b728: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x10b728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10b72c:
    // 0x10b72c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b730:
    // 0x10b730: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10b730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10b734:
    // 0x10b734: 0xc043160  jal         func_10C580
label_10b738:
    if (ctx->pc == 0x10B738u) {
        ctx->pc = 0x10B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B734u;
        // 0x10b738: 0x26050220  addiu       $a1, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B73Cu;
        goto label_10b73c;
    }
    ctx->pc = 0x10B734u;
    SET_GPR_U32(ctx, 31, 0x10B73Cu);
    ctx->pc = 0x10B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B734u;
    // 0x10b738: 0x26050220  addiu       $a1, $s0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C580u, 0x10B734u, 0x10B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B73Cu;
label_10b73c:
    // 0x10b73c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b740:
    // 0x10b740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b744:
    // 0x10b744: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b748:
    // 0x10b748: 0x320f809  jalr        $t9
label_10b74c:
    if (ctx->pc == 0x10B74Cu) {
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B750u;
        goto label_10b750;
    }
    ctx->pc = 0x10B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B750u);
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B748u, 0x10B750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B750u;
label_10b750:
    // 0x10b750: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b754:
    // 0x10b754: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_10b758:
    if (ctx->pc == 0x10B758u) {
        ctx->pc = 0x10B75Cu;
        goto label_10b75c;
    }
    ctx->pc = 0x10B754u;
    {
        const bool branch_taken_0x10b754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b754) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B75Cu;
label_10b75c:
    // 0x10b75c: 0xae0043e0  sw          $zero, 0x43E0($s0)
    ctx->pc = 0x10b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17376), GPR_U32(ctx, 0));
label_10b760:
    // 0x10b760: 0x8e0543d8  lw          $a1, 0x43D8($s0)
    ctx->pc = 0x10b760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17368)));
label_10b764:
    // 0x10b764: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_10b768:
    if (ctx->pc == 0x10B768u) {
        ctx->pc = 0x10B76Cu;
        goto label_10b76c;
    }
    ctx->pc = 0x10B764u;
    {
        const bool branch_taken_0x10b764 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10b764) {
            ctx->pc = 0x10B780u;
            goto label_10b780;
        }
    }
    ctx->pc = 0x10B76Cu;
label_10b76c:
    // 0x10b76c: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b770:
    // 0x10b770: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b774:
    // 0x10b774: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b778:
    // 0x10b778: 0xc046744  jal         func_119D10
label_10b77c:
    if (ctx->pc == 0x10B77Cu) {
        ctx->pc = 0x10B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B778u;
        // 0x10b77c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B780u;
        goto label_10b780;
    }
    ctx->pc = 0x10B778u;
    SET_GPR_U32(ctx, 31, 0x10B780u);
    ctx->pc = 0x10B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B778u;
    // 0x10b77c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10B778u, 0x10B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B780u;
label_10b780:
    // 0x10b780: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
label_10b784:
    // 0x10b784: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
label_10b788:
    if (ctx->pc == 0x10B788u) {
        ctx->pc = 0x10B78Cu;
        goto label_10b78c;
    }
    ctx->pc = 0x10B784u;
    {
        const bool branch_taken_0x10b784 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10b784) {
            ctx->pc = 0x10B7ACu;
            goto label_10b7ac;
        }
    }
    ctx->pc = 0x10B78Cu;
label_10b78c:
    // 0x10b78c: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b790:
    // 0x10b790: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b794:
    // 0x10b794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b798:
    // 0x10b798: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b79c:
    // 0x10b79c: 0xc046744  jal         func_119D10
label_10b7a0:
    if (ctx->pc == 0x10B7A0u) {
        ctx->pc = 0x10B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B79Cu;
        // 0x10b7a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7A4u;
        goto label_10b7a4;
    }
    ctx->pc = 0x10B79Cu;
    SET_GPR_U32(ctx, 31, 0x10B7A4u);
    ctx->pc = 0x10B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B79Cu;
    // 0x10b7a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10B79Cu, 0x10B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7A4u;
label_10b7a4:
    // 0x10b7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b7a8:
    // 0x10b7a8: 0xae0243dc  sw          $v0, 0x43DC($s0)
    ctx->pc = 0x10b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
label_10b7ac:
    // 0x10b7ac: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b7b0:
    // 0x10b7b0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_10b7b4:
    // 0x10b7b4: 0xa46201ea  sh          $v0, 0x1EA($v1)
    ctx->pc = 0x10b7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 490), (uint16_t)GPR_U32(ctx, 2));
label_10b7b8:
    // 0x10b7b8: 0x8e02231c  lw          $v0, 0x231C($s0)
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b7bc:
    // 0x10b7bc: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x10b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_10b7c0:
    // 0x10b7c0: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x10b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
label_10b7c4:
    // 0x10b7c4: 0xc055c40  jal         func_157100
label_10b7c8:
    if (ctx->pc == 0x10B7C8u) {
        ctx->pc = 0x10B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7C4u;
        // 0x10b7c8: 0x8e04231c  lw          $a0, 0x231C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7CCu;
        goto label_10b7cc;
    }
    ctx->pc = 0x10B7C4u;
    SET_GPR_U32(ctx, 31, 0x10B7CCu);
    ctx->pc = 0x10B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7C4u;
    // 0x10b7c8: 0x8e04231c  lw          $a0, 0x231C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x10B7C4u, 0x10B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7CCu;
label_10b7cc:
    // 0x10b7cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_10b7d0:
    if (ctx->pc == 0x10B7D0u) {
        ctx->pc = 0x10B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7CCu;
        // 0x10b7d0: 0xae00231c  sw          $zero, 0x231C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B7D4u;
        goto label_10b7d4;
    }
    ctx->pc = 0x10B7CCu;
    {
        const bool branch_taken_0x10b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7CCu;
        // 0x10b7d0: 0xae00231c  sw          $zero, 0x231C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7cc) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B7D4u;
label_10b7d4:
    // 0x10b7d4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_10b7d8:
    if (ctx->pc == 0x10B7D8u) {
        ctx->pc = 0x10B7DCu;
        goto label_10b7dc;
    }
    ctx->pc = 0x10B7D4u;
    {
        const bool branch_taken_0x10b7d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b7d4) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B7DCu;
label_10b7dc:
    // 0x10b7dc: 0x8604024e  lh          $a0, 0x24E($s0)
    ctx->pc = 0x10b7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
label_10b7e0:
    // 0x10b7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b7e4:
    // 0x10b7e4: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_10b7e8:
    if (ctx->pc == 0x10B7E8u) {
        ctx->pc = 0x10B7ECu;
        goto label_10b7ec;
    }
    ctx->pc = 0x10B7E4u;
    {
        const bool branch_taken_0x10b7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b7e4) {
            ctx->pc = 0x10B814u;
            goto label_10b814;
        }
    }
    ctx->pc = 0x10B7ECu;
label_10b7ec:
    // 0x10b7ec: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b7f0:
    // 0x10b7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b7f4:
    // 0x10b7f4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b7f8:
    // 0x10b7f8: 0x320f809  jalr        $t9
label_10b7fc:
    if (ctx->pc == 0x10B7FCu) {
        ctx->pc = 0x10B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7F8u;
        // 0x10b7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B800u;
        goto label_10b800;
    }
    ctx->pc = 0x10B7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B800u);
        ctx->pc = 0x10B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7F8u;
        // 0x10b7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B7F8u, 0x10B800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B800u;
label_10b800:
    // 0x10b800: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b804:
    // 0x10b804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b808:
    // 0x10b808: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10b808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10b80c:
    // 0x10b80c: 0x320f809  jalr        $t9
label_10b810:
    if (ctx->pc == 0x10B810u) {
        ctx->pc = 0x10B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B80Cu;
        // 0x10b810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B814u;
        goto label_10b814;
    }
    ctx->pc = 0x10B80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B814u);
        ctx->pc = 0x10B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B80Cu;
        // 0x10b810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B80Cu, 0x10B814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B814u;
label_10b814:
    // 0x10b814: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10b814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b818:
    // 0x10b818: 0x1000000b  b           . + 4 + (0xB << 2)
label_10b81c:
    if (ctx->pc == 0x10B81Cu) {
        ctx->pc = 0x10B820u;
        goto label_10b820;
    }
    ctx->pc = 0x10B818u;
    {
        const bool branch_taken_0x10b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b818) {
            ctx->pc = 0x10B848u;
            goto label_10b848;
        }
    }
    ctx->pc = 0x10B820u;
label_10b820:
    // 0x10b820: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_10b824:
    // 0x10b824: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10b824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10b828:
    // 0x10b828: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10b828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10b82c:
    // 0x10b82c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10b830:
    // 0x10b830: 0x24522340  addiu       $s2, $v0, 0x2340
    ctx->pc = 0x10b830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
label_10b834:
    // 0x10b834: 0xc05eb40  jal         func_17AD00
label_10b838:
    if (ctx->pc == 0x10B838u) {
        ctx->pc = 0x10B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B834u;
        // 0x10b838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B83Cu;
        goto label_10b83c;
    }
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x10B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B834u;
    // 0x10b838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD00u, 0x10B834u, 0x10B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B83Cu;
label_10b83c:
    // 0x10b83c: 0xc05eb80  jal         func_17AE00
label_10b840:
    if (ctx->pc == 0x10B840u) {
        ctx->pc = 0x10B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B83Cu;
        // 0x10b840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B844u;
        goto label_10b844;
    }
    ctx->pc = 0x10B83Cu;
    SET_GPR_U32(ctx, 31, 0x10B844u);
    ctx->pc = 0x10B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B83Cu;
    // 0x10b840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE00u, 0x10B83Cu, 0x10B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B844u;
label_10b844:
    // 0x10b844: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10b844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10b848:
    // 0x10b848: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10b848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10b84c:
    // 0x10b84c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_10b850:
    if (ctx->pc == 0x10B850u) {
        ctx->pc = 0x10B854u;
        goto label_10b854;
    }
    ctx->pc = 0x10B84Cu;
    {
        const bool branch_taken_0x10b84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b84c) {
            ctx->pc = 0x10B820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b820;
        }
    }
    ctx->pc = 0x10B854u;
label_10b854:
    // 0x10b854: 0x10000057  b           . + 4 + (0x57 << 2)
label_10b858:
    if (ctx->pc == 0x10B858u) {
        ctx->pc = 0x10B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B854u;
        // 0x10b858: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B85Cu;
        goto label_10b85c;
    }
    ctx->pc = 0x10B854u;
    {
        const bool branch_taken_0x10b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B854u;
        // 0x10b858: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b854) {
            ctx->pc = 0x10B9B4u;
            goto label_10b9b4;
        }
    }
    ctx->pc = 0x10B85Cu;
label_10b85c:
    // 0x10b85c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10b860:
    // 0x10b860: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b864:
    // 0x10b864: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_10b868:
    // 0x10b868: 0x24722340  addiu       $s2, $v1, 0x2340
    ctx->pc = 0x10b868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9024));
label_10b86c:
    // 0x10b86c: 0x8c632710  lw          $v1, 0x2710($v1)
    ctx->pc = 0x10b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10000)));
label_10b870:
    // 0x10b870: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_10b874:
    if (ctx->pc == 0x10B874u) {
        ctx->pc = 0x10B878u;
        goto label_10b878;
    }
    ctx->pc = 0x10B870u;
    {
        const bool branch_taken_0x10b870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b870) {
            ctx->pc = 0x10B8F0u;
            goto label_10b8f0;
        }
    }
    ctx->pc = 0x10B878u;
label_10b878:
    // 0x10b878: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b87c:
    // 0x10b87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b880:
    // 0x10b880: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10b880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10b884:
    // 0x10b884: 0x320f809  jalr        $t9
label_10b888:
    if (ctx->pc == 0x10B888u) {
        ctx->pc = 0x10B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B884u;
        // 0x10b888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B88Cu;
        goto label_10b88c;
    }
    ctx->pc = 0x10B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B88Cu);
        ctx->pc = 0x10B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B884u;
        // 0x10b888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B884u, 0x10B88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B88Cu;
label_10b88c:
    // 0x10b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b890:
    // 0x10b890: 0xc042fdc  jal         func_10BF70
label_10b894:
    if (ctx->pc == 0x10B894u) {
        ctx->pc = 0x10B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B890u;
        // 0x10b894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B898u;
        goto label_10b898;
    }
    ctx->pc = 0x10B890u;
    SET_GPR_U32(ctx, 31, 0x10B898u);
    ctx->pc = 0x10B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B890u;
    // 0x10b894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF70u, 0x10B890u, 0x10B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b89c:
    // 0x10b89c: 0xc042fdc  jal         func_10BF70
label_10b8a0:
    if (ctx->pc == 0x10B8A0u) {
        ctx->pc = 0x10B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B89Cu;
        // 0x10b8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8A4u;
        goto label_10b8a4;
    }
    ctx->pc = 0x10B89Cu;
    SET_GPR_U32(ctx, 31, 0x10B8A4u);
    ctx->pc = 0x10B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B89Cu;
    // 0x10b8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF70u, 0x10B89Cu, 0x10B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8A4u;
label_10b8a4:
    // 0x10b8a4: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x10b8a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_10b8a8:
    // 0x10b8a8: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_10b8ac:
    if (ctx->pc == 0x10B8ACu) {
        ctx->pc = 0x10B8B0u;
        goto label_10b8b0;
    }
    ctx->pc = 0x10B8A8u;
    {
        const bool branch_taken_0x10b8a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b8a8) {
            ctx->pc = 0x10B8D4u;
            goto label_10b8d4;
        }
    }
    ctx->pc = 0x10B8B0u;
label_10b8b0:
    // 0x10b8b0: 0x8e0201fc  lw          $v0, 0x1FC($s0)
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
label_10b8b4:
    // 0x10b8b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b8b8:
    // 0x10b8b8: 0xae0201fc  sw          $v0, 0x1FC($s0)
    ctx->pc = 0x10b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 2));
label_10b8bc:
    // 0x10b8bc: 0x860201fa  lh          $v0, 0x1FA($s0)
    ctx->pc = 0x10b8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
label_10b8c0:
    // 0x10b8c0: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x10b8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_10b8c4:
    // 0x10b8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_10b8c8:
    if (ctx->pc == 0x10B8C8u) {
        ctx->pc = 0x10B8CCu;
        goto label_10b8cc;
    }
    ctx->pc = 0x10B8C4u;
    {
        const bool branch_taken_0x10b8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b8c4) {
            ctx->pc = 0x10B8D4u;
            goto label_10b8d4;
        }
    }
    ctx->pc = 0x10B8CCu;
label_10b8cc:
    // 0x10b8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b8d0:
    // 0x10b8d0: 0xa60201fa  sh          $v0, 0x1FA($s0)
    ctx->pc = 0x10b8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 506), (uint16_t)GPR_U32(ctx, 2));
label_10b8d4:
    // 0x10b8d4: 0x0  nop
    ctx->pc = 0x10b8d4u;
    // NOP
label_10b8d8:
    // 0x10b8d8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b8dc:
    // 0x10b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b8e0:
    // 0x10b8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b8e4:
    // 0x10b8e4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10b8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10b8e8:
    // 0x10b8e8: 0x320f809  jalr        $t9
label_10b8ec:
    if (ctx->pc == 0x10B8ECu) {
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E8u;
        // 0x10b8ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8F0u;
        goto label_10b8f0;
    }
    ctx->pc = 0x10B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B8F0u);
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E8u;
        // 0x10b8ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8E8u, 0x10B8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B8F0u;
label_10b8f0:
    // 0x10b8f0: 0x8e4303d0  lw          $v1, 0x3D0($s2)
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 976)));
label_10b8f4:
    // 0x10b8f4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_10b8f8:
    if (ctx->pc == 0x10B8F8u) {
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F4u;
        // 0x10b8f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8FCu;
        goto label_10b8fc;
    }
    ctx->pc = 0x10B8F4u;
    {
        const bool branch_taken_0x10b8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F4u;
        // 0x10b8f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f4) {
            ctx->pc = 0x10B9ACu;
            goto label_10b9ac;
        }
    }
    ctx->pc = 0x10B8FCu;
label_10b8fc:
    // 0x10b8fc: 0x10000027  b           . + 4 + (0x27 << 2)
label_10b900:
    if (ctx->pc == 0x10B900u) {
        ctx->pc = 0x10B904u;
        goto label_10b904;
    }
    ctx->pc = 0x10B8FCu;
    {
        const bool branch_taken_0x10b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b8fc) {
            ctx->pc = 0x10B99Cu;
            goto label_10b99c;
        }
    }
    ctx->pc = 0x10B904u;
label_10b904:
    // 0x10b904: 0x0  nop
    ctx->pc = 0x10b904u;
    // NOP
label_10b908:
    // 0x10b908: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x10b908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_10b90c:
    // 0x10b90c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_10b910:
    // 0x10b910: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10b914:
    // 0x10b914: 0x8463230c  lh          $v1, 0x230C($v1)
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8972)));
label_10b918:
    // 0x10b918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10b91c:
    // 0x10b91c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10b920:
    // 0x10b920: 0x8c742cd8  lw          $s4, 0x2CD8($v1)
    ctx->pc = 0x10b920u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10b924:
    // 0x10b924: 0x928301d3  lbu         $v1, 0x1D3($s4)
    ctx->pc = 0x10b924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 467)));
label_10b928:
    // 0x10b928: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_10b92c:
    if (ctx->pc == 0x10B92Cu) {
        ctx->pc = 0x10B930u;
        goto label_10b930;
    }
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B998u;
            goto label_10b998;
        }
    }
    ctx->pc = 0x10B930u;
label_10b930:
    // 0x10b930: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10b934:
    // 0x10b934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b938:
    // 0x10b938: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10b938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10b93c:
    // 0x10b93c: 0x320f809  jalr        $t9
label_10b940:
    if (ctx->pc == 0x10B940u) {
        ctx->pc = 0x10B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B93Cu;
        // 0x10b940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B944u;
        goto label_10b944;
    }
    ctx->pc = 0x10B93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B944u);
        ctx->pc = 0x10B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B93Cu;
        // 0x10b940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B93Cu, 0x10B944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B944u;
label_10b944:
    // 0x10b944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b948:
    // 0x10b948: 0xc043088  jal         func_10C220
label_10b94c:
    if (ctx->pc == 0x10B94Cu) {
        ctx->pc = 0x10B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B948u;
        // 0x10b94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B950u;
        goto label_10b950;
    }
    ctx->pc = 0x10B948u;
    SET_GPR_U32(ctx, 31, 0x10B950u);
    ctx->pc = 0x10B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B948u;
    // 0x10b94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C220u, 0x10B948u, 0x10B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B950u;
label_10b950:
    // 0x10b950: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x10b950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_10b954:
    // 0x10b954: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_10b958:
    if (ctx->pc == 0x10B958u) {
        ctx->pc = 0x10B95Cu;
        goto label_10b95c;
    }
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B980u;
            goto label_10b980;
        }
    }
    ctx->pc = 0x10B95Cu;
label_10b95c:
    // 0x10b95c: 0x8e8201fc  lw          $v0, 0x1FC($s4)
    ctx->pc = 0x10b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 508)));
label_10b960:
    // 0x10b960: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b964:
    // 0x10b964: 0xae8201fc  sw          $v0, 0x1FC($s4)
    ctx->pc = 0x10b964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 508), GPR_U32(ctx, 2));
label_10b968:
    // 0x10b968: 0x868201fa  lh          $v0, 0x1FA($s4)
    ctx->pc = 0x10b968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 506)));
label_10b96c:
    // 0x10b96c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x10b96cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_10b970:
    // 0x10b970: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_10b974:
    if (ctx->pc == 0x10B974u) {
        ctx->pc = 0x10B978u;
        goto label_10b978;
    }
    ctx->pc = 0x10B970u;
    {
        const bool branch_taken_0x10b970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b970) {
            ctx->pc = 0x10B980u;
            goto label_10b980;
        }
    }
    ctx->pc = 0x10B978u;
label_10b978:
    // 0x10b978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b97c:
    // 0x10b97c: 0xa68201fa  sh          $v0, 0x1FA($s4)
    ctx->pc = 0x10b97cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 506), (uint16_t)GPR_U32(ctx, 2));
label_10b980:
    // 0x10b980: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10b980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10b984:
    // 0x10b984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b988:
    // 0x10b988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b98c:
    // 0x10b98c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10b990:
    // 0x10b990: 0x320f809  jalr        $t9
label_10b994:
    if (ctx->pc == 0x10B994u) {
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B998u;
        goto label_10b998;
    }
    ctx->pc = 0x10B990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B998u);
        ctx->pc = 0x10B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B990u;
        // 0x10b994: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B990u, 0x10B998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B998u;
label_10b998:
    // 0x10b998: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10b998u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10b99c:
    // 0x10b99c: 0x0  nop
    ctx->pc = 0x10b99cu;
    // NOP
label_10b9a0:
    // 0x10b9a0: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x10b9a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_10b9a4:
    // 0x10b9a4: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_10b9a8:
    if (ctx->pc == 0x10B9A8u) {
        ctx->pc = 0x10B9ACu;
        goto label_10b9ac;
    }
    ctx->pc = 0x10B9A4u;
    {
        const bool branch_taken_0x10b9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b9a4) {
            ctx->pc = 0x10B904u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b904;
        }
    }
    ctx->pc = 0x10B9ACu;
label_10b9ac:
    // 0x10b9ac: 0x0  nop
    ctx->pc = 0x10b9acu;
    // NOP
label_10b9b0:
    // 0x10b9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10b9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10b9b4:
    // 0x10b9b4: 0x0  nop
    ctx->pc = 0x10b9b4u;
    // NOP
label_10b9b8:
    // 0x10b9b8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10b9b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10b9bc:
    // 0x10b9bc: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
label_10b9c0:
    if (ctx->pc == 0x10B9C0u) {
        ctx->pc = 0x10B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9BCu;
        // 0x10b9c0: 0x111980  sll         $v1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B9C4u;
        goto label_10b9c4;
    }
    ctx->pc = 0x10B9BCu;
    {
        const bool branch_taken_0x10b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9BCu;
        // 0x10b9c0: 0x111980  sll         $v1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9bc) {
            ctx->pc = 0x10B85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b85c;
        }
    }
    ctx->pc = 0x10B9C4u;
label_10b9c4:
    // 0x10b9c4: 0x8e042328  lw          $a0, 0x2328($s0)
    ctx->pc = 0x10b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9000)));
label_10b9c8:
    // 0x10b9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b9cc:
    // 0x10b9cc: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
label_10b9d0:
    if (ctx->pc == 0x10B9D0u) {
        ctx->pc = 0x10B9D4u;
        goto label_10b9d4;
    }
    ctx->pc = 0x10B9CCu;
    {
        const bool branch_taken_0x10b9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b9cc) {
            ctx->pc = 0x10BACCu;
            goto label_10bacc;
        }
    }
    ctx->pc = 0x10B9D4u;
label_10b9d4:
    // 0x10b9d4: 0xae002328  sw          $zero, 0x2328($s0)
    ctx->pc = 0x10b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9000), GPR_U32(ctx, 0));
label_10b9d8:
    // 0x10b9d8: 0x10000038  b           . + 4 + (0x38 << 2)
label_10b9dc:
    if (ctx->pc == 0x10B9DCu) {
        ctx->pc = 0x10B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9D8u;
        // 0x10b9dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B9E0u;
        goto label_10b9e0;
    }
    ctx->pc = 0x10B9D8u;
    {
        const bool branch_taken_0x10b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9D8u;
        // 0x10b9dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9d8) {
            ctx->pc = 0x10BABCu;
            goto label_10babc;
        }
    }
    ctx->pc = 0x10B9E0u;
label_10b9e0:
    // 0x10b9e0: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x10b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10b9e4:
    // 0x10b9e4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x10b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_10b9e8:
    // 0x10b9e8: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x10b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10b9ec:
    // 0x10b9ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10b9f0:
    // 0x10b9f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b9f4:
    // 0x10b9f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x10b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_10b9f8:
    // 0x10b9f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_10b9fc:
    // 0x10b9fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x10b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10ba00:
    // 0x10ba00: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_10ba04:
    // 0x10ba04: 0x84840228  lh          $a0, 0x228($a0)
    ctx->pc = 0x10ba04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_10ba08:
    // 0x10ba08: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_10ba0c:
    if (ctx->pc == 0x10BA0Cu) {
        ctx->pc = 0x10BA10u;
        goto label_10ba10;
    }
    ctx->pc = 0x10BA08u;
    {
        const bool branch_taken_0x10ba08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ba08) {
            ctx->pc = 0x10BAB8u;
            goto label_10bab8;
        }
    }
    ctx->pc = 0x10BA10u;
label_10ba10:
    // 0x10ba10: 0x84a401ec  lh          $a0, 0x1EC($a1)
    ctx->pc = 0x10ba10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 492)));
label_10ba14:
    // 0x10ba14: 0x8e032300  lw          $v1, 0x2300($s0)
    ctx->pc = 0x10ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8960)));
label_10ba18:
    // 0x10ba18: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_10ba1c:
    if (ctx->pc == 0x10BA1Cu) {
        ctx->pc = 0x10BA20u;
        goto label_10ba20;
    }
    ctx->pc = 0x10BA18u;
    {
        const bool branch_taken_0x10ba18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10ba18) {
            ctx->pc = 0x10BA38u;
            goto label_10ba38;
        }
    }
    ctx->pc = 0x10BA20u;
label_10ba20:
    // 0x10ba20: 0x8e032304  lw          $v1, 0x2304($s0)
    ctx->pc = 0x10ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8964)));
label_10ba24:
    // 0x10ba24: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_10ba28:
    if (ctx->pc == 0x10BA28u) {
        ctx->pc = 0x10BA2Cu;
        goto label_10ba2c;
    }
    ctx->pc = 0x10BA24u;
    {
        const bool branch_taken_0x10ba24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10ba24) {
            ctx->pc = 0x10BA38u;
            goto label_10ba38;
        }
    }
    ctx->pc = 0x10BA2Cu;
label_10ba2c:
    // 0x10ba2c: 0x8e032308  lw          $v1, 0x2308($s0)
    ctx->pc = 0x10ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8968)));
label_10ba30:
    // 0x10ba30: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
label_10ba34:
    if (ctx->pc == 0x10BA34u) {
        ctx->pc = 0x10BA38u;
        goto label_10ba38;
    }
    ctx->pc = 0x10BA30u;
    {
        const bool branch_taken_0x10ba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10ba30) {
            ctx->pc = 0x10BAB8u;
            goto label_10bab8;
        }
    }
    ctx->pc = 0x10BA38u;
label_10ba38:
    // 0x10ba38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ba3c:
    // 0x10ba3c: 0x1000000d  b           . + 4 + (0xD << 2)
label_10ba40:
    if (ctx->pc == 0x10BA40u) {
        ctx->pc = 0x10BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA3Cu;
        // 0x10ba40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA44u;
        goto label_10ba44;
    }
    ctx->pc = 0x10BA3Cu;
    {
        const bool branch_taken_0x10ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA3Cu;
        // 0x10ba40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba3c) {
            ctx->pc = 0x10BA74u;
            goto label_10ba74;
        }
    }
    ctx->pc = 0x10BA44u;
label_10ba44:
    // 0x10ba44: 0x0  nop
    ctx->pc = 0x10ba44u;
    // NOP
label_10ba48:
    // 0x10ba48: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x10ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_10ba4c:
    // 0x10ba4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_10ba50:
    // 0x10ba50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10ba54:
    // 0x10ba54: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_10ba58:
    // 0x10ba58: 0x8c632710  lw          $v1, 0x2710($v1)
    ctx->pc = 0x10ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10000)));
label_10ba5c:
    // 0x10ba5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10ba60:
    if (ctx->pc == 0x10BA60u) {
        ctx->pc = 0x10BA64u;
        goto label_10ba64;
    }
    ctx->pc = 0x10BA5Cu;
    {
        const bool branch_taken_0x10ba5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ba5c) {
            ctx->pc = 0x10BA6Cu;
            goto label_10ba6c;
        }
    }
    ctx->pc = 0x10BA64u;
label_10ba64:
    // 0x10ba64: 0x10000007  b           . + 4 + (0x7 << 2)
label_10ba68:
    if (ctx->pc == 0x10BA68u) {
        ctx->pc = 0x10BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA64u;
        // 0x10ba68: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA6Cu;
        goto label_10ba6c;
    }
    ctx->pc = 0x10BA64u;
    {
        const bool branch_taken_0x10ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA64u;
        // 0x10ba68: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba64) {
            ctx->pc = 0x10BA84u;
            goto label_10ba84;
        }
    }
    ctx->pc = 0x10BA6Cu;
label_10ba6c:
    // 0x10ba6c: 0x0  nop
    ctx->pc = 0x10ba6cu;
    // NOP
label_10ba70:
    // 0x10ba70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_10ba74:
    // 0x10ba74: 0x0  nop
    ctx->pc = 0x10ba74u;
    // NOP
label_10ba78:
    // 0x10ba78: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x10ba78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_10ba7c:
    // 0x10ba7c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_10ba80:
    if (ctx->pc == 0x10BA80u) {
        ctx->pc = 0x10BA84u;
        goto label_10ba84;
    }
    ctx->pc = 0x10BA7Cu;
    {
        const bool branch_taken_0x10ba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ba7c) {
            ctx->pc = 0x10BA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ba44;
        }
    }
    ctx->pc = 0x10BA84u;
label_10ba84:
    // 0x10ba84: 0x0  nop
    ctx->pc = 0x10ba84u;
    // NOP
label_10ba88:
    // 0x10ba88: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
label_10ba8c:
    if (ctx->pc == 0x10BA8Cu) {
        ctx->pc = 0x10BA90u;
        goto label_10ba90;
    }
    ctx->pc = 0x10BA88u;
    {
        const bool branch_taken_0x10ba88 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x10ba88) {
            ctx->pc = 0x10BAB8u;
            goto label_10bab8;
        }
    }
    ctx->pc = 0x10BA90u;
label_10ba90:
    // 0x10ba90: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x10ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_10ba94:
    // 0x10ba94: 0x26062330  addiu       $a2, $s0, 0x2330
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 9008));
label_10ba98:
    // 0x10ba98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10ba9c:
    // 0x10ba9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10baa0:
    // 0x10baa0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10baa4:
    // 0x10baa4: 0xc05eb14  jal         func_17AC50
label_10baa8:
    if (ctx->pc == 0x10BAA8u) {
        ctx->pc = 0x10BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAA4u;
        // 0x10baa8: 0x24442340  addiu       $a0, $v0, 0x2340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BAACu;
        goto label_10baac;
    }
    ctx->pc = 0x10BAA4u;
    SET_GPR_U32(ctx, 31, 0x10BAACu);
    ctx->pc = 0x10BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAA4u;
    // 0x10baa8: 0x24442340  addiu       $a0, $v0, 0x2340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC50u, 0x10BAA4u, 0x10BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAACu;
label_10baac:
    // 0x10baac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bab0:
    // 0x10bab0: 0xc042118  jal         func_108460
label_10bab4:
    if (ctx->pc == 0x10BAB4u) {
        ctx->pc = 0x10BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAB0u;
        // 0x10bab4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BAB8u;
        goto label_10bab8;
    }
    ctx->pc = 0x10BAB0u;
    SET_GPR_U32(ctx, 31, 0x10BAB8u);
    ctx->pc = 0x10BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAB0u;
    // 0x10bab4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10BAB0u, 0x10BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAB8u;
label_10bab8:
    // 0x10bab8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10babc:
    // 0x10babc: 0x0  nop
    ctx->pc = 0x10babcu;
    // NOP
label_10bac0:
    // 0x10bac0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10bac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10bac4:
    // 0x10bac4: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
label_10bac8:
    if (ctx->pc == 0x10BAC8u) {
        ctx->pc = 0x10BACCu;
        goto label_10bacc;
    }
    ctx->pc = 0x10BAC4u;
    {
        const bool branch_taken_0x10bac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bac4) {
            ctx->pc = 0x10B9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b9e0;
        }
    }
    ctx->pc = 0x10BACCu;
label_10bacc:
    // 0x10bacc: 0x0  nop
    ctx->pc = 0x10baccu;
    // NOP
label_10bad0:
    // 0x10bad0: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_10bad4:
    // 0x10bad4: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_10bad8:
    if (ctx->pc == 0x10BAD8u) {
        ctx->pc = 0x10BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAD4u;
        // 0x10bad8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BADCu;
        goto label_10badc;
    }
    ctx->pc = 0x10BAD4u;
    {
        const bool branch_taken_0x10bad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAD4u;
        // 0x10bad8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bad4) {
            ctx->pc = 0x10BBACu;
            goto label_10bbac;
        }
    }
    ctx->pc = 0x10BADCu;
label_10badc:
    // 0x10badc: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x10badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10bae0:
    // 0x10bae0: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x10bae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_10bae4:
    // 0x10bae4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10bae8:
    if (ctx->pc == 0x10BAE8u) {
        ctx->pc = 0x10BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAE4u;
        // 0x10bae8: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BAECu;
        goto label_10baec;
    }
    ctx->pc = 0x10BAE4u;
    {
        const bool branch_taken_0x10bae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAE4u;
        // 0x10bae8: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bae4) {
            ctx->pc = 0x10BAF4u;
            goto label_10baf4;
        }
    }
    ctx->pc = 0x10BAECu;
label_10baec:
    // 0x10baec: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_10baf0:
    if (ctx->pc == 0x10BAF0u) {
        ctx->pc = 0x10BAF4u;
        goto label_10baf4;
    }
    ctx->pc = 0x10BAECu;
    {
        const bool branch_taken_0x10baec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10baec) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BAF4u;
label_10baf4:
    // 0x10baf4: 0xc042c10  jal         func_10B040
label_10baf8:
    if (ctx->pc == 0x10BAF8u) {
        ctx->pc = 0x10BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAF4u;
        // 0x10baf8: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BAFCu;
        goto label_10bafc;
    }
    ctx->pc = 0x10BAF4u;
    SET_GPR_U32(ctx, 31, 0x10BAFCu);
    ctx->pc = 0x10BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BAF4u;
    // 0x10baf8: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B040u, 0x10BAF4u, 0x10BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BAFCu;
label_10bafc:
    // 0x10bafc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_10bb00:
    if (ctx->pc == 0x10BB00u) {
        ctx->pc = 0x10BB04u;
        goto label_10bb04;
    }
    ctx->pc = 0x10BAFCu;
    {
        const bool branch_taken_0x10bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bafc) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BB04u;
label_10bb04:
    // 0x10bb04: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10bb08:
    // 0x10bb08: 0x8063002c  lb          $v1, 0x2C($v1)
    ctx->pc = 0x10bb08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_10bb0c:
    // 0x10bb0c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_10bb10:
    if (ctx->pc == 0x10BB10u) {
        ctx->pc = 0x10BB14u;
        goto label_10bb14;
    }
    ctx->pc = 0x10BB0Cu;
    {
        const bool branch_taken_0x10bb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bb0c) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BB14u;
label_10bb14:
    // 0x10bb14: 0x8e04231c  lw          $a0, 0x231C($s0)
    ctx->pc = 0x10bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10bb18:
    // 0x10bb18: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_10bb1c:
    if (ctx->pc == 0x10BB1Cu) {
        ctx->pc = 0x10BB20u;
        goto label_10bb20;
    }
    ctx->pc = 0x10BB18u;
    {
        const bool branch_taken_0x10bb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bb18) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BB20u;
label_10bb20:
    // 0x10bb20: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
label_10bb24:
    // 0x10bb24: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_10bb28:
    if (ctx->pc == 0x10BB28u) {
        ctx->pc = 0x10BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB24u;
        // 0x10bb28: 0x24860370  addiu       $a2, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB2Cu;
        goto label_10bb2c;
    }
    ctx->pc = 0x10BB24u;
    {
        const bool branch_taken_0x10bb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB24u;
        // 0x10bb28: 0x24860370  addiu       $a2, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb24) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BB2Cu;
label_10bb2c:
    // 0x10bb2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10bb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10bb30:
    // 0x10bb30: 0x1000000a  b           . + 4 + (0xA << 2)
label_10bb34:
    if (ctx->pc == 0x10BB34u) {
        ctx->pc = 0x10BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB30u;
        // 0x10bb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB38u;
        goto label_10bb38;
    }
    ctx->pc = 0x10BB30u;
    {
        const bool branch_taken_0x10bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB30u;
        // 0x10bb34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb30) {
            ctx->pc = 0x10BB5Cu;
            goto label_10bb5c;
        }
    }
    ctx->pc = 0x10BB38u;
label_10bb38:
    // 0x10bb38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10bb3c:
    // 0x10bb3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10bb40:
    // 0x10bb40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_10bb44:
    // 0x10bb44: 0x8c630650  lw          $v1, 0x650($v1)
    ctx->pc = 0x10bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1616)));
label_10bb48:
    // 0x10bb48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10bb4c:
    if (ctx->pc == 0x10BB4Cu) {
        ctx->pc = 0x10BB50u;
        goto label_10bb50;
    }
    ctx->pc = 0x10BB48u;
    {
        const bool branch_taken_0x10bb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bb48) {
            ctx->pc = 0x10BB58u;
            goto label_10bb58;
        }
    }
    ctx->pc = 0x10BB50u;
label_10bb50:
    // 0x10bb50: 0x10000006  b           . + 4 + (0x6 << 2)
label_10bb54:
    if (ctx->pc == 0x10BB54u) {
        ctx->pc = 0x10BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB50u;
        // 0x10bb54: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB58u;
        goto label_10bb58;
    }
    ctx->pc = 0x10BB50u;
    {
        const bool branch_taken_0x10bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB50u;
        // 0x10bb54: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb50) {
            ctx->pc = 0x10BB6Cu;
            goto label_10bb6c;
        }
    }
    ctx->pc = 0x10BB58u;
label_10bb58:
    // 0x10bb58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10bb5c:
    // 0x10bb5c: 0x0  nop
    ctx->pc = 0x10bb5cu;
    // NOP
label_10bb60:
    // 0x10bb60: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x10bb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_10bb64:
    // 0x10bb64: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_10bb68:
    if (ctx->pc == 0x10BB68u) {
        ctx->pc = 0x10BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB64u;
        // 0x10bb68: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB6Cu;
        goto label_10bb6c;
    }
    ctx->pc = 0x10BB64u;
    {
        const bool branch_taken_0x10bb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB64u;
        // 0x10bb68: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb64) {
            ctx->pc = 0x10BB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bb38;
        }
    }
    ctx->pc = 0x10BB6Cu;
label_10bb6c:
    // 0x10bb6c: 0x0  nop
    ctx->pc = 0x10bb6cu;
    // NOP
label_10bb70:
    // 0x10bb70: 0x4e00009  bltz        $a3, . + 4 + (0x9 << 2)
label_10bb74:
    if (ctx->pc == 0x10BB74u) {
        ctx->pc = 0x10BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB70u;
        // 0x10bb74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB78u;
        goto label_10bb78;
    }
    ctx->pc = 0x10BB70u;
    {
        const bool branch_taken_0x10bb70 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x10BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB70u;
        // 0x10bb74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb70) {
            ctx->pc = 0x10BB98u;
            goto label_10bb98;
        }
    }
    ctx->pc = 0x10BB78u;
label_10bb78:
    // 0x10bb78: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_10bb7c:
    // 0x10bb7c: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x10bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_10bb80:
    // 0x10bb80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_10bb84:
    // 0x10bb84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10bb88:
    // 0x10bb88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10bb8c:
    // 0x10bb8c: 0xc05eb14  jal         func_17AC50
label_10bb90:
    if (ctx->pc == 0x10BB90u) {
        ctx->pc = 0x10BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB8Cu;
        // 0x10bb90: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB94u;
        goto label_10bb94;
    }
    ctx->pc = 0x10BB8Cu;
    SET_GPR_U32(ctx, 31, 0x10BB94u);
    ctx->pc = 0x10BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB8Cu;
    // 0x10bb90: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC50u, 0x10BB8Cu, 0x10BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB94u;
label_10bb94:
    // 0x10bb94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bb98:
    // 0x10bb98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_10bb9c:
    if (ctx->pc == 0x10BB9Cu) {
        ctx->pc = 0x10BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB98u;
        // 0x10bb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBA0u;
        goto label_10bba0;
    }
    ctx->pc = 0x10BB98u;
    {
        const bool branch_taken_0x10bb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB98u;
        // 0x10bb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb98) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BBA0u;
label_10bba0:
    // 0x10bba0: 0xc042118  jal         func_108460
label_10bba4:
    if (ctx->pc == 0x10BBA4u) {
        ctx->pc = 0x10BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBA0u;
        // 0x10bba4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBA8u;
        goto label_10bba8;
    }
    ctx->pc = 0x10BBA0u;
    SET_GPR_U32(ctx, 31, 0x10BBA8u);
    ctx->pc = 0x10BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBA0u;
    // 0x10bba4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10BBA0u, 0x10BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBA8u;
label_10bba8:
    // 0x10bba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10bba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bbac:
    // 0x10bbac: 0x1000000b  b           . + 4 + (0xB << 2)
label_10bbb0:
    if (ctx->pc == 0x10BBB0u) {
        ctx->pc = 0x10BBB4u;
        goto label_10bbb4;
    }
    ctx->pc = 0x10BBACu;
    {
        const bool branch_taken_0x10bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbac) {
            ctx->pc = 0x10BBDCu;
            goto label_10bbdc;
        }
    }
    ctx->pc = 0x10BBB4u;
label_10bbb4:
    // 0x10bbb4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x10bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_10bbb8:
    // 0x10bbb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10bbbc:
    // 0x10bbbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10bbc0:
    // 0x10bbc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10bbc4:
    // 0x10bbc4: 0x24520280  addiu       $s2, $v0, 0x280
    ctx->pc = 0x10bbc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_10bbc8:
    // 0x10bbc8: 0xc05eb40  jal         func_17AD00
label_10bbcc:
    if (ctx->pc == 0x10BBCCu) {
        ctx->pc = 0x10BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBC8u;
        // 0x10bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBD0u;
        goto label_10bbd0;
    }
    ctx->pc = 0x10BBC8u;
    SET_GPR_U32(ctx, 31, 0x10BBD0u);
    ctx->pc = 0x10BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBC8u;
    // 0x10bbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD00u, 0x10BBC8u, 0x10BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBD0u;
label_10bbd0:
    // 0x10bbd0: 0xc05eb80  jal         func_17AE00
label_10bbd4:
    if (ctx->pc == 0x10BBD4u) {
        ctx->pc = 0x10BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBD0u;
        // 0x10bbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBD8u;
        goto label_10bbd8;
    }
    ctx->pc = 0x10BBD0u;
    SET_GPR_U32(ctx, 31, 0x10BBD8u);
    ctx->pc = 0x10BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BBD0u;
    // 0x10bbd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE00u, 0x10BBD0u, 0x10BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBD8u;
label_10bbd8:
    // 0x10bbd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10bbd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10bbdc:
    // 0x10bbdc: 0x0  nop
    ctx->pc = 0x10bbdcu;
    // NOP
label_10bbe0:
    // 0x10bbe0: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10bbe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10bbe4:
    // 0x10bbe4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_10bbe8:
    if (ctx->pc == 0x10BBE8u) {
        ctx->pc = 0x10BBECu;
        goto label_10bbec;
    }
    ctx->pc = 0x10BBE4u;
    {
        const bool branch_taken_0x10bbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bbe4) {
            ctx->pc = 0x10BBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bbb4;
        }
    }
    ctx->pc = 0x10BBECu;
label_10bbec:
    // 0x10bbec: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10bbf0:
    // 0x10bbf0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_10bbf4:
    if (ctx->pc == 0x10BBF4u) {
        ctx->pc = 0x10BBF8u;
        goto label_10bbf8;
    }
    ctx->pc = 0x10BBF0u;
    {
        const bool branch_taken_0x10bbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbf0) {
            ctx->pc = 0x10BC80u;
            goto label_10bc80;
        }
    }
    ctx->pc = 0x10BBF8u;
label_10bbf8:
    // 0x10bbf8: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10bbfc:
    // 0x10bbfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10bc00:
    // 0x10bc00: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_10bc04:
    if (ctx->pc == 0x10BC04u) {
        ctx->pc = 0x10BC08u;
        goto label_10bc08;
    }
    ctx->pc = 0x10BC00u;
    {
        const bool branch_taken_0x10bc00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bc00) {
            ctx->pc = 0x10BC5Cu;
            goto label_10bc5c;
        }
    }
    ctx->pc = 0x10BC08u;
label_10bc08:
    // 0x10bc08: 0xae0043e0  sw          $zero, 0x43E0($s0)
    ctx->pc = 0x10bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17376), GPR_U32(ctx, 0));
label_10bc0c:
    // 0x10bc0c: 0x8e0543d8  lw          $a1, 0x43D8($s0)
    ctx->pc = 0x10bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17368)));
label_10bc10:
    // 0x10bc10: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_10bc14:
    if (ctx->pc == 0x10BC14u) {
        ctx->pc = 0x10BC18u;
        goto label_10bc18;
    }
    ctx->pc = 0x10BC10u;
    {
        const bool branch_taken_0x10bc10 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10bc10) {
            ctx->pc = 0x10BC2Cu;
            goto label_10bc2c;
        }
    }
    ctx->pc = 0x10BC18u;
label_10bc18:
    // 0x10bc18: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10bc1c:
    // 0x10bc1c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10bc20:
    // 0x10bc20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10bc24:
    // 0x10bc24: 0xc046744  jal         func_119D10
label_10bc28:
    if (ctx->pc == 0x10BC28u) {
        ctx->pc = 0x10BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC24u;
        // 0x10bc28: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC2Cu;
        goto label_10bc2c;
    }
    ctx->pc = 0x10BC24u;
    SET_GPR_U32(ctx, 31, 0x10BC2Cu);
    ctx->pc = 0x10BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC24u;
    // 0x10bc28: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10BC24u, 0x10BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC2Cu;
label_10bc2c:
    // 0x10bc2c: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
label_10bc30:
    // 0x10bc30: 0x4a00013  bltz        $a1, . + 4 + (0x13 << 2)
label_10bc34:
    if (ctx->pc == 0x10BC34u) {
        ctx->pc = 0x10BC38u;
        goto label_10bc38;
    }
    ctx->pc = 0x10BC30u;
    {
        const bool branch_taken_0x10bc30 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10bc30) {
            ctx->pc = 0x10BC80u;
            goto label_10bc80;
        }
    }
    ctx->pc = 0x10BC38u;
label_10bc38:
    // 0x10bc38: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10bc3c:
    // 0x10bc3c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10bc40:
    // 0x10bc40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10bc44:
    // 0x10bc44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10bc48:
    // 0x10bc48: 0xc046744  jal         func_119D10
label_10bc4c:
    if (ctx->pc == 0x10BC4Cu) {
        ctx->pc = 0x10BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC48u;
        // 0x10bc4c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC50u;
        goto label_10bc50;
    }
    ctx->pc = 0x10BC48u;
    SET_GPR_U32(ctx, 31, 0x10BC50u);
    ctx->pc = 0x10BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC48u;
    // 0x10bc4c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10BC48u, 0x10BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC50u;
label_10bc50:
    // 0x10bc50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10bc54:
    // 0x10bc54: 0x1000000a  b           . + 4 + (0xA << 2)
label_10bc58:
    if (ctx->pc == 0x10BC58u) {
        ctx->pc = 0x10BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC54u;
        // 0x10bc58: 0xae0343dc  sw          $v1, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC5Cu;
        goto label_10bc5c;
    }
    ctx->pc = 0x10BC54u;
    {
        const bool branch_taken_0x10bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC54u;
        // 0x10bc58: 0xae0343dc  sw          $v1, 0x43DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc54) {
            ctx->pc = 0x10BC80u;
            goto label_10bc80;
        }
    }
    ctx->pc = 0x10BC5Cu;
label_10bc5c:
    // 0x10bc5c: 0x8e060250  lw          $a2, 0x250($s0)
    ctx->pc = 0x10bc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_10bc60:
    // 0x10bc60: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x10bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
label_10bc64:
    // 0x10bc64: 0xc042930  jal         func_10A4C0
label_10bc68:
    if (ctx->pc == 0x10BC68u) {
        ctx->pc = 0x10BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC64u;
        // 0x10bc68: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC6Cu;
        goto label_10bc6c;
    }
    ctx->pc = 0x10BC64u;
    SET_GPR_U32(ctx, 31, 0x10BC6Cu);
    ctx->pc = 0x10BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC64u;
    // 0x10bc68: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4C0u, 0x10BC64u, 0x10BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC6Cu;
label_10bc6c:
    // 0x10bc6c: 0x8e0343e0  lw          $v1, 0x43E0($s0)
    ctx->pc = 0x10bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17376)));
label_10bc70:
    // 0x10bc70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_10bc74:
    if (ctx->pc == 0x10BC74u) {
        ctx->pc = 0x10BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC70u;
        // 0x10bc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC78u;
        goto label_10bc78;
    }
    ctx->pc = 0x10BC70u;
    {
        const bool branch_taken_0x10bc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC70u;
        // 0x10bc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc70) {
            ctx->pc = 0x10BC80u;
            goto label_10bc80;
        }
    }
    ctx->pc = 0x10BC78u;
label_10bc78:
    // 0x10bc78: 0xc042118  jal         func_108460
label_10bc7c:
    if (ctx->pc == 0x10BC7Cu) {
        ctx->pc = 0x10BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC78u;
        // 0x10bc7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC80u;
        goto label_10bc80;
    }
    ctx->pc = 0x10BC78u;
    SET_GPR_U32(ctx, 31, 0x10BC80u);
    ctx->pc = 0x10BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC78u;
    // 0x10bc7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10BC78u, 0x10BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC80u;
label_10bc80:
    // 0x10bc80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10bc84:
    // 0x10bc84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10bc84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10bc88:
    // 0x10bc88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10bc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10bc8c:
    // 0x10bc8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10bc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10bc90:
    // 0x10bc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10bc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bc94:
    // 0x10bc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10bc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10bc98:
    // 0x10bc98: 0x3e00008  jr          $ra
label_10bc9c:
    if (ctx->pc == 0x10BC9Cu) {
        ctx->pc = 0x10BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC98u;
        // 0x10bc9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BCA0u;
        goto label_fallthrough_0x10bc98;
    }
    ctx->pc = 0x10BC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC98u;
        // 0x10bc9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bc98:
    ctx->pc = 0x10BCA0u;
}
