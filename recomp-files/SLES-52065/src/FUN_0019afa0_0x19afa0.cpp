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

// Function: FUN_0019afa0
// Address: 0x19afa0 - 0x19b710
void FUN_0019afa0_0x19afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019afa0_0x19afa0");
#endif

    switch (ctx->pc) {
        case 0x19afa0u: goto label_19afa0;
        case 0x19afa4u: goto label_19afa4;
        case 0x19afa8u: goto label_19afa8;
        case 0x19afacu: goto label_19afac;
        case 0x19afb0u: goto label_19afb0;
        case 0x19afb4u: goto label_19afb4;
        case 0x19afb8u: goto label_19afb8;
        case 0x19afbcu: goto label_19afbc;
        case 0x19afc0u: goto label_19afc0;
        case 0x19afc4u: goto label_19afc4;
        case 0x19afc8u: goto label_19afc8;
        case 0x19afccu: goto label_19afcc;
        case 0x19afd0u: goto label_19afd0;
        case 0x19afd4u: goto label_19afd4;
        case 0x19afd8u: goto label_19afd8;
        case 0x19afdcu: goto label_19afdc;
        case 0x19afe0u: goto label_19afe0;
        case 0x19afe4u: goto label_19afe4;
        case 0x19afe8u: goto label_19afe8;
        case 0x19afecu: goto label_19afec;
        case 0x19aff0u: goto label_19aff0;
        case 0x19aff4u: goto label_19aff4;
        case 0x19aff8u: goto label_19aff8;
        case 0x19affcu: goto label_19affc;
        case 0x19b000u: goto label_19b000;
        case 0x19b004u: goto label_19b004;
        case 0x19b008u: goto label_19b008;
        case 0x19b00cu: goto label_19b00c;
        case 0x19b010u: goto label_19b010;
        case 0x19b014u: goto label_19b014;
        case 0x19b018u: goto label_19b018;
        case 0x19b01cu: goto label_19b01c;
        case 0x19b020u: goto label_19b020;
        case 0x19b024u: goto label_19b024;
        case 0x19b028u: goto label_19b028;
        case 0x19b02cu: goto label_19b02c;
        case 0x19b030u: goto label_19b030;
        case 0x19b034u: goto label_19b034;
        case 0x19b038u: goto label_19b038;
        case 0x19b03cu: goto label_19b03c;
        case 0x19b040u: goto label_19b040;
        case 0x19b044u: goto label_19b044;
        case 0x19b048u: goto label_19b048;
        case 0x19b04cu: goto label_19b04c;
        case 0x19b050u: goto label_19b050;
        case 0x19b054u: goto label_19b054;
        case 0x19b058u: goto label_19b058;
        case 0x19b05cu: goto label_19b05c;
        case 0x19b060u: goto label_19b060;
        case 0x19b064u: goto label_19b064;
        case 0x19b068u: goto label_19b068;
        case 0x19b06cu: goto label_19b06c;
        case 0x19b070u: goto label_19b070;
        case 0x19b074u: goto label_19b074;
        case 0x19b078u: goto label_19b078;
        case 0x19b07cu: goto label_19b07c;
        case 0x19b080u: goto label_19b080;
        case 0x19b084u: goto label_19b084;
        case 0x19b088u: goto label_19b088;
        case 0x19b08cu: goto label_19b08c;
        case 0x19b090u: goto label_19b090;
        case 0x19b094u: goto label_19b094;
        case 0x19b098u: goto label_19b098;
        case 0x19b09cu: goto label_19b09c;
        case 0x19b0a0u: goto label_19b0a0;
        case 0x19b0a4u: goto label_19b0a4;
        case 0x19b0a8u: goto label_19b0a8;
        case 0x19b0acu: goto label_19b0ac;
        case 0x19b0b0u: goto label_19b0b0;
        case 0x19b0b4u: goto label_19b0b4;
        case 0x19b0b8u: goto label_19b0b8;
        case 0x19b0bcu: goto label_19b0bc;
        case 0x19b0c0u: goto label_19b0c0;
        case 0x19b0c4u: goto label_19b0c4;
        case 0x19b0c8u: goto label_19b0c8;
        case 0x19b0ccu: goto label_19b0cc;
        case 0x19b0d0u: goto label_19b0d0;
        case 0x19b0d4u: goto label_19b0d4;
        case 0x19b0d8u: goto label_19b0d8;
        case 0x19b0dcu: goto label_19b0dc;
        case 0x19b0e0u: goto label_19b0e0;
        case 0x19b0e4u: goto label_19b0e4;
        case 0x19b0e8u: goto label_19b0e8;
        case 0x19b0ecu: goto label_19b0ec;
        case 0x19b0f0u: goto label_19b0f0;
        case 0x19b0f4u: goto label_19b0f4;
        case 0x19b0f8u: goto label_19b0f8;
        case 0x19b0fcu: goto label_19b0fc;
        case 0x19b100u: goto label_19b100;
        case 0x19b104u: goto label_19b104;
        case 0x19b108u: goto label_19b108;
        case 0x19b10cu: goto label_19b10c;
        case 0x19b110u: goto label_19b110;
        case 0x19b114u: goto label_19b114;
        case 0x19b118u: goto label_19b118;
        case 0x19b11cu: goto label_19b11c;
        case 0x19b120u: goto label_19b120;
        case 0x19b124u: goto label_19b124;
        case 0x19b128u: goto label_19b128;
        case 0x19b12cu: goto label_19b12c;
        case 0x19b130u: goto label_19b130;
        case 0x19b134u: goto label_19b134;
        case 0x19b138u: goto label_19b138;
        case 0x19b13cu: goto label_19b13c;
        case 0x19b140u: goto label_19b140;
        case 0x19b144u: goto label_19b144;
        case 0x19b148u: goto label_19b148;
        case 0x19b14cu: goto label_19b14c;
        case 0x19b150u: goto label_19b150;
        case 0x19b154u: goto label_19b154;
        case 0x19b158u: goto label_19b158;
        case 0x19b15cu: goto label_19b15c;
        case 0x19b160u: goto label_19b160;
        case 0x19b164u: goto label_19b164;
        case 0x19b168u: goto label_19b168;
        case 0x19b16cu: goto label_19b16c;
        case 0x19b170u: goto label_19b170;
        case 0x19b174u: goto label_19b174;
        case 0x19b178u: goto label_19b178;
        case 0x19b17cu: goto label_19b17c;
        case 0x19b180u: goto label_19b180;
        case 0x19b184u: goto label_19b184;
        case 0x19b188u: goto label_19b188;
        case 0x19b18cu: goto label_19b18c;
        case 0x19b190u: goto label_19b190;
        case 0x19b194u: goto label_19b194;
        case 0x19b198u: goto label_19b198;
        case 0x19b19cu: goto label_19b19c;
        case 0x19b1a0u: goto label_19b1a0;
        case 0x19b1a4u: goto label_19b1a4;
        case 0x19b1a8u: goto label_19b1a8;
        case 0x19b1acu: goto label_19b1ac;
        case 0x19b1b0u: goto label_19b1b0;
        case 0x19b1b4u: goto label_19b1b4;
        case 0x19b1b8u: goto label_19b1b8;
        case 0x19b1bcu: goto label_19b1bc;
        case 0x19b1c0u: goto label_19b1c0;
        case 0x19b1c4u: goto label_19b1c4;
        case 0x19b1c8u: goto label_19b1c8;
        case 0x19b1ccu: goto label_19b1cc;
        case 0x19b1d0u: goto label_19b1d0;
        case 0x19b1d4u: goto label_19b1d4;
        case 0x19b1d8u: goto label_19b1d8;
        case 0x19b1dcu: goto label_19b1dc;
        case 0x19b1e0u: goto label_19b1e0;
        case 0x19b1e4u: goto label_19b1e4;
        case 0x19b1e8u: goto label_19b1e8;
        case 0x19b1ecu: goto label_19b1ec;
        case 0x19b1f0u: goto label_19b1f0;
        case 0x19b1f4u: goto label_19b1f4;
        case 0x19b1f8u: goto label_19b1f8;
        case 0x19b1fcu: goto label_19b1fc;
        case 0x19b200u: goto label_19b200;
        case 0x19b204u: goto label_19b204;
        case 0x19b208u: goto label_19b208;
        case 0x19b20cu: goto label_19b20c;
        case 0x19b210u: goto label_19b210;
        case 0x19b214u: goto label_19b214;
        case 0x19b218u: goto label_19b218;
        case 0x19b21cu: goto label_19b21c;
        case 0x19b220u: goto label_19b220;
        case 0x19b224u: goto label_19b224;
        case 0x19b228u: goto label_19b228;
        case 0x19b22cu: goto label_19b22c;
        case 0x19b230u: goto label_19b230;
        case 0x19b234u: goto label_19b234;
        case 0x19b238u: goto label_19b238;
        case 0x19b23cu: goto label_19b23c;
        case 0x19b240u: goto label_19b240;
        case 0x19b244u: goto label_19b244;
        case 0x19b248u: goto label_19b248;
        case 0x19b24cu: goto label_19b24c;
        case 0x19b250u: goto label_19b250;
        case 0x19b254u: goto label_19b254;
        case 0x19b258u: goto label_19b258;
        case 0x19b25cu: goto label_19b25c;
        case 0x19b260u: goto label_19b260;
        case 0x19b264u: goto label_19b264;
        case 0x19b268u: goto label_19b268;
        case 0x19b26cu: goto label_19b26c;
        case 0x19b270u: goto label_19b270;
        case 0x19b274u: goto label_19b274;
        case 0x19b278u: goto label_19b278;
        case 0x19b27cu: goto label_19b27c;
        case 0x19b280u: goto label_19b280;
        case 0x19b284u: goto label_19b284;
        case 0x19b288u: goto label_19b288;
        case 0x19b28cu: goto label_19b28c;
        case 0x19b290u: goto label_19b290;
        case 0x19b294u: goto label_19b294;
        case 0x19b298u: goto label_19b298;
        case 0x19b29cu: goto label_19b29c;
        case 0x19b2a0u: goto label_19b2a0;
        case 0x19b2a4u: goto label_19b2a4;
        case 0x19b2a8u: goto label_19b2a8;
        case 0x19b2acu: goto label_19b2ac;
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2b4u: goto label_19b2b4;
        case 0x19b2b8u: goto label_19b2b8;
        case 0x19b2bcu: goto label_19b2bc;
        case 0x19b2c0u: goto label_19b2c0;
        case 0x19b2c4u: goto label_19b2c4;
        case 0x19b2c8u: goto label_19b2c8;
        case 0x19b2ccu: goto label_19b2cc;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2d4u: goto label_19b2d4;
        case 0x19b2d8u: goto label_19b2d8;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2e0u: goto label_19b2e0;
        case 0x19b2e4u: goto label_19b2e4;
        case 0x19b2e8u: goto label_19b2e8;
        case 0x19b2ecu: goto label_19b2ec;
        case 0x19b2f0u: goto label_19b2f0;
        case 0x19b2f4u: goto label_19b2f4;
        case 0x19b2f8u: goto label_19b2f8;
        case 0x19b2fcu: goto label_19b2fc;
        case 0x19b300u: goto label_19b300;
        case 0x19b304u: goto label_19b304;
        case 0x19b308u: goto label_19b308;
        case 0x19b30cu: goto label_19b30c;
        case 0x19b310u: goto label_19b310;
        case 0x19b314u: goto label_19b314;
        case 0x19b318u: goto label_19b318;
        case 0x19b31cu: goto label_19b31c;
        case 0x19b320u: goto label_19b320;
        case 0x19b324u: goto label_19b324;
        case 0x19b328u: goto label_19b328;
        case 0x19b32cu: goto label_19b32c;
        case 0x19b330u: goto label_19b330;
        case 0x19b334u: goto label_19b334;
        case 0x19b338u: goto label_19b338;
        case 0x19b33cu: goto label_19b33c;
        case 0x19b340u: goto label_19b340;
        case 0x19b344u: goto label_19b344;
        case 0x19b348u: goto label_19b348;
        case 0x19b34cu: goto label_19b34c;
        case 0x19b350u: goto label_19b350;
        case 0x19b354u: goto label_19b354;
        case 0x19b358u: goto label_19b358;
        case 0x19b35cu: goto label_19b35c;
        case 0x19b360u: goto label_19b360;
        case 0x19b364u: goto label_19b364;
        case 0x19b368u: goto label_19b368;
        case 0x19b36cu: goto label_19b36c;
        case 0x19b370u: goto label_19b370;
        case 0x19b374u: goto label_19b374;
        case 0x19b378u: goto label_19b378;
        case 0x19b37cu: goto label_19b37c;
        case 0x19b380u: goto label_19b380;
        case 0x19b384u: goto label_19b384;
        case 0x19b388u: goto label_19b388;
        case 0x19b38cu: goto label_19b38c;
        case 0x19b390u: goto label_19b390;
        case 0x19b394u: goto label_19b394;
        case 0x19b398u: goto label_19b398;
        case 0x19b39cu: goto label_19b39c;
        case 0x19b3a0u: goto label_19b3a0;
        case 0x19b3a4u: goto label_19b3a4;
        case 0x19b3a8u: goto label_19b3a8;
        case 0x19b3acu: goto label_19b3ac;
        case 0x19b3b0u: goto label_19b3b0;
        case 0x19b3b4u: goto label_19b3b4;
        case 0x19b3b8u: goto label_19b3b8;
        case 0x19b3bcu: goto label_19b3bc;
        case 0x19b3c0u: goto label_19b3c0;
        case 0x19b3c4u: goto label_19b3c4;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b3ccu: goto label_19b3cc;
        case 0x19b3d0u: goto label_19b3d0;
        case 0x19b3d4u: goto label_19b3d4;
        case 0x19b3d8u: goto label_19b3d8;
        case 0x19b3dcu: goto label_19b3dc;
        case 0x19b3e0u: goto label_19b3e0;
        case 0x19b3e4u: goto label_19b3e4;
        case 0x19b3e8u: goto label_19b3e8;
        case 0x19b3ecu: goto label_19b3ec;
        case 0x19b3f0u: goto label_19b3f0;
        case 0x19b3f4u: goto label_19b3f4;
        case 0x19b3f8u: goto label_19b3f8;
        case 0x19b3fcu: goto label_19b3fc;
        case 0x19b400u: goto label_19b400;
        case 0x19b404u: goto label_19b404;
        case 0x19b408u: goto label_19b408;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b410u: goto label_19b410;
        case 0x19b414u: goto label_19b414;
        case 0x19b418u: goto label_19b418;
        case 0x19b41cu: goto label_19b41c;
        case 0x19b420u: goto label_19b420;
        case 0x19b424u: goto label_19b424;
        case 0x19b428u: goto label_19b428;
        case 0x19b42cu: goto label_19b42c;
        case 0x19b430u: goto label_19b430;
        case 0x19b434u: goto label_19b434;
        case 0x19b438u: goto label_19b438;
        case 0x19b43cu: goto label_19b43c;
        case 0x19b440u: goto label_19b440;
        case 0x19b444u: goto label_19b444;
        case 0x19b448u: goto label_19b448;
        case 0x19b44cu: goto label_19b44c;
        case 0x19b450u: goto label_19b450;
        case 0x19b454u: goto label_19b454;
        case 0x19b458u: goto label_19b458;
        case 0x19b45cu: goto label_19b45c;
        case 0x19b460u: goto label_19b460;
        case 0x19b464u: goto label_19b464;
        case 0x19b468u: goto label_19b468;
        case 0x19b46cu: goto label_19b46c;
        case 0x19b470u: goto label_19b470;
        case 0x19b474u: goto label_19b474;
        case 0x19b478u: goto label_19b478;
        case 0x19b47cu: goto label_19b47c;
        case 0x19b480u: goto label_19b480;
        case 0x19b484u: goto label_19b484;
        case 0x19b488u: goto label_19b488;
        case 0x19b48cu: goto label_19b48c;
        case 0x19b490u: goto label_19b490;
        case 0x19b494u: goto label_19b494;
        case 0x19b498u: goto label_19b498;
        case 0x19b49cu: goto label_19b49c;
        case 0x19b4a0u: goto label_19b4a0;
        case 0x19b4a4u: goto label_19b4a4;
        case 0x19b4a8u: goto label_19b4a8;
        case 0x19b4acu: goto label_19b4ac;
        case 0x19b4b0u: goto label_19b4b0;
        case 0x19b4b4u: goto label_19b4b4;
        case 0x19b4b8u: goto label_19b4b8;
        case 0x19b4bcu: goto label_19b4bc;
        case 0x19b4c0u: goto label_19b4c0;
        case 0x19b4c4u: goto label_19b4c4;
        case 0x19b4c8u: goto label_19b4c8;
        case 0x19b4ccu: goto label_19b4cc;
        case 0x19b4d0u: goto label_19b4d0;
        case 0x19b4d4u: goto label_19b4d4;
        case 0x19b4d8u: goto label_19b4d8;
        case 0x19b4dcu: goto label_19b4dc;
        case 0x19b4e0u: goto label_19b4e0;
        case 0x19b4e4u: goto label_19b4e4;
        case 0x19b4e8u: goto label_19b4e8;
        case 0x19b4ecu: goto label_19b4ec;
        case 0x19b4f0u: goto label_19b4f0;
        case 0x19b4f4u: goto label_19b4f4;
        case 0x19b4f8u: goto label_19b4f8;
        case 0x19b4fcu: goto label_19b4fc;
        case 0x19b500u: goto label_19b500;
        case 0x19b504u: goto label_19b504;
        case 0x19b508u: goto label_19b508;
        case 0x19b50cu: goto label_19b50c;
        case 0x19b510u: goto label_19b510;
        case 0x19b514u: goto label_19b514;
        case 0x19b518u: goto label_19b518;
        case 0x19b51cu: goto label_19b51c;
        case 0x19b520u: goto label_19b520;
        case 0x19b524u: goto label_19b524;
        case 0x19b528u: goto label_19b528;
        case 0x19b52cu: goto label_19b52c;
        case 0x19b530u: goto label_19b530;
        case 0x19b534u: goto label_19b534;
        case 0x19b538u: goto label_19b538;
        case 0x19b53cu: goto label_19b53c;
        case 0x19b540u: goto label_19b540;
        case 0x19b544u: goto label_19b544;
        case 0x19b548u: goto label_19b548;
        case 0x19b54cu: goto label_19b54c;
        case 0x19b550u: goto label_19b550;
        case 0x19b554u: goto label_19b554;
        case 0x19b558u: goto label_19b558;
        case 0x19b55cu: goto label_19b55c;
        case 0x19b560u: goto label_19b560;
        case 0x19b564u: goto label_19b564;
        case 0x19b568u: goto label_19b568;
        case 0x19b56cu: goto label_19b56c;
        case 0x19b570u: goto label_19b570;
        case 0x19b574u: goto label_19b574;
        case 0x19b578u: goto label_19b578;
        case 0x19b57cu: goto label_19b57c;
        case 0x19b580u: goto label_19b580;
        case 0x19b584u: goto label_19b584;
        case 0x19b588u: goto label_19b588;
        case 0x19b58cu: goto label_19b58c;
        case 0x19b590u: goto label_19b590;
        case 0x19b594u: goto label_19b594;
        case 0x19b598u: goto label_19b598;
        case 0x19b59cu: goto label_19b59c;
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5a4u: goto label_19b5a4;
        case 0x19b5a8u: goto label_19b5a8;
        case 0x19b5acu: goto label_19b5ac;
        case 0x19b5b0u: goto label_19b5b0;
        case 0x19b5b4u: goto label_19b5b4;
        case 0x19b5b8u: goto label_19b5b8;
        case 0x19b5bcu: goto label_19b5bc;
        case 0x19b5c0u: goto label_19b5c0;
        case 0x19b5c4u: goto label_19b5c4;
        case 0x19b5c8u: goto label_19b5c8;
        case 0x19b5ccu: goto label_19b5cc;
        case 0x19b5d0u: goto label_19b5d0;
        case 0x19b5d4u: goto label_19b5d4;
        case 0x19b5d8u: goto label_19b5d8;
        case 0x19b5dcu: goto label_19b5dc;
        case 0x19b5e0u: goto label_19b5e0;
        case 0x19b5e4u: goto label_19b5e4;
        case 0x19b5e8u: goto label_19b5e8;
        case 0x19b5ecu: goto label_19b5ec;
        case 0x19b5f0u: goto label_19b5f0;
        case 0x19b5f4u: goto label_19b5f4;
        case 0x19b5f8u: goto label_19b5f8;
        case 0x19b5fcu: goto label_19b5fc;
        case 0x19b600u: goto label_19b600;
        case 0x19b604u: goto label_19b604;
        case 0x19b608u: goto label_19b608;
        case 0x19b60cu: goto label_19b60c;
        case 0x19b610u: goto label_19b610;
        case 0x19b614u: goto label_19b614;
        case 0x19b618u: goto label_19b618;
        case 0x19b61cu: goto label_19b61c;
        case 0x19b620u: goto label_19b620;
        case 0x19b624u: goto label_19b624;
        case 0x19b628u: goto label_19b628;
        case 0x19b62cu: goto label_19b62c;
        case 0x19b630u: goto label_19b630;
        case 0x19b634u: goto label_19b634;
        case 0x19b638u: goto label_19b638;
        case 0x19b63cu: goto label_19b63c;
        case 0x19b640u: goto label_19b640;
        case 0x19b644u: goto label_19b644;
        case 0x19b648u: goto label_19b648;
        case 0x19b64cu: goto label_19b64c;
        case 0x19b650u: goto label_19b650;
        case 0x19b654u: goto label_19b654;
        case 0x19b658u: goto label_19b658;
        case 0x19b65cu: goto label_19b65c;
        case 0x19b660u: goto label_19b660;
        case 0x19b664u: goto label_19b664;
        case 0x19b668u: goto label_19b668;
        case 0x19b66cu: goto label_19b66c;
        case 0x19b670u: goto label_19b670;
        case 0x19b674u: goto label_19b674;
        case 0x19b678u: goto label_19b678;
        case 0x19b67cu: goto label_19b67c;
        case 0x19b680u: goto label_19b680;
        case 0x19b684u: goto label_19b684;
        case 0x19b688u: goto label_19b688;
        case 0x19b68cu: goto label_19b68c;
        case 0x19b690u: goto label_19b690;
        case 0x19b694u: goto label_19b694;
        case 0x19b698u: goto label_19b698;
        case 0x19b69cu: goto label_19b69c;
        case 0x19b6a0u: goto label_19b6a0;
        case 0x19b6a4u: goto label_19b6a4;
        case 0x19b6a8u: goto label_19b6a8;
        case 0x19b6acu: goto label_19b6ac;
        case 0x19b6b0u: goto label_19b6b0;
        case 0x19b6b4u: goto label_19b6b4;
        case 0x19b6b8u: goto label_19b6b8;
        case 0x19b6bcu: goto label_19b6bc;
        case 0x19b6c0u: goto label_19b6c0;
        case 0x19b6c4u: goto label_19b6c4;
        case 0x19b6c8u: goto label_19b6c8;
        case 0x19b6ccu: goto label_19b6cc;
        case 0x19b6d0u: goto label_19b6d0;
        case 0x19b6d4u: goto label_19b6d4;
        case 0x19b6d8u: goto label_19b6d8;
        case 0x19b6dcu: goto label_19b6dc;
        case 0x19b6e0u: goto label_19b6e0;
        case 0x19b6e4u: goto label_19b6e4;
        case 0x19b6e8u: goto label_19b6e8;
        case 0x19b6ecu: goto label_19b6ec;
        case 0x19b6f0u: goto label_19b6f0;
        case 0x19b6f4u: goto label_19b6f4;
        case 0x19b6f8u: goto label_19b6f8;
        case 0x19b6fcu: goto label_19b6fc;
        case 0x19b700u: goto label_19b700;
        case 0x19b704u: goto label_19b704;
        case 0x19b708u: goto label_19b708;
        case 0x19b70cu: goto label_19b70c;
        default: break;
    }

    ctx->pc = 0x19afa0u;

label_19afa0:
    // 0x19afa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19afa4:
    // 0x19afa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19afa8:
    // 0x19afa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19afac:
    // 0x19afac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19afb0:
    // 0x19afb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19afb4:
    // 0x19afb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19afb8:
    // 0x19afb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19afbc:
    // 0x19afbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19afbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19afc0:
    // 0x19afc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19afc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19afc4:
    // 0x19afc4: 0xc063dd4  jal         func_18F750
label_19afc8:
    if (ctx->pc == 0x19AFC8u) {
        ctx->pc = 0x19AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFC4u;
        // 0x19afc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFCCu;
        goto label_19afcc;
    }
    ctx->pc = 0x19AFC4u;
    SET_GPR_U32(ctx, 31, 0x19AFCCu);
    ctx->pc = 0x19AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AFC4u;
    // 0x19afc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19AFC4u, 0x19AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFCCu;
label_19afcc:
    // 0x19afcc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19afd0:
    // 0x19afd0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19afd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_19afd4:
    // 0x19afd4: 0x104401c6  beq         $v0, $a0, . + 4 + (0x1C6 << 2)
label_19afd8:
    if (ctx->pc == 0x19AFD8u) {
        ctx->pc = 0x19AFDCu;
        goto label_19afdc;
    }
    ctx->pc = 0x19AFD4u;
    {
        const bool branch_taken_0x19afd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19afd4) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19AFDCu;
label_19afdc:
    // 0x19afdc: 0x104301c4  beq         $v0, $v1, . + 4 + (0x1C4 << 2)
label_19afe0:
    if (ctx->pc == 0x19AFE0u) {
        ctx->pc = 0x19AFE4u;
        goto label_19afe4;
    }
    ctx->pc = 0x19AFDCu;
    {
        const bool branch_taken_0x19afdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afdc) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19AFE4u;
label_19afe4:
    // 0x19afe4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19afe8:
    // 0x19afe8: 0x104301ba  beq         $v0, $v1, . + 4 + (0x1BA << 2)
label_19afec:
    if (ctx->pc == 0x19AFECu) {
        ctx->pc = 0x19AFF0u;
        goto label_19aff0;
    }
    ctx->pc = 0x19AFE8u;
    {
        const bool branch_taken_0x19afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afe8) {
            ctx->pc = 0x19B6D4u;
            goto label_19b6d4;
        }
    }
    ctx->pc = 0x19AFF0u;
label_19aff0:
    // 0x19aff0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19aff4:
    // 0x19aff4: 0x104301a8  beq         $v0, $v1, . + 4 + (0x1A8 << 2)
label_19aff8:
    if (ctx->pc == 0x19AFF8u) {
        ctx->pc = 0x19AFFCu;
        goto label_19affc;
    }
    ctx->pc = 0x19AFF4u;
    {
        const bool branch_taken_0x19aff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19aff4) {
            ctx->pc = 0x19B698u;
            goto label_19b698;
        }
    }
    ctx->pc = 0x19AFFCu;
label_19affc:
    // 0x19affc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b000:
    // 0x19b000: 0x1043006d  beq         $v0, $v1, . + 4 + (0x6D << 2)
label_19b004:
    if (ctx->pc == 0x19B004u) {
        ctx->pc = 0x19B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B000u;
        // 0x19b004: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B008u;
        goto label_19b008;
    }
    ctx->pc = 0x19B000u;
    {
        const bool branch_taken_0x19b000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B000u;
        // 0x19b004: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b000) {
            ctx->pc = 0x19B1B8u;
            goto label_19b1b8;
        }
    }
    ctx->pc = 0x19B008u;
label_19b008:
    // 0x19b008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19b00c:
    if (ctx->pc == 0x19B00Cu) {
        ctx->pc = 0x19B010u;
        goto label_19b010;
    }
    ctx->pc = 0x19B008u;
    {
        const bool branch_taken_0x19b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b008) {
            ctx->pc = 0x19B018u;
            goto label_19b018;
        }
    }
    ctx->pc = 0x19B010u;
label_19b010:
    // 0x19b010: 0x100001b8  b           . + 4 + (0x1B8 << 2)
label_19b014:
    if (ctx->pc == 0x19B014u) {
        ctx->pc = 0x19B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B010u;
        // 0x19b014: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B018u;
        goto label_19b018;
    }
    ctx->pc = 0x19B010u;
    {
        const bool branch_taken_0x19b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B010u;
        // 0x19b014: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b010) {
            ctx->pc = 0x19B6F4u;
            goto label_19b6f4;
        }
    }
    ctx->pc = 0x19B018u;
label_19b018:
    // 0x19b018: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19b01c:
    // 0x19b01c: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x19b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_19b020:
    // 0x19b020: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x19b020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_19b024:
    // 0x19b024: 0xae20067c  sw          $zero, 0x67C($s1)
    ctx->pc = 0x19b024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 0));
label_19b028:
    // 0x19b028: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x19b028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
label_19b02c:
    // 0x19b02c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_19b030:
    // 0x19b030: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19b034:
    // 0x19b034: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19b038:
    // 0x19b038: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19b03c:
    // 0x19b03c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
label_19b040:
    if (ctx->pc == 0x19B040u) {
        ctx->pc = 0x19B044u;
        goto label_19b044;
    }
    ctx->pc = 0x19B03Cu;
    {
        const bool branch_taken_0x19b03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b03c) {
            ctx->pc = 0x19B130u;
            goto label_19b130;
        }
    }
    ctx->pc = 0x19B044u;
label_19b044:
    // 0x19b044: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x19b044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_19b048:
    // 0x19b048: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_19b04c:
    if (ctx->pc == 0x19B04Cu) {
        ctx->pc = 0x19B050u;
        goto label_19b050;
    }
    ctx->pc = 0x19B048u;
    {
        const bool branch_taken_0x19b048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b048) {
            ctx->pc = 0x19B124u;
            goto label_19b124;
        }
    }
    ctx->pc = 0x19B050u;
label_19b050:
    // 0x19b050: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x19b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_19b054:
    // 0x19b054: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_19b058:
    if (ctx->pc == 0x19B058u) {
        ctx->pc = 0x19B05Cu;
        goto label_19b05c;
    }
    ctx->pc = 0x19B054u;
    {
        const bool branch_taken_0x19b054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b054) {
            ctx->pc = 0x19B0B8u;
            goto label_19b0b8;
        }
    }
    ctx->pc = 0x19B05Cu;
label_19b05c:
    // 0x19b05c: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x19b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_19b060:
    // 0x19b060: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_19b064:
    if (ctx->pc == 0x19B064u) {
        ctx->pc = 0x19B068u;
        goto label_19b068;
    }
    ctx->pc = 0x19B060u;
    {
        const bool branch_taken_0x19b060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b060) {
            ctx->pc = 0x19B088u;
            goto label_19b088;
        }
    }
    ctx->pc = 0x19B068u;
label_19b068:
    // 0x19b068: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_19b06c:
    // 0x19b06c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19b070:
    if (ctx->pc == 0x19B070u) {
        ctx->pc = 0x19B074u;
        goto label_19b074;
    }
    ctx->pc = 0x19B06Cu;
    {
        const bool branch_taken_0x19b06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b06c) {
            ctx->pc = 0x19B07Cu;
            goto label_19b07c;
        }
    }
    ctx->pc = 0x19B074u;
label_19b074:
    // 0x19b074: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19b078:
    if (ctx->pc == 0x19B078u) {
        ctx->pc = 0x19B07Cu;
        goto label_19b07c;
    }
    ctx->pc = 0x19B074u;
    {
        const bool branch_taken_0x19b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b074) {
            ctx->pc = 0x19B0E8u;
            goto label_19b0e8;
        }
    }
    ctx->pc = 0x19B07Cu;
label_19b07c:
    // 0x19b07c: 0x0  nop
    ctx->pc = 0x19b07cu;
    // NOP
label_19b080:
    // 0x19b080: 0x10000028  b           . + 4 + (0x28 << 2)
label_19b084:
    if (ctx->pc == 0x19B084u) {
        ctx->pc = 0x19B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B080u;
        // 0x19b084: 0xae320678  sw          $s2, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B088u;
        goto label_19b088;
    }
    ctx->pc = 0x19B080u;
    {
        const bool branch_taken_0x19b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B080u;
        // 0x19b084: 0xae320678  sw          $s2, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b080) {
            ctx->pc = 0x19B124u;
            goto label_19b124;
        }
    }
    ctx->pc = 0x19B088u;
label_19b088:
    // 0x19b088: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_19b08c:
    // 0x19b08c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19b090:
    // 0x19b090: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19b094:
    // 0x19b094: 0xac400680  sw          $zero, 0x680($v0)
    ctx->pc = 0x19b094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1664), GPR_U32(ctx, 0));
label_19b098:
    // 0x19b098: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_19b09c:
    // 0x19b09c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19b0a0:
    // 0x19b0a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19b0a4:
    // 0x19b0a4: 0xac5206c0  sw          $s2, 0x6C0($v0)
    ctx->pc = 0x19b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1728), GPR_U32(ctx, 18));
label_19b0a8:
    // 0x19b0a8: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_19b0ac:
    // 0x19b0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19b0b0:
    // 0x19b0b0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19b0b4:
    if (ctx->pc == 0x19B0B4u) {
        ctx->pc = 0x19B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0B0u;
        // 0x19b0b4: 0xae22067c  sw          $v0, 0x67C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0B8u;
        goto label_19b0b8;
    }
    ctx->pc = 0x19B0B0u;
    {
        const bool branch_taken_0x19b0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0B0u;
        // 0x19b0b4: 0xae22067c  sw          $v0, 0x67C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0b0) {
            ctx->pc = 0x19B124u;
            goto label_19b124;
        }
    }
    ctx->pc = 0x19B0B8u;
label_19b0b8:
    // 0x19b0b8: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
label_19b0bc:
    // 0x19b0bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19b0c0:
    // 0x19b0c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19b0c4:
    // 0x19b0c4: 0xac400704  sw          $zero, 0x704($v0)
    ctx->pc = 0x19b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1796), GPR_U32(ctx, 0));
label_19b0c8:
    // 0x19b0c8: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
label_19b0cc:
    // 0x19b0cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19b0d0:
    // 0x19b0d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_19b0d4:
    // 0x19b0d4: 0xac520744  sw          $s2, 0x744($v0)
    ctx->pc = 0x19b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1860), GPR_U32(ctx, 18));
label_19b0d8:
    // 0x19b0d8: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
label_19b0dc:
    // 0x19b0dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19b0e0:
    // 0x19b0e0: 0x10000010  b           . + 4 + (0x10 << 2)
label_19b0e4:
    if (ctx->pc == 0x19B0E4u) {
        ctx->pc = 0x19B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0E0u;
        // 0x19b0e4: 0xae220700  sw          $v0, 0x700($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0E8u;
        goto label_19b0e8;
    }
    ctx->pc = 0x19B0E0u;
    {
        const bool branch_taken_0x19b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0E0u;
        // 0x19b0e4: 0xae220700  sw          $v0, 0x700($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0e0) {
            ctx->pc = 0x19B124u;
            goto label_19b124;
        }
    }
    ctx->pc = 0x19B0E8u;
label_19b0e8:
    // 0x19b0e8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_19b0ec:
    if (ctx->pc == 0x19B0ECu) {
        ctx->pc = 0x19B0F0u;
        goto label_19b0f0;
    }
    ctx->pc = 0x19B0E8u;
    {
        const bool branch_taken_0x19b0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0e8) {
            ctx->pc = 0x19B124u;
            goto label_19b124;
        }
    }
    ctx->pc = 0x19B0F0u;
label_19b0f0:
    // 0x19b0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b0f4:
    // 0x19b0f4: 0xc064918  jal         func_192460
label_19b0f8:
    if (ctx->pc == 0x19B0F8u) {
        ctx->pc = 0x19B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0F4u;
        // 0x19b0f8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B0FCu;
        goto label_19b0fc;
    }
    ctx->pc = 0x19B0F4u;
    SET_GPR_U32(ctx, 31, 0x19B0FCu);
    ctx->pc = 0x19B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B0F4u;
    // 0x19b0f8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19B0F4u, 0x19B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0FCu;
label_19b0fc:
    // 0x19b0fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19b100:
    if (ctx->pc == 0x19B100u) {
        ctx->pc = 0x19B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0FCu;
        // 0x19b100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B104u;
        goto label_19b104;
    }
    ctx->pc = 0x19B0FCu;
    {
        const bool branch_taken_0x19b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0FCu;
        // 0x19b100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0fc) {
            ctx->pc = 0x19B11Cu;
            goto label_19b11c;
        }
    }
    ctx->pc = 0x19B104u;
label_19b104:
    // 0x19b104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b108:
    // 0x19b108: 0xc063e08  jal         func_18F820
label_19b10c:
    if (ctx->pc == 0x19B10Cu) {
        ctx->pc = 0x19B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B108u;
        // 0x19b10c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B110u;
        goto label_19b110;
    }
    ctx->pc = 0x19B108u;
    SET_GPR_U32(ctx, 31, 0x19B110u);
    ctx->pc = 0x19B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B108u;
    // 0x19b10c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B108u, 0x19B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B110u;
label_19b110:
    // 0x19b110: 0x10000177  b           . + 4 + (0x177 << 2)
label_19b114:
    if (ctx->pc == 0x19B114u) {
        ctx->pc = 0x19B118u;
        goto label_19b118;
    }
    ctx->pc = 0x19B110u;
    {
        const bool branch_taken_0x19b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b110) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B118u;
label_19b118:
    // 0x19b118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b11c:
    // 0x19b11c: 0xc063dc0  jal         func_18F700
label_19b120:
    if (ctx->pc == 0x19B120u) {
        ctx->pc = 0x19B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B11Cu;
        // 0x19b120: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B124u;
        goto label_19b124;
    }
    ctx->pc = 0x19B11Cu;
    SET_GPR_U32(ctx, 31, 0x19B124u);
    ctx->pc = 0x19B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B11Cu;
    // 0x19b120: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19B11Cu, 0x19B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B124u;
label_19b124:
    // 0x19b124: 0x0  nop
    ctx->pc = 0x19b124u;
    // NOP
label_19b128:
    // 0x19b128: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_19b12c:
    if (ctx->pc == 0x19B12Cu) {
        ctx->pc = 0x19B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B128u;
        // 0x19b12c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B130u;
        goto label_19b130;
    }
    ctx->pc = 0x19B128u;
    {
        const bool branch_taken_0x19b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B128u;
        // 0x19b12c: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b128) {
            ctx->pc = 0x19B034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b034;
        }
    }
    ctx->pc = 0x19B130u;
label_19b130:
    // 0x19b130: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b134:
    // 0x19b134: 0x26320674  addiu       $s2, $s1, 0x674
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1652));
label_19b138:
    // 0x19b138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b13c:
    // 0x19b13c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b140:
    // 0x19b140: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_19b144:
    // 0x19b144: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19b148:
    // 0x19b148: 0xc064f7c  jal         func_193DF0
label_19b14c:
    if (ctx->pc == 0x19B14Cu) {
        ctx->pc = 0x19B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B148u;
        // 0x19b14c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B150u;
        goto label_19b150;
    }
    ctx->pc = 0x19B148u;
    SET_GPR_U32(ctx, 31, 0x19B150u);
    ctx->pc = 0x19B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B148u;
    // 0x19b14c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x19B148u, 0x19B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B150u;
label_19b150:
    // 0x19b150: 0xc04bf44  jal         func_12FD10
label_19b154:
    if (ctx->pc == 0x19B154u) {
        ctx->pc = 0x19B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B150u;
        // 0x19b154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B158u;
        goto label_19b158;
    }
    ctx->pc = 0x19B150u;
    SET_GPR_U32(ctx, 31, 0x19B158u);
    ctx->pc = 0x19B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B150u;
    // 0x19b154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19B150u, 0x19B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B158u;
label_19b158:
    // 0x19b158: 0xae220784  sw          $v0, 0x784($s1)
    ctx->pc = 0x19b158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1924), GPR_U32(ctx, 2));
label_19b15c:
    // 0x19b15c: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19b160:
    // 0x19b160: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b164:
    // 0x19b164: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b168:
    // 0x19b168: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x19b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b16c:
    // 0x19b16c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19b170:
    // 0x19b170: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b174:
    // 0x19b174: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b178:
    // 0x19b178: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19b178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19b17c:
    // 0x19b17c: 0x0  nop
    ctx->pc = 0x19b17cu;
    // NOP
label_19b180:
    // 0x19b180: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19b184:
    if (ctx->pc == 0x19B184u) {
        ctx->pc = 0x19B188u;
        goto label_19b188;
    }
    ctx->pc = 0x19B180u;
    {
        const bool branch_taken_0x19b180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b180) {
            ctx->pc = 0x19B18Cu;
            goto label_19b18c;
        }
    }
    ctx->pc = 0x19B188u;
label_19b188:
    // 0x19b188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19b18c:
    // 0x19b18c: 0xae220328  sw          $v0, 0x328($s1)
    ctx->pc = 0x19b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
label_19b190:
    // 0x19b190: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b194:
    // 0x19b194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b198:
    // 0x19b198: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_19b19c:
    // 0x19b19c: 0x320f809  jalr        $t9
label_19b1a0:
    if (ctx->pc == 0x19B1A0u) {
        ctx->pc = 0x19B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B19Cu;
        // 0x19b1a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1A4u;
        goto label_19b1a4;
    }
    ctx->pc = 0x19B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B1A4u);
        ctx->pc = 0x19B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B19Cu;
        // 0x19b1a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B19Cu, 0x19B1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B1A4u;
label_19b1a4:
    // 0x19b1a4: 0xc063e14  jal         func_18F850
label_19b1a8:
    if (ctx->pc == 0x19B1A8u) {
        ctx->pc = 0x19B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1A4u;
        // 0x19b1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1ACu;
        goto label_19b1ac;
    }
    ctx->pc = 0x19B1A4u;
    SET_GPR_U32(ctx, 31, 0x19B1ACu);
    ctx->pc = 0x19B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1A4u;
    // 0x19b1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19B1A4u, 0x19B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1ACu;
label_19b1ac:
    // 0x19b1ac: 0x10000150  b           . + 4 + (0x150 << 2)
label_19b1b0:
    if (ctx->pc == 0x19B1B0u) {
        ctx->pc = 0x19B1B4u;
        goto label_19b1b4;
    }
    ctx->pc = 0x19B1ACu;
    {
        const bool branch_taken_0x19b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1ac) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B1B4u;
label_19b1b4:
    // 0x19b1b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19b1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b1b8:
    // 0x19b1b8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_19b1bc:
    if (ctx->pc == 0x19B1BCu) {
        ctx->pc = 0x19B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1B8u;
        // 0x19b1bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1C0u;
        goto label_19b1c0;
    }
    ctx->pc = 0x19B1B8u;
    {
        const bool branch_taken_0x19b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1B8u;
        // 0x19b1bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1b8) {
            ctx->pc = 0x19B228u;
            goto label_19b228;
        }
    }
    ctx->pc = 0x19B1C0u;
label_19b1c0:
    // 0x19b1c0: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x19b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_19b1c4:
    // 0x19b1c4: 0x8c8506c0  lw          $a1, 0x6C0($a0)
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
label_19b1c8:
    // 0x19b1c8: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b1cc:
    // 0x19b1cc: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x19b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b1d0:
    // 0x19b1d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19b1d4:
    // 0x19b1d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b1d8:
    // 0x19b1d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b1d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b1dc:
    // 0x19b1dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b1dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b1e0:
    // 0x19b1e0: 0x0  nop
    ctx->pc = 0x19b1e0u;
    // NOP
label_19b1e4:
    // 0x19b1e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_19b1e8:
    if (ctx->pc == 0x19B1E8u) {
        ctx->pc = 0x19B1ECu;
        goto label_19b1ec;
    }
    ctx->pc = 0x19B1E4u;
    {
        const bool branch_taken_0x19b1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b1e4) {
            ctx->pc = 0x19B1F0u;
            goto label_19b1f0;
        }
    }
    ctx->pc = 0x19B1ECu;
label_19b1ec:
    // 0x19b1ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19b1f0:
    // 0x19b1f0: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b1f4:
    // 0x19b1f4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_19b1f8:
    if (ctx->pc == 0x19B1F8u) {
        ctx->pc = 0x19B1FCu;
        goto label_19b1fc;
    }
    ctx->pc = 0x19B1F4u;
    {
        const bool branch_taken_0x19b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b1f4) {
            ctx->pc = 0x19B21Cu;
            goto label_19b21c;
        }
    }
    ctx->pc = 0x19B1FCu;
label_19b1fc:
    // 0x19b1fc: 0x8c820680  lw          $v0, 0x680($a0)
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1664)));
label_19b200:
    // 0x19b200: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19b204:
    if (ctx->pc == 0x19B204u) {
        ctx->pc = 0x19B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B200u;
        // 0x19b204: 0x24940680  addiu       $s4, $a0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B208u;
        goto label_19b208;
    }
    ctx->pc = 0x19B200u;
    {
        const bool branch_taken_0x19b200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B200u;
        // 0x19b204: 0x24940680  addiu       $s4, $a0, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b200) {
            ctx->pc = 0x19B21Cu;
            goto label_19b21c;
        }
    }
    ctx->pc = 0x19B208u;
label_19b208:
    // 0x19b208: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_19b20c:
    // 0x19b20c: 0xc064fb8  jal         func_193EE0
label_19b210:
    if (ctx->pc == 0x19B210u) {
        ctx->pc = 0x19B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B20Cu;
        // 0x19b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B214u;
        goto label_19b214;
    }
    ctx->pc = 0x19B20Cu;
    SET_GPR_U32(ctx, 31, 0x19B214u);
    ctx->pc = 0x19B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B20Cu;
    // 0x19b210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19B20Cu, 0x19B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B214u;
label_19b214:
    // 0x19b214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b218:
    // 0x19b218: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x19b218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_19b21c:
    // 0x19b21c: 0x0  nop
    ctx->pc = 0x19b21cu;
    // NOP
label_19b220:
    // 0x19b220: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19b220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_19b224:
    // 0x19b224: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19b224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19b228:
    // 0x19b228: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x19b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_19b22c:
    // 0x19b22c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19b22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19b230:
    // 0x19b230: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_19b234:
    if (ctx->pc == 0x19B234u) {
        ctx->pc = 0x19B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B230u;
        // 0x19b234: 0x2332021  addu        $a0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B238u;
        goto label_19b238;
    }
    ctx->pc = 0x19B230u;
    {
        const bool branch_taken_0x19b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B230u;
        // 0x19b234: 0x2332021  addu        $a0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b230) {
            ctx->pc = 0x19B1C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b1c4;
        }
    }
    ctx->pc = 0x19B238u;
label_19b238:
    // 0x19b238: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19b238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b23c:
    // 0x19b23c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19b240:
    if (ctx->pc == 0x19B240u) {
        ctx->pc = 0x19B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B23Cu;
        // 0x19b240: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B244u;
        goto label_19b244;
    }
    ctx->pc = 0x19B23Cu;
    {
        const bool branch_taken_0x19b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B23Cu;
        // 0x19b240: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b23c) {
            ctx->pc = 0x19B2B0u;
            goto label_19b2b0;
        }
    }
    ctx->pc = 0x19B244u;
label_19b244:
    // 0x19b244: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x19b244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_19b248:
    // 0x19b248: 0x8c850744  lw          $a1, 0x744($a0)
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1860)));
label_19b24c:
    // 0x19b24c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b250:
    // 0x19b250: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x19b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b254:
    // 0x19b254: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19b258:
    // 0x19b258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b25c:
    // 0x19b25c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b25cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b260:
    // 0x19b260: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b264:
    // 0x19b264: 0x0  nop
    ctx->pc = 0x19b264u;
    // NOP
label_19b268:
    // 0x19b268: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_19b26c:
    if (ctx->pc == 0x19B26Cu) {
        ctx->pc = 0x19B270u;
        goto label_19b270;
    }
    ctx->pc = 0x19B268u;
    {
        const bool branch_taken_0x19b268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b268) {
            ctx->pc = 0x19B274u;
            goto label_19b274;
        }
    }
    ctx->pc = 0x19B270u;
label_19b270:
    // 0x19b270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19b274:
    // 0x19b274: 0x0  nop
    ctx->pc = 0x19b274u;
    // NOP
label_19b278:
    // 0x19b278: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b27c:
    // 0x19b27c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_19b280:
    if (ctx->pc == 0x19B280u) {
        ctx->pc = 0x19B284u;
        goto label_19b284;
    }
    ctx->pc = 0x19B27Cu;
    {
        const bool branch_taken_0x19b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b27c) {
            ctx->pc = 0x19B2A4u;
            goto label_19b2a4;
        }
    }
    ctx->pc = 0x19B284u;
label_19b284:
    // 0x19b284: 0x8c820704  lw          $v0, 0x704($a0)
    ctx->pc = 0x19b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1796)));
label_19b288:
    // 0x19b288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19b28c:
    if (ctx->pc == 0x19B28Cu) {
        ctx->pc = 0x19B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B288u;
        // 0x19b28c: 0x24930704  addiu       $s3, $a0, 0x704 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1796));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B290u;
        goto label_19b290;
    }
    ctx->pc = 0x19B288u;
    {
        const bool branch_taken_0x19b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B288u;
        // 0x19b28c: 0x24930704  addiu       $s3, $a0, 0x704 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b288) {
            ctx->pc = 0x19B2A4u;
            goto label_19b2a4;
        }
    }
    ctx->pc = 0x19B290u;
label_19b290:
    // 0x19b290: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x19b290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_19b294:
    // 0x19b294: 0xc064fb8  jal         func_193EE0
label_19b298:
    if (ctx->pc == 0x19B298u) {
        ctx->pc = 0x19B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B294u;
        // 0x19b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B29Cu;
        goto label_19b29c;
    }
    ctx->pc = 0x19B294u;
    SET_GPR_U32(ctx, 31, 0x19B29Cu);
    ctx->pc = 0x19B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B294u;
    // 0x19b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19B294u, 0x19B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B29Cu;
label_19b29c:
    // 0x19b29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b2a0:
    // 0x19b2a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x19b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_19b2a4:
    // 0x19b2a4: 0x0  nop
    ctx->pc = 0x19b2a4u;
    // NOP
label_19b2a8:
    // 0x19b2a8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_19b2ac:
    // 0x19b2ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19b2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19b2b0:
    // 0x19b2b0: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
label_19b2b4:
    // 0x19b2b4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19b2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19b2b8:
    // 0x19b2b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_19b2bc:
    if (ctx->pc == 0x19B2BCu) {
        ctx->pc = 0x19B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B8u;
        // 0x19b2bc: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2C0u;
        goto label_19b2c0;
    }
    ctx->pc = 0x19B2B8u;
    {
        const bool branch_taken_0x19b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2B8u;
        // 0x19b2bc: 0x2322021  addu        $a0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2b8) {
            ctx->pc = 0x19B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b248;
        }
    }
    ctx->pc = 0x19B2C0u;
label_19b2c0:
    // 0x19b2c0: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b2c4:
    // 0x19b2c4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_19b2c8:
    if (ctx->pc == 0x19B2C8u) {
        ctx->pc = 0x19B2CCu;
        goto label_19b2cc;
    }
    ctx->pc = 0x19B2C4u;
    {
        const bool branch_taken_0x19b2c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19b2c4) {
            ctx->pc = 0x19B2D8u;
            goto label_19b2d8;
        }
    }
    ctx->pc = 0x19B2CCu;
label_19b2cc:
    // 0x19b2cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19b2d0:
    // 0x19b2d0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_19b2d4:
    if (ctx->pc == 0x19B2D4u) {
        ctx->pc = 0x19B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2D0u;
        // 0x19b2d4: 0xae220328  sw          $v0, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B2D8u;
        goto label_19b2d8;
    }
    ctx->pc = 0x19B2D0u;
    {
        const bool branch_taken_0x19b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2D0u;
        // 0x19b2d4: 0xae220328  sw          $v0, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2d0) {
            ctx->pc = 0x19B3C8u;
            goto label_19b3c8;
        }
    }
    ctx->pc = 0x19B2D8u;
label_19b2d8:
    // 0x19b2d8: 0xae200320  sw          $zero, 0x320($s1)
    ctx->pc = 0x19b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 0));
label_19b2dc:
    // 0x19b2dc: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b2e0:
    // 0x19b2e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19b2e4:
    if (ctx->pc == 0x19B2E4u) {
        ctx->pc = 0x19B2E8u;
        goto label_19b2e8;
    }
    ctx->pc = 0x19B2E0u;
    {
        const bool branch_taken_0x19b2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b2e0) {
            ctx->pc = 0x19B318u;
            goto label_19b318;
        }
    }
    ctx->pc = 0x19B2E8u;
label_19b2e8:
    // 0x19b2e8: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b2ec:
    // 0x19b2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b2f0:
    // 0x19b2f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b2f4:
    // 0x19b2f4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b2f8:
    // 0x19b2f8: 0x320f809  jalr        $t9
label_19b2fc:
    if (ctx->pc == 0x19B2FCu) {
        ctx->pc = 0x19B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F8u;
        // 0x19b2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B300u;
        goto label_19b300;
    }
    ctx->pc = 0x19B2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B300u);
        ctx->pc = 0x19B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B2F8u;
        // 0x19b2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B2F8u, 0x19B300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B300u;
label_19b300:
    // 0x19b300: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b304:
    // 0x19b304: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b308:
    // 0x19b308: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b30c:
    // 0x19b30c: 0x320f809  jalr        $t9
label_19b310:
    if (ctx->pc == 0x19B310u) {
        ctx->pc = 0x19B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B30Cu;
        // 0x19b310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B314u;
        goto label_19b314;
    }
    ctx->pc = 0x19B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B314u);
        ctx->pc = 0x19B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B30Cu;
        // 0x19b310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B30Cu, 0x19B314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B314u;
label_19b314:
    // 0x19b314: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19b318:
    // 0x19b318: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b31c:
    // 0x19b31c: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b320:
    // 0x19b320: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b324:
    // 0x19b324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b328:
    // 0x19b328: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b32c:
    // 0x19b32c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b330:
    // 0x19b330: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b334:
    // 0x19b334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b338:
    // 0x19b338: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b33c:
    // 0x19b33c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b340:
    // 0x19b340: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b344:
    // 0x19b344: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b348:
    // 0x19b348: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b34c:
    // 0x19b34c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b350:
    // 0x19b350: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b354:
    // 0x19b354: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b358:
    // 0x19b358: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b35c:
    // 0x19b35c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b35cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b360:
    // 0x19b360: 0x0  nop
    ctx->pc = 0x19b360u;
    // NOP
label_19b364:
    // 0x19b364: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b364u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b368:
    // 0x19b368: 0x0  nop
    ctx->pc = 0x19b368u;
    // NOP
label_19b36c:
    // 0x19b36c: 0x0  nop
    ctx->pc = 0x19b36cu;
    // NOP
label_19b370:
    // 0x19b370: 0x3012  mflo        $a2
    ctx->pc = 0x19b370u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b374:
    // 0x19b374: 0xc04bf38  jal         func_12FCE0
label_19b378:
    if (ctx->pc == 0x19B378u) {
        ctx->pc = 0x19B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B374u;
        // 0x19b378: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B37Cu;
        goto label_19b37c;
    }
    ctx->pc = 0x19B374u;
    SET_GPR_U32(ctx, 31, 0x19B37Cu);
    ctx->pc = 0x19B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B374u;
    // 0x19b378: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B374u, 0x19B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B37Cu;
label_19b37c:
    // 0x19b37c: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b380:
    // 0x19b380: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b384:
    // 0x19b384: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b388:
    // 0x19b388: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b38c:
    // 0x19b38c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b390:
    // 0x19b390: 0x320f809  jalr        $t9
label_19b394:
    if (ctx->pc == 0x19B394u) {
        ctx->pc = 0x19B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B390u;
        // 0x19b394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B398u;
        goto label_19b398;
    }
    ctx->pc = 0x19B390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B398u);
        ctx->pc = 0x19B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B390u;
        // 0x19b394: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B390u, 0x19B398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B398u;
label_19b398:
    // 0x19b398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b39c:
    // 0x19b39c: 0xc063e08  jal         func_18F820
label_19b3a0:
    if (ctx->pc == 0x19B3A0u) {
        ctx->pc = 0x19B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B39Cu;
        // 0x19b3a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3A4u;
        goto label_19b3a4;
    }
    ctx->pc = 0x19B39Cu;
    SET_GPR_U32(ctx, 31, 0x19B3A4u);
    ctx->pc = 0x19B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B39Cu;
    // 0x19b3a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B39Cu, 0x19B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3A4u;
label_19b3a4:
    // 0x19b3a4: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b3a8:
    // 0x19b3a8: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x19b3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19b3ac:
    // 0x19b3ac: 0x18c000d0  blez        $a2, . + 4 + (0xD0 << 2)
label_19b3b0:
    if (ctx->pc == 0x19B3B0u) {
        ctx->pc = 0x19B3B4u;
        goto label_19b3b4;
    }
    ctx->pc = 0x19B3ACu;
    {
        const bool branch_taken_0x19b3ac = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x19b3ac) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B3B4u;
label_19b3b4:
    // 0x19b3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b3b8:
    // 0x19b3b8: 0xc063de0  jal         func_18F780
label_19b3bc:
    if (ctx->pc == 0x19B3BCu) {
        ctx->pc = 0x19B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3B8u;
        // 0x19b3bc: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3C0u;
        goto label_19b3c0;
    }
    ctx->pc = 0x19B3B8u;
    SET_GPR_U32(ctx, 31, 0x19B3C0u);
    ctx->pc = 0x19B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3B8u;
    // 0x19b3bc: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19B3B8u, 0x19B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3C0u;
label_19b3c0:
    // 0x19b3c0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_19b3c4:
    if (ctx->pc == 0x19B3C4u) {
        ctx->pc = 0x19B3C8u;
        goto label_19b3c8;
    }
    ctx->pc = 0x19B3C0u;
    {
        const bool branch_taken_0x19b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3c0) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B3C8u;
label_19b3c8:
    // 0x19b3c8: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_19b3cc:
    // 0x19b3cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19b3d0:
    if (ctx->pc == 0x19B3D0u) {
        ctx->pc = 0x19B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3CCu;
        // 0x19b3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B3D4u;
        goto label_19b3d4;
    }
    ctx->pc = 0x19B3CCu;
    {
        const bool branch_taken_0x19b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3CCu;
        // 0x19b3d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3cc) {
            ctx->pc = 0x19B430u;
            goto label_19b430;
        }
    }
    ctx->pc = 0x19B3D4u;
label_19b3d4:
    // 0x19b3d4: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_19b3d8:
    // 0x19b3d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b3dc:
    // 0x19b3dc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19b3e0:
    // 0x19b3e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19b3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b3e4:
    // 0x19b3e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b3e8:
    // 0x19b3e8: 0x8c462c10  lw          $a2, 0x2C10($v0)
    ctx->pc = 0x19b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
label_19b3ec:
    // 0x19b3ec: 0x0  nop
    ctx->pc = 0x19b3ecu;
    // NOP
label_19b3f0:
    // 0x19b3f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19b3f4:
    // 0x19b3f4: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x19b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_19b3f8:
    // 0x19b3f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19b3fc:
    // 0x19b3fc: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19b400:
    if (ctx->pc == 0x19B400u) {
        ctx->pc = 0x19B404u;
        goto label_19b404;
    }
    ctx->pc = 0x19B3FCu;
    {
        const bool branch_taken_0x19b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b3fc) {
            ctx->pc = 0x19B430u;
            goto label_19b430;
        }
    }
    ctx->pc = 0x19B404u;
label_19b404:
    // 0x19b404: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
label_19b408:
    if (ctx->pc == 0x19B408u) {
        ctx->pc = 0x19B40Cu;
        goto label_19b40c;
    }
    ctx->pc = 0x19B404u;
    {
        const bool branch_taken_0x19b404 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b404) {
            ctx->pc = 0x19B414u;
            goto label_19b414;
        }
    }
    ctx->pc = 0x19B40Cu;
label_19b40c:
    // 0x19b40c: 0x10000008  b           . + 4 + (0x8 << 2)
label_19b410:
    if (ctx->pc == 0x19B410u) {
        ctx->pc = 0x19B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B40Cu;
        // 0x19b410: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B414u;
        goto label_19b414;
    }
    ctx->pc = 0x19B40Cu;
    {
        const bool branch_taken_0x19b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B40Cu;
        // 0x19b410: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b40c) {
            ctx->pc = 0x19B430u;
            goto label_19b430;
        }
    }
    ctx->pc = 0x19B414u;
label_19b414:
    // 0x19b414: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19b418:
    // 0x19b418: 0x29020007  slti        $v0, $t0, 0x7
    ctx->pc = 0x19b418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
label_19b41c:
    // 0x19b41c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_19b420:
    if (ctx->pc == 0x19B420u) {
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B424u;
        goto label_19b424;
    }
    ctx->pc = 0x19B41Cu;
    {
        const bool branch_taken_0x19b41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B41Cu;
        // 0x19b420: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b41c) {
            ctx->pc = 0x19B3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b3f4;
        }
    }
    ctx->pc = 0x19B424u;
label_19b424:
    // 0x19b424: 0x10000002  b           . + 4 + (0x2 << 2)
label_19b428:
    if (ctx->pc == 0x19B428u) {
        ctx->pc = 0x19B42Cu;
        goto label_19b42c;
    }
    ctx->pc = 0x19B424u;
    {
        const bool branch_taken_0x19b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b424) {
            ctx->pc = 0x19B430u;
            goto label_19b430;
        }
    }
    ctx->pc = 0x19B42Cu;
label_19b42c:
    // 0x19b42c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b430:
    // 0x19b430: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_19b434:
    if (ctx->pc == 0x19B434u) {
        ctx->pc = 0x19B438u;
        goto label_19b438;
    }
    ctx->pc = 0x19B430u;
    {
        const bool branch_taken_0x19b430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b430) {
            ctx->pc = 0x19B500u;
            goto label_19b500;
        }
    }
    ctx->pc = 0x19B438u;
label_19b438:
    // 0x19b438: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b43c:
    // 0x19b43c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_19b440:
    if (ctx->pc == 0x19B440u) {
        ctx->pc = 0x19B444u;
        goto label_19b444;
    }
    ctx->pc = 0x19B43Cu;
    {
        const bool branch_taken_0x19b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b43c) {
            ctx->pc = 0x19B478u;
            goto label_19b478;
        }
    }
    ctx->pc = 0x19B444u;
label_19b444:
    // 0x19b444: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b448:
    // 0x19b448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b44c:
    // 0x19b44c: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b450:
    // 0x19b450: 0x320f809  jalr        $t9
label_19b454:
    if (ctx->pc == 0x19B454u) {
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B458u;
        goto label_19b458;
    }
    ctx->pc = 0x19B450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B458u);
        ctx->pc = 0x19B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B450u;
        // 0x19b454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B450u, 0x19B458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B458u;
label_19b458:
    // 0x19b458: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b45c:
    // 0x19b45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b460:
    // 0x19b460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b464:
    // 0x19b464: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b468:
    // 0x19b468: 0x320f809  jalr        $t9
label_19b46c:
    if (ctx->pc == 0x19B46Cu) {
        ctx->pc = 0x19B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B468u;
        // 0x19b46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B470u;
        goto label_19b470;
    }
    ctx->pc = 0x19B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B470u);
        ctx->pc = 0x19B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B468u;
        // 0x19b46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B468u, 0x19B470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B470u;
label_19b470:
    // 0x19b470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b474:
    // 0x19b474: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x19b474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
label_19b478:
    // 0x19b478: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b47c:
    // 0x19b47c: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b480:
    // 0x19b480: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b484:
    // 0x19b484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b488:
    // 0x19b488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b48c:
    // 0x19b48c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b490:
    // 0x19b490: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b494:
    // 0x19b494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b498:
    // 0x19b498: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b49c:
    // 0x19b49c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b4a0:
    // 0x19b4a0: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b4a4:
    // 0x19b4a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b4a8:
    // 0x19b4a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b4ac:
    // 0x19b4ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b4b0:
    // 0x19b4b0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b4b4:
    // 0x19b4b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b4b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b4b8:
    // 0x19b4b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b4bc:
    // 0x19b4bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b4bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b4c0:
    // 0x19b4c0: 0x0  nop
    ctx->pc = 0x19b4c0u;
    // NOP
label_19b4c4:
    // 0x19b4c4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b4c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b4c8:
    // 0x19b4c8: 0x0  nop
    ctx->pc = 0x19b4c8u;
    // NOP
label_19b4cc:
    // 0x19b4cc: 0x0  nop
    ctx->pc = 0x19b4ccu;
    // NOP
label_19b4d0:
    // 0x19b4d0: 0x3012  mflo        $a2
    ctx->pc = 0x19b4d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b4d4:
    // 0x19b4d4: 0xc04bf38  jal         func_12FCE0
label_19b4d8:
    if (ctx->pc == 0x19B4D8u) {
        ctx->pc = 0x19B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D4u;
        // 0x19b4d8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4DCu;
        goto label_19b4dc;
    }
    ctx->pc = 0x19B4D4u;
    SET_GPR_U32(ctx, 31, 0x19B4DCu);
    ctx->pc = 0x19B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4D4u;
    // 0x19b4d8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B4D4u, 0x19B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4DCu;
label_19b4dc:
    // 0x19b4dc: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b4e0:
    // 0x19b4e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b4e4:
    // 0x19b4e4: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b4e8:
    // 0x19b4e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b4ec:
    // 0x19b4ec: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b4f0:
    // 0x19b4f0: 0x320f809  jalr        $t9
label_19b4f4:
    if (ctx->pc == 0x19B4F4u) {
        ctx->pc = 0x19B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F0u;
        // 0x19b4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4F8u;
        goto label_19b4f8;
    }
    ctx->pc = 0x19B4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B4F8u);
        ctx->pc = 0x19B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F0u;
        // 0x19b4f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4F0u, 0x19B4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B4F8u;
label_19b4f8:
    // 0x19b4f8: 0x10000031  b           . + 4 + (0x31 << 2)
label_19b4fc:
    if (ctx->pc == 0x19B4FCu) {
        ctx->pc = 0x19B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F8u;
        // 0x19b4fc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B500u;
        goto label_19b500;
    }
    ctx->pc = 0x19B4F8u;
    {
        const bool branch_taken_0x19b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4F8u;
        // 0x19b4fc: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f8) {
            ctx->pc = 0x19B5C0u;
            goto label_19b5c0;
        }
    }
    ctx->pc = 0x19B500u;
label_19b500:
    // 0x19b500: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b504:
    // 0x19b504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19b508:
    if (ctx->pc == 0x19B508u) {
        ctx->pc = 0x19B50Cu;
        goto label_19b50c;
    }
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B53Cu;
            goto label_19b53c;
        }
    }
    ctx->pc = 0x19B50Cu;
label_19b50c:
    // 0x19b50c: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b510:
    // 0x19b510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b514:
    // 0x19b514: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b518:
    // 0x19b518: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b51c:
    // 0x19b51c: 0x320f809  jalr        $t9
label_19b520:
    if (ctx->pc == 0x19B520u) {
        ctx->pc = 0x19B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B51Cu;
        // 0x19b520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B524u;
        goto label_19b524;
    }
    ctx->pc = 0x19B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B524u);
        ctx->pc = 0x19B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B51Cu;
        // 0x19b520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B51Cu, 0x19B524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B524u;
label_19b524:
    // 0x19b524: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b528:
    // 0x19b528: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b52c:
    // 0x19b52c: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b530:
    // 0x19b530: 0x320f809  jalr        $t9
label_19b534:
    if (ctx->pc == 0x19B534u) {
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B538u;
        goto label_19b538;
    }
    ctx->pc = 0x19B530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B538u);
        ctx->pc = 0x19B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B530u;
        // 0x19b534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B530u, 0x19B538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B538u;
label_19b538:
    // 0x19b538: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19b53c:
    // 0x19b53c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b540:
    // 0x19b540: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b544:
    // 0x19b544: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b548:
    // 0x19b548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b54c:
    // 0x19b54c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b550:
    // 0x19b550: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b554:
    // 0x19b554: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b558:
    // 0x19b558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b55c:
    // 0x19b55c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b560:
    // 0x19b560: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b564:
    // 0x19b564: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b568:
    // 0x19b568: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b56c:
    // 0x19b56c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b570:
    // 0x19b570: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b574:
    // 0x19b574: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b578:
    // 0x19b578: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b57c:
    // 0x19b57c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b580:
    // 0x19b580: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b584:
    // 0x19b584: 0x0  nop
    ctx->pc = 0x19b584u;
    // NOP
label_19b588:
    // 0x19b588: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b588u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b58c:
    // 0x19b58c: 0x0  nop
    ctx->pc = 0x19b58cu;
    // NOP
label_19b590:
    // 0x19b590: 0x0  nop
    ctx->pc = 0x19b590u;
    // NOP
label_19b594:
    // 0x19b594: 0x3012  mflo        $a2
    ctx->pc = 0x19b594u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b598:
    // 0x19b598: 0xc04bf38  jal         func_12FCE0
label_19b59c:
    if (ctx->pc == 0x19B59Cu) {
        ctx->pc = 0x19B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B598u;
        // 0x19b59c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5A0u;
        goto label_19b5a0;
    }
    ctx->pc = 0x19B598u;
    SET_GPR_U32(ctx, 31, 0x19B5A0u);
    ctx->pc = 0x19B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B598u;
    // 0x19b59c: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B598u, 0x19B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5A0u;
label_19b5a0:
    // 0x19b5a0: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b5a4:
    // 0x19b5a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b5a8:
    // 0x19b5a8: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b5ac:
    // 0x19b5ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b5b0:
    // 0x19b5b0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b5b4:
    // 0x19b5b4: 0x320f809  jalr        $t9
label_19b5b8:
    if (ctx->pc == 0x19B5B8u) {
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5BCu;
        goto label_19b5bc;
    }
    ctx->pc = 0x19B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B5BCu);
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5B4u, 0x19B5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5BCu;
label_19b5bc:
    // 0x19b5bc: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19b5c0:
    // 0x19b5c0: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_19b5c4:
    if (ctx->pc == 0x19B5C4u) {
        ctx->pc = 0x19B5C8u;
        goto label_19b5c8;
    }
    ctx->pc = 0x19B5C0u;
    {
        const bool branch_taken_0x19b5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b5c0) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B5C8u;
label_19b5c8:
    // 0x19b5c8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b5cc:
    // 0x19b5cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19b5d0:
    if (ctx->pc == 0x19B5D0u) {
        ctx->pc = 0x19B5D4u;
        goto label_19b5d4;
    }
    ctx->pc = 0x19B5CCu;
    {
        const bool branch_taken_0x19b5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5cc) {
            ctx->pc = 0x19B604u;
            goto label_19b604;
        }
    }
    ctx->pc = 0x19B5D4u;
label_19b5d4:
    // 0x19b5d4: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b5d8:
    // 0x19b5d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b5dc:
    // 0x19b5dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b5e0:
    // 0x19b5e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b5e4:
    // 0x19b5e4: 0x320f809  jalr        $t9
label_19b5e8:
    if (ctx->pc == 0x19B5E8u) {
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5ECu;
        goto label_19b5ec;
    }
    ctx->pc = 0x19B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B5ECu);
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5E4u, 0x19B5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5ECu;
label_19b5ec:
    // 0x19b5ec: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b5f0:
    // 0x19b5f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b5f4:
    // 0x19b5f4: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b5f8:
    // 0x19b5f8: 0x320f809  jalr        $t9
label_19b5fc:
    if (ctx->pc == 0x19B5FCu) {
        ctx->pc = 0x19B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5F8u;
        // 0x19b5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B600u;
        goto label_19b600;
    }
    ctx->pc = 0x19B5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B600u);
        ctx->pc = 0x19B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5F8u;
        // 0x19b5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5F8u, 0x19B600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B600u;
label_19b600:
    // 0x19b600: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19b604:
    // 0x19b604: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b608:
    // 0x19b608: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x19b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19b60c:
    // 0x19b60c: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_19b610:
    // 0x19b610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19b614:
    // 0x19b614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b618:
    // 0x19b618: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x19b618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_19b61c:
    // 0x19b61c: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
label_19b620:
    // 0x19b620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19b624:
    // 0x19b624: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19b628:
    // 0x19b628: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19b62c:
    // 0x19b62c: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x19b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_19b630:
    // 0x19b630: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19b634:
    // 0x19b634: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_19b638:
    // 0x19b638: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b63c:
    // 0x19b63c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x19b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_19b640:
    // 0x19b640: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19b644:
    // 0x19b644: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19b648:
    // 0x19b648: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19b648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19b64c:
    // 0x19b64c: 0x0  nop
    ctx->pc = 0x19b64cu;
    // NOP
label_19b650:
    // 0x19b650: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19b650u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19b654:
    // 0x19b654: 0x0  nop
    ctx->pc = 0x19b654u;
    // NOP
label_19b658:
    // 0x19b658: 0x0  nop
    ctx->pc = 0x19b658u;
    // NOP
label_19b65c:
    // 0x19b65c: 0x3012  mflo        $a2
    ctx->pc = 0x19b65cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_19b660:
    // 0x19b660: 0xc04bf38  jal         func_12FCE0
label_19b664:
    if (ctx->pc == 0x19B664u) {
        ctx->pc = 0x19B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B660u;
        // 0x19b664: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B668u;
        goto label_19b668;
    }
    ctx->pc = 0x19B660u;
    SET_GPR_U32(ctx, 31, 0x19B668u);
    ctx->pc = 0x19B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B660u;
    // 0x19b664: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x19B660u, 0x19B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B668u;
label_19b668:
    // 0x19b668: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b66c:
    // 0x19b66c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19b670:
    // 0x19b670: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_19b674:
    // 0x19b674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b678:
    // 0x19b678: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19b67c:
    // 0x19b67c: 0x320f809  jalr        $t9
label_19b680:
    if (ctx->pc == 0x19B680u) {
        ctx->pc = 0x19B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B67Cu;
        // 0x19b680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B684u;
        goto label_19b684;
    }
    ctx->pc = 0x19B67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B684u);
        ctx->pc = 0x19B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B67Cu;
        // 0x19b680: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B67Cu, 0x19B684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B684u;
label_19b684:
    // 0x19b684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b688:
    // 0x19b688: 0xc063e08  jal         func_18F820
label_19b68c:
    if (ctx->pc == 0x19B68Cu) {
        ctx->pc = 0x19B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B688u;
        // 0x19b68c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B690u;
        goto label_19b690;
    }
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x19B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B688u;
    // 0x19b68c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B688u, 0x19B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B690u;
label_19b690:
    // 0x19b690: 0x10000017  b           . + 4 + (0x17 << 2)
label_19b694:
    if (ctx->pc == 0x19B694u) {
        ctx->pc = 0x19B698u;
        goto label_19b698;
    }
    ctx->pc = 0x19B690u;
    {
        const bool branch_taken_0x19b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b690) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B698u;
label_19b698:
    // 0x19b698: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b69c:
    // 0x19b69c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b6a0:
    // 0x19b6a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19b6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19b6a4:
    // 0x19b6a4: 0x320f809  jalr        $t9
label_19b6a8:
    if (ctx->pc == 0x19B6A8u) {
        ctx->pc = 0x19B6ACu;
        goto label_19b6ac;
    }
    ctx->pc = 0x19B6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B6ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B6A4u, 0x19B6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B6ACu;
label_19b6ac:
    // 0x19b6ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b6b0:
    // 0x19b6b0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_19b6b4:
    if (ctx->pc == 0x19B6B4u) {
        ctx->pc = 0x19B6B8u;
        goto label_19b6b8;
    }
    ctx->pc = 0x19B6B0u;
    {
        const bool branch_taken_0x19b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b6b0) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B6B8u;
label_19b6b8:
    // 0x19b6b8: 0xc04be08  jal         func_12F820
label_19b6bc:
    if (ctx->pc == 0x19B6BCu) {
        ctx->pc = 0x19B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6B8u;
        // 0x19b6bc: 0x8e240784  lw          $a0, 0x784($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6C0u;
        goto label_19b6c0;
    }
    ctx->pc = 0x19B6B8u;
    SET_GPR_U32(ctx, 31, 0x19B6C0u);
    ctx->pc = 0x19B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6B8u;
    // 0x19b6bc: 0x8e240784  lw          $a0, 0x784($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x19B6B8u, 0x19B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6C0u;
label_19b6c0:
    // 0x19b6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b6c4:
    // 0x19b6c4: 0xc063e08  jal         func_18F820
label_19b6c8:
    if (ctx->pc == 0x19B6C8u) {
        ctx->pc = 0x19B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6C4u;
        // 0x19b6c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6CCu;
        goto label_19b6cc;
    }
    ctx->pc = 0x19B6C4u;
    SET_GPR_U32(ctx, 31, 0x19B6CCu);
    ctx->pc = 0x19B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6C4u;
    // 0x19b6c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B6C4u, 0x19B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6CCu;
label_19b6cc:
    // 0x19b6cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_19b6d0:
    if (ctx->pc == 0x19B6D0u) {
        ctx->pc = 0x19B6D4u;
        goto label_19b6d4;
    }
    ctx->pc = 0x19B6CCu;
    {
        const bool branch_taken_0x19b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6cc) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B6D4u;
label_19b6d4:
    // 0x19b6d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19b6d8:
    if (ctx->pc == 0x19B6D8u) {
        ctx->pc = 0x19B6DCu;
        goto label_19b6dc;
    }
    ctx->pc = 0x19B6D4u;
    {
        const bool branch_taken_0x19b6d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6d4) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B6DCu;
label_19b6dc:
    // 0x19b6dc: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19b6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19b6e0:
    // 0x19b6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b6e4:
    // 0x19b6e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19b6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19b6e8:
    // 0x19b6e8: 0x320f809  jalr        $t9
label_19b6ec:
    if (ctx->pc == 0x19B6ECu) {
        ctx->pc = 0x19B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6E8u;
        // 0x19b6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6F0u;
        goto label_19b6f0;
    }
    ctx->pc = 0x19B6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B6F0u);
        ctx->pc = 0x19B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6E8u;
        // 0x19b6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B6E8u, 0x19B6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B6F0u;
label_19b6f0:
    // 0x19b6f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19b6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19b6f4:
    // 0x19b6f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19b6f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19b6f8:
    // 0x19b6f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19b6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19b6fc:
    // 0x19b6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19b700:
    // 0x19b700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19b704:
    // 0x19b704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19b708:
    // 0x19b708: 0x3e00008  jr          $ra
label_19b70c:
    if (ctx->pc == 0x19B70Cu) {
        ctx->pc = 0x19B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B708u;
        // 0x19b70c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B710u;
        goto label_fallthrough_0x19b708;
    }
    ctx->pc = 0x19B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B708u;
        // 0x19b70c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19b708:
    ctx->pc = 0x19B710u;
}
