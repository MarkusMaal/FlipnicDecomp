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

// Function: FUN_0019d0d0
// Address: 0x19d0d0 - 0x19d79c
void FUN_0019d0d0_0x19d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d0d0_0x19d0d0");
#endif

    switch (ctx->pc) {
        case 0x19d0d0u: goto label_19d0d0;
        case 0x19d0d4u: goto label_19d0d4;
        case 0x19d0d8u: goto label_19d0d8;
        case 0x19d0dcu: goto label_19d0dc;
        case 0x19d0e0u: goto label_19d0e0;
        case 0x19d0e4u: goto label_19d0e4;
        case 0x19d0e8u: goto label_19d0e8;
        case 0x19d0ecu: goto label_19d0ec;
        case 0x19d0f0u: goto label_19d0f0;
        case 0x19d0f4u: goto label_19d0f4;
        case 0x19d0f8u: goto label_19d0f8;
        case 0x19d0fcu: goto label_19d0fc;
        case 0x19d100u: goto label_19d100;
        case 0x19d104u: goto label_19d104;
        case 0x19d108u: goto label_19d108;
        case 0x19d10cu: goto label_19d10c;
        case 0x19d110u: goto label_19d110;
        case 0x19d114u: goto label_19d114;
        case 0x19d118u: goto label_19d118;
        case 0x19d11cu: goto label_19d11c;
        case 0x19d120u: goto label_19d120;
        case 0x19d124u: goto label_19d124;
        case 0x19d128u: goto label_19d128;
        case 0x19d12cu: goto label_19d12c;
        case 0x19d130u: goto label_19d130;
        case 0x19d134u: goto label_19d134;
        case 0x19d138u: goto label_19d138;
        case 0x19d13cu: goto label_19d13c;
        case 0x19d140u: goto label_19d140;
        case 0x19d144u: goto label_19d144;
        case 0x19d148u: goto label_19d148;
        case 0x19d14cu: goto label_19d14c;
        case 0x19d150u: goto label_19d150;
        case 0x19d154u: goto label_19d154;
        case 0x19d158u: goto label_19d158;
        case 0x19d15cu: goto label_19d15c;
        case 0x19d160u: goto label_19d160;
        case 0x19d164u: goto label_19d164;
        case 0x19d168u: goto label_19d168;
        case 0x19d16cu: goto label_19d16c;
        case 0x19d170u: goto label_19d170;
        case 0x19d174u: goto label_19d174;
        case 0x19d178u: goto label_19d178;
        case 0x19d17cu: goto label_19d17c;
        case 0x19d180u: goto label_19d180;
        case 0x19d184u: goto label_19d184;
        case 0x19d188u: goto label_19d188;
        case 0x19d18cu: goto label_19d18c;
        case 0x19d190u: goto label_19d190;
        case 0x19d194u: goto label_19d194;
        case 0x19d198u: goto label_19d198;
        case 0x19d19cu: goto label_19d19c;
        case 0x19d1a0u: goto label_19d1a0;
        case 0x19d1a4u: goto label_19d1a4;
        case 0x19d1a8u: goto label_19d1a8;
        case 0x19d1acu: goto label_19d1ac;
        case 0x19d1b0u: goto label_19d1b0;
        case 0x19d1b4u: goto label_19d1b4;
        case 0x19d1b8u: goto label_19d1b8;
        case 0x19d1bcu: goto label_19d1bc;
        case 0x19d1c0u: goto label_19d1c0;
        case 0x19d1c4u: goto label_19d1c4;
        case 0x19d1c8u: goto label_19d1c8;
        case 0x19d1ccu: goto label_19d1cc;
        case 0x19d1d0u: goto label_19d1d0;
        case 0x19d1d4u: goto label_19d1d4;
        case 0x19d1d8u: goto label_19d1d8;
        case 0x19d1dcu: goto label_19d1dc;
        case 0x19d1e0u: goto label_19d1e0;
        case 0x19d1e4u: goto label_19d1e4;
        case 0x19d1e8u: goto label_19d1e8;
        case 0x19d1ecu: goto label_19d1ec;
        case 0x19d1f0u: goto label_19d1f0;
        case 0x19d1f4u: goto label_19d1f4;
        case 0x19d1f8u: goto label_19d1f8;
        case 0x19d1fcu: goto label_19d1fc;
        case 0x19d200u: goto label_19d200;
        case 0x19d204u: goto label_19d204;
        case 0x19d208u: goto label_19d208;
        case 0x19d20cu: goto label_19d20c;
        case 0x19d210u: goto label_19d210;
        case 0x19d214u: goto label_19d214;
        case 0x19d218u: goto label_19d218;
        case 0x19d21cu: goto label_19d21c;
        case 0x19d220u: goto label_19d220;
        case 0x19d224u: goto label_19d224;
        case 0x19d228u: goto label_19d228;
        case 0x19d22cu: goto label_19d22c;
        case 0x19d230u: goto label_19d230;
        case 0x19d234u: goto label_19d234;
        case 0x19d238u: goto label_19d238;
        case 0x19d23cu: goto label_19d23c;
        case 0x19d240u: goto label_19d240;
        case 0x19d244u: goto label_19d244;
        case 0x19d248u: goto label_19d248;
        case 0x19d24cu: goto label_19d24c;
        case 0x19d250u: goto label_19d250;
        case 0x19d254u: goto label_19d254;
        case 0x19d258u: goto label_19d258;
        case 0x19d25cu: goto label_19d25c;
        case 0x19d260u: goto label_19d260;
        case 0x19d264u: goto label_19d264;
        case 0x19d268u: goto label_19d268;
        case 0x19d26cu: goto label_19d26c;
        case 0x19d270u: goto label_19d270;
        case 0x19d274u: goto label_19d274;
        case 0x19d278u: goto label_19d278;
        case 0x19d27cu: goto label_19d27c;
        case 0x19d280u: goto label_19d280;
        case 0x19d284u: goto label_19d284;
        case 0x19d288u: goto label_19d288;
        case 0x19d28cu: goto label_19d28c;
        case 0x19d290u: goto label_19d290;
        case 0x19d294u: goto label_19d294;
        case 0x19d298u: goto label_19d298;
        case 0x19d29cu: goto label_19d29c;
        case 0x19d2a0u: goto label_19d2a0;
        case 0x19d2a4u: goto label_19d2a4;
        case 0x19d2a8u: goto label_19d2a8;
        case 0x19d2acu: goto label_19d2ac;
        case 0x19d2b0u: goto label_19d2b0;
        case 0x19d2b4u: goto label_19d2b4;
        case 0x19d2b8u: goto label_19d2b8;
        case 0x19d2bcu: goto label_19d2bc;
        case 0x19d2c0u: goto label_19d2c0;
        case 0x19d2c4u: goto label_19d2c4;
        case 0x19d2c8u: goto label_19d2c8;
        case 0x19d2ccu: goto label_19d2cc;
        case 0x19d2d0u: goto label_19d2d0;
        case 0x19d2d4u: goto label_19d2d4;
        case 0x19d2d8u: goto label_19d2d8;
        case 0x19d2dcu: goto label_19d2dc;
        case 0x19d2e0u: goto label_19d2e0;
        case 0x19d2e4u: goto label_19d2e4;
        case 0x19d2e8u: goto label_19d2e8;
        case 0x19d2ecu: goto label_19d2ec;
        case 0x19d2f0u: goto label_19d2f0;
        case 0x19d2f4u: goto label_19d2f4;
        case 0x19d2f8u: goto label_19d2f8;
        case 0x19d2fcu: goto label_19d2fc;
        case 0x19d300u: goto label_19d300;
        case 0x19d304u: goto label_19d304;
        case 0x19d308u: goto label_19d308;
        case 0x19d30cu: goto label_19d30c;
        case 0x19d310u: goto label_19d310;
        case 0x19d314u: goto label_19d314;
        case 0x19d318u: goto label_19d318;
        case 0x19d31cu: goto label_19d31c;
        case 0x19d320u: goto label_19d320;
        case 0x19d324u: goto label_19d324;
        case 0x19d328u: goto label_19d328;
        case 0x19d32cu: goto label_19d32c;
        case 0x19d330u: goto label_19d330;
        case 0x19d334u: goto label_19d334;
        case 0x19d338u: goto label_19d338;
        case 0x19d33cu: goto label_19d33c;
        case 0x19d340u: goto label_19d340;
        case 0x19d344u: goto label_19d344;
        case 0x19d348u: goto label_19d348;
        case 0x19d34cu: goto label_19d34c;
        case 0x19d350u: goto label_19d350;
        case 0x19d354u: goto label_19d354;
        case 0x19d358u: goto label_19d358;
        case 0x19d35cu: goto label_19d35c;
        case 0x19d360u: goto label_19d360;
        case 0x19d364u: goto label_19d364;
        case 0x19d368u: goto label_19d368;
        case 0x19d36cu: goto label_19d36c;
        case 0x19d370u: goto label_19d370;
        case 0x19d374u: goto label_19d374;
        case 0x19d378u: goto label_19d378;
        case 0x19d37cu: goto label_19d37c;
        case 0x19d380u: goto label_19d380;
        case 0x19d384u: goto label_19d384;
        case 0x19d388u: goto label_19d388;
        case 0x19d38cu: goto label_19d38c;
        case 0x19d390u: goto label_19d390;
        case 0x19d394u: goto label_19d394;
        case 0x19d398u: goto label_19d398;
        case 0x19d39cu: goto label_19d39c;
        case 0x19d3a0u: goto label_19d3a0;
        case 0x19d3a4u: goto label_19d3a4;
        case 0x19d3a8u: goto label_19d3a8;
        case 0x19d3acu: goto label_19d3ac;
        case 0x19d3b0u: goto label_19d3b0;
        case 0x19d3b4u: goto label_19d3b4;
        case 0x19d3b8u: goto label_19d3b8;
        case 0x19d3bcu: goto label_19d3bc;
        case 0x19d3c0u: goto label_19d3c0;
        case 0x19d3c4u: goto label_19d3c4;
        case 0x19d3c8u: goto label_19d3c8;
        case 0x19d3ccu: goto label_19d3cc;
        case 0x19d3d0u: goto label_19d3d0;
        case 0x19d3d4u: goto label_19d3d4;
        case 0x19d3d8u: goto label_19d3d8;
        case 0x19d3dcu: goto label_19d3dc;
        case 0x19d3e0u: goto label_19d3e0;
        case 0x19d3e4u: goto label_19d3e4;
        case 0x19d3e8u: goto label_19d3e8;
        case 0x19d3ecu: goto label_19d3ec;
        case 0x19d3f0u: goto label_19d3f0;
        case 0x19d3f4u: goto label_19d3f4;
        case 0x19d3f8u: goto label_19d3f8;
        case 0x19d3fcu: goto label_19d3fc;
        case 0x19d400u: goto label_19d400;
        case 0x19d404u: goto label_19d404;
        case 0x19d408u: goto label_19d408;
        case 0x19d40cu: goto label_19d40c;
        case 0x19d410u: goto label_19d410;
        case 0x19d414u: goto label_19d414;
        case 0x19d418u: goto label_19d418;
        case 0x19d41cu: goto label_19d41c;
        case 0x19d420u: goto label_19d420;
        case 0x19d424u: goto label_19d424;
        case 0x19d428u: goto label_19d428;
        case 0x19d42cu: goto label_19d42c;
        case 0x19d430u: goto label_19d430;
        case 0x19d434u: goto label_19d434;
        case 0x19d438u: goto label_19d438;
        case 0x19d43cu: goto label_19d43c;
        case 0x19d440u: goto label_19d440;
        case 0x19d444u: goto label_19d444;
        case 0x19d448u: goto label_19d448;
        case 0x19d44cu: goto label_19d44c;
        case 0x19d450u: goto label_19d450;
        case 0x19d454u: goto label_19d454;
        case 0x19d458u: goto label_19d458;
        case 0x19d45cu: goto label_19d45c;
        case 0x19d460u: goto label_19d460;
        case 0x19d464u: goto label_19d464;
        case 0x19d468u: goto label_19d468;
        case 0x19d46cu: goto label_19d46c;
        case 0x19d470u: goto label_19d470;
        case 0x19d474u: goto label_19d474;
        case 0x19d478u: goto label_19d478;
        case 0x19d47cu: goto label_19d47c;
        case 0x19d480u: goto label_19d480;
        case 0x19d484u: goto label_19d484;
        case 0x19d488u: goto label_19d488;
        case 0x19d48cu: goto label_19d48c;
        case 0x19d490u: goto label_19d490;
        case 0x19d494u: goto label_19d494;
        case 0x19d498u: goto label_19d498;
        case 0x19d49cu: goto label_19d49c;
        case 0x19d4a0u: goto label_19d4a0;
        case 0x19d4a4u: goto label_19d4a4;
        case 0x19d4a8u: goto label_19d4a8;
        case 0x19d4acu: goto label_19d4ac;
        case 0x19d4b0u: goto label_19d4b0;
        case 0x19d4b4u: goto label_19d4b4;
        case 0x19d4b8u: goto label_19d4b8;
        case 0x19d4bcu: goto label_19d4bc;
        case 0x19d4c0u: goto label_19d4c0;
        case 0x19d4c4u: goto label_19d4c4;
        case 0x19d4c8u: goto label_19d4c8;
        case 0x19d4ccu: goto label_19d4cc;
        case 0x19d4d0u: goto label_19d4d0;
        case 0x19d4d4u: goto label_19d4d4;
        case 0x19d4d8u: goto label_19d4d8;
        case 0x19d4dcu: goto label_19d4dc;
        case 0x19d4e0u: goto label_19d4e0;
        case 0x19d4e4u: goto label_19d4e4;
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d4ecu: goto label_19d4ec;
        case 0x19d4f0u: goto label_19d4f0;
        case 0x19d4f4u: goto label_19d4f4;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d4fcu: goto label_19d4fc;
        case 0x19d500u: goto label_19d500;
        case 0x19d504u: goto label_19d504;
        case 0x19d508u: goto label_19d508;
        case 0x19d50cu: goto label_19d50c;
        case 0x19d510u: goto label_19d510;
        case 0x19d514u: goto label_19d514;
        case 0x19d518u: goto label_19d518;
        case 0x19d51cu: goto label_19d51c;
        case 0x19d520u: goto label_19d520;
        case 0x19d524u: goto label_19d524;
        case 0x19d528u: goto label_19d528;
        case 0x19d52cu: goto label_19d52c;
        case 0x19d530u: goto label_19d530;
        case 0x19d534u: goto label_19d534;
        case 0x19d538u: goto label_19d538;
        case 0x19d53cu: goto label_19d53c;
        case 0x19d540u: goto label_19d540;
        case 0x19d544u: goto label_19d544;
        case 0x19d548u: goto label_19d548;
        case 0x19d54cu: goto label_19d54c;
        case 0x19d550u: goto label_19d550;
        case 0x19d554u: goto label_19d554;
        case 0x19d558u: goto label_19d558;
        case 0x19d55cu: goto label_19d55c;
        case 0x19d560u: goto label_19d560;
        case 0x19d564u: goto label_19d564;
        case 0x19d568u: goto label_19d568;
        case 0x19d56cu: goto label_19d56c;
        case 0x19d570u: goto label_19d570;
        case 0x19d574u: goto label_19d574;
        case 0x19d578u: goto label_19d578;
        case 0x19d57cu: goto label_19d57c;
        case 0x19d580u: goto label_19d580;
        case 0x19d584u: goto label_19d584;
        case 0x19d588u: goto label_19d588;
        case 0x19d58cu: goto label_19d58c;
        case 0x19d590u: goto label_19d590;
        case 0x19d594u: goto label_19d594;
        case 0x19d598u: goto label_19d598;
        case 0x19d59cu: goto label_19d59c;
        case 0x19d5a0u: goto label_19d5a0;
        case 0x19d5a4u: goto label_19d5a4;
        case 0x19d5a8u: goto label_19d5a8;
        case 0x19d5acu: goto label_19d5ac;
        case 0x19d5b0u: goto label_19d5b0;
        case 0x19d5b4u: goto label_19d5b4;
        case 0x19d5b8u: goto label_19d5b8;
        case 0x19d5bcu: goto label_19d5bc;
        case 0x19d5c0u: goto label_19d5c0;
        case 0x19d5c4u: goto label_19d5c4;
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5ccu: goto label_19d5cc;
        case 0x19d5d0u: goto label_19d5d0;
        case 0x19d5d4u: goto label_19d5d4;
        case 0x19d5d8u: goto label_19d5d8;
        case 0x19d5dcu: goto label_19d5dc;
        case 0x19d5e0u: goto label_19d5e0;
        case 0x19d5e4u: goto label_19d5e4;
        case 0x19d5e8u: goto label_19d5e8;
        case 0x19d5ecu: goto label_19d5ec;
        case 0x19d5f0u: goto label_19d5f0;
        case 0x19d5f4u: goto label_19d5f4;
        case 0x19d5f8u: goto label_19d5f8;
        case 0x19d5fcu: goto label_19d5fc;
        case 0x19d600u: goto label_19d600;
        case 0x19d604u: goto label_19d604;
        case 0x19d608u: goto label_19d608;
        case 0x19d60cu: goto label_19d60c;
        case 0x19d610u: goto label_19d610;
        case 0x19d614u: goto label_19d614;
        case 0x19d618u: goto label_19d618;
        case 0x19d61cu: goto label_19d61c;
        case 0x19d620u: goto label_19d620;
        case 0x19d624u: goto label_19d624;
        case 0x19d628u: goto label_19d628;
        case 0x19d62cu: goto label_19d62c;
        case 0x19d630u: goto label_19d630;
        case 0x19d634u: goto label_19d634;
        case 0x19d638u: goto label_19d638;
        case 0x19d63cu: goto label_19d63c;
        case 0x19d640u: goto label_19d640;
        case 0x19d644u: goto label_19d644;
        case 0x19d648u: goto label_19d648;
        case 0x19d64cu: goto label_19d64c;
        case 0x19d650u: goto label_19d650;
        case 0x19d654u: goto label_19d654;
        case 0x19d658u: goto label_19d658;
        case 0x19d65cu: goto label_19d65c;
        case 0x19d660u: goto label_19d660;
        case 0x19d664u: goto label_19d664;
        case 0x19d668u: goto label_19d668;
        case 0x19d66cu: goto label_19d66c;
        case 0x19d670u: goto label_19d670;
        case 0x19d674u: goto label_19d674;
        case 0x19d678u: goto label_19d678;
        case 0x19d67cu: goto label_19d67c;
        case 0x19d680u: goto label_19d680;
        case 0x19d684u: goto label_19d684;
        case 0x19d688u: goto label_19d688;
        case 0x19d68cu: goto label_19d68c;
        case 0x19d690u: goto label_19d690;
        case 0x19d694u: goto label_19d694;
        case 0x19d698u: goto label_19d698;
        case 0x19d69cu: goto label_19d69c;
        case 0x19d6a0u: goto label_19d6a0;
        case 0x19d6a4u: goto label_19d6a4;
        case 0x19d6a8u: goto label_19d6a8;
        case 0x19d6acu: goto label_19d6ac;
        case 0x19d6b0u: goto label_19d6b0;
        case 0x19d6b4u: goto label_19d6b4;
        case 0x19d6b8u: goto label_19d6b8;
        case 0x19d6bcu: goto label_19d6bc;
        case 0x19d6c0u: goto label_19d6c0;
        case 0x19d6c4u: goto label_19d6c4;
        case 0x19d6c8u: goto label_19d6c8;
        case 0x19d6ccu: goto label_19d6cc;
        case 0x19d6d0u: goto label_19d6d0;
        case 0x19d6d4u: goto label_19d6d4;
        case 0x19d6d8u: goto label_19d6d8;
        case 0x19d6dcu: goto label_19d6dc;
        case 0x19d6e0u: goto label_19d6e0;
        case 0x19d6e4u: goto label_19d6e4;
        case 0x19d6e8u: goto label_19d6e8;
        case 0x19d6ecu: goto label_19d6ec;
        case 0x19d6f0u: goto label_19d6f0;
        case 0x19d6f4u: goto label_19d6f4;
        case 0x19d6f8u: goto label_19d6f8;
        case 0x19d6fcu: goto label_19d6fc;
        case 0x19d700u: goto label_19d700;
        case 0x19d704u: goto label_19d704;
        case 0x19d708u: goto label_19d708;
        case 0x19d70cu: goto label_19d70c;
        case 0x19d710u: goto label_19d710;
        case 0x19d714u: goto label_19d714;
        case 0x19d718u: goto label_19d718;
        case 0x19d71cu: goto label_19d71c;
        case 0x19d720u: goto label_19d720;
        case 0x19d724u: goto label_19d724;
        case 0x19d728u: goto label_19d728;
        case 0x19d72cu: goto label_19d72c;
        case 0x19d730u: goto label_19d730;
        case 0x19d734u: goto label_19d734;
        case 0x19d738u: goto label_19d738;
        case 0x19d73cu: goto label_19d73c;
        case 0x19d740u: goto label_19d740;
        case 0x19d744u: goto label_19d744;
        case 0x19d748u: goto label_19d748;
        case 0x19d74cu: goto label_19d74c;
        case 0x19d750u: goto label_19d750;
        case 0x19d754u: goto label_19d754;
        case 0x19d758u: goto label_19d758;
        case 0x19d75cu: goto label_19d75c;
        case 0x19d760u: goto label_19d760;
        case 0x19d764u: goto label_19d764;
        case 0x19d768u: goto label_19d768;
        case 0x19d76cu: goto label_19d76c;
        case 0x19d770u: goto label_19d770;
        case 0x19d774u: goto label_19d774;
        case 0x19d778u: goto label_19d778;
        case 0x19d77cu: goto label_19d77c;
        case 0x19d780u: goto label_19d780;
        case 0x19d784u: goto label_19d784;
        case 0x19d788u: goto label_19d788;
        case 0x19d78cu: goto label_19d78c;
        case 0x19d790u: goto label_19d790;
        case 0x19d794u: goto label_19d794;
        case 0x19d798u: goto label_19d798;
        default: break;
    }

    ctx->pc = 0x19d0d0u;

label_19d0d0:
    // 0x19d0d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_19d0d4:
    // 0x19d0d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19d0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_19d0d8:
    // 0x19d0d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19d0dc:
    // 0x19d0dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19d0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19d0e0:
    // 0x19d0e0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x19d0e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d0e4:
    // 0x19d0e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19d0e8:
    // 0x19d0e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19d0e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d0ec:
    // 0x19d0ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19d0f0:
    // 0x19d0f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19d0f4:
    // 0x19d0f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19d0f8:
    // 0x19d0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19d0fc:
    // 0x19d0fc: 0xc063dd4  jal         func_18F750
label_19d100:
    if (ctx->pc == 0x19D100u) {
        ctx->pc = 0x19D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0FCu;
        // 0x19d100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D104u;
        goto label_19d104;
    }
    ctx->pc = 0x19D0FCu;
    SET_GPR_U32(ctx, 31, 0x19D104u);
    ctx->pc = 0x19D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0FCu;
    // 0x19d100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19D0FCu, 0x19D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D104u;
label_19d104:
    // 0x19d104: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19d104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19d108:
    // 0x19d108: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19d108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_19d10c:
    // 0x19d10c: 0x10440199  beq         $v0, $a0, . + 4 + (0x199 << 2)
label_19d110:
    if (ctx->pc == 0x19D110u) {
        ctx->pc = 0x19D114u;
        goto label_19d114;
    }
    ctx->pc = 0x19D10Cu;
    {
        const bool branch_taken_0x19d10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19d10c) {
            ctx->pc = 0x19D774u;
            goto label_19d774;
        }
    }
    ctx->pc = 0x19D114u;
label_19d114:
    // 0x19d114: 0x10430197  beq         $v0, $v1, . + 4 + (0x197 << 2)
label_19d118:
    if (ctx->pc == 0x19D118u) {
        ctx->pc = 0x19D11Cu;
        goto label_19d11c;
    }
    ctx->pc = 0x19D114u;
    {
        const bool branch_taken_0x19d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d114) {
            ctx->pc = 0x19D774u;
            goto label_19d774;
        }
    }
    ctx->pc = 0x19D11Cu;
label_19d11c:
    // 0x19d11c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d120:
    // 0x19d120: 0x1043018d  beq         $v0, $v1, . + 4 + (0x18D << 2)
label_19d124:
    if (ctx->pc == 0x19D124u) {
        ctx->pc = 0x19D128u;
        goto label_19d128;
    }
    ctx->pc = 0x19D120u;
    {
        const bool branch_taken_0x19d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d120) {
            ctx->pc = 0x19D758u;
            goto label_19d758;
        }
    }
    ctx->pc = 0x19D128u;
label_19d128:
    // 0x19d128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d12c:
    // 0x19d12c: 0x10430071  beq         $v0, $v1, . + 4 + (0x71 << 2)
label_19d130:
    if (ctx->pc == 0x19D130u) {
        ctx->pc = 0x19D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D12Cu;
        // 0x19d130: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D134u;
        goto label_19d134;
    }
    ctx->pc = 0x19D12Cu;
    {
        const bool branch_taken_0x19d12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D12Cu;
        // 0x19d130: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d12c) {
            ctx->pc = 0x19D2F4u;
            goto label_19d2f4;
        }
    }
    ctx->pc = 0x19D134u;
label_19d134:
    // 0x19d134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19d138:
    if (ctx->pc == 0x19D138u) {
        ctx->pc = 0x19D13Cu;
        goto label_19d13c;
    }
    ctx->pc = 0x19D134u;
    {
        const bool branch_taken_0x19d134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d134) {
            ctx->pc = 0x19D144u;
            goto label_19d144;
        }
    }
    ctx->pc = 0x19D13Cu;
label_19d13c:
    // 0x19d13c: 0x1000018e  b           . + 4 + (0x18E << 2)
label_19d140:
    if (ctx->pc == 0x19D140u) {
        ctx->pc = 0x19D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D13Cu;
        // 0x19d140: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D144u;
        goto label_19d144;
    }
    ctx->pc = 0x19D13Cu;
    {
        const bool branch_taken_0x19d13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D13Cu;
        // 0x19d140: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d13c) {
            ctx->pc = 0x19D778u;
            goto label_19d778;
        }
    }
    ctx->pc = 0x19D144u;
label_19d144:
    // 0x19d144: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19d148:
    // 0x19d148: 0xaea007f4  sw          $zero, 0x7F4($s5)
    ctx->pc = 0x19d148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2036), GPR_U32(ctx, 0));
label_19d14c:
    // 0x19d14c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x19d14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19d150:
    // 0x19d150: 0xaea00670  sw          $zero, 0x670($s5)
    ctx->pc = 0x19d150u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 0));
label_19d154:
    // 0x19d154: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x19d154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_19d158:
    // 0x19d158: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_19d15c:
    // 0x19d15c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_19d160:
    if (ctx->pc == 0x19D160u) {
        ctx->pc = 0x19D164u;
        goto label_19d164;
    }
    ctx->pc = 0x19D15Cu;
    {
        const bool branch_taken_0x19d15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d15c) {
            ctx->pc = 0x19D224u;
            goto label_19d224;
        }
    }
    ctx->pc = 0x19D164u;
label_19d164:
    // 0x19d164: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_19d168:
    // 0x19d168: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19d16c:
    if (ctx->pc == 0x19D16Cu) {
        ctx->pc = 0x19D170u;
        goto label_19d170;
    }
    ctx->pc = 0x19D168u;
    {
        const bool branch_taken_0x19d168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d168) {
            ctx->pc = 0x19D178u;
            goto label_19d178;
        }
    }
    ctx->pc = 0x19D170u;
label_19d170:
    // 0x19d170: 0x10000055  b           . + 4 + (0x55 << 2)
label_19d174:
    if (ctx->pc == 0x19D174u) {
        ctx->pc = 0x19D178u;
        goto label_19d178;
    }
    ctx->pc = 0x19D170u;
    {
        const bool branch_taken_0x19d170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d170) {
            ctx->pc = 0x19D2C8u;
            goto label_19d2c8;
        }
    }
    ctx->pc = 0x19D178u;
label_19d178:
    // 0x19d178: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19d17c:
    // 0x19d17c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d180:
    // 0x19d180: 0xc057040  jal         func_15C100
label_19d184:
    if (ctx->pc == 0x19D184u) {
        ctx->pc = 0x19D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D180u;
        // 0x19d184: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D188u;
        goto label_19d188;
    }
    ctx->pc = 0x19D180u;
    SET_GPR_U32(ctx, 31, 0x19D188u);
    ctx->pc = 0x19D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D180u;
    // 0x19d184: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D180u, 0x19D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D188u;
label_19d188:
    // 0x19d188: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d18c:
    // 0x19d18c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d190:
    // 0x19d190: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d194:
    // 0x19d194: 0xac620774  sw          $v0, 0x774($v1)
    ctx->pc = 0x19d194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 2));
label_19d198:
    // 0x19d198: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d19c:
    // 0x19d19c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d1a0:
    // 0x19d1a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d1a4:
    // 0x19d1a4: 0xac5007b4  sw          $s0, 0x7B4($v0)
    ctx->pc = 0x19d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 16));
label_19d1a8:
    // 0x19d1a8: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d1ac:
    // 0x19d1ac: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19d1b0:
    // 0x19d1b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d1b4:
    // 0x19d1b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d1b8:
    // 0x19d1b8: 0xac400734  sw          $zero, 0x734($v0)
    ctx->pc = 0x19d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1844), GPR_U32(ctx, 0));
label_19d1bc:
    // 0x19d1bc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19d1c0:
    // 0x19d1c0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d1c4:
    // 0x19d1c4: 0xc057040  jal         func_15C100
label_19d1c8:
    if (ctx->pc == 0x19D1C8u) {
        ctx->pc = 0x19D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1C4u;
        // 0x19d1c8: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D1CCu;
        goto label_19d1cc;
    }
    ctx->pc = 0x19D1C4u;
    SET_GPR_U32(ctx, 31, 0x19D1CCu);
    ctx->pc = 0x19D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D1C4u;
    // 0x19d1c8: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D1C4u, 0x19D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D1CCu;
label_19d1cc:
    // 0x19d1cc: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d1d0:
    // 0x19d1d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d1d4:
    // 0x19d1d4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d1d8:
    // 0x19d1d8: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x19d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
label_19d1dc:
    // 0x19d1dc: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d1e0:
    // 0x19d1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d1e4:
    // 0x19d1e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d1e8:
    // 0x19d1e8: 0xac4006b4  sw          $zero, 0x6B4($v0)
    ctx->pc = 0x19d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1716), GPR_U32(ctx, 0));
label_19d1ec:
    // 0x19d1ec: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d1f0:
    // 0x19d1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d1f4:
    // 0x19d1f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d1f8:
    // 0x19d1f8: 0xac5006f4  sw          $s0, 0x6F4($v0)
    ctx->pc = 0x19d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1780), GPR_U32(ctx, 16));
label_19d1fc:
    // 0x19d1fc: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d200:
    // 0x19d200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d204:
    // 0x19d204: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d208:
    // 0x19d208: 0x8c450674  lw          $a1, 0x674($v0)
    ctx->pc = 0x19d208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19d20c:
    // 0x19d20c: 0xc064c0c  jal         func_193030
label_19d210:
    if (ctx->pc == 0x19D210u) {
        ctx->pc = 0x19D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D20Cu;
        // 0x19d210: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D214u;
        goto label_19d214;
    }
    ctx->pc = 0x19D20Cu;
    SET_GPR_U32(ctx, 31, 0x19D214u);
    ctx->pc = 0x19D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D20Cu;
    // 0x19d210: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19D20Cu, 0x19D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D214u;
label_19d214:
    // 0x19d214: 0x8ea20670  lw          $v0, 0x670($s5)
    ctx->pc = 0x19d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d218:
    // 0x19d218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d21c:
    // 0x19d21c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_19d220:
    if (ctx->pc == 0x19D220u) {
        ctx->pc = 0x19D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D21Cu;
        // 0x19d220: 0xaea20670  sw          $v0, 0x670($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D224u;
        goto label_19d224;
    }
    ctx->pc = 0x19D21Cu;
    {
        const bool branch_taken_0x19d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D21Cu;
        // 0x19d220: 0xaea20670  sw          $v0, 0x670($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d21c) {
            ctx->pc = 0x19D2C8u;
            goto label_19d2c8;
        }
    }
    ctx->pc = 0x19D224u;
label_19d224:
    // 0x19d224: 0x0  nop
    ctx->pc = 0x19d224u;
    // NOP
label_19d228:
    // 0x19d228: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19d22c:
    // 0x19d22c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d230:
    // 0x19d230: 0xc057040  jal         func_15C100
label_19d234:
    if (ctx->pc == 0x19D234u) {
        ctx->pc = 0x19D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D230u;
        // 0x19d234: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D238u;
        goto label_19d238;
    }
    ctx->pc = 0x19D230u;
    SET_GPR_U32(ctx, 31, 0x19D238u);
    ctx->pc = 0x19D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D230u;
    // 0x19d234: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D230u, 0x19D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D238u;
label_19d238:
    // 0x19d238: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d23c:
    // 0x19d23c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d240:
    // 0x19d240: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d244:
    // 0x19d244: 0xac620938  sw          $v0, 0x938($v1)
    ctx->pc = 0x19d244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2360), GPR_U32(ctx, 2));
label_19d248:
    // 0x19d248: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d24c:
    // 0x19d24c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d250:
    // 0x19d250: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d254:
    // 0x19d254: 0xac500978  sw          $s0, 0x978($v0)
    ctx->pc = 0x19d254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2424), GPR_U32(ctx, 16));
label_19d258:
    // 0x19d258: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d25c:
    // 0x19d25c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19d260:
    // 0x19d260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d264:
    // 0x19d264: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d268:
    // 0x19d268: 0xac4008f8  sw          $zero, 0x8F8($v0)
    ctx->pc = 0x19d268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2296), GPR_U32(ctx, 0));
label_19d26c:
    // 0x19d26c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_19d270:
    // 0x19d270: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x19d270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19d274:
    // 0x19d274: 0xc057040  jal         func_15C100
label_19d278:
    if (ctx->pc == 0x19D278u) {
        ctx->pc = 0x19D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D274u;
        // 0x19d278: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D27Cu;
        goto label_19d27c;
    }
    ctx->pc = 0x19D274u;
    SET_GPR_U32(ctx, 31, 0x19D27Cu);
    ctx->pc = 0x19D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D274u;
    // 0x19d278: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19D274u, 0x19D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D27Cu;
label_19d27c:
    // 0x19d27c: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d280:
    // 0x19d280: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d284:
    // 0x19d284: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d288:
    // 0x19d288: 0xac6207f8  sw          $v0, 0x7F8($v1)
    ctx->pc = 0x19d288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2040), GPR_U32(ctx, 2));
label_19d28c:
    // 0x19d28c: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d290:
    // 0x19d290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d294:
    // 0x19d294: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d298:
    // 0x19d298: 0xac400838  sw          $zero, 0x838($v0)
    ctx->pc = 0x19d298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2104), GPR_U32(ctx, 0));
label_19d29c:
    // 0x19d29c: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d2a0:
    // 0x19d2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d2a4:
    // 0x19d2a4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d2a8:
    // 0x19d2a8: 0xac400878  sw          $zero, 0x878($v0)
    ctx->pc = 0x19d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2168), GPR_U32(ctx, 0));
label_19d2ac:
    // 0x19d2ac: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d2b0:
    // 0x19d2b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d2b4:
    // 0x19d2b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d2b8:
    // 0x19d2b8: 0xac5008b8  sw          $s0, 0x8B8($v0)
    ctx->pc = 0x19d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2232), GPR_U32(ctx, 16));
label_19d2bc:
    // 0x19d2bc: 0x8ea207f4  lw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d2c0:
    // 0x19d2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d2c4:
    // 0x19d2c4: 0xaea207f4  sw          $v0, 0x7F4($s5)
    ctx->pc = 0x19d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2036), GPR_U32(ctx, 2));
label_19d2c8:
    // 0x19d2c8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19d2cc:
    // 0x19d2cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d2d0:
    // 0x19d2d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19d2d4:
    // 0x19d2d4: 0x1062ff9f  beq         $v1, $v0, . + 4 + (-0x61 << 2)
label_19d2d8:
    if (ctx->pc == 0x19D2D8u) {
        ctx->pc = 0x19D2DCu;
        goto label_19d2dc;
    }
    ctx->pc = 0x19D2D4u;
    {
        const bool branch_taken_0x19d2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19d2d4) {
            ctx->pc = 0x19D154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d154;
        }
    }
    ctx->pc = 0x19D2DCu;
label_19d2dc:
    // 0x19d2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19d2e0:
    // 0x19d2e0: 0xc063e14  jal         func_18F850
label_19d2e4:
    if (ctx->pc == 0x19D2E4u) {
        ctx->pc = 0x19D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2E0u;
        // 0x19d2e4: 0xaea00324  sw          $zero, 0x324($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D2E8u;
        goto label_19d2e8;
    }
    ctx->pc = 0x19D2E0u;
    SET_GPR_U32(ctx, 31, 0x19D2E8u);
    ctx->pc = 0x19D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D2E0u;
    // 0x19d2e4: 0xaea00324  sw          $zero, 0x324($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19D2E0u, 0x19D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D2E8u;
label_19d2e8:
    // 0x19d2e8: 0x10000122  b           . + 4 + (0x122 << 2)
label_19d2ec:
    if (ctx->pc == 0x19D2ECu) {
        ctx->pc = 0x19D2F0u;
        goto label_19d2f0;
    }
    ctx->pc = 0x19D2E8u;
    {
        const bool branch_taken_0x19d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d2e8) {
            ctx->pc = 0x19D774u;
            goto label_19d774;
        }
    }
    ctx->pc = 0x19D2F0u;
label_19d2f0:
    // 0x19d2f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d2f4:
    // 0x19d2f4: 0x10000026  b           . + 4 + (0x26 << 2)
label_19d2f8:
    if (ctx->pc == 0x19D2F8u) {
        ctx->pc = 0x19D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2F4u;
        // 0x19d2f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D2FCu;
        goto label_19d2fc;
    }
    ctx->pc = 0x19D2F4u;
    {
        const bool branch_taken_0x19d2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2F4u;
        // 0x19d2f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d2f4) {
            ctx->pc = 0x19D390u;
            goto label_19d390;
        }
    }
    ctx->pc = 0x19D2FCu;
label_19d2fc:
    // 0x19d2fc: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19d300:
    // 0x19d300: 0x8ca306b4  lw          $v1, 0x6B4($a1)
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
label_19d304:
    // 0x19d304: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_19d308:
    if (ctx->pc == 0x19D308u) {
        ctx->pc = 0x19D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D304u;
        // 0x19d308: 0x24a606b4  addiu       $a2, $a1, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1716));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D30Cu;
        goto label_19d30c;
    }
    ctx->pc = 0x19D304u;
    {
        const bool branch_taken_0x19d304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D304u;
        // 0x19d308: 0x24a606b4  addiu       $a2, $a1, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d304) {
            ctx->pc = 0x19D388u;
            goto label_19d388;
        }
    }
    ctx->pc = 0x19D30Cu;
label_19d30c:
    // 0x19d30c: 0x8ca40774  lw          $a0, 0x774($a1)
    ctx->pc = 0x19d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1908)));
label_19d310:
    // 0x19d310: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19d314:
    // 0x19d314: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19d318:
    // 0x19d318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d31c:
    // 0x19d31c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19d320:
    // 0x19d320: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19d324:
    // 0x19d324: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_19d328:
    if (ctx->pc == 0x19D328u) {
        ctx->pc = 0x19D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D324u;
        // 0x19d328: 0x24a80774  addiu       $t0, $a1, 0x774 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1908));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D32Cu;
        goto label_19d32c;
    }
    ctx->pc = 0x19D324u;
    {
        const bool branch_taken_0x19d324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D324u;
        // 0x19d328: 0x24a80774  addiu       $t0, $a1, 0x774 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d324) {
            ctx->pc = 0x19D388u;
            goto label_19d388;
        }
    }
    ctx->pc = 0x19D32Cu;
label_19d32c:
    // 0x19d32c: 0x8ca30734  lw          $v1, 0x734($a1)
    ctx->pc = 0x19d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1844)));
label_19d330:
    // 0x19d330: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d334:
    // 0x19d334: 0xaca30734  sw          $v1, 0x734($a1)
    ctx->pc = 0x19d334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1844), GPR_U32(ctx, 3));
label_19d338:
    // 0x19d338: 0x8ca40734  lw          $a0, 0x734($a1)
    ctx->pc = 0x19d338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1844)));
label_19d33c:
    // 0x19d33c: 0x8ca707b4  lw          $a3, 0x7B4($a1)
    ctx->pc = 0x19d33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1972)));
label_19d340:
    // 0x19d340: 0x8ce5002c  lw          $a1, 0x2C($a3)
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_19d344:
    // 0x19d344: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x19d344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_19d348:
    // 0x19d348: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19d34c:
    if (ctx->pc == 0x19D34Cu) {
        ctx->pc = 0x19D350u;
        goto label_19d350;
    }
    ctx->pc = 0x19D348u;
    {
        const bool branch_taken_0x19d348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d348) {
            ctx->pc = 0x19D35Cu;
            goto label_19d35c;
        }
    }
    ctx->pc = 0x19D350u;
label_19d350:
    // 0x19d350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d354:
    // 0x19d354: 0x1000000c  b           . + 4 + (0xC << 2)
label_19d358:
    if (ctx->pc == 0x19D358u) {
        ctx->pc = 0x19D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D354u;
        // 0x19d358: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D35Cu;
        goto label_19d35c;
    }
    ctx->pc = 0x19D354u;
    {
        const bool branch_taken_0x19d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D354u;
        // 0x19d358: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d354) {
            ctx->pc = 0x19D388u;
            goto label_19d388;
        }
    }
    ctx->pc = 0x19D35Cu;
label_19d35c:
    // 0x19d35c: 0x0  nop
    ctx->pc = 0x19d35cu;
    // NOP
label_19d360:
    // 0x19d360: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x19d360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19d364:
    // 0x19d364: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x19d364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_19d368:
    // 0x19d368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d36c:
    // 0x19d36c: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x19d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_19d370:
    // 0x19d370: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d374:
    // 0x19d374: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x19d374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_19d378:
    // 0x19d378: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19d378u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d37c:
    // 0x19d37c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19d37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d380:
    // 0x19d380: 0xc064cb4  jal         func_1932D0
label_19d384:
    if (ctx->pc == 0x19D384u) {
        ctx->pc = 0x19D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D380u;
        // 0x19d384: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D388u;
        goto label_19d388;
    }
    ctx->pc = 0x19D380u;
    SET_GPR_U32(ctx, 31, 0x19D388u);
    ctx->pc = 0x19D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D380u;
    // 0x19d384: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932D0u, 0x19D380u, 0x19D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D388u;
label_19d388:
    // 0x19d388: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19d38c:
    // 0x19d38c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19d390:
    // 0x19d390: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d394:
    // 0x19d394: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x19d394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19d398:
    // 0x19d398: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_19d39c:
    if (ctx->pc == 0x19D39Cu) {
        ctx->pc = 0x19D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D398u;
        // 0x19d39c: 0x2b12821  addu        $a1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3A0u;
        goto label_19d3a0;
    }
    ctx->pc = 0x19D398u;
    {
        const bool branch_taken_0x19d398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D398u;
        // 0x19d39c: 0x2b12821  addu        $a1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d398) {
            ctx->pc = 0x19D300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d300;
        }
    }
    ctx->pc = 0x19D3A0u;
label_19d3a0:
    // 0x19d3a0: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x19d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_19d3a4:
    // 0x19d3a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_19d3a8:
    if (ctx->pc == 0x19D3A8u) {
        ctx->pc = 0x19D3ACu;
        goto label_19d3ac;
    }
    ctx->pc = 0x19D3A4u;
    {
        const bool branch_taken_0x19d3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d3a4) {
            ctx->pc = 0x19D418u;
            goto label_19d418;
        }
    }
    ctx->pc = 0x19D3ACu;
label_19d3ac:
    // 0x19d3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d3b0:
    // 0x19d3b0: 0x10000013  b           . + 4 + (0x13 << 2)
label_19d3b4:
    if (ctx->pc == 0x19D3B4u) {
        ctx->pc = 0x19D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3B0u;
        // 0x19d3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3B8u;
        goto label_19d3b8;
    }
    ctx->pc = 0x19D3B0u;
    {
        const bool branch_taken_0x19d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3B0u;
        // 0x19d3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3b0) {
            ctx->pc = 0x19D400u;
            goto label_19d400;
        }
    }
    ctx->pc = 0x19D3B8u;
label_19d3b8:
    // 0x19d3b8: 0x2a53021  addu        $a2, $s5, $a1
    ctx->pc = 0x19d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_19d3bc:
    // 0x19d3bc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19d3c0:
    // 0x19d3c0: 0x8cc40938  lw          $a0, 0x938($a2)
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2360)));
label_19d3c4:
    // 0x19d3c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19d3c8:
    // 0x19d3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d3cc:
    // 0x19d3cc: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19d3d0:
    // 0x19d3d0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x19d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_19d3d4:
    // 0x19d3d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_19d3d8:
    if (ctx->pc == 0x19D3D8u) {
        ctx->pc = 0x19D3DCu;
        goto label_19d3dc;
    }
    ctx->pc = 0x19D3D4u;
    {
        const bool branch_taken_0x19d3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d3d4) {
            ctx->pc = 0x19D3F4u;
            goto label_19d3f4;
        }
    }
    ctx->pc = 0x19D3DCu;
label_19d3dc:
    // 0x19d3dc: 0x8cc308f8  lw          $v1, 0x8F8($a2)
    ctx->pc = 0x19d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2296)));
label_19d3e0:
    // 0x19d3e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d3e4:
    // 0x19d3e4: 0xacc308f8  sw          $v1, 0x8F8($a2)
    ctx->pc = 0x19d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2296), GPR_U32(ctx, 3));
label_19d3e8:
    // 0x19d3e8: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x19d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_19d3ec:
    // 0x19d3ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x19d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_19d3f0:
    // 0x19d3f0: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x19d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
label_19d3f4:
    // 0x19d3f4: 0x0  nop
    ctx->pc = 0x19d3f4u;
    // NOP
label_19d3f8:
    // 0x19d3f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_19d3fc:
    // 0x19d3fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19d3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19d400:
    // 0x19d400: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d404:
    // 0x19d404: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x19d404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19d408:
    // 0x19d408: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_19d40c:
    if (ctx->pc == 0x19D40Cu) {
        ctx->pc = 0x19D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D408u;
        // 0x19d40c: 0x2a53021  addu        $a2, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D410u;
        goto label_19d410;
    }
    ctx->pc = 0x19D408u;
    {
        const bool branch_taken_0x19d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D408u;
        // 0x19d40c: 0x2a53021  addu        $a2, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d408) {
            ctx->pc = 0x19D3BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d3bc;
        }
    }
    ctx->pc = 0x19D410u;
label_19d410:
    // 0x19d410: 0x10000004  b           . + 4 + (0x4 << 2)
label_19d414:
    if (ctx->pc == 0x19D414u) {
        ctx->pc = 0x19D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D410u;
        // 0x19d414: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D418u;
        goto label_19d418;
    }
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D410u;
        // 0x19d414: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D424u;
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D418u;
label_19d418:
    // 0x19d418: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19d41c:
    // 0x19d41c: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x19d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
label_19d420:
    // 0x19d420: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19d420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d424:
    // 0x19d424: 0x1000003c  b           . + 4 + (0x3C << 2)
label_19d428:
    if (ctx->pc == 0x19D428u) {
        ctx->pc = 0x19D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D424u;
        // 0x19d428: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D42Cu;
        goto label_19d42c;
    }
    ctx->pc = 0x19D424u;
    {
        const bool branch_taken_0x19d424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D424u;
        // 0x19d428: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d424) {
            ctx->pc = 0x19D518u;
            goto label_19d518;
        }
    }
    ctx->pc = 0x19D42Cu;
label_19d42c:
    // 0x19d42c: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x19d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_19d430:
    // 0x19d430: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x19d430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19d434:
    // 0x19d434: 0x8c650674  lw          $a1, 0x674($v1)
    ctx->pc = 0x19d434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_19d438:
    // 0x19d438: 0x24720674  addiu       $s2, $v1, 0x674
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1652));
label_19d43c:
    // 0x19d43c: 0x8c6406b4  lw          $a0, 0x6B4($v1)
    ctx->pc = 0x19d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
label_19d440:
    // 0x19d440: 0x247306b4  addiu       $s3, $v1, 0x6B4
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1716));
label_19d444:
    // 0x19d444: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19d448:
    // 0x19d448: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_19d44c:
    // 0x19d44c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19d450:
    // 0x19d450: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x19d450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_19d454:
    // 0x19d454: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
label_19d458:
    if (ctx->pc == 0x19D458u) {
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D45Cu;
        goto label_19d45c;
    }
    ctx->pc = 0x19D454u;
    {
        const bool branch_taken_0x19d454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D454u;
        // 0x19d458: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d454) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D45Cu;
label_19d45c:
    // 0x19d45c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d460:
    // 0x19d460: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_19d464:
    if (ctx->pc == 0x19D464u) {
        ctx->pc = 0x19D468u;
        goto label_19d468;
    }
    ctx->pc = 0x19D460u;
    {
        const bool branch_taken_0x19d460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d460) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D468u;
label_19d468:
    // 0x19d468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d46c:
    // 0x19d46c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_19d470:
    if (ctx->pc == 0x19D470u) {
        ctx->pc = 0x19D474u;
        goto label_19d474;
    }
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D4CCu;
            goto label_19d4cc;
        }
    }
    ctx->pc = 0x19D474u;
label_19d474:
    // 0x19d474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d478:
    // 0x19d478: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_19d47c:
    if (ctx->pc == 0x19D47Cu) {
        ctx->pc = 0x19D480u;
        goto label_19d480;
    }
    ctx->pc = 0x19D478u;
    {
        const bool branch_taken_0x19d478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d478) {
            ctx->pc = 0x19D490u;
            goto label_19d490;
        }
    }
    ctx->pc = 0x19D480u;
label_19d480:
    // 0x19d480: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_19d484:
    if (ctx->pc == 0x19D484u) {
        ctx->pc = 0x19D488u;
        goto label_19d488;
    }
    ctx->pc = 0x19D480u;
    {
        const bool branch_taken_0x19d480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d480) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D488u;
label_19d488:
    // 0x19d488: 0x10000021  b           . + 4 + (0x21 << 2)
label_19d48c:
    if (ctx->pc == 0x19D48Cu) {
        ctx->pc = 0x19D490u;
        goto label_19d490;
    }
    ctx->pc = 0x19D488u;
    {
        const bool branch_taken_0x19d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d488) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D490u;
label_19d490:
    // 0x19d490: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d494:
    // 0x19d494: 0xc064c20  jal         func_193080
label_19d498:
    if (ctx->pc == 0x19D498u) {
        ctx->pc = 0x19D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D494u;
        // 0x19d498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D49Cu;
        goto label_19d49c;
    }
    ctx->pc = 0x19D494u;
    SET_GPR_U32(ctx, 31, 0x19D49Cu);
    ctx->pc = 0x19D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D494u;
    // 0x19d498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19D494u, 0x19D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D49Cu;
label_19d49c:
    // 0x19d49c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d4a0:
    // 0x19d4a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d4a4:
    // 0x19d4a4: 0xc064c4c  jal         func_193130
label_19d4a8:
    if (ctx->pc == 0x19D4A8u) {
        ctx->pc = 0x19D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4A4u;
        // 0x19d4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4ACu;
        goto label_19d4ac;
    }
    ctx->pc = 0x19D4A4u;
    SET_GPR_U32(ctx, 31, 0x19D4ACu);
    ctx->pc = 0x19D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4A4u;
    // 0x19d4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19D4A4u, 0x19D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4ACu;
label_19d4ac:
    // 0x19d4ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19d4acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d4b0:
    // 0x19d4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d4b4:
    // 0x19d4b4: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19d4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19d4b8:
    // 0x19d4b8: 0x320f809  jalr        $t9
label_19d4bc:
    if (ctx->pc == 0x19D4BCu) {
        ctx->pc = 0x19D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4B8u;
        // 0x19d4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4C0u;
        goto label_19d4c0;
    }
    ctx->pc = 0x19D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D4C0u);
        ctx->pc = 0x19D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4B8u;
        // 0x19d4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4B8u, 0x19D4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D4C0u;
label_19d4c0:
    // 0x19d4c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d4c4:
    // 0x19d4c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_19d4c8:
    if (ctx->pc == 0x19D4C8u) {
        ctx->pc = 0x19D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4C4u;
        // 0x19d4c8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4CCu;
        goto label_19d4cc;
    }
    ctx->pc = 0x19D4C4u;
    {
        const bool branch_taken_0x19d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4C4u;
        // 0x19d4c8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4c4) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D4CCu;
label_19d4cc:
    // 0x19d4cc: 0x0  nop
    ctx->pc = 0x19d4ccu;
    // NOP
label_19d4d0:
    // 0x19d4d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19d4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d4d4:
    // 0x19d4d4: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19d4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19d4d8:
    // 0x19d4d8: 0x320f809  jalr        $t9
label_19d4dc:
    if (ctx->pc == 0x19D4DCu) {
        ctx->pc = 0x19D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D8u;
        // 0x19d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4E0u;
        goto label_19d4e0;
    }
    ctx->pc = 0x19D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D4E0u);
        ctx->pc = 0x19D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D8u;
        // 0x19d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D4D8u, 0x19D4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D4E0u;
label_19d4e0:
    // 0x19d4e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19d4e4:
    if (ctx->pc == 0x19D4E4u) {
        ctx->pc = 0x19D4E8u;
        goto label_19d4e8;
    }
    ctx->pc = 0x19D4E0u;
    {
        const bool branch_taken_0x19d4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d4e0) {
            ctx->pc = 0x19D510u;
            goto label_19d510;
        }
    }
    ctx->pc = 0x19D4E8u;
label_19d4e8:
    // 0x19d4e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19d4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d4ec:
    // 0x19d4ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d4f0:
    // 0x19d4f0: 0xc064c20  jal         func_193080
label_19d4f4:
    if (ctx->pc == 0x19D4F4u) {
        ctx->pc = 0x19D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4F0u;
        // 0x19d4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4F8u;
        goto label_19d4f8;
    }
    ctx->pc = 0x19D4F0u;
    SET_GPR_U32(ctx, 31, 0x19D4F8u);
    ctx->pc = 0x19D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D4F0u;
    // 0x19d4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19D4F0u, 0x19D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D4F8u;
label_19d4f8:
    // 0x19d4f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d4fc:
    // 0x19d4fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d500:
    // 0x19d500: 0xc064c4c  jal         func_193130
label_19d504:
    if (ctx->pc == 0x19D504u) {
        ctx->pc = 0x19D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D500u;
        // 0x19d504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D508u;
        goto label_19d508;
    }
    ctx->pc = 0x19D500u;
    SET_GPR_U32(ctx, 31, 0x19D508u);
    ctx->pc = 0x19D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D500u;
    // 0x19d504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19D500u, 0x19D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D508u;
label_19d508:
    // 0x19d508: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d50c:
    // 0x19d50c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x19d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_19d510:
    // 0x19d510: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x19d510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_19d514:
    // 0x19d514: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19d514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19d518:
    // 0x19d518: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d51c:
    // 0x19d51c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19d51cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19d520:
    // 0x19d520: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_19d524:
    if (ctx->pc == 0x19D524u) {
        ctx->pc = 0x19D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D520u;
        // 0x19d524: 0x2b11821  addu        $v1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D528u;
        goto label_19d528;
    }
    ctx->pc = 0x19D520u;
    {
        const bool branch_taken_0x19d520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D520u;
        // 0x19d524: 0x2b11821  addu        $v1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d520) {
            ctx->pc = 0x19D430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d430;
        }
    }
    ctx->pc = 0x19D528u;
label_19d528:
    // 0x19d528: 0x10000084  b           . + 4 + (0x84 << 2)
label_19d52c:
    if (ctx->pc == 0x19D52Cu) {
        ctx->pc = 0x19D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D528u;
        // 0x19d52c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D530u;
        goto label_19d530;
    }
    ctx->pc = 0x19D528u;
    {
        const bool branch_taken_0x19d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D528u;
        // 0x19d52c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d528) {
            ctx->pc = 0x19D73Cu;
            goto label_19d73c;
        }
    }
    ctx->pc = 0x19D530u;
label_19d530:
    // 0x19d530: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19d530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19d534:
    // 0x19d534: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19d538:
    // 0x19d538: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d53c:
    // 0x19d53c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d540:
    // 0x19d540: 0x8e2707f8  lw          $a3, 0x7F8($s1)
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2040)));
label_19d544:
    // 0x19d544: 0x262307f8  addiu       $v1, $s1, 0x7F8
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2040));
label_19d548:
    // 0x19d548: 0x8e260838  lw          $a2, 0x838($s1)
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
label_19d54c:
    // 0x19d54c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x19d54cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_19d550:
    // 0x19d550: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x19d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_19d554:
    // 0x19d554: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_19d558:
    // 0x19d558: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d55c:
    // 0x19d55c: 0x10c50046  beq         $a2, $a1, . + 4 + (0x46 << 2)
label_19d560:
    if (ctx->pc == 0x19D560u) {
        ctx->pc = 0x19D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D55Cu;
        // 0x19d560: 0x26320838  addiu       $s2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D564u;
        goto label_19d564;
    }
    ctx->pc = 0x19D55Cu;
    {
        const bool branch_taken_0x19d55c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x19D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D55Cu;
        // 0x19d560: 0x26320838  addiu       $s2, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d55c) {
            ctx->pc = 0x19D678u;
            goto label_19d678;
        }
    }
    ctx->pc = 0x19D564u;
label_19d564:
    // 0x19d564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19d564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d568:
    // 0x19d568: 0x10c5002f  beq         $a2, $a1, . + 4 + (0x2F << 2)
label_19d56c:
    if (ctx->pc == 0x19D56Cu) {
        ctx->pc = 0x19D570u;
        goto label_19d570;
    }
    ctx->pc = 0x19D568u;
    {
        const bool branch_taken_0x19d568 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x19d568) {
            ctx->pc = 0x19D628u;
            goto label_19d628;
        }
    }
    ctx->pc = 0x19D570u;
label_19d570:
    // 0x19d570: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_19d574:
    if (ctx->pc == 0x19D574u) {
        ctx->pc = 0x19D578u;
        goto label_19d578;
    }
    ctx->pc = 0x19D570u;
    {
        const bool branch_taken_0x19d570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d570) {
            ctx->pc = 0x19D580u;
            goto label_19d580;
        }
    }
    ctx->pc = 0x19D578u;
label_19d578:
    // 0x19d578: 0x1000004f  b           . + 4 + (0x4F << 2)
label_19d57c:
    if (ctx->pc == 0x19D57Cu) {
        ctx->pc = 0x19D580u;
        goto label_19d580;
    }
    ctx->pc = 0x19D578u;
    {
        const bool branch_taken_0x19d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d578) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D580u;
label_19d580:
    // 0x19d580: 0x8e2408f8  lw          $a0, 0x8F8($s1)
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2296)));
label_19d584:
    // 0x19d584: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
label_19d588:
    if (ctx->pc == 0x19D588u) {
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D584u;
        // 0x19d588: 0x263308f8  addiu       $s3, $s1, 0x8F8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D58Cu;
        goto label_19d58c;
    }
    ctx->pc = 0x19D584u;
    {
        const bool branch_taken_0x19d584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D584u;
        // 0x19d588: 0x263308f8  addiu       $s3, $s1, 0x8F8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d584) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D58Cu;
label_19d58c:
    // 0x19d58c: 0x8ea50670  lw          $a1, 0x670($s5)
    ctx->pc = 0x19d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d590:
    // 0x19d590: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d594:
    // 0x19d594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d598:
    // 0x19d598: 0x10000019  b           . + 4 + (0x19 << 2)
label_19d59c:
    if (ctx->pc == 0x19D59Cu) {
        ctx->pc = 0x19D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D598u;
        // 0x19d59c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5A0u;
        goto label_19d5a0;
    }
    ctx->pc = 0x19D598u;
    {
        const bool branch_taken_0x19d598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D598u;
        // 0x19d59c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d598) {
            ctx->pc = 0x19D600u;
            goto label_19d600;
        }
    }
    ctx->pc = 0x19D5A0u;
label_19d5a0:
    // 0x19d5a0: 0x2a72021  addu        $a0, $s5, $a3
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_19d5a4:
    // 0x19d5a4: 0x8c8406b4  lw          $a0, 0x6B4($a0)
    ctx->pc = 0x19d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
label_19d5a8:
    // 0x19d5a8: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
label_19d5ac:
    if (ctx->pc == 0x19D5ACu) {
        ctx->pc = 0x19D5B0u;
        goto label_19d5b0;
    }
    ctx->pc = 0x19D5A8u;
    {
        const bool branch_taken_0x19d5a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x19d5a8) {
            ctx->pc = 0x19D5F4u;
            goto label_19d5f4;
        }
    }
    ctx->pc = 0x19D5B0u;
label_19d5b0:
    // 0x19d5b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19d5b4:
    // 0x19d5b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19d5b8:
    // 0x19d5b8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x19d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d5bc:
    // 0x19d5bc: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x19d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
label_19d5c0:
    // 0x19d5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d5c4:
    // 0x19d5c4: 0xae300878  sw          $s0, 0x878($s1)
    ctx->pc = 0x19d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2168), GPR_U32(ctx, 16));
label_19d5c8:
    // 0x19d5c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d5cc:
    // 0x19d5cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_19d5d0:
    // 0x19d5d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_19d5d4:
    // 0x19d5d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19d5d8:
    // 0x19d5d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x19d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_19d5dc:
    // 0x19d5dc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x19d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d5e0:
    // 0x19d5e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d5e4:
    // 0x19d5e4: 0xc064c20  jal         func_193080
label_19d5e8:
    if (ctx->pc == 0x19D5E8u) {
        ctx->pc = 0x19D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5E4u;
        // 0x19d5e8: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5ECu;
        goto label_19d5ec;
    }
    ctx->pc = 0x19D5E4u;
    SET_GPR_U32(ctx, 31, 0x19D5ECu);
    ctx->pc = 0x19D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5E4u;
    // 0x19d5e8: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19D5E4u, 0x19D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5ECu;
label_19d5ec:
    // 0x19d5ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d5f0:
    if (ctx->pc == 0x19D5F0u) {
        ctx->pc = 0x19D5F4u;
        goto label_19d5f4;
    }
    ctx->pc = 0x19D5ECu;
    {
        const bool branch_taken_0x19d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d5ec) {
            ctx->pc = 0x19D60Cu;
            goto label_19d60c;
        }
    }
    ctx->pc = 0x19D5F4u;
label_19d5f4:
    // 0x19d5f4: 0x0  nop
    ctx->pc = 0x19d5f4u;
    // NOP
label_19d5f8:
    // 0x19d5f8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x19d5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_19d5fc:
    // 0x19d5fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19d600:
    // 0x19d600: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x19d600u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_19d604:
    // 0x19d604: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
label_19d608:
    if (ctx->pc == 0x19D608u) {
        ctx->pc = 0x19D60Cu;
        goto label_19d60c;
    }
    ctx->pc = 0x19D604u;
    {
        const bool branch_taken_0x19d604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d604) {
            ctx->pc = 0x19D5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d5a0;
        }
    }
    ctx->pc = 0x19D60Cu;
label_19d60c:
    // 0x19d60c: 0x0  nop
    ctx->pc = 0x19d60cu;
    // NOP
label_19d610:
    // 0x19d610: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d614:
    // 0x19d614: 0x16030028  bne         $s0, $v1, . + 4 + (0x28 << 2)
label_19d618:
    if (ctx->pc == 0x19D618u) {
        ctx->pc = 0x19D61Cu;
        goto label_19d61c;
    }
    ctx->pc = 0x19D614u;
    {
        const bool branch_taken_0x19d614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d614) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D61Cu;
label_19d61c:
    // 0x19d61c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x19d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_19d620:
    // 0x19d620: 0x10000025  b           . + 4 + (0x25 << 2)
label_19d624:
    if (ctx->pc == 0x19D624u) {
        ctx->pc = 0x19D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D620u;
        // 0x19d624: 0xaea00324  sw          $zero, 0x324($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D628u;
        goto label_19d628;
    }
    ctx->pc = 0x19D620u;
    {
        const bool branch_taken_0x19d620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D620u;
        // 0x19d624: 0xaea00324  sw          $zero, 0x324($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d620) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D628u;
label_19d628:
    // 0x19d628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19d628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d62c:
    // 0x19d62c: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x19d62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_19d630:
    // 0x19d630: 0x320f809  jalr        $t9
label_19d634:
    if (ctx->pc == 0x19D634u) {
        ctx->pc = 0x19D638u;
        goto label_19d638;
    }
    ctx->pc = 0x19D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D630u, 0x19D638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D638u;
label_19d638:
    // 0x19d638: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x19d638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_19d63c:
    // 0x19d63c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19d63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d640:
    // 0x19d640: 0x0  nop
    ctx->pc = 0x19d640u;
    // NOP
label_19d644:
    // 0x19d644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19d644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d648:
    // 0x19d648: 0x0  nop
    ctx->pc = 0x19d648u;
    // NOP
label_19d64c:
    // 0x19d64c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_19d650:
    if (ctx->pc == 0x19D650u) {
        ctx->pc = 0x19D654u;
        goto label_19d654;
    }
    ctx->pc = 0x19D64Cu;
    {
        const bool branch_taken_0x19d64c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d64c) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D654u;
label_19d654:
    // 0x19d654: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x19d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d658:
    // 0x19d658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d65c:
    // 0x19d65c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_19d660:
    // 0x19d660: 0x8c450674  lw          $a1, 0x674($v0)
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
label_19d664:
    // 0x19d664: 0xc064c0c  jal         func_193030
label_19d668:
    if (ctx->pc == 0x19D668u) {
        ctx->pc = 0x19D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D664u;
        // 0x19d668: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D66Cu;
        goto label_19d66c;
    }
    ctx->pc = 0x19D664u;
    SET_GPR_U32(ctx, 31, 0x19D66Cu);
    ctx->pc = 0x19D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D664u;
    // 0x19d668: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19D664u, 0x19D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D66Cu;
label_19d66c:
    // 0x19d66c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d670:
    // 0x19d670: 0x10000011  b           . + 4 + (0x11 << 2)
label_19d674:
    if (ctx->pc == 0x19D674u) {
        ctx->pc = 0x19D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D670u;
        // 0x19d674: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D678u;
        goto label_19d678;
    }
    ctx->pc = 0x19D670u;
    {
        const bool branch_taken_0x19d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D670u;
        // 0x19d674: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d670) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D678u;
label_19d678:
    // 0x19d678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d67c:
    // 0x19d67c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19d67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19d680:
    // 0x19d680: 0x320f809  jalr        $t9
label_19d684:
    if (ctx->pc == 0x19D684u) {
        ctx->pc = 0x19D688u;
        goto label_19d688;
    }
    ctx->pc = 0x19D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D688u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D680u, 0x19D688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D688u;
label_19d688:
    // 0x19d688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d68c:
    // 0x19d68c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_19d690:
    if (ctx->pc == 0x19D690u) {
        ctx->pc = 0x19D694u;
        goto label_19d694;
    }
    ctx->pc = 0x19D68Cu;
    {
        const bool branch_taken_0x19d68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d68c) {
            ctx->pc = 0x19D6B8u;
            goto label_19d6b8;
        }
    }
    ctx->pc = 0x19D694u;
label_19d694:
    // 0x19d694: 0x8e230878  lw          $v1, 0x878($s1)
    ctx->pc = 0x19d694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d698:
    // 0x19d698: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d69c:
    // 0x19d69c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d6a0:
    // 0x19d6a0: 0xac600734  sw          $zero, 0x734($v1)
    ctx->pc = 0x19d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1844), GPR_U32(ctx, 0));
label_19d6a4:
    // 0x19d6a4: 0x8e230878  lw          $v1, 0x878($s1)
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d6a8:
    // 0x19d6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d6ac:
    // 0x19d6ac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d6b0:
    // 0x19d6b0: 0xac6006b4  sw          $zero, 0x6B4($v1)
    ctx->pc = 0x19d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1716), GPR_U32(ctx, 0));
label_19d6b4:
    // 0x19d6b4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_19d6b8:
    // 0x19d6b8: 0x8ea40670  lw          $a0, 0x670($s5)
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
label_19d6bc:
    // 0x19d6bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d6c0:
    // 0x19d6c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d6c4:
    // 0x19d6c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d6c8:
    // 0x19d6c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_19d6cc:
    if (ctx->pc == 0x19D6CCu) {
        ctx->pc = 0x19D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6C8u;
        // 0x19d6cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6D0u;
        goto label_19d6d0;
    }
    ctx->pc = 0x19D6C8u;
    {
        const bool branch_taken_0x19d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6C8u;
        // 0x19d6cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6c8) {
            ctx->pc = 0x19D6F0u;
            goto label_19d6f0;
        }
    }
    ctx->pc = 0x19D6D0u;
label_19d6d0:
    // 0x19d6d0: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x19d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_19d6d4:
    // 0x19d6d4: 0x8c6306b4  lw          $v1, 0x6B4($v1)
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1716)));
label_19d6d8:
    // 0x19d6d8: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
label_19d6dc:
    if (ctx->pc == 0x19D6DCu) {
        ctx->pc = 0x19D6E0u;
        goto label_19d6e0;
    }
    ctx->pc = 0x19D6D8u;
    {
        const bool branch_taken_0x19d6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19d6d8) {
            ctx->pc = 0x19D6E4u;
            goto label_19d6e4;
        }
    }
    ctx->pc = 0x19D6E0u;
label_19d6e0:
    // 0x19d6e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d6e4:
    // 0x19d6e4: 0x0  nop
    ctx->pc = 0x19d6e4u;
    // NOP
label_19d6e8:
    // 0x19d6e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x19d6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_19d6ec:
    // 0x19d6ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19d6f0:
    // 0x19d6f0: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x19d6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_19d6f4:
    // 0x19d6f4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_19d6f8:
    if (ctx->pc == 0x19D6F8u) {
        ctx->pc = 0x19D6FCu;
        goto label_19d6fc;
    }
    ctx->pc = 0x19D6F4u;
    {
        const bool branch_taken_0x19d6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d6f4) {
            ctx->pc = 0x19D6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d6d0;
        }
    }
    ctx->pc = 0x19D6FCu;
label_19d6fc:
    // 0x19d6fc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_19d700:
    if (ctx->pc == 0x19D700u) {
        ctx->pc = 0x19D704u;
        goto label_19d704;
    }
    ctx->pc = 0x19D6FCu;
    {
        const bool branch_taken_0x19d6fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6fc) {
            ctx->pc = 0x19D738u;
            goto label_19d738;
        }
    }
    ctx->pc = 0x19D704u;
label_19d704:
    // 0x19d704: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d708:
    // 0x19d708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19d70c:
    // 0x19d70c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d710:
    // 0x19d710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19d714:
    // 0x19d714: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19d718:
    // 0x19d718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19d71c:
    // 0x19d71c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19d71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19d720:
    // 0x19d720: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19d720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_19d724:
    // 0x19d724: 0xc063de0  jal         func_18F780
label_19d728:
    if (ctx->pc == 0x19D728u) {
        ctx->pc = 0x19D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D724u;
        // 0x19d728: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D72Cu;
        goto label_19d72c;
    }
    ctx->pc = 0x19D724u;
    SET_GPR_U32(ctx, 31, 0x19D72Cu);
    ctx->pc = 0x19D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D724u;
    // 0x19d728: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19D724u, 0x19D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D72Cu;
label_19d72c:
    // 0x19d72c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19d730:
    // 0x19d730: 0xc063e08  jal         func_18F820
label_19d734:
    if (ctx->pc == 0x19D734u) {
        ctx->pc = 0x19D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D730u;
        // 0x19d734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D738u;
        goto label_19d738;
    }
    ctx->pc = 0x19D730u;
    SET_GPR_U32(ctx, 31, 0x19D738u);
    ctx->pc = 0x19D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D730u;
    // 0x19d734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19D730u, 0x19D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D738u;
label_19d738:
    // 0x19d738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19d73c:
    // 0x19d73c: 0x0  nop
    ctx->pc = 0x19d73cu;
    // NOP
label_19d740:
    // 0x19d740: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
label_19d744:
    // 0x19d744: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x19d744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19d748:
    // 0x19d748: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
label_19d74c:
    if (ctx->pc == 0x19D74Cu) {
        ctx->pc = 0x19D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D748u;
        // 0x19d74c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D750u;
        goto label_19d750;
    }
    ctx->pc = 0x19D748u;
    {
        const bool branch_taken_0x19d748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D748u;
        // 0x19d74c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d748) {
            ctx->pc = 0x19D534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d534;
        }
    }
    ctx->pc = 0x19D750u;
label_19d750:
    // 0x19d750: 0x10000008  b           . + 4 + (0x8 << 2)
label_19d754:
    if (ctx->pc == 0x19D754u) {
        ctx->pc = 0x19D758u;
        goto label_19d758;
    }
    ctx->pc = 0x19D750u;
    {
        const bool branch_taken_0x19d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d750) {
            ctx->pc = 0x19D774u;
            goto label_19d774;
        }
    }
    ctx->pc = 0x19D758u;
label_19d758:
    // 0x19d758: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_19d75c:
    if (ctx->pc == 0x19D75Cu) {
        ctx->pc = 0x19D760u;
        goto label_19d760;
    }
    ctx->pc = 0x19D758u;
    {
        const bool branch_taken_0x19d758 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d758) {
            ctx->pc = 0x19D774u;
            goto label_19d774;
        }
    }
    ctx->pc = 0x19D760u;
label_19d760:
    // 0x19d760: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x19d760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_19d764:
    // 0x19d764: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d768:
    // 0x19d768: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19d768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19d76c:
    // 0x19d76c: 0x320f809  jalr        $t9
label_19d770:
    if (ctx->pc == 0x19D770u) {
        ctx->pc = 0x19D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D76Cu;
        // 0x19d770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D774u;
        goto label_19d774;
    }
    ctx->pc = 0x19D76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D774u);
        ctx->pc = 0x19D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D76Cu;
        // 0x19d770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D76Cu, 0x19D774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D774u;
label_19d774:
    // 0x19d774: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19d774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19d778:
    // 0x19d778: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19d778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19d77c:
    // 0x19d77c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19d77cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19d780:
    // 0x19d780: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19d784:
    // 0x19d784: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19d788:
    // 0x19d788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19d78c:
    // 0x19d78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19d790:
    // 0x19d790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19d794:
    // 0x19d794: 0x3e00008  jr          $ra
label_19d798:
    if (ctx->pc == 0x19D798u) {
        ctx->pc = 0x19D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D794u;
        // 0x19d798: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D79Cu;
        goto label_fallthrough_0x19d794;
    }
    ctx->pc = 0x19D794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D794u;
        // 0x19d798: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d794:
    ctx->pc = 0x19D79Cu;
}
