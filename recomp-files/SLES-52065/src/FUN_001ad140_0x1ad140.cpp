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

// Function: FUN_001ad140
// Address: 0x1ad140 - 0x1adb74
void FUN_001ad140_0x1ad140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad140_0x1ad140");
#endif

    switch (ctx->pc) {
        case 0x1ad140u: goto label_1ad140;
        case 0x1ad144u: goto label_1ad144;
        case 0x1ad148u: goto label_1ad148;
        case 0x1ad14cu: goto label_1ad14c;
        case 0x1ad150u: goto label_1ad150;
        case 0x1ad154u: goto label_1ad154;
        case 0x1ad158u: goto label_1ad158;
        case 0x1ad15cu: goto label_1ad15c;
        case 0x1ad160u: goto label_1ad160;
        case 0x1ad164u: goto label_1ad164;
        case 0x1ad168u: goto label_1ad168;
        case 0x1ad16cu: goto label_1ad16c;
        case 0x1ad170u: goto label_1ad170;
        case 0x1ad174u: goto label_1ad174;
        case 0x1ad178u: goto label_1ad178;
        case 0x1ad17cu: goto label_1ad17c;
        case 0x1ad180u: goto label_1ad180;
        case 0x1ad184u: goto label_1ad184;
        case 0x1ad188u: goto label_1ad188;
        case 0x1ad18cu: goto label_1ad18c;
        case 0x1ad190u: goto label_1ad190;
        case 0x1ad194u: goto label_1ad194;
        case 0x1ad198u: goto label_1ad198;
        case 0x1ad19cu: goto label_1ad19c;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1a4u: goto label_1ad1a4;
        case 0x1ad1a8u: goto label_1ad1a8;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1b0u: goto label_1ad1b0;
        case 0x1ad1b4u: goto label_1ad1b4;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1bcu: goto label_1ad1bc;
        case 0x1ad1c0u: goto label_1ad1c0;
        case 0x1ad1c4u: goto label_1ad1c4;
        case 0x1ad1c8u: goto label_1ad1c8;
        case 0x1ad1ccu: goto label_1ad1cc;
        case 0x1ad1d0u: goto label_1ad1d0;
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad1dcu: goto label_1ad1dc;
        case 0x1ad1e0u: goto label_1ad1e0;
        case 0x1ad1e4u: goto label_1ad1e4;
        case 0x1ad1e8u: goto label_1ad1e8;
        case 0x1ad1ecu: goto label_1ad1ec;
        case 0x1ad1f0u: goto label_1ad1f0;
        case 0x1ad1f4u: goto label_1ad1f4;
        case 0x1ad1f8u: goto label_1ad1f8;
        case 0x1ad1fcu: goto label_1ad1fc;
        case 0x1ad200u: goto label_1ad200;
        case 0x1ad204u: goto label_1ad204;
        case 0x1ad208u: goto label_1ad208;
        case 0x1ad20cu: goto label_1ad20c;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad214u: goto label_1ad214;
        case 0x1ad218u: goto label_1ad218;
        case 0x1ad21cu: goto label_1ad21c;
        case 0x1ad220u: goto label_1ad220;
        case 0x1ad224u: goto label_1ad224;
        case 0x1ad228u: goto label_1ad228;
        case 0x1ad22cu: goto label_1ad22c;
        case 0x1ad230u: goto label_1ad230;
        case 0x1ad234u: goto label_1ad234;
        case 0x1ad238u: goto label_1ad238;
        case 0x1ad23cu: goto label_1ad23c;
        case 0x1ad240u: goto label_1ad240;
        case 0x1ad244u: goto label_1ad244;
        case 0x1ad248u: goto label_1ad248;
        case 0x1ad24cu: goto label_1ad24c;
        case 0x1ad250u: goto label_1ad250;
        case 0x1ad254u: goto label_1ad254;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad25cu: goto label_1ad25c;
        case 0x1ad260u: goto label_1ad260;
        case 0x1ad264u: goto label_1ad264;
        case 0x1ad268u: goto label_1ad268;
        case 0x1ad26cu: goto label_1ad26c;
        case 0x1ad270u: goto label_1ad270;
        case 0x1ad274u: goto label_1ad274;
        case 0x1ad278u: goto label_1ad278;
        case 0x1ad27cu: goto label_1ad27c;
        case 0x1ad280u: goto label_1ad280;
        case 0x1ad284u: goto label_1ad284;
        case 0x1ad288u: goto label_1ad288;
        case 0x1ad28cu: goto label_1ad28c;
        case 0x1ad290u: goto label_1ad290;
        case 0x1ad294u: goto label_1ad294;
        case 0x1ad298u: goto label_1ad298;
        case 0x1ad29cu: goto label_1ad29c;
        case 0x1ad2a0u: goto label_1ad2a0;
        case 0x1ad2a4u: goto label_1ad2a4;
        case 0x1ad2a8u: goto label_1ad2a8;
        case 0x1ad2acu: goto label_1ad2ac;
        case 0x1ad2b0u: goto label_1ad2b0;
        case 0x1ad2b4u: goto label_1ad2b4;
        case 0x1ad2b8u: goto label_1ad2b8;
        case 0x1ad2bcu: goto label_1ad2bc;
        case 0x1ad2c0u: goto label_1ad2c0;
        case 0x1ad2c4u: goto label_1ad2c4;
        case 0x1ad2c8u: goto label_1ad2c8;
        case 0x1ad2ccu: goto label_1ad2cc;
        case 0x1ad2d0u: goto label_1ad2d0;
        case 0x1ad2d4u: goto label_1ad2d4;
        case 0x1ad2d8u: goto label_1ad2d8;
        case 0x1ad2dcu: goto label_1ad2dc;
        case 0x1ad2e0u: goto label_1ad2e0;
        case 0x1ad2e4u: goto label_1ad2e4;
        case 0x1ad2e8u: goto label_1ad2e8;
        case 0x1ad2ecu: goto label_1ad2ec;
        case 0x1ad2f0u: goto label_1ad2f0;
        case 0x1ad2f4u: goto label_1ad2f4;
        case 0x1ad2f8u: goto label_1ad2f8;
        case 0x1ad2fcu: goto label_1ad2fc;
        case 0x1ad300u: goto label_1ad300;
        case 0x1ad304u: goto label_1ad304;
        case 0x1ad308u: goto label_1ad308;
        case 0x1ad30cu: goto label_1ad30c;
        case 0x1ad310u: goto label_1ad310;
        case 0x1ad314u: goto label_1ad314;
        case 0x1ad318u: goto label_1ad318;
        case 0x1ad31cu: goto label_1ad31c;
        case 0x1ad320u: goto label_1ad320;
        case 0x1ad324u: goto label_1ad324;
        case 0x1ad328u: goto label_1ad328;
        case 0x1ad32cu: goto label_1ad32c;
        case 0x1ad330u: goto label_1ad330;
        case 0x1ad334u: goto label_1ad334;
        case 0x1ad338u: goto label_1ad338;
        case 0x1ad33cu: goto label_1ad33c;
        case 0x1ad340u: goto label_1ad340;
        case 0x1ad344u: goto label_1ad344;
        case 0x1ad348u: goto label_1ad348;
        case 0x1ad34cu: goto label_1ad34c;
        case 0x1ad350u: goto label_1ad350;
        case 0x1ad354u: goto label_1ad354;
        case 0x1ad358u: goto label_1ad358;
        case 0x1ad35cu: goto label_1ad35c;
        case 0x1ad360u: goto label_1ad360;
        case 0x1ad364u: goto label_1ad364;
        case 0x1ad368u: goto label_1ad368;
        case 0x1ad36cu: goto label_1ad36c;
        case 0x1ad370u: goto label_1ad370;
        case 0x1ad374u: goto label_1ad374;
        case 0x1ad378u: goto label_1ad378;
        case 0x1ad37cu: goto label_1ad37c;
        case 0x1ad380u: goto label_1ad380;
        case 0x1ad384u: goto label_1ad384;
        case 0x1ad388u: goto label_1ad388;
        case 0x1ad38cu: goto label_1ad38c;
        case 0x1ad390u: goto label_1ad390;
        case 0x1ad394u: goto label_1ad394;
        case 0x1ad398u: goto label_1ad398;
        case 0x1ad39cu: goto label_1ad39c;
        case 0x1ad3a0u: goto label_1ad3a0;
        case 0x1ad3a4u: goto label_1ad3a4;
        case 0x1ad3a8u: goto label_1ad3a8;
        case 0x1ad3acu: goto label_1ad3ac;
        case 0x1ad3b0u: goto label_1ad3b0;
        case 0x1ad3b4u: goto label_1ad3b4;
        case 0x1ad3b8u: goto label_1ad3b8;
        case 0x1ad3bcu: goto label_1ad3bc;
        case 0x1ad3c0u: goto label_1ad3c0;
        case 0x1ad3c4u: goto label_1ad3c4;
        case 0x1ad3c8u: goto label_1ad3c8;
        case 0x1ad3ccu: goto label_1ad3cc;
        case 0x1ad3d0u: goto label_1ad3d0;
        case 0x1ad3d4u: goto label_1ad3d4;
        case 0x1ad3d8u: goto label_1ad3d8;
        case 0x1ad3dcu: goto label_1ad3dc;
        case 0x1ad3e0u: goto label_1ad3e0;
        case 0x1ad3e4u: goto label_1ad3e4;
        case 0x1ad3e8u: goto label_1ad3e8;
        case 0x1ad3ecu: goto label_1ad3ec;
        case 0x1ad3f0u: goto label_1ad3f0;
        case 0x1ad3f4u: goto label_1ad3f4;
        case 0x1ad3f8u: goto label_1ad3f8;
        case 0x1ad3fcu: goto label_1ad3fc;
        case 0x1ad400u: goto label_1ad400;
        case 0x1ad404u: goto label_1ad404;
        case 0x1ad408u: goto label_1ad408;
        case 0x1ad40cu: goto label_1ad40c;
        case 0x1ad410u: goto label_1ad410;
        case 0x1ad414u: goto label_1ad414;
        case 0x1ad418u: goto label_1ad418;
        case 0x1ad41cu: goto label_1ad41c;
        case 0x1ad420u: goto label_1ad420;
        case 0x1ad424u: goto label_1ad424;
        case 0x1ad428u: goto label_1ad428;
        case 0x1ad42cu: goto label_1ad42c;
        case 0x1ad430u: goto label_1ad430;
        case 0x1ad434u: goto label_1ad434;
        case 0x1ad438u: goto label_1ad438;
        case 0x1ad43cu: goto label_1ad43c;
        case 0x1ad440u: goto label_1ad440;
        case 0x1ad444u: goto label_1ad444;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad44cu: goto label_1ad44c;
        case 0x1ad450u: goto label_1ad450;
        case 0x1ad454u: goto label_1ad454;
        case 0x1ad458u: goto label_1ad458;
        case 0x1ad45cu: goto label_1ad45c;
        case 0x1ad460u: goto label_1ad460;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad468u: goto label_1ad468;
        case 0x1ad46cu: goto label_1ad46c;
        case 0x1ad470u: goto label_1ad470;
        case 0x1ad474u: goto label_1ad474;
        case 0x1ad478u: goto label_1ad478;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad480u: goto label_1ad480;
        case 0x1ad484u: goto label_1ad484;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad48cu: goto label_1ad48c;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad494u: goto label_1ad494;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4a0u: goto label_1ad4a0;
        case 0x1ad4a4u: goto label_1ad4a4;
        case 0x1ad4a8u: goto label_1ad4a8;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4b0u: goto label_1ad4b0;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4b8u: goto label_1ad4b8;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4c4u: goto label_1ad4c4;
        case 0x1ad4c8u: goto label_1ad4c8;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4d4u: goto label_1ad4d4;
        case 0x1ad4d8u: goto label_1ad4d8;
        case 0x1ad4dcu: goto label_1ad4dc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4e8u: goto label_1ad4e8;
        case 0x1ad4ecu: goto label_1ad4ec;
        case 0x1ad4f0u: goto label_1ad4f0;
        case 0x1ad4f4u: goto label_1ad4f4;
        case 0x1ad4f8u: goto label_1ad4f8;
        case 0x1ad4fcu: goto label_1ad4fc;
        case 0x1ad500u: goto label_1ad500;
        case 0x1ad504u: goto label_1ad504;
        case 0x1ad508u: goto label_1ad508;
        case 0x1ad50cu: goto label_1ad50c;
        case 0x1ad510u: goto label_1ad510;
        case 0x1ad514u: goto label_1ad514;
        case 0x1ad518u: goto label_1ad518;
        case 0x1ad51cu: goto label_1ad51c;
        case 0x1ad520u: goto label_1ad520;
        case 0x1ad524u: goto label_1ad524;
        case 0x1ad528u: goto label_1ad528;
        case 0x1ad52cu: goto label_1ad52c;
        case 0x1ad530u: goto label_1ad530;
        case 0x1ad534u: goto label_1ad534;
        case 0x1ad538u: goto label_1ad538;
        case 0x1ad53cu: goto label_1ad53c;
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad544u: goto label_1ad544;
        case 0x1ad548u: goto label_1ad548;
        case 0x1ad54cu: goto label_1ad54c;
        case 0x1ad550u: goto label_1ad550;
        case 0x1ad554u: goto label_1ad554;
        case 0x1ad558u: goto label_1ad558;
        case 0x1ad55cu: goto label_1ad55c;
        case 0x1ad560u: goto label_1ad560;
        case 0x1ad564u: goto label_1ad564;
        case 0x1ad568u: goto label_1ad568;
        case 0x1ad56cu: goto label_1ad56c;
        case 0x1ad570u: goto label_1ad570;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad578u: goto label_1ad578;
        case 0x1ad57cu: goto label_1ad57c;
        case 0x1ad580u: goto label_1ad580;
        case 0x1ad584u: goto label_1ad584;
        case 0x1ad588u: goto label_1ad588;
        case 0x1ad58cu: goto label_1ad58c;
        case 0x1ad590u: goto label_1ad590;
        case 0x1ad594u: goto label_1ad594;
        case 0x1ad598u: goto label_1ad598;
        case 0x1ad59cu: goto label_1ad59c;
        case 0x1ad5a0u: goto label_1ad5a0;
        case 0x1ad5a4u: goto label_1ad5a4;
        case 0x1ad5a8u: goto label_1ad5a8;
        case 0x1ad5acu: goto label_1ad5ac;
        case 0x1ad5b0u: goto label_1ad5b0;
        case 0x1ad5b4u: goto label_1ad5b4;
        case 0x1ad5b8u: goto label_1ad5b8;
        case 0x1ad5bcu: goto label_1ad5bc;
        case 0x1ad5c0u: goto label_1ad5c0;
        case 0x1ad5c4u: goto label_1ad5c4;
        case 0x1ad5c8u: goto label_1ad5c8;
        case 0x1ad5ccu: goto label_1ad5cc;
        case 0x1ad5d0u: goto label_1ad5d0;
        case 0x1ad5d4u: goto label_1ad5d4;
        case 0x1ad5d8u: goto label_1ad5d8;
        case 0x1ad5dcu: goto label_1ad5dc;
        case 0x1ad5e0u: goto label_1ad5e0;
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad5e8u: goto label_1ad5e8;
        case 0x1ad5ecu: goto label_1ad5ec;
        case 0x1ad5f0u: goto label_1ad5f0;
        case 0x1ad5f4u: goto label_1ad5f4;
        case 0x1ad5f8u: goto label_1ad5f8;
        case 0x1ad5fcu: goto label_1ad5fc;
        case 0x1ad600u: goto label_1ad600;
        case 0x1ad604u: goto label_1ad604;
        case 0x1ad608u: goto label_1ad608;
        case 0x1ad60cu: goto label_1ad60c;
        case 0x1ad610u: goto label_1ad610;
        case 0x1ad614u: goto label_1ad614;
        case 0x1ad618u: goto label_1ad618;
        case 0x1ad61cu: goto label_1ad61c;
        case 0x1ad620u: goto label_1ad620;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad628u: goto label_1ad628;
        case 0x1ad62cu: goto label_1ad62c;
        case 0x1ad630u: goto label_1ad630;
        case 0x1ad634u: goto label_1ad634;
        case 0x1ad638u: goto label_1ad638;
        case 0x1ad63cu: goto label_1ad63c;
        case 0x1ad640u: goto label_1ad640;
        case 0x1ad644u: goto label_1ad644;
        case 0x1ad648u: goto label_1ad648;
        case 0x1ad64cu: goto label_1ad64c;
        case 0x1ad650u: goto label_1ad650;
        case 0x1ad654u: goto label_1ad654;
        case 0x1ad658u: goto label_1ad658;
        case 0x1ad65cu: goto label_1ad65c;
        case 0x1ad660u: goto label_1ad660;
        case 0x1ad664u: goto label_1ad664;
        case 0x1ad668u: goto label_1ad668;
        case 0x1ad66cu: goto label_1ad66c;
        case 0x1ad670u: goto label_1ad670;
        case 0x1ad674u: goto label_1ad674;
        case 0x1ad678u: goto label_1ad678;
        case 0x1ad67cu: goto label_1ad67c;
        case 0x1ad680u: goto label_1ad680;
        case 0x1ad684u: goto label_1ad684;
        case 0x1ad688u: goto label_1ad688;
        case 0x1ad68cu: goto label_1ad68c;
        case 0x1ad690u: goto label_1ad690;
        case 0x1ad694u: goto label_1ad694;
        case 0x1ad698u: goto label_1ad698;
        case 0x1ad69cu: goto label_1ad69c;
        case 0x1ad6a0u: goto label_1ad6a0;
        case 0x1ad6a4u: goto label_1ad6a4;
        case 0x1ad6a8u: goto label_1ad6a8;
        case 0x1ad6acu: goto label_1ad6ac;
        case 0x1ad6b0u: goto label_1ad6b0;
        case 0x1ad6b4u: goto label_1ad6b4;
        case 0x1ad6b8u: goto label_1ad6b8;
        case 0x1ad6bcu: goto label_1ad6bc;
        case 0x1ad6c0u: goto label_1ad6c0;
        case 0x1ad6c4u: goto label_1ad6c4;
        case 0x1ad6c8u: goto label_1ad6c8;
        case 0x1ad6ccu: goto label_1ad6cc;
        case 0x1ad6d0u: goto label_1ad6d0;
        case 0x1ad6d4u: goto label_1ad6d4;
        case 0x1ad6d8u: goto label_1ad6d8;
        case 0x1ad6dcu: goto label_1ad6dc;
        case 0x1ad6e0u: goto label_1ad6e0;
        case 0x1ad6e4u: goto label_1ad6e4;
        case 0x1ad6e8u: goto label_1ad6e8;
        case 0x1ad6ecu: goto label_1ad6ec;
        case 0x1ad6f0u: goto label_1ad6f0;
        case 0x1ad6f4u: goto label_1ad6f4;
        case 0x1ad6f8u: goto label_1ad6f8;
        case 0x1ad6fcu: goto label_1ad6fc;
        case 0x1ad700u: goto label_1ad700;
        case 0x1ad704u: goto label_1ad704;
        case 0x1ad708u: goto label_1ad708;
        case 0x1ad70cu: goto label_1ad70c;
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad714u: goto label_1ad714;
        case 0x1ad718u: goto label_1ad718;
        case 0x1ad71cu: goto label_1ad71c;
        case 0x1ad720u: goto label_1ad720;
        case 0x1ad724u: goto label_1ad724;
        case 0x1ad728u: goto label_1ad728;
        case 0x1ad72cu: goto label_1ad72c;
        case 0x1ad730u: goto label_1ad730;
        case 0x1ad734u: goto label_1ad734;
        case 0x1ad738u: goto label_1ad738;
        case 0x1ad73cu: goto label_1ad73c;
        case 0x1ad740u: goto label_1ad740;
        case 0x1ad744u: goto label_1ad744;
        case 0x1ad748u: goto label_1ad748;
        case 0x1ad74cu: goto label_1ad74c;
        case 0x1ad750u: goto label_1ad750;
        case 0x1ad754u: goto label_1ad754;
        case 0x1ad758u: goto label_1ad758;
        case 0x1ad75cu: goto label_1ad75c;
        case 0x1ad760u: goto label_1ad760;
        case 0x1ad764u: goto label_1ad764;
        case 0x1ad768u: goto label_1ad768;
        case 0x1ad76cu: goto label_1ad76c;
        case 0x1ad770u: goto label_1ad770;
        case 0x1ad774u: goto label_1ad774;
        case 0x1ad778u: goto label_1ad778;
        case 0x1ad77cu: goto label_1ad77c;
        case 0x1ad780u: goto label_1ad780;
        case 0x1ad784u: goto label_1ad784;
        case 0x1ad788u: goto label_1ad788;
        case 0x1ad78cu: goto label_1ad78c;
        case 0x1ad790u: goto label_1ad790;
        case 0x1ad794u: goto label_1ad794;
        case 0x1ad798u: goto label_1ad798;
        case 0x1ad79cu: goto label_1ad79c;
        case 0x1ad7a0u: goto label_1ad7a0;
        case 0x1ad7a4u: goto label_1ad7a4;
        case 0x1ad7a8u: goto label_1ad7a8;
        case 0x1ad7acu: goto label_1ad7ac;
        case 0x1ad7b0u: goto label_1ad7b0;
        case 0x1ad7b4u: goto label_1ad7b4;
        case 0x1ad7b8u: goto label_1ad7b8;
        case 0x1ad7bcu: goto label_1ad7bc;
        case 0x1ad7c0u: goto label_1ad7c0;
        case 0x1ad7c4u: goto label_1ad7c4;
        case 0x1ad7c8u: goto label_1ad7c8;
        case 0x1ad7ccu: goto label_1ad7cc;
        case 0x1ad7d0u: goto label_1ad7d0;
        case 0x1ad7d4u: goto label_1ad7d4;
        case 0x1ad7d8u: goto label_1ad7d8;
        case 0x1ad7dcu: goto label_1ad7dc;
        case 0x1ad7e0u: goto label_1ad7e0;
        case 0x1ad7e4u: goto label_1ad7e4;
        case 0x1ad7e8u: goto label_1ad7e8;
        case 0x1ad7ecu: goto label_1ad7ec;
        case 0x1ad7f0u: goto label_1ad7f0;
        case 0x1ad7f4u: goto label_1ad7f4;
        case 0x1ad7f8u: goto label_1ad7f8;
        case 0x1ad7fcu: goto label_1ad7fc;
        case 0x1ad800u: goto label_1ad800;
        case 0x1ad804u: goto label_1ad804;
        case 0x1ad808u: goto label_1ad808;
        case 0x1ad80cu: goto label_1ad80c;
        case 0x1ad810u: goto label_1ad810;
        case 0x1ad814u: goto label_1ad814;
        case 0x1ad818u: goto label_1ad818;
        case 0x1ad81cu: goto label_1ad81c;
        case 0x1ad820u: goto label_1ad820;
        case 0x1ad824u: goto label_1ad824;
        case 0x1ad828u: goto label_1ad828;
        case 0x1ad82cu: goto label_1ad82c;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad834u: goto label_1ad834;
        case 0x1ad838u: goto label_1ad838;
        case 0x1ad83cu: goto label_1ad83c;
        case 0x1ad840u: goto label_1ad840;
        case 0x1ad844u: goto label_1ad844;
        case 0x1ad848u: goto label_1ad848;
        case 0x1ad84cu: goto label_1ad84c;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad854u: goto label_1ad854;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad85cu: goto label_1ad85c;
        case 0x1ad860u: goto label_1ad860;
        case 0x1ad864u: goto label_1ad864;
        case 0x1ad868u: goto label_1ad868;
        case 0x1ad86cu: goto label_1ad86c;
        case 0x1ad870u: goto label_1ad870;
        case 0x1ad874u: goto label_1ad874;
        case 0x1ad878u: goto label_1ad878;
        case 0x1ad87cu: goto label_1ad87c;
        case 0x1ad880u: goto label_1ad880;
        case 0x1ad884u: goto label_1ad884;
        case 0x1ad888u: goto label_1ad888;
        case 0x1ad88cu: goto label_1ad88c;
        case 0x1ad890u: goto label_1ad890;
        case 0x1ad894u: goto label_1ad894;
        case 0x1ad898u: goto label_1ad898;
        case 0x1ad89cu: goto label_1ad89c;
        case 0x1ad8a0u: goto label_1ad8a0;
        case 0x1ad8a4u: goto label_1ad8a4;
        case 0x1ad8a8u: goto label_1ad8a8;
        case 0x1ad8acu: goto label_1ad8ac;
        case 0x1ad8b0u: goto label_1ad8b0;
        case 0x1ad8b4u: goto label_1ad8b4;
        case 0x1ad8b8u: goto label_1ad8b8;
        case 0x1ad8bcu: goto label_1ad8bc;
        case 0x1ad8c0u: goto label_1ad8c0;
        case 0x1ad8c4u: goto label_1ad8c4;
        case 0x1ad8c8u: goto label_1ad8c8;
        case 0x1ad8ccu: goto label_1ad8cc;
        case 0x1ad8d0u: goto label_1ad8d0;
        case 0x1ad8d4u: goto label_1ad8d4;
        case 0x1ad8d8u: goto label_1ad8d8;
        case 0x1ad8dcu: goto label_1ad8dc;
        case 0x1ad8e0u: goto label_1ad8e0;
        case 0x1ad8e4u: goto label_1ad8e4;
        case 0x1ad8e8u: goto label_1ad8e8;
        case 0x1ad8ecu: goto label_1ad8ec;
        case 0x1ad8f0u: goto label_1ad8f0;
        case 0x1ad8f4u: goto label_1ad8f4;
        case 0x1ad8f8u: goto label_1ad8f8;
        case 0x1ad8fcu: goto label_1ad8fc;
        case 0x1ad900u: goto label_1ad900;
        case 0x1ad904u: goto label_1ad904;
        case 0x1ad908u: goto label_1ad908;
        case 0x1ad90cu: goto label_1ad90c;
        case 0x1ad910u: goto label_1ad910;
        case 0x1ad914u: goto label_1ad914;
        case 0x1ad918u: goto label_1ad918;
        case 0x1ad91cu: goto label_1ad91c;
        case 0x1ad920u: goto label_1ad920;
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad928u: goto label_1ad928;
        case 0x1ad92cu: goto label_1ad92c;
        case 0x1ad930u: goto label_1ad930;
        case 0x1ad934u: goto label_1ad934;
        case 0x1ad938u: goto label_1ad938;
        case 0x1ad93cu: goto label_1ad93c;
        case 0x1ad940u: goto label_1ad940;
        case 0x1ad944u: goto label_1ad944;
        case 0x1ad948u: goto label_1ad948;
        case 0x1ad94cu: goto label_1ad94c;
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad954u: goto label_1ad954;
        case 0x1ad958u: goto label_1ad958;
        case 0x1ad95cu: goto label_1ad95c;
        case 0x1ad960u: goto label_1ad960;
        case 0x1ad964u: goto label_1ad964;
        case 0x1ad968u: goto label_1ad968;
        case 0x1ad96cu: goto label_1ad96c;
        case 0x1ad970u: goto label_1ad970;
        case 0x1ad974u: goto label_1ad974;
        case 0x1ad978u: goto label_1ad978;
        case 0x1ad97cu: goto label_1ad97c;
        case 0x1ad980u: goto label_1ad980;
        case 0x1ad984u: goto label_1ad984;
        case 0x1ad988u: goto label_1ad988;
        case 0x1ad98cu: goto label_1ad98c;
        case 0x1ad990u: goto label_1ad990;
        case 0x1ad994u: goto label_1ad994;
        case 0x1ad998u: goto label_1ad998;
        case 0x1ad99cu: goto label_1ad99c;
        case 0x1ad9a0u: goto label_1ad9a0;
        case 0x1ad9a4u: goto label_1ad9a4;
        case 0x1ad9a8u: goto label_1ad9a8;
        case 0x1ad9acu: goto label_1ad9ac;
        case 0x1ad9b0u: goto label_1ad9b0;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9b8u: goto label_1ad9b8;
        case 0x1ad9bcu: goto label_1ad9bc;
        case 0x1ad9c0u: goto label_1ad9c0;
        case 0x1ad9c4u: goto label_1ad9c4;
        case 0x1ad9c8u: goto label_1ad9c8;
        case 0x1ad9ccu: goto label_1ad9cc;
        case 0x1ad9d0u: goto label_1ad9d0;
        case 0x1ad9d4u: goto label_1ad9d4;
        case 0x1ad9d8u: goto label_1ad9d8;
        case 0x1ad9dcu: goto label_1ad9dc;
        case 0x1ad9e0u: goto label_1ad9e0;
        case 0x1ad9e4u: goto label_1ad9e4;
        case 0x1ad9e8u: goto label_1ad9e8;
        case 0x1ad9ecu: goto label_1ad9ec;
        case 0x1ad9f0u: goto label_1ad9f0;
        case 0x1ad9f4u: goto label_1ad9f4;
        case 0x1ad9f8u: goto label_1ad9f8;
        case 0x1ad9fcu: goto label_1ad9fc;
        case 0x1ada00u: goto label_1ada00;
        case 0x1ada04u: goto label_1ada04;
        case 0x1ada08u: goto label_1ada08;
        case 0x1ada0cu: goto label_1ada0c;
        case 0x1ada10u: goto label_1ada10;
        case 0x1ada14u: goto label_1ada14;
        case 0x1ada18u: goto label_1ada18;
        case 0x1ada1cu: goto label_1ada1c;
        case 0x1ada20u: goto label_1ada20;
        case 0x1ada24u: goto label_1ada24;
        case 0x1ada28u: goto label_1ada28;
        case 0x1ada2cu: goto label_1ada2c;
        case 0x1ada30u: goto label_1ada30;
        case 0x1ada34u: goto label_1ada34;
        case 0x1ada38u: goto label_1ada38;
        case 0x1ada3cu: goto label_1ada3c;
        case 0x1ada40u: goto label_1ada40;
        case 0x1ada44u: goto label_1ada44;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada4cu: goto label_1ada4c;
        case 0x1ada50u: goto label_1ada50;
        case 0x1ada54u: goto label_1ada54;
        case 0x1ada58u: goto label_1ada58;
        case 0x1ada5cu: goto label_1ada5c;
        case 0x1ada60u: goto label_1ada60;
        case 0x1ada64u: goto label_1ada64;
        case 0x1ada68u: goto label_1ada68;
        case 0x1ada6cu: goto label_1ada6c;
        case 0x1ada70u: goto label_1ada70;
        case 0x1ada74u: goto label_1ada74;
        case 0x1ada78u: goto label_1ada78;
        case 0x1ada7cu: goto label_1ada7c;
        case 0x1ada80u: goto label_1ada80;
        case 0x1ada84u: goto label_1ada84;
        case 0x1ada88u: goto label_1ada88;
        case 0x1ada8cu: goto label_1ada8c;
        case 0x1ada90u: goto label_1ada90;
        case 0x1ada94u: goto label_1ada94;
        case 0x1ada98u: goto label_1ada98;
        case 0x1ada9cu: goto label_1ada9c;
        case 0x1adaa0u: goto label_1adaa0;
        case 0x1adaa4u: goto label_1adaa4;
        case 0x1adaa8u: goto label_1adaa8;
        case 0x1adaacu: goto label_1adaac;
        case 0x1adab0u: goto label_1adab0;
        case 0x1adab4u: goto label_1adab4;
        case 0x1adab8u: goto label_1adab8;
        case 0x1adabcu: goto label_1adabc;
        case 0x1adac0u: goto label_1adac0;
        case 0x1adac4u: goto label_1adac4;
        case 0x1adac8u: goto label_1adac8;
        case 0x1adaccu: goto label_1adacc;
        case 0x1adad0u: goto label_1adad0;
        case 0x1adad4u: goto label_1adad4;
        case 0x1adad8u: goto label_1adad8;
        case 0x1adadcu: goto label_1adadc;
        case 0x1adae0u: goto label_1adae0;
        case 0x1adae4u: goto label_1adae4;
        case 0x1adae8u: goto label_1adae8;
        case 0x1adaecu: goto label_1adaec;
        case 0x1adaf0u: goto label_1adaf0;
        case 0x1adaf4u: goto label_1adaf4;
        case 0x1adaf8u: goto label_1adaf8;
        case 0x1adafcu: goto label_1adafc;
        case 0x1adb00u: goto label_1adb00;
        case 0x1adb04u: goto label_1adb04;
        case 0x1adb08u: goto label_1adb08;
        case 0x1adb0cu: goto label_1adb0c;
        case 0x1adb10u: goto label_1adb10;
        case 0x1adb14u: goto label_1adb14;
        case 0x1adb18u: goto label_1adb18;
        case 0x1adb1cu: goto label_1adb1c;
        case 0x1adb20u: goto label_1adb20;
        case 0x1adb24u: goto label_1adb24;
        case 0x1adb28u: goto label_1adb28;
        case 0x1adb2cu: goto label_1adb2c;
        case 0x1adb30u: goto label_1adb30;
        case 0x1adb34u: goto label_1adb34;
        case 0x1adb38u: goto label_1adb38;
        case 0x1adb3cu: goto label_1adb3c;
        case 0x1adb40u: goto label_1adb40;
        case 0x1adb44u: goto label_1adb44;
        case 0x1adb48u: goto label_1adb48;
        case 0x1adb4cu: goto label_1adb4c;
        case 0x1adb50u: goto label_1adb50;
        case 0x1adb54u: goto label_1adb54;
        case 0x1adb58u: goto label_1adb58;
        case 0x1adb5cu: goto label_1adb5c;
        case 0x1adb60u: goto label_1adb60;
        case 0x1adb64u: goto label_1adb64;
        case 0x1adb68u: goto label_1adb68;
        case 0x1adb6cu: goto label_1adb6c;
        case 0x1adb70u: goto label_1adb70;
        default: break;
    }

    ctx->pc = 0x1ad140u;

label_1ad140:
    // 0x1ad140: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ad140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ad144:
    // 0x1ad144: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ad144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ad148:
    // 0x1ad148: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ad148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ad14c:
    // 0x1ad14c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ad14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ad150:
    // 0x1ad150: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ad150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ad154:
    // 0x1ad154: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ad154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ad158:
    // 0x1ad158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ad158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ad15c:
    // 0x1ad15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ad160:
    // 0x1ad160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ad160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ad164:
    // 0x1ad164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad168:
    // 0x1ad168: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ad168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ad16c:
    // 0x1ad16c: 0xc063dd4  jal         func_18F750
label_1ad170:
    if (ctx->pc == 0x1AD170u) {
        ctx->pc = 0x1AD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD16Cu;
        // 0x1ad170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD174u;
        goto label_1ad174;
    }
    ctx->pc = 0x1AD16Cu;
    SET_GPR_U32(ctx, 31, 0x1AD174u);
    ctx->pc = 0x1AD170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD16Cu;
    // 0x1ad170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AD16Cu, 0x1AD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD174u;
label_1ad174:
    // 0x1ad174: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1ad174u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1ad178:
    // 0x1ad178: 0x1020024d  beqz        $at, . + 4 + (0x24D << 2)
label_1ad17c:
    if (ctx->pc == 0x1AD17Cu) {
        ctx->pc = 0x1AD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD178u;
        // 0x1ad17c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD180u;
        goto label_1ad180;
    }
    ctx->pc = 0x1AD178u;
    {
        const bool branch_taken_0x1ad178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD178u;
        // 0x1ad17c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad178) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD180u;
label_1ad180:
    // 0x1ad180: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ad184:
    // 0x1ad184: 0x24840a70  addiu       $a0, $a0, 0xA70
    ctx->pc = 0x1ad184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
label_1ad188:
    // 0x1ad188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ad188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ad18c:
    // 0x1ad18c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ad18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ad190:
    // 0x1ad190: 0x600008  jr          $v1
label_1ad194:
    if (ctx->pc == 0x1AD194u) {
        ctx->pc = 0x1AD198u;
        goto label_1ad198;
    }
    ctx->pc = 0x1AD190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD198u: goto label_1ad198;
            case 0x1AD3C8u: goto label_1ad3c8;
            case 0x1AD470u: goto label_1ad470;
            case 0x1AD510u: goto label_1ad510;
            case 0x1AD528u: goto label_1ad528;
            case 0x1AD538u: goto label_1ad538;
            case 0x1AD55Cu: goto label_1ad55c;
            case 0x1AD598u: goto label_1ad598;
            case 0x1AD740u: goto label_1ad740;
            case 0x1AD824u: goto label_1ad824;
            case 0x1AD918u: goto label_1ad918;
            case 0x1AD980u: goto label_1ad980;
            case 0x1ADA58u: goto label_1ada58;
            case 0x1ADAB0u: goto label_1adab0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AD198u;
label_1ad198:
    // 0x1ad198: 0xc067f08  jal         func_19FC20
label_1ad19c:
    if (ctx->pc == 0x1AD19Cu) {
        ctx->pc = 0x1AD1A0u;
        goto label_1ad1a0;
    }
    ctx->pc = 0x1AD198u;
    SET_GPR_U32(ctx, 31, 0x1AD1A0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1AD198u, 0x1AD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1A0u;
label_1ad1a0:
    // 0x1ad1a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad1a4:
    // 0x1ad1a4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_1ad1a8:
    if (ctx->pc == 0x1AD1A8u) {
        ctx->pc = 0x1AD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1A4u;
        // 0x1ad1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD1ACu;
        goto label_1ad1ac;
    }
    ctx->pc = 0x1AD1A4u;
    {
        const bool branch_taken_0x1ad1a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1A4u;
        // 0x1ad1a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1a4) {
            ctx->pc = 0x1AD1C8u;
            goto label_1ad1c8;
        }
    }
    ctx->pc = 0x1AD1ACu;
label_1ad1ac:
    // 0x1ad1ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ad1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ad1b0:
    // 0x1ad1b0: 0xc067f68  jal         func_19FDA0
label_1ad1b4:
    if (ctx->pc == 0x1AD1B4u) {
        ctx->pc = 0x1AD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1B0u;
        // 0x1ad1b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD1B8u;
        goto label_1ad1b8;
    }
    ctx->pc = 0x1AD1B0u;
    SET_GPR_U32(ctx, 31, 0x1AD1B8u);
    ctx->pc = 0x1AD1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1B0u;
    // 0x1ad1b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AD1B0u, 0x1AD1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1B8u;
label_1ad1b8:
    // 0x1ad1b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad1bc:
    // 0x1ad1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ad1c0:
    // 0x1ad1c0: 0xc067f68  jal         func_19FDA0
label_1ad1c4:
    if (ctx->pc == 0x1AD1C4u) {
        ctx->pc = 0x1AD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1C0u;
        // 0x1ad1c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD1C8u;
        goto label_1ad1c8;
    }
    ctx->pc = 0x1AD1C0u;
    SET_GPR_U32(ctx, 31, 0x1AD1C8u);
    ctx->pc = 0x1AD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1C0u;
    // 0x1ad1c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AD1C0u, 0x1AD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1C8u;
label_1ad1c8:
    // 0x1ad1c8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ad1cc:
    // 0x1ad1cc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ad1d0:
    // 0x1ad1d0: 0xc06bd80  jal         func_1AF600
label_1ad1d4:
    if (ctx->pc == 0x1AD1D4u) {
        ctx->pc = 0x1AD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1D0u;
        // 0x1ad1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD1D8u;
        goto label_1ad1d8;
    }
    ctx->pc = 0x1AD1D0u;
    SET_GPR_U32(ctx, 31, 0x1AD1D8u);
    ctx->pc = 0x1AD1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1D0u;
    // 0x1ad1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1AD1D0u, 0x1AD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1D8u;
label_1ad1d8:
    // 0x1ad1d8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ad1dc:
    // 0x1ad1dc: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ad1dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ad1e0:
    // 0x1ad1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ad1e4:
    if (ctx->pc == 0x1AD1E4u) {
        ctx->pc = 0x1AD1E8u;
        goto label_1ad1e8;
    }
    ctx->pc = 0x1AD1E0u;
    {
        const bool branch_taken_0x1ad1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad1e0) {
            ctx->pc = 0x1AD1F4u;
            goto label_1ad1f4;
        }
    }
    ctx->pc = 0x1AD1E8u;
label_1ad1e8:
    // 0x1ad1e8: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ad1ec:
    // 0x1ad1ec: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ad1f0:
    // 0x1ad1f0: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x1ad1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
label_1ad1f4:
    // 0x1ad1f4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ad1f8:
    // 0x1ad1f8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ad1fc:
    // 0x1ad1fc: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1ad200:
    // 0x1ad200: 0xae2207f0  sw          $v0, 0x7F0($s1)
    ctx->pc = 0x1ad200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2032), GPR_U32(ctx, 2));
label_1ad204:
    // 0x1ad204: 0x8e2407f0  lw          $a0, 0x7F0($s1)
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1ad208:
    // 0x1ad208: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad20c:
    // 0x1ad20c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ad20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ad210:
    // 0x1ad210: 0x320f809  jalr        $t9
label_1ad214:
    if (ctx->pc == 0x1AD214u) {
        ctx->pc = 0x1AD218u;
        goto label_1ad218;
    }
    ctx->pc = 0x1AD210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD210u, 0x1AD218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD218u;
label_1ad218:
    // 0x1ad218: 0x8e2207f0  lw          $v0, 0x7F0($s1)
    ctx->pc = 0x1ad218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1ad21c:
    // 0x1ad21c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ad21cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad220:
    // 0x1ad220: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ad220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ad224:
    // 0x1ad224: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ad224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ad228:
    // 0x1ad228: 0x8c420304  lw          $v0, 0x304($v0)
    ctx->pc = 0x1ad228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_1ad22c:
    // 0x1ad22c: 0xae2207f4  sw          $v0, 0x7F4($s1)
    ctx->pc = 0x1ad22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2036), GPR_U32(ctx, 2));
label_1ad230:
    // 0x1ad230: 0x8e2407f4  lw          $a0, 0x7F4($s1)
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad234:
    // 0x1ad234: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad238:
    // 0x1ad238: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ad23c:
    // 0x1ad23c: 0x320f809  jalr        $t9
label_1ad240:
    if (ctx->pc == 0x1AD240u) {
        ctx->pc = 0x1AD244u;
        goto label_1ad244;
    }
    ctx->pc = 0x1AD23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD23Cu, 0x1AD244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD244u;
label_1ad244:
    // 0x1ad244: 0x8e2307f4  lw          $v1, 0x7F4($s1)
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad248:
    // 0x1ad248: 0xa940  sll         $s5, $zero, 5
    ctx->pc = 0x1ad248u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_1ad24c:
    // 0x1ad24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad250:
    // 0x1ad250: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad254:
    // 0x1ad254: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x1ad254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ad258:
    // 0x1ad258: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ad258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad25c:
    // 0x1ad25c: 0xa3828398  sb          $v0, -0x7C68($gp)
    ctx->pc = 0x1ad25cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
label_1ad260:
    // 0x1ad260: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1ad264:
    // 0x1ad264: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1ad264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ad268:
    // 0x1ad268: 0x10000042  b           . + 4 + (0x42 << 2)
label_1ad26c:
    if (ctx->pc == 0x1AD26Cu) {
        ctx->pc = 0x1AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD268u;
        // 0x1ad26c: 0xae2006d0  sw          $zero, 0x6D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD270u;
        goto label_1ad270;
    }
    ctx->pc = 0x1AD268u;
    {
        const bool branch_taken_0x1ad268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD268u;
        // 0x1ad26c: 0xae2006d0  sw          $zero, 0x6D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad268) {
            ctx->pc = 0x1AD374u;
            goto label_1ad374;
        }
    }
    ctx->pc = 0x1AD270u;
label_1ad270:
    // 0x1ad270: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x1ad270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1ad274:
    // 0x1ad274: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_1ad278:
    if (ctx->pc == 0x1AD278u) {
        ctx->pc = 0x1AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD274u;
        // 0x1ad278: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD27Cu;
        goto label_1ad27c;
    }
    ctx->pc = 0x1AD274u;
    {
        const bool branch_taken_0x1ad274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD274u;
        // 0x1ad278: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad274) {
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD27Cu;
label_1ad27c:
    // 0x1ad27c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_1ad280:
    if (ctx->pc == 0x1AD280u) {
        ctx->pc = 0x1AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD27Cu;
        // 0x1ad280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD284u;
        goto label_1ad284;
    }
    ctx->pc = 0x1AD27Cu;
    {
        const bool branch_taken_0x1ad27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD27Cu;
        // 0x1ad280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad27c) {
            ctx->pc = 0x1AD350u;
            goto label_1ad350;
        }
    }
    ctx->pc = 0x1AD284u;
label_1ad284:
    // 0x1ad284: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ad284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1ad288:
    // 0x1ad288: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_1ad28c:
    if (ctx->pc == 0x1AD28Cu) {
        ctx->pc = 0x1AD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD288u;
        // 0x1ad28c: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD290u;
        goto label_1ad290;
    }
    ctx->pc = 0x1AD288u;
    {
        const bool branch_taken_0x1ad288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD288u;
        // 0x1ad28c: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad288) {
            ctx->pc = 0x1AD314u;
            goto label_1ad314;
        }
    }
    ctx->pc = 0x1AD290u;
label_1ad290:
    // 0x1ad290: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1ad294:
    if (ctx->pc == 0x1AD294u) {
        ctx->pc = 0x1AD298u;
        goto label_1ad298;
    }
    ctx->pc = 0x1AD290u;
    {
        const bool branch_taken_0x1ad290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad290) {
            ctx->pc = 0x1AD30Cu;
            goto label_1ad30c;
        }
    }
    ctx->pc = 0x1AD298u;
label_1ad298:
    // 0x1ad298: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1ad298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1ad29c:
    // 0x1ad29c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_1ad2a0:
    if (ctx->pc == 0x1AD2A0u) {
        ctx->pc = 0x1AD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD29Cu;
        // 0x1ad2a0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2A4u;
        goto label_1ad2a4;
    }
    ctx->pc = 0x1AD29Cu;
    {
        const bool branch_taken_0x1ad29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD29Cu;
        // 0x1ad2a0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad29c) {
            ctx->pc = 0x1AD308u;
            goto label_1ad308;
        }
    }
    ctx->pc = 0x1AD2A4u;
label_1ad2a4:
    // 0x1ad2a4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1ad2a8:
    if (ctx->pc == 0x1AD2A8u) {
        ctx->pc = 0x1AD2ACu;
        goto label_1ad2ac;
    }
    ctx->pc = 0x1AD2A4u;
    {
        const bool branch_taken_0x1ad2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad2a4) {
            ctx->pc = 0x1AD2E8u;
            goto label_1ad2e8;
        }
    }
    ctx->pc = 0x1AD2ACu;
label_1ad2ac:
    // 0x1ad2ac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ad2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ad2b0:
    // 0x1ad2b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ad2b4:
    if (ctx->pc == 0x1AD2B4u) {
        ctx->pc = 0x1AD2B8u;
        goto label_1ad2b8;
    }
    ctx->pc = 0x1AD2B0u;
    {
        const bool branch_taken_0x1ad2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad2b0) {
            ctx->pc = 0x1AD2C0u;
            goto label_1ad2c0;
        }
    }
    ctx->pc = 0x1AD2B8u;
label_1ad2b8:
    // 0x1ad2b8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1ad2bc:
    if (ctx->pc == 0x1AD2BCu) {
        ctx->pc = 0x1AD2C0u;
        goto label_1ad2c0;
    }
    ctx->pc = 0x1AD2B8u;
    {
        const bool branch_taken_0x1ad2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad2b8) {
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD2C0u;
label_1ad2c0:
    // 0x1ad2c0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ad2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ad2c4:
    // 0x1ad2c4: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ad2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ad2c8:
    // 0x1ad2c8: 0xc057040  jal         func_15C100
label_1ad2cc:
    if (ctx->pc == 0x1AD2CCu) {
        ctx->pc = 0x1AD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2C8u;
        // 0x1ad2cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2D0u;
        goto label_1ad2d0;
    }
    ctx->pc = 0x1AD2C8u;
    SET_GPR_U32(ctx, 31, 0x1AD2D0u);
    ctx->pc = 0x1AD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2C8u;
    // 0x1ad2cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AD2C8u, 0x1AD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2D0u;
label_1ad2d0:
    // 0x1ad2d0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ad2d4:
    // 0x1ad2d4: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x1ad2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_1ad2d8:
    // 0x1ad2d8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1ad2d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1ad2dc:
    // 0x1ad2dc: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1ad2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
label_1ad2e0:
    // 0x1ad2e0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1ad2e4:
    if (ctx->pc == 0x1AD2E4u) {
        ctx->pc = 0x1AD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2E0u;
        // 0x1ad2e4: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2E8u;
        goto label_1ad2e8;
    }
    ctx->pc = 0x1AD2E0u;
    {
        const bool branch_taken_0x1ad2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2E0u;
        // 0x1ad2e4: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2e0) {
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD2E8u;
label_1ad2e8:
    // 0x1ad2e8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ad2ec:
    // 0x1ad2ec: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ad2f0:
    // 0x1ad2f0: 0xc057040  jal         func_15C100
label_1ad2f4:
    if (ctx->pc == 0x1AD2F4u) {
        ctx->pc = 0x1AD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2F0u;
        // 0x1ad2f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2F8u;
        goto label_1ad2f8;
    }
    ctx->pc = 0x1AD2F0u;
    SET_GPR_U32(ctx, 31, 0x1AD2F8u);
    ctx->pc = 0x1AD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2F0u;
    // 0x1ad2f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AD2F0u, 0x1AD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2F8u;
label_1ad2f8:
    // 0x1ad2f8: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1ad2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_1ad2fc:
    // 0x1ad2fc: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1ad2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
label_1ad300:
    // 0x1ad300: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1ad304:
    if (ctx->pc == 0x1AD304u) {
        ctx->pc = 0x1AD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD300u;
        // 0x1ad304: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD308u;
        goto label_1ad308;
    }
    ctx->pc = 0x1AD300u;
    {
        const bool branch_taken_0x1ad300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD300u;
        // 0x1ad304: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad300) {
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD308u;
label_1ad308:
    // 0x1ad308: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ad308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1ad30c:
    // 0x1ad30c: 0x0  nop
    ctx->pc = 0x1ad30cu;
    // NOP
label_1ad310:
    // 0x1ad310: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ad310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1ad314:
    // 0x1ad314: 0x0  nop
    ctx->pc = 0x1ad314u;
    // NOP
label_1ad318:
    // 0x1ad318: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ad318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ad31c:
    // 0x1ad31c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ad31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ad320:
    // 0x1ad320: 0xc057040  jal         func_15C100
label_1ad324:
    if (ctx->pc == 0x1AD324u) {
        ctx->pc = 0x1AD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD320u;
        // 0x1ad324: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD328u;
        goto label_1ad328;
    }
    ctx->pc = 0x1AD320u;
    SET_GPR_U32(ctx, 31, 0x1AD328u);
    ctx->pc = 0x1AD324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD320u;
    // 0x1ad324: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AD320u, 0x1AD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD328u;
label_1ad328:
    // 0x1ad328: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x1ad328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_1ad32c:
    // 0x1ad32c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1ad32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1ad330:
    // 0x1ad330: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ad330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1ad334:
    // 0x1ad334: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ad334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ad338:
    // 0x1ad338: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ad338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ad33c:
    // 0x1ad33c: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1ad33cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ad340:
    // 0x1ad340: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1ad344:
    if (ctx->pc == 0x1AD344u) {
        ctx->pc = 0x1AD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD340u;
        // 0x1ad344: 0xac820680  sw          $v0, 0x680($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD348u;
        goto label_1ad348;
    }
    ctx->pc = 0x1AD340u;
    {
        const bool branch_taken_0x1ad340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD340u;
        // 0x1ad344: 0xac820680  sw          $v0, 0x680($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad340) {
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD348u;
label_1ad348:
    // 0x1ad348: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ad34c:
    if (ctx->pc == 0x1AD34Cu) {
        ctx->pc = 0x1AD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD348u;
        // 0x1ad34c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD350u;
        goto label_1ad350;
    }
    ctx->pc = 0x1AD348u;
    {
        const bool branch_taken_0x1ad348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD348u;
        // 0x1ad34c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad348) {
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD350u;
label_1ad350:
    // 0x1ad350: 0x8e2206d0  lw          $v0, 0x6D0($s1)
    ctx->pc = 0x1ad350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
label_1ad354:
    // 0x1ad354: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ad358:
    if (ctx->pc == 0x1AD358u) {
        ctx->pc = 0x1AD35Cu;
        goto label_1ad35c;
    }
    ctx->pc = 0x1AD354u;
    {
        const bool branch_taken_0x1ad354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad354) {
            ctx->pc = 0x1AD360u;
            goto label_1ad360;
        }
    }
    ctx->pc = 0x1AD35Cu;
label_1ad35c:
    // 0x1ad35c: 0xae3206cc  sw          $s2, 0x6CC($s1)
    ctx->pc = 0x1ad35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 18));
label_1ad360:
    // 0x1ad360: 0x8e2206d0  lw          $v0, 0x6D0($s1)
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
label_1ad364:
    // 0x1ad364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ad368:
    // 0x1ad368: 0xae2206d0  sw          $v0, 0x6D0($s1)
    ctx->pc = 0x1ad368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 2));
label_1ad36c:
    // 0x1ad36c: 0x0  nop
    ctx->pc = 0x1ad36cu;
    // NOP
label_1ad370:
    // 0x1ad370: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1ad370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1ad374:
    // 0x1ad374: 0x0  nop
    ctx->pc = 0x1ad374u;
    // NOP
label_1ad378:
    // 0x1ad378: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ad378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ad37c:
    // 0x1ad37c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ad380:
    // 0x1ad380: 0x1062ffbb  beq         $v1, $v0, . + 4 + (-0x45 << 2)
label_1ad384:
    if (ctx->pc == 0x1AD384u) {
        ctx->pc = 0x1AD388u;
        goto label_1ad388;
    }
    ctx->pc = 0x1AD380u;
    {
        const bool branch_taken_0x1ad380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad380) {
            ctx->pc = 0x1AD270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad270;
        }
    }
    ctx->pc = 0x1AD388u;
label_1ad388:
    // 0x1ad388: 0xc046458  jal         func_119160
label_1ad38c:
    if (ctx->pc == 0x1AD38Cu) {
        ctx->pc = 0x1AD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD388u;
        // 0x1ad38c: 0x8f848118  lw          $a0, -0x7EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD390u;
        goto label_1ad390;
    }
    ctx->pc = 0x1AD388u;
    SET_GPR_U32(ctx, 31, 0x1AD390u);
    ctx->pc = 0x1AD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD388u;
    // 0x1ad38c: 0x8f848118  lw          $a0, -0x7EE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AD388u, 0x1AD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD390u;
label_1ad390:
    // 0x1ad390: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1ad394:
    // 0x1ad394: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ad394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad398:
    // 0x1ad398: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ad398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ad39c:
    // 0x1ad39c: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ad39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_1ad3a0:
    // 0x1ad3a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ad3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ad3a4:
    // 0x1ad3a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1ad3a8:
    // 0x1ad3a8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ad3ac:
    // 0x1ad3ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ad3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ad3b0:
    // 0x1ad3b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad3b4:
    // 0x1ad3b4: 0xae2206d8  sw          $v0, 0x6D8($s1)
    ctx->pc = 0x1ad3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1752), GPR_U32(ctx, 2));
label_1ad3b8:
    // 0x1ad3b8: 0xc06223c  jal         func_1888F0
label_1ad3bc:
    if (ctx->pc == 0x1AD3BCu) {
        ctx->pc = 0x1AD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3B8u;
        // 0x1ad3bc: 0xae3107b0  sw          $s1, 0x7B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1968), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD3C0u;
        goto label_1ad3c0;
    }
    ctx->pc = 0x1AD3B8u;
    SET_GPR_U32(ctx, 31, 0x1AD3C0u);
    ctx->pc = 0x1AD3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3B8u;
    // 0x1ad3bc: 0xae3107b0  sw          $s1, 0x7B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1968), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AD3B8u, 0x1AD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3C0u;
label_1ad3c0:
    // 0x1ad3c0: 0xc063e14  jal         func_18F850
label_1ad3c4:
    if (ctx->pc == 0x1AD3C4u) {
        ctx->pc = 0x1AD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3C0u;
        // 0x1ad3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD3C8u;
        goto label_1ad3c8;
    }
    ctx->pc = 0x1AD3C0u;
    SET_GPR_U32(ctx, 31, 0x1AD3C8u);
    ctx->pc = 0x1AD3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD3C0u;
    // 0x1ad3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD3C0u, 0x1AD3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD3C8u;
label_1ad3c8:
    // 0x1ad3c8: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ad3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
label_1ad3cc:
    // 0x1ad3cc: 0xa22006c1  sb          $zero, 0x6C1($s1)
    ctx->pc = 0x1ad3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 0));
label_1ad3d0:
    // 0x1ad3d0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ad3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ad3d4:
    // 0x1ad3d4: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ad3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ad3d8:
    // 0x1ad3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ad3dc:
    if (ctx->pc == 0x1AD3DCu) {
        ctx->pc = 0x1AD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3D8u;
        // 0x1ad3dc: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD3E0u;
        goto label_1ad3e0;
    }
    ctx->pc = 0x1AD3D8u;
    {
        const bool branch_taken_0x1ad3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3D8u;
        // 0x1ad3dc: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3d8) {
            ctx->pc = 0x1AD3F0u;
            goto label_1ad3f0;
        }
    }
    ctx->pc = 0x1AD3E0u;
label_1ad3e0:
    // 0x1ad3e0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1ad3e4:
    // 0x1ad3e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad3e8:
    // 0x1ad3e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ad3ec:
    if (ctx->pc == 0x1AD3ECu) {
        ctx->pc = 0x1AD3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3E8u;
        // 0x1ad3ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD3F0u;
        goto label_1ad3f0;
    }
    ctx->pc = 0x1AD3E8u;
    {
        const bool branch_taken_0x1ad3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3E8u;
        // 0x1ad3ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3e8) {
            ctx->pc = 0x1AD3F8u;
            goto label_1ad3f8;
        }
    }
    ctx->pc = 0x1AD3F0u;
label_1ad3f0:
    // 0x1ad3f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ad3f4:
    // 0x1ad3f4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ad3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad3f8:
    // 0x1ad3f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad3fc:
    // 0x1ad3fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad400:
    // 0x1ad400: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad404:
    // 0x1ad404: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad408:
    // 0x1ad408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad40c:
    // 0x1ad40c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ad410:
    // 0x1ad410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad414:
    // 0x1ad414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad418:
    // 0x1ad418: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ad418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1ad41c:
    // 0x1ad41c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad41cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad420:
    // 0x1ad420: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ad420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ad424:
    // 0x1ad424: 0x0  nop
    ctx->pc = 0x1ad424u;
    // NOP
label_1ad428:
    // 0x1ad428: 0xae2206c4  sw          $v0, 0x6C4($s1)
    ctx->pc = 0x1ad428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 2));
label_1ad42c:
    // 0x1ad42c: 0xae2006b0  sw          $zero, 0x6B0($s1)
    ctx->pc = 0x1ad42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 0));
label_1ad430:
    // 0x1ad430: 0xae2006b4  sw          $zero, 0x6B4($s1)
    ctx->pc = 0x1ad430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
label_1ad434:
    // 0x1ad434: 0xae2006b8  sw          $zero, 0x6B8($s1)
    ctx->pc = 0x1ad434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 0));
label_1ad438:
    // 0x1ad438: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ad43c:
    // 0x1ad43c: 0xac400670  sw          $zero, 0x670($v0)
    ctx->pc = 0x1ad43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 0));
label_1ad440:
    // 0x1ad440: 0xc06b6e0  jal         func_1ADB80
label_1ad444:
    if (ctx->pc == 0x1AD444u) {
        ctx->pc = 0x1AD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD440u;
        // 0x1ad444: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD448u;
        goto label_1ad448;
    }
    ctx->pc = 0x1AD440u;
    SET_GPR_U32(ctx, 31, 0x1AD448u);
    ctx->pc = 0x1AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD440u;
    // 0x1ad444: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB80u, 0x1AD440u, 0x1AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD448u;
label_1ad448:
    // 0x1ad448: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ad44c:
    // 0x1ad44c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ad44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ad450:
    // 0x1ad450: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ad454:
    if (ctx->pc == 0x1AD454u) {
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD458u;
        goto label_1ad458;
    }
    ctx->pc = 0x1AD450u;
    {
        const bool branch_taken_0x1ad450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad450) {
            ctx->pc = 0x1AD438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad438;
        }
    }
    ctx->pc = 0x1AD458u;
label_1ad458:
    // 0x1ad458: 0xc058018  jal         func_160060
label_1ad45c:
    if (ctx->pc == 0x1AD45Cu) {
        ctx->pc = 0x1AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD458u;
        // 0x1ad45c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD460u;
        goto label_1ad460;
    }
    ctx->pc = 0x1AD458u;
    SET_GPR_U32(ctx, 31, 0x1AD460u);
    ctx->pc = 0x1AD45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD458u;
    // 0x1ad45c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AD458u, 0x1AD460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD460u;
label_1ad460:
    // 0x1ad460: 0xc06b6e0  jal         func_1ADB80
label_1ad464:
    if (ctx->pc == 0x1AD464u) {
        ctx->pc = 0x1AD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD460u;
        // 0x1ad464: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD468u;
        goto label_1ad468;
    }
    ctx->pc = 0x1AD460u;
    SET_GPR_U32(ctx, 31, 0x1AD468u);
    ctx->pc = 0x1AD464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD460u;
    // 0x1ad464: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADB80u, 0x1AD460u, 0x1AD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD468u;
label_1ad468:
    // 0x1ad468: 0xc063e14  jal         func_18F850
label_1ad46c:
    if (ctx->pc == 0x1AD46Cu) {
        ctx->pc = 0x1AD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD468u;
        // 0x1ad46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD470u;
        goto label_1ad470;
    }
    ctx->pc = 0x1AD468u;
    SET_GPR_U32(ctx, 31, 0x1AD470u);
    ctx->pc = 0x1AD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD468u;
    // 0x1ad46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD468u, 0x1AD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD470u;
label_1ad470:
    // 0x1ad470: 0x8e2406d8  lw          $a0, 0x6D8($s1)
    ctx->pc = 0x1ad470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
label_1ad474:
    // 0x1ad474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad478:
    // 0x1ad478: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad47c:
    // 0x1ad47c: 0x320f809  jalr        $t9
label_1ad480:
    if (ctx->pc == 0x1AD480u) {
        ctx->pc = 0x1AD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD47Cu;
        // 0x1ad480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD484u;
        goto label_1ad484;
    }
    ctx->pc = 0x1AD47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD484u);
        ctx->pc = 0x1AD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD47Cu;
        // 0x1ad480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD47Cu, 0x1AD484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD484u;
label_1ad484:
    // 0x1ad484: 0xae2007cc  sw          $zero, 0x7CC($s1)
    ctx->pc = 0x1ad484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1996), GPR_U32(ctx, 0));
label_1ad488:
    // 0x1ad488: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ad48c:
    // 0x1ad48c: 0xae2207d0  sw          $v0, 0x7D0($s1)
    ctx->pc = 0x1ad48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 2));
label_1ad490:
    // 0x1ad490: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ad490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ad494:
    // 0x1ad494: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ad494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad498:
    // 0x1ad498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad49c:
    // 0x1ad49c: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ad49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad4a0:
    // 0x1ad4a0: 0x262407bc  addiu       $a0, $s1, 0x7BC
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1980));
label_1ad4a4:
    // 0x1ad4a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad4a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ad4a8:
    // 0x1ad4a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ad4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ad4ac:
    // 0x1ad4ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad4acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad4b0:
    // 0x1ad4b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ad4b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ad4b4:
    // 0x1ad4b4: 0x0  nop
    ctx->pc = 0x1ad4b4u;
    // NOP
label_1ad4b8:
    // 0x1ad4b8: 0xae2307d4  sw          $v1, 0x7D4($s1)
    ctx->pc = 0x1ad4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2004), GPR_U32(ctx, 3));
label_1ad4bc:
    // 0x1ad4bc: 0xae2007d8  sw          $zero, 0x7D8($s1)
    ctx->pc = 0x1ad4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2008), GPR_U32(ctx, 0));
label_1ad4c0:
    // 0x1ad4c0: 0xae2207dc  sw          $v0, 0x7DC($s1)
    ctx->pc = 0x1ad4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 2));
label_1ad4c4:
    // 0x1ad4c4: 0xc069d00  jal         func_1A7400
label_1ad4c8:
    if (ctx->pc == 0x1AD4C8u) {
        ctx->pc = 0x1AD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4C4u;
        // 0x1ad4c8: 0xa22007e4  sb          $zero, 0x7E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4CCu;
        goto label_1ad4cc;
    }
    ctx->pc = 0x1AD4C4u;
    SET_GPR_U32(ctx, 31, 0x1AD4CCu);
    ctx->pc = 0x1AD4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4C4u;
    // 0x1ad4c8: 0xa22007e4  sb          $zero, 0x7E4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2020), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AD4C4u, 0x1AD4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4CCu;
label_1ad4cc:
    // 0x1ad4cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ad4d0:
    if (ctx->pc == 0x1AD4D0u) {
        ctx->pc = 0x1AD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4CCu;
        // 0x1ad4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4D4u;
        goto label_1ad4d4;
    }
    ctx->pc = 0x1AD4CCu;
    {
        const bool branch_taken_0x1ad4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4CCu;
        // 0x1ad4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4cc) {
            ctx->pc = 0x1AD4F4u;
            goto label_1ad4f4;
        }
    }
    ctx->pc = 0x1AD4D4u;
label_1ad4d4:
    // 0x1ad4d4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ad4d8:
    // 0x1ad4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad4dc:
    // 0x1ad4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4e0:
    // 0x1ad4e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ad4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ad4e4:
    // 0x1ad4e4: 0xc063e08  jal         func_18F820
label_1ad4e8:
    if (ctx->pc == 0x1AD4E8u) {
        ctx->pc = 0x1AD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4E4u;
        // 0x1ad4e8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4ECu;
        goto label_1ad4ec;
    }
    ctx->pc = 0x1AD4E4u;
    SET_GPR_U32(ctx, 31, 0x1AD4ECu);
    ctx->pc = 0x1AD4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4E4u;
    // 0x1ad4e8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD4E4u, 0x1AD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4ECu;
label_1ad4ec:
    // 0x1ad4ec: 0x10000171  b           . + 4 + (0x171 << 2)
label_1ad4f0:
    if (ctx->pc == 0x1AD4F0u) {
        ctx->pc = 0x1AD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4ECu;
        // 0x1ad4f0: 0x922306c0  lbu         $v1, 0x6C0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4F4u;
        goto label_1ad4f4;
    }
    ctx->pc = 0x1AD4ECu;
    {
        const bool branch_taken_0x1ad4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4ECu;
        // 0x1ad4f0: 0x922306c0  lbu         $v1, 0x6C0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4ec) {
            ctx->pc = 0x1ADAB4u;
            goto label_1adab4;
        }
    }
    ctx->pc = 0x1AD4F4u;
label_1ad4f4:
    // 0x1ad4f4: 0xc063e14  jal         func_18F850
label_1ad4f8:
    if (ctx->pc == 0x1AD4F8u) {
        ctx->pc = 0x1AD4FCu;
        goto label_1ad4fc;
    }
    ctx->pc = 0x1AD4F4u;
    SET_GPR_U32(ctx, 31, 0x1AD4FCu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD4F4u, 0x1AD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4FCu;
label_1ad4fc:
    // 0x1ad4fc: 0x8e2406d8  lw          $a0, 0x6D8($s1)
    ctx->pc = 0x1ad4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1752)));
label_1ad500:
    // 0x1ad500: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad504:
    // 0x1ad504: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ad504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ad508:
    // 0x1ad508: 0x320f809  jalr        $t9
label_1ad50c:
    if (ctx->pc == 0x1AD50Cu) {
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD510u;
        goto label_1ad510;
    }
    ctx->pc = 0x1AD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD510u);
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD508u, 0x1AD510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD510u;
label_1ad510:
    // 0x1ad510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad514:
    // 0x1ad514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad518:
    // 0x1ad518: 0xc063e14  jal         func_18F850
label_1ad51c:
    if (ctx->pc == 0x1AD51Cu) {
        ctx->pc = 0x1AD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD518u;
        // 0x1ad51c: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD520u;
        goto label_1ad520;
    }
    ctx->pc = 0x1AD518u;
    SET_GPR_U32(ctx, 31, 0x1AD520u);
    ctx->pc = 0x1AD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD518u;
    // 0x1ad51c: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD518u, 0x1AD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD520u;
label_1ad520:
    // 0x1ad520: 0x10000163  b           . + 4 + (0x163 << 2)
label_1ad524:
    if (ctx->pc == 0x1AD524u) {
        ctx->pc = 0x1AD528u;
        goto label_1ad528;
    }
    ctx->pc = 0x1AD520u;
    {
        const bool branch_taken_0x1ad520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad520) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD528u;
label_1ad528:
    // 0x1ad528: 0xc063e14  jal         func_18F850
label_1ad52c:
    if (ctx->pc == 0x1AD52Cu) {
        ctx->pc = 0x1AD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD528u;
        // 0x1ad52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD530u;
        goto label_1ad530;
    }
    ctx->pc = 0x1AD528u;
    SET_GPR_U32(ctx, 31, 0x1AD530u);
    ctx->pc = 0x1AD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD528u;
    // 0x1ad52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD528u, 0x1AD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD530u;
label_1ad530:
    // 0x1ad530: 0x1000015f  b           . + 4 + (0x15F << 2)
label_1ad534:
    if (ctx->pc == 0x1AD534u) {
        ctx->pc = 0x1AD538u;
        goto label_1ad538;
    }
    ctx->pc = 0x1AD530u;
    {
        const bool branch_taken_0x1ad530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad530) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD538u;
label_1ad538:
    // 0x1ad538: 0xc058018  jal         func_160060
label_1ad53c:
    if (ctx->pc == 0x1AD53Cu) {
        ctx->pc = 0x1AD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD538u;
        // 0x1ad53c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD540u;
        goto label_1ad540;
    }
    ctx->pc = 0x1AD538u;
    SET_GPR_U32(ctx, 31, 0x1AD540u);
    ctx->pc = 0x1AD53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD538u;
    // 0x1ad53c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AD538u, 0x1AD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD540u;
label_1ad540:
    // 0x1ad540: 0x8e2206b4  lw          $v0, 0x6B4($s1)
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_1ad544:
    // 0x1ad544: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ad544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ad548:
    // 0x1ad548: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad54c:
    // 0x1ad54c: 0xc06b6ec  jal         func_1ADBB0
label_1ad550:
    if (ctx->pc == 0x1AD550u) {
        ctx->pc = 0x1AD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD54Cu;
        // 0x1ad550: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD554u;
        goto label_1ad554;
    }
    ctx->pc = 0x1AD54Cu;
    SET_GPR_U32(ctx, 31, 0x1AD554u);
    ctx->pc = 0x1AD550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD54Cu;
    // 0x1ad550: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADBB0u, 0x1AD54Cu, 0x1AD554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD554u;
label_1ad554:
    // 0x1ad554: 0xc063e14  jal         func_18F850
label_1ad558:
    if (ctx->pc == 0x1AD558u) {
        ctx->pc = 0x1AD558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD554u;
        // 0x1ad558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD55Cu;
        goto label_1ad55c;
    }
    ctx->pc = 0x1AD554u;
    SET_GPR_U32(ctx, 31, 0x1AD55Cu);
    ctx->pc = 0x1AD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD554u;
    // 0x1ad558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD554u, 0x1AD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD55Cu;
label_1ad55c:
    // 0x1ad55c: 0x8e2206b4  lw          $v0, 0x6B4($s1)
    ctx->pc = 0x1ad55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1716)));
label_1ad560:
    // 0x1ad560: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ad560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ad564:
    // 0x1ad564: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad568:
    // 0x1ad568: 0xc06b724  jal         func_1ADC90
label_1ad56c:
    if (ctx->pc == 0x1AD56Cu) {
        ctx->pc = 0x1AD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD568u;
        // 0x1ad56c: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD570u;
        goto label_1ad570;
    }
    ctx->pc = 0x1AD568u;
    SET_GPR_U32(ctx, 31, 0x1AD570u);
    ctx->pc = 0x1AD56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD568u;
    // 0x1ad56c: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC90u, 0x1AD568u, 0x1AD570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD570u;
label_1ad570:
    // 0x1ad570: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
label_1ad574:
    if (ctx->pc == 0x1AD574u) {
        ctx->pc = 0x1AD578u;
        goto label_1ad578;
    }
    ctx->pc = 0x1AD570u;
    {
        const bool branch_taken_0x1ad570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad570) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD578u;
label_1ad578:
    // 0x1ad578: 0xae2006c8  sw          $zero, 0x6C8($s1)
    ctx->pc = 0x1ad578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 0));
label_1ad57c:
    // 0x1ad57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad580:
    // 0x1ad580: 0xae2006d4  sw          $zero, 0x6D4($s1)
    ctx->pc = 0x1ad580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1748), GPR_U32(ctx, 0));
label_1ad584:
    // 0x1ad584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad588:
    // 0x1ad588: 0xc063e14  jal         func_18F850
label_1ad58c:
    if (ctx->pc == 0x1AD58Cu) {
        ctx->pc = 0x1AD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD588u;
        // 0x1ad58c: 0xa22206c0  sb          $v0, 0x6C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD590u;
        goto label_1ad590;
    }
    ctx->pc = 0x1AD588u;
    SET_GPR_U32(ctx, 31, 0x1AD590u);
    ctx->pc = 0x1AD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD588u;
    // 0x1ad58c: 0xa22206c0  sb          $v0, 0x6C0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD588u, 0x1AD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD590u;
label_1ad590:
    // 0x1ad590: 0x10000147  b           . + 4 + (0x147 << 2)
label_1ad594:
    if (ctx->pc == 0x1AD594u) {
        ctx->pc = 0x1AD598u;
        goto label_1ad598;
    }
    ctx->pc = 0x1AD590u;
    {
        const bool branch_taken_0x1ad590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad590) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD598u;
label_1ad598:
    // 0x1ad598: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_1ad59c:
    // 0x1ad59c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ad5a0:
    // 0x1ad5a0: 0xae2306c8  sw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 3));
label_1ad5a4:
    // 0x1ad5a4: 0x8e2406d4  lw          $a0, 0x6D4($s1)
    ctx->pc = 0x1ad5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1748)));
label_1ad5a8:
    // 0x1ad5a8: 0x8e2306d0  lw          $v1, 0x6D0($s1)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
label_1ad5ac:
    // 0x1ad5ac: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ad5acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ad5b0:
    // 0x1ad5b0: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_1ad5b4:
    if (ctx->pc == 0x1AD5B4u) {
        ctx->pc = 0x1AD5B8u;
        goto label_1ad5b8;
    }
    ctx->pc = 0x1AD5B0u;
    {
        const bool branch_taken_0x1ad5b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5b0) {
            ctx->pc = 0x1AD65Cu;
            goto label_1ad65c;
        }
    }
    ctx->pc = 0x1AD5B8u;
label_1ad5b8:
    // 0x1ad5b8: 0x8e2506cc  lw          $a1, 0x6CC($s1)
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
label_1ad5bc:
    // 0x1ad5bc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1ad5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1ad5c0:
    // 0x1ad5c0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ad5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad5c4:
    // 0x1ad5c4: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_1ad5c8:
    // 0x1ad5c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ad5cc:
    // 0x1ad5cc: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1ad5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad5d0:
    // 0x1ad5d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad5d4:
    // 0x1ad5d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ad5d8:
    // 0x1ad5d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ad5dc:
    // 0x1ad5dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad5dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad5e0:
    // 0x1ad5e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ad5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1ad5e4:
    // 0x1ad5e4: 0x0  nop
    ctx->pc = 0x1ad5e4u;
    // NOP
label_1ad5e8:
    // 0x1ad5e8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1ad5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ad5ec:
    // 0x1ad5ec: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_1ad5f0:
    if (ctx->pc == 0x1AD5F0u) {
        ctx->pc = 0x1AD5F4u;
        goto label_1ad5f4;
    }
    ctx->pc = 0x1AD5ECu;
    {
        const bool branch_taken_0x1ad5ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5ec) {
            ctx->pc = 0x1AD65Cu;
            goto label_1ad65c;
        }
    }
    ctx->pc = 0x1AD5F4u;
label_1ad5f4:
    // 0x1ad5f4: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1ad5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad5f8:
    // 0x1ad5f8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1ad5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1ad5fc:
    // 0x1ad5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ad5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad600:
    // 0x1ad600: 0x0  nop
    ctx->pc = 0x1ad600u;
    // NOP
label_1ad604:
    // 0x1ad604: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ad608:
    // 0x1ad608: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ad608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ad60c:
    // 0x1ad60c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ad60cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1ad610:
    // 0x1ad610: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ad610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1ad614:
    // 0x1ad614: 0x0  nop
    ctx->pc = 0x1ad614u;
    // NOP
label_1ad618:
    // 0x1ad618: 0x0  nop
    ctx->pc = 0x1ad618u;
    // NOP
label_1ad61c:
    // 0x1ad61c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ad620:
    if (ctx->pc == 0x1AD620u) {
        ctx->pc = 0x1AD624u;
        goto label_1ad624;
    }
    ctx->pc = 0x1AD61Cu;
    {
        const bool branch_taken_0x1ad61c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ad61c) {
            ctx->pc = 0x1AD62Cu;
            goto label_1ad62c;
        }
    }
    ctx->pc = 0x1AD624u;
label_1ad624:
    // 0x1ad624: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ad628:
    if (ctx->pc == 0x1AD628u) {
        ctx->pc = 0x1AD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD624u;
        // 0x1ad628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD62Cu;
        goto label_1ad62c;
    }
    ctx->pc = 0x1AD624u;
    {
        const bool branch_taken_0x1ad624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD624u;
        // 0x1ad628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad624) {
            ctx->pc = 0x1AD648u;
            goto label_1ad648;
        }
    }
    ctx->pc = 0x1AD62Cu;
label_1ad62c:
    // 0x1ad62c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1ad62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ad630:
    // 0x1ad630: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ad630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad634:
    // 0x1ad634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ad638:
    // 0x1ad638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad63c:
    // 0x1ad63c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad640:
    // 0x1ad640: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ad640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ad644:
    // 0x1ad644: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1ad644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ad648:
    // 0x1ad648: 0xc055c50  jal         func_157140
label_1ad64c:
    if (ctx->pc == 0x1AD64Cu) {
        ctx->pc = 0x1AD650u;
        goto label_1ad650;
    }
    ctx->pc = 0x1AD648u;
    SET_GPR_U32(ctx, 31, 0x1AD650u);
    ctx->pc = 0x157140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157140u, 0x1AD648u, 0x1AD650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD650u;
label_1ad650:
    // 0x1ad650: 0x8e2306d4  lw          $v1, 0x6D4($s1)
    ctx->pc = 0x1ad650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1748)));
label_1ad654:
    // 0x1ad654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ad658:
    // 0x1ad658: 0xae2306d4  sw          $v1, 0x6D4($s1)
    ctx->pc = 0x1ad658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1748), GPR_U32(ctx, 3));
label_1ad65c:
    // 0x1ad65c: 0x8e2306c4  lw          $v1, 0x6C4($s1)
    ctx->pc = 0x1ad65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_1ad660:
    // 0x1ad660: 0x18600113  blez        $v1, . + 4 + (0x113 << 2)
label_1ad664:
    if (ctx->pc == 0x1AD664u) {
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD668u;
        goto label_1ad668;
    }
    ctx->pc = 0x1AD660u;
    {
        const bool branch_taken_0x1ad660 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad660) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD668u;
label_1ad668:
    // 0x1ad668: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad66c:
    // 0x1ad66c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1ad66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ad670:
    // 0x1ad670: 0xc06b718  jal         func_1ADC60
label_1ad674:
    if (ctx->pc == 0x1AD674u) {
        ctx->pc = 0x1AD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD670u;
        // 0x1ad674: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD678u;
        goto label_1ad678;
    }
    ctx->pc = 0x1AD670u;
    SET_GPR_U32(ctx, 31, 0x1AD678u);
    ctx->pc = 0x1AD674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD670u;
    // 0x1ad674: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC60u, 0x1AD670u, 0x1AD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD678u;
label_1ad678:
    // 0x1ad678: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1ad67c:
    if (ctx->pc == 0x1AD67Cu) {
        ctx->pc = 0x1AD680u;
        goto label_1ad680;
    }
    ctx->pc = 0x1AD678u;
    {
        const bool branch_taken_0x1ad678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad678) {
            ctx->pc = 0x1AD6F8u;
            goto label_1ad6f8;
        }
    }
    ctx->pc = 0x1AD680u;
label_1ad680:
    // 0x1ad680: 0xae3206b4  sw          $s2, 0x6B4($s1)
    ctx->pc = 0x1ad680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 18));
label_1ad684:
    // 0x1ad684: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x1ad684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_1ad688:
    // 0x1ad688: 0xae2206b8  sw          $v0, 0x6B8($s1)
    ctx->pc = 0x1ad688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 2));
label_1ad68c:
    // 0x1ad68c: 0x8e2306b8  lw          $v1, 0x6B8($s1)
    ctx->pc = 0x1ad68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_1ad690:
    // 0x1ad690: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x1ad690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1ad694:
    // 0x1ad694: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad698:
    // 0x1ad698: 0x24440670  addiu       $a0, $v0, 0x670
    ctx->pc = 0x1ad698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
label_1ad69c:
    // 0x1ad69c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1ad69cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1ad6a0:
    // 0x1ad6a0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ad6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad6a4:
    // 0x1ad6a4: 0x8c620670  lw          $v0, 0x670($v1)
    ctx->pc = 0x1ad6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1ad6a8:
    // 0x1ad6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ad6ac:
    // 0x1ad6ac: 0xc06b70c  jal         func_1ADC30
label_1ad6b0:
    if (ctx->pc == 0x1AD6B0u) {
        ctx->pc = 0x1AD6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6ACu;
        // 0x1ad6b0: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD6B4u;
        goto label_1ad6b4;
    }
    ctx->pc = 0x1AD6ACu;
    SET_GPR_U32(ctx, 31, 0x1AD6B4u);
    ctx->pc = 0x1AD6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6ACu;
    // 0x1ad6b0: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADC30u, 0x1AD6ACu, 0x1AD6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6B4u;
label_1ad6b4:
    // 0x1ad6b4: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ad6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
label_1ad6b8:
    // 0x1ad6b8: 0x8e2206b8  lw          $v0, 0x6B8($s1)
    ctx->pc = 0x1ad6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_1ad6bc:
    // 0x1ad6bc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ad6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ad6c0:
    // 0x1ad6c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ad6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad6c4:
    // 0x1ad6c4: 0x8c420670  lw          $v0, 0x670($v0)
    ctx->pc = 0x1ad6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1ad6c8:
    // 0x1ad6c8: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1ad6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ad6cc:
    // 0x1ad6cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ad6d0:
    if (ctx->pc == 0x1AD6D0u) {
        ctx->pc = 0x1AD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6CCu;
        // 0x1ad6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD6D4u;
        goto label_1ad6d4;
    }
    ctx->pc = 0x1AD6CCu;
    {
        const bool branch_taken_0x1ad6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6CCu;
        // 0x1ad6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6cc) {
            ctx->pc = 0x1AD6E8u;
            goto label_1ad6e8;
        }
    }
    ctx->pc = 0x1AD6D4u;
label_1ad6d4:
    // 0x1ad6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad6d8:
    // 0x1ad6d8: 0xc063e08  jal         func_18F820
label_1ad6dc:
    if (ctx->pc == 0x1AD6DCu) {
        ctx->pc = 0x1AD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6D8u;
        // 0x1ad6dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD6E0u;
        goto label_1ad6e0;
    }
    ctx->pc = 0x1AD6D8u;
    SET_GPR_U32(ctx, 31, 0x1AD6E0u);
    ctx->pc = 0x1AD6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD6D8u;
    // 0x1ad6dc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD6D8u, 0x1AD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6E0u;
label_1ad6e0:
    // 0x1ad6e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ad6e4:
    if (ctx->pc == 0x1AD6E4u) {
        ctx->pc = 0x1AD6E8u;
        goto label_1ad6e8;
    }
    ctx->pc = 0x1AD6E0u;
    {
        const bool branch_taken_0x1ad6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6e0) {
            ctx->pc = 0x1AD708u;
            goto label_1ad708;
        }
    }
    ctx->pc = 0x1AD6E8u;
label_1ad6e8:
    // 0x1ad6e8: 0xc063e14  jal         func_18F850
label_1ad6ec:
    if (ctx->pc == 0x1AD6ECu) {
        ctx->pc = 0x1AD6F0u;
        goto label_1ad6f0;
    }
    ctx->pc = 0x1AD6E8u;
    SET_GPR_U32(ctx, 31, 0x1AD6F0u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD6E8u, 0x1AD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6F0u;
label_1ad6f0:
    // 0x1ad6f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ad6f4:
    if (ctx->pc == 0x1AD6F4u) {
        ctx->pc = 0x1AD6F8u;
        goto label_1ad6f8;
    }
    ctx->pc = 0x1AD6F0u;
    {
        const bool branch_taken_0x1ad6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6f0) {
            ctx->pc = 0x1AD708u;
            goto label_1ad708;
        }
    }
    ctx->pc = 0x1AD6F8u;
label_1ad6f8:
    // 0x1ad6f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ad6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ad6fc:
    // 0x1ad6fc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ad6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ad700:
    // 0x1ad700: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1ad704:
    if (ctx->pc == 0x1AD704u) {
        ctx->pc = 0x1AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD700u;
        // 0x1ad704: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD708u;
        goto label_1ad708;
    }
    ctx->pc = 0x1AD700u;
    {
        const bool branch_taken_0x1ad700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD700u;
        // 0x1ad704: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad700) {
            ctx->pc = 0x1AD66Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad66c;
        }
    }
    ctx->pc = 0x1AD708u;
label_1ad708:
    // 0x1ad708: 0xc063dd4  jal         func_18F750
label_1ad70c:
    if (ctx->pc == 0x1AD70Cu) {
        ctx->pc = 0x1AD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD708u;
        // 0x1ad70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD710u;
        goto label_1ad710;
    }
    ctx->pc = 0x1AD708u;
    SET_GPR_U32(ctx, 31, 0x1AD710u);
    ctx->pc = 0x1AD70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD708u;
    // 0x1ad70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AD708u, 0x1AD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD710u;
label_1ad710:
    // 0x1ad710: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ad710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ad714:
    // 0x1ad714: 0x144300e6  bne         $v0, $v1, . + 4 + (0xE6 << 2)
label_1ad718:
    if (ctx->pc == 0x1AD718u) {
        ctx->pc = 0x1AD71Cu;
        goto label_1ad71c;
    }
    ctx->pc = 0x1AD714u;
    {
        const bool branch_taken_0x1ad714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ad714) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD71Cu;
label_1ad71c:
    // 0x1ad71c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ad71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ad720:
    // 0x1ad720: 0x8c6327a4  lw          $v1, 0x27A4($v1)
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10148)));
label_1ad724:
    // 0x1ad724: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
label_1ad728:
    if (ctx->pc == 0x1AD728u) {
        ctx->pc = 0x1AD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD724u;
        // 0x1ad728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD72Cu;
        goto label_1ad72c;
    }
    ctx->pc = 0x1AD724u;
    {
        const bool branch_taken_0x1ad724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD724u;
        // 0x1ad728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad724) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD72Cu;
label_1ad72c:
    // 0x1ad72c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ad730:
    // 0x1ad730: 0xc063e08  jal         func_18F820
label_1ad734:
    if (ctx->pc == 0x1AD734u) {
        ctx->pc = 0x1AD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD730u;
        // 0x1ad734: 0xae2006b4  sw          $zero, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD738u;
        goto label_1ad738;
    }
    ctx->pc = 0x1AD730u;
    SET_GPR_U32(ctx, 31, 0x1AD738u);
    ctx->pc = 0x1AD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD730u;
    // 0x1ad734: 0xae2006b4  sw          $zero, 0x6B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD730u, 0x1AD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD738u;
label_1ad738:
    // 0x1ad738: 0x100000dd  b           . + 4 + (0xDD << 2)
label_1ad73c:
    if (ctx->pc == 0x1AD73Cu) {
        ctx->pc = 0x1AD740u;
        goto label_1ad740;
    }
    ctx->pc = 0x1AD738u;
    {
        const bool branch_taken_0x1ad738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad738) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD740u;
label_1ad740:
    // 0x1ad740: 0xae2006ec  sw          $zero, 0x6EC($s1)
    ctx->pc = 0x1ad740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 0));
label_1ad744:
    // 0x1ad744: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ad744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ad748:
    // 0x1ad748: 0xae2006e4  sw          $zero, 0x6E4($s1)
    ctx->pc = 0x1ad748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 0));
label_1ad74c:
    // 0x1ad74c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad750:
    // 0x1ad750: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
label_1ad754:
    // 0x1ad754: 0x24a50a68  addiu       $a1, $a1, 0xA68
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2664));
label_1ad758:
    // 0x1ad758: 0xae2206e8  sw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ad758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 2));
label_1ad75c:
    // 0x1ad75c: 0xa22006f4  sb          $zero, 0x6F4($s1)
    ctx->pc = 0x1ad75cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1780), (uint8_t)GPR_U32(ctx, 0));
label_1ad760:
    // 0x1ad760: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ad760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ad764:
    // 0x1ad764: 0x8f86811c  lw          $a2, -0x7EE4($gp)
    ctx->pc = 0x1ad764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
label_1ad768:
    // 0x1ad768: 0xc06cf34  jal         func_1B3CD0
label_1ad76c:
    if (ctx->pc == 0x1AD76Cu) {
        ctx->pc = 0x1AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD768u;
        // 0x1ad76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD770u;
        goto label_1ad770;
    }
    ctx->pc = 0x1AD768u;
    SET_GPR_U32(ctx, 31, 0x1AD770u);
    ctx->pc = 0x1AD76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD768u;
    // 0x1ad76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AD768u, 0x1AD770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD770u;
label_1ad770:
    // 0x1ad770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad774:
    // 0x1ad774: 0xc069ac8  jal         func_1A6B20
label_1ad778:
    if (ctx->pc == 0x1AD778u) {
        ctx->pc = 0x1AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD774u;
        // 0x1ad778: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD77Cu;
        goto label_1ad77c;
    }
    ctx->pc = 0x1AD774u;
    SET_GPR_U32(ctx, 31, 0x1AD77Cu);
    ctx->pc = 0x1AD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD774u;
    // 0x1ad778: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AD774u, 0x1AD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD77Cu;
label_1ad77c:
    // 0x1ad77c: 0xa22006f5  sb          $zero, 0x6F5($s1)
    ctx->pc = 0x1ad77cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1781), (uint8_t)GPR_U32(ctx, 0));
label_1ad780:
    // 0x1ad780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad784:
    // 0x1ad784: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
label_1ad788:
    // 0x1ad788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ad788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ad78c:
    // 0x1ad78c: 0xae2206e4  sw          $v0, 0x6E4($s1)
    ctx->pc = 0x1ad78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 2));
label_1ad790:
    // 0x1ad790: 0xc069ac0  jal         func_1A6B00
label_1ad794:
    if (ctx->pc == 0x1AD794u) {
        ctx->pc = 0x1AD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD790u;
        // 0x1ad794: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD798u;
        goto label_1ad798;
    }
    ctx->pc = 0x1AD790u;
    SET_GPR_U32(ctx, 31, 0x1AD798u);
    ctx->pc = 0x1AD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD790u;
    // 0x1ad794: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AD790u, 0x1AD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD798u;
label_1ad798:
    // 0x1ad798: 0xc062114  jal         func_188450
label_1ad79c:
    if (ctx->pc == 0x1AD79Cu) {
        ctx->pc = 0x1AD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD798u;
        // 0x1ad79c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7A0u;
        goto label_1ad7a0;
    }
    ctx->pc = 0x1AD798u;
    SET_GPR_U32(ctx, 31, 0x1AD7A0u);
    ctx->pc = 0x1AD79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD798u;
    // 0x1ad79c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AD798u, 0x1AD7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7A0u;
label_1ad7a0:
    // 0x1ad7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad7a4:
    // 0x1ad7a4: 0xc0620fc  jal         func_1883F0
label_1ad7a8:
    if (ctx->pc == 0x1AD7A8u) {
        ctx->pc = 0x1AD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7A4u;
        // 0x1ad7a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7ACu;
        goto label_1ad7ac;
    }
    ctx->pc = 0x1AD7A4u;
    SET_GPR_U32(ctx, 31, 0x1AD7ACu);
    ctx->pc = 0x1AD7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7A4u;
    // 0x1ad7a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AD7A4u, 0x1AD7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7ACu;
label_1ad7ac:
    // 0x1ad7ac: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ad7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ad7b0:
    // 0x1ad7b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ad7b4:
    if (ctx->pc == 0x1AD7B4u) {
        ctx->pc = 0x1AD7B8u;
        goto label_1ad7b8;
    }
    ctx->pc = 0x1AD7B0u;
    {
        const bool branch_taken_0x1ad7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7b0) {
            ctx->pc = 0x1AD7CCu;
            goto label_1ad7cc;
        }
    }
    ctx->pc = 0x1AD7B8u;
label_1ad7b8:
    // 0x1ad7b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad7bc:
    // 0x1ad7bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ad7c0:
    // 0x1ad7c0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ad7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ad7c4:
    // 0x1ad7c4: 0x320f809  jalr        $t9
label_1ad7c8:
    if (ctx->pc == 0x1AD7C8u) {
        ctx->pc = 0x1AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C4u;
        // 0x1ad7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7CCu;
        goto label_1ad7cc;
    }
    ctx->pc = 0x1AD7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD7CCu);
        ctx->pc = 0x1AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C4u;
        // 0x1ad7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD7C4u, 0x1AD7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD7CCu;
label_1ad7cc:
    // 0x1ad7cc: 0xae2006c8  sw          $zero, 0x6C8($s1)
    ctx->pc = 0x1ad7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 0));
label_1ad7d0:
    // 0x1ad7d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ad7d4:
    // 0x1ad7d4: 0xae2007f8  sw          $zero, 0x7F8($s1)
    ctx->pc = 0x1ad7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 0));
label_1ad7d8:
    // 0x1ad7d8: 0xae2207fc  sw          $v0, 0x7FC($s1)
    ctx->pc = 0x1ad7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2044), GPR_U32(ctx, 2));
label_1ad7dc:
    // 0x1ad7dc: 0xae200800  sw          $zero, 0x800($s1)
    ctx->pc = 0x1ad7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 0));
label_1ad7e0:
    // 0x1ad7e0: 0x8e2407f4  lw          $a0, 0x7F4($s1)
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad7e4:
    // 0x1ad7e4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad7e8:
    // 0x1ad7e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ad7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ad7ec:
    // 0x1ad7ec: 0x320f809  jalr        $t9
label_1ad7f0:
    if (ctx->pc == 0x1AD7F0u) {
        ctx->pc = 0x1AD7F4u;
        goto label_1ad7f4;
    }
    ctx->pc = 0x1AD7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD7F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD7ECu, 0x1AD7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD7F4u;
label_1ad7f4:
    // 0x1ad7f4: 0x8e2506b8  lw          $a1, 0x6B8($s1)
    ctx->pc = 0x1ad7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_1ad7f8:
    // 0x1ad7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad7fc:
    // 0x1ad7fc: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x1ad7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1ad800:
    // 0x1ad800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad804:
    // 0x1ad804: 0x8e270670  lw          $a3, 0x670($s1)
    ctx->pc = 0x1ad804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ad808:
    // 0x1ad808: 0x8e2207f4  lw          $v0, 0x7F4($s1)
    ctx->pc = 0x1ad808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad80c:
    // 0x1ad80c: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1ad80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_1ad810:
    // 0x1ad810: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1ad810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_1ad814:
    // 0x1ad814: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1ad814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_1ad818:
    // 0x1ad818: 0x8e2207f4  lw          $v0, 0x7F4($s1)
    ctx->pc = 0x1ad818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad81c:
    // 0x1ad81c: 0xc063e14  jal         func_18F850
label_1ad820:
    if (ctx->pc == 0x1AD820u) {
        ctx->pc = 0x1AD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD81Cu;
        // 0x1ad820: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD824u;
        goto label_1ad824;
    }
    ctx->pc = 0x1AD81Cu;
    SET_GPR_U32(ctx, 31, 0x1AD824u);
    ctx->pc = 0x1AD820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD81Cu;
    // 0x1ad820: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD81Cu, 0x1AD824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD824u;
label_1ad824:
    // 0x1ad824: 0x8e2407f4  lw          $a0, 0x7F4($s1)
    ctx->pc = 0x1ad824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad828:
    // 0x1ad828: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad82c:
    // 0x1ad82c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ad82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ad830:
    // 0x1ad830: 0x320f809  jalr        $t9
label_1ad834:
    if (ctx->pc == 0x1AD834u) {
        ctx->pc = 0x1AD838u;
        goto label_1ad838;
    }
    ctx->pc = 0x1AD830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD830u, 0x1AD838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD838u;
label_1ad838:
    // 0x1ad838: 0xc069afc  jal         func_1A6BF0
label_1ad83c:
    if (ctx->pc == 0x1AD83Cu) {
        ctx->pc = 0x1AD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD838u;
        // 0x1ad83c: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD840u;
        goto label_1ad840;
    }
    ctx->pc = 0x1AD838u;
    SET_GPR_U32(ctx, 31, 0x1AD840u);
    ctx->pc = 0x1AD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD838u;
    // 0x1ad83c: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AD838u, 0x1AD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD840u;
label_1ad840:
    // 0x1ad840: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ad844:
    if (ctx->pc == 0x1AD844u) {
        ctx->pc = 0x1AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD840u;
        // 0x1ad844: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD848u;
        goto label_1ad848;
    }
    ctx->pc = 0x1AD840u;
    {
        const bool branch_taken_0x1ad840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD840u;
        // 0x1ad844: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad840) {
            ctx->pc = 0x1AD86Cu;
            goto label_1ad86c;
        }
    }
    ctx->pc = 0x1AD848u;
label_1ad848:
    // 0x1ad848: 0xc069ae8  jal         func_1A6BA0
label_1ad84c:
    if (ctx->pc == 0x1AD84Cu) {
        ctx->pc = 0x1AD850u;
        goto label_1ad850;
    }
    ctx->pc = 0x1AD848u;
    SET_GPR_U32(ctx, 31, 0x1AD850u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AD848u, 0x1AD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD850u;
label_1ad850:
    // 0x1ad850: 0x8e2307f4  lw          $v1, 0x7F4($s1)
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad854:
    // 0x1ad854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad858:
    // 0x1ad858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad85c:
    // 0x1ad85c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ad860:
    // 0x1ad860: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ad860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad864:
    // 0x1ad864: 0xc063e08  jal         func_18F820
label_1ad868:
    if (ctx->pc == 0x1AD868u) {
        ctx->pc = 0x1AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD864u;
        // 0x1ad868: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD86Cu;
        goto label_1ad86c;
    }
    ctx->pc = 0x1AD864u;
    SET_GPR_U32(ctx, 31, 0x1AD86Cu);
    ctx->pc = 0x1AD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD864u;
    // 0x1ad868: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD864u, 0x1AD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD86Cu;
label_1ad86c:
    // 0x1ad86c: 0x8e2307f8  lw          $v1, 0x7F8($s1)
    ctx->pc = 0x1ad86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2040)));
label_1ad870:
    // 0x1ad870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ad874:
    if (ctx->pc == 0x1AD874u) {
        ctx->pc = 0x1AD878u;
        goto label_1ad878;
    }
    ctx->pc = 0x1AD870u;
    {
        const bool branch_taken_0x1ad870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad870) {
            ctx->pc = 0x1AD880u;
            goto label_1ad880;
        }
    }
    ctx->pc = 0x1AD878u;
label_1ad878:
    // 0x1ad878: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1ad87c:
    if (ctx->pc == 0x1AD87Cu) {
        ctx->pc = 0x1AD880u;
        goto label_1ad880;
    }
    ctx->pc = 0x1AD878u;
    {
        const bool branch_taken_0x1ad878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad878) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD880u;
label_1ad880:
    // 0x1ad880: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ad880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ad884:
    // 0x1ad884: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1ad884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1ad888:
    // 0x1ad888: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ad888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1ad88c:
    // 0x1ad88c: 0x8e320800  lw          $s2, 0x800($s1)
    ctx->pc = 0x1ad88cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ad890:
    // 0x1ad890: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ad890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ad894:
    // 0x1ad894: 0x0  nop
    ctx->pc = 0x1ad894u;
    // NOP
label_1ad898:
    // 0x1ad898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad89c:
    // 0x1ad89c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad89cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ad8a0:
    // 0x1ad8a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad8a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad8a4:
    // 0x1ad8a4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1ad8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_1ad8a8:
    // 0x1ad8a8: 0x0  nop
    ctx->pc = 0x1ad8a8u;
    // NOP
label_1ad8ac:
    // 0x1ad8ac: 0x253001a  div         $zero, $s2, $s3
    ctx->pc = 0x1ad8acu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ad8b0:
    // 0x1ad8b0: 0x0  nop
    ctx->pc = 0x1ad8b0u;
    // NOP
label_1ad8b4:
    // 0x1ad8b4: 0x0  nop
    ctx->pc = 0x1ad8b4u;
    // NOP
label_1ad8b8:
    // 0x1ad8b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1ad8b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ad8bc:
    // 0x1ad8bc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1ad8c0:
    if (ctx->pc == 0x1AD8C0u) {
        ctx->pc = 0x1AD8C4u;
        goto label_1ad8c4;
    }
    ctx->pc = 0x1AD8BCu;
    {
        const bool branch_taken_0x1ad8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8bc) {
            ctx->pc = 0x1AD908u;
            goto label_1ad908;
        }
    }
    ctx->pc = 0x1AD8C4u;
label_1ad8c4:
    // 0x1ad8c4: 0x8e2307fc  lw          $v1, 0x7FC($s1)
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
label_1ad8c8:
    // 0x1ad8c8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1ad8cc:
    if (ctx->pc == 0x1AD8CCu) {
        ctx->pc = 0x1AD8D0u;
        goto label_1ad8d0;
    }
    ctx->pc = 0x1AD8C8u;
    {
        const bool branch_taken_0x1ad8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8c8) {
            ctx->pc = 0x1AD908u;
            goto label_1ad908;
        }
    }
    ctx->pc = 0x1AD8D0u;
label_1ad8d0:
    // 0x1ad8d0: 0xc062d50  jal         func_18B540
label_1ad8d4:
    if (ctx->pc == 0x1AD8D4u) {
        ctx->pc = 0x1AD8D8u;
        goto label_1ad8d8;
    }
    ctx->pc = 0x1AD8D0u;
    SET_GPR_U32(ctx, 31, 0x1AD8D8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AD8D0u, 0x1AD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8D8u;
label_1ad8d8:
    // 0x1ad8d8: 0x253001a  div         $zero, $s2, $s3
    ctx->pc = 0x1ad8d8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ad8dc:
    // 0x1ad8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ad8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8e0:
    // 0x1ad8e0: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_1ad8e4:
    // 0x1ad8e4: 0x240300d6  addiu       $v1, $zero, 0xD6
    ctx->pc = 0x1ad8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_1ad8e8:
    // 0x1ad8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8ec:
    // 0x1ad8ec: 0x3812  mflo        $a3
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1ad8f0:
    // 0x1ad8f0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1ad8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1ad8f4:
    // 0x1ad8f4: 0xc062b5c  jal         func_18AD70
label_1ad8f8:
    if (ctx->pc == 0x1AD8F8u) {
        ctx->pc = 0x1AD8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8F4u;
        // 0x1ad8f8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD8FCu;
        goto label_1ad8fc;
    }
    ctx->pc = 0x1AD8F4u;
    SET_GPR_U32(ctx, 31, 0x1AD8FCu);
    ctx->pc = 0x1AD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD8F4u;
    // 0x1ad8f8: 0x62280a  movz        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AD8F4u, 0x1AD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD8FCu;
label_1ad8fc:
    // 0x1ad8fc: 0x8e2307fc  lw          $v1, 0x7FC($s1)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
label_1ad900:
    // 0x1ad900: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ad904:
    // 0x1ad904: 0xae2307fc  sw          $v1, 0x7FC($s1)
    ctx->pc = 0x1ad904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2044), GPR_U32(ctx, 3));
label_1ad908:
    // 0x1ad908: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ad90c:
    // 0x1ad90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ad910:
    // 0x1ad910: 0x10000067  b           . + 4 + (0x67 << 2)
label_1ad914:
    if (ctx->pc == 0x1AD914u) {
        ctx->pc = 0x1AD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD910u;
        // 0x1ad914: 0xae230800  sw          $v1, 0x800($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD918u;
        goto label_1ad918;
    }
    ctx->pc = 0x1AD910u;
    {
        const bool branch_taken_0x1ad910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD910u;
        // 0x1ad914: 0xae230800  sw          $v1, 0x800($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad910) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD918u;
label_1ad918:
    // 0x1ad918: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ad91c:
    // 0x1ad91c: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ad91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1ad920:
    // 0x1ad920: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ad924:
    if (ctx->pc == 0x1AD924u) {
        ctx->pc = 0x1AD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD920u;
        // 0x1ad924: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD928u;
        goto label_1ad928;
    }
    ctx->pc = 0x1AD920u;
    {
        const bool branch_taken_0x1ad920 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD920u;
        // 0x1ad924: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad920) {
            ctx->pc = 0x1AD930u;
            goto label_1ad930;
        }
    }
    ctx->pc = 0x1AD928u;
label_1ad928:
    // 0x1ad928: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ad92c:
    if (ctx->pc == 0x1AD92Cu) {
        ctx->pc = 0x1AD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD928u;
        // 0x1ad92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD930u;
        goto label_1ad930;
    }
    ctx->pc = 0x1AD928u;
    {
        const bool branch_taken_0x1ad928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD928u;
        // 0x1ad92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad928) {
            ctx->pc = 0x1AD948u;
            goto label_1ad948;
        }
    }
    ctx->pc = 0x1AD930u;
label_1ad930:
    // 0x1ad930: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ad930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad934:
    // 0x1ad934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ad938:
    // 0x1ad938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad93c:
    // 0x1ad93c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad940:
    // 0x1ad940: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ad944:
    // 0x1ad944: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1ad944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ad948:
    // 0x1ad948: 0xc055c40  jal         func_157100
label_1ad94c:
    if (ctx->pc == 0x1AD94Cu) {
        ctx->pc = 0x1AD950u;
        goto label_1ad950;
    }
    ctx->pc = 0x1AD948u;
    SET_GPR_U32(ctx, 31, 0x1AD950u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AD948u, 0x1AD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD950u;
label_1ad950:
    // 0x1ad950: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_1ad954:
    // 0x1ad954: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ad958:
    // 0x1ad958: 0x1c600055  bgtz        $v1, . + 4 + (0x55 << 2)
label_1ad95c:
    if (ctx->pc == 0x1AD95Cu) {
        ctx->pc = 0x1AD95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD958u;
        // 0x1ad95c: 0xae2306c8  sw          $v1, 0x6C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD960u;
        goto label_1ad960;
    }
    ctx->pc = 0x1AD958u;
    {
        const bool branch_taken_0x1ad958 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AD95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD958u;
        // 0x1ad95c: 0xae2306c8  sw          $v1, 0x6C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad958) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD960u;
label_1ad960:
    // 0x1ad960: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1ad964:
    // 0x1ad964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad968:
    // 0x1ad968: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ad96c:
    // 0x1ad96c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ad970:
    // 0x1ad970: 0xc063e08  jal         func_18F820
label_1ad974:
    if (ctx->pc == 0x1AD974u) {
        ctx->pc = 0x1AD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD970u;
        // 0x1ad974: 0xae2206b4  sw          $v0, 0x6B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD978u;
        goto label_1ad978;
    }
    ctx->pc = 0x1AD970u;
    SET_GPR_U32(ctx, 31, 0x1AD978u);
    ctx->pc = 0x1AD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD970u;
    // 0x1ad974: 0xae2206b4  sw          $v0, 0x6B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD970u, 0x1AD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD978u;
label_1ad978:
    // 0x1ad978: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1ad97c:
    if (ctx->pc == 0x1AD97Cu) {
        ctx->pc = 0x1AD980u;
        goto label_1ad980;
    }
    ctx->pc = 0x1AD978u;
    {
        const bool branch_taken_0x1ad978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad978) {
            ctx->pc = 0x1ADAB0u;
            goto label_1adab0;
        }
    }
    ctx->pc = 0x1AD980u;
label_1ad980:
    // 0x1ad980: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ad980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
label_1ad984:
    // 0x1ad984: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ad988:
    // 0x1ad988: 0xa22006c1  sb          $zero, 0x6C1($s1)
    ctx->pc = 0x1ad988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 0));
label_1ad98c:
    // 0x1ad98c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad990:
    // 0x1ad990: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1ad994:
    // 0x1ad994: 0x24a50a68  addiu       $a1, $a1, 0xA68
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2664));
label_1ad998:
    // 0x1ad998: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ad998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad99c:
    // 0x1ad99c: 0xae2006ec  sw          $zero, 0x6EC($s1)
    ctx->pc = 0x1ad99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 0));
label_1ad9a0:
    // 0x1ad9a0: 0xae2006e4  sw          $zero, 0x6E4($s1)
    ctx->pc = 0x1ad9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 0));
label_1ad9a4:
    // 0x1ad9a4: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
label_1ad9a8:
    // 0x1ad9a8: 0xae2206e8  sw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ad9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 2));
label_1ad9ac:
    // 0x1ad9ac: 0xa22006f4  sb          $zero, 0x6F4($s1)
    ctx->pc = 0x1ad9acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1780), (uint8_t)GPR_U32(ctx, 0));
label_1ad9b0:
    // 0x1ad9b0: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ad9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ad9b4:
    // 0x1ad9b4: 0x8f86811c  lw          $a2, -0x7EE4($gp)
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
label_1ad9b8:
    // 0x1ad9b8: 0xc06cf34  jal         func_1B3CD0
label_1ad9bc:
    if (ctx->pc == 0x1AD9BCu) {
        ctx->pc = 0x1AD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9B8u;
        // 0x1ad9bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9C0u;
        goto label_1ad9c0;
    }
    ctx->pc = 0x1AD9B8u;
    SET_GPR_U32(ctx, 31, 0x1AD9C0u);
    ctx->pc = 0x1AD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9B8u;
    // 0x1ad9bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AD9B8u, 0x1AD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9C0u;
label_1ad9c0:
    // 0x1ad9c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad9c4:
    // 0x1ad9c4: 0xc069ac8  jal         func_1A6B20
label_1ad9c8:
    if (ctx->pc == 0x1AD9C8u) {
        ctx->pc = 0x1AD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9C4u;
        // 0x1ad9c8: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9CCu;
        goto label_1ad9cc;
    }
    ctx->pc = 0x1AD9C4u;
    SET_GPR_U32(ctx, 31, 0x1AD9CCu);
    ctx->pc = 0x1AD9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9C4u;
    // 0x1ad9c8: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AD9C4u, 0x1AD9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9CCu;
label_1ad9cc:
    // 0x1ad9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad9d0:
    // 0x1ad9d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad9d4:
    // 0x1ad9d4: 0xa22306f5  sb          $v1, 0x6F5($s1)
    ctx->pc = 0x1ad9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1781), (uint8_t)GPR_U32(ctx, 3));
label_1ad9d8:
    // 0x1ad9d8: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
label_1ad9dc:
    // 0x1ad9dc: 0xae2206e4  sw          $v0, 0x6E4($s1)
    ctx->pc = 0x1ad9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 2));
label_1ad9e0:
    // 0x1ad9e0: 0x8e330670  lw          $s3, 0x670($s1)
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ad9e4:
    // 0x1ad9e4: 0x8e320690  lw          $s2, 0x690($s1)
    ctx->pc = 0x1ad9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1ad9e8:
    // 0x1ad9e8: 0x16720008  bne         $s3, $s2, . + 4 + (0x8 << 2)
label_1ad9ec:
    if (ctx->pc == 0x1AD9ECu) {
        ctx->pc = 0x1AD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9E8u;
        // 0x1ad9ec: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9F0u;
        goto label_1ad9f0;
    }
    ctx->pc = 0x1AD9E8u;
    {
        const bool branch_taken_0x1ad9e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9E8u;
        // 0x1ad9ec: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9e8) {
            ctx->pc = 0x1ADA0Cu;
            goto label_1ada0c;
        }
    }
    ctx->pc = 0x1AD9F0u;
label_1ad9f0:
    // 0x1ad9f0: 0xc062114  jal         func_188450
label_1ad9f4:
    if (ctx->pc == 0x1AD9F4u) {
        ctx->pc = 0x1AD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9F0u;
        // 0x1ad9f4: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9F8u;
        goto label_1ad9f8;
    }
    ctx->pc = 0x1AD9F0u;
    SET_GPR_U32(ctx, 31, 0x1AD9F8u);
    ctx->pc = 0x1AD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9F0u;
    // 0x1ad9f4: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AD9F0u, 0x1AD9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9F8u;
label_1ad9f8:
    // 0x1ad9f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad9fc:
    // 0x1ad9fc: 0xc0620fc  jal         func_1883F0
label_1ada00:
    if (ctx->pc == 0x1ADA00u) {
        ctx->pc = 0x1ADA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9FCu;
        // 0x1ada00: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA04u;
        goto label_1ada04;
    }
    ctx->pc = 0x1AD9FCu;
    SET_GPR_U32(ctx, 31, 0x1ADA04u);
    ctx->pc = 0x1ADA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD9FCu;
    // 0x1ada00: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AD9FCu, 0x1ADA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA04u;
label_1ada04:
    // 0x1ada04: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ada08:
    if (ctx->pc == 0x1ADA08u) {
        ctx->pc = 0x1ADA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA04u;
        // 0x1ada08: 0x8e2406dc  lw          $a0, 0x6DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA0Cu;
        goto label_1ada0c;
    }
    ctx->pc = 0x1ADA04u;
    {
        const bool branch_taken_0x1ada04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA04u;
        // 0x1ada08: 0x8e2406dc  lw          $a0, 0x6DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada04) {
            ctx->pc = 0x1ADA34u;
            goto label_1ada34;
        }
    }
    ctx->pc = 0x1ADA0Cu;
label_1ada0c:
    // 0x1ada0c: 0xc062114  jal         func_188450
label_1ada10:
    if (ctx->pc == 0x1ADA10u) {
        ctx->pc = 0x1ADA14u;
        goto label_1ada14;
    }
    ctx->pc = 0x1ADA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA14u);
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1ADA0Cu, 0x1ADA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA14u;
label_1ada14:
    // 0x1ada14: 0x253082a  slt         $at, $s2, $s3
    ctx->pc = 0x1ada14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1ada18:
    // 0x1ada18: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1ada1c:
    if (ctx->pc == 0x1ADA1Cu) {
        ctx->pc = 0x1ADA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA18u;
        // 0x1ada1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA20u;
        goto label_1ada20;
    }
    ctx->pc = 0x1ADA18u;
    {
        const bool branch_taken_0x1ada18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA18u;
        // 0x1ada1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada18) {
            ctx->pc = 0x1ADA24u;
            goto label_1ada24;
        }
    }
    ctx->pc = 0x1ADA20u;
label_1ada20:
    // 0x1ada20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ada24:
    // 0x1ada24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ada24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ada28:
    // 0x1ada28: 0xc0620fc  jal         func_1883F0
label_1ada2c:
    if (ctx->pc == 0x1ADA2Cu) {
        ctx->pc = 0x1ADA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA28u;
        // 0x1ada2c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA30u;
        goto label_1ada30;
    }
    ctx->pc = 0x1ADA28u;
    SET_GPR_U32(ctx, 31, 0x1ADA30u);
    ctx->pc = 0x1ADA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA28u;
    // 0x1ada2c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1ADA28u, 0x1ADA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA30u;
label_1ada30:
    // 0x1ada30: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ada30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ada34:
    // 0x1ada34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ada38:
    if (ctx->pc == 0x1ADA38u) {
        ctx->pc = 0x1ADA3Cu;
        goto label_1ada3c;
    }
    ctx->pc = 0x1ADA34u;
    {
        const bool branch_taken_0x1ada34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ada34) {
            ctx->pc = 0x1ADA50u;
            goto label_1ada50;
        }
    }
    ctx->pc = 0x1ADA3Cu;
label_1ada3c:
    // 0x1ada3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ada40:
    // 0x1ada40: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ada44:
    // 0x1ada44: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ada44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ada48:
    // 0x1ada48: 0x320f809  jalr        $t9
label_1ada4c:
    if (ctx->pc == 0x1ADA4Cu) {
        ctx->pc = 0x1ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA48u;
        // 0x1ada4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA50u;
        goto label_1ada50;
    }
    ctx->pc = 0x1ADA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ADA50u);
        ctx->pc = 0x1ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA48u;
        // 0x1ada4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA48u, 0x1ADA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADA50u;
label_1ada50:
    // 0x1ada50: 0xc063e14  jal         func_18F850
label_1ada54:
    if (ctx->pc == 0x1ADA54u) {
        ctx->pc = 0x1ADA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA50u;
        // 0x1ada54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA58u;
        goto label_1ada58;
    }
    ctx->pc = 0x1ADA50u;
    SET_GPR_U32(ctx, 31, 0x1ADA58u);
    ctx->pc = 0x1ADA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA50u;
    // 0x1ada54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1ADA50u, 0x1ADA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA58u;
label_1ada58:
    // 0x1ada58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ada5c:
    // 0x1ada5c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ada60:
    // 0x1ada60: 0xae2307b4  sw          $v1, 0x7B4($s1)
    ctx->pc = 0x1ada60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1972), GPR_U32(ctx, 3));
label_1ada64:
    // 0x1ada64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ada64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ada68:
    // 0x1ada68: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ada68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ada6c:
    // 0x1ada6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ada6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ada70:
    // 0x1ada70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ada70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ada74:
    // 0x1ada74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ada74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ada78:
    // 0x1ada78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ada78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ada7c:
    // 0x1ada7c: 0x0  nop
    ctx->pc = 0x1ada7cu;
    // NOP
label_1ada80:
    // 0x1ada80: 0xae2207b8  sw          $v0, 0x7B8($s1)
    ctx->pc = 0x1ada80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 2));
label_1ada84:
    // 0x1ada84: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ada88:
    // 0x1ada88: 0xc054660  jal         func_151980
label_1ada8c:
    if (ctx->pc == 0x1ADA8Cu) {
        ctx->pc = 0x1ADA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA88u;
        // 0x1ada8c: 0x262407a0  addiu       $a0, $s1, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA90u;
        goto label_1ada90;
    }
    ctx->pc = 0x1ADA88u;
    SET_GPR_U32(ctx, 31, 0x1ADA90u);
    ctx->pc = 0x1ADA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA88u;
    // 0x1ada8c: 0x262407a0  addiu       $a0, $s1, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1ADA88u, 0x1ADA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA90u;
label_1ada90:
    // 0x1ada90: 0xc069ae8  jal         func_1A6BA0
label_1ada94:
    if (ctx->pc == 0x1ADA94u) {
        ctx->pc = 0x1ADA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA90u;
        // 0x1ada94: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA98u;
        goto label_1ada98;
    }
    ctx->pc = 0x1ADA90u;
    SET_GPR_U32(ctx, 31, 0x1ADA98u);
    ctx->pc = 0x1ADA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA90u;
    // 0x1ada94: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1ADA90u, 0x1ADA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA98u;
label_1ada98:
    // 0x1ada98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ada98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ada9c:
    // 0x1ada9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adaa0:
    // 0x1adaa0: 0xc063e08  jal         func_18F820
label_1adaa4:
    if (ctx->pc == 0x1ADAA4u) {
        ctx->pc = 0x1ADAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAA0u;
        // 0x1adaa4: 0xa22506c1  sb          $a1, 0x6C1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAA8u;
        goto label_1adaa8;
    }
    ctx->pc = 0x1ADAA0u;
    SET_GPR_U32(ctx, 31, 0x1ADAA8u);
    ctx->pc = 0x1ADAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAA0u;
    // 0x1adaa4: 0xa22506c1  sb          $a1, 0x6C1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1ADAA0u, 0x1ADAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAA8u;
label_1adaa8:
    // 0x1adaa8: 0x1000fe48  b           . + 4 + (-0x1B8 << 2)
label_1adaac:
    if (ctx->pc == 0x1ADAACu) {
        ctx->pc = 0x1ADAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAA8u;
        // 0x1adaac: 0xa22006c0  sb          $zero, 0x6C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAB0u;
        goto label_1adab0;
    }
    ctx->pc = 0x1ADAA8u;
    {
        const bool branch_taken_0x1adaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAA8u;
        // 0x1adaac: 0xa22006c0  sb          $zero, 0x6C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adaa8) {
            ctx->pc = 0x1AD3CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad3cc;
        }
    }
    ctx->pc = 0x1ADAB0u;
label_1adab0:
    // 0x1adab0: 0x922306c0  lbu         $v1, 0x6C0($s1)
    ctx->pc = 0x1adab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1728)));
label_1adab4:
    // 0x1adab4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1adab8:
    if (ctx->pc == 0x1ADAB8u) {
        ctx->pc = 0x1ADABCu;
        goto label_1adabc;
    }
    ctx->pc = 0x1ADAB4u;
    {
        const bool branch_taken_0x1adab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adab4) {
            ctx->pc = 0x1ADAF8u;
            goto label_1adaf8;
        }
    }
    ctx->pc = 0x1ADABCu;
label_1adabc:
    // 0x1adabc: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1adabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1adac0:
    // 0x1adac0: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1adac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_1adac4:
    // 0x1adac4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1adac8:
    if (ctx->pc == 0x1ADAC8u) {
        ctx->pc = 0x1ADACCu;
        goto label_1adacc;
    }
    ctx->pc = 0x1ADAC4u;
    {
        const bool branch_taken_0x1adac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adac4) {
            ctx->pc = 0x1ADAF8u;
            goto label_1adaf8;
        }
    }
    ctx->pc = 0x1ADACCu;
label_1adacc:
    // 0x1adacc: 0x8e2306c4  lw          $v1, 0x6C4($s1)
    ctx->pc = 0x1adaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_1adad0:
    // 0x1adad0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1adad4:
    // 0x1adad4: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1adad8:
    if (ctx->pc == 0x1ADAD8u) {
        ctx->pc = 0x1ADAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAD4u;
        // 0x1adad8: 0xae2306c4  sw          $v1, 0x6C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADADCu;
        goto label_1adadc;
    }
    ctx->pc = 0x1ADAD4u;
    {
        const bool branch_taken_0x1adad4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1ADAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAD4u;
        // 0x1adad8: 0xae2306c4  sw          $v1, 0x6C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adad4) {
            ctx->pc = 0x1ADAF8u;
            goto label_1adaf8;
        }
    }
    ctx->pc = 0x1ADADCu;
label_1adadc:
    // 0x1adadc: 0xae2006c4  sw          $zero, 0x6C4($s1)
    ctx->pc = 0x1adadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 0));
label_1adae0:
    // 0x1adae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adae4:
    // 0x1adae4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1adae8:
    // 0x1adae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adaec:
    // 0x1adaec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1adaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1adaf0:
    // 0x1adaf0: 0xc063e08  jal         func_18F820
label_1adaf4:
    if (ctx->pc == 0x1ADAF4u) {
        ctx->pc = 0x1ADAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAF0u;
        // 0x1adaf4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAF8u;
        goto label_1adaf8;
    }
    ctx->pc = 0x1ADAF0u;
    SET_GPR_U32(ctx, 31, 0x1ADAF8u);
    ctx->pc = 0x1ADAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAF0u;
    // 0x1adaf4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1ADAF0u, 0x1ADAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAF8u;
label_1adaf8:
    // 0x1adaf8: 0x922306c1  lbu         $v1, 0x6C1($s1)
    ctx->pc = 0x1adaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1729)));
label_1adafc:
    // 0x1adafc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1adb00:
    if (ctx->pc == 0x1ADB00u) {
        ctx->pc = 0x1ADB04u;
        goto label_1adb04;
    }
    ctx->pc = 0x1ADAFCu;
    {
        const bool branch_taken_0x1adafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adafc) {
            ctx->pc = 0x1ADB44u;
            goto label_1adb44;
        }
    }
    ctx->pc = 0x1ADB04u;
label_1adb04:
    // 0x1adb04: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1adb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1adb08:
    // 0x1adb08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1adb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adb0c:
    // 0x1adb0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1adb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1adb10:
    // 0x1adb10: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1adb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1adb14:
    // 0x1adb14: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1adb14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_1adb18:
    // 0x1adb18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1adb1c:
    if (ctx->pc == 0x1ADB1Cu) {
        ctx->pc = 0x1ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB18u;
        // 0x1adb1c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB20u;
        goto label_1adb20;
    }
    ctx->pc = 0x1ADB18u;
    {
        const bool branch_taken_0x1adb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB18u;
        // 0x1adb1c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb18) {
            ctx->pc = 0x1ADB28u;
            goto label_1adb28;
        }
    }
    ctx->pc = 0x1ADB20u;
label_1adb20:
    // 0x1adb20: 0x8e2406c4  lw          $a0, 0x6C4($s1)
    ctx->pc = 0x1adb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
label_1adb24:
    // 0x1adb24: 0x0  nop
    ctx->pc = 0x1adb24u;
    // NOP
label_1adb28:
    // 0x1adb28: 0x8e250690  lw          $a1, 0x690($s1)
    ctx->pc = 0x1adb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1adb2c:
    // 0x1adb2c: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1adb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1adb30:
    // 0x1adb30: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1adb34:
    // 0x1adb34: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1adb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1adb38:
    // 0x1adb38: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1adb38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_1adb3c:
    // 0x1adb3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1adb40:
    if (ctx->pc == 0x1ADB40u) {
        ctx->pc = 0x1ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB3Cu;
        // 0x1adb40: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB44u;
        goto label_1adb44;
    }
    ctx->pc = 0x1ADB3Cu;
    {
        const bool branch_taken_0x1adb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB3Cu;
        // 0x1adb40: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb3c) {
            ctx->pc = 0x1ADB4Cu;
            goto label_1adb4c;
        }
    }
    ctx->pc = 0x1ADB44u;
label_1adb44:
    // 0x1adb44: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1adb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
label_1adb48:
    // 0x1adb48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1adb48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1adb4c:
    // 0x1adb4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1adb50:
    // 0x1adb50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1adb50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1adb54:
    // 0x1adb54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1adb54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1adb58:
    // 0x1adb58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1adb58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1adb5c:
    // 0x1adb5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1adb5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1adb60:
    // 0x1adb60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1adb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1adb64:
    // 0x1adb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1adb68:
    // 0x1adb68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1adb6c:
    // 0x1adb6c: 0x3e00008  jr          $ra
label_1adb70:
    if (ctx->pc == 0x1ADB70u) {
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB6Cu;
        // 0x1adb70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB74u;
        goto label_fallthrough_0x1adb6c;
    }
    ctx->pc = 0x1ADB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB6Cu;
        // 0x1adb70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1adb6c:
    ctx->pc = 0x1ADB74u;
}
