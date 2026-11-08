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

// Function: FUN_001e9fc0
// Address: 0x1e9fc0 - 0x1ea824
void FUN_001e9fc0_0x1e9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9fc0_0x1e9fc0");
#endif

    switch (ctx->pc) {
        case 0x1e9fc0u: goto label_1e9fc0;
        case 0x1e9fc4u: goto label_1e9fc4;
        case 0x1e9fc8u: goto label_1e9fc8;
        case 0x1e9fccu: goto label_1e9fcc;
        case 0x1e9fd0u: goto label_1e9fd0;
        case 0x1e9fd4u: goto label_1e9fd4;
        case 0x1e9fd8u: goto label_1e9fd8;
        case 0x1e9fdcu: goto label_1e9fdc;
        case 0x1e9fe0u: goto label_1e9fe0;
        case 0x1e9fe4u: goto label_1e9fe4;
        case 0x1e9fe8u: goto label_1e9fe8;
        case 0x1e9fecu: goto label_1e9fec;
        case 0x1e9ff0u: goto label_1e9ff0;
        case 0x1e9ff4u: goto label_1e9ff4;
        case 0x1e9ff8u: goto label_1e9ff8;
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea000u: goto label_1ea000;
        case 0x1ea004u: goto label_1ea004;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea010u: goto label_1ea010;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea01cu: goto label_1ea01c;
        case 0x1ea020u: goto label_1ea020;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea028u: goto label_1ea028;
        case 0x1ea02cu: goto label_1ea02c;
        case 0x1ea030u: goto label_1ea030;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea03cu: goto label_1ea03c;
        case 0x1ea040u: goto label_1ea040;
        case 0x1ea044u: goto label_1ea044;
        case 0x1ea048u: goto label_1ea048;
        case 0x1ea04cu: goto label_1ea04c;
        case 0x1ea050u: goto label_1ea050;
        case 0x1ea054u: goto label_1ea054;
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea05cu: goto label_1ea05c;
        case 0x1ea060u: goto label_1ea060;
        case 0x1ea064u: goto label_1ea064;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea06cu: goto label_1ea06c;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea074u: goto label_1ea074;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea07cu: goto label_1ea07c;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea084u: goto label_1ea084;
        case 0x1ea088u: goto label_1ea088;
        case 0x1ea08cu: goto label_1ea08c;
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea0ecu: goto label_1ea0ec;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea0f4u: goto label_1ea0f4;
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea0fcu: goto label_1ea0fc;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea108u: goto label_1ea108;
        case 0x1ea10cu: goto label_1ea10c;
        case 0x1ea110u: goto label_1ea110;
        case 0x1ea114u: goto label_1ea114;
        case 0x1ea118u: goto label_1ea118;
        case 0x1ea11cu: goto label_1ea11c;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea12cu: goto label_1ea12c;
        case 0x1ea130u: goto label_1ea130;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea138u: goto label_1ea138;
        case 0x1ea13cu: goto label_1ea13c;
        case 0x1ea140u: goto label_1ea140;
        case 0x1ea144u: goto label_1ea144;
        case 0x1ea148u: goto label_1ea148;
        case 0x1ea14cu: goto label_1ea14c;
        case 0x1ea150u: goto label_1ea150;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea158u: goto label_1ea158;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea160u: goto label_1ea160;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea168u: goto label_1ea168;
        case 0x1ea16cu: goto label_1ea16c;
        case 0x1ea170u: goto label_1ea170;
        case 0x1ea174u: goto label_1ea174;
        case 0x1ea178u: goto label_1ea178;
        case 0x1ea17cu: goto label_1ea17c;
        case 0x1ea180u: goto label_1ea180;
        case 0x1ea184u: goto label_1ea184;
        case 0x1ea188u: goto label_1ea188;
        case 0x1ea18cu: goto label_1ea18c;
        case 0x1ea190u: goto label_1ea190;
        case 0x1ea194u: goto label_1ea194;
        case 0x1ea198u: goto label_1ea198;
        case 0x1ea19cu: goto label_1ea19c;
        case 0x1ea1a0u: goto label_1ea1a0;
        case 0x1ea1a4u: goto label_1ea1a4;
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1acu: goto label_1ea1ac;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1b4u: goto label_1ea1b4;
        case 0x1ea1b8u: goto label_1ea1b8;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c0u: goto label_1ea1c0;
        case 0x1ea1c4u: goto label_1ea1c4;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1d0u: goto label_1ea1d0;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea1d8u: goto label_1ea1d8;
        case 0x1ea1dcu: goto label_1ea1dc;
        case 0x1ea1e0u: goto label_1ea1e0;
        case 0x1ea1e4u: goto label_1ea1e4;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea1ecu: goto label_1ea1ec;
        case 0x1ea1f0u: goto label_1ea1f0;
        case 0x1ea1f4u: goto label_1ea1f4;
        case 0x1ea1f8u: goto label_1ea1f8;
        case 0x1ea1fcu: goto label_1ea1fc;
        case 0x1ea200u: goto label_1ea200;
        case 0x1ea204u: goto label_1ea204;
        case 0x1ea208u: goto label_1ea208;
        case 0x1ea20cu: goto label_1ea20c;
        case 0x1ea210u: goto label_1ea210;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea218u: goto label_1ea218;
        case 0x1ea21cu: goto label_1ea21c;
        case 0x1ea220u: goto label_1ea220;
        case 0x1ea224u: goto label_1ea224;
        case 0x1ea228u: goto label_1ea228;
        case 0x1ea22cu: goto label_1ea22c;
        case 0x1ea230u: goto label_1ea230;
        case 0x1ea234u: goto label_1ea234;
        case 0x1ea238u: goto label_1ea238;
        case 0x1ea23cu: goto label_1ea23c;
        case 0x1ea240u: goto label_1ea240;
        case 0x1ea244u: goto label_1ea244;
        case 0x1ea248u: goto label_1ea248;
        case 0x1ea24cu: goto label_1ea24c;
        case 0x1ea250u: goto label_1ea250;
        case 0x1ea254u: goto label_1ea254;
        case 0x1ea258u: goto label_1ea258;
        case 0x1ea25cu: goto label_1ea25c;
        case 0x1ea260u: goto label_1ea260;
        case 0x1ea264u: goto label_1ea264;
        case 0x1ea268u: goto label_1ea268;
        case 0x1ea26cu: goto label_1ea26c;
        case 0x1ea270u: goto label_1ea270;
        case 0x1ea274u: goto label_1ea274;
        case 0x1ea278u: goto label_1ea278;
        case 0x1ea27cu: goto label_1ea27c;
        case 0x1ea280u: goto label_1ea280;
        case 0x1ea284u: goto label_1ea284;
        case 0x1ea288u: goto label_1ea288;
        case 0x1ea28cu: goto label_1ea28c;
        case 0x1ea290u: goto label_1ea290;
        case 0x1ea294u: goto label_1ea294;
        case 0x1ea298u: goto label_1ea298;
        case 0x1ea29cu: goto label_1ea29c;
        case 0x1ea2a0u: goto label_1ea2a0;
        case 0x1ea2a4u: goto label_1ea2a4;
        case 0x1ea2a8u: goto label_1ea2a8;
        case 0x1ea2acu: goto label_1ea2ac;
        case 0x1ea2b0u: goto label_1ea2b0;
        case 0x1ea2b4u: goto label_1ea2b4;
        case 0x1ea2b8u: goto label_1ea2b8;
        case 0x1ea2bcu: goto label_1ea2bc;
        case 0x1ea2c0u: goto label_1ea2c0;
        case 0x1ea2c4u: goto label_1ea2c4;
        case 0x1ea2c8u: goto label_1ea2c8;
        case 0x1ea2ccu: goto label_1ea2cc;
        case 0x1ea2d0u: goto label_1ea2d0;
        case 0x1ea2d4u: goto label_1ea2d4;
        case 0x1ea2d8u: goto label_1ea2d8;
        case 0x1ea2dcu: goto label_1ea2dc;
        case 0x1ea2e0u: goto label_1ea2e0;
        case 0x1ea2e4u: goto label_1ea2e4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2ecu: goto label_1ea2ec;
        case 0x1ea2f0u: goto label_1ea2f0;
        case 0x1ea2f4u: goto label_1ea2f4;
        case 0x1ea2f8u: goto label_1ea2f8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea300u: goto label_1ea300;
        case 0x1ea304u: goto label_1ea304;
        case 0x1ea308u: goto label_1ea308;
        case 0x1ea30cu: goto label_1ea30c;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea314u: goto label_1ea314;
        case 0x1ea318u: goto label_1ea318;
        case 0x1ea31cu: goto label_1ea31c;
        case 0x1ea320u: goto label_1ea320;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea328u: goto label_1ea328;
        case 0x1ea32cu: goto label_1ea32c;
        case 0x1ea330u: goto label_1ea330;
        case 0x1ea334u: goto label_1ea334;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea33cu: goto label_1ea33c;
        case 0x1ea340u: goto label_1ea340;
        case 0x1ea344u: goto label_1ea344;
        case 0x1ea348u: goto label_1ea348;
        case 0x1ea34cu: goto label_1ea34c;
        case 0x1ea350u: goto label_1ea350;
        case 0x1ea354u: goto label_1ea354;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea35cu: goto label_1ea35c;
        case 0x1ea360u: goto label_1ea360;
        case 0x1ea364u: goto label_1ea364;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea36cu: goto label_1ea36c;
        case 0x1ea370u: goto label_1ea370;
        case 0x1ea374u: goto label_1ea374;
        case 0x1ea378u: goto label_1ea378;
        case 0x1ea37cu: goto label_1ea37c;
        case 0x1ea380u: goto label_1ea380;
        case 0x1ea384u: goto label_1ea384;
        case 0x1ea388u: goto label_1ea388;
        case 0x1ea38cu: goto label_1ea38c;
        case 0x1ea390u: goto label_1ea390;
        case 0x1ea394u: goto label_1ea394;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea3a4u: goto label_1ea3a4;
        case 0x1ea3a8u: goto label_1ea3a8;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3b4u: goto label_1ea3b4;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3bcu: goto label_1ea3bc;
        case 0x1ea3c0u: goto label_1ea3c0;
        case 0x1ea3c4u: goto label_1ea3c4;
        case 0x1ea3c8u: goto label_1ea3c8;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3d4u: goto label_1ea3d4;
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea3e0u: goto label_1ea3e0;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea3e8u: goto label_1ea3e8;
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f0u: goto label_1ea3f0;
        case 0x1ea3f4u: goto label_1ea3f4;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea3fcu: goto label_1ea3fc;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea408u: goto label_1ea408;
        case 0x1ea40cu: goto label_1ea40c;
        case 0x1ea410u: goto label_1ea410;
        case 0x1ea414u: goto label_1ea414;
        case 0x1ea418u: goto label_1ea418;
        case 0x1ea41cu: goto label_1ea41c;
        case 0x1ea420u: goto label_1ea420;
        case 0x1ea424u: goto label_1ea424;
        case 0x1ea428u: goto label_1ea428;
        case 0x1ea42cu: goto label_1ea42c;
        case 0x1ea430u: goto label_1ea430;
        case 0x1ea434u: goto label_1ea434;
        case 0x1ea438u: goto label_1ea438;
        case 0x1ea43cu: goto label_1ea43c;
        case 0x1ea440u: goto label_1ea440;
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea448u: goto label_1ea448;
        case 0x1ea44cu: goto label_1ea44c;
        case 0x1ea450u: goto label_1ea450;
        case 0x1ea454u: goto label_1ea454;
        case 0x1ea458u: goto label_1ea458;
        case 0x1ea45cu: goto label_1ea45c;
        case 0x1ea460u: goto label_1ea460;
        case 0x1ea464u: goto label_1ea464;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea46cu: goto label_1ea46c;
        case 0x1ea470u: goto label_1ea470;
        case 0x1ea474u: goto label_1ea474;
        case 0x1ea478u: goto label_1ea478;
        case 0x1ea47cu: goto label_1ea47c;
        case 0x1ea480u: goto label_1ea480;
        case 0x1ea484u: goto label_1ea484;
        case 0x1ea488u: goto label_1ea488;
        case 0x1ea48cu: goto label_1ea48c;
        case 0x1ea490u: goto label_1ea490;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea498u: goto label_1ea498;
        case 0x1ea49cu: goto label_1ea49c;
        case 0x1ea4a0u: goto label_1ea4a0;
        case 0x1ea4a4u: goto label_1ea4a4;
        case 0x1ea4a8u: goto label_1ea4a8;
        case 0x1ea4acu: goto label_1ea4ac;
        case 0x1ea4b0u: goto label_1ea4b0;
        case 0x1ea4b4u: goto label_1ea4b4;
        case 0x1ea4b8u: goto label_1ea4b8;
        case 0x1ea4bcu: goto label_1ea4bc;
        case 0x1ea4c0u: goto label_1ea4c0;
        case 0x1ea4c4u: goto label_1ea4c4;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4ccu: goto label_1ea4cc;
        case 0x1ea4d0u: goto label_1ea4d0;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea4d8u: goto label_1ea4d8;
        case 0x1ea4dcu: goto label_1ea4dc;
        case 0x1ea4e0u: goto label_1ea4e0;
        case 0x1ea4e4u: goto label_1ea4e4;
        case 0x1ea4e8u: goto label_1ea4e8;
        case 0x1ea4ecu: goto label_1ea4ec;
        case 0x1ea4f0u: goto label_1ea4f0;
        case 0x1ea4f4u: goto label_1ea4f4;
        case 0x1ea4f8u: goto label_1ea4f8;
        case 0x1ea4fcu: goto label_1ea4fc;
        case 0x1ea500u: goto label_1ea500;
        case 0x1ea504u: goto label_1ea504;
        case 0x1ea508u: goto label_1ea508;
        case 0x1ea50cu: goto label_1ea50c;
        case 0x1ea510u: goto label_1ea510;
        case 0x1ea514u: goto label_1ea514;
        case 0x1ea518u: goto label_1ea518;
        case 0x1ea51cu: goto label_1ea51c;
        case 0x1ea520u: goto label_1ea520;
        case 0x1ea524u: goto label_1ea524;
        case 0x1ea528u: goto label_1ea528;
        case 0x1ea52cu: goto label_1ea52c;
        case 0x1ea530u: goto label_1ea530;
        case 0x1ea534u: goto label_1ea534;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea53cu: goto label_1ea53c;
        case 0x1ea540u: goto label_1ea540;
        case 0x1ea544u: goto label_1ea544;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea54cu: goto label_1ea54c;
        case 0x1ea550u: goto label_1ea550;
        case 0x1ea554u: goto label_1ea554;
        case 0x1ea558u: goto label_1ea558;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea560u: goto label_1ea560;
        case 0x1ea564u: goto label_1ea564;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea56cu: goto label_1ea56c;
        case 0x1ea570u: goto label_1ea570;
        case 0x1ea574u: goto label_1ea574;
        case 0x1ea578u: goto label_1ea578;
        case 0x1ea57cu: goto label_1ea57c;
        case 0x1ea580u: goto label_1ea580;
        case 0x1ea584u: goto label_1ea584;
        case 0x1ea588u: goto label_1ea588;
        case 0x1ea58cu: goto label_1ea58c;
        case 0x1ea590u: goto label_1ea590;
        case 0x1ea594u: goto label_1ea594;
        case 0x1ea598u: goto label_1ea598;
        case 0x1ea59cu: goto label_1ea59c;
        case 0x1ea5a0u: goto label_1ea5a0;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5a8u: goto label_1ea5a8;
        case 0x1ea5acu: goto label_1ea5ac;
        case 0x1ea5b0u: goto label_1ea5b0;
        case 0x1ea5b4u: goto label_1ea5b4;
        case 0x1ea5b8u: goto label_1ea5b8;
        case 0x1ea5bcu: goto label_1ea5bc;
        case 0x1ea5c0u: goto label_1ea5c0;
        case 0x1ea5c4u: goto label_1ea5c4;
        case 0x1ea5c8u: goto label_1ea5c8;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea5d0u: goto label_1ea5d0;
        case 0x1ea5d4u: goto label_1ea5d4;
        case 0x1ea5d8u: goto label_1ea5d8;
        case 0x1ea5dcu: goto label_1ea5dc;
        case 0x1ea5e0u: goto label_1ea5e0;
        case 0x1ea5e4u: goto label_1ea5e4;
        case 0x1ea5e8u: goto label_1ea5e8;
        case 0x1ea5ecu: goto label_1ea5ec;
        case 0x1ea5f0u: goto label_1ea5f0;
        case 0x1ea5f4u: goto label_1ea5f4;
        case 0x1ea5f8u: goto label_1ea5f8;
        case 0x1ea5fcu: goto label_1ea5fc;
        case 0x1ea600u: goto label_1ea600;
        case 0x1ea604u: goto label_1ea604;
        case 0x1ea608u: goto label_1ea608;
        case 0x1ea60cu: goto label_1ea60c;
        case 0x1ea610u: goto label_1ea610;
        case 0x1ea614u: goto label_1ea614;
        case 0x1ea618u: goto label_1ea618;
        case 0x1ea61cu: goto label_1ea61c;
        case 0x1ea620u: goto label_1ea620;
        case 0x1ea624u: goto label_1ea624;
        case 0x1ea628u: goto label_1ea628;
        case 0x1ea62cu: goto label_1ea62c;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea634u: goto label_1ea634;
        case 0x1ea638u: goto label_1ea638;
        case 0x1ea63cu: goto label_1ea63c;
        case 0x1ea640u: goto label_1ea640;
        case 0x1ea644u: goto label_1ea644;
        case 0x1ea648u: goto label_1ea648;
        case 0x1ea64cu: goto label_1ea64c;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea654u: goto label_1ea654;
        case 0x1ea658u: goto label_1ea658;
        case 0x1ea65cu: goto label_1ea65c;
        case 0x1ea660u: goto label_1ea660;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea668u: goto label_1ea668;
        case 0x1ea66cu: goto label_1ea66c;
        case 0x1ea670u: goto label_1ea670;
        case 0x1ea674u: goto label_1ea674;
        case 0x1ea678u: goto label_1ea678;
        case 0x1ea67cu: goto label_1ea67c;
        case 0x1ea680u: goto label_1ea680;
        case 0x1ea684u: goto label_1ea684;
        case 0x1ea688u: goto label_1ea688;
        case 0x1ea68cu: goto label_1ea68c;
        case 0x1ea690u: goto label_1ea690;
        case 0x1ea694u: goto label_1ea694;
        case 0x1ea698u: goto label_1ea698;
        case 0x1ea69cu: goto label_1ea69c;
        case 0x1ea6a0u: goto label_1ea6a0;
        case 0x1ea6a4u: goto label_1ea6a4;
        case 0x1ea6a8u: goto label_1ea6a8;
        case 0x1ea6acu: goto label_1ea6ac;
        case 0x1ea6b0u: goto label_1ea6b0;
        case 0x1ea6b4u: goto label_1ea6b4;
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea6bcu: goto label_1ea6bc;
        case 0x1ea6c0u: goto label_1ea6c0;
        case 0x1ea6c4u: goto label_1ea6c4;
        case 0x1ea6c8u: goto label_1ea6c8;
        case 0x1ea6ccu: goto label_1ea6cc;
        case 0x1ea6d0u: goto label_1ea6d0;
        case 0x1ea6d4u: goto label_1ea6d4;
        case 0x1ea6d8u: goto label_1ea6d8;
        case 0x1ea6dcu: goto label_1ea6dc;
        case 0x1ea6e0u: goto label_1ea6e0;
        case 0x1ea6e4u: goto label_1ea6e4;
        case 0x1ea6e8u: goto label_1ea6e8;
        case 0x1ea6ecu: goto label_1ea6ec;
        case 0x1ea6f0u: goto label_1ea6f0;
        case 0x1ea6f4u: goto label_1ea6f4;
        case 0x1ea6f8u: goto label_1ea6f8;
        case 0x1ea6fcu: goto label_1ea6fc;
        case 0x1ea700u: goto label_1ea700;
        case 0x1ea704u: goto label_1ea704;
        case 0x1ea708u: goto label_1ea708;
        case 0x1ea70cu: goto label_1ea70c;
        case 0x1ea710u: goto label_1ea710;
        case 0x1ea714u: goto label_1ea714;
        case 0x1ea718u: goto label_1ea718;
        case 0x1ea71cu: goto label_1ea71c;
        case 0x1ea720u: goto label_1ea720;
        case 0x1ea724u: goto label_1ea724;
        case 0x1ea728u: goto label_1ea728;
        case 0x1ea72cu: goto label_1ea72c;
        case 0x1ea730u: goto label_1ea730;
        case 0x1ea734u: goto label_1ea734;
        case 0x1ea738u: goto label_1ea738;
        case 0x1ea73cu: goto label_1ea73c;
        case 0x1ea740u: goto label_1ea740;
        case 0x1ea744u: goto label_1ea744;
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea74cu: goto label_1ea74c;
        case 0x1ea750u: goto label_1ea750;
        case 0x1ea754u: goto label_1ea754;
        case 0x1ea758u: goto label_1ea758;
        case 0x1ea75cu: goto label_1ea75c;
        case 0x1ea760u: goto label_1ea760;
        case 0x1ea764u: goto label_1ea764;
        case 0x1ea768u: goto label_1ea768;
        case 0x1ea76cu: goto label_1ea76c;
        case 0x1ea770u: goto label_1ea770;
        case 0x1ea774u: goto label_1ea774;
        case 0x1ea778u: goto label_1ea778;
        case 0x1ea77cu: goto label_1ea77c;
        case 0x1ea780u: goto label_1ea780;
        case 0x1ea784u: goto label_1ea784;
        case 0x1ea788u: goto label_1ea788;
        case 0x1ea78cu: goto label_1ea78c;
        case 0x1ea790u: goto label_1ea790;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea798u: goto label_1ea798;
        case 0x1ea79cu: goto label_1ea79c;
        case 0x1ea7a0u: goto label_1ea7a0;
        case 0x1ea7a4u: goto label_1ea7a4;
        case 0x1ea7a8u: goto label_1ea7a8;
        case 0x1ea7acu: goto label_1ea7ac;
        case 0x1ea7b0u: goto label_1ea7b0;
        case 0x1ea7b4u: goto label_1ea7b4;
        case 0x1ea7b8u: goto label_1ea7b8;
        case 0x1ea7bcu: goto label_1ea7bc;
        case 0x1ea7c0u: goto label_1ea7c0;
        case 0x1ea7c4u: goto label_1ea7c4;
        case 0x1ea7c8u: goto label_1ea7c8;
        case 0x1ea7ccu: goto label_1ea7cc;
        case 0x1ea7d0u: goto label_1ea7d0;
        case 0x1ea7d4u: goto label_1ea7d4;
        case 0x1ea7d8u: goto label_1ea7d8;
        case 0x1ea7dcu: goto label_1ea7dc;
        case 0x1ea7e0u: goto label_1ea7e0;
        case 0x1ea7e4u: goto label_1ea7e4;
        case 0x1ea7e8u: goto label_1ea7e8;
        case 0x1ea7ecu: goto label_1ea7ec;
        case 0x1ea7f0u: goto label_1ea7f0;
        case 0x1ea7f4u: goto label_1ea7f4;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea804u: goto label_1ea804;
        case 0x1ea808u: goto label_1ea808;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea810u: goto label_1ea810;
        case 0x1ea814u: goto label_1ea814;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea81cu: goto label_1ea81c;
        case 0x1ea820u: goto label_1ea820;
        default: break;
    }

    ctx->pc = 0x1e9fc0u;

label_1e9fc0:
    // 0x1e9fc0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1e9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1e9fc4:
    // 0x1e9fc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e9fc8:
    // 0x1e9fc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e9fcc:
    // 0x1e9fcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e9fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e9fd0:
    // 0x1e9fd0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1e9fd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fd4:
    // 0x1e9fd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e9fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e9fd8:
    // 0x1e9fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e9fdc:
    // 0x1e9fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e9fe0:
    // 0x1e9fe0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e9fe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fe4:
    // 0x1e9fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e9fe8:
    // 0x1e9fe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e9fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fec:
    // 0x1e9fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9ff0:
    // 0x1e9ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9ff4:
    // 0x1e9ff4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e9ff8:
    // 0x1e9ff8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1e9ffc:
    if (ctx->pc == 0x1E9FFCu) {
        ctx->pc = 0x1E9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FF8u;
        // 0x1e9ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA000u;
        goto label_1ea000;
    }
    ctx->pc = 0x1E9FF8u;
    {
        const bool branch_taken_0x1e9ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FF8u;
        // 0x1e9ffc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ff8) {
            ctx->pc = 0x1EA040u;
            goto label_1ea040;
        }
    }
    ctx->pc = 0x1EA000u;
label_1ea000:
    // 0x1ea000: 0xc07abcc  jal         func_1EAF30
label_1ea004:
    if (ctx->pc == 0x1EA004u) {
        ctx->pc = 0x1EA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA000u;
        // 0x1ea004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA008u;
        goto label_1ea008;
    }
    ctx->pc = 0x1EA000u;
    SET_GPR_U32(ctx, 31, 0x1EA008u);
    ctx->pc = 0x1EA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA000u;
    // 0x1ea004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAF30u, 0x1EA000u, 0x1EA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA008u;
label_1ea008:
    // 0x1ea008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea00c:
    // 0x1ea00c: 0xc07aad4  jal         func_1EAB50
label_1ea010:
    if (ctx->pc == 0x1EA010u) {
        ctx->pc = 0x1EA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA00Cu;
        // 0x1ea010: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA014u;
        goto label_1ea014;
    }
    ctx->pc = 0x1EA00Cu;
    SET_GPR_U32(ctx, 31, 0x1EA014u);
    ctx->pc = 0x1EA010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA00Cu;
    // 0x1ea010: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB50u, 0x1EA00Cu, 0x1EA014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA014u;
label_1ea014:
    // 0x1ea014: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ea018:
    // 0x1ea018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ea01c:
    if (ctx->pc == 0x1EA01Cu) {
        ctx->pc = 0x1EA020u;
        goto label_1ea020;
    }
    ctx->pc = 0x1EA018u;
    {
        const bool branch_taken_0x1ea018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea018) {
            ctx->pc = 0x1EA028u;
            goto label_1ea028;
        }
    }
    ctx->pc = 0x1EA020u;
label_1ea020:
    // 0x1ea020: 0xc07a520  jal         func_1E9480
label_1ea024:
    if (ctx->pc == 0x1EA024u) {
        ctx->pc = 0x1EA028u;
        goto label_1ea028;
    }
    ctx->pc = 0x1EA020u;
    SET_GPR_U32(ctx, 31, 0x1EA028u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EA020u, 0x1EA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA028u;
label_1ea028:
    // 0x1ea028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ea02c:
    // 0x1ea02c: 0xc07aba0  jal         func_1EAE80
label_1ea030:
    if (ctx->pc == 0x1EA030u) {
        ctx->pc = 0x1EA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA02Cu;
        // 0x1ea030: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA034u;
        goto label_1ea034;
    }
    ctx->pc = 0x1EA02Cu;
    SET_GPR_U32(ctx, 31, 0x1EA034u);
    ctx->pc = 0x1EA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA02Cu;
    // 0x1ea030: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1EA02Cu, 0x1EA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA034u;
label_1ea034:
    // 0x1ea034: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea038:
    // 0x1ea038: 0x1060ffee  beqz        $v1, . + 4 + (-0x12 << 2)
label_1ea03c:
    if (ctx->pc == 0x1EA03Cu) {
        ctx->pc = 0x1EA040u;
        goto label_1ea040;
    }
    ctx->pc = 0x1EA038u;
    {
        const bool branch_taken_0x1ea038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea038) {
            ctx->pc = 0x1E9FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ff4;
        }
    }
    ctx->pc = 0x1EA040u;
label_1ea040:
    // 0x1ea040: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x1ea040u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea044:
    // 0x1ea044: 0x91120000  lbu         $s2, 0x0($t0)
    ctx->pc = 0x1ea044u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1ea048:
    // 0x1ea048: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x1ea048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_1ea04c:
    // 0x1ea04c: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x1ea04cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1ea050:
    // 0x1ea050: 0x102001e0  beqz        $at, . + 4 + (0x1E0 << 2)
label_1ea054:
    if (ctx->pc == 0x1EA054u) {
        ctx->pc = 0x1EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA050u;
        // 0x1ea054: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA058u;
        goto label_1ea058;
    }
    ctx->pc = 0x1EA050u;
    {
        const bool branch_taken_0x1ea050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA050u;
        // 0x1ea054: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea050) {
            ctx->pc = 0x1EA7D4u;
            goto label_1ea7d4;
        }
    }
    ctx->pc = 0x1EA058u;
label_1ea058:
    // 0x1ea058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea05c:
    // 0x1ea05c: 0x24844100  addiu       $a0, $a0, 0x4100
    ctx->pc = 0x1ea05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
label_1ea060:
    // 0x1ea060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ea064:
    // 0x1ea064: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ea064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea068:
    // 0x1ea068: 0x600008  jr          $v1
label_1ea06c:
    if (ctx->pc == 0x1EA06Cu) {
        ctx->pc = 0x1EA070u;
        goto label_1ea070;
    }
    ctx->pc = 0x1EA068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA070u: goto label_1ea070;
            case 0x1EA090u: goto label_1ea090;
            case 0x1EA0E8u: goto label_1ea0e8;
            case 0x1EA188u: goto label_1ea188;
            case 0x1EA210u: goto label_1ea210;
            case 0x1EA2A8u: goto label_1ea2a8;
            case 0x1EA33Cu: goto label_1ea33c;
            case 0x1EA3D4u: goto label_1ea3d4;
            case 0x1EA4C0u: goto label_1ea4c0;
            case 0x1EA5A0u: goto label_1ea5a0;
            case 0x1EA620u: goto label_1ea620;
            case 0x1EA6F0u: goto label_1ea6f0;
            case 0x1EA744u: goto label_1ea744;
            case 0x1EA798u: goto label_1ea798;
            case 0x1EA7D4u: goto label_1ea7d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA068u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EA070u;
label_1ea070:
    // 0x1ea070: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea074:
    // 0x1ea074: 0xc07a59c  jal         func_1E9670
label_1ea078:
    if (ctx->pc == 0x1EA078u) {
        ctx->pc = 0x1EA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA074u;
        // 0x1ea078: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA07Cu;
        goto label_1ea07c;
    }
    ctx->pc = 0x1EA074u;
    SET_GPR_U32(ctx, 31, 0x1EA07Cu);
    ctx->pc = 0x1EA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA074u;
    // 0x1ea078: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA074u, 0x1EA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA07Cu;
label_1ea07c:
    // 0x1ea07c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1ea07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ea080:
    // 0x1ea080: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1ea080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1ea084:
    // 0x1ea084: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ea084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea088:
    // 0x1ea088: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_1ea08c:
    if (ctx->pc == 0x1EA08Cu) {
        ctx->pc = 0x1EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA088u;
        // 0x1ea08c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA090u;
        goto label_1ea090;
    }
    ctx->pc = 0x1EA088u;
    {
        const bool branch_taken_0x1ea088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA088u;
        // 0x1ea08c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea088) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA090u;
label_1ea090:
    // 0x1ea090: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea094:
    // 0x1ea094: 0xc07a59c  jal         func_1E9670
label_1ea098:
    if (ctx->pc == 0x1EA098u) {
        ctx->pc = 0x1EA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA094u;
        // 0x1ea098: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA09Cu;
        goto label_1ea09c;
    }
    ctx->pc = 0x1EA094u;
    SET_GPR_U32(ctx, 31, 0x1EA09Cu);
    ctx->pc = 0x1EA098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA094u;
    // 0x1ea098: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA094u, 0x1EA09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA09Cu;
label_1ea09c:
    // 0x1ea09c: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x1ea09cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea0a0:
    // 0x1ea0a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a4:
    // 0x1ea0a4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea0a8:
    // 0x1ea0a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea0ac:
    // 0x1ea0ac: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1ea0acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea0b0:
    // 0x1ea0b0: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea0b4:
    // 0x1ea0b4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ea0b8:
    // 0x1ea0b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1ea0bc:
    // 0x1ea0bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea0c0:
    // 0x1ea0c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea0c4:
    // 0x1ea0c4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ea0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ea0c8:
    // 0x1ea0c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1ea0cc:
    // 0x1ea0cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea0d0:
    // 0x1ea0d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ea0d4:
    // 0x1ea0d4: 0x40f809  jalr        $v0
label_1ea0d8:
    if (ctx->pc == 0x1EA0D8u) {
        ctx->pc = 0x1EA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0D4u;
        // 0x1ea0d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0DCu;
        goto label_1ea0dc;
    }
    ctx->pc = 0x1EA0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EA0DCu);
        ctx->pc = 0x1EA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0D4u;
        // 0x1ea0d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA0D4u, 0x1EA0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA0DCu;
label_1ea0dc:
    // 0x1ea0dc: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1ea0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ea0e0:
    // 0x1ea0e0: 0x100001bf  b           . + 4 + (0x1BF << 2)
label_1ea0e4:
    if (ctx->pc == 0x1EA0E4u) {
        ctx->pc = 0x1EA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0E0u;
        // 0x1ea0e4: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0E8u;
        goto label_1ea0e8;
    }
    ctx->pc = 0x1EA0E0u;
    {
        const bool branch_taken_0x1ea0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0E0u;
        // 0x1ea0e4: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0e0) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA0E8u;
label_1ea0e8:
    // 0x1ea0e8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea0ec:
    // 0x1ea0ec: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x1ea0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1ea0f0:
    // 0x1ea0f0: 0xc07a59c  jal         func_1E9670
label_1ea0f4:
    if (ctx->pc == 0x1EA0F4u) {
        ctx->pc = 0x1EA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0F0u;
        // 0x1ea0f4: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0F8u;
        goto label_1ea0f8;
    }
    ctx->pc = 0x1EA0F0u;
    SET_GPR_U32(ctx, 31, 0x1EA0F8u);
    ctx->pc = 0x1EA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0F0u;
    // 0x1ea0f4: 0x32500040  andi        $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA0F0u, 0x1EA0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0F8u;
label_1ea0f8:
    // 0x1ea0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0fc:
    // 0x1ea0fc: 0xc07a59c  jal         func_1E9670
label_1ea100:
    if (ctx->pc == 0x1EA100u) {
        ctx->pc = 0x1EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0FCu;
        // 0x1ea100: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA104u;
        goto label_1ea104;
    }
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0FCu;
    // 0x1ea100: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA0FCu, 0x1EA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA104u;
label_1ea104:
    // 0x1ea104: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea104u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea108:
    // 0x1ea108: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea10c:
    // 0x1ea10c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea10cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea110:
    // 0x1ea110: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea114:
    // 0x1ea114: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea118:
    // 0x1ea118: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea118u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ea11c:
    // 0x1ea11c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1ea120:
    // 0x1ea120: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ea124:
    // 0x1ea124: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1ea128:
    // 0x1ea128: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea12c:
    // 0x1ea12c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea130:
    if (ctx->pc == 0x1EA130u) {
        ctx->pc = 0x1EA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA12Cu;
        // 0x1ea130: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA134u;
        goto label_1ea134;
    }
    ctx->pc = 0x1EA12Cu;
    {
        const bool branch_taken_0x1ea12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA12Cu;
        // 0x1ea130: 0x643025  or          $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea12c) {
            ctx->pc = 0x1EA150u;
            goto label_1ea150;
        }
    }
    ctx->pc = 0x1EA134u;
label_1ea134:
    // 0x1ea134: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1ea134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1ea138:
    // 0x1ea138: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ea13c:
    // 0x1ea13c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1ea140:
    // 0x1ea140: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x1ea140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1ea144:
    // 0x1ea144: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1ea144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1ea148:
    // 0x1ea148: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea14c:
    if (ctx->pc == 0x1EA14Cu) {
        ctx->pc = 0x1EA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA148u;
        // 0x1ea14c: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA150u;
        goto label_1ea150;
    }
    ctx->pc = 0x1EA148u;
    {
        const bool branch_taken_0x1ea148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA148u;
        // 0x1ea14c: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea148) {
            ctx->pc = 0x1EA164u;
            goto label_1ea164;
        }
    }
    ctx->pc = 0x1EA150u;
label_1ea150:
    // 0x1ea150: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea154:
    // 0x1ea154: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1ea154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1ea158:
    // 0x1ea158: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea15c:
    // 0x1ea15c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1ea15cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea160:
    // 0x1ea160: 0x0  nop
    ctx->pc = 0x1ea160u;
    // NOP
label_1ea164:
    // 0x1ea164: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1ea168:
    if (ctx->pc == 0x1EA168u) {
        ctx->pc = 0x1EA16Cu;
        goto label_1ea16c;
    }
    ctx->pc = 0x1EA164u;
    {
        const bool branch_taken_0x1ea164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea164) {
            ctx->pc = 0x1EA180u;
            goto label_1ea180;
        }
    }
    ctx->pc = 0x1EA16Cu;
label_1ea16c:
    // 0x1ea16c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea170:
    // 0x1ea170: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea174:
    // 0x1ea174: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1ea174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1ea178:
    // 0x1ea178: 0xc0f809  jalr        $a2
label_1ea17c:
    if (ctx->pc == 0x1EA17Cu) {
        ctx->pc = 0x1EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA178u;
        // 0x1ea17c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA180u;
        goto label_1ea180;
    }
    ctx->pc = 0x1EA178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA180u);
        ctx->pc = 0x1EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA178u;
        // 0x1ea17c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA178u, 0x1EA180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA180u;
label_1ea180:
    // 0x1ea180: 0x10000197  b           . + 4 + (0x197 << 2)
label_1ea184:
    if (ctx->pc == 0x1EA184u) {
        ctx->pc = 0x1EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA180u;
        // 0x1ea184: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA188u;
        goto label_1ea188;
    }
    ctx->pc = 0x1EA180u;
    {
        const bool branch_taken_0x1ea180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA180u;
        // 0x1ea184: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea180) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA188u;
label_1ea188:
    // 0x1ea188: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea18c:
    // 0x1ea18c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x1ea18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1ea190:
    // 0x1ea190: 0xc07a59c  jal         func_1E9670
label_1ea194:
    if (ctx->pc == 0x1EA194u) {
        ctx->pc = 0x1EA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA190u;
        // 0x1ea194: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA198u;
        goto label_1ea198;
    }
    ctx->pc = 0x1EA190u;
    SET_GPR_U32(ctx, 31, 0x1EA198u);
    ctx->pc = 0x1EA194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA190u;
    // 0x1ea194: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA190u, 0x1EA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA198u;
label_1ea198:
    // 0x1ea198: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea198u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea19c:
    // 0x1ea19c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea1a0:
    // 0x1ea1a0: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea1a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea1a4:
    // 0x1ea1a4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea1a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea1a8:
    // 0x1ea1a8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ea1ac:
    // 0x1ea1ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea1b0:
    // 0x1ea1b0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea1b4:
    // 0x1ea1b4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea1b8:
    // 0x1ea1b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ea1bc:
    // 0x1ea1bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea1c0:
    // 0x1ea1c0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea1c4:
    if (ctx->pc == 0x1EA1C4u) {
        ctx->pc = 0x1EA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1C0u;
        // 0x1ea1c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1C8u;
        goto label_1ea1c8;
    }
    ctx->pc = 0x1EA1C0u;
    {
        const bool branch_taken_0x1ea1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1C0u;
        // 0x1ea1c4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1c0) {
            ctx->pc = 0x1EA1E4u;
            goto label_1ea1e4;
        }
    }
    ctx->pc = 0x1EA1C8u;
label_1ea1c8:
    // 0x1ea1c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1ea1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1ea1cc:
    // 0x1ea1cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea1d0:
    // 0x1ea1d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea1d4:
    // 0x1ea1d4: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea1d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ea1d8:
    // 0x1ea1d8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1ea1dc:
    // 0x1ea1dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ea1e0:
    if (ctx->pc == 0x1EA1E0u) {
        ctx->pc = 0x1EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1DCu;
        // 0x1ea1e0: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA1E4u;
        goto label_1ea1e4;
    }
    ctx->pc = 0x1EA1DCu;
    {
        const bool branch_taken_0x1ea1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1DCu;
        // 0x1ea1e0: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1dc) {
            ctx->pc = 0x1EA1FCu;
            goto label_1ea1fc;
        }
    }
    ctx->pc = 0x1EA1E4u;
label_1ea1e4:
    // 0x1ea1e4: 0x0  nop
    ctx->pc = 0x1ea1e4u;
    // NOP
label_1ea1e8:
    // 0x1ea1e8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea1ec:
    // 0x1ea1ec: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1ea1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1ea1f0:
    // 0x1ea1f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea1f4:
    // 0x1ea1f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea1f8:
    // 0x1ea1f8: 0x0  nop
    ctx->pc = 0x1ea1f8u;
    // NOP
label_1ea1fc:
    // 0x1ea1fc: 0x0  nop
    ctx->pc = 0x1ea1fcu;
    // NOP
label_1ea200:
    // 0x1ea200: 0xc0f809  jalr        $a2
label_1ea204:
    if (ctx->pc == 0x1EA204u) {
        ctx->pc = 0x1EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA200u;
        // 0x1ea204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA208u;
        goto label_1ea208;
    }
    ctx->pc = 0x1EA200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA208u);
        ctx->pc = 0x1EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA200u;
        // 0x1ea204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA200u, 0x1EA208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA208u;
label_1ea208:
    // 0x1ea208: 0x10000175  b           . + 4 + (0x175 << 2)
label_1ea20c:
    if (ctx->pc == 0x1EA20Cu) {
        ctx->pc = 0x1EA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA208u;
        // 0x1ea20c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA210u;
        goto label_1ea210;
    }
    ctx->pc = 0x1EA208u;
    {
        const bool branch_taken_0x1ea208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA208u;
        // 0x1ea20c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea208) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA210u;
label_1ea210:
    // 0x1ea210: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea214:
    // 0x1ea214: 0xc07a59c  jal         func_1E9670
label_1ea218:
    if (ctx->pc == 0x1EA218u) {
        ctx->pc = 0x1EA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA214u;
        // 0x1ea218: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA21Cu;
        goto label_1ea21c;
    }
    ctx->pc = 0x1EA214u;
    SET_GPR_U32(ctx, 31, 0x1EA21Cu);
    ctx->pc = 0x1EA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA214u;
    // 0x1ea218: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA214u, 0x1EA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA21Cu;
label_1ea21c:
    // 0x1ea21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea220:
    // 0x1ea220: 0xc07a574  jal         func_1E95D0
label_1ea224:
    if (ctx->pc == 0x1EA224u) {
        ctx->pc = 0x1EA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA220u;
        // 0x1ea224: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA228u;
        goto label_1ea228;
    }
    ctx->pc = 0x1EA220u;
    SET_GPR_U32(ctx, 31, 0x1EA228u);
    ctx->pc = 0x1EA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA220u;
    // 0x1ea224: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA220u, 0x1EA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA228u;
label_1ea228:
    // 0x1ea228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea22c:
    // 0x1ea22c: 0xc07a574  jal         func_1E95D0
label_1ea230:
    if (ctx->pc == 0x1EA230u) {
        ctx->pc = 0x1EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA22Cu;
        // 0x1ea230: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA234u;
        goto label_1ea234;
    }
    ctx->pc = 0x1EA22Cu;
    SET_GPR_U32(ctx, 31, 0x1EA234u);
    ctx->pc = 0x1EA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA22Cu;
    // 0x1ea230: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA22Cu, 0x1EA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA234u;
label_1ea234:
    // 0x1ea234: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x1ea234u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea238:
    // 0x1ea238: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1ea238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea23c:
    // 0x1ea23c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ea23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea240:
    // 0x1ea240: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1ea240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea244:
    // 0x1ea244: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x1ea244u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea248:
    // 0x1ea248: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1ea24c:
    // 0x1ea24c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea250:
    // 0x1ea250: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1ea250u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1ea254:
    // 0x1ea254: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1ea258:
    // 0x1ea258: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x1ea258u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_1ea25c:
    // 0x1ea25c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ea260:
    // 0x1ea260: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1ea264:
    // 0x1ea264: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1ea268:
    // 0x1ea268: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1ea268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_1ea26c:
    // 0x1ea26c: 0xc7b025  or          $s6, $a2, $a3
    ctx->pc = 0x1ea26cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ea270:
    // 0x1ea270: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x1ea270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ea274:
    // 0x1ea274: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1ea274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ea278:
    // 0x1ea278: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1ea27c:
    if (ctx->pc == 0x1EA27Cu) {
        ctx->pc = 0x1EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA278u;
        // 0x1ea27c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA280u;
        goto label_1ea280;
    }
    ctx->pc = 0x1EA278u;
    {
        const bool branch_taken_0x1ea278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA278u;
        // 0x1ea27c: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea278) {
            ctx->pc = 0x1EA2A0u;
            goto label_1ea2a0;
        }
    }
    ctx->pc = 0x1EA280u;
label_1ea280:
    // 0x1ea280: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ea280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ea284:
    // 0x1ea284: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea288:
    // 0x1ea288: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1ea288u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ea28c:
    // 0x1ea28c: 0x2c0f809  jalr        $s6
label_1ea290:
    if (ctx->pc == 0x1EA290u) {
        ctx->pc = 0x1EA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA28Cu;
        // 0x1ea290: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA294u;
        goto label_1ea294;
    }
    ctx->pc = 0x1EA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1EA294u);
        ctx->pc = 0x1EA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA28Cu;
        // 0x1ea290: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA28Cu, 0x1EA294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA294u;
label_1ea294:
    // 0x1ea294: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ea294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ea298:
    // 0x1ea298: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_1ea29c:
    if (ctx->pc == 0x1EA29Cu) {
        ctx->pc = 0x1EA2A0u;
        goto label_1ea2a0;
    }
    ctx->pc = 0x1EA298u;
    {
        const bool branch_taken_0x1ea298 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea298) {
            ctx->pc = 0x1EA280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea280;
        }
    }
    ctx->pc = 0x1EA2A0u;
label_1ea2a0:
    // 0x1ea2a0: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1ea2a4:
    if (ctx->pc == 0x1EA2A4u) {
        ctx->pc = 0x1EA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A0u;
        // 0x1ea2a4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2A8u;
        goto label_1ea2a8;
    }
    ctx->pc = 0x1EA2A0u;
    {
        const bool branch_taken_0x1ea2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A0u;
        // 0x1ea2a4: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2a0) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA2A8u;
label_1ea2a8:
    // 0x1ea2a8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea2ac:
    // 0x1ea2ac: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ea2b0:
    // 0x1ea2b0: 0xc07a59c  jal         func_1E9670
label_1ea2b4:
    if (ctx->pc == 0x1EA2B4u) {
        ctx->pc = 0x1EA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2B0u;
        // 0x1ea2b4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2B8u;
        goto label_1ea2b8;
    }
    ctx->pc = 0x1EA2B0u;
    SET_GPR_U32(ctx, 31, 0x1EA2B8u);
    ctx->pc = 0x1EA2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2B0u;
    // 0x1ea2b4: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA2B0u, 0x1EA2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2B8u;
label_1ea2b8:
    // 0x1ea2b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea2bc:
    // 0x1ea2bc: 0xc07a59c  jal         func_1E9670
label_1ea2c0:
    if (ctx->pc == 0x1EA2C0u) {
        ctx->pc = 0x1EA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2BCu;
        // 0x1ea2c0: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2C4u;
        goto label_1ea2c4;
    }
    ctx->pc = 0x1EA2BCu;
    SET_GPR_U32(ctx, 31, 0x1EA2C4u);
    ctx->pc = 0x1EA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA2BCu;
    // 0x1ea2c0: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA2BCu, 0x1EA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA2C4u;
label_1ea2c4:
    // 0x1ea2c4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea2c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea2c8:
    // 0x1ea2c8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea2cc:
    // 0x1ea2cc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea2d0:
    // 0x1ea2d0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea2d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea2d4:
    // 0x1ea2d4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ea2d8:
    // 0x1ea2d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea2dc:
    // 0x1ea2dc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea2e0:
    // 0x1ea2e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea2e4:
    // 0x1ea2e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ea2e8:
    // 0x1ea2e8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea2ec:
    // 0x1ea2ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea2f0:
    if (ctx->pc == 0x1EA2F0u) {
        ctx->pc = 0x1EA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2ECu;
        // 0x1ea2f0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA2F4u;
        goto label_1ea2f4;
    }
    ctx->pc = 0x1EA2ECu;
    {
        const bool branch_taken_0x1ea2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2ECu;
        // 0x1ea2f0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2ec) {
            ctx->pc = 0x1EA310u;
            goto label_1ea310;
        }
    }
    ctx->pc = 0x1EA2F4u;
label_1ea2f4:
    // 0x1ea2f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ea2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1ea2f8:
    // 0x1ea2f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea2fc:
    // 0x1ea2fc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea300:
    // 0x1ea300: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ea304:
    // 0x1ea304: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea308:
    // 0x1ea308: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea30c:
    if (ctx->pc == 0x1EA30Cu) {
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA308u;
        // 0x1ea30c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA310u;
        goto label_1ea310;
    }
    ctx->pc = 0x1EA308u;
    {
        const bool branch_taken_0x1ea308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA308u;
        // 0x1ea30c: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea308) {
            ctx->pc = 0x1EA324u;
            goto label_1ea324;
        }
    }
    ctx->pc = 0x1EA310u;
label_1ea310:
    // 0x1ea310: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea314:
    // 0x1ea314: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1ea318:
    // 0x1ea318: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea31c:
    // 0x1ea31c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea320:
    // 0x1ea320: 0x0  nop
    ctx->pc = 0x1ea320u;
    // NOP
label_1ea324:
    // 0x1ea324: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1ea328:
    // 0x1ea328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea32c:
    // 0x1ea32c: 0xc0f809  jalr        $a2
label_1ea330:
    if (ctx->pc == 0x1EA330u) {
        ctx->pc = 0x1EA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA32Cu;
        // 0x1ea330: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA334u;
        goto label_1ea334;
    }
    ctx->pc = 0x1EA32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA334u);
        ctx->pc = 0x1EA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA32Cu;
        // 0x1ea330: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA32Cu, 0x1EA334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA334u;
label_1ea334:
    // 0x1ea334: 0x1000012a  b           . + 4 + (0x12A << 2)
label_1ea338:
    if (ctx->pc == 0x1EA338u) {
        ctx->pc = 0x1EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA334u;
        // 0x1ea338: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA33Cu;
        goto label_1ea33c;
    }
    ctx->pc = 0x1EA334u;
    {
        const bool branch_taken_0x1ea334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA334u;
        // 0x1ea338: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea334) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA33Cu;
label_1ea33c:
    // 0x1ea33c: 0x0  nop
    ctx->pc = 0x1ea33cu;
    // NOP
label_1ea340:
    // 0x1ea340: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea344:
    // 0x1ea344: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1ea344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1ea348:
    // 0x1ea348: 0xc07a59c  jal         func_1E9670
label_1ea34c:
    if (ctx->pc == 0x1EA34Cu) {
        ctx->pc = 0x1EA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA348u;
        // 0x1ea34c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA350u;
        goto label_1ea350;
    }
    ctx->pc = 0x1EA348u;
    SET_GPR_U32(ctx, 31, 0x1EA350u);
    ctx->pc = 0x1EA34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA348u;
    // 0x1ea34c: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA348u, 0x1EA350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA350u;
label_1ea350:
    // 0x1ea350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea354:
    // 0x1ea354: 0xc07a59c  jal         func_1E9670
label_1ea358:
    if (ctx->pc == 0x1EA358u) {
        ctx->pc = 0x1EA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA354u;
        // 0x1ea358: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA35Cu;
        goto label_1ea35c;
    }
    ctx->pc = 0x1EA354u;
    SET_GPR_U32(ctx, 31, 0x1EA35Cu);
    ctx->pc = 0x1EA358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA354u;
    // 0x1ea358: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA354u, 0x1EA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA35Cu;
label_1ea35c:
    // 0x1ea35c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea35cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea360:
    // 0x1ea360: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea364:
    // 0x1ea364: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea368:
    // 0x1ea368: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea368u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea36c:
    // 0x1ea36c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea36cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ea370:
    // 0x1ea370: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea374:
    // 0x1ea374: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea378:
    // 0x1ea378: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea37c:
    // 0x1ea37c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ea380:
    // 0x1ea380: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea384:
    // 0x1ea384: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea388:
    if (ctx->pc == 0x1EA388u) {
        ctx->pc = 0x1EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA384u;
        // 0x1ea388: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA38Cu;
        goto label_1ea38c;
    }
    ctx->pc = 0x1EA384u;
    {
        const bool branch_taken_0x1ea384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA384u;
        // 0x1ea388: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea384) {
            ctx->pc = 0x1EA3A8u;
            goto label_1ea3a8;
        }
    }
    ctx->pc = 0x1EA38Cu;
label_1ea38c:
    // 0x1ea38c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1ea38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1ea390:
    // 0x1ea390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea394:
    // 0x1ea394: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea398:
    // 0x1ea398: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea398u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ea39c:
    // 0x1ea39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea3a0:
    // 0x1ea3a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea3a4:
    if (ctx->pc == 0x1EA3A4u) {
        ctx->pc = 0x1EA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A0u;
        // 0x1ea3a4: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3A8u;
        goto label_1ea3a8;
    }
    ctx->pc = 0x1EA3A0u;
    {
        const bool branch_taken_0x1ea3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3A0u;
        // 0x1ea3a4: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3a0) {
            ctx->pc = 0x1EA3BCu;
            goto label_1ea3bc;
        }
    }
    ctx->pc = 0x1EA3A8u;
label_1ea3a8:
    // 0x1ea3a8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea3ac:
    // 0x1ea3ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1ea3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1ea3b0:
    // 0x1ea3b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea3b4:
    // 0x1ea3b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea3b8:
    // 0x1ea3b8: 0x0  nop
    ctx->pc = 0x1ea3b8u;
    // NOP
label_1ea3bc:
    // 0x1ea3bc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1ea3c0:
    // 0x1ea3c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea3c4:
    // 0x1ea3c4: 0xc0f809  jalr        $a2
label_1ea3c8:
    if (ctx->pc == 0x1EA3C8u) {
        ctx->pc = 0x1EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3C4u;
        // 0x1ea3c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3CCu;
        goto label_1ea3cc;
    }
    ctx->pc = 0x1EA3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA3CCu);
        ctx->pc = 0x1EA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3C4u;
        // 0x1ea3c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA3C4u, 0x1EA3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA3CCu;
label_1ea3cc:
    // 0x1ea3cc: 0x10000104  b           . + 4 + (0x104 << 2)
label_1ea3d0:
    if (ctx->pc == 0x1EA3D0u) {
        ctx->pc = 0x1EA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3CCu;
        // 0x1ea3d0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3D4u;
        goto label_1ea3d4;
    }
    ctx->pc = 0x1EA3CCu;
    {
        const bool branch_taken_0x1ea3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3CCu;
        // 0x1ea3d0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3cc) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA3D4u;
label_1ea3d4:
    // 0x1ea3d4: 0x0  nop
    ctx->pc = 0x1ea3d4u;
    // NOP
label_1ea3d8:
    // 0x1ea3d8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea3dc:
    // 0x1ea3dc: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x1ea3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1ea3e0:
    // 0x1ea3e0: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x1ea3e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_1ea3e4:
    // 0x1ea3e4: 0xc07a59c  jal         func_1E9670
label_1ea3e8:
    if (ctx->pc == 0x1EA3E8u) {
        ctx->pc = 0x1EA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3E4u;
        // 0x1ea3e8: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3ECu;
        goto label_1ea3ec;
    }
    ctx->pc = 0x1EA3E4u;
    SET_GPR_U32(ctx, 31, 0x1EA3ECu);
    ctx->pc = 0x1EA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3E4u;
    // 0x1ea3e8: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA3E4u, 0x1EA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3ECu;
label_1ea3ec:
    // 0x1ea3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3f0:
    // 0x1ea3f0: 0xc07a59c  jal         func_1E9670
label_1ea3f4:
    if (ctx->pc == 0x1EA3F4u) {
        ctx->pc = 0x1EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3F0u;
        // 0x1ea3f4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA3F8u;
        goto label_1ea3f8;
    }
    ctx->pc = 0x1EA3F0u;
    SET_GPR_U32(ctx, 31, 0x1EA3F8u);
    ctx->pc = 0x1EA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3F0u;
    // 0x1ea3f4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA3F0u, 0x1EA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3F8u;
label_1ea3f8:
    // 0x1ea3f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3fc:
    // 0x1ea3fc: 0xc07a59c  jal         func_1E9670
label_1ea400:
    if (ctx->pc == 0x1EA400u) {
        ctx->pc = 0x1EA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3FCu;
        // 0x1ea400: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA404u;
        goto label_1ea404;
    }
    ctx->pc = 0x1EA3FCu;
    SET_GPR_U32(ctx, 31, 0x1EA404u);
    ctx->pc = 0x1EA400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3FCu;
    // 0x1ea400: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA3FCu, 0x1EA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA404u;
label_1ea404:
    // 0x1ea404: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea404u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea408:
    // 0x1ea408: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea40c:
    // 0x1ea40c: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea40cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea410:
    // 0x1ea410: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea414:
    // 0x1ea414: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea414u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea418:
    // 0x1ea418: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ea41c:
    // 0x1ea41c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1ea420:
    // 0x1ea420: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ea424:
    // 0x1ea424: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1ea428:
    // 0x1ea428: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea42c:
    // 0x1ea42c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_1ea430:
    if (ctx->pc == 0x1EA430u) {
        ctx->pc = 0x1EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA42Cu;
        // 0x1ea430: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA434u;
        goto label_1ea434;
    }
    ctx->pc = 0x1EA42Cu;
    {
        const bool branch_taken_0x1ea42c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA42Cu;
        // 0x1ea430: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea42c) {
            ctx->pc = 0x1EA450u;
            goto label_1ea450;
        }
    }
    ctx->pc = 0x1EA434u;
label_1ea434:
    // 0x1ea434: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1ea434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1ea438:
    // 0x1ea438: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ea43c:
    // 0x1ea43c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1ea440:
    // 0x1ea440: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1ea440u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1ea444:
    // 0x1ea444: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1ea444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_1ea448:
    // 0x1ea448: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea44c:
    if (ctx->pc == 0x1EA44Cu) {
        ctx->pc = 0x1EA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA448u;
        // 0x1ea44c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA450u;
        goto label_1ea450;
    }
    ctx->pc = 0x1EA448u;
    {
        const bool branch_taken_0x1ea448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA448u;
        // 0x1ea44c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea448) {
            ctx->pc = 0x1EA464u;
            goto label_1ea464;
        }
    }
    ctx->pc = 0x1EA450u;
label_1ea450:
    // 0x1ea450: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea454:
    // 0x1ea454: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1ea458:
    // 0x1ea458: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ea45c:
    // 0x1ea45c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea460:
    // 0x1ea460: 0x0  nop
    ctx->pc = 0x1ea460u;
    // NOP
label_1ea464:
    // 0x1ea464: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1ea468:
    if (ctx->pc == 0x1EA468u) {
        ctx->pc = 0x1EA46Cu;
        goto label_1ea46c;
    }
    ctx->pc = 0x1EA464u;
    {
        const bool branch_taken_0x1ea464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea464) {
            ctx->pc = 0x1EA4B4u;
            goto label_1ea4b4;
        }
    }
    ctx->pc = 0x1EA46Cu;
label_1ea46c:
    // 0x1ea46c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea470:
    if (ctx->pc == 0x1EA470u) {
        ctx->pc = 0x1EA474u;
        goto label_1ea474;
    }
    ctx->pc = 0x1EA46Cu;
    {
        const bool branch_taken_0x1ea46c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea46c) {
            ctx->pc = 0x1EA490u;
            goto label_1ea490;
        }
    }
    ctx->pc = 0x1EA474u;
label_1ea474:
    // 0x1ea474: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ea478:
    // 0x1ea478: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea47c:
    // 0x1ea47c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea480:
    // 0x1ea480: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ea484:
    // 0x1ea484: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1ea488:
    // 0x1ea488: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea48c:
    if (ctx->pc == 0x1EA48Cu) {
        ctx->pc = 0x1EA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA488u;
        // 0x1ea48c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA490u;
        goto label_1ea490;
    }
    ctx->pc = 0x1EA488u;
    {
        const bool branch_taken_0x1ea488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA488u;
        // 0x1ea48c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea488) {
            ctx->pc = 0x1EA4A4u;
            goto label_1ea4a4;
        }
    }
    ctx->pc = 0x1EA490u;
label_1ea490:
    // 0x1ea490: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea494:
    // 0x1ea494: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ea494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ea498:
    // 0x1ea498: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ea49c:
    // 0x1ea49c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea4a0:
    // 0x1ea4a0: 0x0  nop
    ctx->pc = 0x1ea4a0u;
    // NOP
label_1ea4a4:
    // 0x1ea4a4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1ea4a8:
    // 0x1ea4a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea4ac:
    // 0x1ea4ac: 0x60f809  jalr        $v1
label_1ea4b0:
    if (ctx->pc == 0x1EA4B0u) {
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4B4u;
        goto label_1ea4b4;
    }
    ctx->pc = 0x1EA4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA4B4u);
        ctx->pc = 0x1EA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ACu;
        // 0x1ea4b0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA4ACu, 0x1EA4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA4B4u;
label_1ea4b4:
    // 0x1ea4b4: 0x0  nop
    ctx->pc = 0x1ea4b4u;
    // NOP
label_1ea4b8:
    // 0x1ea4b8: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1ea4bc:
    if (ctx->pc == 0x1EA4BCu) {
        ctx->pc = 0x1EA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4B8u;
        // 0x1ea4bc: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4C0u;
        goto label_1ea4c0;
    }
    ctx->pc = 0x1EA4B8u;
    {
        const bool branch_taken_0x1ea4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4B8u;
        // 0x1ea4bc: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4b8) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA4C0u;
label_1ea4c0:
    // 0x1ea4c0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea4c4:
    // 0x1ea4c4: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1ea4c8:
    // 0x1ea4c8: 0xc07a59c  jal         func_1E9670
label_1ea4cc:
    if (ctx->pc == 0x1EA4CCu) {
        ctx->pc = 0x1EA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4C8u;
        // 0x1ea4cc: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4D0u;
        goto label_1ea4d0;
    }
    ctx->pc = 0x1EA4C8u;
    SET_GPR_U32(ctx, 31, 0x1EA4D0u);
    ctx->pc = 0x1EA4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4C8u;
    // 0x1ea4cc: 0x32510020  andi        $s1, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA4C8u, 0x1EA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4D0u;
label_1ea4d0:
    // 0x1ea4d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea4d4:
    // 0x1ea4d4: 0xc07a59c  jal         func_1E9670
label_1ea4d8:
    if (ctx->pc == 0x1EA4D8u) {
        ctx->pc = 0x1EA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4D4u;
        // 0x1ea4d8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4DCu;
        goto label_1ea4dc;
    }
    ctx->pc = 0x1EA4D4u;
    SET_GPR_U32(ctx, 31, 0x1EA4DCu);
    ctx->pc = 0x1EA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4D4u;
    // 0x1ea4d8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA4D4u, 0x1EA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4DCu;
label_1ea4dc:
    // 0x1ea4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea4e0:
    // 0x1ea4e0: 0xc07a574  jal         func_1E95D0
label_1ea4e4:
    if (ctx->pc == 0x1EA4E4u) {
        ctx->pc = 0x1EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E0u;
        // 0x1ea4e4: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4E8u;
        goto label_1ea4e8;
    }
    ctx->pc = 0x1EA4E0u;
    SET_GPR_U32(ctx, 31, 0x1EA4E8u);
    ctx->pc = 0x1EA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4E0u;
    // 0x1ea4e4: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA4E0u, 0x1EA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4E8u;
label_1ea4e8:
    // 0x1ea4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea4ec:
    // 0x1ea4ec: 0xc07a574  jal         func_1E95D0
label_1ea4f0:
    if (ctx->pc == 0x1EA4F0u) {
        ctx->pc = 0x1EA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4ECu;
        // 0x1ea4f0: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA4F4u;
        goto label_1ea4f4;
    }
    ctx->pc = 0x1EA4ECu;
    SET_GPR_U32(ctx, 31, 0x1EA4F4u);
    ctx->pc = 0x1EA4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA4ECu;
    // 0x1ea4f0: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA4ECu, 0x1EA4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA4F4u;
label_1ea4f4:
    // 0x1ea4f4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea4f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea4f8:
    // 0x1ea4f8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea4fc:
    // 0x1ea4fc: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea4fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea500:
    // 0x1ea500: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea504:
    // 0x1ea504: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea508:
    // 0x1ea508: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ea50c:
    // 0x1ea50c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1ea510:
    // 0x1ea510: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ea514:
    // 0x1ea514: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1ea518:
    // 0x1ea518: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea51c:
    // 0x1ea51c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1ea520:
    if (ctx->pc == 0x1EA520u) {
        ctx->pc = 0x1EA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA51Cu;
        // 0x1ea520: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA524u;
        goto label_1ea524;
    }
    ctx->pc = 0x1EA51Cu;
    {
        const bool branch_taken_0x1ea51c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA51Cu;
        // 0x1ea520: 0x64b025  or          $s6, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea51c) {
            ctx->pc = 0x1EA548u;
            goto label_1ea548;
        }
    }
    ctx->pc = 0x1EA524u;
label_1ea524:
    // 0x1ea524: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1ea528:
    // 0x1ea528: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1ea528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ea52c:
    // 0x1ea52c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ea52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ea530:
    // 0x1ea530: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ea530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1ea534:
    // 0x1ea534: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1ea534u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1ea538:
    // 0x1ea538: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ea538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ea53c:
    // 0x1ea53c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ea53cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1ea540:
    // 0x1ea540: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ea544:
    if (ctx->pc == 0x1EA544u) {
        ctx->pc = 0x1EA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA540u;
        // 0x1ea544: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA548u;
        goto label_1ea548;
    }
    ctx->pc = 0x1EA540u;
    {
        const bool branch_taken_0x1ea540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA540u;
        // 0x1ea544: 0x83a821  addu        $s5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea540) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA548u;
label_1ea548:
    // 0x1ea548: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea54c:
    // 0x1ea54c: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x1ea54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1ea550:
    // 0x1ea550: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ea554:
    // 0x1ea554: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ea554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ea558:
    // 0x1ea558: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea55c:
    // 0x1ea55c: 0x83a821  addu        $s5, $a0, $v1
    ctx->pc = 0x1ea55cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea560:
    // 0x1ea560: 0x8fb100dc  lw          $s1, 0xDC($sp)
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1ea564:
    // 0x1ea564: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea568:
    // 0x1ea568: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1ea568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ea56c:
    // 0x1ea56c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1ea570:
    if (ctx->pc == 0x1EA570u) {
        ctx->pc = 0x1EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA56Cu;
        // 0x1ea570: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA574u;
        goto label_1ea574;
    }
    ctx->pc = 0x1EA56Cu;
    {
        const bool branch_taken_0x1ea56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA56Cu;
        // 0x1ea570: 0x2a3a821  addu        $s5, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea56c) {
            ctx->pc = 0x1EA598u;
            goto label_1ea598;
        }
    }
    ctx->pc = 0x1EA574u;
label_1ea574:
    // 0x1ea574: 0x0  nop
    ctx->pc = 0x1ea574u;
    // NOP
label_1ea578:
    // 0x1ea578: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1ea57c:
    // 0x1ea57c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea580:
    // 0x1ea580: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x1ea580u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1ea584:
    // 0x1ea584: 0x2c0f809  jalr        $s6
label_1ea588:
    if (ctx->pc == 0x1EA588u) {
        ctx->pc = 0x1EA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA584u;
        // 0x1ea588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA58Cu;
        goto label_1ea58c;
    }
    ctx->pc = 0x1EA584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x1EA58Cu);
        ctx->pc = 0x1EA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA584u;
        // 0x1ea588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA584u, 0x1EA58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA58Cu;
label_1ea58c:
    // 0x1ea58c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ea590:
    // 0x1ea590: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
label_1ea594:
    if (ctx->pc == 0x1EA594u) {
        ctx->pc = 0x1EA598u;
        goto label_1ea598;
    }
    ctx->pc = 0x1EA590u;
    {
        const bool branch_taken_0x1ea590 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea590) {
            ctx->pc = 0x1EA574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea574;
        }
    }
    ctx->pc = 0x1EA598u;
label_1ea598:
    // 0x1ea598: 0x10000091  b           . + 4 + (0x91 << 2)
label_1ea59c:
    if (ctx->pc == 0x1EA59Cu) {
        ctx->pc = 0x1EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA598u;
        // 0x1ea59c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5A0u;
        goto label_1ea5a0;
    }
    ctx->pc = 0x1EA598u;
    {
        const bool branch_taken_0x1ea598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA598u;
        // 0x1ea59c: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea598) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA5A0u;
label_1ea5a0:
    // 0x1ea5a0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea5a4:
    // 0x1ea5a4: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x1ea5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1ea5a8:
    // 0x1ea5a8: 0xc07a59c  jal         func_1E9670
label_1ea5ac:
    if (ctx->pc == 0x1EA5ACu) {
        ctx->pc = 0x1EA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5A8u;
        // 0x1ea5ac: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5B0u;
        goto label_1ea5b0;
    }
    ctx->pc = 0x1EA5A8u;
    SET_GPR_U32(ctx, 31, 0x1EA5B0u);
    ctx->pc = 0x1EA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA5A8u;
    // 0x1ea5ac: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA5A8u, 0x1EA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA5B0u;
label_1ea5b0:
    // 0x1ea5b0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1ea5b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea5b4:
    // 0x1ea5b4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea5b8:
    // 0x1ea5b8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1ea5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea5bc:
    // 0x1ea5bc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ea5bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea5c0:
    // 0x1ea5c0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ea5c4:
    // 0x1ea5c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea5c8:
    // 0x1ea5c8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ea5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea5cc:
    // 0x1ea5cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea5d0:
    // 0x1ea5d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ea5d4:
    // 0x1ea5d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea5d8:
    // 0x1ea5d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea5dc:
    if (ctx->pc == 0x1EA5DCu) {
        ctx->pc = 0x1EA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D8u;
        // 0x1ea5dc: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5E0u;
        goto label_1ea5e0;
    }
    ctx->pc = 0x1EA5D8u;
    {
        const bool branch_taken_0x1ea5d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5D8u;
        // 0x1ea5dc: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5d8) {
            ctx->pc = 0x1EA5FCu;
            goto label_1ea5fc;
        }
    }
    ctx->pc = 0x1EA5E0u;
label_1ea5e0:
    // 0x1ea5e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1ea5e4:
    // 0x1ea5e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea5e8:
    // 0x1ea5e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea5ec:
    // 0x1ea5ec: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea5ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ea5f0:
    // 0x1ea5f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1ea5f4:
    // 0x1ea5f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea5f8:
    if (ctx->pc == 0x1EA5F8u) {
        ctx->pc = 0x1EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5F4u;
        // 0x1ea5f8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA5FCu;
        goto label_1ea5fc;
    }
    ctx->pc = 0x1EA5F4u;
    {
        const bool branch_taken_0x1ea5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA5F4u;
        // 0x1ea5f8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5f4) {
            ctx->pc = 0x1EA610u;
            goto label_1ea610;
        }
    }
    ctx->pc = 0x1EA5FCu;
label_1ea5fc:
    // 0x1ea5fc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea600:
    // 0x1ea600: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1ea604:
    // 0x1ea604: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ea608:
    // 0x1ea608: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea60c:
    // 0x1ea60c: 0x0  nop
    ctx->pc = 0x1ea60cu;
    // NOP
label_1ea610:
    // 0x1ea610: 0xa0f809  jalr        $a1
label_1ea614:
    if (ctx->pc == 0x1EA614u) {
        ctx->pc = 0x1EA618u;
        goto label_1ea618;
    }
    ctx->pc = 0x1EA610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EA618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA610u, 0x1EA618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA618u;
label_1ea618:
    // 0x1ea618: 0x10000071  b           . + 4 + (0x71 << 2)
label_1ea61c:
    if (ctx->pc == 0x1EA61Cu) {
        ctx->pc = 0x1EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA618u;
        // 0x1ea61c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA620u;
        goto label_1ea620;
    }
    ctx->pc = 0x1EA618u;
    {
        const bool branch_taken_0x1ea618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA618u;
        // 0x1ea61c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea618) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA620u;
label_1ea620:
    // 0x1ea620: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea624:
    // 0x1ea624: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1ea624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ea628:
    // 0x1ea628: 0x32550040  andi        $s5, $s2, 0x40
    ctx->pc = 0x1ea628u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
label_1ea62c:
    // 0x1ea62c: 0xc07a59c  jal         func_1E9670
label_1ea630:
    if (ctx->pc == 0x1EA630u) {
        ctx->pc = 0x1EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA62Cu;
        // 0x1ea630: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA634u;
        goto label_1ea634;
    }
    ctx->pc = 0x1EA62Cu;
    SET_GPR_U32(ctx, 31, 0x1EA634u);
    ctx->pc = 0x1EA630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA62Cu;
    // 0x1ea630: 0x32500020  andi        $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA62Cu, 0x1EA634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA634u;
label_1ea634:
    // 0x1ea634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea638:
    // 0x1ea638: 0xc07a59c  jal         func_1E9670
label_1ea63c:
    if (ctx->pc == 0x1EA63Cu) {
        ctx->pc = 0x1EA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA638u;
        // 0x1ea63c: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA640u;
        goto label_1ea640;
    }
    ctx->pc = 0x1EA638u;
    SET_GPR_U32(ctx, 31, 0x1EA640u);
    ctx->pc = 0x1EA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA638u;
    // 0x1ea63c: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA638u, 0x1EA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA640u;
label_1ea640:
    // 0x1ea640: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1ea640u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ea644:
    // 0x1ea644: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1ea644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ea648:
    // 0x1ea648: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1ea648u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1ea64c:
    // 0x1ea64c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ea64cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ea650:
    // 0x1ea650: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ea650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea654:
    // 0x1ea654: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1ea654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ea658:
    // 0x1ea658: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ea658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1ea65c:
    // 0x1ea65c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ea65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ea660:
    // 0x1ea660: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1ea660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1ea664:
    // 0x1ea664: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ea664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1ea668:
    // 0x1ea668: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_1ea66c:
    if (ctx->pc == 0x1EA66Cu) {
        ctx->pc = 0x1EA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA668u;
        // 0x1ea66c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA670u;
        goto label_1ea670;
    }
    ctx->pc = 0x1EA668u;
    {
        const bool branch_taken_0x1ea668 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA668u;
        // 0x1ea66c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea668) {
            ctx->pc = 0x1EA68Cu;
            goto label_1ea68c;
        }
    }
    ctx->pc = 0x1EA670u;
label_1ea670:
    // 0x1ea670: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1ea674:
    // 0x1ea674: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ea674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ea678:
    // 0x1ea678: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ea678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1ea67c:
    // 0x1ea67c: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x1ea67cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1ea680:
    // 0x1ea680: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x1ea680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_1ea684:
    // 0x1ea684: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea688:
    if (ctx->pc == 0x1EA688u) {
        ctx->pc = 0x1EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA684u;
        // 0x1ea688: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA68Cu;
        goto label_1ea68c;
    }
    ctx->pc = 0x1EA684u;
    {
        const bool branch_taken_0x1ea684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA684u;
        // 0x1ea688: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea684) {
            ctx->pc = 0x1EA6A0u;
            goto label_1ea6a0;
        }
    }
    ctx->pc = 0x1EA68Cu;
label_1ea68c:
    // 0x1ea68c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea690:
    // 0x1ea690: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1ea690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1ea694:
    // 0x1ea694: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ea694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ea698:
    // 0x1ea698: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1ea698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1ea69c:
    // 0x1ea69c: 0x0  nop
    ctx->pc = 0x1ea69cu;
    // NOP
label_1ea6a0:
    // 0x1ea6a0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_1ea6a4:
    if (ctx->pc == 0x1EA6A4u) {
        ctx->pc = 0x1EA6A8u;
        goto label_1ea6a8;
    }
    ctx->pc = 0x1EA6A0u;
    {
        const bool branch_taken_0x1ea6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea6a0) {
            ctx->pc = 0x1EA6E8u;
            goto label_1ea6e8;
        }
    }
    ctx->pc = 0x1EA6A8u;
label_1ea6a8:
    // 0x1ea6a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ea6ac:
    if (ctx->pc == 0x1EA6ACu) {
        ctx->pc = 0x1EA6B0u;
        goto label_1ea6b0;
    }
    ctx->pc = 0x1EA6A8u;
    {
        const bool branch_taken_0x1ea6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea6a8) {
            ctx->pc = 0x1EA6CCu;
            goto label_1ea6cc;
        }
    }
    ctx->pc = 0x1EA6B0u;
label_1ea6b0:
    // 0x1ea6b0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1ea6b4:
    // 0x1ea6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ea6b8:
    // 0x1ea6b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea6bc:
    // 0x1ea6bc: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea6bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1ea6c0:
    // 0x1ea6c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1ea6c4:
    // 0x1ea6c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ea6c8:
    if (ctx->pc == 0x1EA6C8u) {
        ctx->pc = 0x1EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6C4u;
        // 0x1ea6c8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6CCu;
        goto label_1ea6cc;
    }
    ctx->pc = 0x1EA6C4u;
    {
        const bool branch_taken_0x1ea6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6C4u;
        // 0x1ea6c8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6c4) {
            ctx->pc = 0x1EA6E0u;
            goto label_1ea6e0;
        }
    }
    ctx->pc = 0x1EA6CCu;
label_1ea6cc:
    // 0x1ea6cc: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea6d0:
    // 0x1ea6d0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_1ea6d4:
    // 0x1ea6d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ea6d8:
    // 0x1ea6d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea6dc:
    // 0x1ea6dc: 0x0  nop
    ctx->pc = 0x1ea6dcu;
    // NOP
label_1ea6e0:
    // 0x1ea6e0: 0x60f809  jalr        $v1
label_1ea6e4:
    if (ctx->pc == 0x1EA6E4u) {
        ctx->pc = 0x1EA6E8u;
        goto label_1ea6e8;
    }
    ctx->pc = 0x1EA6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA6E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6E0u, 0x1EA6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA6E8u;
label_1ea6e8:
    // 0x1ea6e8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1ea6ec:
    if (ctx->pc == 0x1EA6ECu) {
        ctx->pc = 0x1EA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E8u;
        // 0x1ea6ec: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA6F0u;
        goto label_1ea6f0;
    }
    ctx->pc = 0x1EA6E8u;
    {
        const bool branch_taken_0x1ea6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6E8u;
        // 0x1ea6ec: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6e8) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA6F0u;
label_1ea6f0:
    // 0x1ea6f0: 0x12e80040  beq         $s7, $t0, . + 4 + (0x40 << 2)
label_1ea6f4:
    if (ctx->pc == 0x1EA6F4u) {
        ctx->pc = 0x1EA6F8u;
        goto label_1ea6f8;
    }
    ctx->pc = 0x1EA6F0u;
    {
        const bool branch_taken_0x1ea6f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ea6f0) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA6F8u;
label_1ea6f8:
    // 0x1ea6f8: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x1ea6f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_1ea6fc:
    // 0x1ea6fc: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x1ea6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_1ea700:
    // 0x1ea700: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1ea700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_1ea704:
    // 0x1ea704: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x1ea704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1ea708:
    // 0x1ea708: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x1ea708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_1ea70c:
    // 0x1ea70c: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x1ea70cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_1ea710:
    // 0x1ea710: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1ea714:
    // 0x1ea714: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ea714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1ea718:
    // 0x1ea718: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ea718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ea71c:
    // 0x1ea71c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ea71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1ea720:
    // 0x1ea720: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ea720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1ea724:
    // 0x1ea724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ea728:
    // 0x1ea728: 0xc07a574  jal         func_1E95D0
label_1ea72c:
    if (ctx->pc == 0x1EA72Cu) {
        ctx->pc = 0x1EA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA728u;
        // 0x1ea72c: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA730u;
        goto label_1ea730;
    }
    ctx->pc = 0x1EA728u;
    SET_GPR_U32(ctx, 31, 0x1EA730u);
    ctx->pc = 0x1EA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA728u;
    // 0x1ea72c: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA728u, 0x1EA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA730u;
label_1ea730:
    // 0x1ea730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea734:
    // 0x1ea734: 0xc07a59c  jal         func_1E9670
label_1ea738:
    if (ctx->pc == 0x1EA738u) {
        ctx->pc = 0x1EA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA734u;
        // 0x1ea738: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA73Cu;
        goto label_1ea73c;
    }
    ctx->pc = 0x1EA734u;
    SET_GPR_U32(ctx, 31, 0x1EA73Cu);
    ctx->pc = 0x1EA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA734u;
    // 0x1ea738: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA734u, 0x1EA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA73Cu;
label_1ea73c:
    // 0x1ea73c: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ea740:
    if (ctx->pc == 0x1EA740u) {
        ctx->pc = 0x1EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA73Cu;
        // 0x1ea740: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA744u;
        goto label_1ea744;
    }
    ctx->pc = 0x1EA73Cu;
    {
        const bool branch_taken_0x1ea73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA73Cu;
        // 0x1ea740: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea73c) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA744u;
label_1ea744:
    // 0x1ea744: 0x0  nop
    ctx->pc = 0x1ea744u;
    // NOP
label_1ea748:
    // 0x1ea748: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ea74c:
    // 0x1ea74c: 0xc07a59c  jal         func_1E9670
label_1ea750:
    if (ctx->pc == 0x1EA750u) {
        ctx->pc = 0x1EA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA74Cu;
        // 0x1ea750: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA754u;
        goto label_1ea754;
    }
    ctx->pc = 0x1EA74Cu;
    SET_GPR_U32(ctx, 31, 0x1EA754u);
    ctx->pc = 0x1EA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA74Cu;
    // 0x1ea750: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA74Cu, 0x1EA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA754u;
label_1ea754:
    // 0x1ea754: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea758:
    // 0x1ea758: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1ea758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1ea75c:
    // 0x1ea75c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ea75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ea760:
    // 0x1ea760: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ea764:
    // 0x1ea764: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_1ea768:
    if (ctx->pc == 0x1EA768u) {
        ctx->pc = 0x1EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA764u;
        // 0x1ea768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA76Cu;
        goto label_1ea76c;
    }
    ctx->pc = 0x1EA764u;
    {
        const bool branch_taken_0x1ea764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA764u;
        // 0x1ea768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea764) {
            ctx->pc = 0x1EA790u;
            goto label_1ea790;
        }
    }
    ctx->pc = 0x1EA76Cu;
label_1ea76c:
    // 0x1ea76c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ea770:
    // 0x1ea770: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1ea774:
    // 0x1ea774: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1ea778:
    if (ctx->pc == 0x1EA778u) {
        ctx->pc = 0x1EA77Cu;
        goto label_1ea77c;
    }
    ctx->pc = 0x1EA774u;
    {
        const bool branch_taken_0x1ea774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea774) {
            ctx->pc = 0x1EA784u;
            goto label_1ea784;
        }
    }
    ctx->pc = 0x1EA77Cu;
label_1ea77c:
    // 0x1ea77c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ea780:
    if (ctx->pc == 0x1EA780u) {
        ctx->pc = 0x1EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA77Cu;
        // 0x1ea780: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA784u;
        goto label_1ea784;
    }
    ctx->pc = 0x1EA77Cu;
    {
        const bool branch_taken_0x1ea77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA77Cu;
        // 0x1ea780: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea77c) {
            ctx->pc = 0x1EA790u;
            goto label_1ea790;
        }
    }
    ctx->pc = 0x1EA784u;
label_1ea784:
    // 0x1ea784: 0x0  nop
    ctx->pc = 0x1ea784u;
    // NOP
label_1ea788:
    // 0x1ea788: 0xc0f809  jalr        $a2
label_1ea78c:
    if (ctx->pc == 0x1EA78Cu) {
        ctx->pc = 0x1EA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA788u;
        // 0x1ea78c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA790u;
        goto label_1ea790;
    }
    ctx->pc = 0x1EA788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA790u);
        ctx->pc = 0x1EA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA788u;
        // 0x1ea78c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA788u, 0x1EA790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA790u;
label_1ea790:
    // 0x1ea790: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ea794:
    if (ctx->pc == 0x1EA794u) {
        ctx->pc = 0x1EA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA790u;
        // 0x1ea794: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA798u;
        goto label_1ea798;
    }
    ctx->pc = 0x1EA790u;
    {
        const bool branch_taken_0x1ea790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA790u;
        // 0x1ea794: 0xae700008  sw          $s0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea790) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA798u;
label_1ea798:
    // 0x1ea798: 0x12e80016  beq         $s7, $t0, . + 4 + (0x16 << 2)
label_1ea79c:
    if (ctx->pc == 0x1EA79Cu) {
        ctx->pc = 0x1EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA798u;
        // 0x1ea79c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7A0u;
        goto label_1ea7a0;
    }
    ctx->pc = 0x1EA798u;
    {
        const bool branch_taken_0x1ea798 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 8));
        ctx->pc = 0x1EA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA798u;
        // 0x1ea79c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea798) {
            ctx->pc = 0x1EA7F4u;
            goto label_1ea7f4;
        }
    }
    ctx->pc = 0x1EA7A0u;
label_1ea7a0:
    // 0x1ea7a0: 0xc07a574  jal         func_1E95D0
label_1ea7a4:
    if (ctx->pc == 0x1EA7A4u) {
        ctx->pc = 0x1EA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7A0u;
        // 0x1ea7a4: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7A8u;
        goto label_1ea7a8;
    }
    ctx->pc = 0x1EA7A0u;
    SET_GPR_U32(ctx, 31, 0x1EA7A8u);
    ctx->pc = 0x1EA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7A0u;
    // 0x1ea7a4: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA7A0u, 0x1EA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7A8u;
label_1ea7a8:
    // 0x1ea7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea7ac:
    // 0x1ea7ac: 0xc07a574  jal         func_1E95D0
label_1ea7b0:
    if (ctx->pc == 0x1EA7B0u) {
        ctx->pc = 0x1EA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7ACu;
        // 0x1ea7b0: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7B4u;
        goto label_1ea7b4;
    }
    ctx->pc = 0x1EA7ACu;
    SET_GPR_U32(ctx, 31, 0x1EA7B4u);
    ctx->pc = 0x1EA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7ACu;
    // 0x1ea7b0: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EA7ACu, 0x1EA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7B4u;
label_1ea7b4:
    // 0x1ea7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea7b8:
    // 0x1ea7b8: 0xc07a59c  jal         func_1E9670
label_1ea7bc:
    if (ctx->pc == 0x1EA7BCu) {
        ctx->pc = 0x1EA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7B8u;
        // 0x1ea7bc: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7C0u;
        goto label_1ea7c0;
    }
    ctx->pc = 0x1EA7B8u;
    SET_GPR_U32(ctx, 31, 0x1EA7C0u);
    ctx->pc = 0x1EA7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA7B8u;
    // 0x1ea7bc: 0x27a50104  addiu       $a1, $sp, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA7B8u, 0x1EA7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7C0u;
label_1ea7c0:
    // 0x1ea7c0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1ea7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1ea7c4:
    // 0x1ea7c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ea7c8:
    // 0x1ea7c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ea7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea7cc:
    // 0x1ea7cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ea7d0:
    if (ctx->pc == 0x1EA7D0u) {
        ctx->pc = 0x1EA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7CCu;
        // 0x1ea7d0: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7D4u;
        goto label_1ea7d4;
    }
    ctx->pc = 0x1EA7CCu;
    {
        const bool branch_taken_0x1ea7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7CCu;
        // 0x1ea7d0: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7cc) {
            ctx->pc = 0x1EA7E0u;
            goto label_1ea7e0;
        }
    }
    ctx->pc = 0x1EA7D4u;
label_1ea7d4:
    // 0x1ea7d4: 0x0  nop
    ctx->pc = 0x1ea7d4u;
    // NOP
label_1ea7d8:
    // 0x1ea7d8: 0xc07a520  jal         func_1E9480
label_1ea7dc:
    if (ctx->pc == 0x1EA7DCu) {
        ctx->pc = 0x1EA7E0u;
        goto label_1ea7e0;
    }
    ctx->pc = 0x1EA7D8u;
    SET_GPR_U32(ctx, 31, 0x1EA7E0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EA7D8u, 0x1EA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7E0u;
label_1ea7e0:
    // 0x1ea7e0: 0x32430080  andi        $v1, $s2, 0x80
    ctx->pc = 0x1ea7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
label_1ea7e4:
    // 0x1ea7e4: 0x1060fe03  beqz        $v1, . + 4 + (-0x1FD << 2)
label_1ea7e8:
    if (ctx->pc == 0x1EA7E8u) {
        ctx->pc = 0x1EA7ECu;
        goto label_1ea7ec;
    }
    ctx->pc = 0x1EA7E4u;
    {
        const bool branch_taken_0x1ea7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea7e4) {
            ctx->pc = 0x1E9FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ff4;
        }
    }
    ctx->pc = 0x1EA7ECu;
label_1ea7ec:
    // 0x1ea7ec: 0x1000fe01  b           . + 4 + (-0x1FF << 2)
label_1ea7f0:
    if (ctx->pc == 0x1EA7F0u) {
        ctx->pc = 0x1EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7ECu;
        // 0x1ea7f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA7F4u;
        goto label_1ea7f4;
    }
    ctx->pc = 0x1EA7ECu;
    {
        const bool branch_taken_0x1ea7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7ECu;
        // 0x1ea7f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7ec) {
            ctx->pc = 0x1E9FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ff4;
        }
    }
    ctx->pc = 0x1EA7F4u;
label_1ea7f4:
    // 0x1ea7f4: 0x0  nop
    ctx->pc = 0x1ea7f4u;
    // NOP
label_1ea7f8:
    // 0x1ea7f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ea7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea7fc:
    // 0x1ea7fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ea7fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea800:
    // 0x1ea800: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ea800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea804:
    // 0x1ea804: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ea804u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea808:
    // 0x1ea808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea80c:
    // 0x1ea80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea810:
    // 0x1ea810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea814:
    // 0x1ea814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea818:
    // 0x1ea818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea81c:
    // 0x1ea81c: 0x3e00008  jr          $ra
label_1ea820:
    if (ctx->pc == 0x1EA820u) {
        ctx->pc = 0x1EA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA81Cu;
        // 0x1ea820: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA824u;
        goto label_fallthrough_0x1ea81c;
    }
    ctx->pc = 0x1EA81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA81Cu;
        // 0x1ea820: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea81c:
    ctx->pc = 0x1EA824u;
}
