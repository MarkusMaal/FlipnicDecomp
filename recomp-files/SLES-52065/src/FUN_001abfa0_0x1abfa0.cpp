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

// Function: FUN_001abfa0
// Address: 0x1abfa0 - 0x1ac9c0
void FUN_001abfa0_0x1abfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abfa0_0x1abfa0");
#endif

    switch (ctx->pc) {
        case 0x1abfa0u: goto label_1abfa0;
        case 0x1abfa4u: goto label_1abfa4;
        case 0x1abfa8u: goto label_1abfa8;
        case 0x1abfacu: goto label_1abfac;
        case 0x1abfb0u: goto label_1abfb0;
        case 0x1abfb4u: goto label_1abfb4;
        case 0x1abfb8u: goto label_1abfb8;
        case 0x1abfbcu: goto label_1abfbc;
        case 0x1abfc0u: goto label_1abfc0;
        case 0x1abfc4u: goto label_1abfc4;
        case 0x1abfc8u: goto label_1abfc8;
        case 0x1abfccu: goto label_1abfcc;
        case 0x1abfd0u: goto label_1abfd0;
        case 0x1abfd4u: goto label_1abfd4;
        case 0x1abfd8u: goto label_1abfd8;
        case 0x1abfdcu: goto label_1abfdc;
        case 0x1abfe0u: goto label_1abfe0;
        case 0x1abfe4u: goto label_1abfe4;
        case 0x1abfe8u: goto label_1abfe8;
        case 0x1abfecu: goto label_1abfec;
        case 0x1abff0u: goto label_1abff0;
        case 0x1abff4u: goto label_1abff4;
        case 0x1abff8u: goto label_1abff8;
        case 0x1abffcu: goto label_1abffc;
        case 0x1ac000u: goto label_1ac000;
        case 0x1ac004u: goto label_1ac004;
        case 0x1ac008u: goto label_1ac008;
        case 0x1ac00cu: goto label_1ac00c;
        case 0x1ac010u: goto label_1ac010;
        case 0x1ac014u: goto label_1ac014;
        case 0x1ac018u: goto label_1ac018;
        case 0x1ac01cu: goto label_1ac01c;
        case 0x1ac020u: goto label_1ac020;
        case 0x1ac024u: goto label_1ac024;
        case 0x1ac028u: goto label_1ac028;
        case 0x1ac02cu: goto label_1ac02c;
        case 0x1ac030u: goto label_1ac030;
        case 0x1ac034u: goto label_1ac034;
        case 0x1ac038u: goto label_1ac038;
        case 0x1ac03cu: goto label_1ac03c;
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac044u: goto label_1ac044;
        case 0x1ac048u: goto label_1ac048;
        case 0x1ac04cu: goto label_1ac04c;
        case 0x1ac050u: goto label_1ac050;
        case 0x1ac054u: goto label_1ac054;
        case 0x1ac058u: goto label_1ac058;
        case 0x1ac05cu: goto label_1ac05c;
        case 0x1ac060u: goto label_1ac060;
        case 0x1ac064u: goto label_1ac064;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac06cu: goto label_1ac06c;
        case 0x1ac070u: goto label_1ac070;
        case 0x1ac074u: goto label_1ac074;
        case 0x1ac078u: goto label_1ac078;
        case 0x1ac07cu: goto label_1ac07c;
        case 0x1ac080u: goto label_1ac080;
        case 0x1ac084u: goto label_1ac084;
        case 0x1ac088u: goto label_1ac088;
        case 0x1ac08cu: goto label_1ac08c;
        case 0x1ac090u: goto label_1ac090;
        case 0x1ac094u: goto label_1ac094;
        case 0x1ac098u: goto label_1ac098;
        case 0x1ac09cu: goto label_1ac09c;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0a4u: goto label_1ac0a4;
        case 0x1ac0a8u: goto label_1ac0a8;
        case 0x1ac0acu: goto label_1ac0ac;
        case 0x1ac0b0u: goto label_1ac0b0;
        case 0x1ac0b4u: goto label_1ac0b4;
        case 0x1ac0b8u: goto label_1ac0b8;
        case 0x1ac0bcu: goto label_1ac0bc;
        case 0x1ac0c0u: goto label_1ac0c0;
        case 0x1ac0c4u: goto label_1ac0c4;
        case 0x1ac0c8u: goto label_1ac0c8;
        case 0x1ac0ccu: goto label_1ac0cc;
        case 0x1ac0d0u: goto label_1ac0d0;
        case 0x1ac0d4u: goto label_1ac0d4;
        case 0x1ac0d8u: goto label_1ac0d8;
        case 0x1ac0dcu: goto label_1ac0dc;
        case 0x1ac0e0u: goto label_1ac0e0;
        case 0x1ac0e4u: goto label_1ac0e4;
        case 0x1ac0e8u: goto label_1ac0e8;
        case 0x1ac0ecu: goto label_1ac0ec;
        case 0x1ac0f0u: goto label_1ac0f0;
        case 0x1ac0f4u: goto label_1ac0f4;
        case 0x1ac0f8u: goto label_1ac0f8;
        case 0x1ac0fcu: goto label_1ac0fc;
        case 0x1ac100u: goto label_1ac100;
        case 0x1ac104u: goto label_1ac104;
        case 0x1ac108u: goto label_1ac108;
        case 0x1ac10cu: goto label_1ac10c;
        case 0x1ac110u: goto label_1ac110;
        case 0x1ac114u: goto label_1ac114;
        case 0x1ac118u: goto label_1ac118;
        case 0x1ac11cu: goto label_1ac11c;
        case 0x1ac120u: goto label_1ac120;
        case 0x1ac124u: goto label_1ac124;
        case 0x1ac128u: goto label_1ac128;
        case 0x1ac12cu: goto label_1ac12c;
        case 0x1ac130u: goto label_1ac130;
        case 0x1ac134u: goto label_1ac134;
        case 0x1ac138u: goto label_1ac138;
        case 0x1ac13cu: goto label_1ac13c;
        case 0x1ac140u: goto label_1ac140;
        case 0x1ac144u: goto label_1ac144;
        case 0x1ac148u: goto label_1ac148;
        case 0x1ac14cu: goto label_1ac14c;
        case 0x1ac150u: goto label_1ac150;
        case 0x1ac154u: goto label_1ac154;
        case 0x1ac158u: goto label_1ac158;
        case 0x1ac15cu: goto label_1ac15c;
        case 0x1ac160u: goto label_1ac160;
        case 0x1ac164u: goto label_1ac164;
        case 0x1ac168u: goto label_1ac168;
        case 0x1ac16cu: goto label_1ac16c;
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac174u: goto label_1ac174;
        case 0x1ac178u: goto label_1ac178;
        case 0x1ac17cu: goto label_1ac17c;
        case 0x1ac180u: goto label_1ac180;
        case 0x1ac184u: goto label_1ac184;
        case 0x1ac188u: goto label_1ac188;
        case 0x1ac18cu: goto label_1ac18c;
        case 0x1ac190u: goto label_1ac190;
        case 0x1ac194u: goto label_1ac194;
        case 0x1ac198u: goto label_1ac198;
        case 0x1ac19cu: goto label_1ac19c;
        case 0x1ac1a0u: goto label_1ac1a0;
        case 0x1ac1a4u: goto label_1ac1a4;
        case 0x1ac1a8u: goto label_1ac1a8;
        case 0x1ac1acu: goto label_1ac1ac;
        case 0x1ac1b0u: goto label_1ac1b0;
        case 0x1ac1b4u: goto label_1ac1b4;
        case 0x1ac1b8u: goto label_1ac1b8;
        case 0x1ac1bcu: goto label_1ac1bc;
        case 0x1ac1c0u: goto label_1ac1c0;
        case 0x1ac1c4u: goto label_1ac1c4;
        case 0x1ac1c8u: goto label_1ac1c8;
        case 0x1ac1ccu: goto label_1ac1cc;
        case 0x1ac1d0u: goto label_1ac1d0;
        case 0x1ac1d4u: goto label_1ac1d4;
        case 0x1ac1d8u: goto label_1ac1d8;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac1e0u: goto label_1ac1e0;
        case 0x1ac1e4u: goto label_1ac1e4;
        case 0x1ac1e8u: goto label_1ac1e8;
        case 0x1ac1ecu: goto label_1ac1ec;
        case 0x1ac1f0u: goto label_1ac1f0;
        case 0x1ac1f4u: goto label_1ac1f4;
        case 0x1ac1f8u: goto label_1ac1f8;
        case 0x1ac1fcu: goto label_1ac1fc;
        case 0x1ac200u: goto label_1ac200;
        case 0x1ac204u: goto label_1ac204;
        case 0x1ac208u: goto label_1ac208;
        case 0x1ac20cu: goto label_1ac20c;
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac214u: goto label_1ac214;
        case 0x1ac218u: goto label_1ac218;
        case 0x1ac21cu: goto label_1ac21c;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac224u: goto label_1ac224;
        case 0x1ac228u: goto label_1ac228;
        case 0x1ac22cu: goto label_1ac22c;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac234u: goto label_1ac234;
        case 0x1ac238u: goto label_1ac238;
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac244u: goto label_1ac244;
        case 0x1ac248u: goto label_1ac248;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac584u: goto label_1ac584;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac594u: goto label_1ac594;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac59cu: goto label_1ac59c;
        case 0x1ac5a0u: goto label_1ac5a0;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5acu: goto label_1ac5ac;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5b8u: goto label_1ac5b8;
        case 0x1ac5bcu: goto label_1ac5bc;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5c4u: goto label_1ac5c4;
        case 0x1ac5c8u: goto label_1ac5c8;
        case 0x1ac5ccu: goto label_1ac5cc;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5d8u: goto label_1ac5d8;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5e0u: goto label_1ac5e0;
        case 0x1ac5e4u: goto label_1ac5e4;
        case 0x1ac5e8u: goto label_1ac5e8;
        case 0x1ac5ecu: goto label_1ac5ec;
        case 0x1ac5f0u: goto label_1ac5f0;
        case 0x1ac5f4u: goto label_1ac5f4;
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac600u: goto label_1ac600;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac608u: goto label_1ac608;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac610u: goto label_1ac610;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac618u: goto label_1ac618;
        case 0x1ac61cu: goto label_1ac61c;
        case 0x1ac620u: goto label_1ac620;
        case 0x1ac624u: goto label_1ac624;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac62cu: goto label_1ac62c;
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac634u: goto label_1ac634;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac63cu: goto label_1ac63c;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac64cu: goto label_1ac64c;
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac654u: goto label_1ac654;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac65cu: goto label_1ac65c;
        case 0x1ac660u: goto label_1ac660;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac670u: goto label_1ac670;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac678u: goto label_1ac678;
        case 0x1ac67cu: goto label_1ac67c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac688u: goto label_1ac688;
        case 0x1ac68cu: goto label_1ac68c;
        case 0x1ac690u: goto label_1ac690;
        case 0x1ac694u: goto label_1ac694;
        case 0x1ac698u: goto label_1ac698;
        case 0x1ac69cu: goto label_1ac69c;
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac6a4u: goto label_1ac6a4;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6acu: goto label_1ac6ac;
        case 0x1ac6b0u: goto label_1ac6b0;
        case 0x1ac6b4u: goto label_1ac6b4;
        case 0x1ac6b8u: goto label_1ac6b8;
        case 0x1ac6bcu: goto label_1ac6bc;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac6c4u: goto label_1ac6c4;
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6ccu: goto label_1ac6cc;
        case 0x1ac6d0u: goto label_1ac6d0;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6d8u: goto label_1ac6d8;
        case 0x1ac6dcu: goto label_1ac6dc;
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        default: break;
    }

    ctx->pc = 0x1abfa0u;

label_1abfa0:
    // 0x1abfa0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1abfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1abfa4:
    // 0x1abfa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1abfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1abfa8:
    // 0x1abfa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1abfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1abfac:
    // 0x1abfac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1abfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1abfb0:
    // 0x1abfb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1abfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1abfb4:
    // 0x1abfb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1abfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1abfb8:
    // 0x1abfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1abfbc:
    // 0x1abfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1abfc0:
    // 0x1abfc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abfc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abfc4:
    // 0x1abfc4: 0xc040800  jal         func_102000
label_1abfc8:
    if (ctx->pc == 0x1ABFC8u) {
        ctx->pc = 0x1ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC4u;
        // 0x1abfc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFCCu;
        goto label_1abfcc;
    }
    ctx->pc = 0x1ABFC4u;
    SET_GPR_U32(ctx, 31, 0x1ABFCCu);
    ctx->pc = 0x1ABFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFC4u;
    // 0x1abfc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102000u, 0x1ABFC4u, 0x1ABFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABFCCu;
label_1abfcc:
    // 0x1abfcc: 0xc063dd4  jal         func_18F750
label_1abfd0:
    if (ctx->pc == 0x1ABFD0u) {
        ctx->pc = 0x1ABFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFCCu;
        // 0x1abfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFD4u;
        goto label_1abfd4;
    }
    ctx->pc = 0x1ABFCCu;
    SET_GPR_U32(ctx, 31, 0x1ABFD4u);
    ctx->pc = 0x1ABFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFCCu;
    // 0x1abfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1ABFCCu, 0x1ABFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABFD4u;
label_1abfd4:
    // 0x1abfd4: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1abfd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1abfd8:
    // 0x1abfd8: 0x1020022e  beqz        $at, . + 4 + (0x22E << 2)
label_1abfdc:
    if (ctx->pc == 0x1ABFDCu) {
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABFE0u;
        goto label_1abfe0;
    }
    ctx->pc = 0x1ABFD8u;
    {
        const bool branch_taken_0x1abfd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfd8) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1ABFE0u;
label_1abfe0:
    // 0x1abfe0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1abfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1abfe4:
    // 0x1abfe4: 0x248409e0  addiu       $a0, $a0, 0x9E0
    ctx->pc = 0x1abfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2528));
label_1abfe8:
    // 0x1abfe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1abfec:
    // 0x1abfec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1abfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1abff0:
    // 0x1abff0: 0x600008  jr          $v1
label_1abff4:
    if (ctx->pc == 0x1ABFF4u) {
        ctx->pc = 0x1ABFF8u;
        goto label_1abff8;
    }
    ctx->pc = 0x1ABFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1AC1A8u: goto label_1ac1a8;
            case 0x1AC250u: goto label_1ac250;
            case 0x1AC2F0u: goto label_1ac2f0;
            case 0x1AC384u: goto label_1ac384;
            case 0x1AC3ACu: goto label_1ac3ac;
            case 0x1AC3D0u: goto label_1ac3d0;
            case 0x1AC3E0u: goto label_1ac3e0;
            case 0x1AC4ECu: goto label_1ac4ec;
            case 0x1AC580u: goto label_1ac580;
            case 0x1AC690u: goto label_1ac690;
            case 0x1AC6F8u: goto label_1ac6f8;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC894u: goto label_1ac894;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ABFF8u;
label_1abff8:
    // 0x1abff8: 0xc067f08  jal         func_19FC20
label_1abffc:
    if (ctx->pc == 0x1ABFFCu) {
        ctx->pc = 0x1AC000u;
        goto label_1ac000;
    }
    ctx->pc = 0x1ABFF8u;
    SET_GPR_U32(ctx, 31, 0x1AC000u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1ABFF8u, 0x1AC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC000u;
label_1ac000:
    // 0x1ac000: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ac000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac004:
    // 0x1ac004: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_1ac008:
    if (ctx->pc == 0x1AC008u) {
        ctx->pc = 0x1AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC004u;
        // 0x1ac008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC00Cu;
        goto label_1ac00c;
    }
    ctx->pc = 0x1AC004u;
    {
        const bool branch_taken_0x1ac004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC004u;
        // 0x1ac008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac004) {
            ctx->pc = 0x1AC028u;
            goto label_1ac028;
        }
    }
    ctx->pc = 0x1AC00Cu;
label_1ac00c:
    // 0x1ac00c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac010:
    // 0x1ac010: 0xc067f68  jal         func_19FDA0
label_1ac014:
    if (ctx->pc == 0x1AC014u) {
        ctx->pc = 0x1AC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC010u;
        // 0x1ac014: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC018u;
        goto label_1ac018;
    }
    ctx->pc = 0x1AC010u;
    SET_GPR_U32(ctx, 31, 0x1AC018u);
    ctx->pc = 0x1AC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC010u;
    // 0x1ac014: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AC010u, 0x1AC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC018u;
label_1ac018:
    // 0x1ac018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac01c:
    // 0x1ac01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac020:
    // 0x1ac020: 0xc067f68  jal         func_19FDA0
label_1ac024:
    if (ctx->pc == 0x1AC024u) {
        ctx->pc = 0x1AC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC020u;
        // 0x1ac024: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC028u;
        goto label_1ac028;
    }
    ctx->pc = 0x1AC020u;
    SET_GPR_U32(ctx, 31, 0x1AC028u);
    ctx->pc = 0x1AC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC020u;
    // 0x1ac024: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1AC020u, 0x1AC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC028u;
label_1ac028:
    // 0x1ac028: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ac028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ac02c:
    // 0x1ac02c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ac02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ac030:
    // 0x1ac030: 0xc06bd80  jal         func_1AF600
label_1ac034:
    if (ctx->pc == 0x1AC034u) {
        ctx->pc = 0x1AC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC030u;
        // 0x1ac034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC038u;
        goto label_1ac038;
    }
    ctx->pc = 0x1AC030u;
    SET_GPR_U32(ctx, 31, 0x1AC038u);
    ctx->pc = 0x1AC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC030u;
    // 0x1ac034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1AC030u, 0x1AC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC038u;
label_1ac038:
    // 0x1ac038: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ac03c:
    // 0x1ac03c: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ac03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ac040:
    // 0x1ac040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ac044:
    if (ctx->pc == 0x1AC044u) {
        ctx->pc = 0x1AC048u;
        goto label_1ac048;
    }
    ctx->pc = 0x1AC040u;
    {
        const bool branch_taken_0x1ac040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac040) {
            ctx->pc = 0x1AC054u;
            goto label_1ac054;
        }
    }
    ctx->pc = 0x1AC048u;
label_1ac048:
    // 0x1ac048: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ac048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ac04c:
    // 0x1ac04c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ac04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ac050:
    // 0x1ac050: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x1ac050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
label_1ac054:
    // 0x1ac054: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ac054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ac058:
    // 0x1ac058: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ac058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ac05c:
    // 0x1ac05c: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1ac05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1ac060:
    // 0x1ac060: 0xae220800  sw          $v0, 0x800($s1)
    ctx->pc = 0x1ac060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 2));
label_1ac064:
    // 0x1ac064: 0x8e240800  lw          $a0, 0x800($s1)
    ctx->pc = 0x1ac064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac068:
    // 0x1ac068: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ac06c:
    // 0x1ac06c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ac06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ac070:
    // 0x1ac070: 0x320f809  jalr        $t9
label_1ac074:
    if (ctx->pc == 0x1AC074u) {
        ctx->pc = 0x1AC078u;
        goto label_1ac078;
    }
    ctx->pc = 0x1AC070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC078u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC070u, 0x1AC078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC078u;
label_1ac078:
    // 0x1ac078: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac07c:
    // 0x1ac07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac080:
    // 0x1ac080: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ac080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ac084:
    // 0x1ac084: 0xc064228  jal         func_1908A0
label_1ac088:
    if (ctx->pc == 0x1AC088u) {
        ctx->pc = 0x1AC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC084u;
        // 0x1ac088: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC08Cu;
        goto label_1ac08c;
    }
    ctx->pc = 0x1AC084u;
    SET_GPR_U32(ctx, 31, 0x1AC08Cu);
    ctx->pc = 0x1AC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC084u;
    // 0x1ac088: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1AC084u, 0x1AC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC08Cu;
label_1ac08c:
    // 0x1ac08c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac090:
    // 0x1ac090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac094:
    // 0x1ac094: 0xc0642e0  jal         func_190B80
label_1ac098:
    if (ctx->pc == 0x1AC098u) {
        ctx->pc = 0x1AC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC094u;
        // 0x1ac098: 0x24a509b8  addiu       $a1, $a1, 0x9B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC09Cu;
        goto label_1ac09c;
    }
    ctx->pc = 0x1AC094u;
    SET_GPR_U32(ctx, 31, 0x1AC09Cu);
    ctx->pc = 0x1AC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC094u;
    // 0x1ac098: 0x24a509b8  addiu       $a1, $a1, 0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1AC094u, 0x1AC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC09Cu;
label_1ac09c:
    // 0x1ac09c: 0xae2206ec  sw          $v0, 0x6EC($s1)
    ctx->pc = 0x1ac09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 2));
label_1ac0a0:
    // 0x1ac0a0: 0xae2006e8  sw          $zero, 0x6E8($s1)
    ctx->pc = 0x1ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 0));
label_1ac0a4:
    // 0x1ac0a4: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_1ac0a8:
    // 0x1ac0a8: 0x8e230664  lw          $v1, 0x664($s1)
    ctx->pc = 0x1ac0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1ac0ac:
    // 0x1ac0ac: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1ac0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1ac0b0:
    // 0x1ac0b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ac0b4:
    // 0x1ac0b4: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1ac0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1ac0b8:
    // 0x1ac0b8: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x1ac0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ac0bc:
    // 0x1ac0bc: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1ac0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac0c0:
    // 0x1ac0c0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1ac0c4:
    if (ctx->pc == 0x1AC0C4u) {
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C0u;
        // 0x1ac0c4: 0x24720040  addiu       $s2, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0C8u;
        goto label_1ac0c8;
    }
    ctx->pc = 0x1AC0C0u;
    {
        const bool branch_taken_0x1ac0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C0u;
        // 0x1ac0c4: 0x24720040  addiu       $s2, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0c0) {
            ctx->pc = 0x1AC154u;
            goto label_1ac154;
        }
    }
    ctx->pc = 0x1AC0C8u;
label_1ac0c8:
    // 0x1ac0c8: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x1ac0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1ac0cc:
    // 0x1ac0cc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1ac0d0:
    if (ctx->pc == 0x1AC0D0u) {
        ctx->pc = 0x1AC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0CCu;
        // 0x1ac0d0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0D4u;
        goto label_1ac0d4;
    }
    ctx->pc = 0x1AC0CCu;
    {
        const bool branch_taken_0x1ac0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0CCu;
        // 0x1ac0d0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0cc) {
            ctx->pc = 0x1AC150u;
            goto label_1ac150;
        }
    }
    ctx->pc = 0x1AC0D4u;
label_1ac0d4:
    // 0x1ac0d4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_1ac0d8:
    if (ctx->pc == 0x1AC0D8u) {
        ctx->pc = 0x1AC0DCu;
        goto label_1ac0dc;
    }
    ctx->pc = 0x1AC0D4u;
    {
        const bool branch_taken_0x1ac0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0d4) {
            ctx->pc = 0x1AC140u;
            goto label_1ac140;
        }
    }
    ctx->pc = 0x1AC0DCu;
label_1ac0dc:
    // 0x1ac0dc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1ac0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1ac0e0:
    // 0x1ac0e0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1ac0e4:
    if (ctx->pc == 0x1AC0E4u) {
        ctx->pc = 0x1AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0E0u;
        // 0x1ac0e4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0E8u;
        goto label_1ac0e8;
    }
    ctx->pc = 0x1AC0E0u;
    {
        const bool branch_taken_0x1ac0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0E0u;
        // 0x1ac0e4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0e0) {
            ctx->pc = 0x1AC120u;
            goto label_1ac120;
        }
    }
    ctx->pc = 0x1AC0E8u;
label_1ac0e8:
    // 0x1ac0e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ac0ec:
    if (ctx->pc == 0x1AC0ECu) {
        ctx->pc = 0x1AC0F0u;
        goto label_1ac0f0;
    }
    ctx->pc = 0x1AC0E8u;
    {
        const bool branch_taken_0x1ac0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0e8) {
            ctx->pc = 0x1AC0F8u;
            goto label_1ac0f8;
        }
    }
    ctx->pc = 0x1AC0F0u;
label_1ac0f0:
    // 0x1ac0f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_1ac0f4:
    if (ctx->pc == 0x1AC0F4u) {
        ctx->pc = 0x1AC0F8u;
        goto label_1ac0f8;
    }
    ctx->pc = 0x1AC0F0u;
    {
        const bool branch_taken_0x1ac0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac0f0) {
            ctx->pc = 0x1AC150u;
            goto label_1ac150;
        }
    }
    ctx->pc = 0x1AC0F8u;
label_1ac0f8:
    // 0x1ac0f8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ac0fc:
    // 0x1ac0fc: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ac0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ac100:
    // 0x1ac100: 0xc057040  jal         func_15C100
label_1ac104:
    if (ctx->pc == 0x1AC104u) {
        ctx->pc = 0x1AC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC100u;
        // 0x1ac104: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC108u;
        goto label_1ac108;
    }
    ctx->pc = 0x1AC100u;
    SET_GPR_U32(ctx, 31, 0x1AC108u);
    ctx->pc = 0x1AC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC100u;
    // 0x1ac104: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AC100u, 0x1AC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC108u;
label_1ac108:
    // 0x1ac108: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1ac108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ac10c:
    // 0x1ac10c: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x1ac10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ac110:
    // 0x1ac110: 0x2673002c  addiu       $s3, $s3, 0x2C
    ctx->pc = 0x1ac110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1ac114:
    // 0x1ac114: 0xac830674  sw          $v1, 0x674($a0)
    ctx->pc = 0x1ac114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 3));
label_1ac118:
    // 0x1ac118: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ac11c:
    if (ctx->pc == 0x1AC11Cu) {
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC120u;
        goto label_1ac120;
    }
    ctx->pc = 0x1AC118u;
    {
        const bool branch_taken_0x1ac118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0xac820678  sw          $v0, 0x678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac118) {
            ctx->pc = 0x1AC150u;
            goto label_1ac150;
        }
    }
    ctx->pc = 0x1AC120u;
label_1ac120:
    // 0x1ac120: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1ac124:
    // 0x1ac124: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1ac128:
    // 0x1ac128: 0xc057040  jal         func_15C100
label_1ac12c:
    if (ctx->pc == 0x1AC12Cu) {
        ctx->pc = 0x1AC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC128u;
        // 0x1ac12c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC130u;
        goto label_1ac130;
    }
    ctx->pc = 0x1AC128u;
    SET_GPR_U32(ctx, 31, 0x1AC130u);
    ctx->pc = 0x1AC12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC128u;
    // 0x1ac12c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AC128u, 0x1AC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC130u;
label_1ac130:
    // 0x1ac130: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1ac134:
    // 0x1ac134: 0xac620680  sw          $v0, 0x680($v1)
    ctx->pc = 0x1ac134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
label_1ac138:
    // 0x1ac138: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ac13c:
    if (ctx->pc == 0x1AC13Cu) {
        ctx->pc = 0x1AC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC138u;
        // 0x1ac13c: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC140u;
        goto label_1ac140;
    }
    ctx->pc = 0x1AC138u;
    {
        const bool branch_taken_0x1ac138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC138u;
        // 0x1ac13c: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac138) {
            ctx->pc = 0x1AC150u;
            goto label_1ac150;
        }
    }
    ctx->pc = 0x1AC140u;
label_1ac140:
    // 0x1ac140: 0x8e2206e8  lw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
label_1ac144:
    // 0x1ac144: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ac148:
    if (ctx->pc == 0x1AC148u) {
        ctx->pc = 0x1AC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC144u;
        // 0x1ac148: 0x26420024  addiu       $v0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC14Cu;
        goto label_1ac14c;
    }
    ctx->pc = 0x1AC144u;
    {
        const bool branch_taken_0x1ac144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC144u;
        // 0x1ac148: 0x26420024  addiu       $v0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac144) {
            ctx->pc = 0x1AC150u;
            goto label_1ac150;
        }
    }
    ctx->pc = 0x1AC14Cu;
label_1ac14c:
    // 0x1ac14c: 0xae2206e8  sw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ac14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 2));
label_1ac150:
    // 0x1ac150: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1ac154:
    // 0x1ac154: 0x0  nop
    ctx->pc = 0x1ac154u;
    // NOP
label_1ac158:
    // 0x1ac158: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ac15c:
    // 0x1ac15c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ac160:
    // 0x1ac160: 0x1062ffd9  beq         $v1, $v0, . + 4 + (-0x27 << 2)
label_1ac164:
    if (ctx->pc == 0x1AC164u) {
        ctx->pc = 0x1AC168u;
        goto label_1ac168;
    }
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac0c8;
        }
    }
    ctx->pc = 0x1AC168u;
label_1ac168:
    // 0x1ac168: 0xc046458  jal         func_119160
label_1ac16c:
    if (ctx->pc == 0x1AC16Cu) {
        ctx->pc = 0x1AC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC168u;
        // 0x1ac16c: 0x8f848110  lw          $a0, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC170u;
        goto label_1ac170;
    }
    ctx->pc = 0x1AC168u;
    SET_GPR_U32(ctx, 31, 0x1AC170u);
    ctx->pc = 0x1AC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC168u;
    // 0x1ac16c: 0x8f848110  lw          $a0, -0x7EF0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1AC168u, 0x1AC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC170u;
label_1ac170:
    // 0x1ac170: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1ac174:
    // 0x1ac174: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1ac174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ac178:
    // 0x1ac178: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ac178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ac17c:
    // 0x1ac17c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ac180:
    // 0x1ac180: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac184:
    // 0x1ac184: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ac184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1ac188:
    // 0x1ac188: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1ac188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ac18c:
    // 0x1ac18c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac190:
    // 0x1ac190: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac194:
    // 0x1ac194: 0xae2206e4  sw          $v0, 0x6E4($s1)
    ctx->pc = 0x1ac194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 2));
label_1ac198:
    // 0x1ac198: 0xc06223c  jal         func_1888F0
label_1ac19c:
    if (ctx->pc == 0x1AC19Cu) {
        ctx->pc = 0x1AC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC198u;
        // 0x1ac19c: 0xae3107c0  sw          $s1, 0x7C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1A0u;
        goto label_1ac1a0;
    }
    ctx->pc = 0x1AC198u;
    SET_GPR_U32(ctx, 31, 0x1AC1A0u);
    ctx->pc = 0x1AC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC198u;
    // 0x1ac19c: 0xae3107c0  sw          $s1, 0x7C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1AC198u, 0x1AC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1A0u;
label_1ac1a0:
    // 0x1ac1a0: 0xc063e14  jal         func_18F850
label_1ac1a4:
    if (ctx->pc == 0x1AC1A4u) {
        ctx->pc = 0x1AC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1A0u;
        // 0x1ac1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1A8u;
        goto label_1ac1a8;
    }
    ctx->pc = 0x1AC1A0u;
    SET_GPR_U32(ctx, 31, 0x1AC1A8u);
    ctx->pc = 0x1AC1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC1A0u;
    // 0x1ac1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC1A0u, 0x1AC1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC1A8u;
label_1ac1a8:
    // 0x1ac1a8: 0xa22006d8  sb          $zero, 0x6D8($s1)
    ctx->pc = 0x1ac1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
label_1ac1ac:
    // 0x1ac1ac: 0xa22006d9  sb          $zero, 0x6D9($s1)
    ctx->pc = 0x1ac1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ac1b0:
    // 0x1ac1b0: 0xa22006da  sb          $zero, 0x6DA($s1)
    ctx->pc = 0x1ac1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 0));
label_1ac1b4:
    // 0x1ac1b4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ac1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ac1b8:
    // 0x1ac1b8: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ac1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ac1bc:
    // 0x1ac1bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ac1c0:
    if (ctx->pc == 0x1AC1C0u) {
        ctx->pc = 0x1AC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1BCu;
        // 0x1ac1c0: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1C4u;
        goto label_1ac1c4;
    }
    ctx->pc = 0x1AC1BCu;
    {
        const bool branch_taken_0x1ac1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1BCu;
        // 0x1ac1c0: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1bc) {
            ctx->pc = 0x1AC1D4u;
            goto label_1ac1d4;
        }
    }
    ctx->pc = 0x1AC1C4u;
label_1ac1c4:
    // 0x1ac1c4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ac1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1ac1c8:
    // 0x1ac1c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ac1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ac1cc:
    // 0x1ac1cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac1d0:
    if (ctx->pc == 0x1AC1D0u) {
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC1D4u;
        goto label_1ac1d4;
    }
    ctx->pc = 0x1AC1CCu;
    {
        const bool branch_taken_0x1ac1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1CCu;
        // 0x1ac1d0: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1cc) {
            ctx->pc = 0x1AC1DCu;
            goto label_1ac1dc;
        }
    }
    ctx->pc = 0x1AC1D4u;
label_1ac1d4:
    // 0x1ac1d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ac1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ac1d8:
    // 0x1ac1d8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac1dc:
    // 0x1ac1dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac1e0:
    // 0x1ac1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac1e4:
    // 0x1ac1e4: 0x0  nop
    ctx->pc = 0x1ac1e4u;
    // NOP
label_1ac1e8:
    // 0x1ac1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ac1ec:
    // 0x1ac1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ac1f0:
    // 0x1ac1f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac1f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac1f4:
    // 0x1ac1f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ac1f8:
    // 0x1ac1f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ac1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1ac1fc:
    // 0x1ac1fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac1fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac200:
    // 0x1ac200: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ac200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ac204:
    // 0x1ac204: 0x0  nop
    ctx->pc = 0x1ac204u;
    // NOP
label_1ac208:
    // 0x1ac208: 0xae2206dc  sw          $v0, 0x6DC($s1)
    ctx->pc = 0x1ac208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 2));
label_1ac20c:
    // 0x1ac20c: 0xae2006c8  sw          $zero, 0x6C8($s1)
    ctx->pc = 0x1ac20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 0));
label_1ac210:
    // 0x1ac210: 0xae2006cc  sw          $zero, 0x6CC($s1)
    ctx->pc = 0x1ac210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 0));
label_1ac214:
    // 0x1ac214: 0xae2006d0  sw          $zero, 0x6D0($s1)
    ctx->pc = 0x1ac214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 0));
label_1ac218:
    // 0x1ac218: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1ac218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_1ac21c:
    // 0x1ac21c: 0xa220068c  sb          $zero, 0x68C($s1)
    ctx->pc = 0x1ac21cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1676), (uint8_t)GPR_U32(ctx, 0));
label_1ac220:
    // 0x1ac220: 0xae200690  sw          $zero, 0x690($s1)
    ctx->pc = 0x1ac220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1680), GPR_U32(ctx, 0));
label_1ac224:
    // 0x1ac224: 0xa2200694  sb          $zero, 0x694($s1)
    ctx->pc = 0x1ac224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1684), (uint8_t)GPR_U32(ctx, 0));
label_1ac228:
    // 0x1ac228: 0xae20069c  sw          $zero, 0x69C($s1)
    ctx->pc = 0x1ac228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 0));
label_1ac22c:
    // 0x1ac22c: 0xa22006b8  sb          $zero, 0x6B8($s1)
    ctx->pc = 0x1ac22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1720), (uint8_t)GPR_U32(ctx, 0));
label_1ac230:
    // 0x1ac230: 0xae2006bc  sw          $zero, 0x6BC($s1)
    ctx->pc = 0x1ac230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1724), GPR_U32(ctx, 0));
label_1ac234:
    // 0x1ac234: 0xa22006c0  sb          $zero, 0x6C0($s1)
    ctx->pc = 0x1ac234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
label_1ac238:
    // 0x1ac238: 0xc058018  jal         func_160060
label_1ac23c:
    if (ctx->pc == 0x1AC23Cu) {
        ctx->pc = 0x1AC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC238u;
        // 0x1ac23c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC240u;
        goto label_1ac240;
    }
    ctx->pc = 0x1AC238u;
    SET_GPR_U32(ctx, 31, 0x1AC240u);
    ctx->pc = 0x1AC23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC238u;
    // 0x1ac23c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AC238u, 0x1AC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC240u;
label_1ac240:
    // 0x1ac240: 0xc06b270  jal         func_1AC9C0
label_1ac244:
    if (ctx->pc == 0x1AC244u) {
        ctx->pc = 0x1AC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC240u;
        // 0x1ac244: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC248u;
        goto label_1ac248;
    }
    ctx->pc = 0x1AC240u;
    SET_GPR_U32(ctx, 31, 0x1AC248u);
    ctx->pc = 0x1AC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC240u;
    // 0x1ac244: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC9C0u, 0x1AC240u, 0x1AC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC248u;
label_1ac248:
    // 0x1ac248: 0xc063e14  jal         func_18F850
label_1ac24c:
    if (ctx->pc == 0x1AC24Cu) {
        ctx->pc = 0x1AC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC248u;
        // 0x1ac24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC250u;
        goto label_1ac250;
    }
    ctx->pc = 0x1AC248u;
    SET_GPR_U32(ctx, 31, 0x1AC250u);
    ctx->pc = 0x1AC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC248u;
    // 0x1ac24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC248u, 0x1AC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC250u;
label_1ac250:
    // 0x1ac250: 0x8e2406e4  lw          $a0, 0x6E4($s1)
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1764)));
label_1ac254:
    // 0x1ac254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac258:
    // 0x1ac258: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ac258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ac25c:
    // 0x1ac25c: 0x320f809  jalr        $t9
label_1ac260:
    if (ctx->pc == 0x1AC260u) {
        ctx->pc = 0x1AC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC25Cu;
        // 0x1ac260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC264u;
        goto label_1ac264;
    }
    ctx->pc = 0x1AC25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC264u);
        ctx->pc = 0x1AC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC25Cu;
        // 0x1ac260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC25Cu, 0x1AC264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC264u;
label_1ac264:
    // 0x1ac264: 0xae2007dc  sw          $zero, 0x7DC($s1)
    ctx->pc = 0x1ac264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2012), GPR_U32(ctx, 0));
label_1ac268:
    // 0x1ac268: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_1ac26c:
    // 0x1ac26c: 0xae2207e0  sw          $v0, 0x7E0($s1)
    ctx->pc = 0x1ac26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2016), GPR_U32(ctx, 2));
label_1ac270:
    // 0x1ac270: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ac270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1ac274:
    // 0x1ac274: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1ac274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac278:
    // 0x1ac278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac27c:
    // 0x1ac27c: 0xc4200720  lwc1        $f0, 0x720($at)
    ctx->pc = 0x1ac27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac280:
    // 0x1ac280: 0x262407cc  addiu       $a0, $s1, 0x7CC
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1996));
label_1ac284:
    // 0x1ac284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac288:
    // 0x1ac288: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ac288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ac28c:
    // 0x1ac28c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac28cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac290:
    // 0x1ac290: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ac290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ac294:
    // 0x1ac294: 0x0  nop
    ctx->pc = 0x1ac294u;
    // NOP
label_1ac298:
    // 0x1ac298: 0xae2307e4  sw          $v1, 0x7E4($s1)
    ctx->pc = 0x1ac298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2020), GPR_U32(ctx, 3));
label_1ac29c:
    // 0x1ac29c: 0xae2007e8  sw          $zero, 0x7E8($s1)
    ctx->pc = 0x1ac29cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2024), GPR_U32(ctx, 0));
label_1ac2a0:
    // 0x1ac2a0: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x1ac2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
label_1ac2a4:
    // 0x1ac2a4: 0xc069d00  jal         func_1A7400
label_1ac2a8:
    if (ctx->pc == 0x1AC2A8u) {
        ctx->pc = 0x1AC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A4u;
        // 0x1ac2a8: 0xa22007f4  sb          $zero, 0x7F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2ACu;
        goto label_1ac2ac;
    }
    ctx->pc = 0x1AC2A4u;
    SET_GPR_U32(ctx, 31, 0x1AC2ACu);
    ctx->pc = 0x1AC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2A4u;
    // 0x1ac2a8: 0xa22007f4  sb          $zero, 0x7F4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7400u, 0x1AC2A4u, 0x1AC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2ACu;
label_1ac2ac:
    // 0x1ac2ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ac2b0:
    if (ctx->pc == 0x1AC2B0u) {
        ctx->pc = 0x1AC2B4u;
        goto label_1ac2b4;
    }
    ctx->pc = 0x1AC2ACu;
    {
        const bool branch_taken_0x1ac2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac2ac) {
            ctx->pc = 0x1AC2D4u;
            goto label_1ac2d4;
        }
    }
    ctx->pc = 0x1AC2B4u;
label_1ac2b4:
    // 0x1ac2b4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ac2b8:
    // 0x1ac2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2bc:
    // 0x1ac2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac2c0:
    // 0x1ac2c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac2c4:
    // 0x1ac2c4: 0xc063e08  jal         func_18F820
label_1ac2c8:
    if (ctx->pc == 0x1AC2C8u) {
        ctx->pc = 0x1AC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C4u;
        // 0x1ac2c8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2CCu;
        goto label_1ac2cc;
    }
    ctx->pc = 0x1AC2C4u;
    SET_GPR_U32(ctx, 31, 0x1AC2CCu);
    ctx->pc = 0x1AC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2C4u;
    // 0x1ac2c8: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC2C4u, 0x1AC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2CCu;
label_1ac2cc:
    // 0x1ac2cc: 0x10000172  b           . + 4 + (0x172 << 2)
label_1ac2d0:
    if (ctx->pc == 0x1AC2D0u) {
        ctx->pc = 0x1AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2CCu;
        // 0x1ac2d0: 0x922306d8  lbu         $v1, 0x6D8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2D4u;
        goto label_1ac2d4;
    }
    ctx->pc = 0x1AC2CCu;
    {
        const bool branch_taken_0x1ac2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2CCu;
        // 0x1ac2d0: 0x922306d8  lbu         $v1, 0x6D8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2cc) {
            ctx->pc = 0x1AC898u;
            goto label_1ac898;
        }
    }
    ctx->pc = 0x1AC2D4u;
label_1ac2d4:
    // 0x1ac2d4: 0x8e2406e4  lw          $a0, 0x6E4($s1)
    ctx->pc = 0x1ac2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1764)));
label_1ac2d8:
    // 0x1ac2d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac2dc:
    // 0x1ac2dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ac2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ac2e0:
    // 0x1ac2e0: 0x320f809  jalr        $t9
label_1ac2e4:
    if (ctx->pc == 0x1AC2E4u) {
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E8u;
        goto label_1ac2e8;
    }
    ctx->pc = 0x1AC2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC2E8u);
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2E0u, 0x1AC2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC2E8u;
label_1ac2e8:
    // 0x1ac2e8: 0xc063e14  jal         func_18F850
label_1ac2ec:
    if (ctx->pc == 0x1AC2ECu) {
        ctx->pc = 0x1AC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E8u;
        // 0x1ac2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2F0u;
        goto label_1ac2f0;
    }
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1AC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2E8u;
    // 0x1ac2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC2E8u, 0x1AC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2F0u;
label_1ac2f0:
    // 0x1ac2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2f4:
    // 0x1ac2f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac2f8:
    // 0x1ac2f8: 0xa22306d9  sb          $v1, 0x6D9($s1)
    ctx->pc = 0x1ac2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 3));
label_1ac2fc:
    // 0x1ac2fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac300:
    // 0x1ac300: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1ac300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_1ac304:
    // 0x1ac304: 0x24a509c8  addiu       $a1, $a1, 0x9C8
    ctx->pc = 0x1ac304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
label_1ac308:
    // 0x1ac308: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x1ac308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
label_1ac30c:
    // 0x1ac30c: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_1ac310:
    // 0x1ac310: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ac310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
label_1ac314:
    // 0x1ac314: 0xa2200708  sb          $zero, 0x708($s1)
    ctx->pc = 0x1ac314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ac318:
    // 0x1ac318: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ac31c:
    // 0x1ac31c: 0x8f868114  lw          $a2, -0x7EEC($gp)
    ctx->pc = 0x1ac31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
label_1ac320:
    // 0x1ac320: 0xc06cf34  jal         func_1B3CD0
label_1ac324:
    if (ctx->pc == 0x1AC324u) {
        ctx->pc = 0x1AC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC320u;
        // 0x1ac324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC328u;
        goto label_1ac328;
    }
    ctx->pc = 0x1AC320u;
    SET_GPR_U32(ctx, 31, 0x1AC328u);
    ctx->pc = 0x1AC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC320u;
    // 0x1ac324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AC320u, 0x1AC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC328u;
label_1ac328:
    // 0x1ac328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac32c:
    // 0x1ac32c: 0xc069ac8  jal         func_1A6B20
label_1ac330:
    if (ctx->pc == 0x1AC330u) {
        ctx->pc = 0x1AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC32Cu;
        // 0x1ac330: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC334u;
        goto label_1ac334;
    }
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AC32Cu, 0x1AC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac338:
    // 0x1ac338: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1ac338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_1ac33c:
    // 0x1ac33c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac340:
    // 0x1ac340: 0xc069ac0  jal         func_1A6B00
label_1ac344:
    if (ctx->pc == 0x1AC344u) {
        ctx->pc = 0x1AC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC340u;
        // 0x1ac344: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC348u;
        goto label_1ac348;
    }
    ctx->pc = 0x1AC340u;
    SET_GPR_U32(ctx, 31, 0x1AC348u);
    ctx->pc = 0x1AC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC340u;
    // 0x1ac344: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AC340u, 0x1AC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC348u;
label_1ac348:
    // 0x1ac348: 0xc062114  jal         func_188450
label_1ac34c:
    if (ctx->pc == 0x1AC34Cu) {
        ctx->pc = 0x1AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC348u;
        // 0x1ac34c: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC350u;
        goto label_1ac350;
    }
    ctx->pc = 0x1AC348u;
    SET_GPR_U32(ctx, 31, 0x1AC350u);
    ctx->pc = 0x1AC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC348u;
    // 0x1ac34c: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC348u, 0x1AC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC350u;
label_1ac350:
    // 0x1ac350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac354:
    // 0x1ac354: 0xc0620fc  jal         func_1883F0
label_1ac358:
    if (ctx->pc == 0x1AC358u) {
        ctx->pc = 0x1AC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC354u;
        // 0x1ac358: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC35Cu;
        goto label_1ac35c;
    }
    ctx->pc = 0x1AC354u;
    SET_GPR_U32(ctx, 31, 0x1AC35Cu);
    ctx->pc = 0x1AC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC354u;
    // 0x1ac358: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC354u, 0x1AC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC35Cu;
label_1ac35c:
    // 0x1ac35c: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x1ac35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
label_1ac360:
    // 0x1ac360: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ac364:
    if (ctx->pc == 0x1AC364u) {
        ctx->pc = 0x1AC368u;
        goto label_1ac368;
    }
    ctx->pc = 0x1AC360u;
    {
        const bool branch_taken_0x1ac360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac360) {
            ctx->pc = 0x1AC37Cu;
            goto label_1ac37c;
        }
    }
    ctx->pc = 0x1AC368u;
label_1ac368:
    // 0x1ac368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac36c:
    // 0x1ac36c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ac36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ac370:
    // 0x1ac370: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ac374:
    // 0x1ac374: 0x320f809  jalr        $t9
label_1ac378:
    if (ctx->pc == 0x1AC378u) {
        ctx->pc = 0x1AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC374u;
        // 0x1ac378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC37Cu;
        goto label_1ac37c;
    }
    ctx->pc = 0x1AC374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC37Cu);
        ctx->pc = 0x1AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC374u;
        // 0x1ac378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC374u, 0x1AC37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC37Cu;
label_1ac37c:
    // 0x1ac37c: 0xc063e14  jal         func_18F850
label_1ac380:
    if (ctx->pc == 0x1AC380u) {
        ctx->pc = 0x1AC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC37Cu;
        // 0x1ac380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC384u;
        goto label_1ac384;
    }
    ctx->pc = 0x1AC37Cu;
    SET_GPR_U32(ctx, 31, 0x1AC384u);
    ctx->pc = 0x1AC380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC37Cu;
    // 0x1ac380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC37Cu, 0x1AC384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC384u;
label_1ac384:
    // 0x1ac384: 0xc069afc  jal         func_1A6BF0
label_1ac388:
    if (ctx->pc == 0x1AC388u) {
        ctx->pc = 0x1AC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC384u;
        // 0x1ac388: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC38Cu;
        goto label_1ac38c;
    }
    ctx->pc = 0x1AC384u;
    SET_GPR_U32(ctx, 31, 0x1AC38Cu);
    ctx->pc = 0x1AC388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC384u;
    // 0x1ac388: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AC384u, 0x1AC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC38Cu;
label_1ac38c:
    // 0x1ac38c: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_1ac390:
    if (ctx->pc == 0x1AC390u) {
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC394u;
        goto label_1ac394;
    }
    ctx->pc = 0x1AC38Cu;
    {
        const bool branch_taken_0x1ac38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac38c) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC394u;
label_1ac394:
    // 0x1ac394: 0xc069ae8  jal         func_1A6BA0
label_1ac398:
    if (ctx->pc == 0x1AC398u) {
        ctx->pc = 0x1AC39Cu;
        goto label_1ac39c;
    }
    ctx->pc = 0x1AC394u;
    SET_GPR_U32(ctx, 31, 0x1AC39Cu);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AC394u, 0x1AC39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC39Cu;
label_1ac39c:
    // 0x1ac39c: 0xc063e14  jal         func_18F850
label_1ac3a0:
    if (ctx->pc == 0x1AC3A0u) {
        ctx->pc = 0x1AC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC39Cu;
        // 0x1ac3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3A4u;
        goto label_1ac3a4;
    }
    ctx->pc = 0x1AC39Cu;
    SET_GPR_U32(ctx, 31, 0x1AC3A4u);
    ctx->pc = 0x1AC3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC39Cu;
    // 0x1ac3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC39Cu, 0x1AC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3A4u;
label_1ac3a4:
    // 0x1ac3a4: 0x1000013b  b           . + 4 + (0x13B << 2)
label_1ac3a8:
    if (ctx->pc == 0x1AC3A8u) {
        ctx->pc = 0x1AC3ACu;
        goto label_1ac3ac;
    }
    ctx->pc = 0x1AC3A4u;
    {
        const bool branch_taken_0x1ac3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3a4) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC3ACu;
label_1ac3ac:
    // 0x1ac3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac3b0:
    // 0x1ac3b0: 0xc062d50  jal         func_18B540
label_1ac3b4:
    if (ctx->pc == 0x1AC3B4u) {
        ctx->pc = 0x1AC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3B0u;
        // 0x1ac3b4: 0xa22206d8  sb          $v0, 0x6D8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3B8u;
        goto label_1ac3b8;
    }
    ctx->pc = 0x1AC3B0u;
    SET_GPR_U32(ctx, 31, 0x1AC3B8u);
    ctx->pc = 0x1AC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3B0u;
    // 0x1ac3b4: 0xa22206d8  sb          $v0, 0x6D8($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC3B0u, 0x1AC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3B8u;
label_1ac3b8:
    // 0x1ac3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3bc:
    // 0x1ac3bc: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1ac3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1ac3c0:
    // 0x1ac3c0: 0xc062b5c  jal         func_18AD70
label_1ac3c4:
    if (ctx->pc == 0x1AC3C4u) {
        ctx->pc = 0x1AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C0u;
        // 0x1ac3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3C8u;
        goto label_1ac3c8;
    }
    ctx->pc = 0x1AC3C0u;
    SET_GPR_U32(ctx, 31, 0x1AC3C8u);
    ctx->pc = 0x1AC3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C0u;
    // 0x1ac3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC3C0u, 0x1AC3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3C8u;
label_1ac3c8:
    // 0x1ac3c8: 0xc063e14  jal         func_18F850
label_1ac3cc:
    if (ctx->pc == 0x1AC3CCu) {
        ctx->pc = 0x1AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C8u;
        // 0x1ac3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D0u;
        goto label_1ac3d0;
    }
    ctx->pc = 0x1AC3C8u;
    SET_GPR_U32(ctx, 31, 0x1AC3D0u);
    ctx->pc = 0x1AC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C8u;
    // 0x1ac3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC3C8u, 0x1AC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3D0u;
label_1ac3d0:
    // 0x1ac3d0: 0xc063e14  jal         func_18F850
label_1ac3d4:
    if (ctx->pc == 0x1AC3D4u) {
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D8u;
        goto label_1ac3d8;
    }
    ctx->pc = 0x1AC3D0u;
    SET_GPR_U32(ctx, 31, 0x1AC3D8u);
    ctx->pc = 0x1AC3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3D0u;
    // 0x1ac3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC3D0u, 0x1AC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3D8u;
label_1ac3d8:
    // 0x1ac3d8: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1ac3dc:
    if (ctx->pc == 0x1AC3DCu) {
        ctx->pc = 0x1AC3E0u;
        goto label_1ac3e0;
    }
    ctx->pc = 0x1AC3D8u;
    {
        const bool branch_taken_0x1ac3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3d8) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC3E0u;
label_1ac3e0:
    // 0x1ac3e0: 0xc06b27c  jal         func_1AC9F0
label_1ac3e4:
    if (ctx->pc == 0x1AC3E4u) {
        ctx->pc = 0x1AC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3E0u;
        // 0x1ac3e4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3E8u;
        goto label_1ac3e8;
    }
    ctx->pc = 0x1AC3E0u;
    SET_GPR_U32(ctx, 31, 0x1AC3E8u);
    ctx->pc = 0x1AC3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3E0u;
    // 0x1ac3e4: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC9F0u, 0x1AC3E0u, 0x1AC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3E8u;
label_1ac3e8:
    // 0x1ac3e8: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ac3ec:
    // 0x1ac3ec: 0x18600129  blez        $v1, . + 4 + (0x129 << 2)
label_1ac3f0:
    if (ctx->pc == 0x1AC3F0u) {
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3F4u;
        goto label_1ac3f4;
    }
    ctx->pc = 0x1AC3ECu;
    {
        const bool branch_taken_0x1ac3ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3ec) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC3F4u;
label_1ac3f4:
    // 0x1ac3f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ac3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3f8:
    // 0x1ac3f8: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ac3fc:
    // 0x1ac3fc: 0x26950670  addiu       $s5, $s4, 0x670
    ctx->pc = 0x1ac3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1648));
label_1ac400:
    // 0x1ac400: 0xc06b2c0  jal         func_1ACB00
label_1ac404:
    if (ctx->pc == 0x1AC404u) {
        ctx->pc = 0x1AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC400u;
        // 0x1ac404: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC408u;
        goto label_1ac408;
    }
    ctx->pc = 0x1AC400u;
    SET_GPR_U32(ctx, 31, 0x1AC408u);
    ctx->pc = 0x1AC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC400u;
    // 0x1ac404: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACB00u, 0x1AC400u, 0x1AC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ac40c:
    if (ctx->pc == 0x1AC40Cu) {
        ctx->pc = 0x1AC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC408u;
        // 0x1ac40c: 0x3a430001  xori        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC410u;
        goto label_1ac410;
    }
    ctx->pc = 0x1AC408u;
    {
        const bool branch_taken_0x1ac408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC408u;
        // 0x1ac40c: 0x3a430001  xori        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac408) {
            ctx->pc = 0x1AC46Cu;
            goto label_1ac46c;
        }
    }
    ctx->pc = 0x1AC410u;
label_1ac410:
    // 0x1ac410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ac410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ac414:
    // 0x1ac414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ac418:
    // 0x1ac418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac41c:
    // 0x1ac41c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ac420:
    // 0x1ac420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac424:
    // 0x1ac424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ac428:
    // 0x1ac428: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1ac428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ac42c:
    // 0x1ac42c: 0x8c620670  lw          $v0, 0x670($v1)
    ctx->pc = 0x1ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
label_1ac430:
    // 0x1ac430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ac434:
    // 0x1ac434: 0xc06b2b4  jal         func_1ACAD0
label_1ac438:
    if (ctx->pc == 0x1AC438u) {
        ctx->pc = 0x1AC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC434u;
        // 0x1ac438: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC43Cu;
        goto label_1ac43c;
    }
    ctx->pc = 0x1AC434u;
    SET_GPR_U32(ctx, 31, 0x1AC43Cu);
    ctx->pc = 0x1AC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC434u;
    // 0x1ac438: 0xac620670  sw          $v0, 0x670($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACAD0u, 0x1AC434u, 0x1AC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC43Cu;
label_1ac43c:
    // 0x1ac43c: 0xc062d50  jal         func_18B540
label_1ac440:
    if (ctx->pc == 0x1AC440u) {
        ctx->pc = 0x1AC444u;
        goto label_1ac444;
    }
    ctx->pc = 0x1AC43Cu;
    SET_GPR_U32(ctx, 31, 0x1AC444u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC43Cu, 0x1AC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC444u;
label_1ac444:
    // 0x1ac444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac448:
    // 0x1ac448: 0x240500d1  addiu       $a1, $zero, 0xD1
    ctx->pc = 0x1ac448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
label_1ac44c:
    // 0x1ac44c: 0xc062b5c  jal         func_18AD70
label_1ac450:
    if (ctx->pc == 0x1AC450u) {
        ctx->pc = 0x1AC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC44Cu;
        // 0x1ac450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC454u;
        goto label_1ac454;
    }
    ctx->pc = 0x1AC44Cu;
    SET_GPR_U32(ctx, 31, 0x1AC454u);
    ctx->pc = 0x1AC450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC44Cu;
    // 0x1ac450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC44Cu, 0x1AC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC454u;
label_1ac454:
    // 0x1ac454: 0xc062d50  jal         func_18B540
label_1ac458:
    if (ctx->pc == 0x1AC458u) {
        ctx->pc = 0x1AC45Cu;
        goto label_1ac45c;
    }
    ctx->pc = 0x1AC454u;
    SET_GPR_U32(ctx, 31, 0x1AC45Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC454u, 0x1AC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC45Cu;
label_1ac45c:
    // 0x1ac45c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac460:
    // 0x1ac460: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x1ac460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
label_1ac464:
    // 0x1ac464: 0xc062b5c  jal         func_18AD70
label_1ac468:
    if (ctx->pc == 0x1AC468u) {
        ctx->pc = 0x1AC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC464u;
        // 0x1ac468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC46Cu;
        goto label_1ac46c;
    }
    ctx->pc = 0x1AC464u;
    SET_GPR_U32(ctx, 31, 0x1AC46Cu);
    ctx->pc = 0x1AC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC464u;
    // 0x1ac468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC464u, 0x1AC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC46Cu;
label_1ac46c:
    // 0x1ac46c: 0x0  nop
    ctx->pc = 0x1ac46cu;
    // NOP
label_1ac470:
    // 0x1ac470: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1ac470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_1ac474:
    // 0x1ac474: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x1ac474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ac478:
    // 0x1ac478: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1ac47c:
    if (ctx->pc == 0x1AC47Cu) {
        ctx->pc = 0x1AC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC478u;
        // 0x1ac47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC480u;
        goto label_1ac480;
    }
    ctx->pc = 0x1AC478u;
    {
        const bool branch_taken_0x1ac478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC478u;
        // 0x1ac47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac478) {
            ctx->pc = 0x1AC490u;
            goto label_1ac490;
        }
    }
    ctx->pc = 0x1AC480u;
label_1ac480:
    // 0x1ac480: 0xc063e08  jal         func_18F820
label_1ac484:
    if (ctx->pc == 0x1AC484u) {
        ctx->pc = 0x1AC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC480u;
        // 0x1ac484: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC488u;
        goto label_1ac488;
    }
    ctx->pc = 0x1AC480u;
    SET_GPR_U32(ctx, 31, 0x1AC488u);
    ctx->pc = 0x1AC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC480u;
    // 0x1ac484: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC480u, 0x1AC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC488u;
label_1ac488:
    // 0x1ac488: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ac48c:
    if (ctx->pc == 0x1AC48Cu) {
        ctx->pc = 0x1AC490u;
        goto label_1ac490;
    }
    ctx->pc = 0x1AC488u;
    {
        const bool branch_taken_0x1ac488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac488) {
            ctx->pc = 0x1AC4A0u;
            goto label_1ac4a0;
        }
    }
    ctx->pc = 0x1AC490u;
label_1ac490:
    // 0x1ac490: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ac494:
    // 0x1ac494: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1ac494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ac498:
    // 0x1ac498: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_1ac49c:
    if (ctx->pc == 0x1AC49Cu) {
        ctx->pc = 0x1AC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC498u;
        // 0x1ac49c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4A0u;
        goto label_1ac4a0;
    }
    ctx->pc = 0x1AC498u;
    {
        const bool branch_taken_0x1ac498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC498u;
        // 0x1ac49c: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac498) {
            ctx->pc = 0x1AC3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac3f8;
        }
    }
    ctx->pc = 0x1AC4A0u;
label_1ac4a0:
    // 0x1ac4a0: 0x922306da  lbu         $v1, 0x6DA($s1)
    ctx->pc = 0x1ac4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1754)));
label_1ac4a4:
    // 0x1ac4a4: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
label_1ac4a8:
    if (ctx->pc == 0x1AC4A8u) {
        ctx->pc = 0x1AC4ACu;
        goto label_1ac4ac;
    }
    ctx->pc = 0x1AC4A4u;
    {
        const bool branch_taken_0x1ac4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac4a4) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC4ACu;
label_1ac4ac:
    // 0x1ac4ac: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1ac4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ac4b0:
    // 0x1ac4b0: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_1ac4b4:
    // 0x1ac4b4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1ac4b8:
    if (ctx->pc == 0x1AC4B8u) {
        ctx->pc = 0x1AC4BCu;
        goto label_1ac4bc;
    }
    ctx->pc = 0x1AC4B4u;
    {
        const bool branch_taken_0x1ac4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac4b4) {
            ctx->pc = 0x1AC4CCu;
            goto label_1ac4cc;
        }
    }
    ctx->pc = 0x1AC4BCu;
label_1ac4bc:
    // 0x1ac4bc: 0x8e23069c  lw          $v1, 0x69C($s1)
    ctx->pc = 0x1ac4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_1ac4c0:
    // 0x1ac4c0: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x1ac4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_1ac4c4:
    // 0x1ac4c4: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
label_1ac4c8:
    if (ctx->pc == 0x1AC4C8u) {
        ctx->pc = 0x1AC4CCu;
        goto label_1ac4cc;
    }
    ctx->pc = 0x1AC4C4u;
    {
        const bool branch_taken_0x1ac4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac4c4) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC4CCu;
label_1ac4cc:
    // 0x1ac4cc: 0x8e2406ec  lw          $a0, 0x6EC($s1)
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_1ac4d0:
    // 0x1ac4d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ac4d4:
    if (ctx->pc == 0x1AC4D4u) {
        ctx->pc = 0x1AC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4D0u;
        // 0x1ac4d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4D8u;
        goto label_1ac4d8;
    }
    ctx->pc = 0x1AC4D0u;
    {
        const bool branch_taken_0x1ac4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4D0u;
        // 0x1ac4d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4d0) {
            ctx->pc = 0x1AC4E4u;
            goto label_1ac4e4;
        }
    }
    ctx->pc = 0x1AC4D8u;
label_1ac4d8:
    // 0x1ac4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac4dc:
    // 0x1ac4dc: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ac4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
label_1ac4e0:
    // 0x1ac4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac4e4:
    // 0x1ac4e4: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1ac4e8:
    if (ctx->pc == 0x1AC4E8u) {
        ctx->pc = 0x1AC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E4u;
        // 0x1ac4e8: 0xa22306da  sb          $v1, 0x6DA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4ECu;
        goto label_1ac4ec;
    }
    ctx->pc = 0x1AC4E4u;
    {
        const bool branch_taken_0x1ac4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E4u;
        // 0x1ac4e8: 0xa22306da  sb          $v1, 0x6DA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4e4) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC4ECu;
label_1ac4ec:
    // 0x1ac4ec: 0xa22006d9  sb          $zero, 0x6D9($s1)
    ctx->pc = 0x1ac4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ac4f0:
    // 0x1ac4f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac4f4:
    // 0x1ac4f4: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1ac4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_1ac4f8:
    // 0x1ac4f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac4fc:
    // 0x1ac4fc: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x1ac4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
label_1ac500:
    // 0x1ac500: 0x24a509c8  addiu       $a1, $a1, 0x9C8
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
label_1ac504:
    // 0x1ac504: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1ac504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_1ac508:
    // 0x1ac508: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ac508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
label_1ac50c:
    // 0x1ac50c: 0xa2200708  sb          $zero, 0x708($s1)
    ctx->pc = 0x1ac50cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ac510:
    // 0x1ac510: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ac510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ac514:
    // 0x1ac514: 0x8f868114  lw          $a2, -0x7EEC($gp)
    ctx->pc = 0x1ac514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
label_1ac518:
    // 0x1ac518: 0xc06cf34  jal         func_1B3CD0
label_1ac51c:
    if (ctx->pc == 0x1AC51Cu) {
        ctx->pc = 0x1AC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC518u;
        // 0x1ac51c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC520u;
        goto label_1ac520;
    }
    ctx->pc = 0x1AC518u;
    SET_GPR_U32(ctx, 31, 0x1AC520u);
    ctx->pc = 0x1AC51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC518u;
    // 0x1ac51c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AC518u, 0x1AC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC520u;
label_1ac520:
    // 0x1ac520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac524:
    // 0x1ac524: 0xc069ac8  jal         func_1A6B20
label_1ac528:
    if (ctx->pc == 0x1AC528u) {
        ctx->pc = 0x1AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC524u;
        // 0x1ac528: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC52Cu;
        goto label_1ac52c;
    }
    ctx->pc = 0x1AC524u;
    SET_GPR_U32(ctx, 31, 0x1AC52Cu);
    ctx->pc = 0x1AC528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC524u;
    // 0x1ac528: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AC524u, 0x1AC52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC52Cu;
label_1ac52c:
    // 0x1ac52c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac530:
    // 0x1ac530: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1ac530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_1ac534:
    // 0x1ac534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac538:
    // 0x1ac538: 0xc069ac0  jal         func_1A6B00
label_1ac53c:
    if (ctx->pc == 0x1AC53Cu) {
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC540u;
        goto label_1ac540;
    }
    ctx->pc = 0x1AC538u;
    SET_GPR_U32(ctx, 31, 0x1AC540u);
    ctx->pc = 0x1AC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC538u;
    // 0x1ac53c: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AC538u, 0x1AC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0xc062114  jal         func_188450
label_1ac544:
    if (ctx->pc == 0x1AC544u) {
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC540u;
        // 0x1ac544: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC548u;
        goto label_1ac548;
    }
    ctx->pc = 0x1AC540u;
    SET_GPR_U32(ctx, 31, 0x1AC548u);
    ctx->pc = 0x1AC544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC540u;
    // 0x1ac544: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC540u, 0x1AC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac54c:
    // 0x1ac54c: 0xc0620fc  jal         func_1883F0
label_1ac550:
    if (ctx->pc == 0x1AC550u) {
        ctx->pc = 0x1AC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC54Cu;
        // 0x1ac550: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC554u;
        goto label_1ac554;
    }
    ctx->pc = 0x1AC54Cu;
    SET_GPR_U32(ctx, 31, 0x1AC554u);
    ctx->pc = 0x1AC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC54Cu;
    // 0x1ac550: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC54Cu, 0x1AC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC554u;
label_1ac554:
    // 0x1ac554: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x1ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
label_1ac558:
    // 0x1ac558: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ac55c:
    if (ctx->pc == 0x1AC55Cu) {
        ctx->pc = 0x1AC560u;
        goto label_1ac560;
    }
    ctx->pc = 0x1AC558u;
    {
        const bool branch_taken_0x1ac558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac558) {
            ctx->pc = 0x1AC574u;
            goto label_1ac574;
        }
    }
    ctx->pc = 0x1AC560u;
label_1ac560:
    // 0x1ac560: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac564:
    // 0x1ac564: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ac564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ac568:
    // 0x1ac568: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ac568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ac56c:
    // 0x1ac56c: 0x320f809  jalr        $t9
label_1ac570:
    if (ctx->pc == 0x1AC570u) {
        ctx->pc = 0x1AC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC56Cu;
        // 0x1ac570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC574u;
        goto label_1ac574;
    }
    ctx->pc = 0x1AC56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC574u);
        ctx->pc = 0x1AC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC56Cu;
        // 0x1ac570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC56Cu, 0x1AC574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC574u;
label_1ac574:
    // 0x1ac574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac578:
    // 0x1ac578: 0xc063e14  jal         func_18F850
label_1ac57c:
    if (ctx->pc == 0x1AC57Cu) {
        ctx->pc = 0x1AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC578u;
        // 0x1ac57c: 0xae2006e0  sw          $zero, 0x6E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC580u;
        goto label_1ac580;
    }
    ctx->pc = 0x1AC578u;
    SET_GPR_U32(ctx, 31, 0x1AC580u);
    ctx->pc = 0x1AC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC578u;
    // 0x1ac57c: 0xae2006e0  sw          $zero, 0x6E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC578u, 0x1AC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC580u;
label_1ac580:
    // 0x1ac580: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ac584:
    // 0x1ac584: 0xc0628f0  jal         func_18A3C0
label_1ac588:
    if (ctx->pc == 0x1AC588u) {
        ctx->pc = 0x1AC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC584u;
        // 0x1ac588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC58Cu;
        goto label_1ac58c;
    }
    ctx->pc = 0x1AC584u;
    SET_GPR_U32(ctx, 31, 0x1AC58Cu);
    ctx->pc = 0x1AC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC584u;
    // 0x1ac588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1AC584u, 0x1AC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC58Cu;
label_1ac58c:
    // 0x1ac58c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac590:
    // 0x1ac590: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1ac594:
    // 0x1ac594: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ac598:
    // 0x1ac598: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ac59c:
    // 0x1ac59c: 0xc062828  jal         func_18A0A0
label_1ac5a0:
    if (ctx->pc == 0x1AC5A0u) {
        ctx->pc = 0x1AC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC59Cu;
        // 0x1ac5a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5A4u;
        goto label_1ac5a4;
    }
    ctx->pc = 0x1AC59Cu;
    SET_GPR_U32(ctx, 31, 0x1AC5A4u);
    ctx->pc = 0x1AC5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC59Cu;
    // 0x1ac5a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1AC59Cu, 0x1AC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5A4u;
label_1ac5a4:
    // 0x1ac5a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ac5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ac5a8:
    // 0x1ac5a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac5ac:
    // 0x1ac5ac: 0xc062858  jal         func_18A160
label_1ac5b0:
    if (ctx->pc == 0x1AC5B0u) {
        ctx->pc = 0x1AC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5ACu;
        // 0x1ac5b0: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5B4u;
        goto label_1ac5b4;
    }
    ctx->pc = 0x1AC5ACu;
    SET_GPR_U32(ctx, 31, 0x1AC5B4u);
    ctx->pc = 0x1AC5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5ACu;
    // 0x1ac5b0: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1AC5ACu, 0x1AC5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5B4u;
label_1ac5b4:
    // 0x1ac5b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac5b8:
    // 0x1ac5b8: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ac5bc:
    // 0x1ac5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac5c0:
    // 0x1ac5c0: 0x0  nop
    ctx->pc = 0x1ac5c0u;
    // NOP
label_1ac5c4:
    // 0x1ac5c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac5c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac5c8:
    // 0x1ac5c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ac5c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1ac5cc:
    // 0x1ac5cc: 0xc062860  jal         func_18A180
label_1ac5d0:
    if (ctx->pc == 0x1AC5D0u) {
        ctx->pc = 0x1AC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5CCu;
        // 0x1ac5d0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5D4u;
        goto label_1ac5d4;
    }
    ctx->pc = 0x1AC5CCu;
    SET_GPR_U32(ctx, 31, 0x1AC5D4u);
    ctx->pc = 0x1AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5CCu;
    // 0x1ac5d0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1AC5CCu, 0x1AC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5D4u;
label_1ac5d4:
    // 0x1ac5d4: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ac5d8:
    // 0x1ac5d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac5dc:
    // 0x1ac5dc: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x1ac5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_1ac5e0:
    // 0x1ac5e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ac5e4:
    // 0x1ac5e4: 0xc0805c8  jal         func_201720
label_1ac5e8:
    if (ctx->pc == 0x1AC5E8u) {
        ctx->pc = 0x1AC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5E4u;
        // 0x1ac5e8: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5ECu;
        goto label_1ac5ec;
    }
    ctx->pc = 0x1AC5E4u;
    SET_GPR_U32(ctx, 31, 0x1AC5ECu);
    ctx->pc = 0x1AC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5E4u;
    // 0x1ac5e8: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1AC5E4u, 0x1AC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5ECu;
label_1ac5ec:
    // 0x1ac5ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac5f0:
    // 0x1ac5f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ac5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ac5f4:
    // 0x1ac5f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac5f8:
    // 0x1ac5f8: 0x8e2306e0  lw          $v1, 0x6E0($s1)
    ctx->pc = 0x1ac5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1760)));
label_1ac5fc:
    // 0x1ac5fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ac600:
    // 0x1ac600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ac604:
    // 0x1ac604: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac608:
    // 0x1ac608: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ac608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ac60c:
    // 0x1ac60c: 0x0  nop
    ctx->pc = 0x1ac60cu;
    // NOP
label_1ac610:
    // 0x1ac610: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ac610u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ac614:
    // 0x1ac614: 0x0  nop
    ctx->pc = 0x1ac614u;
    // NOP
label_1ac618:
    // 0x1ac618: 0x0  nop
    ctx->pc = 0x1ac618u;
    // NOP
label_1ac61c:
    // 0x1ac61c: 0x1012  mflo        $v0
    ctx->pc = 0x1ac61cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ac620:
    // 0x1ac620: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ac624:
    // 0x1ac624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac628:
    if (ctx->pc == 0x1AC628u) {
        ctx->pc = 0x1AC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC624u;
        // 0x1ac628: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC62Cu;
        goto label_1ac62c;
    }
    ctx->pc = 0x1AC624u;
    {
        const bool branch_taken_0x1ac624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC624u;
        // 0x1ac628: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac624) {
            ctx->pc = 0x1AC648u;
            goto label_1ac648;
        }
    }
    ctx->pc = 0x1AC62Cu;
label_1ac62c:
    // 0x1ac62c: 0x8e2306d0  lw          $v1, 0x6D0($s1)
    ctx->pc = 0x1ac62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
label_1ac630:
    // 0x1ac630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac634:
    // 0x1ac634: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1ac634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac638:
    // 0x1ac638: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ac638u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1ac63c:
    // 0x1ac63c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1ac640:
    // 0x1ac640: 0xa04400b0  sb          $a0, 0xB0($v0)
    ctx->pc = 0x1ac640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 4));
label_1ac644:
    // 0x1ac644: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1ac644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
label_1ac648:
    // 0x1ac648: 0xc0627bc  jal         func_189EF0
label_1ac64c:
    if (ctx->pc == 0x1AC64Cu) {
        ctx->pc = 0x1AC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC648u;
        // 0x1ac64c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC650u;
        goto label_1ac650;
    }
    ctx->pc = 0x1AC648u;
    SET_GPR_U32(ctx, 31, 0x1AC650u);
    ctx->pc = 0x1AC64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC648u;
    // 0x1ac64c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1AC648u, 0x1AC650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC650u;
label_1ac650:
    // 0x1ac650: 0x8e2206e0  lw          $v0, 0x6E0($s1)
    ctx->pc = 0x1ac650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1760)));
label_1ac654:
    // 0x1ac654: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1ac654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_1ac658:
    // 0x1ac658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ac65c:
    // 0x1ac65c: 0xc069afc  jal         func_1A6BF0
label_1ac660:
    if (ctx->pc == 0x1AC660u) {
        ctx->pc = 0x1AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC65Cu;
        // 0x1ac660: 0xae2206e0  sw          $v0, 0x6E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC664u;
        goto label_1ac664;
    }
    ctx->pc = 0x1AC65Cu;
    SET_GPR_U32(ctx, 31, 0x1AC664u);
    ctx->pc = 0x1AC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC65Cu;
    // 0x1ac660: 0xae2206e0  sw          $v0, 0x6E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AC65Cu, 0x1AC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC664u;
label_1ac664:
    // 0x1ac664: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1ac668:
    if (ctx->pc == 0x1AC668u) {
        ctx->pc = 0x1AC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC664u;
        // 0x1ac668: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC66Cu;
        goto label_1ac66c;
    }
    ctx->pc = 0x1AC664u;
    {
        const bool branch_taken_0x1ac664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC664u;
        // 0x1ac668: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac664) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC66Cu;
label_1ac66c:
    // 0x1ac66c: 0xc069ae8  jal         func_1A6BA0
label_1ac670:
    if (ctx->pc == 0x1AC670u) {
        ctx->pc = 0x1AC674u;
        goto label_1ac674;
    }
    ctx->pc = 0x1AC66Cu;
    SET_GPR_U32(ctx, 31, 0x1AC674u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AC66Cu, 0x1AC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC674u;
label_1ac674:
    // 0x1ac674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac678:
    // 0x1ac678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac67c:
    // 0x1ac67c: 0xa22206d9  sb          $v0, 0x6D9($s1)
    ctx->pc = 0x1ac67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 2));
label_1ac680:
    // 0x1ac680: 0xc063e08  jal         func_18F820
label_1ac684:
    if (ctx->pc == 0x1AC684u) {
        ctx->pc = 0x1AC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC680u;
        // 0x1ac684: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC688u;
        goto label_1ac688;
    }
    ctx->pc = 0x1AC680u;
    SET_GPR_U32(ctx, 31, 0x1AC688u);
    ctx->pc = 0x1AC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC680u;
    // 0x1ac684: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC680u, 0x1AC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC688u;
label_1ac688:
    // 0x1ac688: 0x10000082  b           . + 4 + (0x82 << 2)
label_1ac68c:
    if (ctx->pc == 0x1AC68Cu) {
        ctx->pc = 0x1AC690u;
        goto label_1ac690;
    }
    ctx->pc = 0x1AC688u;
    {
        const bool branch_taken_0x1ac688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac688) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC690u;
label_1ac690:
    // 0x1ac690: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ac690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ac694:
    // 0x1ac694: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ac694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
label_1ac698:
    // 0x1ac698: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ac69c:
    if (ctx->pc == 0x1AC69Cu) {
        ctx->pc = 0x1AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC698u;
        // 0x1ac69c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6A0u;
        goto label_1ac6a0;
    }
    ctx->pc = 0x1AC698u;
    {
        const bool branch_taken_0x1ac698 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC698u;
        // 0x1ac69c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac698) {
            ctx->pc = 0x1AC6A8u;
            goto label_1ac6a8;
        }
    }
    ctx->pc = 0x1AC6A0u;
label_1ac6a0:
    // 0x1ac6a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ac6a4:
    if (ctx->pc == 0x1AC6A4u) {
        ctx->pc = 0x1AC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6A0u;
        // 0x1ac6a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6A8u;
        goto label_1ac6a8;
    }
    ctx->pc = 0x1AC6A0u;
    {
        const bool branch_taken_0x1ac6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6A0u;
        // 0x1ac6a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6a0) {
            ctx->pc = 0x1AC6C0u;
            goto label_1ac6c0;
        }
    }
    ctx->pc = 0x1AC6A8u;
label_1ac6a8:
    // 0x1ac6a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ac6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac6ac:
    // 0x1ac6ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ac6b0:
    // 0x1ac6b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac6b4:
    // 0x1ac6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ac6b8:
    // 0x1ac6b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ac6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ac6bc:
    // 0x1ac6bc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1ac6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ac6c0:
    // 0x1ac6c0: 0xc055c40  jal         func_157100
label_1ac6c4:
    if (ctx->pc == 0x1AC6C4u) {
        ctx->pc = 0x1AC6C8u;
        goto label_1ac6c8;
    }
    ctx->pc = 0x1AC6C0u;
    SET_GPR_U32(ctx, 31, 0x1AC6C8u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AC6C0u, 0x1AC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6C8u;
label_1ac6c8:
    // 0x1ac6c8: 0x8e2306e0  lw          $v1, 0x6E0($s1)
    ctx->pc = 0x1ac6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1760)));
label_1ac6cc:
    // 0x1ac6cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ac6d0:
    // 0x1ac6d0: 0x1c600070  bgtz        $v1, . + 4 + (0x70 << 2)
label_1ac6d4:
    if (ctx->pc == 0x1AC6D4u) {
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0xae2306e0  sw          $v1, 0x6E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6D8u;
        goto label_1ac6d8;
    }
    ctx->pc = 0x1AC6D0u;
    {
        const bool branch_taken_0x1ac6d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0xae2306e0  sw          $v1, 0x6E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6d0) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC6D8u;
label_1ac6d8:
    // 0x1ac6d8: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x1ac6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
label_1ac6dc:
    // 0x1ac6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6e0:
    // 0x1ac6e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ac6e4:
    // 0x1ac6e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ac6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ac6e8:
    // 0x1ac6e8: 0xc063e08  jal         func_18F820
label_1ac6ec:
    if (ctx->pc == 0x1AC6ECu) {
        ctx->pc = 0x1AC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6E8u;
        // 0x1ac6ec: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6F0u;
        goto label_1ac6f0;
    }
    ctx->pc = 0x1AC6E8u;
    SET_GPR_U32(ctx, 31, 0x1AC6F0u);
    ctx->pc = 0x1AC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6E8u;
    // 0x1ac6ec: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC6E8u, 0x1AC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6F0u;
label_1ac6f0:
    // 0x1ac6f0: 0x10000068  b           . + 4 + (0x68 << 2)
label_1ac6f4:
    if (ctx->pc == 0x1AC6F4u) {
        ctx->pc = 0x1AC6F8u;
        goto label_1ac6f8;
    }
    ctx->pc = 0x1AC6F0u;
    {
        const bool branch_taken_0x1ac6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6f0) {
            ctx->pc = 0x1AC894u;
            goto label_1ac894;
        }
    }
    ctx->pc = 0x1AC6F8u;
label_1ac6f8:
    // 0x1ac6f8: 0xa22006d8  sb          $zero, 0x6D8($s1)
    ctx->pc = 0x1ac6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
label_1ac6fc:
    // 0x1ac6fc: 0xa22006d9  sb          $zero, 0x6D9($s1)
    ctx->pc = 0x1ac6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ac700:
    // 0x1ac700: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac704:
    // 0x1ac704: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ac704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ac708:
    // 0x1ac708: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_1ac70c:
    // 0x1ac70c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ac710:
    if (ctx->pc == 0x1AC710u) {
        ctx->pc = 0x1AC714u;
        goto label_1ac714;
    }
    ctx->pc = 0x1AC70Cu;
    {
        const bool branch_taken_0x1ac70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac70c) {
            ctx->pc = 0x1AC718u;
            goto label_1ac718;
        }
    }
    ctx->pc = 0x1AC714u;
label_1ac714:
    // 0x1ac714: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1ac714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
label_1ac718:
    // 0x1ac718: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1ac718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_1ac71c:
    // 0x1ac71c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac720:
    // 0x1ac720: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x1ac720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
label_1ac724:
    // 0x1ac724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac728:
    // 0x1ac728: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1ac728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_1ac72c:
    // 0x1ac72c: 0x24a509c8  addiu       $a1, $a1, 0x9C8
    ctx->pc = 0x1ac72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
label_1ac730:
    // 0x1ac730: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ac730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
label_1ac734:
    // 0x1ac734: 0xa2200708  sb          $zero, 0x708($s1)
    ctx->pc = 0x1ac734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ac738:
    // 0x1ac738: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ac73c:
    // 0x1ac73c: 0x8f868114  lw          $a2, -0x7EEC($gp)
    ctx->pc = 0x1ac73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
label_1ac740:
    // 0x1ac740: 0xc06cf34  jal         func_1B3CD0
label_1ac744:
    if (ctx->pc == 0x1AC744u) {
        ctx->pc = 0x1AC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC740u;
        // 0x1ac744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC748u;
        goto label_1ac748;
    }
    ctx->pc = 0x1AC740u;
    SET_GPR_U32(ctx, 31, 0x1AC748u);
    ctx->pc = 0x1AC744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC740u;
    // 0x1ac744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AC740u, 0x1AC748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC748u;
label_1ac748:
    // 0x1ac748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac74c:
    // 0x1ac74c: 0xc069ac8  jal         func_1A6B20
label_1ac750:
    if (ctx->pc == 0x1AC750u) {
        ctx->pc = 0x1AC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC74Cu;
        // 0x1ac750: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC754u;
        goto label_1ac754;
    }
    ctx->pc = 0x1AC74Cu;
    SET_GPR_U32(ctx, 31, 0x1AC754u);
    ctx->pc = 0x1AC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC74Cu;
    // 0x1ac750: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AC74Cu, 0x1AC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC754u;
label_1ac754:
    // 0x1ac754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac758:
    // 0x1ac758: 0xa2220709  sb          $v0, 0x709($s1)
    ctx->pc = 0x1ac758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 2));
label_1ac75c:
    // 0x1ac75c: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1ac75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ac760:
    // 0x1ac760: 0x8e22069c  lw          $v0, 0x69C($s1)
    ctx->pc = 0x1ac760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_1ac764:
    // 0x1ac764: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1ac768:
    if (ctx->pc == 0x1AC768u) {
        ctx->pc = 0x1AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC764u;
        // 0x1ac768: 0x43902a  slt         $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC76Cu;
        goto label_1ac76c;
    }
    ctx->pc = 0x1AC764u;
    {
        const bool branch_taken_0x1ac764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC764u;
        // 0x1ac768: 0x43902a  slt         $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac764) {
            ctx->pc = 0x1AC7A0u;
            goto label_1ac7a0;
        }
    }
    ctx->pc = 0x1AC76Cu;
label_1ac76c:
    // 0x1ac76c: 0xc062114  jal         func_188450
label_1ac770:
    if (ctx->pc == 0x1AC770u) {
        ctx->pc = 0x1AC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC76Cu;
        // 0x1ac770: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC774u;
        goto label_1ac774;
    }
    ctx->pc = 0x1AC76Cu;
    SET_GPR_U32(ctx, 31, 0x1AC774u);
    ctx->pc = 0x1AC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC76Cu;
    // 0x1ac770: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC76Cu, 0x1AC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC774u;
label_1ac774:
    // 0x1ac774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac778:
    // 0x1ac778: 0xc0620fc  jal         func_1883F0
label_1ac77c:
    if (ctx->pc == 0x1AC77Cu) {
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC780u;
        goto label_1ac780;
    }
    ctx->pc = 0x1AC778u;
    SET_GPR_U32(ctx, 31, 0x1AC780u);
    ctx->pc = 0x1AC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC778u;
    // 0x1ac77c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC778u, 0x1AC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC780u;
label_1ac780:
    // 0x1ac780: 0x8e2206e8  lw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ac780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
label_1ac784:
    // 0x1ac784: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ac788:
    if (ctx->pc == 0x1AC788u) {
        ctx->pc = 0x1AC78Cu;
        goto label_1ac78c;
    }
    ctx->pc = 0x1AC784u;
    {
        const bool branch_taken_0x1ac784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac784) {
            ctx->pc = 0x1AC7E8u;
            goto label_1ac7e8;
        }
    }
    ctx->pc = 0x1AC78Cu;
label_1ac78c:
    // 0x1ac78c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ac78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ac790:
    // 0x1ac790: 0xc064fb8  jal         func_193EE0
label_1ac794:
    if (ctx->pc == 0x1AC794u) {
        ctx->pc = 0x1AC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC790u;
        // 0x1ac794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC798u;
        goto label_1ac798;
    }
    ctx->pc = 0x1AC790u;
    SET_GPR_U32(ctx, 31, 0x1AC798u);
    ctx->pc = 0x1AC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC790u;
    // 0x1ac794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AC790u, 0x1AC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC798u;
label_1ac798:
    // 0x1ac798: 0x10000014  b           . + 4 + (0x14 << 2)
label_1ac79c:
    if (ctx->pc == 0x1AC79Cu) {
        ctx->pc = 0x1AC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC798u;
        // 0x1ac79c: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7A0u;
        goto label_1ac7a0;
    }
    ctx->pc = 0x1AC798u;
    {
        const bool branch_taken_0x1ac798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC798u;
        // 0x1ac79c: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac798) {
            ctx->pc = 0x1AC7ECu;
            goto label_1ac7ec;
        }
    }
    ctx->pc = 0x1AC7A0u;
label_1ac7a0:
    // 0x1ac7a0: 0xc062114  jal         func_188450
label_1ac7a4:
    if (ctx->pc == 0x1AC7A4u) {
        ctx->pc = 0x1AC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7A0u;
        // 0x1ac7a4: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7A8u;
        goto label_1ac7a8;
    }
    ctx->pc = 0x1AC7A0u;
    SET_GPR_U32(ctx, 31, 0x1AC7A8u);
    ctx->pc = 0x1AC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7A0u;
    // 0x1ac7a4: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC7A0u, 0x1AC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7A8u;
label_1ac7a8:
    // 0x1ac7a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7ac:
    // 0x1ac7ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac7b0:
    // 0x1ac7b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac7b4:
    // 0x1ac7b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac7b8:
    // 0x1ac7b8: 0xc0620fc  jal         func_1883F0
label_1ac7bc:
    if (ctx->pc == 0x1AC7BCu) {
        ctx->pc = 0x1AC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7B8u;
        // 0x1ac7bc: 0x52300a  movz        $a2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7C0u;
        goto label_1ac7c0;
    }
    ctx->pc = 0x1AC7B8u;
    SET_GPR_U32(ctx, 31, 0x1AC7C0u);
    ctx->pc = 0x1AC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7B8u;
    // 0x1ac7bc: 0x52300a  movz        $a2, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC7B8u, 0x1AC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7C0u;
label_1ac7c0:
    // 0x1ac7c0: 0x8e2506e8  lw          $a1, 0x6E8($s1)
    ctx->pc = 0x1ac7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
label_1ac7c4:
    // 0x1ac7c4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ac7c8:
    if (ctx->pc == 0x1AC7C8u) {
        ctx->pc = 0x1AC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C4u;
        // 0x1ac7c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7CCu;
        goto label_1ac7cc;
    }
    ctx->pc = 0x1AC7C4u;
    {
        const bool branch_taken_0x1ac7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C4u;
        // 0x1ac7c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7c4) {
            ctx->pc = 0x1AC7E8u;
            goto label_1ac7e8;
        }
    }
    ctx->pc = 0x1AC7CCu;
label_1ac7cc:
    // 0x1ac7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac7d0:
    // 0x1ac7d0: 0x52180a  movz        $v1, $v0, $s2
    ctx->pc = 0x1ac7d0u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1ac7d4:
    // 0x1ac7d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ac7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ac7d8:
    // 0x1ac7d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ac7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ac7dc:
    // 0x1ac7dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ac7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac7e0:
    // 0x1ac7e0: 0xc064fb8  jal         func_193EE0
label_1ac7e4:
    if (ctx->pc == 0x1AC7E4u) {
        ctx->pc = 0x1AC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E0u;
        // 0x1ac7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7E8u;
        goto label_1ac7e8;
    }
    ctx->pc = 0x1AC7E0u;
    SET_GPR_U32(ctx, 31, 0x1AC7E8u);
    ctx->pc = 0x1AC7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7E0u;
    // 0x1ac7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AC7E0u, 0x1AC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7E8u;
label_1ac7e8:
    // 0x1ac7e8: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x1ac7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
label_1ac7ec:
    // 0x1ac7ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ac7f0:
    if (ctx->pc == 0x1AC7F0u) {
        ctx->pc = 0x1AC7F4u;
        goto label_1ac7f4;
    }
    ctx->pc = 0x1AC7ECu;
    {
        const bool branch_taken_0x1ac7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac7ec) {
            ctx->pc = 0x1AC808u;
            goto label_1ac808;
        }
    }
    ctx->pc = 0x1AC7F4u;
label_1ac7f4:
    // 0x1ac7f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac7f8:
    // 0x1ac7f8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ac7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1ac7fc:
    // 0x1ac7fc: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ac7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ac800:
    // 0x1ac800: 0x320f809  jalr        $t9
label_1ac804:
    if (ctx->pc == 0x1AC804u) {
        ctx->pc = 0x1AC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC800u;
        // 0x1ac804: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC808u;
        goto label_1ac808;
    }
    ctx->pc = 0x1AC800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC808u);
        ctx->pc = 0x1AC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC800u;
        // 0x1ac804: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC800u, 0x1AC808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC808u;
label_1ac808:
    // 0x1ac808: 0xc062d50  jal         func_18B540
label_1ac80c:
    if (ctx->pc == 0x1AC80Cu) {
        ctx->pc = 0x1AC810u;
        goto label_1ac810;
    }
    ctx->pc = 0x1AC808u;
    SET_GPR_U32(ctx, 31, 0x1AC810u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC808u, 0x1AC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC810u;
label_1ac810:
    // 0x1ac810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac814:
    // 0x1ac814: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1ac818:
    // 0x1ac818: 0xc062b5c  jal         func_18AD70
label_1ac81c:
    if (ctx->pc == 0x1AC81Cu) {
        ctx->pc = 0x1AC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC818u;
        // 0x1ac81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC820u;
        goto label_1ac820;
    }
    ctx->pc = 0x1AC818u;
    SET_GPR_U32(ctx, 31, 0x1AC820u);
    ctx->pc = 0x1AC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC818u;
    // 0x1ac81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC818u, 0x1AC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC820u;
label_1ac820:
    // 0x1ac820: 0xc062d50  jal         func_18B540
label_1ac824:
    if (ctx->pc == 0x1AC824u) {
        ctx->pc = 0x1AC828u;
        goto label_1ac828;
    }
    ctx->pc = 0x1AC820u;
    SET_GPR_U32(ctx, 31, 0x1AC828u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AC820u, 0x1AC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC828u;
label_1ac828:
    // 0x1ac828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac82c:
    // 0x1ac82c: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1ac830:
    // 0x1ac830: 0xc062b5c  jal         func_18AD70
label_1ac834:
    if (ctx->pc == 0x1AC834u) {
        ctx->pc = 0x1AC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC830u;
        // 0x1ac834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC838u;
        goto label_1ac838;
    }
    ctx->pc = 0x1AC830u;
    SET_GPR_U32(ctx, 31, 0x1AC838u);
    ctx->pc = 0x1AC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC830u;
    // 0x1ac834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AC830u, 0x1AC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC838u;
label_1ac838:
    // 0x1ac838: 0xc063e14  jal         func_18F850
label_1ac83c:
    if (ctx->pc == 0x1AC83Cu) {
        ctx->pc = 0x1AC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC838u;
        // 0x1ac83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC840u;
        goto label_1ac840;
    }
    ctx->pc = 0x1AC838u;
    SET_GPR_U32(ctx, 31, 0x1AC840u);
    ctx->pc = 0x1AC83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC838u;
    // 0x1ac83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AC838u, 0x1AC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC840u;
label_1ac840:
    // 0x1ac840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac844:
    // 0x1ac844: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ac844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ac848:
    // 0x1ac848: 0xae2307c4  sw          $v1, 0x7C4($s1)
    ctx->pc = 0x1ac848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 3));
label_1ac84c:
    // 0x1ac84c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac850:
    // 0x1ac850: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac854:
    // 0x1ac854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ac858:
    // 0x1ac858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ac85c:
    // 0x1ac85c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac860:
    // 0x1ac860: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ac860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ac864:
    // 0x1ac864: 0x0  nop
    ctx->pc = 0x1ac864u;
    // NOP
label_1ac868:
    // 0x1ac868: 0xae2207c8  sw          $v0, 0x7C8($s1)
    ctx->pc = 0x1ac868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 2));
label_1ac86c:
    // 0x1ac86c: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1ac86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ac870:
    // 0x1ac870: 0xc054660  jal         func_151980
label_1ac874:
    if (ctx->pc == 0x1AC874u) {
        ctx->pc = 0x1AC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC870u;
        // 0x1ac874: 0x262407b0  addiu       $a0, $s1, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC878u;
        goto label_1ac878;
    }
    ctx->pc = 0x1AC870u;
    SET_GPR_U32(ctx, 31, 0x1AC878u);
    ctx->pc = 0x1AC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC870u;
    // 0x1ac874: 0x262407b0  addiu       $a0, $s1, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1AC870u, 0x1AC878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC878u;
label_1ac878:
    // 0x1ac878: 0xc069ae8  jal         func_1A6BA0
label_1ac87c:
    if (ctx->pc == 0x1AC87Cu) {
        ctx->pc = 0x1AC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC878u;
        // 0x1ac87c: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC880u;
        goto label_1ac880;
    }
    ctx->pc = 0x1AC878u;
    SET_GPR_U32(ctx, 31, 0x1AC880u);
    ctx->pc = 0x1AC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC878u;
    // 0x1ac87c: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AC878u, 0x1AC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC880u;
label_1ac880:
    // 0x1ac880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac884:
    // 0x1ac884: 0xc063e08  jal         func_18F820
label_1ac888:
    if (ctx->pc == 0x1AC888u) {
        ctx->pc = 0x1AC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC884u;
        // 0x1ac888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC88Cu;
        goto label_1ac88c;
    }
    ctx->pc = 0x1AC884u;
    SET_GPR_U32(ctx, 31, 0x1AC88Cu);
    ctx->pc = 0x1AC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC884u;
    // 0x1ac888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC884u, 0x1AC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC88Cu;
label_1ac88c:
    // 0x1ac88c: 0x1000fe47  b           . + 4 + (-0x1B9 << 2)
label_1ac890:
    if (ctx->pc == 0x1AC890u) {
        ctx->pc = 0x1AC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC88Cu;
        // 0x1ac890: 0xa22006d8  sb          $zero, 0x6D8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC894u;
        goto label_1ac894;
    }
    ctx->pc = 0x1AC88Cu;
    {
        const bool branch_taken_0x1ac88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC88Cu;
        // 0x1ac890: 0xa22006d8  sb          $zero, 0x6D8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac88c) {
            ctx->pc = 0x1AC1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac1ac;
        }
    }
    ctx->pc = 0x1AC894u;
label_1ac894:
    // 0x1ac894: 0x922306d8  lbu         $v1, 0x6D8($s1)
    ctx->pc = 0x1ac894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1752)));
label_1ac898:
    // 0x1ac898: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1ac89c:
    if (ctx->pc == 0x1AC89Cu) {
        ctx->pc = 0x1AC8A0u;
        goto label_1ac8a0;
    }
    ctx->pc = 0x1AC898u;
    {
        const bool branch_taken_0x1ac898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac898) {
            ctx->pc = 0x1AC95Cu;
            goto label_1ac95c;
        }
    }
    ctx->pc = 0x1AC8A0u;
label_1ac8a0:
    // 0x1ac8a0: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ac8a4:
    // 0x1ac8a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ac8a8:
    // 0x1ac8a8: 0xae2306dc  sw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 3));
label_1ac8ac:
    // 0x1ac8ac: 0x922306da  lbu         $v1, 0x6DA($s1)
    ctx->pc = 0x1ac8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1754)));
label_1ac8b0:
    // 0x1ac8b0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1ac8b4:
    if (ctx->pc == 0x1AC8B4u) {
        ctx->pc = 0x1AC8B8u;
        goto label_1ac8b8;
    }
    ctx->pc = 0x1AC8B0u;
    {
        const bool branch_taken_0x1ac8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8b0) {
            ctx->pc = 0x1AC914u;
            goto label_1ac914;
        }
    }
    ctx->pc = 0x1AC8B8u;
label_1ac8b8:
    // 0x1ac8b8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac8bc:
    // 0x1ac8bc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1ac8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_1ac8c0:
    // 0x1ac8c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ac8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac8c4:
    // 0x1ac8c4: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ac8c8:
    // 0x1ac8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ac8cc:
    // 0x1ac8cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ac8d0:
    // 0x1ac8d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ac8d4:
    // 0x1ac8d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ac8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ac8d8:
    // 0x1ac8d8: 0x0  nop
    ctx->pc = 0x1ac8d8u;
    // NOP
label_1ac8dc:
    // 0x1ac8dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ac8e0:
    // 0x1ac8e0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1ac8e4:
    if (ctx->pc == 0x1AC8E4u) {
        ctx->pc = 0x1AC8E8u;
        goto label_1ac8e8;
    }
    ctx->pc = 0x1AC8E0u;
    {
        const bool branch_taken_0x1ac8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8e0) {
            ctx->pc = 0x1AC914u;
            goto label_1ac914;
        }
    }
    ctx->pc = 0x1AC8E8u;
label_1ac8e8:
    // 0x1ac8e8: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ac8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ac8ec:
    // 0x1ac8ec: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1ac8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
label_1ac8f0:
    // 0x1ac8f0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1ac8f4:
    if (ctx->pc == 0x1AC8F4u) {
        ctx->pc = 0x1AC8F8u;
        goto label_1ac8f8;
    }
    ctx->pc = 0x1AC8F0u;
    {
        const bool branch_taken_0x1ac8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8f0) {
            ctx->pc = 0x1AC914u;
            goto label_1ac914;
        }
    }
    ctx->pc = 0x1AC8F8u;
label_1ac8f8:
    // 0x1ac8f8: 0x8e2406ec  lw          $a0, 0x6EC($s1)
    ctx->pc = 0x1ac8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_1ac8fc:
    // 0x1ac8fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ac900:
    if (ctx->pc == 0x1AC900u) {
        ctx->pc = 0x1AC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8FCu;
        // 0x1ac900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC904u;
        goto label_1ac904;
    }
    ctx->pc = 0x1AC8FCu;
    {
        const bool branch_taken_0x1ac8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8FCu;
        // 0x1ac900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8fc) {
            ctx->pc = 0x1AC910u;
            goto label_1ac910;
        }
    }
    ctx->pc = 0x1AC904u;
label_1ac904:
    // 0x1ac904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac908:
    // 0x1ac908: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ac908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
label_1ac90c:
    // 0x1ac90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac910:
    // 0x1ac910: 0xa22306da  sb          $v1, 0x6DA($s1)
    ctx->pc = 0x1ac910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 3));
label_1ac914:
    // 0x1ac914: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ac918:
    // 0x1ac918: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
label_1ac91c:
    if (ctx->pc == 0x1AC91Cu) {
        ctx->pc = 0x1AC920u;
        goto label_1ac920;
    }
    ctx->pc = 0x1AC918u;
    {
        const bool branch_taken_0x1ac918 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ac918) {
            ctx->pc = 0x1AC95Cu;
            goto label_1ac95c;
        }
    }
    ctx->pc = 0x1AC920u;
label_1ac920:
    // 0x1ac920: 0xae2006dc  sw          $zero, 0x6DC($s1)
    ctx->pc = 0x1ac920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 0));
label_1ac924:
    // 0x1ac924: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ac924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1ac928:
    // 0x1ac928: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ac928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
label_1ac92c:
    // 0x1ac92c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ac930:
    if (ctx->pc == 0x1AC930u) {
        ctx->pc = 0x1AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC92Cu;
        // 0x1ac930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC934u;
        goto label_1ac934;
    }
    ctx->pc = 0x1AC92Cu;
    {
        const bool branch_taken_0x1ac92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC92Cu;
        // 0x1ac930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac92c) {
            ctx->pc = 0x1AC954u;
            goto label_1ac954;
        }
    }
    ctx->pc = 0x1AC934u;
label_1ac934:
    // 0x1ac934: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ac934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1ac938:
    // 0x1ac938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac93c:
    // 0x1ac93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac940:
    // 0x1ac940: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ac940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ac944:
    // 0x1ac944: 0xc063e08  jal         func_18F820
label_1ac948:
    if (ctx->pc == 0x1AC948u) {
        ctx->pc = 0x1AC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC944u;
        // 0x1ac948: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC94Cu;
        goto label_1ac94c;
    }
    ctx->pc = 0x1AC944u;
    SET_GPR_U32(ctx, 31, 0x1AC94Cu);
    ctx->pc = 0x1AC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC944u;
    // 0x1ac948: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC944u, 0x1AC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC94Cu;
label_1ac94c:
    // 0x1ac94c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac950:
    if (ctx->pc == 0x1AC950u) {
        ctx->pc = 0x1AC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC94Cu;
        // 0x1ac950: 0x922306d9  lbu         $v1, 0x6D9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1753)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC954u;
        goto label_1ac954;
    }
    ctx->pc = 0x1AC94Cu;
    {
        const bool branch_taken_0x1ac94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC94Cu;
        // 0x1ac950: 0x922306d9  lbu         $v1, 0x6D9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1753)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac94c) {
            ctx->pc = 0x1AC960u;
            goto label_1ac960;
        }
    }
    ctx->pc = 0x1AC954u;
label_1ac954:
    // 0x1ac954: 0xc063e08  jal         func_18F820
label_1ac958:
    if (ctx->pc == 0x1AC958u) {
        ctx->pc = 0x1AC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC954u;
        // 0x1ac958: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC95Cu;
        goto label_1ac95c;
    }
    ctx->pc = 0x1AC954u;
    SET_GPR_U32(ctx, 31, 0x1AC95Cu);
    ctx->pc = 0x1AC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC954u;
    // 0x1ac958: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC954u, 0x1AC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC95Cu;
label_1ac95c:
    // 0x1ac95c: 0x922306d9  lbu         $v1, 0x6D9($s1)
    ctx->pc = 0x1ac95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1753)));
label_1ac960:
    // 0x1ac960: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1ac964:
    if (ctx->pc == 0x1AC964u) {
        ctx->pc = 0x1AC968u;
        goto label_1ac968;
    }
    ctx->pc = 0x1AC960u;
    {
        const bool branch_taken_0x1ac960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac960) {
            ctx->pc = 0x1AC994u;
            goto label_1ac994;
        }
    }
    ctx->pc = 0x1AC968u;
label_1ac968:
    // 0x1ac968: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac96c:
    // 0x1ac96c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ac96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac970:
    // 0x1ac970: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ac970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1ac974:
    // 0x1ac974: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ac978:
    // 0x1ac978: 0x8e25069c  lw          $a1, 0x69C($s1)
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_1ac97c:
    // 0x1ac97c: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1ac97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ac980:
    // 0x1ac980: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac984:
    // 0x1ac984: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1ac984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1ac988:
    // 0x1ac988: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1ac988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_1ac98c:
    // 0x1ac98c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac990:
    if (ctx->pc == 0x1AC990u) {
        ctx->pc = 0x1AC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC98Cu;
        // 0x1ac990: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC994u;
        goto label_1ac994;
    }
    ctx->pc = 0x1AC98Cu;
    {
        const bool branch_taken_0x1ac98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC98Cu;
        // 0x1ac990: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac98c) {
            ctx->pc = 0x1AC99Cu;
            goto label_1ac99c;
        }
    }
    ctx->pc = 0x1AC994u;
label_1ac994:
    // 0x1ac994: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac998:
    // 0x1ac998: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ac998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ac99c:
    // 0x1ac99c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ac99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac9a0:
    // 0x1ac9a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ac9a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac9a4:
    // 0x1ac9a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ac9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac9a8:
    // 0x1ac9a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ac9a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac9ac:
    // 0x1ac9ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ac9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac9b0:
    // 0x1ac9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac9b4:
    // 0x1ac9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ac9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac9b8:
    // 0x1ac9b8: 0x3e00008  jr          $ra
label_1ac9bc:
    if (ctx->pc == 0x1AC9BCu) {
        ctx->pc = 0x1AC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9B8u;
        // 0x1ac9bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9C0u;
        goto label_fallthrough_0x1ac9b8;
    }
    ctx->pc = 0x1AC9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9B8u;
        // 0x1ac9bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac9b8:
    ctx->pc = 0x1AC9C0u;
}
